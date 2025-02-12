void __fastcall ServantTransformEntity___ctor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8C1C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC8C1C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantTransformEntity__CreatePK(
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4BC8C1B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&befDispLimitCount);
    byte_4BC8C1B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           befSvtId,
           befDispLimitCount,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantTransformEntity__CreatePrimaryKey(
        ServantTransformEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantTransformEntity__CreatePK(this->fields.befSvtId, this->fields.befDispLimitCount, v2);
}