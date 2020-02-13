Feature: Trains transport passengers

  Scenario: Passengers can board and deboard the train
    Given a train with 120 seats
    And the train is at a station
    When 50 passengers board the train
    And 14 passengers leave the train
    Then there are 36 passengers on the train

  Scenario: The passengers can see which station they are in
    Given a train with 120 seats
    And the train is at station "Friedrichsfelde (Ost)"
    When a passenger requests the current station
    Then "Station: Friedrichsfelde (Ost)" is displayed
