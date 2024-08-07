void __fastcall ServantLimitImageEntity___ctor(ServantLimitImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF27D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF27D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitImageEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FF27C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&limitCount);
    byte_49FF27C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           limitCount,
           priority,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantLimitImageEntity__CreatePrimaryKey(
        ServantLimitImageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantLimitImageEntity__CreatePK(this->fields.svtId, this->fields.limitCount, this->fields.priority, v2);
}