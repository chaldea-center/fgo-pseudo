void __fastcall StatusEffectPosOverwriteEntity___ctor(StatusEffectPosOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCDFC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FCDFC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StatusEffectPosOverwriteEntity__CreatePK(
        int32_t statusEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  if ( (byte_49FCDFB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&svtId);
    byte_49FCDFB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           statusEffectId,
           svtId,
           svtLimitCount,
           (const MethodInfo_2E37AA0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StatusEffectPosOverwriteEntity__CreatePrimaryKey(
        StatusEffectPosOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return StatusEffectPosOverwriteEntity__CreatePK(
           this->fields.statusEffectId,
           this->fields.svtId,
           this->fields.svtLimitCount,
           v2);
}


UnityEngine_Vector3_o __fastcall StatusEffectPosOverwriteEntity__GetOffset(
        StatusEffectPosOverwriteEntity_o *this,
        bool isFlip,
        const MethodInfo *method)
{
  unsigned __int64 v3; // d1
  float offsetX; // s0
  float v5; // s0
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = vdiv_f32(vcvt_f32_s32(*(int32x2_t *)&this->fields.offsetY), vdup_n_s32(0x447A0000u)).n64_u64[0];
  offsetX = -(float)this->fields.offsetX;
  if ( !isFlip )
    offsetX = (float)this->fields.offsetX;
  v5 = offsetX / 1000.0;
  v6 = *((float *)&v3 + 1);
  result.fields.y = *(float *)&v3;
  result.fields.z = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector3_o __fastcall StatusEffectPosOverwriteEntity__GetRotation(
        StatusEffectPosOverwriteEntity_o *this,
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


UnityEngine_Vector3_o __fastcall StatusEffectPosOverwriteEntity__GetScale(
        StatusEffectPosOverwriteEntity_o *this,
        const MethodInfo *method)
{
  unsigned __int64 v2; // d0
  float v3; // s2
  float v4; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = vdiv_f32(vcvt_f32_s32(*(int32x2_t *)&this->fields.scaleX), vdup_n_s32(0x447A0000u)).n64_u64[0];
  v3 = (float)this->fields.scaleZ / 1000.0;
  v4 = *((float *)&v2 + 1);
  result.fields.x = *(float *)&v2;
  result.fields.z = v3;
  result.fields.y = v4;
  return result;
}