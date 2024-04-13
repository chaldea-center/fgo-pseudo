void __fastcall BannerAddEntity___ctor(BannerAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6616 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6616 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BannerAddEntity__CreatePK(
        int32_t bannerId,
        int32_t dispType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42E6615 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, dispType, priority, method);
    byte_42E6615 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           bannerId,
           dispType,
           priority,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BannerAddEntity__CreatePrimaryKey(BannerAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BannerAddEntity__CreatePK(this->fields.bannerId, this->fields.dispType, this->fields.priority, v2);
}