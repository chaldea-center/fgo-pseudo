void __fastcall BoxGachaTalkEntity___ctor(BoxGachaTalkEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B17DC & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B17DC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BoxGachaTalkEntity__CreatePK(
        int32_t id,
        int32_t guideImageId,
        int32_t no,
        const MethodInfo *method)
{
  if ( (byte_42B17DB & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B17DB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           guideImageId,
           no,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BoxGachaTalkEntity__CreatePrimaryKey(BoxGachaTalkEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BoxGachaTalkEntity__CreatePK(this->fields.id, this->fields.guideImageId, this->fields.no, v2);
}