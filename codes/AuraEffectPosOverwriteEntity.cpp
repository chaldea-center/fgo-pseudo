void AuraEffectPosOverwriteEntity___ctor(AuraEffectPosOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C442 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C442 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *AuraEffectPosOverwriteEntity__CreatePK(
        int32_t auraEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4D2C441 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D2C441 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           auraEffectId,
           svtId,
           svtLimitCount,
           (const MethodInfo_319A74C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *AuraEffectPosOverwriteEntity__CreatePrimaryKey(
        AuraEffectPosOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return AuraEffectPosOverwriteEntity__CreatePK(
           this->fields.auraEffectId,
           this->fields.svtId,
           this->fields.svtLimitCount,
           v2);
}


UnityEngine_Vector3_o AuraEffectPosOverwriteEntity__GetOffset(
        AuraEffectPosOverwriteEntity_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v2; // d0
  float v3; // s2
  float v4; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = vdiv_f32(vcvt_f32_s32(*(int32x2_t *)&this->fields.offsetX), vdup_n_s32(0x447A0000u)).n64_u64[0];
  v3 = (float)this->fields.offsetZ / 1000.0;
  v4 = *((float *)&v2 + 1);
  result.fields.x = *(float *)&v2;
  result.fields.z = v3;
  result.fields.y = v4;
  return result;
}


UnityEngine_Vector3_o AuraEffectPosOverwriteEntity__GetRotation(
        AuraEffectPosOverwriteEntity_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v2; // d0
  float v3; // s2
  float v4; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = vdiv_f32(vcvt_f32_s32(*(int32x2_t *)&this->fields.rotationX), vdup_n_s32(0x447A0000u)).n64_u64[0];
  v3 = (float)this->fields.rotationZ / 1000.0;
  v4 = *((float *)&v2 + 1);
  result.fields.x = *(float *)&v2;
  result.fields.z = v3;
  result.fields.y = v4;
  return result;
}


bool AuraEffectPosOverwriteEntity__IsUseNodePositionOnly(
        AuraEffectPosOverwriteEntity_o *this,
        bool defVal,
        const MethodInfo *method)
{
  int32_t IntValue; // w0
  bool v6; // w8

  if ( (byte_4D2C440 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24730/*"useNodePositionOnly"*/);
    byte_4D2C440 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24730/*"useNodePositionOnly"*/, -1, 0);
  v6 = IntValue == 1;
  if ( IntValue < 0 )
    return defVal;
  return v6;
}