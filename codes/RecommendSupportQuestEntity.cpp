void __fastcall RecommendSupportQuestEntity___ctor(RecommendSupportQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB633F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB633F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RecommendSupportQuestEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4AB633E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase);
    byte_4AB633E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall RecommendSupportQuestEntity__CreatePrimaryKey(
        RecommendSupportQuestEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RecommendSupportQuestEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}