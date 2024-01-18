void __fastcall EventCombineEntity___ctor(EventCombineEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A2FD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A2FD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCombineEntity__CreatePK(int32_t id, int32_t target, const MethodInfo *method)
{
  if ( (byte_418A2FC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&target);
    byte_418A2FC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           target,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventCombineEntity__CreatePrimaryKey(EventCombineEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventCombineEntity__CreatePK(this->fields.id, this->fields.target, v2);
}