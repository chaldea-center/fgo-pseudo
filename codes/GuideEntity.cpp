void __fastcall GuideEntity___ctor(GuideEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188F33 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188F33 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GuideEntity__CreatePK(int32_t guideType, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4188F32 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4188F32 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           guideType,
           priority,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GuideEntity__CreatePrimaryKey(GuideEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GuideEntity__CreatePK(this->fields.guideType, this->fields.priority, v2);
}