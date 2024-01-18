void __fastcall BoxGachaTalkEntity___ctor(BoxGachaTalkEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189705 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189705 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkEntity__CreatePK(
        int32_t id,
        int32_t guideImageId,
        int32_t no,
        const MethodInfo *method)
{
  if ( (byte_4189704 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&guideImageId);
    byte_4189704 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           guideImageId,
           no,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BoxGachaTalkEntity__CreatePrimaryKey(BoxGachaTalkEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BoxGachaTalkEntity__CreatePK(this->fields.id, this->fields.guideImageId, this->fields.no, v2);
}