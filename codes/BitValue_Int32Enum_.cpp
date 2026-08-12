void BitValue_Int32Enum____ctor(BitValue_T__o *this, System_Func_T__int__o *func, const MethodInfo_3E76D50 *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.convertFunc = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.convertFunc, (int32_t)func, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
bool BitValue_Int32Enum___Check(BitValue_T__o *this, int32_t val, const MethodInfo_3E76E00 *method)
{
  struct System_Func_T__int__o *convertFunc; // x8
  int32_t value; // w19
  int v5; // w0
  char v6; // vf

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_2213CDC(this, *(_QWORD *)&val);
  value = this->fields.value;
  v5 = ((__int64 (__fastcall *)(intptr_t, int32_t, intptr_t))convertFunc->fields.invoke_impl)(
         convertFunc->fields.method_code,
         val,
         convertFunc->fields.method);
  return !(((v5 & value) < 0) ^ v6 | ((v5 & value) == 0));
}


bool BitValue_Int32Enum___CheckAndOff(BitValue_T__o *this, int32_t val, const MethodInfo_3E76E34 *method)
{
  bool v5; // w21
  const MethodInfo_3E76DC0 *v6; // x2

  v5 = BitValue_Int32Enum___Check(this, val, (const MethodInfo_3E76E00 *)method);
  BitValue_Int32Enum___Off(this, val, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void BitValue_Int32Enum___Off(BitValue_T__o *this, int32_t val, const MethodInfo_3E76DC0 *method)
{
  struct System_Func_T__int__o *convertFunc; // x8
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_2213CDC(this, *(_QWORD *)&val);
  value = this->fields.value;
  this->fields.value = value
                     & ~((unsigned int (__fastcall *)(intptr_t, int32_t, intptr_t))convertFunc->fields.invoke_impl)(
                          convertFunc->fields.method_code,
                          val,
                          convertFunc->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void BitValue_Int32Enum___On(BitValue_T__o *this, int32_t val, const MethodInfo_3E76D80 *method)
{
  struct System_Func_T__int__o *convertFunc; // x8
  int32_t value; // w20

  convertFunc = this->fields.convertFunc;
  if ( !convertFunc )
    sub_2213CDC(this, *(_QWORD *)&val);
  value = this->fields.value;
  this->fields.value = ((__int64 (__fastcall *)(intptr_t, int32_t, intptr_t))convertFunc->fields.invoke_impl)(
                         convertFunc->fields.method_code,
                         val,
                         convertFunc->fields.method)
                     | value;
}


void BitValue_Int32Enum___Reset(BitValue_T__o *this, const MethodInfo_3E76E68 *method)
{
  this->fields.value = 0;
}