void __fastcall ServantTreasureDeviceDamageEntity___ctor(
        ServantTreasureDeviceDamageEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBF25 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBF25 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantTreasureDeviceDamageEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EBF24 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, voicePrefix, (_DWORD)method, v3);
    byte_42EBF24 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           voicePrefix,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantTreasureDeviceDamageEntity__CreatePrimaryKey(
        ServantTreasureDeviceDamageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantTreasureDeviceDamageEntity__CreatePK(this->fields.svtId, this->fields.voicePrefix, v2);
}


int32_t __fastcall ServantTreasureDeviceDamageEntity__getWeight(
        ServantTreasureDeviceDamageEntity_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t result; // w0
  struct System_Int32_array *voiceWeights; // x8
  int32_t max_length; // w9
  __int64 v7; // x0

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
        {
          v7 = sub_B5D6C8(10LL);
          sub_B5D668(v7, 0LL);
        }
        return voiceWeights->m_Items[idx + 1];
      }
    }
  }
  return result;
}