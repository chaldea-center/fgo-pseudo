void ServantTreasureDeviceDamageEntity___ctor(ServantTreasureDeviceDamageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C577F7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C577F7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTreasureDeviceDamageEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  if ( (byte_4C577F6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C577F6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           voicePrefix,
           (const MethodInfo_30F7BF8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantTreasureDeviceDamageEntity__CreatePrimaryKey(
        ServantTreasureDeviceDamageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantTreasureDeviceDamageEntity__CreatePK(this->fields.svtId, this->fields.voicePrefix, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantTreasureDeviceDamageEntity__getWeight(
        ServantTreasureDeviceDamageEntity_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t result; // w0
  struct System_Int32_array *voiceWeights; // x8
  int32_t max_length; // w9

  result = 10;
  if ( (idx & 0x80000000) == 0 )
  {
    voiceWeights = this->fields.voiceWeights;
    if ( voiceWeights )
    {
      max_length = voiceWeights->max_length;
      if ( max_length <= idx )
      {
        return 10;
      }
      else
      {
        if ( max_length <= (unsigned int)idx )
          sub_1C3E7C8(10, *(_QWORD *)&idx);
        return voiceWeights->m_Items[idx];
      }
    }
  }
  return result;
}