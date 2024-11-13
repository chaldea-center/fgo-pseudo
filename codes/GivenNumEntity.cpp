void __fastcall GivenNumEntity___ctor(GivenNumEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B164DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B164DD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GivenNumEntity__CreatePK(int32_t itemId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B164DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int___, method, v2);
    byte_4B164DC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           itemId,
           (const MethodInfo_2F10D48 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall GivenNumEntity__CreatePrimaryKey(GivenNumEntity_o *this, const MethodInfo *method)
{
  return GivenNumEntity__CreatePK(this->fields.itemId, method);
}


int32_t __fastcall GivenNumEntity__GetItemGivenNum(GivenNumEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


int64_t __fastcall GivenNumEntity__GetItemId(GivenNumEntity_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}