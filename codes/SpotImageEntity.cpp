void __fastcall SpotImageEntity___ctor(SpotImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB9AC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB9AC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SpotImageEntity__CreatePK(int32_t spotId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_49BB9AB & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_49BB9AB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           spotId,
           priority,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SpotImageEntity__CreatePrimaryKey(SpotImageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SpotImageEntity__CreatePK(this->fields.spotId, this->fields.priority, v2);
}