void __fastcall ServantOverwriteEntity___ctor(ServantOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B907 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B907 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantOverwriteEntity__CreatePK(
        int32_t svtId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5B906 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B906 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           type,
           priority,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_4A5B905 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22415/*"overwriteTreasureDeviceId"*/);
    byte_4A5B905 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.overwriteValue,
           (System_String_o *)StringLiteral_22415/*"overwriteTreasureDeviceId"*/,
           defaultValue,
           0LL);
}