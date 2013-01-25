/** @addtogroup ax12 */
//@{
/** @file
 * @brief AX-12 memory addresses
 */
#ifndef AX12_ADDRESS_H_
#define AX12_ADDRESS_H_


/// AX-12 memory addresses
typedef enum {
  AX12_ADDR_MODEL_NUMBER_L = 0x00,
  AX12_ADDR_MODEL_NUMBER_H,
  AX12_ADDR_FIRMWARE_VERSION,
  AX12_ADDR_ID,
  AX12_ADDR_BAUD_RATE,
  AX12_ADDR_DELAY_TIME,
  AX12_ADDR_CW_ANGLE_LIMIT_L,
  AX12_ADDR_CW_ANGLE_LIMIT_H,
  AX12_ADDR_CCW_ANGLE_LIMIT_L,
  AX12_ADDR_CCW_ANGLE_LIMIT_H,
  AX12_ADDR_RESERVED_1,
  AX12_ADDR_HIGHEST_LIMIT_TEMP,
  AX12_ADDR_LOWEST_LIMIT_VOLTAGE,
  AX12_ADDR_HIGHEST_LIMIT_VOLTAGE,
  AX12_ADDR_MAX_TORQUE_L,
  AX12_ADDR_MAX_TORQUE_H,
  AX12_ADDR_STATUS_RETURN_LEVEL,
  AX12_ADDR_ALARM_LED,
  AX12_ADDR_ALARM_SHUTDOWN,
  AX12_ADDR_RESERVED_2,
  AX12_ADDR_DOWN_CALIBRATION_L,
  AX12_ADDR_DOWN_CALIBRATION_H,
  AX12_ADDR_UP_CALIBRATION_L,
  AX12_ADDR_UP_CALIBRATION_H,
  AX12_ADDR_TORQUE_ENABLE,
  AX12_ADDR_LED,
  AX12_ADDR_CW_COMPLIANCE_MARGIN,
  AX12_ADDR_CCW_COMPLIANCE_MARGIN,
  AX12_ADDR_CW_COMPLIANCE_SLOPE,
  AX12_ADDR_CCW_COMPLIANCE_SLOPE,
  AX12_ADDR_GOAL_POSITION_L,
  AX12_ADDR_GOAL_POSITION_H,
  AX12_ADDR_MOVING_SPEED_L,
  AX12_ADDR_MOVING_SPEED_H,
  AX12_ADDR_TORQUE_LIMIT_L,
  AX12_ADDR_TORQUE_LIMIT_H,
  AX12_ADDR_PRESENT_POSITION_L,
  AX12_ADDR_PRESENT_POSITION_H,
  AX12_ADDR_PRESENT_SPEED_L,
  AX12_ADDR_PRESENT_SPEED_H,
  AX12_ADDR_PRESENT_LOAD_L,
  AX12_ADDR_PRESENT_LOAD_H,
  AX12_ADDR_PRESENT_VOLTAGE,
  AX12_ADDR_PRESENT_TEMP,
  AX12_ADDR_REGISTERED_INSTR,
  AX12_ADDR_RESERVED_3,
  AX12_ADDR_MOVING,
  AX12_ADDR_LOCK,
  AX12_ADDR_PUNCH_L,
  AX12_ADDR_PUNCH_H

} ax12_addr_t;


#endif
//@}