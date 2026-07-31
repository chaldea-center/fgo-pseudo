void WarGroupIgnoreEntity___ctor(WarGroupIgnoreEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939AEC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939AEC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarGroupIgnoreEntity__CreatePK(
        int32_t warGroupId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_5939AEB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5939AEB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warGroupId,
           questId,
           questPhase,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *WarGroupIgnoreEntity__CreatePrimaryKey(WarGroupIgnoreEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarGroupIgnoreEntity__CreatePK(this->fields.warGroupId, this->fields.questId, this->fields.questPhase, v2);
}