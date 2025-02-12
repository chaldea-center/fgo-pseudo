void __fastcall EventCombineEntity___ctor(EventCombineEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC79B8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC79B8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCombineEntity__CreatePK(int32_t id, int32_t target, const MethodInfo *method)
{
  if ( (byte_4BC79B7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&target);
    byte_4BC79B7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           target,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventCombineEntity__CreatePrimaryKey(EventCombineEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventCombineEntity__CreatePK(this->fields.id, this->fields.target, v2);
}