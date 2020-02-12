# frozen_string_literal: true

module TMS
  ##
  # A train drives between stations and carries passengers
  class Train
    ##
    # @return [String] the train's id
    attr_reader :id

    ##
    # Creates a new train
    # @param [#to_s] id the train's id
    # @param [Integer] size the number of seats
    def initialize(id:, size: 100)
      @id = id.to_s
      @passengers = 0
      @size = size
    end

    ##
    # Adds passengers to the train. This can only happen while the train is at
    # a station. Passengers that would exceed the train's seat capacity cannot
    # enter the train.
    # @param [Integer] passengers number of passengers that board the train
    def board(passengers)
      return if @station.nil?
      return if passengers.negative?

      @passengers += passengers
      @passengers = @size if @passengers > @size
    end

    ##
    # Removes passengers from the train. This can only happen while the train is
    # at a station.
    # @param [Integer] passengers number of passengers that unboard the train
    def unboard(passengers)
      return if @station.nil?
      return if passengers.negative?

      @passengers -= passengers
      @passengers = 0 if @passengers.negative?
    end

    ##
    # Registers the train at a station
    # @param [TMS::Station] station the station to enter
    def enter_station(station)
      @station = station
      station.add_train(self)
    end

    ##
    # Deregisters the train at the station that the train is currently at
    def leave_station
      return if @station.nil?

      @station.remove_train(self)
      @station = nil
    end

    ##
    # Counts the passengers that are currently on the train
    # @return [Integer] the passenger count
    def count_passengers
      @passengers
    end

    ##
    # Displays the station that the train is currently at for the passengers
    # @return [String] the text to display
    def passenger_display
      return "Now entering: #{@station.name}" if @station

      'Currently driving...'
    end
  end
end
