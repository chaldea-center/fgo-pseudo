void __fastcall UserGachaDrawLogEntity___ctor(UserGachaDrawLogEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E710E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E710E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGachaDrawLogEntity__CreatePK(
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  if ( (byte_42E710D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__long___, idx, drawAt, method);
    byte_42E710D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__long_(
           gachaId,
           idx,
           drawAt,
           (const MethodInfo_1AE34E8 *)Method_DataEntityBase_CreateMultiplePK_int__int__long___);
}


System_String_o *__fastcall UserGachaDrawLogEntity__CreatePrimaryKey(
        UserGachaDrawLogEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserGachaDrawLogEntity__CreatePK(this->fields.gachaId, this->fields.idx, this->fields.drawAt, v2);
}