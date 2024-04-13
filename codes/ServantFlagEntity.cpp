void __fastcall ServantFlagEntity___ctor(ServantFlagEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAD89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EAD89 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantFlagEntity__CreatePK(int32_t svtId, int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EAD88 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, flagId, (_DWORD)method, v3);
    byte_42EAD88 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           flagId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantFlagEntity__CreatePrimaryKey(ServantFlagEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantFlagEntity__CreatePK(this->fields.svtId, this->fields.flagId, v2);
}