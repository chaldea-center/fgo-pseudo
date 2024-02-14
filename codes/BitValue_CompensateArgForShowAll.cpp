void __fastcall BitValue_CompensateArgForShowAll_EffectType____ctor(
        BitValue_CompensateArgForShowAll_EffectType__o *this,
        System_Func_T__int__o *func,
        const MethodInfo_2AA9500 *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.convertFunc = func;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.convertFunc,
    (System_Int32_array **)func,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool __fastcall BitValue_CompensateArgForShowAll_EffectType___Check(
        BitValue_CompensateArgForShowAll_EffectType__o *this,
        int32_t val,
        const MethodInfo_2AA95CC *method)
{
  struct System_Func_T__int__o *convertFunc; // x0
  int32_t value; // w19
  int v6; // w0
  char v7; // vf

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_B0D97C(0LL);
  value = this->fields.value;
  v6 = ((__int64 (__fastcall *)(struct System_Func_T__int__o *, int32_t))method->klass->rgctx_data->_0_System_Func_T__int__Invoke->methodPointer)(
         convertFunc,
         val);
  return !(((v6 & value) < 0) ^ v7 | ((v6 & value) == 0));
}


void __fastcall BitValue_CompensateArgForShowAll_EffectType___On(
        BitValue_CompensateArgForShowAll_EffectType__o *this,
        int32_t val,
        const MethodInfo_2AA953C *method)
{
  struct System_Func_T__int__o *convertFunc; // x0
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_B0D97C(0LL);
  value = this->fields.value;
  this->fields.value = ((__int64 (__fastcall *)(struct System_Func_T__int__o *, int32_t))method->klass->rgctx_data->_0_System_Func_T__int__Invoke->methodPointer)(
                         convertFunc,
                         val) | value;
}