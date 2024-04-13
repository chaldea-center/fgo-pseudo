void __fastcall NpPointToTurnConvert___ctor(NpPointToTurnConvert_o *this, const MethodInfo *method)
{
  BaseNpGaugeConvert___ctor((BaseNpGaugeConvert_o *)this, 0LL);
}


float __fastcall NpPointToTurnConvert__PointToTurn(
        NpPointToTurnConvert_o *this,
        int32_t point,
        const MethodInfo *method)
{
  if ( point < 1 )
    return 0.0;
  else
    return this->fields.convertCoefficient;
}


float __fastcall NpPointToTurnConvert__get_Denominator(NpPointToTurnConvert_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleDataDefine_c *v4; // x0

  if ( (byte_42E91FF & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E91FF = 1;
  }
  v4 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v4 = BattleDataDefine_TypeInfo;
  }
  return v4->static_fields->PERCENTAGE_DENOMINATOR;
}