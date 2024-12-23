void __fastcall NpPointToTurnConvert___ctor(NpPointToTurnConvert_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
  BattleDataDefine_c *v2; // x0

  if ( (byte_4B698CD & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, method);
    byte_4B698CD = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->PERCENTAGE_DENOMINATOR;
}