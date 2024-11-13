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
  __int64 v2; // x2
  BattleDataDefine_c *v3; // x0

  if ( (byte_4B18E6F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, method, v2);
    byte_4B18E6F = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    v3 = BattleDataDefine_TypeInfo;
  }
  return v3->static_fields->PERCENTAGE_DENOMINATOR;
}