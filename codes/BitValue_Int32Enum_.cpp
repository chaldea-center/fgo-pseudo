void __fastcall BitValue_Int32Enum____ctor(
        BitValue_T__o *this,
        System_Func_T__int__o *func,
        const MethodInfo_321C7E0 *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.convertFunc = func;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.convertFunc, (int64_t)func, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BitValue_Int32Enum___Check(BitValue_T__o *this, int32_t val, const MethodInfo_321C890 *method)
{
  struct System_Func_T__int__o *convertFunc; // x8
  int32_t value; // w19
  int v5; // w0
  char v6; // vf

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_1C3B9C0(this, val);
  value = this->fields.value;
  v5 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))convertFunc->fields.m_target)(
         convertFunc->fields.original_method_info,
         val,
         *(_QWORD *)&convertFunc->fields.extra_arg);
  return !(((v5 & value) < 0) ^ v6 | ((v5 & value) == 0));
}


bool __fastcall BitValue_Int32Enum___CheckAndOff(BitValue_T__o *this, int32_t val, const MethodInfo_321C8C4 *method)
{
  const MethodInfo_321C8C4 *v3; // x19
  bool v6; // w0
  BitValue_T__c *klass; // x8

  v3 = method;
  v6 = BitValue_Int32Enum___Check(
         this,
         val,
         (const MethodInfo_321C890 *)method->klass->rgctx_data->_4_BitValue_T__Check);
  klass = v3->klass;
  LOBYTE(v3) = v6;
  BitValue_Int32Enum___Off(this, val, (const MethodInfo_321C850 *)klass->rgctx_data->_5_BitValue_T__Off);
  return (unsigned __int8)v3 & 1;
}


void __fastcall BitValue_Int32Enum___Off(BitValue_T__o *this, int32_t val, const MethodInfo_321C850 *method)
{
  struct System_Func_T__int__o *convertFunc; // x8
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_1C3B9C0(this, val);
  value = this->fields.value;
  this->fields.value = value & ~((unsigned __int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))convertFunc->fields.m_target)(
                                  convertFunc->fields.original_method_info,
                                  val,
                                  *(_QWORD *)&convertFunc->fields.extra_arg);
}


void __fastcall BitValue_Int32Enum___On(BitValue_T__o *this, int32_t val, const MethodInfo_321C810 *method)
{
  struct System_Func_T__int__o *convertFunc; // x8
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_1C3B9C0(this, val);
  value = this->fields.value;
  this->fields.value = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))convertFunc->fields.m_target)(
                         convertFunc->fields.original_method_info,
                         val,
                         *(_QWORD *)&convertFunc->fields.extra_arg) | value;
}


void __fastcall BitValue_Int32Enum___Reset(BitValue_T__o *this, const MethodInfo_321C914 *method)
{
  this->fields.value = 0;
}