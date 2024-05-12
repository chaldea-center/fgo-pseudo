void __fastcall ServantOverwriteEntity___ctor(ServantOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D0E3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D0E3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantOverwriteEntity__CreatePK(
        int32_t svtId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_438D0E2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438D0E2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           type,
           priority,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantOverwriteEntity__CreatePrimaryKey(
        ServantOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantOverwriteEntity__CreatePK(this->fields.svtId, this->fields.type, this->fields.priority, v2);
}


int32_t __fastcall ServantOverwriteEntity__GetOverwriteTreasureDeviceId(
        ServantOverwriteEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_438D0E1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21829/*"overwriteTreasureDeviceId"*/);
    byte_438D0E1 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.overwriteValue,
           (System_String_o *)StringLiteral_21829/*"overwriteTreasureDeviceId"*/,
           defaultValue,
           0LL);
}