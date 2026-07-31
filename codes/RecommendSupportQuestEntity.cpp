void RecommendSupportQuestEntity___ctor(RecommendSupportQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938EC9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938EC9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RecommendSupportQuestEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_5938EC8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938EC8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *RecommendSupportQuestEntity__CreatePrimaryKey(
        RecommendSupportQuestEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return RecommendSupportQuestEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}