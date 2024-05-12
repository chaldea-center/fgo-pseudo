void __fastcall ServantCommandCodeUnlockEntity___ctor(ServantCommandCodeUnlockEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C754 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438C754 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCommandCodeUnlockEntity__CreatePK(
        int32_t svtId,
        int32_t cardIdx,
        const MethodInfo *method)
{
  if ( (byte_438C753 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438C753 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardIdx,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantCommandCodeUnlockEntity__CreatePrimaryKey(
        ServantCommandCodeUnlockEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCommandCodeUnlockEntity__CreatePK(this->fields.svtId, this->fields.cardIdx, v2);
}