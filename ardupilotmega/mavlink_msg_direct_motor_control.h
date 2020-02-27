#pragma once
// MESSAGE DIRECT_MOTOR_CONTROL PACKING

#define MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL 11033

MAVPACKED(
typedef struct __mavlink_direct_motor_control_t {
 uint16_t motor1; /*<  Speed of motor 1*/
 uint16_t motor2; /*<  Speed of motor 2*/
 uint16_t motor3; /*<  Speed of motor 3*/
 uint16_t motor4; /*<  Speed of motor 4*/
 uint16_t motor5; /*<  Speed of motor 5*/
 uint16_t motor6; /*<  Speed of motor 6*/
 uint16_t motor7; /*<  Speed of motor 7*/
 uint16_t motor8; /*<  Speed of motor 8*/
}) mavlink_direct_motor_control_t;

#define MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN 16
#define MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_MIN_LEN 16
#define MAVLINK_MSG_ID_11033_LEN 16
#define MAVLINK_MSG_ID_11033_MIN_LEN 16

#define MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_CRC 185
#define MAVLINK_MSG_ID_11033_CRC 185



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DIRECT_MOTOR_CONTROL { \
    11033, \
    "DIRECT_MOTOR_CONTROL", \
    8, \
    {  { "motor1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_direct_motor_control_t, motor1) }, \
         { "motor2", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_direct_motor_control_t, motor2) }, \
         { "motor3", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_direct_motor_control_t, motor3) }, \
         { "motor4", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_direct_motor_control_t, motor4) }, \
         { "motor5", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_direct_motor_control_t, motor5) }, \
         { "motor6", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_direct_motor_control_t, motor6) }, \
         { "motor7", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_direct_motor_control_t, motor7) }, \
         { "motor8", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_direct_motor_control_t, motor8) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DIRECT_MOTOR_CONTROL { \
    "DIRECT_MOTOR_CONTROL", \
    8, \
    {  { "motor1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_direct_motor_control_t, motor1) }, \
         { "motor2", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_direct_motor_control_t, motor2) }, \
         { "motor3", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_direct_motor_control_t, motor3) }, \
         { "motor4", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_direct_motor_control_t, motor4) }, \
         { "motor5", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_direct_motor_control_t, motor5) }, \
         { "motor6", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_direct_motor_control_t, motor6) }, \
         { "motor7", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_direct_motor_control_t, motor7) }, \
         { "motor8", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_direct_motor_control_t, motor8) }, \
         } \
}
#endif

/**
 * @brief Pack a direct_motor_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param motor1  Speed of motor 1
 * @param motor2  Speed of motor 2
 * @param motor3  Speed of motor 3
 * @param motor4  Speed of motor 4
 * @param motor5  Speed of motor 5
 * @param motor6  Speed of motor 6
 * @param motor7  Speed of motor 7
 * @param motor8  Speed of motor 8
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_direct_motor_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t motor1, uint16_t motor2, uint16_t motor3, uint16_t motor4, uint16_t motor5, uint16_t motor6, uint16_t motor7, uint16_t motor8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN];
    _mav_put_uint16_t(buf, 0, motor1);
    _mav_put_uint16_t(buf, 2, motor2);
    _mav_put_uint16_t(buf, 4, motor3);
    _mav_put_uint16_t(buf, 6, motor4);
    _mav_put_uint16_t(buf, 8, motor5);
    _mav_put_uint16_t(buf, 10, motor6);
    _mav_put_uint16_t(buf, 12, motor7);
    _mav_put_uint16_t(buf, 14, motor8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN);
#else
    mavlink_direct_motor_control_t packet;
    packet.motor1 = motor1;
    packet.motor2 = motor2;
    packet.motor3 = motor3;
    packet.motor4 = motor4;
    packet.motor5 = motor5;
    packet.motor6 = motor6;
    packet.motor7 = motor7;
    packet.motor8 = motor8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_CRC);
}

/**
 * @brief Pack a direct_motor_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param motor1  Speed of motor 1
 * @param motor2  Speed of motor 2
 * @param motor3  Speed of motor 3
 * @param motor4  Speed of motor 4
 * @param motor5  Speed of motor 5
 * @param motor6  Speed of motor 6
 * @param motor7  Speed of motor 7
 * @param motor8  Speed of motor 8
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_direct_motor_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t motor1,uint16_t motor2,uint16_t motor3,uint16_t motor4,uint16_t motor5,uint16_t motor6,uint16_t motor7,uint16_t motor8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN];
    _mav_put_uint16_t(buf, 0, motor1);
    _mav_put_uint16_t(buf, 2, motor2);
    _mav_put_uint16_t(buf, 4, motor3);
    _mav_put_uint16_t(buf, 6, motor4);
    _mav_put_uint16_t(buf, 8, motor5);
    _mav_put_uint16_t(buf, 10, motor6);
    _mav_put_uint16_t(buf, 12, motor7);
    _mav_put_uint16_t(buf, 14, motor8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN);
#else
    mavlink_direct_motor_control_t packet;
    packet.motor1 = motor1;
    packet.motor2 = motor2;
    packet.motor3 = motor3;
    packet.motor4 = motor4;
    packet.motor5 = motor5;
    packet.motor6 = motor6;
    packet.motor7 = motor7;
    packet.motor8 = motor8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_CRC);
}

/**
 * @brief Encode a direct_motor_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param direct_motor_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_direct_motor_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_direct_motor_control_t* direct_motor_control)
{
    return mavlink_msg_direct_motor_control_pack(system_id, component_id, msg, direct_motor_control->motor1, direct_motor_control->motor2, direct_motor_control->motor3, direct_motor_control->motor4, direct_motor_control->motor5, direct_motor_control->motor6, direct_motor_control->motor7, direct_motor_control->motor8);
}

/**
 * @brief Encode a direct_motor_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param direct_motor_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_direct_motor_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_direct_motor_control_t* direct_motor_control)
{
    return mavlink_msg_direct_motor_control_pack_chan(system_id, component_id, chan, msg, direct_motor_control->motor1, direct_motor_control->motor2, direct_motor_control->motor3, direct_motor_control->motor4, direct_motor_control->motor5, direct_motor_control->motor6, direct_motor_control->motor7, direct_motor_control->motor8);
}

/**
 * @brief Send a direct_motor_control message
 * @param chan MAVLink channel to send the message
 *
 * @param motor1  Speed of motor 1
 * @param motor2  Speed of motor 2
 * @param motor3  Speed of motor 3
 * @param motor4  Speed of motor 4
 * @param motor5  Speed of motor 5
 * @param motor6  Speed of motor 6
 * @param motor7  Speed of motor 7
 * @param motor8  Speed of motor 8
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_direct_motor_control_send(mavlink_channel_t chan, uint16_t motor1, uint16_t motor2, uint16_t motor3, uint16_t motor4, uint16_t motor5, uint16_t motor6, uint16_t motor7, uint16_t motor8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN];
    _mav_put_uint16_t(buf, 0, motor1);
    _mav_put_uint16_t(buf, 2, motor2);
    _mav_put_uint16_t(buf, 4, motor3);
    _mav_put_uint16_t(buf, 6, motor4);
    _mav_put_uint16_t(buf, 8, motor5);
    _mav_put_uint16_t(buf, 10, motor6);
    _mav_put_uint16_t(buf, 12, motor7);
    _mav_put_uint16_t(buf, 14, motor8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL, buf, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_CRC);
#else
    mavlink_direct_motor_control_t packet;
    packet.motor1 = motor1;
    packet.motor2 = motor2;
    packet.motor3 = motor3;
    packet.motor4 = motor4;
    packet.motor5 = motor5;
    packet.motor6 = motor6;
    packet.motor7 = motor7;
    packet.motor8 = motor8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_CRC);
#endif
}

/**
 * @brief Send a direct_motor_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_direct_motor_control_send_struct(mavlink_channel_t chan, const mavlink_direct_motor_control_t* direct_motor_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_direct_motor_control_send(chan, direct_motor_control->motor1, direct_motor_control->motor2, direct_motor_control->motor3, direct_motor_control->motor4, direct_motor_control->motor5, direct_motor_control->motor6, direct_motor_control->motor7, direct_motor_control->motor8);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL, (const char *)direct_motor_control, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_direct_motor_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t motor1, uint16_t motor2, uint16_t motor3, uint16_t motor4, uint16_t motor5, uint16_t motor6, uint16_t motor7, uint16_t motor8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, motor1);
    _mav_put_uint16_t(buf, 2, motor2);
    _mav_put_uint16_t(buf, 4, motor3);
    _mav_put_uint16_t(buf, 6, motor4);
    _mav_put_uint16_t(buf, 8, motor5);
    _mav_put_uint16_t(buf, 10, motor6);
    _mav_put_uint16_t(buf, 12, motor7);
    _mav_put_uint16_t(buf, 14, motor8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL, buf, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_CRC);
#else
    mavlink_direct_motor_control_t *packet = (mavlink_direct_motor_control_t *)msgbuf;
    packet->motor1 = motor1;
    packet->motor2 = motor2;
    packet->motor3 = motor3;
    packet->motor4 = motor4;
    packet->motor5 = motor5;
    packet->motor6 = motor6;
    packet->motor7 = motor7;
    packet->motor8 = motor8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL, (const char *)packet, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE DIRECT_MOTOR_CONTROL UNPACKING


/**
 * @brief Get field motor1 from direct_motor_control message
 *
 * @return  Speed of motor 1
 */
static inline uint16_t mavlink_msg_direct_motor_control_get_motor1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field motor2 from direct_motor_control message
 *
 * @return  Speed of motor 2
 */
static inline uint16_t mavlink_msg_direct_motor_control_get_motor2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field motor3 from direct_motor_control message
 *
 * @return  Speed of motor 3
 */
static inline uint16_t mavlink_msg_direct_motor_control_get_motor3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field motor4 from direct_motor_control message
 *
 * @return  Speed of motor 4
 */
static inline uint16_t mavlink_msg_direct_motor_control_get_motor4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field motor5 from direct_motor_control message
 *
 * @return  Speed of motor 5
 */
static inline uint16_t mavlink_msg_direct_motor_control_get_motor5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field motor6 from direct_motor_control message
 *
 * @return  Speed of motor 6
 */
static inline uint16_t mavlink_msg_direct_motor_control_get_motor6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field motor7 from direct_motor_control message
 *
 * @return  Speed of motor 7
 */
static inline uint16_t mavlink_msg_direct_motor_control_get_motor7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field motor8 from direct_motor_control message
 *
 * @return  Speed of motor 8
 */
static inline uint16_t mavlink_msg_direct_motor_control_get_motor8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Decode a direct_motor_control message into a struct
 *
 * @param msg The message to decode
 * @param direct_motor_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_direct_motor_control_decode(const mavlink_message_t* msg, mavlink_direct_motor_control_t* direct_motor_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    direct_motor_control->motor1 = mavlink_msg_direct_motor_control_get_motor1(msg);
    direct_motor_control->motor2 = mavlink_msg_direct_motor_control_get_motor2(msg);
    direct_motor_control->motor3 = mavlink_msg_direct_motor_control_get_motor3(msg);
    direct_motor_control->motor4 = mavlink_msg_direct_motor_control_get_motor4(msg);
    direct_motor_control->motor5 = mavlink_msg_direct_motor_control_get_motor5(msg);
    direct_motor_control->motor6 = mavlink_msg_direct_motor_control_get_motor6(msg);
    direct_motor_control->motor7 = mavlink_msg_direct_motor_control_get_motor7(msg);
    direct_motor_control->motor8 = mavlink_msg_direct_motor_control_get_motor8(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN;
        memset(direct_motor_control, 0, MAVLINK_MSG_ID_DIRECT_MOTOR_CONTROL_LEN);
    memcpy(direct_motor_control, _MAV_PAYLOAD(msg), len);
#endif
}
