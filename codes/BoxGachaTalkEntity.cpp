void __fastcall BoxGachaTalkEntity___ctor(BoxGachaTalkEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE72 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AE72 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BoxGachaTalkEntity__CreatePK(
        int32_t id,
        int32_t guideImageId,
        int32_t no,
        const MethodInfo *method)
{
  if ( (byte_4A5AE71 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5AE71 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           guideImageId,
           no,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BoxGachaTalkEntity__CreatePrimaryKey(BoxGachaTalkEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BoxGachaTalkEntity__CreatePK(this->fields.id, this->fields.guideImageId, this->fields.no, v2);
}