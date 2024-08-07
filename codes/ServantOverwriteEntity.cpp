void __fastcall ServantOverwriteEntity___ctor(ServantOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF2B1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF2B1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantOverwriteEntity__CreatePK(
        int32_t svtId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FF2B0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_49FF2B0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           type,
           priority,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantOverwriteEntity__CreatePrimaryKey(
        ServantOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantOverwriteEntity__CreatePK(this->fields.svtId, this->fields.type, this->fields.priority, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantOverwriteEntity__GetOverwriteTreasureDeviceId(
        ServantOverwriteEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_49FF2AF & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22327/*"overwriteTreasureDeviceId"*/, *(_QWORD *)&defaultValue);
    byte_49FF2AF = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.overwriteValue,
           (System_String_o *)StringLiteral_22327/*"overwriteTreasureDeviceId"*/,
           defaultValue,
           0LL);
}