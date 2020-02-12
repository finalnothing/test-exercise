# frozen_string_literal: true

module TMS
  ##
  # A station is an operational point at which passengers can board and leave
  # the train. Multiple trains can be at the same station simultaneously
  class Station
    ##
    # @return [String] the station's name, that is used on passenger information
    #   systems
    attr_reader :name

    ##
    # Creates a new station
    # @param [String] name the station's name (e.g. 'Berlin Hbf.')
    def initialize(name:)
      @name = name
      @trains = []
    end

    ##
    # Adds the *train* to the list of trains that are currently at the station
    # @param [TMS::Train] train the train to add
    def add_train(train)
      @trains << train unless @trains.include?(train)
    end

    ##
    # Removes the *train* from the list of trains currently at the station
    # @param [TMS::Train] train the train to remove
    def remove_train(train)
      @trains.delete_if do |train_in_station|
        (train_in_station == train)
      end
    end

    ##
    # Lists all trains that are currently at the station
    # @return [Array<TMS::Train>] the list of trains
    def current_trains
      @trains.dup
    end

    ##
    # Counts all trains that are currently at the station
    # @return [Integer] the number of trains at the station
    def count_trains
      @trains.size
    end

    ##
    # Returns a human-readable list of all trains at the station
    # @return [Array<String>] list of train ids
    def display_trains
      @trains.map do |train|
        train.id.to_s
      end
    end
  end
end
