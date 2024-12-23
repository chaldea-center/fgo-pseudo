void __fastcall ServantExpEntity___ctor(ServantExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B6730F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B6730F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantExpEntity__CreatePK(int32_t type, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4B6730E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4B6730E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           type,
           lv,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantExpEntity__CreatePrimaryKey(ServantExpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExpEntity__CreatePK(this->fields.type, this->fields.lv, v2);
}