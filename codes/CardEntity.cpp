void __fastcall CardEntity___ctor(CardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A0A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A0A7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CardEntity__CreatePK(int32_t id, int32_t num, const MethodInfo *method)
{
  if ( (byte_418A0A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&num);
    byte_418A0A6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           num,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CardEntity__CreatePrimaryKey(CardEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CardEntity__CreatePK(this->fields.id, this->fields.num, v2);
}