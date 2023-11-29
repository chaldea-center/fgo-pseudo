void __fastcall BitValue_object____ctor(
        BitValue_T__o *this,
        System_Func_T__int__o *func,
        const MethodInfo_29024B8 *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.convertFunc = func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.convertFunc,
    (System_Int32_array **)func,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool __fastcall BitValue_object___Check(BitValue_T__o *this, Il2CppObject *val, const MethodInfo_2902584 *method)
{
  struct System_Func_T__int__o *convertFunc; // x0
  int32_t value; // w19
  int v6; // w0
  char v7; // vf

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_B170D4();
  value = this->fields.value;
  v6 = ((__int64 (__fastcall *)(struct System_Func_T__int__o *, Il2CppObject *))method->klass->rgctx_data->_0_System_Func_T__int__Invoke->methodPointer)(
         convertFunc,
         val);
  return !(((v6 & value) < 0) ^ v7 | ((v6 & value) == 0));
}


bool __fastcall BitValue_object___CheckAndOff(BitValue_T__o *this, Il2CppObject *val, const MethodInfo_29025CC *method)
{
  const MethodInfo_29025CC *v3; // x21
  char v6; // w0
  BitValue_T__c *klass; // x8

  if ( !this )
    sub_B170D4();
  v3 = method;
  v6 = ((__int64 (*)(void))method->klass->rgctx_data->_1_BitValue_T__Check->methodPointer)();
  klass = v3->klass;
  LOBYTE(v3) = v6;
  ((void (__fastcall *)(BitValue_T__o *, Il2CppObject *))klass->rgctx_data->_2_BitValue_T__Off->methodPointer)(
    this,
    val);
  return (unsigned __int8)v3 & 1;
}


void __fastcall BitValue_object___Off(BitValue_T__o *this, Il2CppObject *val, const MethodInfo_290253C *method)
{
  struct System_Func_T__int__o *convertFunc; // x0
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_B170D4();
  value = this->fields.value;
  this->fields.value = value & ~((__int64 (__fastcall *)(struct System_Func_T__int__o *, Il2CppObject *))method->klass->rgctx_data->_0_System_Func_T__int__Invoke->methodPointer)(
                                  convertFunc,
                                  val);
}


void __fastcall BitValue_object___On(BitValue_T__o *this, Il2CppObject *val, const MethodInfo_29024F4 *method)
{
  struct System_Func_T__int__o *convertFunc; // x0
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_B170D4();
  value = this->fields.value;
  this->fields.value = ((__int64 (__fastcall *)(struct System_Func_T__int__o *, Il2CppObject *))method->klass->rgctx_data->_0_System_Func_T__int__Invoke->methodPointer)(
                         convertFunc,
                         val) | value;
}


void __fastcall BitValue_object___Reset(BitValue_T__o *this, const MethodInfo_2902638 *method)
{
  this->fields.value = 0;
}