void __fastcall AuraEffectPosOverwriteEntity___ctor(AuraEffectPosOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FBF3C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FBF3C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AuraEffectPosOverwriteEntity__CreatePK(
        int32_t auraEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  if ( (byte_40FBF3B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&svtId);
    byte_40FBF3B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           auraEffectId,
           svtId,
           svtLimitCount,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall AuraEffectPosOverwriteEntity__CreatePrimaryKey(
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


UnityEngine_Vector3_o __fastcall AuraEffectPosOverwriteEntity__GetOffset(
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


UnityEngine_Vector3_o __fastcall AuraEffectPosOverwriteEntity__GetRotation(
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