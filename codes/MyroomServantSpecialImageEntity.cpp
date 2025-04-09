void __fastcall MyroomServantSpecialImageEntity___ctor(
        MyroomServantSpecialImageEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BC034 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BC034 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MyroomServantSpecialImageEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_49BC033 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&num);
    byte_49BC033 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           num,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MyroomServantSpecialImageEntity__CreatePrimaryKey(
        MyroomServantSpecialImageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MyroomServantSpecialImageEntity__CreatePK(this->fields.svtId, this->fields.num, v2);
}