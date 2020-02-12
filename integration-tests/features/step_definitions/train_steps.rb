# frozen_string_literal: true

require 'tms/train'

Given('a train with {int} seats') do |seats|
  @train = TMS::Train.new(id: '12345', size: seats)
end

When('{int} passengers board the train') do |passengers|
  @train.board(passengers)
end

And('{int} passengers leave the train') do |passengers|
  @train.unboard(passengers)
end

Then('there are {int} passengers on the train') do |passengers|
  assert_equal(@train.count_passengers, passengers)
end
