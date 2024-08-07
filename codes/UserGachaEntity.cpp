void __fastcall UserGachaEntity___ctor(UserGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF805 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF805 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGachaEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_49FF804 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&gachaId);
    byte_49FF804 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_2E3A00C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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