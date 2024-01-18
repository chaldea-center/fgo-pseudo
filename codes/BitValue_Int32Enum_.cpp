bool __fastcall BitValue_Int32Enum___CheckAndOff(BitValue_T__o *this, int32_t val, const MethodInfo_2A021E4 *method)
{
  const MethodInfo_2A021E4 *v3; // x21
  char v6; // w0
  BitValue_T__c *klass; // x8

  if ( !this )
    sub_B2C434(0LL, val);
  v3 = method;
  v6 = ((__int64 (*)(void))method->klass->rgctx_data->_1_BitValue_T__Check->methodPointer)();
  klass = v3->klass;
  LOBYTE(v3) = v6;
  ((void (__fastcall *)(BitValue_T__o *, _QWORD))klass->rgctx_data->_2_BitValue_T__Off->methodPointer)(
    this,
    (unsigned int)val);
  return (unsigned __int8)v3 & 1;
}


void __fastcall BitValue_Int32Enum___Off(BitValue_T__o *this, int32_t val, const MethodInfo_2A02154 *method)
{
  struct System_Func_T__int__o *convertFunc; // x0
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_B2C434(0LL, val);
  value = this->fields.value;
  this->fields.value = value & ~((__int64 (__fastcall *)(struct System_Func_T__int__o *, int32_t))method->klass->rgctx_data->_0_System_Func_T__int__Invoke->methodPointer)(
                                  convertFunc,
                                  val);
}


void __fastcall BitValue_Int32Enum___Reset(BitValue_T__o *this, const MethodInfo_2A02250 *method)
{
  this->fields.value = 0;
}