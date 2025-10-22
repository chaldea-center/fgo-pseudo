void UseInFsmFuncParam___ctor(UseInFsmFuncParam_o *this, DataVals_o *dataVal, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *UseInFsmParam; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C59710 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C59710 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dataVal )
    sub_1C3E7C0(v5, v6);
  this->fields.funcType = dataVal->fields.funcType;
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashTargetId = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.hashTargetId, (int32_t)v7, v8, v9);
  UseInFsmParam = DataVals__GetUseInFsmParam(dataVal, 0);
  this->fields.dictParam = UseInFsmParam;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dictParam, (int32_t)UseInFsmParam, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void UseInFsmFuncParam__AddTargetId(
        UseInFsmFuncParam_o *this,
        bool isFuncSucceed,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hashTargetId; // x0

  if ( (byte_4C59711 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C59711 = 1;
  }
  if ( isFuncSucceed )
  {
    hashTargetId = this->fields.hashTargetId;
    if ( !hashTargetId )
      sub_1C3E7C0(0, isFuncSucceed);
    System_Collections_Generic_HashSet_int___Add(
      hashTargetId,
      targetId,
      (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
}


bool UseInFsmFuncParam__IsMatch(
        UseInFsmFuncParam_o *this,
        UseInFsmFuncParam_CondData_o *condData,
        const MethodInfo *method)
{
  UseInFsmFuncParam_CondData_o *v3; // x19
  UseInFsmFuncParam_o *v4; // x20

  v3 = condData;
  v4 = this;
  if ( (byte_4C59712 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    this = (UseInFsmFuncParam_o *)sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C59712 = 1;
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
           (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_8:
      this = (UseInFsmFuncParam_o *)v4->fields.dictParam;
      if ( this )
        return System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)this,
                 (Il2CppObject *)v3->fields.ParamName,
                 (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
LABEL_11:
      sub_1C3E7C0(this, condData);
    }
  }
  return 0;
}


UseInFsmFuncParam_o *UseInFsmFuncParam__Make(DataVals_o *dataVal, const MethodInfo *method)
{
  DataVals_o *v2; // x19
  UseInFsmFuncParam_o *v3; // x20
  const MethodInfo *v4; // x2

  v2 = dataVal;
  if ( (byte_4C59714 & 1) == 0 )
  {
    dataVal = (DataVals_o *)sub_1C3E564(&UseInFsmFuncParam_TypeInfo);
    byte_4C59714 = 1;
  }
  if ( !v2 )
    sub_1C3E7C0(dataVal, method);
  if ( !DataVals__ExistUseInFsmParam(v2, 0) )
    return 0;
  v3 = (UseInFsmFuncParam_o *)sub_1C3E7B0(UseInFsmFuncParam_TypeInfo);
  UseInFsmFuncParam___ctor(v3, v2, v4);
  return v3;
}


bool UseInFsmFuncParam__TryGetParamValue(
        UseInFsmFuncParam_o *this,
        int32_t *value,
        System_String_o *paramName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *dictParam; // x0

  if ( (byte_4C59713 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_4C59713 = 1;
  }
  dictParam = this->fields.dictParam;
  if ( !dictParam )
    sub_1C3E7C0(0, value);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)dictParam,
           (Il2CppObject *)paramName,
           value,
           (const MethodInfo_346E26C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


void UseInFsmFuncParam_CondData___ctor(UseInFsmFuncParam_CondData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UseInFsmFuncParam_CondData__SetTargetId(
        UseInFsmFuncParam_CondData_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = targetId;
}


int32_t UseInFsmFuncParam_CondData__get_TargetId(UseInFsmFuncParam_CondData_o *this, const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


void UseInFsmFuncParam_CondData__set_TargetId(
        UseInFsmFuncParam_CondData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}