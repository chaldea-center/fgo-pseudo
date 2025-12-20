void MasterIndividualitySelectEntity___ctor(MasterIndividualitySelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CD6B & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CD6B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MasterIndividualitySelectEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4D2CD6A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D2CD6A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           priority,
           (const MethodInfo_319A74C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MasterIndividualitySelectEntity__CreatePrimaryKey(
        MasterIndividualitySelectEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MasterIndividualitySelectEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.priority, v2);
}