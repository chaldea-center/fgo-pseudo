void __fastcall WarBoardCommonReleaseEntity___ctor(WarBoardCommonReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6E64 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6E64 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardCommonReleaseEntity__CreatePK(
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4AB6E63 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4AB6E63 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardCommonReleaseEntity__CreatePrimaryKey(
        WarBoardCommonReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardCommonReleaseEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}