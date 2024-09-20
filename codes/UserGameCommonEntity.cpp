void __fastcall UserGameCommonEntity___ctor(UserGameCommonEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C24F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C24F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGameCommonEntity__CreatePK(int64_t userId, int32_t no, const MethodInfo *method)
{
  if ( (byte_4A5C24E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4A5C24E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           no,
           (const MethodInfo_2E7DC34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserGameCommonEntity__CreatePrimaryKey(
        UserGameCommonEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGameCommonEntity__CreatePK(this->fields.userId, this->fields.no, v2);
}