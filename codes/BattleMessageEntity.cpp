void __fastcall BattleMessageEntity___ctor(BattleMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B15E7C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleMessageEntity__CreatePK(
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B15E79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&idx, *(_QWORD *)&priority);
    byte_4B15E79 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           idx,
           priority,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BattleMessageEntity__CreatePrimaryKey(
        BattleMessageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleMessageEntity__CreatePK(this->fields.id, this->fields.idx, this->fields.priority, v2);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleMessageEntity__GetScriptFloat(
        BattleMessageEntity_o *this,
        System_String_o *key,
        int32_t def,
        const MethodInfo *method)
{
  int32_t ScriptInt; // w0
  __int64 v8; // x1
  BattleDataDefine_c *v9; // x8
  int v10; // w19

  if ( (byte_4B15E7A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, key, *(_QWORD *)&def);
    byte_4B15E7A = 1;
  }
  ScriptInt = BattleMessageEntity__GetScriptInt(this, key, def, method);
  v9 = BattleDataDefine_TypeInfo;
  v10 = ScriptInt;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v8);
    v9 = BattleDataDefine_TypeInfo;
  }
  return (float)v10 / v9->static_fields->PERMILLAGE_DENOMINATOR;
}


int32_t __fastcall BattleMessageEntity__GetScriptInt(
        BattleMessageEntity_o *this,
        System_String_o *key,
        int64_t def,
        const MethodInfo *method)
{
  if ( (byte_4B15E7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_long___, key, def);
    byte_4B15E7B = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           key,
           def,
           (const MethodInfo_2F00B40 *)Method_BasicHelper_GetValue_long___);
}