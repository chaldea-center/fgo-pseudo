void __fastcall BattleMessageEntity___ctor(BattleMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F6ADD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F6ADD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleMessageEntity__CreatePK(
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_40F6ADA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&idx);
    byte_40F6ADA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           idx,
           priority,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int32_t ScriptInt; // w19
  BattleDataDefine_c *v8; // x8

  if ( (byte_40F6ADB & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, key);
    byte_40F6ADB = 1;
  }
  ScriptInt = BattleMessageEntity__GetScriptInt(this, key, def, method);
  v8 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v8 = BattleDataDefine_TypeInfo;
  }
  return (float)ScriptInt / v8->static_fields->PERMILLAGE_DENOMINATOR;
}


int32_t __fastcall BattleMessageEntity__GetScriptInt(
        BattleMessageEntity_o *this,
        System_String_o *key,
        int64_t def,
        const MethodInfo *method)
{
  if ( (byte_40F6ADC & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_long___, key);
    byte_40F6ADC = 1;
  }
  return BasicHelper__GetValue_long_(
           this->fields.script,
           key,
           def,
           (const MethodInfo_18B7C18 *)Method_BasicHelper_GetValue_long___);
}