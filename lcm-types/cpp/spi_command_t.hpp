/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __spi_command_t_hpp__
#define __spi_command_t_hpp__

#include <lcm/lcm_coretypes.h>



class spi_command_t
{
    public:
        float      q_des_abad[4];

        float      q_des_hip[4];

        // float      q_des_knee[4] = {9, 10, 11, 12};

        // float      qd_des_abad[4] = {13, 14, 15, 16};

        // float      qd_des_hip[4] = {17, 18, 19, 20};

        // float      qd_des_knee[4] = {21, 22, 23, 24};

        // float      kp_abad[4] = {25, 26, 27, 28};

        // float      kp_hip[4] = {29, 30, 31, 32};

        // float      kp_knee[4] = {33, 34, 35, 36};

        // float      kd_abad[4] = {37, 38, 39, 40};

        // float      kd_hip[4] = {41, 42, 43, 44};

        // float      kd_knee[4] = {45, 46, 47, 48};

        // float      tau_abad_ff[4] = {49, 50, 51, 52};

        // float      tau_hip_ff[4] = {53, 54, 55, 56};

        // float      tau_knee_ff[4] = {57, 58, 59, 60};

        // int32_t    flags[4] = {61, 62, 63, 64};

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to read while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "spi_command_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int spi_command_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int spi_command_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int spi_command_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t spi_command_t::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* spi_command_t::getTypeName()
{
    return "spi_command_t";
}

int spi_command_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->q_des_abad[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->q_des_hip[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->q_des_knee[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->qd_des_abad[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->qd_des_hip[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->qd_des_knee[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->kp_abad[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->kp_hip[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->kp_knee[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->kd_abad[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->kd_hip[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->kd_knee[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->tau_abad_ff[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->tau_hip_ff[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->tau_knee_ff[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->flags[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int spi_command_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->q_des_abad[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->q_des_hip[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->q_des_knee[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->qd_des_abad[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->qd_des_hip[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->qd_des_knee[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->kp_abad[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->kp_hip[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->kp_knee[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->kd_abad[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->kd_hip[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->kd_knee[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->tau_abad_ff[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->tau_hip_ff[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->tau_knee_ff[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    // tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->flags[0], 4);
    // if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int spi_command_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __float_encoded_array_size(NULL, 4);
    enc_size += __int32_t_encoded_array_size(NULL, 4);
    return enc_size;
}

uint64_t spi_command_t::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0xecc8eaa6369bc167LL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
