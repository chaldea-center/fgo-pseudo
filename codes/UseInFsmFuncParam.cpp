void __fastcall UseInFsmFuncParam___ctor(UseInFsmFuncParam_o *this, DataVals_o *dataVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_HashSet_int__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *UseInFsmParam; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B047B1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, dataVal);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_4B047B1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !dataVal )
    sub_1BC3264(v6, v7);
  this->fields.funcType = dataVal->fields.funcType;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashTargetId = v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.hashTargetId, (int32_t)v8, v9, v10);
  UseInFsmParam = DataVals__GetUseInFsmParam(dataVal, 0LL);
  this->fields.dictParam = UseInFsmParam;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dictParam, (int32_t)UseInFsmParam, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UseInFsmFuncParam__AddTargetId(
        UseInFsmFuncParam_o *this,
        bool isFuncSucceed,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hashTargetId; // x0

  if ( (byte_4B047B2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, isFuncSucceed);
    byte_4B047B2 = 1;
  }
  if ( isFuncSucceed )
  {
    hashTargetId = this->fields.hashTargetId;
    if ( !hashTargetId )
      sub_1BC3264(0LL, isFuncSucceed);
    System_Collections_Generic_HashSet_int___Add(
      hashTargetId,
      targetId,
      (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
}


bool __fastcall UseInFsmFuncParam__IsMatch(
        UseInFsmFuncParam_o *this,
        UseInFsmFuncParam_CondData_o *condData,
        const MethodInfo *method)
{
  UseInFsmFuncParam_CondData_o *v3; // x19
  UseInFsmFuncParam_o *v4; // x20
  __int64 v5; // x1

  v3 = condData;
  v4 = this;
  if ( (byte_4B047B3 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, condData);
    this = (UseInFsmFuncParam_o *)sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Contains__, v5);
    byte_4B047B3 = 1;
  }
  if ( !v3 )
    goto LABEL_11;
  if ( v4->fields.funcType == v3->fields.FuncType )
  {
    condData = (UseInFsmFuncParam_CondData_o *)(unsigned int)v3->fields._TargetId_k__BackingField;
    if ( (int)condData < 1 )
      goto LABEL_8;
    this = (UseInFsmFuncParam_o *)v4->fields.hashTargetId;
    if ( !this )
      goto LABEL_11;
    if ( System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           (int32_t)condData,
           (const MethodInfo_355857C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_8:
      this = (UseInFsmFuncParam_o *)v4->fields.dictParam;
      if ( this )
        return System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)this,
                 (Il2CppObject *)v3->fields.ParamName,
                 (const MethodInfo_336423C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
LABEL_11:
      sub_1BC3264(this, condData);
    }
  }
  return 0;
}


UseInFsmFuncParam_o *__fastcall UseInFsmFuncParam__Make(DataVals_o *dataVal, const MethodInfo *method)
{
  DataVals_o *v2; // x19
  UseInFsmFuncParam_o *v3; // x20
  const MethodInfo *v4; // x2

  v2 = dataVal;
  if ( (byte_4B047B5 & 1) == 0 )
  {
    dataVal = (DataVals_o *)sub_1BC3008(&UseInFsmFuncParam_TypeInfo, method);
    byte_4B047B5 = 1;
  }
  if ( !v2 )
    sub_1BC3264(dataVal, method);
  if ( !DataVals__ExistUseInFsmParam(v2, 0LL) )
    return 0LL;
  v3 = (UseInFsmFuncParam_o *)sub_1BC3254(UseInFsmFuncParam_TypeInfo);
  UseInFsmFuncParam___ctor(v3, v2, v4);
  return v3;
}


bool __fastcall UseInFsmFuncParam__TryGetParamValue(
        UseInFsmFuncParam_o *this,
        int32_t *value,
        System_String_o *paramName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *dictParam; // x0

  if ( (byte_4B047B4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, value);
    byte_4B047B4 = 1;
  }
  dictParam = this->fields.dictParam;
  if ( !dictParam )
    sub_1BC3264(0LL, value);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)dictParam,
           (Il2CppObject *)paramName,
           value,
           (const MethodInfo_3365804 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


void __fastcall UseInFsmFuncParam_CondData___ctor(UseInFsmFuncParam_CondData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UseInFsmFuncParam_CondData__SetTargetId(
        UseInFsmFuncParam_CondData_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = targetId;
}


int32_t __fastcall UseInFsmFuncParam_CondData__get_TargetId(
        UseInFsmFuncParam_CondData_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


void __fastcall UseInFsmFuncParam_CondData__set_TargetId(
        UseInFsmFuncParam_CondData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}