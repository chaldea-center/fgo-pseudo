void __fastcall UserGameCommonEntity___ctor(UserGameCommonEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF45 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEF45 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGameCommonEntity__CreatePK(int64_t userId, int32_t no, const MethodInfo *method)
{
  if ( (byte_42AEF44 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42AEF44 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           no,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserGameCommonEntity__CreatePrimaryKey(
        UserGameCommonEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGameCommonEntity__CreatePK(this->fields.userId, this->fields.no, v2);
}