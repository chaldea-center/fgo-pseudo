void BattleMessageEntity___ctor(BattleMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30631 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30631 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleMessageEntity__CreatePK(int32_t id, int32_t idx, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4D3062F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D3062F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           idx,
           priority,
           (const MethodInfo_31A3054 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BattleMessageEntity__CreatePrimaryKey(BattleMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleMessageEntity__CreatePK(this->fields.id, this->fields.idx, this->fields.priority, v2);
}


int32_t BattleMessageEntity__GetScriptInt(
        BattleMessageEntity_o *this,
        System_String_o *key,
        int64_t def,
        const MethodInfo *method)
{
  if ( (byte_4D30630 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_long___);
    byte_4D30630 = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           key,
           def,
           (const MethodInfo_3192060 *)Method_BasicHelper_GetValue_long___);
}