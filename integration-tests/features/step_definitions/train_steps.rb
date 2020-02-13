# frozen_string_literal: true

require 'tms/train'
require 'tms/station'

Given('a train with {int} seats') do |seats|
  @train = TMS::Train.new(id: '12345', size: seats)
end

And('the train is at a station') do
  @station = TMS::Station.new(name: 'Friedrichsfelde (Ost)')
  @train.enter_station(@station)
end

When('{int} passengers board the train') do |passengers|
  @train.board(passengers)
end

And('{int} passengers leave the train') do |passengers|
  @train.unboard(passengers)
end

Then('there are {int} passengers on the train') do |passengers|
  fail if @train.count_passengers != passengers
end


And('the train is at station {string}') do |arg|
  @station = TMS::Station.new(name: arg)
  @train.enter_station(@station)
end

When(/^a passenger requests the current station$/) do
  @text = @train.passenger_display
end

Then('{string} is displayed') do |arg|
  fail if @text != arg
end
