void __fastcall UserGachaEntity___ctor(UserGachaEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7114 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7114 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGachaEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E7113 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int___, gachaId, (_DWORD)method, v3);
    byte_42E7113 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_1AE3148 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserGachaEntity__CreatePrimaryKey(UserGachaEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGachaEntity__CreatePK(this->fields.userId, this->fields.gachaId, v2);
}


bool __fastcall UserGachaEntity__HasStatus(UserGachaEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}