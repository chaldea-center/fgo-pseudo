void BitValue_Int32Enum____ctor(BitValue_T__o *this, System_Func_T__int__o *func, const MethodInfo_3308294 *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.convertFunc = func;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.convertFunc, (int32_t)func, v5, v6);
}


bool BitValue_Int32Enum___Check(BitValue_T__o *this, int32_t val, const MethodInfo_3308344 *method)
{
  struct System_Func_T__int__o *convertFunc; // x8
  int32_t value; // w19
  int v5; // w0
  char v6; // vf

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_1C2D6EC(this, val);
  value = this->fields.value;
  v5 = ((__int64 (__fastcall *)(intptr_t, int32_t, intptr_t))convertFunc->fields.invoke_impl)(
         convertFunc->fields.method_code,
         val,
         convertFunc->fields.method);
  return !(((v5 & value) < 0) ^ v6 | ((v5 & value) == 0));
}


bool BitValue_Int32Enum___CheckAndOff(BitValue_T__o *this, int32_t val, const MethodInfo_3308378 *method)
{
  const MethodInfo_3308378 *v3; // x19
  bool v6; // w0
  BitValue_T__c *klass; // x8

  v3 = method;
  v6 = BitValue_Int32Enum___Check(
         this,
         val,
         (const MethodInfo_3308344 *)method->klass->rgctx_data->_4_BitValue_T__Check);
  klass = v3->klass;
  LOBYTE(v3) = v6;
  BitValue_Int32Enum___Off(this, val, (const MethodInfo_3308304 *)klass->rgctx_data->_5_BitValue_T__Off);
  return (unsigned __int8)v3 & 1;
}


void BitValue_Int32Enum___Off(BitValue_T__o *this, int32_t val, const MethodInfo_3308304 *method)
{
  struct System_Func_T__int__o *convertFunc; // x8
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_1C2D6EC(this, val);
  value = this->fields.value;
  this->fields.value = value
                     & ~((unsigned int (__fastcall *)(intptr_t, int32_t, intptr_t))convertFunc->fields.invoke_impl)(
                          convertFunc->fields.method_code,
                          val,
                          convertFunc->fields.method);
}


void BitValue_Int32Enum___On(BitValue_T__o *this, int32_t val, const MethodInfo_33082C4 *method)
{
  struct System_Func_T__int__o *convertFunc; // x8
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_1C2D6EC(this, val);
  value = this->fields.value;
  this->fields.value = ((__int64 (__fastcall *)(intptr_t, int32_t, intptr_t))convertFunc->fields.invoke_impl)(
                         convertFunc->fields.method_code,
                         val,
                         convertFunc->fields.method)
                     | value;
}


void BitValue_Int32Enum___Reset(BitValue_T__o *this, const MethodInfo_33083C8 *method)
{
  this->fields.value = 0;
}