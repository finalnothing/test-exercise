Feature: Trains transport passengers

  Scenario: Passengers can board and deboard the train
    Given a train with 120 seats
    When 50 passengers board the train
    And 14 passengers leave the train
    Then there are 36 passengers on the train
