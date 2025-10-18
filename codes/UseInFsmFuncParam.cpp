void UseInFsmFuncParam___ctor(UseInFsmFuncParam_o *this, DataVals_o *dataVal, const MethodInfo *method)
{
  __int64 v5; // x0
  System_Collections_Generic_HashSet_int__o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *UseInFsmParam; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C45933 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C45933 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dataVal )
    sub_1C372B4(v5);
  this->fields.funcType = dataVal->fields.funcType;
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.hashTargetId = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.hashTargetId, (int32_t)v6, v7, v8);
  UseInFsmParam = DataVals__GetUseInFsmParam(dataVal, 0);
  this->fields.dictParam = UseInFsmParam;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dictParam, (int32_t)UseInFsmParam, v10, v11);
}


void UseInFsmFuncParam__AddTargetId(
        UseInFsmFuncParam_o *this,
        bool isFuncSucceed,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hashTargetId; // x0

  if ( (byte_4C45934 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C45934 = 1;
  }
  if ( isFuncSucceed )
  {
    hashTargetId = this->fields.hashTargetId;
    if ( !hashTargetId )
      sub_1C372B4(0);
    System_Collections_Generic_HashSet_int___Add(
      hashTargetId,
      targetId,
      (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
}


bool UseInFsmFuncParam__IsMatch(
        UseInFsmFuncParam_o *this,
        UseInFsmFuncParam_CondData_o *condData,
        const MethodInfo *method)
{
  UseInFsmFuncParam_o *v4; // x20
  int TargetId_k__BackingField; // w1

  v4 = this;
  if ( (byte_4C45935 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    this = (UseInFsmFuncParam_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C45935 = 1;
  }
  if ( !condData )
    goto LABEL_11;
  if ( v4->fields.funcType == condData->fields.FuncType )
  {
    TargetId_k__BackingField = condData->fields._TargetId_k__BackingField;
    if ( TargetId_k__BackingField < 1 )
      goto LABEL_8;
    this = (UseInFsmFuncParam_o *)v4->fields.hashTargetId;
    if ( !this )
      goto LABEL_11;
    if ( System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           TargetId_k__BackingField,
           (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_8:
      this = (UseInFsmFuncParam_o *)v4->fields.dictParam;
      if ( this )
        return System_Collections_Generic_Dictionary_object__int___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__int__o *)this,
                 (Il2CppObject *)condData->fields.ParamName,
                 (const MethodInfo_345AAF4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
LABEL_11:
      sub_1C372B4(this);
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
  if ( (byte_4C45937 & 1) == 0 )
  {
    dataVal = (DataVals_o *)sub_1C37058(&UseInFsmFuncParam_TypeInfo);
    byte_4C45937 = 1;
  }
  if ( !v2 )
    sub_1C372B4(dataVal);
  if ( !DataVals__ExistUseInFsmParam(v2, 0) )
    return 0;
  v3 = (UseInFsmFuncParam_o *)sub_1C372A4(UseInFsmFuncParam_TypeInfo);
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

  if ( (byte_4C45936 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_4C45936 = 1;
  }
  dictParam = this->fields.dictParam;
  if ( !dictParam )
    sub_1C372B4(0);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)dictParam,
           (Il2CppObject *)paramName,
           value,
           (const MethodInfo_345C0BC *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
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