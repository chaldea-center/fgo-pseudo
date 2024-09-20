void __fastcall BattleMessageEntity___ctor(BattleMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADF0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5ADF0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BattleMessageEntity__CreatePK(
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5ADED & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5ADED = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           idx,
           priority,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BattleMessageEntity__CreatePrimaryKey(
        BattleMessageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleMessageEntity__CreatePK(this->fields.id, this->fields.idx, this->fields.priority, v2);
}


float __fastcall BattleMessageEntity__GetScriptFloat(
        BattleMessageEntity_o *this,
        System_String_o *key,
        int32_t def,
        const MethodInfo *method)
{
  int32_t ScriptInt; // w0
  BattleDataDefine_c *v8; // x8
  int v9; // w19

  if ( (byte_4A5ADEE & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    byte_4A5ADEE = 1;
  }
  ScriptInt = BattleMessageEntity__GetScriptInt(this, key, def, method);
  v8 = BattleDataDefine_TypeInfo;
  v9 = ScriptInt;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v8 = BattleDataDefine_TypeInfo;
  }
  return (float)v9 / v8->static_fields->PERMILLAGE_DENOMINATOR;
}


int32_t __fastcall BattleMessageEntity__GetScriptInt(
        BattleMessageEntity_o *this,
        System_String_o *key,
        int64_t def,
        const MethodInfo *method)
{
  if ( (byte_4A5ADEF & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_long___);
    byte_4A5ADEF = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           key,
           def,
           (const MethodInfo_2E6DB7C *)Method_BasicHelper_GetValue_long___);
}