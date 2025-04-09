void __fastcall CombineCostumeEntity___ctor(CombineCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BAC13 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BAC13 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineCostumeEntity__CreatePK(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  if ( (byte_49BAC12 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&costumeId);
    byte_49BAC12 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           costumeId,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineCostumeEntity__CreatePrimaryKey(
        CombineCostumeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineCostumeEntity__CreatePK(this->fields.svtId, this->fields.costumeId, v2);
}