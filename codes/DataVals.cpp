void __fastcall DataVals___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4E001 & 1) == 0 )
  {
    sub_1B863B8(&DataVals_TypeInfo, v1);
    byte_4A4E001 = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void __fastcall DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__int__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4A4DFCC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, str);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo, v7);
    byte_4A4DFCC = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v8,
    (const MethodInfo_32C4FFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v8;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)v8, v9, v10);
  *(_QWORD *)&this->fields.targetCardIndex = -1LL;
  v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo);
  System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
    v11,
    (const MethodInfo_32670E0 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
  this->fields.invalidCauseDict = (struct System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__o *)v11;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.invalidCauseDict, (int32_t)v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svals = str;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svals, (int32_t)str, v14, v15);
}


bool __fastcall DataVals__CheckAssertStrParam(
        DataVals_o *this,
        int32_t type,
        bool *existParamNum,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  bool IsStrParam; // w22

  *existParamNum = 0;
  IsStrParam = DataVals__IsStrParam(this, type, (const MethodInfo *)existParamNum);
  if ( !IsStrParam )
    *existParamNum = DataVals__isParam(this, type, v7);
  return IsStrParam;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__CheckFunctionTriggerStar(DataVals_o *this, int32_t totalStar, const MethodInfo *method)
{
  int32_t FunctionTriggerStarNum; // w0

  FunctionTriggerStarNum = DataVals__GetFunctionTriggerStarNum(this, *(const MethodInfo **)&totalStar);
  return FunctionTriggerStarNum < 0 || FunctionTriggerStarNum <= totalStar;
}


bool __fastcall DataVals__CheckOverCharge(DataVals_o *this, DataVals_o *baseVals, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 Param; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4
  int32_t v11; // w21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  int32_t v23; // w21
  const MethodInfo *v24; // x3
  bool v25; // zf
  bool v26; // w21
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x4

  Param = DataVals__GetParam(this, 3, 0, v3);
  if ( !baseVals )
    sub_1B86614(Param, v7);
  if ( (_DWORD)Param != DataVals__GetParam(baseVals, 3, 0, v8)
    || (v11 = DataVals__GetParam(this, 4, 0, v9), v11 != DataVals__GetParam(baseVals, 4, 0, v12))
    || (v14 = DataVals__GetParam(this, 0, 0, v13), v14 != DataVals__GetParam(baseVals, 0, 0, v15))
    || (v17 = DataVals__GetParam(this, 7, 0, v16), v17 != DataVals__GetParam(baseVals, 7, 0, v18))
    || (v20 = DataVals__GetParam(this, 6, 0, v19), v20 != DataVals__GetParam(baseVals, 6, 0, v21))
    || (v23 = DataVals__GetParam(this, 2, 0, v22), v25 = v23 == DataVals__GetParam(baseVals, 2, 0, v24), v26 = 0, !v25) )
  {
    v26 = 1;
    DataVals__OnOverChargeState(this, baseVals, 3, 1, v10);
    DataVals__OnOverChargeState(this, baseVals, 4, 2, v27);
    DataVals__OnOverChargeState(this, baseVals, 0, 4, v28);
    DataVals__OnOverChargeState(this, baseVals, 7, 8, v29);
    DataVals__OnOverChargeState(this, baseVals, 6, 16, v30);
    DataVals__OnOverChargeState(this, baseVals, 2, 32, v31);
  }
  return v26;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__ConcatenateTypeValue(
        DataVals_o *this,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+0h] [xbp-40h] BYREF
  int32_t v9; // [xsp+10h] [xbp-30h]
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = value;
  if ( (byte_4A4DFD6 & 1) == 0 )
  {
    sub_1B863B8(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_4A4DFD6 = 1;
  }
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = type;
  v5 = System_Enum__ToString(&v8, 0LL);
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_61645176(v5, v6, 0LL);
}


bool __fastcall DataVals__ExistUseInFsmParam(DataVals_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  DataVals___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *_9__42_0; // x20
  Il2CppObject *v12; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4A4DFD1 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_string____76124112, v3);
    sub_1B863B8(&System_Func_string__bool__TypeInfo, v4);
    sub_1B863B8(&Method_DataVals___c__ExistUseInFsmParam_b__42_0__, v5);
    sub_1B863B8(&DataVals___c_TypeInfo, v6);
    byte_4A4DFD1 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1B86614(0LL, method);
  Keys = System_Collections_Generic_Dictionary_object__int___get_Keys(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (const MethodInfo_32C5690 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
  v9 = DataVals___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v9 = DataVals___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__bool__o *)v9->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = DataVals___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__42_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__42_0, v12, Method_DataVals___c__ExistUseInFsmParam_b__42_0__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_string__bool__o *)_9__42_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v14, v15);
  }
  return System_Linq_Enumerable__Any_object__49797040(
           v10,
           (System_Func_TSource__bool__o *)_9__42_0,
           (const MethodInfo_2F7D7B0 *)Method_System_Linq_Enumerable_Any_string____76124112);
}


System_Int32_array *__fastcall DataVals__GetAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *ValsList; // x20
  const MethodInfo *v5; // x2
  System_Int32_array *v6; // x1

  ValsList = DataVals__GetValsList(this, 37, v2);
  v6 = DataVals__GetValsList(this, 112, v5);
  return CommonFunction__JoinIndiv(ValsList, v6, 0LL);
}


System_Int32_array *__fastcall DataVals__GetAndCheckIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  System_Int32_array *result; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int32_t Param; // w0
  int32_t v10; // w19
  uint16_t v11; // w1

  if ( (byte_4A4DFE8 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4DFE8 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v2);
  result = (System_Int32_array *)System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    Param = DataVals__GetParam(this, 55, 0, v8);
    if ( Param < 1 )
      return 0LL;
    v10 = Param;
    result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
    if ( result )
    {
      if ( !result->max_length )
        sub_1B8661C(result, v7);
      result->m_Items[1] = v10;
      return result;
    }
LABEL_14:
    sub_1B86614(result, v7);
  }
  if ( !StrParam )
    goto LABEL_14;
  if ( System_String__Contains_61702268(StrParam, 0x26u, 0LL) )
    v11 = 38;
  else
    v11 = 47;
  return BasicHelper__Convert2IntArray(StrParam, v11, 0LL);
}


float __fastcall DataVals__GetBgmFadeTime(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return (float)DataVals__GetParam(this, 213, 0, v2) / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetBgmPriority(DataVals_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4DFFB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&bgmId);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    byte_4A4DFFB = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 160, &param, v3) || DataVals__TryGetParam(this, 111, &param, v7) )
    return param;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1B86614(0LL, v10);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, bgmId, 0, 0LL);
}


int32_t __fastcall DataVals__GetCallSvtEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 87, 0, v2);
}


int32_t __fastcall DataVals__GetCardIndex(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t result; // w0
  const MethodInfo *v5; // x3

  result = this->fields.targetCardIndex;
  if ( result == -1 )
  {
    if ( DataVals__isParam(this, 67, v2) )
      return DataVals__GetParam(this, 67, 0, v5);
    else
      return -1;
  }
  return result;
}


int32_t __fastcall DataVals__GetCardIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  if ( DataVals__isParam(this, 68, v2) )
    return DataVals__GetParam(this, 68, 0, v4);
  else
    return -1;
}


int32_t __fastcall DataVals__GetClassIconAuraEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 129, 0, v2);
}


ControlOtherBgmPriorityAtOverStageBgm_array *__fastcall DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x21
  const MethodInfo *v10; // x3
  System_Int32_array *Param; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Int32_array *ParamArray; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x2
  __int64 v25; // x8
  System_Int32_array *v26; // x21
  unsigned __int64 v27; // x26
  int32_t v28; // w23
  __int64 v29; // x22
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x3
  System_Int32_array *ParamArrayAddTypeIndex; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4A4DFFD & 1) == 0 )
  {
    sub_1B863B8(&ControlOtherBgmPriorityAtOverStageBgm_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo, v7);
    byte_4A4DFFD = 1;
  }
  if ( !DataVals__isParam(this, 165, v2) )
    return 0LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
  v9 = sub_1B86604(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
  ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v9, 0LL);
  Param = (System_Int32_array *)DataVals__GetParam(this, 165, 0, v10);
  if ( !v9 )
    goto LABEL_22;
  *(_DWORD *)(v9 + 16) = (_DWORD)Param;
  ParamArray = DataVals__GetParamArray(this, 166, v13);
  *(_QWORD *)(v9 + 24) = ParamArray;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)ParamArray, v15, v16);
  if ( !v8 )
    goto LABEL_22;
  items = v8->fields._items;
  v20 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v9;
    sub_1B8635C((CGThumbnailListItem_o *)(v22 + 4), v9, v17, v18);
  }
  Param = DataVals__GetTargetTypeIndexArray(this, 165, v23);
  if ( !Param )
    goto LABEL_22;
  v25 = *(_QWORD *)&Param->max_length;
  v26 = Param;
  if ( (int)v25 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v25 )
        sub_1B8661C(Param, v12);
      v28 = v26->m_Items[v27 + 1];
      v29 = sub_1B86604(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
      ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v29, 0LL);
      Param = (System_Int32_array *)DataVals__GetParamAddTypeIndex(this, 165, v28, 0, v30);
      if ( !v29 )
        break;
      *(_DWORD *)(v29 + 16) = (_DWORD)Param;
      ParamArrayAddTypeIndex = DataVals__GetParamArrayAddTypeIndex(this, 166, v28, v31);
      *(_QWORD *)(v29 + 24) = ParamArrayAddTypeIndex;
      sub_1B8635C((CGThumbnailListItem_o *)(v29 + 24), (int32_t)ParamArrayAddTypeIndex, v33, v34);
      v37 = v8->fields._items;
      v38 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
      ++v8->fields._version;
      if ( !v37 )
        break;
      v39 = v8->fields._size;
      if ( (unsigned int)v39 >= v37->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v29,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &v37->obj.klass + v39;
        v8->fields._size = v39 + 1;
        v40[4] = (Il2CppClass *)v29;
        sub_1B8635C((CGThumbnailListItem_o *)(v40 + 4), v29, v35, v36);
      }
      LODWORD(v25) = v26->max_length;
      if ( (__int64)++v27 >= (int)v25 )
        return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                                v8,
                                                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    }
LABEL_22:
    sub_1B86614(Param, v12);
  }
  return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                          v8,
                                                          (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
}


System_Int32_array *__fastcall DataVals__GetCopyTargetBuffTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 126, v2);
}


System_Int32_array *__fastcall DataVals__GetCopyTargetFunctionTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 120, v2);
}


DataVals_array *__fastcall DataVals__GetDependDataValsArray(
        DataVals_o *this,
        System_Collections_Generic_List_FuncList_TYPE__o *funcTypeList,
        bool isCheckNotFound,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  DataVals_array *result; // x0
  System_Collections_Generic_List_object__o *dependDataValsList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4A4DFD0 & 1) == 0 )
  {
    sub_1B863B8(&DataVals___TypeInfo, funcTypeList);
    sub_1B863B8(&Method_System_Collections_Generic_List_DataVals__FindAll__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_DataVals__ToArray__, v7);
    sub_1B863B8(&System_Predicate_DataVals__TypeInfo, v8);
    sub_1B863B8(&Method_DataVals___c__DisplayClass41_0__GetDependDataValsArray_b__0__, v9);
    sub_1B863B8(&DataVals___c__DisplayClass41_0_TypeInfo, v10);
    byte_4A4DFD0 = 1;
  }
  v11 = sub_1B86604(DataVals___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = funcTypeList;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)funcTypeList, v14, v15);
  result = (DataVals_array *)sub_1B86460(DataVals___TypeInfo, 0LL);
  dependDataValsList = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    v18 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_DataVals__TypeInfo);
    System_Predicate_object____ctor(
      v18,
      (Il2CppObject *)v11,
      Method_DataVals___c__DisplayClass41_0__GetDependDataValsArray_b__0__,
      0LL);
    All = System_Collections_Generic_List_object___FindAll(
            dependDataValsList,
            (System_Predicate_T__o *)v18,
            (const MethodInfo_35FD068 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
    if ( All )
      return (DataVals_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)All,
                                 (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
LABEL_8:
    sub_1B86614(All, v13);
  }
  return result;
}


System_Int32_array *__fastcall DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v12; // x0
  System_Func_object__bool__o *_9__45_0; // x20
  Il2CppObject *v14; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  DataVals___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__int__o *_9__45_1; // x20
  Il2CppObject *v22; // x21
  struct DataVals___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4A4DFD4 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_1B863B8(&System_Func_DataVals__int__TypeInfo, v5);
    sub_1B863B8(&System_Func_DataVals__bool__TypeInfo, v6);
    sub_1B863B8(&int___TypeInfo, v7);
    sub_1B863B8(&Method_DataVals___c__GetDependFuncIdArray_b__45_0__, v8);
    sub_1B863B8(&Method_DataVals___c__GetDependFuncIdArray_b__45_1__, v9);
    sub_1B863B8(&DataVals___c_TypeInfo, v10);
    byte_4A4DFD4 = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  v12 = DataVals___c_TypeInfo;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v12 = DataVals___c_TypeInfo;
  }
  _9__45_0 = (System_Func_object__bool__o *)v12->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = DataVals___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__45_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__45_0, v14, Method_DataVals___c__GetDependFuncIdArray_b__45_0__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_DataVals__bool__o *)_9__45_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__45_0,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v19 = DataVals___c_TypeInfo;
  v20 = v18;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v19 = DataVals___c_TypeInfo;
  }
  _9__45_1 = (System_Func_object__int__o *)v19->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = DataVals___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__45_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(_9__45_1, v22, Method_DataVals___c__GetDependFuncIdArray_b__45_1__, 0LL);
    v23 = DataVals___c_TypeInfo->static_fields;
    v23->__9__45_1 = (struct System_Func_DataVals__int__o *)_9__45_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v23->__9__45_1, (int32_t)_9__45_1, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__45_1,
                                                               (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v26,
           (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall DataVals__GetDisplayLastFuncInvalidType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 54, 0, v2);
}


int32_t __fastcall DataVals__GetEnemyCountChangeEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 202, 0, v2);
}


float __fastcall DataVals__GetEnemyCountChangeTime(DataVals_o *this, int32_t defaultPerMill, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return (float)DataVals__GetParam(this, 201, defaultPerMill, v3) / 1000.0;
}


float __fastcall DataVals__GetEnemyCountWaitTimeAfterMessage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return (float)DataVals__GetParam(this, 203, 0, v2) / 1000.0;
}


int32_t __fastcall DataVals__GetFieldPriority(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3
  int32_t v5; // w1

  if ( DataVals__isParam(this, 163, v2) )
    v5 = 163;
  else
    v5 = 111;
  return DataVals__GetParam(this, v5, 0, v4);
}


System_Int32_array *__fastcall DataVals__GetFixDamageRates(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v7; // x3
  int32_t Param; // w19
  int32_t v9; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A4DFF9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Repeat_int___, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1B863B8(&System_Math_TypeInfo, v5);
    byte_4A4DFF9 = 1;
  }
  result = DataVals__GetParamArray(this, 81, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 80, 0, v7);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = System_Math__Max_63172752(Param, 1, 0LL);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                 100,
                                                                 v9,
                                                                 (const MethodInfo_2F9B750 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v10,
             (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityCountEqual(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 194, -1, v2);
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityCountHigher(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 192, 0, v2);
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityCountLower(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 193, 0, v2);
}


int32_t __fastcall DataVals__GetFuncCheckTargetIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 191, -1, v2);
}


int32_t __fastcall DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_Enum_o v9; // [xsp+8h] [xbp-38h] BYREF
  int v10; // [xsp+18h] [xbp-28h]

  if ( (byte_4A4DFF0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, method);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v3);
    byte_4A4DFF0 = 1;
  }
  vals = this->fields.vals;
  v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = 51;
  v5 = (Il2CppObject *)System_Enum__ToString(&v9, 0LL);
  if ( !vals )
    sub_1B86614(v5, v6);
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)vals,
         v5,
         (const MethodInfo_32C5BA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 51, 0, v7);
  }
  else
  {
    return -1;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array_array *__fastcall DataVals__GetInt2DimensionalArray(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *StrParam; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  System_String_array *v14; // x19
  System_Collections_Generic_List_object__o *v15; // x20
  int max_length; // w8
  unsigned int v17; // w22
  Il2CppClass **v18; // x8
  System_String_o *v19; // x21
  uint16_t v20; // w1
  System_Collections_ICollection_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4A4DFFF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int____Add__, *(_QWORD *)&type);
    sub_1B863B8(&Method_System_Collections_Generic_List_int____ToArray__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int_____ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_int____TypeInfo, v8);
    sub_1B863B8(&StringLiteral_1/*""*/, v9);
    byte_4A4DFFF = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( IsNullOrEmpty )
    return 0LL;
  if ( !StrParam
    || (v14 = System_String__Split(StrParam, 0x7Cu, 0, 0LL),
        v15 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_int____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v15,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_int_____ctor__),
        !v14) )
  {
LABEL_23:
    sub_1B86614(IsNullOrEmpty, v12);
  }
  max_length = v14->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= max_length )
        sub_1B8661C(IsNullOrEmpty, v12);
      v18 = &v14->obj.klass + (int)v17;
      v19 = (System_String_o *)v18[4];
      if ( !v19 )
        goto LABEL_23;
      if ( System_String__Contains_61702268((System_String_o *)v18[4], 0x26u, 0LL) )
        v20 = 38;
      else
        v20 = 47;
      v21 = (System_Collections_ICollection_o *)BasicHelper__Convert2IntArray(v19, v20, 0LL);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v21, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v15 )
          goto LABEL_23;
        items = v15->fields._items;
        v25 = Method_System_Collections_Generic_List_int____Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v21,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v21;
          sub_1B8635C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v21, v22, v23);
        }
      }
      max_length = v14->max_length;
    }
    while ( (int)++v17 < max_length );
  }
  if ( !v15 )
    goto LABEL_23;
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v15,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_int____ToArray__);
}


BattleBuffData_IntervalData_o *__fastcall DataVals__GetIntervalData(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  BattleBuffData_IntervalData_o *v7; // x20

  if ( (byte_4A4DFFA & 1) == 0 )
  {
    sub_1B863B8(&BattleBuffData_IntervalData_TypeInfo, method);
    byte_4A4DFFA = 1;
  }
  if ( !DataVals__isParam(this, 131, v2)
    && !DataVals__isParam(this, 132, v4)
    && !DataVals__isParam(this, 207, v5)
    && !DataVals__isParam(this, 208, v6) )
  {
    return 0LL;
  }
  v7 = (BattleBuffData_IntervalData_o *)sub_1B86604(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_43786276(v7, this, 0LL);
  return v7;
}


System_Int32_array *__fastcall DataVals__GetLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1

  if ( (byte_4A4DFE5 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4DFE5 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 38, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B86614(0LL, v10);
  if ( !result->max_length )
    sub_1B8661C(result, v10);
  result->m_Items[1] = v8;
  return result;
}


int32_t __fastcall DataVals__GetMotionChange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 64, 0, v2);
}


int32_t __fastcall DataVals__GetNPFixedDamageValue(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 146, -1, v2);
}


System_Int32_array *__fastcall DataVals__GetNotSkillCopyTargetFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 127, v2);
}


System_Int32_array *__fastcall DataVals__GetNotSkillCopyTargetIndividualities(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 128, v2);
}


int32_t __fastcall DataVals__GetOverwriteFuncInvalidType(
        DataVals_o *this,
        int32_t defaultType,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, 212, defaultType, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParam(DataVals_o *this, int32_t type, int32_t defaultValue, const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x4
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4A4DFD7 & 1) == 0 )
  {
    sub_1B863B8(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_4A4DFD7 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetParam_39833900(this, type, v7, defaultValue, v8);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_SaveArrayData_array *__fastcall DataVals__GetParamAddIndividualityAndCheckArrayData(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ICollection_o *Int2DimensionalArray; // x19
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  void *monitor; // x8
  unsigned __int64 v15; // x23
  System_Int32_array *v16; // x22
  BattleBuffData_SaveArrayData_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4A4E000 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__Add__, *(_QWORD *)&type);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo, v7);
    sub_1B863B8(&BattleBuffData_SaveArrayData_TypeInfo, v8);
    byte_4A4E000 = 1;
  }
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, type, method);
  if ( BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0LL) )
    return 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__);
  if ( !Int2DimensionalArray )
LABEL_17:
    sub_1B86614(v12, v13);
  monitor = Int2DimensionalArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)monitor )
        sub_1B8661C(v12, v13);
      v16 = (System_Int32_array *)*((_QWORD *)&Int2DimensionalArray[2].klass + v15);
      v17 = (BattleBuffData_SaveArrayData_o *)sub_1B86604(BattleBuffData_SaveArrayData_TypeInfo);
      BattleBuffData_SaveArrayData___ctor_43798036(v17, v16, 0LL);
      if ( !v11 )
        goto LABEL_17;
      items = v11->fields._items;
      v21 = Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v17,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v17;
        sub_1B8635C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
      }
      LODWORD(monitor) = Int2DimensionalArray[1].monitor;
    }
    while ( (__int64)++v15 < (int)monitor );
  }
  if ( !v11 )
    goto LABEL_17;
  return (BattleBuffData_SaveArrayData_array *)System_Collections_Generic_List_object___ToArray(
                                                 v11,
                                                 (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__);
}


int32_t __fastcall DataVals__GetParamAddIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 189, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParamAddTypeIndex(
        DataVals_o *this,
        int32_t type,
        int32_t index,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x23
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x4
  int32_t v19; // [xsp+8h] [xbp-48h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4DFD9 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_24928/*"{0}_{1}"*/, v10);
    byte_4A4DFD9 = 1;
  }
  v20 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(
                          DataVals_TYPE_TypeInfo,
                          &v20,
                          *(_QWORD *)&index,
                          *(_QWORD *)&defaultValue,
                          method);
  v19 = index;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12, v13, v14);
  v16 = System_String__Format_61686468((System_String_o *)StringLiteral_24928/*"{0}_{1}"*/, v11, v15, 0LL);
  return DataVals__GetParam_39833900(this, type, v16, defaultValue, v17);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall DataVals__GetParamArray(DataVals_o *this, int32_t paramType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o *StrParam; // x21
  const MethodInfo *v8; // x3
  int32_t Param; // w0
  int32_t v10; // w19
  System_Int32_array *result; // x0
  __int64 v12; // x1

  if ( (byte_4A4DFF2 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    byte_4A4DFF2 = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, paramType, 0, v8);
  if ( Param < 1 )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B86614(0LL, v12);
  if ( !result->max_length )
    sub_1B8661C(result, v12);
  result->m_Items[1] = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall DataVals__GetParamArrayAddTypeIndex(
        DataVals_o *this,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  System_String_o *StrParamAddTypeIndex; // x22
  const MethodInfo *v10; // x4
  int32_t ParamAddTypeIndex; // w0
  int32_t v12; // w19
  System_Int32_array *result; // x0
  __int64 v14; // x1

  if ( (byte_4A4DFF3 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, *(_QWORD *)&paramType);
    sub_1B863B8(&StringLiteral_1/*""*/, v8);
    byte_4A4DFF3 = 1;
  }
  StrParamAddTypeIndex = DataVals__GetStrParamAddTypeIndex(
                           this,
                           paramType,
                           index,
                           (System_String_o *)StringLiteral_1/*""*/,
                           v4);
  if ( !System_String__IsNullOrEmpty(StrParamAddTypeIndex, 0LL) )
    return BasicHelper__Convert2IntArray(StrParamAddTypeIndex, 0x2Fu, 0LL);
  ParamAddTypeIndex = DataVals__GetParamAddTypeIndex(this, paramType, index, 0, v10);
  if ( ParamAddTypeIndex < 1 )
    return 0LL;
  v12 = ParamAddTypeIndex;
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B86614(0LL, v14);
  if ( !result->max_length )
    sub_1B8661C(result, v14);
  result->m_Items[1] = v12;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall DataVals__GetParamAsStringArray(
        DataVals_o *this,
        int32_t type,
        System_String_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_String_o *StrParam; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1

  if ( (byte_4A4DFE4 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, *(_QWORD *)&type);
    byte_4A4DFE4 = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0LL);
  if ( IsNullOrEmpty )
    return defaultValue;
  if ( !StrParam )
    sub_1B86614(IsNullOrEmpty, v10);
  return System_String__Split(StrParam, 0x2Fu, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataVals__GetParam_39833900(
        DataVals_o *this,
        int32_t type,
        System_String_o *name,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8

  if ( (byte_4A4DFD8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v9);
    byte_4A4DFD8 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)vals,
          (Il2CppObject *)name,
          (const MethodInfo_32C5BA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  vals = this->fields.vals;
  if ( !vals )
LABEL_9:
    sub_1B86614(vals, *(_QWORD *)&type);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           (const MethodInfo_32C5930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  FuncParamValueUpInfo_k__BackingField = this->fields._FuncParamValueUpInfo_k__BackingField;
  defaultValue = Item;
  if ( FuncParamValueUpInfo_k__BackingField )
    return ((__int64 (__fastcall *)(struct FuncParamValueUpInfoBase_o *, _QWORD, _QWORD, void *))FuncParamValueUpInfo_k__BackingField->klass->vtable._5_Enhance.method)(
             FuncParamValueUpInfo_k__BackingField,
             (unsigned int)type,
             Item,
             FuncParamValueUpInfo_k__BackingField->klass[1]._1.image);
  return defaultValue;
}


System_Int32_array *__fastcall DataVals__GetSameBuffLimitTargetIndividuality(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1

  if ( (byte_4A4DFE6 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4DFE6 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 39, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B86614(0LL, v10);
  if ( !result->max_length )
    sub_1B8661C(result, v10);
  result->m_Items[1] = v8;
  return result;
}


System_Int32_array *__fastcall DataVals__GetShortenMaxCountArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_ICollection_o *ParamArray; // x19
  System_Array_o *v6; // x0
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4A4DFFE & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, method);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D,
      v4);
    byte_4A4DFFE = 1;
  }
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 184, v2);
  if ( BasicHelper__IsNullOrEmpty(ParamArray, 0LL) )
  {
    v6 = (System_Array_o *)sub_1B86460(int___TypeInfo, 3LL);
    v8.fields.value = Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D;
    ParamArray = (System_Collections_ICollection_o *)v6;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v6, v8, 0LL);
  }
  return (System_Int32_array *)ParamArray;
}


System_Int32_array_array *__fastcall DataVals__GetSnapShotParamAddFieldIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 200, v2);
}


System_Int32_array_array *__fastcall DataVals__GetSnapShotParamAddOpIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 199, v2);
}


System_Int32_array_array *__fastcall DataVals__GetSnapShotParamAddSelfIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 198, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__GetStrParam(
        DataVals_o *this,
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4A4DFDB & 1) == 0 )
  {
    sub_1B863B8(&DataVals_TYPE_TypeInfo, *(_QWORD *)&type);
    byte_4A4DFDB = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0LL);
  return DataVals__GetStrParam_39834988(this, v7, defaultValue, v8);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__GetStrParamAddTypeIndex(
        DataVals_o *this,
        int32_t type,
        int32_t index,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  int32_t v19; // [xsp+8h] [xbp-48h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4DFDD & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_24928/*"{0}_{1}"*/, v10);
    byte_4A4DFDD = 1;
  }
  v20 = type;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v20, *(_QWORD *)&index, defaultValue, method);
  v19 = index;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v12, v13, v14);
  v16 = System_String__Format_61686468((System_String_o *)StringLiteral_24928/*"{0}_{1}"*/, v11, v15, 0LL);
  return DataVals__GetStrParam_39834988(this, v16, defaultValue, v17);
}


System_String_o *__fastcall DataVals__GetStrParam_39834988(
        DataVals_o *this,
        System_String_o *name,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v10; // x0

  if ( (byte_4A4DFDC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, name);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v7);
    byte_4A4DFDC = 1;
  }
  strVals = this->fields.strVals;
  if ( !strVals
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)strVals,
          (Il2CppObject *)name,
          (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return defaultValue;
  }
  v10 = this->fields.strVals;
  if ( !v10 )
    sub_1B86614(0LL, v9);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v10,
                              (Il2CppObject *)name,
                              (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_Int32_array *__fastcall DataVals__GetTargetBuffIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 187, v2);
}


System_Int32_array *__fastcall DataVals__GetTargetFunctionIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 186, v2);
}


System_Int32_array *__fastcall DataVals__GetTargetList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1

  if ( (byte_4A4DFE2 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4DFE2 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 32, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B86614(0LL, v10);
  if ( !result->max_length )
    sub_1B8661C(result, v10);
  result->m_Items[1] = v8;
  return result;
}


System_Int32_array *__fastcall DataVals__GetTargetRarityList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *StrParam; // x20
  const MethodInfo *v6; // x3
  int32_t Param; // w0
  int32_t v8; // w19
  System_Int32_array *result; // x0
  __int64 v10; // x1

  if ( (byte_4A4DFE7 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4DFE7 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, 43, 0, v6);
  if ( Param < 1 )
    return 0LL;
  v8 = Param;
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B86614(0LL, v10);
  if ( !result->max_length )
    sub_1B8661C(result, v10);
  result->m_Items[1] = v8;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall DataVals__GetTargetTypeIndexArray(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  System_Func_T__TResult__o *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_T__TResult__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__int__o *v35; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v36; // x0
  DataVals___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  System_Func_int__int__o *_9__146_2; // x20
  Il2CppObject *v40; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  int32_t v46; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A4DFFC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderBy_int__int___, *(_QWORD *)&type);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_string__int___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____, v8);
    sub_1B863B8(&System_Func_int__int__TypeInfo, v9);
    sub_1B863B8(&System_Func_KeyValuePair_string__int___bool__TypeInfo, v10);
    sub_1B863B8(&System_Func_string__int__TypeInfo, v11);
    sub_1B863B8(&System_Func_KeyValuePair_string__int___string__TypeInfo, v12);
    sub_1B863B8(&Method_System_Int32_Parse__, v13);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v14);
    sub_1B863B8(&Method_DataVals___c__GetTargetTypeIndexArray_b__146_2__, v15);
    sub_1B863B8(&Method_DataVals___c__DisplayClass146_0__GetTargetTypeIndexArray_b__0__, v16);
    sub_1B863B8(&Method_DataVals___c__DisplayClass146_0__GetTargetTypeIndexArray_b__1__, v17);
    sub_1B863B8(&DataVals___c__DisplayClass146_0_TypeInfo, v18);
    sub_1B863B8(&DataVals___c_TypeInfo, v19);
    sub_1B863B8(&StringLiteral_24925/*"{0}_"*/, v20);
    byte_4A4DFFC = 1;
  }
  v21 = sub_1B86604(DataVals___c__DisplayClass146_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  v46 = type;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v46, v22, v23, v24);
  v26 = System_String__Format((System_String_o *)StringLiteral_24925/*"{0}_"*/, v25, 0LL);
  if ( !v21 )
    sub_1B86614(v26, v27);
  *(_QWORD *)(v21 + 16) = v26;
  sub_1B8635C((CGThumbnailListItem_o *)(v21 + 16), (int32_t)v26, v28, v29);
  vals = this->fields.vals;
  v31 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_KeyValuePair_string__int___bool__TypeInfo);
  System_Func_KeyValuePair_object__int___bool____ctor(
    v31,
    (Il2CppObject *)v21,
    Method_DataVals___c__DisplayClass146_0__GetTargetTypeIndexArray_b__0__,
    0LL);
  v32 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_2FAEC18 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v33 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_KeyValuePair_string__int___string__TypeInfo);
  System_Func_KeyValuePair_object__int___object____ctor(
    v33,
    (Il2CppObject *)v21,
    Method_DataVals___c__DisplayClass146_0__GetTargetTypeIndexArray_b__1__,
    0LL);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                               v32,
                                                               (System_Func_TSource__TResult__o *)v33,
                                                               (const MethodInfo_2F9CDA8 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
  v35 = (System_Func_object__int__o *)sub_1B86604(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v35, 0LL, Method_System_Int32_Parse__, 0LL);
  v36 = System_Linq_Enumerable__Select_object__int_(
          v34,
          (System_Func_TSource__TResult__o *)v35,
          (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_string__int___);
  v37 = DataVals___c_TypeInfo;
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v37 = DataVals___c_TypeInfo;
  }
  _9__146_2 = v37->static_fields->__9__146_2;
  if ( !_9__146_2 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = DataVals___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__146_2 = (System_Func_int__int__o *)sub_1B86604(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__146_2, v40, Method_DataVals___c__GetTargetTypeIndexArray_b__146_2__, 0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__146_2 = _9__146_2;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__146_2, (int32_t)_9__146_2, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v38,
                                                               (System_Func_TSource__TKey__o *)_9__146_2,
                                                               (const MethodInfo_2F9A934 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v44,
           (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall DataVals__GetTriggeredFieldCountTargetFlag(
        DataVals_o *this,
        bool isActorEnemy,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Param; // w0
  bool v6; // zf
  int32_t result; // w0

  Param = DataVals__GetParam(this, 133, 0, v3);
  if ( Param )
  {
    if ( Param == 1 )
    {
      if ( isActorEnemy )
        return 1;
      else
        return 2;
    }
    else
    {
      v6 = Param == 2;
      result = 0;
      if ( v6 )
        return 3;
    }
  }
  else if ( isActorEnemy )
  {
    return 2;
  }
  else
  {
    return 1;
  }
  return result;
}


int32_t __fastcall DataVals__GetTriggeredFuncIndex(
        DataVals_o *this,
        bool *isSameTargetOnly,
        bool *isAllCond,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  param = 0;
  *isSameTargetOnly = 0;
  *isAllCond = 0;
  if ( DataVals__TryGetParam(this, 136, &param, method) )
  {
    *isSameTargetOnly = 1;
    return param;
  }
  if ( DataVals__TryGetParam(this, 137, &param, v7) )
  {
    *isAllCond = 1;
    return param;
  }
  return DataVals__GetParam(this, 79, 0, v8);
}


System_Int32_array *__fastcall DataVals__GetTriggeredFuncIndexArray(
        DataVals_o *this,
        bool *isAndCheck,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool ParamIntArray; // w8
  System_Int32_array *result; // x0
  System_Int32_array *paramArray; // [xsp+8h] [xbp-18h] BYREF

  paramArray = 0LL;
  *isAndCheck = 0;
  ParamIntArray = DataVals__TryGetParamIntArray(this, 190, &paramArray, v3);
  result = 0LL;
  if ( ParamIntArray )
  {
    *isAndCheck = 1;
    return paramArray;
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__o *__fastcall DataVals__GetUseInFsmParam(
        DataVals_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataVals___c_c *v11; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  System_Func_T__TResult__o *_9__43_0; // x20
  Il2CppObject *v14; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  DataVals___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T__TResult__o *_9__43_1; // x20
  Il2CppObject *v22; // x21
  struct DataVals___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Func_T__TResult__o *_9__43_2; // x21
  Il2CppObject *v27; // x22
  struct DataVals___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4A4DFD2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__int___string__int___, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____, v3);
    sub_1B863B8(&System_Func_KeyValuePair_string__int___int__TypeInfo, v4);
    sub_1B863B8(&System_Func_KeyValuePair_string__int___bool__TypeInfo, v5);
    sub_1B863B8(&System_Func_KeyValuePair_string__int___string__TypeInfo, v6);
    sub_1B863B8(&Method_DataVals___c__GetUseInFsmParam_b__43_0__, v7);
    sub_1B863B8(&Method_DataVals___c__GetUseInFsmParam_b__43_1__, v8);
    sub_1B863B8(&Method_DataVals___c__GetUseInFsmParam_b__43_2__, v9);
    sub_1B863B8(&DataVals___c_TypeInfo, v10);
    byte_4A4DFD2 = 1;
  }
  v11 = DataVals___c_TypeInfo;
  vals = this->fields.vals;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v11 = DataVals___c_TypeInfo;
  }
  _9__43_0 = (System_Func_T__TResult__o *)v11->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = DataVals___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__43_0 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_KeyValuePair_string__int___bool__TypeInfo);
    System_Func_KeyValuePair_object__int___bool____ctor(
      _9__43_0,
      v14,
      Method_DataVals___c__GetUseInFsmParam_b__43_0__,
      0LL);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_KeyValuePair_string__int___bool__o *)_9__43_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)_9__43_0,
          (const MethodInfo_2FAEC18 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v19 = DataVals___c_TypeInfo;
  v20 = v18;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v19 = DataVals___c_TypeInfo;
  }
  _9__43_1 = (System_Func_T__TResult__o *)v19->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = DataVals___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__43_1 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_KeyValuePair_string__int___string__TypeInfo);
    System_Func_KeyValuePair_object__int___object____ctor(
      _9__43_1,
      v22,
      Method_DataVals___c__GetUseInFsmParam_b__43_1__,
      0LL);
    v23 = DataVals___c_TypeInfo->static_fields;
    v23->__9__43_1 = (struct System_Func_KeyValuePair_string__int___string__o *)_9__43_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v23->__9__43_1, (int32_t)_9__43_1, v24, v25);
    v19 = DataVals___c_TypeInfo;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = DataVals___c_TypeInfo;
  }
  _9__43_2 = (System_Func_T__TResult__o *)v19->static_fields->__9__43_2;
  if ( !_9__43_2 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = DataVals___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v19->static_fields->__9;
    _9__43_2 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_KeyValuePair_string__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__43_2,
      v27,
      Method_DataVals___c__GetUseInFsmParam_b__43_2__,
      0LL);
    v28 = DataVals___c_TypeInfo->static_fields;
    v28->__9__43_2 = (struct System_Func_KeyValuePair_string__int___int__o *)_9__43_2;
    sub_1B8635C((CGThumbnailListItem_o *)&v28->__9__43_2, (int32_t)_9__43_2, v29, v30);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_object__int___object__int_(
                                                                   v20,
                                                                   (System_Func_TSource__TKey__o *)_9__43_1,
                                                                   (System_Func_TSource__TElement__o *)_9__43_2,
                                                                   (const MethodInfo_2FA9FA4 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__int___string__int___);
}


System_String_array *__fastcall DataVals__GetValsArray(System_String_o *vals, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  long double inited; // q0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_4A4DFCD & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_string___, method);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v3);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v5);
    byte_4A4DFCD = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(vals, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v9 = Method_System_Array_Empty_string___;
    v10 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
    if ( !v10 )
    {
      sub_1BD6AA4(Method_System_Array_Empty_string___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BD6A48(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BD6A48(inited);
    return **(System_String_array ***)(v12 + 184);
  }
  else
  {
    if ( !vals
      || (IsNullOrEmpty = System_String__Replace_61691724(
                            vals,
                            (System_String_o *)StringLiteral_15580/*"["*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL
      || (IsNullOrEmpty = System_String__Replace_61691724(
                            IsNullOrEmpty,
                            (System_String_o *)StringLiteral_15836/*"]"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL )
    {
      sub_1B86614(IsNullOrEmpty, v7);
    }
    return System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall DataVals__GetValsList(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o *StrParam; // x21
  const MethodInfo *v8; // x3
  int32_t Param; // w0
  int32_t v10; // w19
  System_Int32_array *result; // x0
  __int64 v12; // x1

  if ( (byte_4A4DFE3 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, *(_QWORD *)&type);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    byte_4A4DFE3 = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0LL);
  Param = DataVals__GetParam(this, type, 0, v8);
  if ( !Param )
    return 0LL;
  v10 = Param;
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B86614(0LL, v12);
  if ( !result->max_length )
    sub_1B8661C(result, v12);
  result->m_Items[1] = v10;
  return result;
}


int32_t __fastcall DataVals__GetValue(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 3, 0, v2);
}


int32_t __fastcall DataVals__GetValue2(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 4, 0, v2);
}


bool __fastcall DataVals__HasBgmPriorityInVals(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return DataVals__isParam(this, 160, v2) || DataVals__isParam(this, 111, v4);
}


bool __fastcall DataVals__IsActAttackFunction(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 148, 0, v2) > 0;
}


bool __fastcall DataVals__IsActNoDamageBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 124, 0, v2) == 1;
}


bool __fastcall DataVals__IsAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  System_String_o *v10; // x0

  if ( (byte_4A4DFEB & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4DFEB = 1;
  }
  if ( DataVals__GetParam(this, 37, 0, v2) )
    return 1;
  StrParam = DataVals__GetStrParam(this, 37, (System_String_o *)StringLiteral_1/*""*/, v4);
  if ( !System_String__IsNullOrEmpty(StrParam, 0LL) || DataVals__GetParam(this, 112, 0, v6) )
  {
    return 1;
  }
  else
  {
    v10 = DataVals__GetStrParam(this, 112, (System_String_o *)StringLiteral_1/*""*/, v7);
    return !System_String__IsNullOrEmpty(v10, 0LL);
  }
}


bool __fastcall DataVals__IsAddLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0

  if ( (byte_4A4DFEC & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4DFEC = 1;
  }
  if ( DataVals__GetParam(this, 38, 0, v2) )
  {
    return 1;
  }
  else
  {
    StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v4);
    return !System_String__IsNullOrEmpty(StrParam, 0LL);
  }
}


bool __fastcall DataVals__IsAdjustmentBuffTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  return DataVals__isParam(this, 167, v2)
      || DataVals__isParam(this, 168, v4)
      || DataVals__isParam(this, 169, v5)
      || DataVals__isParam(this, 170, v6);
}


bool __fastcall DataVals__IsBehaveAsFamilyBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  return !DataVals__isParam(this, 98, v2) || DataVals__GetParam(this, 98, 0, v4) > 0;
}


bool __fastcall DataVals__IsCancelTransform(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 143, v2);
}


bool __fastcall DataVals__IsChangeTDCommandType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 52, 0, v2) != 0;
}


bool __fastcall DataVals__IsCopyFunctionTargetPTOnly(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 121, 0, v2) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsDependOverCharge(DataVals_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_4A4DFEF & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_IndexValue_bool___, *(_QWORD *)&index);
    byte_4A4DFEF = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_2F5C3BC *)Method_BasicHelper_IndexValue_bool___);
}


bool __fastcall DataVals__IsEndBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 35, 0, v2) != 0;
}


bool __fastcall DataVals__IsEqualsTo1(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, type, 0, v3) == 1;
}


bool __fastcall DataVals__IsEvenIfWinDie(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 86, 0, v2) == 1;
}


bool __fastcall DataVals__IsExistSnapShotParamAddIndv(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_ICollection_o *ParamArray; // x24
  const MethodInfo *v5; // x2
  System_Collections_ICollection_o *v6; // x23
  const MethodInfo *v7; // x2
  System_Collections_ICollection_o *v8; // x22
  const MethodInfo *v9; // x2
  System_Collections_ICollection_o *Int2DimensionalArray; // x21
  const MethodInfo *v11; // x2
  System_Collections_ICollection_o *v12; // x20
  const MethodInfo *v13; // x2
  System_Collections_ICollection_o *v14; // x19

  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 152, v2);
  v6 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 153, v5);
  v8 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 154, v7);
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 198, v9);
  v12 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 199, v11);
  v14 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 200, v13);
  return !BasicHelper__IsNullOrEmpty(ParamArray, 0LL)
      || !BasicHelper__IsNullOrEmpty(v6, 0LL)
      || !BasicHelper__IsNullOrEmpty(v8, 0LL)
      || !BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0LL)
      || !BasicHelper__IsNullOrEmpty(v12, 0LL)
      || !BasicHelper__IsNullOrEmpty(v14, 0LL);
}


bool __fastcall DataVals__IsExtendBuffHalfTurnInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 167, v2);
}


bool __fastcall DataVals__IsExtendBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 169, v2);
}


bool __fastcall DataVals__IsForceTurnProgressIfTimingIsOverInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 211, 0, v2) == 1;
}


bool __fastcall DataVals__IsForceTurnProgressIfTimingIsOverInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 210, 0, v2) == 1;
}


bool __fastcall DataVals__IsForciblyAddState(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  return DataVals__isParam(this, 50, v2) || DataVals__isParam(this, 88, v4) || DataVals__isParam(this, 113, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsHideNoEffect(DataVals_o *this, int32_t targetId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t Param; // w0
  const MethodInfo *v11; // x2
  __int64 v12; // x21
  __int64 Value_int__Int32Enum; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_DataVals_InvalidCause__o *v15; // x19
  System_Func_T__TResult__o *v16; // x20
  System_Collections_Generic_List_DataVals_InvalidCause__o *resultList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4DFE9 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_GetValue_int__DataVals_InvalidCause___, *(_QWORD *)&targetId);
    sub_1B863B8(&Method_System_Linq_Enumerable_All_DataVals_InvalidCause___, v6);
    sub_1B863B8(&System_Func_DataVals_InvalidCause__bool__TypeInfo, v7);
    sub_1B863B8(&Method_DataVals___c__DisplayClass84_0__IsHideNoEffect_b__0__, v8);
    sub_1B863B8(&DataVals___c__DisplayClass84_0_TypeInfo, v9);
    byte_4A4DFE9 = 1;
  }
  resultList = 0LL;
  Param = DataVals__GetParam(this, 12, 0, v3);
  if ( Param != 1 )
  {
    if ( DataVals__TryGetDisplayNoEffectCauseList(this, &resultList, v11) )
    {
      v12 = sub_1B86604(DataVals___c__DisplayClass84_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v12, 0LL);
      Value_int__Int32Enum = BasicHelper__GetValue_int__Int32Enum_(
                               (System_Collections_Generic_Dictionary_K__V__o *)this->fields.invalidCauseDict,
                               targetId,
                               0,
                               (const MethodInfo_2F5BC34 *)Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
      if ( !v12 )
        sub_1B86614(Value_int__Int32Enum, v14);
      *(_DWORD *)(v12 + 16) = Value_int__Int32Enum;
      v15 = resultList;
      v16 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_DataVals_InvalidCause__bool__TypeInfo);
      System_Func_Int32Enum__bool____ctor(
        v16,
        (Il2CppObject *)v12,
        Method_DataVals___c__DisplayClass84_0__IsHideNoEffect_b__0__,
        0LL);
      LOBYTE(Param) = System_Linq_Enumerable__All_Int32Enum_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                        (System_Func_TSource__bool__o *)v16,
                        (const MethodInfo_2F79EE8 *)Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
    }
    else
    {
      LOBYTE(Param) = 0;
    }
  }
  return Param & 1;
}


bool __fastcall DataVals__IsIgnoreShiftSafeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 147, 0, v2) == 1;
}


bool __fastcall DataVals__IsIncludeIgnoreIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 85, 0, v2) == 1;
}


bool __fastcall DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 171, v2);
}


bool __fastcall DataVals__IsLoseBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 36, 0, v2) != 0;
}


bool __fastcall DataVals__IsMatchFriendShipCondition(DataVals_o *this, int32_t friendShip, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, 180, 0, v3) <= friendShip;
}


bool __fastcall DataVals__IsOnParty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 92, 0, v2) == 1;
}


bool __fastcall DataVals__IsOpponentOnly(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 33, 0, v2) != 0;
}


bool __fastcall DataVals__IsOverChargeState(DataVals_o *this, int32_t state, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.overChargeState & state) < 0) ^ v3 | ((this->fields.overChargeState & state) == 0));
}


bool __fastcall DataVals__IsParam(DataVals_o *this, System_String_o *typeKey, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_4A4DFDF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, typeKey);
    byte_4A4DFDF = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1B86614(0LL, typeKey);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)typeKey,
           (const MethodInfo_32C5BA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall DataVals__IsParamAddBattlePoint(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return DataVals__isParam(this, 182, v2) && DataVals__isParam(this, 183, v4);
}


bool __fastcall DataVals__IsProgressTurnOnBoard(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 141, 0, v2) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsSatisfyAboveBelowCond(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  DataVals_o *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_String_o *ParamKey; // x20
  System_Func_bool__int__bool__o *v17; // x21
  const MethodInfo *v18; // x4

  if ( (byte_4A4DFF6 & 1) == 0 )
  {
    sub_1B863B8(&System_Func_bool__int__bool__TypeInfo, *(_QWORD *)&paramType);
    sub_1B863B8(&Method_DataVals___c__DisplayClass117_0__IsSatisfyAboveBelowCond_b__0__, v9);
    sub_1B863B8(&DataVals___c__DisplayClass117_0_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_1545/*"<="*/, v11);
    byte_4A4DFF6 = 1;
  }
  v12 = sub_1B86604(DataVals___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B86614(v13, v14);
  *(_DWORD *)(v12 + 16) = compareVal;
  ParamKey = DataVals__MakeParamKey(v13, paramType, index, v15);
  v17 = (System_Func_bool__int__bool__o *)sub_1B86604(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_DataVals___c__DisplayClass117_0__IsSatisfyAboveBelowCond_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, ParamKey, (System_String_o *)StringLiteral_1545/*"<="*/, v17, v18);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsSatisfyAboveBelowCondition(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x20
  System_Func_bool__int__bool__o *v15; // x21
  const MethodInfo *v16; // x4
  System_Enum_o v18; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+18h] [xbp-48h]

  if ( (byte_4A4DFF7 & 1) == 0 )
  {
    sub_1B863B8(&System_Func_bool__int__bool__TypeInfo, *(_QWORD *)&paramType);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v7);
    sub_1B863B8(&Method_DataVals___c__DisplayClass118_0__IsSatisfyAboveBelowCondition_b__0__, v8);
    sub_1B863B8(&DataVals___c__DisplayClass118_0_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_1510/*"<"*/, v10);
    byte_4A4DFF7 = 1;
  }
  v11 = sub_1B86604(DataVals___c__DisplayClass118_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B86614(v12, v13);
  *(_DWORD *)(v11 + 16) = compareVal;
  v18.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v18.monitor = (void *)-1LL;
  v19 = paramType;
  v14 = System_Enum__ToString(&v18, 0LL);
  v15 = (System_Func_bool__int__bool__o *)sub_1B86604(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_DataVals___c__DisplayClass118_0__IsSatisfyAboveBelowCondition_b__0__,
    0LL);
  return DataVals__IsSatisfyRangeCondition(this, v14, (System_String_o *)StringLiteral_1510/*"<"*/, v15, v16);
}


bool __fastcall DataVals__IsSatisfyCommonReleaseId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w20
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  CommonReleaseMaster_o *v10; // x19
  int32_t v11; // w1
  char v12; // w8
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4DFF1 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_CommonReleaseMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&System_Math_TypeInfo, v5);
    byte_4A4DFF1 = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 209, &param, v2) )
  {
    v6 = param;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    v9 = param;
    v10 = (CommonReleaseMaster_o *)Master_object;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( !v10 )
      sub_1B86614(Master_object, v8);
    if ( v9 >= 0 )
      v11 = v9;
    else
      v11 = -v9;
    v12 = (v6 < 0) ^ CommonReleaseMaster__IsOpen(v10, v11, 0LL, 0, 0LL);
  }
  else
  {
    v12 = 1;
  }
  return v12 & 1;
}


bool __fastcall DataVals__IsSatisfyRangeCondition(
        DataVals_o *this,
        System_String_o *paramType,
        System_String_o *compareKey,
        System_Func_bool__int__bool__o *funcCompare,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *StrParam_39834988; // x22
  __int64 IsMatch; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x21
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  System_String_o *v31; // x21
  int v32; // w8
  __int64 v33; // x22
  unsigned int v34; // w25
  System_String_o *v35; // x23
  System_String_o *v36; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4DFF8 & 1) == 0 )
  {
    sub_1B863B8(&System_Text_RegularExpressions_Regex_TypeInfo, paramType);
    sub_1B863B8(&string___TypeInfo, v9);
    sub_1B863B8(&StringLiteral_737/*"(^"*/, v10);
    sub_1B863B8(&StringLiteral_15819/*"\\d+$|^\\d+"*/, v11);
    sub_1B863B8(&StringLiteral_1/*""*/, v12);
    sub_1B863B8(&StringLiteral_456/*"$)"*/, v13);
    byte_4A4DFF8 = 1;
  }
  result = 0;
  StrParam_39834988 = DataVals__GetStrParam_39834988(
                        this,
                        paramType,
                        (System_String_o *)StringLiteral_1/*""*/,
                        (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam_39834988, 0LL) )
    return 1;
  IsMatch = sub_1B86460(string___TypeInfo, 5LL);
  if ( !IsMatch )
    goto LABEL_25;
  v19 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
    goto LABEL_26;
  v20 = StringLiteral_737/*"(^"*/;
  *(_QWORD *)(IsMatch + 32) = StringLiteral_737/*"(^"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(IsMatch + 32), v20, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u
    || (*(_QWORD *)(v19 + 40) = compareKey,
        sub_1B8635C((CGThumbnailListItem_o *)(v19 + 40), (int32_t)compareKey, v21, v22),
        *(_DWORD *)(v19 + 24) <= 2u)
    || (v25 = StringLiteral_15819/*"\\d+$|^\\d+"*/,
        *(_QWORD *)(v19 + 48) = StringLiteral_15819/*"\\d+$|^\\d+"*/,
        sub_1B8635C((CGThumbnailListItem_o *)(v19 + 48), v25, v23, v24),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (*(_QWORD *)(v19 + 56) = compareKey,
        sub_1B8635C((CGThumbnailListItem_o *)(v19 + 56), (int32_t)compareKey, v26, v27),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_26:
    sub_1B8661C(IsMatch, v16);
  }
  v30 = StringLiteral_456/*"$)"*/;
  *(_QWORD *)(v19 + 64) = StringLiteral_456/*"$)"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v19 + 64), v30, v28, v29);
  IsMatch = (__int64)System_String__Concat_61685692((System_String_array *)v19, 0LL);
  if ( !StrParam_39834988
    || (v31 = (System_String_o *)IsMatch,
        (IsMatch = (__int64)System_String__Split(StrParam_39834988, 0x2Fu, 0, 0LL)) == 0) )
  {
LABEL_25:
    sub_1B86614(IsMatch, v16);
  }
  v32 = *(_DWORD *)(IsMatch + 24);
  v33 = IsMatch;
  if ( v32 < 1 )
    return 1;
  v34 = 0;
  while ( 1 )
  {
    if ( v34 >= v32 )
      goto LABEL_26;
    v35 = *(System_String_o **)(v33 + 8LL * (int)v34 + 32);
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v35, v31, 0LL);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v35 )
      goto LABEL_25;
    v36 = System_String__Replace_61691724(v35, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !System_Int32__TryParse(v36, &result, 0LL) )
      return 0;
    IsMatch = System_String__StartsWith(v35, compareKey, 0LL);
    if ( !funcCompare )
      goto LABEL_25;
    IsMatch = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))funcCompare->fields.m_target)(
                funcCompare->fields.original_method_info,
                IsMatch & 1,
                (unsigned int)result,
                *(_QWORD *)&funcCompare->fields.extra_arg);
    if ( (IsMatch & 1) == 0 )
      return 0;
    v32 = *(_DWORD *)(v33 + 24);
    if ( (int)++v34 >= v32 )
      return 1;
  }
}


bool __fastcall DataVals__IsShortenBuffHalfTurnInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 168, v2);
}


bool __fastcall DataVals__IsShortenBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 170, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x20
  Il2CppObject *v7; // x0
  System_Enum_o v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h]

  if ( (byte_4A4DFE0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, *(_QWORD *)&type);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v5);
    byte_4A4DFE0 = 1;
  }
  strVals = this->fields.strVals;
  if ( strVals )
  {
    v11 = type;
    v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v10.monitor = (void *)-1LL;
    v7 = (Il2CppObject *)System_Enum__ToString(&v10, 0LL);
    return System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)strVals,
             v7,
             (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  }
  else
  {
    return 0;
  }
}


bool __fastcall DataVals__IsWinBattleNotRelatedSurvivalStatus(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 57, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataVals__MakeParamKey(
        DataVals_o *this,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_Enum_o v15; // [xsp+8h] [xbp-48h] BYREF
  int32_t v16; // [xsp+18h] [xbp-38h]
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4A4DFF5 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&paramType);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_24928/*"{0}_{1}"*/, v8);
    byte_4A4DFF5 = 1;
  }
  if ( index == 0x7FFFFFFF )
  {
    v15.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v15.monitor = (void *)-1LL;
    v16 = paramType;
    return System_Enum__ToString(&v15, 0LL);
  }
  else
  {
    LODWORD(v15.klass) = paramType;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v15, *(_QWORD *)&index, method, v4);
    v17 = index;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
    return System_String__Format_61686468((System_String_o *)StringLiteral_24928/*"{0}_{1}"*/, v10, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__OnOverChargeState(
        DataVals_o *this,
        DataVals_o *compVals,
        int32_t type,
        int32_t state,
        const MethodInfo *method)
{
  __int64 Param; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  Param = DataVals__GetParam(this, type, 0, *(const MethodInfo **)&state);
  if ( !compVals )
    sub_1B86614(Param, v10);
  if ( (_DWORD)Param != DataVals__GetParam(compVals, type, 0, v11) )
    this->fields.overChargeState |= state;
}


void __fastcall DataVals__SetDependDataVals(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t *funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  struct System_Collections_Generic_List_DataVals__o **p_dependDataValsList; // x22
  int32_t size; // w2
  int v16; // w9
  DataVals_c **v17; // x28
  System_String_o **v18; // x27
  System_String_o **v19; // x20
  int32_t v20; // w23
  int32_t i; // w24
  DataVals_c *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x5
  DataVals_o *v25; // x26
  const MethodInfo *v26; // x3
  System_String_o *v27; // x0
  const MethodInfo *v28; // x5
  System_String_o *v29; // x25
  System_String_o *IsNullOrEmpty; // x0
  __int64 v31; // x1
  DataVals_c **v32; // x29
  System_String_o **v33; // x28
  System_String_o **v34; // x20
  System_Collections_Generic_List_object__o *v35; // x27
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  DataVals_o *v40; // x26
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x2
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_String_Fields fields; // x8
  _QWORD *v47; // x9
  __int64 klass_low; // x10
  __int64 v49; // x8
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A4DFCF & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, funcMst);
    sub_1B863B8(&DataVals_TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_DataVals__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_DataVals__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_DataVals___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_DataVals__TypeInfo, v9);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v10);
    sub_1B863B8(&StringLiteral_1/*""*/, v11);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v12);
    byte_4A4DFCF = 1;
  }
  result = 0;
  p_dependDataValsList = &this->fields.dependDataValsList;
  dependDataValsList = this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    size = dependDataValsList->fields._size;
    v16 = dependDataValsList->fields._version + 1;
    dependDataValsList->fields._size = 0;
    dependDataValsList->fields._version = v16;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)dependDataValsList->fields._items, 0, size, 0LL);
  }
  v17 = &DataVals_TypeInfo;
  v18 = (System_String_o **)&StringLiteral_15580/*"["*/;
  v19 = (System_String_o **)&StringLiteral_15836/*"]"*/;
  v20 = 0;
  for ( i = 1; ; ++i )
  {
    v22 = *v17;
    if ( !(*v17)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = *v17;
    }
    if ( i > v22->static_fields->MAX_DEPEND_FUNC )
      break;
    v23 = DataVals__ConcatenateTypeValue((DataVals_o *)v22, 44, i, method);
    v25 = (DataVals_o *)DataVals__cutValue(this, v23, 0x5Bu, 0x5Du, 1, v24);
    v27 = DataVals__ConcatenateTypeValue(v25, 45, i, v26);
    v29 = DataVals__cutValue(this, v27, 0x5Bu, 0x5Du, 1, v28);
    if ( System_String__IsNullOrEmpty((System_String_o *)v25, 0LL) )
      break;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v29, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      break;
    if ( !*p_dependDataValsList )
    {
      v32 = v17;
      v33 = v19;
      v34 = v18;
      v35 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v35,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v36 = (int)v35;
      *p_dependDataValsList = (struct System_Collections_Generic_List_DataVals__o *)v35;
      v18 = v34;
      v19 = v33;
      v17 = v32;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dependDataValsList, v36, v37, v38);
    }
    result = 0;
    if ( !v25
      || (IsNullOrEmpty = System_String__Replace_61691724(
                            (System_String_o *)v25,
                            *v18,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0LL)) == 0LL )
    {
LABEL_27:
      sub_1B86614(IsNullOrEmpty, v31);
    }
    v39 = System_String__Replace_61691724(IsNullOrEmpty, *v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( System_Int32__TryParse(v39, &result, 0LL) )
    {
      v40 = (DataVals_o *)sub_1B86604(*v17);
      DataVals___ctor(v40, v29, v41);
      IsNullOrEmpty = (System_String_o *)funcMst;
      if ( !funcMst )
        goto LABEL_27;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)funcMst,
                                           result,
                                           (const MethodInfo_3214280 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v40 )
        goto LABEL_27;
      DataVals__SetType_39830676(v40, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v42);
      v40->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v20, v43);
      IsNullOrEmpty = (System_String_o *)this->fields.dependDataValsList;
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      fields = IsNullOrEmpty->fields;
      v47 = Method_System_Collections_Generic_List_DataVals__Add__;
      ++HIDWORD(IsNullOrEmpty[1].klass);
      if ( !*(_QWORD *)&fields )
        goto LABEL_27;
      klass_low = SLODWORD(IsNullOrEmpty[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (Il2CppObject *)v40,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(IsNullOrEmpty[1].klass) = klass_low + 1;
        *(_QWORD *)(v49 + 32) = v40;
        sub_1B8635C((CGThumbnailListItem_o *)(v49 + 32), (int32_t)v40, v44, v45);
      }
      ++v20;
      ++*funcIndex;
    }
  }
}


void __fastcall DataVals__SetDependOverChargeFlag(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals__o *dependDataList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  __int64 size; // x1
  struct System_Boolean_array *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x8
  struct System_Boolean_array *v14; // x21
  unsigned __int64 v15; // x22
  Il2CppObject *Item; // x23
  const MethodInfo *v17; // x2

  if ( (byte_4A4DFEE & 1) == 0 )
  {
    sub_1B863B8(&bool___TypeInfo, dependDataList);
    sub_1B863B8(&Method_System_Collections_Generic_List_DataVals__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_DataVals__get_Item__, v6);
    byte_4A4DFEE = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v9 = (struct System_Boolean_array *)sub_1B86460(bool___TypeInfo, size);
        v13 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
        if ( !v13 )
LABEL_13:
          sub_1B86614(v9, v10);
        v14 = v9;
        v15 = 0LL;
        while ( (__int64)v15 < v13->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v13,
                   v15,
                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          v9 = (struct System_Boolean_array *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)dependDataList,
                                                v15,
                                                (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          if ( Item )
          {
            v9 = (struct System_Boolean_array *)DataVals__CheckOverCharge((DataVals_o *)Item, (DataVals_o *)v9, v17);
            if ( v14 )
            {
              if ( v15 >= v14->max_length )
                sub_1B8661C(v9, v10);
              v14->m_Items[v15 + 4] = (unsigned __int8)v9 & 1;
              v13 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
              ++v15;
              if ( v13 )
                continue;
            }
          }
          goto LABEL_13;
        }
        this->fields._dependOverChargeArray_k__BackingField = v14;
        sub_1B8635C(
          (CGThumbnailListItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (int32_t)v14,
          v11,
          v12);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
DataVals_o *__fastcall DataVals__SetInvalidCauseByAnyBuff(DataVals_o *this, int32_t targetId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *invalidCauseDict; // x0

  if ( (byte_4A4DFCB & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__,
      *(_QWORD *)&targetId);
    byte_4A4DFCB = 1;
  }
  invalidCauseDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.invalidCauseDict;
  if ( !invalidCauseDict )
    sub_1B86614(0LL, *(_QWORD *)&targetId);
  System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
    invalidCauseDict,
    targetId,
    1,
    (const MethodInfo_3267A90 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
  return this;
}


void __fastcall DataVals__SetOverCharge(DataVals_o *this, bool flg, const MethodInfo *method)
{
  this->fields._isOverCharge_k__BackingField = flg;
}


void __fastcall DataVals__SetTempType(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t ft,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_svals; // x21
  struct System_String_o *svals; // x22
  const MethodInfo *v8; // x2
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t funcIndex; // [xsp+Ch] [xbp-24h] BYREF

  funcIndex = 0;
  p_svals = (CGThumbnailListItem_o *)&this->fields.svals;
  svals = this->fields.svals;
  DataVals__SetDependDataVals(this, funcMst, &funcIndex, method);
  DataVals__SetType(this, ft, v8);
  p_svals->klass = (CGThumbnailListItem_c *)svals;
  sub_1B8635C(p_svals, (int32_t)svals, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType(DataVals_o *this, int32_t ft, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *svals; // x0
  __int64 v15; // x8
  _DWORD *v16; // x29
  DataVals_TYPE_c **v17; // x24
  const MethodInfo_32C5BA4 **v18; // x28
  const MethodInfo_32C59B0 **v19; // x21
  unsigned __int64 v20; // x26
  char *v21; // x20
  Il2CppObject *v22; // x22
  int32_t funcType; // w8
  void *v24; // x23
  DataVals_o *v25; // x29
  const MethodInfo_32C59B0 **v26; // x27
  const MethodInfo_32C5BA4 **v27; // x21
  DataVals_TYPE_c **v28; // x28
  System_Collections_Generic_Dictionary_object__object__o *v29; // x24
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int v33; // w8
  System_Enum_c *v34; // x8
  int v35; // w8
  _DWORD *v36; // [xsp+0h] [xbp-90h]
  CGThumbnailListItem_o *p_strVals; // [xsp+8h] [xbp-88h]
  System_Enum_o v38; // [xsp+10h] [xbp-80h] BYREF
  int v39; // [xsp+20h] [xbp-70h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A4DFCE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, *(_QWORD *)&ft);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v9);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v11);
    sub_1B863B8(&StringLiteral_1/*""*/, v12);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v13);
    byte_4A4DFCE = 1;
  }
  result = 0;
  svals = this->fields.svals;
  this->fields.funcType = ft;
  if ( !svals
    || (svals = System_String__Replace_61691724(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15580/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_61691724(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15836/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_90:
    sub_1B86614(svals, *(_QWORD *)&ft);
  }
  v15 = *((_QWORD *)svals + 3);
  v16 = svals;
  if ( (int)v15 >= 1 )
  {
    v17 = &DataVals_TYPE_TypeInfo;
    v18 = (const MethodInfo_32C5BA4 **)&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__;
    v19 = (const MethodInfo_32C59B0 **)&Method_System_Collections_Generic_Dictionary_string__int__Add__;
    v20 = 0LL;
    v21 = (char *)svals + 32;
    v36 = svals;
    p_strVals = (CGThumbnailListItem_o *)&this->fields.strVals;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v15 )
LABEL_91:
        sub_1B8661C(svals, *(_QWORD *)&ft);
      v22 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v21[8 * v20], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v20 >= (unsigned int)v16[6] )
          goto LABEL_91;
        svals = *(void **)&v21[8 * v20];
        if ( !svals )
          goto LABEL_90;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_90;
        v24 = svals;
        if ( *((int *)svals + 6) >= 2 )
        {
          v22 = (Il2CppObject *)*((_QWORD *)svals + 4);
          if ( !System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0LL) )
          {
            svals = p_strVals->klass;
            if ( !p_strVals->klass )
            {
              v25 = this;
              v26 = v19;
              v27 = v18;
              v28 = v17;
              v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_object__object____ctor(
                v29,
                (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              v30 = (int)v29;
              p_strVals->klass = (CGThumbnailListItem_c *)v29;
              v17 = v28;
              v18 = v27;
              v19 = v26;
              this = v25;
              v16 = v36;
              sub_1B8635C(p_strVals, v30, v31, v32);
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_90;
            }
            svals = (void *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                              (System_Collections_Generic_Dictionary_object__object__o *)svals,
                              v22,
                              (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( ((unsigned __int8)svals & 1) == 0 )
            {
              if ( *((_DWORD *)v24 + 6) <= 1u )
                goto LABEL_91;
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_90;
              System_Collections_Generic_Dictionary_object__object___Add(
                (System_Collections_Generic_Dictionary_object__object__o *)svals,
                v22,
                *((Il2CppObject **)v24 + 5),
                (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
            }
          }
        }
        goto LABEL_72;
      }
      funcType = this->fields.funcType;
      if ( funcType <= 52 )
      {
        if ( funcType <= 10 )
        {
          if ( funcType != 1 )
          {
            if ( funcType != 2 && (unsigned int)(funcType - 9) > 1 )
              goto LABEL_63;
            goto LABEL_57;
          }
          goto LABEL_49;
        }
        if ( funcType <= 27 )
        {
          if ( funcType > 17 )
          {
            if ( funcType != 18 && funcType != 27 )
              goto LABEL_63;
          }
          else if ( funcType != 15 )
          {
            if ( funcType != 16 )
              goto LABEL_63;
LABEL_49:
            switch ( (int)v20 )
            {
              case 0:
                goto LABEL_66;
              case 1:
                v38.klass = (System_Enum_c *)*v17;
                v38.monitor = (void *)-1LL;
                v33 = 1;
                goto LABEL_70;
              case 2:
                v38.klass = (System_Enum_c *)*v17;
                v38.monitor = (void *)-1LL;
                v33 = 2;
                goto LABEL_70;
              case 3:
                goto LABEL_68;
              case 4:
                v38.klass = (System_Enum_c *)*v17;
                v38.monitor = (void *)-1LL;
                v33 = 5;
                goto LABEL_70;
              case 5:
                goto LABEL_58;
              default:
                goto LABEL_72;
            }
            goto LABEL_72;
          }
        }
        else if ( funcType != 47 )
        {
          if ( funcType == 52 )
            goto LABEL_57;
          goto LABEL_63;
        }
        goto LABEL_61;
      }
      if ( funcType > 121 )
      {
        if ( funcType > 146 )
        {
          if ( funcType != 149 && funcType != 154 )
            goto LABEL_63;
LABEL_57:
          if ( (_DWORD)v20 != 2 )
            goto LABEL_64;
LABEL_58:
          v38.klass = (System_Enum_c *)*v17;
          v38.monitor = (void *)-1LL;
          v33 = 4;
          goto LABEL_70;
        }
        if ( funcType <= 141 )
        {
          if ( funcType != 130 )
          {
            if ( funcType != 131 && funcType != 133 )
              goto LABEL_63;
            goto LABEL_57;
          }
          goto LABEL_49;
        }
        if ( funcType == 142 )
        {
          if ( (_DWORD)v20 == 2 )
          {
            v38.klass = (System_Enum_c *)*v17;
            v38.monitor = (void *)-1LL;
            v33 = 174;
            goto LABEL_70;
          }
          if ( (_DWORD)v20 == 1 )
          {
            v38.klass = (System_Enum_c *)*v17;
            v38.monitor = (void *)-1LL;
            v33 = 173;
            goto LABEL_70;
          }
LABEL_65:
          if ( (_DWORD)v20 )
            goto LABEL_72;
LABEL_66:
          v34 = (System_Enum_c *)*v17;
          v39 = 0;
          v38.klass = v34;
          v38.monitor = (void *)-1LL;
          goto LABEL_71;
        }
        if ( funcType != 143 )
        {
          if ( funcType == 146 )
            goto LABEL_57;
LABEL_63:
          if ( (_DWORD)v20 == 2 )
          {
LABEL_69:
            v38.klass = (System_Enum_c *)*v17;
            v38.monitor = (void *)-1LL;
            v33 = 6;
          }
          else
          {
LABEL_64:
            if ( (_DWORD)v20 != 1 )
              goto LABEL_65;
LABEL_68:
            v38.klass = (System_Enum_c *)*v17;
            v38.monitor = (void *)-1LL;
            v33 = 3;
          }
LABEL_70:
          v39 = v33;
LABEL_71:
          v22 = (Il2CppObject *)System_Enum__ToString(&v38, 0LL);
          goto LABEL_72;
        }
        goto LABEL_61;
      }
      if ( funcType <= 62 )
        break;
      if ( funcType != 109 )
      {
        if ( funcType != 121 )
          goto LABEL_63;
LABEL_61:
        switch ( (int)v20 )
        {
          case 0:
            goto LABEL_66;
          case 1:
            goto LABEL_68;
          case 2:
            goto LABEL_69;
          case 3:
            v38.klass = (System_Enum_c *)*v17;
            v38.monitor = (void *)-1LL;
            v33 = 7;
            goto LABEL_70;
          default:
            goto LABEL_72;
        }
        goto LABEL_72;
      }
      switch ( (int)v20 )
      {
        case 0:
          goto LABEL_66;
        case 1:
          goto LABEL_68;
        case 2:
          goto LABEL_69;
        case 3:
          v38.klass = (System_Enum_c *)*v17;
          v38.monitor = (void *)-1LL;
          v33 = 77;
          goto LABEL_70;
        default:
          break;
      }
LABEL_72:
      svals = (void *)System_String__op_Inequality((System_String_o *)v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)svals & 1) != 0 )
        v35 = 0;
      else
        v35 = 51;
      if ( v35 != 51 )
      {
        svals = this->fields.vals;
        if ( !svals )
          goto LABEL_90;
        svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__int__o *)svals,
                          v22,
                          *v18);
        if ( ((unsigned __int8)svals & 1) == 0 )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_90;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v22,
            result,
            *v19);
        }
      }
      LODWORD(v15) = v16[6];
      if ( (__int64)++v20 >= (int)v15 )
        return;
    }
    if ( funcType != 55 )
    {
      if ( funcType == 62 )
        goto LABEL_57;
      goto LABEL_63;
    }
    goto LABEL_61;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataVals__SetType_39830676(
        DataVals_o *this,
        FunctionEntity_o *funcEnt,
        int32_t funcIndex,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t targetType; // w8

  if ( !funcEnt )
    sub_1B86614(this, 0LL);
  v6 = (CGThumbnailListItem_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.sortValue0B = (int64_t)funcEnt;
  v6 = (CGThumbnailListItem_o *)((char *)v6 + 40);
  sub_1B8635C(v6, (int32_t)funcEnt, v7, v8);
  targetType = funcEnt->fields.targetType;
  HIDWORD(v6[-1].fields._ThumbnailSpritePath_k__BackingField) = funcIndex;
  *(_DWORD *)&v6[-1].fields._HaveDifferenceCG_k__BackingField = targetType;
}


bool __fastcall DataVals__TryGetDisplayNoEffectCauseList(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals_InvalidCause__o **resultList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  bool ParamStrArray; // w0
  bool v12; // w8
  System_Collections_Generic_List_T__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_DataVals_InvalidCause__o *v16; // x0
  __int64 v17; // x1
  System_String_array *v18; // x21
  __int64 v19; // x8
  unsigned __int64 i; // x22
  System_String_o *v21; // x20
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int32_t item; // [xsp+Ch] [xbp-54h] BYREF
  System_String_array *result; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A4DFEA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Enum_TryParse_DataVals_InvalidCause___, resultList);
    sub_1B863B8(&System_Enum_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo, v9);
    byte_4A4DFEA = 1;
  }
  result = 0LL;
  item = 0;
  *resultList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)resultList, 0, (int32_t)method, v3);
  ParamStrArray = DataVals__TryGetParamStrArray(this, &result, 172, 0x7FFFFFFF, v10);
  v12 = 0;
  if ( ParamStrArray )
  {
    v13 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v13,
      (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    *resultList = (System_Collections_Generic_List_DataVals_InvalidCause__o *)v13;
    sub_1B8635C((CGThumbnailListItem_o *)resultList, (int32_t)v13, v14, v15);
    v18 = result;
    if ( !result )
LABEL_20:
      sub_1B86614(v16, v17);
    v19 = *(_QWORD *)&result->max_length;
    if ( (int)v19 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v19; ++i )
      {
        if ( i >= (unsigned int)v19 )
          sub_1B8661C(v16, v17);
        v21 = v18->m_Items[i];
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        v16 = (System_Collections_Generic_List_DataVals_InvalidCause__o *)System_Enum__TryParse_Int32Enum__49768560(
                                                                            v21,
                                                                            0,
                                                                            &item,
                                                                            (const MethodInfo_2F76870 *)Method_System_Enum_TryParse_DataVals_InvalidCause___);
        if ( ((unsigned __int8)v16 & 1) != 0 )
        {
          v16 = *resultList;
          if ( !*resultList )
            goto LABEL_20;
          v17 = (unsigned int)item;
          items = (struct System_Object_array *)v16->fields._items;
          v23 = Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)v16,
              v17,
              *(const MethodInfo_35E2160 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = v17;
          }
        }
        LODWORD(v19) = v18->max_length;
      }
    }
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0LL);
  }
  return v12;
}


bool __fastcall DataVals__TryGetFuncCheckTargetIndividualityCount(
        DataVals_o *this,
        int32_t *countHigher,
        int32_t *countLower,
        int32_t *countEqual,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  int32_t Param; // w0

  *countHigher = DataVals__GetParam(this, 192, 0, (const MethodInfo *)countEqual);
  *countLower = DataVals__GetParam(this, 193, 0, v9);
  Param = DataVals__GetParam(this, 194, -1, v10);
  *countEqual = Param;
  return *countHigher > 0 || Param >= 0 || *countLower > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  System_Enum_o v12; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+18h] [xbp-38h]

  if ( (byte_4A4DFE1 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, *(_QWORD *)&type);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v7);
    byte_4A4DFE1 = 1;
  }
  vals = this->fields.vals;
  v12.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v12.monitor = (void *)-1LL;
  v13 = type;
  v9 = (Il2CppObject *)System_Enum__ToString(&v12, 0LL);
  if ( !vals )
    sub_1B86614(v9, v10);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v9,
           param,
           (const MethodInfo_32C716C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamByValsKey(
        DataVals_o *this,
        System_String_o *name,
        int32_t *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_4A4DFDA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, name);
    byte_4A4DFDA = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1B86614(0LL, name);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           value,
           (const MethodInfo_32C716C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool __fastcall DataVals__TryGetParamIntArray(
        DataVals_o *this,
        int32_t type,
        System_Int32_array **paramArray,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v5 = DataVals__GetParamArray(this, type, (const MethodInfo *)paramArray);
  *paramArray = v5;
  sub_1B8635C((CGThumbnailListItem_o *)paramArray, (int32_t)v5, v6, v7);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*paramArray, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__TryGetParamStrArray(
        DataVals_o *this,
        System_String_array **result,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  DataVals_o *v9; // x0
  const MethodInfo *v10; // x3
  System_String_o *ParamKey; // x0
  const MethodInfo *v12; // x3
  System_String_o *StrParam_39834988; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  System_String_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4A4DFF4 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, result);
    byte_4A4DFF4 = 1;
  }
  *result = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)result, 0, paramType, *(const MethodInfo **)&index);
  ParamKey = DataVals__MakeParamKey(v9, paramType, index, v10);
  StrParam_39834988 = DataVals__GetStrParam_39834988(this, ParamKey, (System_String_o *)StringLiteral_1/*""*/, v12);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam_39834988, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !StrParam_39834988 )
      sub_1B86614(IsNullOrEmpty, v15);
    v16 = System_String__Split(StrParam_39834988, 0x2Fu, 0, 0LL);
    *result = v16;
    sub_1B8635C((CGThumbnailListItem_o *)result, (int32_t)v16, v17, v18);
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*result, 0LL);
}


void __fastcall DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Func_T__TResult__o *v7; // x21

  if ( (byte_4A4DFED & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_DataVals_OverChargeState___, targetStateArray);
    sub_1B863B8(&Method_DataVals_IsOverChargeState__, v5);
    sub_1B863B8(&System_Func_DataVals_OverChargeState__bool__TypeInfo, v6);
    byte_4A4DFED = 1;
  }
  v7 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v7, (Il2CppObject *)this, Method_DataVals_IsOverChargeState__, 0LL);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_Int32Enum__49642364(
                                                 (System_Int32Enum_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v7,
                                                 (const MethodInfo_2F57B7C *)Method_BasicHelper_Any_DataVals_OverChargeState___);
}


bool __fastcall DataVals__checkActSet(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 16, 0, v2) != 0;
}


System_String_o *__fastcall DataVals__cutValue(
        DataVals_o *this,
        System_String_o *key,
        uint16_t startWord,
        uint16_t endWord,
        bool isDelKeyValue,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x8
  System_String_o **p_svals; // x19
  struct System_String_o *svals; // t1
  int32_t v19; // w0
  int32_t v20; // w23
  int32_t v21; // w22
  int32_t v22; // w0
  int32_t v23; // w24
  System_String_o *v24; // x21
  System_String_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int16 v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4DFD3 & 1) == 0 )
  {
    sub_1B863B8(&char_TypeInfo, key);
    sub_1B863B8(&StringLiteral_817/*","*/, v11);
    sub_1B863B8(&StringLiteral_1/*""*/, v12);
    byte_4A4DFD3 = 1;
  }
  v29 = 58;
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  v13 = System_Char__ToString((uint16_t)&v29, 0LL);
  v14 = System_String__Concat_61683424((System_String_o *)StringLiteral_817/*","*/, key, v13, 0LL);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v16 = svals;
  if ( !svals )
    goto LABEL_18;
  v19 = System_String__IndexOf_61703672(v16, v14, 0LL);
  if ( v19 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v20 = v19;
  v14 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v14 = (System_String_o *)System_String__IndexOf_61702320(v14, startWord, v20, 0LL);
  if ( !*p_svals )
    goto LABEL_18;
  v21 = (int)v14;
  v22 = System_String__IndexOf_61702320(*p_svals, endWord, v20, 0LL);
  if ( v21 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v23 = v22;
  if ( v22 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v14 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v24 = System_String__Substring_61691100(v14, v21, v23 - v21 + 1, 0LL);
  if ( isDelKeyValue )
  {
    v14 = *p_svals;
    if ( *p_svals )
    {
      v14 = System_String__Substring_61691100(v14, v20, v23 - v20 + 1, 0LL);
      if ( *p_svals )
      {
        v25 = System_String__Replace_61691724(*p_svals, v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        *p_svals = v25;
        sub_1B8635C((CGThumbnailListItem_o *)p_svals, (int32_t)v25, v26, v27);
        return v24;
      }
    }
LABEL_18:
    sub_1B86614(v14, v15);
  }
  return v24;
}


int32_t __fastcall DataVals__getActSet(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 16, 0, v2);
}


int32_t __fastcall DataVals__getActSetWeight(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 17, 0, v2);
}


System_Collections_Generic_List_DataVals__o *__fastcall DataVals__get_DependDataValsList(
        DataVals_o *this,
        const MethodInfo *method)
{
  return this->fields.dependDataValsList;
}


FuncParamValueUpInfoBase_o *__fastcall DataVals__get_FuncParamValueUpInfo(DataVals_o *this, const MethodInfo *method)
{
  return this->fields._FuncParamValueUpInfo_k__BackingField;
}


System_Boolean_array *__fastcall DataVals__get_dependOverChargeArray(DataVals_o *this, const MethodInfo *method)
{
  return this->fields._dependOverChargeArray_k__BackingField;
}


bool __fastcall DataVals__get_isOverCharge(DataVals_o *this, const MethodInfo *method)
{
  return this->fields._isOverCharge_k__BackingField;
}


bool __fastcall DataVals__isCheckDead(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3
  bool v5; // zf

  if ( DataVals__isParam(this, 19, v2) )
    v5 = DataVals__GetParam(this, 19, 0, v4) == 0;
  else
    v5 = !this->fields.defCheckDead;
  return !v5;
}


bool __fastcall DataVals__isCheckDuplicate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 41, 0, v2) > 0;
}


bool __fastcall DataVals__isCheckEnemyFieldSpace(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 78, 0, v2) == 1;
}


bool __fastcall DataVals__isEffectSummon(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 29, 0, v2) != 0;
}


bool __fastcall DataVals__isForcedEffectSpeedOne(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 76, 0, v2) != 0;
}


bool __fastcall DataVals__isHideMiss(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 10, 0, v2) == 1;
}


bool __fastcall DataVals__isLossHpChangeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 62, 0, v2) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataVals__isParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4A4DFDE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, *(_QWORD *)&type);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v5);
    byte_4A4DFDE = 1;
  }
  vals = this->fields.vals;
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = (Il2CppObject *)System_Enum__ToString(&v10, 0LL);
  if ( !vals )
    sub_1B86614(v7, v8);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v7,
           (const MethodInfo_32C5BA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool __fastcall DataVals__isParamAddIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_ICollection_o *ParamArray; // x24
  const MethodInfo *v5; // x2
  System_Collections_ICollection_o *v6; // x23
  const MethodInfo *v7; // x2
  System_Collections_ICollection_o *v8; // x22
  const MethodInfo *v9; // x2
  System_Collections_ICollection_o *Int2DimensionalArray; // x21
  const MethodInfo *v11; // x2
  System_Collections_ICollection_o *v12; // x20
  const MethodInfo *v13; // x2
  System_Collections_ICollection_o *v14; // x19

  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 70, v2);
  v6 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 71, v5);
  v8 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 72, v7);
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 195, v9);
  v12 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 196, v11);
  v14 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 197, v13);
  return !BasicHelper__IsNullOrEmpty(ParamArray, 0LL)
      || !BasicHelper__IsNullOrEmpty(v6, 0LL)
      || !BasicHelper__IsNullOrEmpty(v8, 0LL)
      || !BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0LL)
      || !BasicHelper__IsNullOrEmpty(v12, 0LL)
      || !BasicHelper__IsNullOrEmpty(v14, 0LL);
}


bool __fastcall DataVals__isRatioHpRange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  return DataVals__GetParam(this, 31, 0, v2) || DataVals__GetParam(this, 30, 0, v4) != 0;
}


bool __fastcall DataVals__isSameBuffLimit(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 40, 0, v2) > 0;
}


bool __fastcall DataVals__isShowCommand(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 28, 0, v2) != 0;
}


bool __fastcall DataVals__isShowQuestNoEffect(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 18, 0, v2) != 0;
}


bool __fastcall DataVals__isShowState(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 14, 0, v2) != 0;
}


bool __fastcall DataVals__isUnaffected(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 13, 0, v2) == 1;
}


void __fastcall DataVals__loadActSet(DataVals_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *svals; // x0
  __int64 v9; // x8
  _DWORD *v10; // x20
  unsigned __int64 v11; // x23
  char *v12; // x27
  Il2CppObject *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_Enum_o v16; // [xsp+0h] [xbp-80h] BYREF
  int v17; // [xsp+10h] [xbp-70h]
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A4DFD5 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, v3);
    sub_1B863B8(&DataVals_TYPE_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v5);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v7);
    byte_4A4DFD5 = 1;
  }
  result = 0;
  svals = this->fields.svals;
  if ( !svals
    || (svals = System_String__Replace_61691724(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15580/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Replace_61691724(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15836/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL)) == 0LL
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_24:
    sub_1B86614(svals, method);
  }
  v9 = *((_QWORD *)svals + 3);
  v10 = svals;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    v12 = (char *)svals + 32;
    do
    {
      if ( v11 >= (unsigned int)v9 )
LABEL_25:
        sub_1B8661C(svals, method);
      v13 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v12[8 * v11], &result, 0LL);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v11 >= (unsigned int)v10[6] )
          goto LABEL_25;
        svals = *(void **)&v12[8 * v11];
        if ( !svals )
          goto LABEL_24;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0LL);
        if ( !svals )
          goto LABEL_24;
        if ( *((int *)svals + 6) >= 2 )
        {
          v13 = (Il2CppObject *)*((_QWORD *)svals + 4);
          System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0LL);
        }
      }
      svals = this->fields.vals;
      if ( !svals )
        goto LABEL_24;
      svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_object__int__o *)svals,
                        v13,
                        (const MethodInfo_32C5BA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        v17 = 16;
        v16.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
        v16.monitor = (void *)-1LL;
        v14 = System_Enum__ToString(&v16, 0LL);
        if ( System_String__op_Equality(v14, (System_String_o *)v13, 0LL)
          || (v16.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo,
              v16.monitor = (void *)-1LL,
              v17 = 17,
              v15 = System_Enum__ToString(&v16, 0LL),
              svals = (void *)System_String__op_Equality(v15, (System_String_o *)v13, 0LL),
              ((unsigned __int8)svals & 1) != 0) )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v13,
            result,
            (const MethodInfo_32C59B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v9) = v10[6];
      ++v11;
    }
    while ( (__int64)v11 < (int)v9 );
  }
}


void __fastcall DataVals__set_FuncParamValueUpInfo(
        DataVals_o *this,
        FuncParamValueUpInfoBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FuncParamValueUpInfo_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._FuncParamValueUpInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DataVals__set_dependOverChargeArray(
        DataVals_o *this,
        System_Boolean_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._dependOverChargeArray_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DataVals__set_isOverCharge(DataVals_o *this, bool value, const MethodInfo *method)
{
  this->fields._isOverCharge_k__BackingField = value;
}


void __fastcall DataVals___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4E002 & 1) == 0 )
  {
    sub_1B863B8(&DataVals___c_TypeInfo, v1);
    byte_4A4E002 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(DataVals___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataVals___c_TypeInfo->static_fields->__9 = (struct DataVals___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)DataVals___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall DataVals___c___ctor(DataVals___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c___ExistUseInFsmParam_b__42_0(
        DataVals___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  if ( (byte_4A4E003 & 1) == 0 )
  {
    this = (DataVals___c_o *)sub_1B863B8(&StringLiteral_14987/*"UseInFsm"*/, x);
    byte_4A4E003 = 1;
  }
  if ( !x )
    sub_1B86614(this, x);
  return System_String__StartsWith(x, (System_String_o *)StringLiteral_14987/*"UseInFsm"*/, 0LL);
}


bool __fastcall DataVals___c___GetDependFuncIdArray_b__45_0(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.funcEnt != 0LL;
}


int32_t __fastcall DataVals___c___GetDependFuncIdArray_b__45_1(
        DataVals___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0LL )
    sub_1B86614(this, x);
  return funcEnt->fields.id;
}


int32_t __fastcall DataVals___c___GetTargetTypeIndexArray_b__146_2(
        DataVals___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


bool __fastcall DataVals___c___GetUseInFsmParam_b__43_0(
        DataVals___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  __int64 v4; // x1

  key = x.fields.key;
  if ( (byte_4A4E004 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, x.fields.key);
    this = (DataVals___c_o *)sub_1B863B8(&StringLiteral_14987/*"UseInFsm"*/, v4);
    byte_4A4E004 = 1;
  }
  if ( !key )
    sub_1B86614(this, x.fields.key);
  return System_String__StartsWith(key, (System_String_o *)StringLiteral_14987/*"UseInFsm"*/, 0LL);
}


System_String_o *__fastcall DataVals___c___GetUseInFsmParam_b__43_1(
        DataVals___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = x.fields.key;
  if ( (byte_4A4E005 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, x.fields.key);
    byte_4A4E005 = 1;
  }
  return key;
}


int32_t __fastcall DataVals___c___GetUseInFsmParam_b__43_2(
        DataVals___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4A4E006 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, x.fields.key);
    byte_4A4E006 = 1;
  }
  return value;
}


void __fastcall DataVals___c__DisplayClass117_0___ctor(
        DataVals___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass117_0___IsSatisfyAboveBelowCond_b__0(
        DataVals___c__DisplayClass117_0_o *this,
        bool isBelow,
        int32_t cond,
        const MethodInfo *method)
{
  int32_t compareVal; // w8
  bool v5; // cc
  bool v6; // w8
  bool v7; // w9

  compareVal = this->fields.compareVal;
  v5 = compareVal <= cond;
  v6 = compareVal >= cond;
  v7 = v5;
  if ( isBelow )
    return v7;
  else
    return v6;
}


void __fastcall DataVals___c__DisplayClass118_0___ctor(
        DataVals___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass118_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass118_0_o *this,
        bool isBelow,
        int32_t cond,
        const MethodInfo *method)
{
  int32_t compareVal; // w8
  bool v5; // cc
  bool v6; // w8
  bool v7; // w9

  compareVal = this->fields.compareVal;
  v5 = compareVal <= cond;
  v6 = compareVal >= cond;
  v7 = v5;
  if ( isBelow )
    return v7;
  else
    return v6;
}


void __fastcall DataVals___c__DisplayClass146_0___ctor(
        DataVals___c__DisplayClass146_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass146_0___GetTargetTypeIndexArray_b__0(
        DataVals___c__DisplayClass146_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass146_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_4A4E007 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass146_0_o *)sub_1B863B8(
                                                  &Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__,
                                                  x.fields.key);
    byte_4A4E007 = 1;
  }
  if ( !key )
    sub_1B86614(this, x.fields.key);
  return System_String__StartsWith(key, v4->fields.key, 0LL);
}


System_String_o *__fastcall DataVals___c__DisplayClass146_0___GetTargetTypeIndexArray_b__1(
        DataVals___c__DisplayClass146_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass146_0_o *v4; // x20
  __int64 v5; // x1

  key = x.fields.key;
  v4 = this;
  if ( (byte_4A4E008 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, x.fields.key);
    this = (DataVals___c__DisplayClass146_0_o *)sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4E008 = 1;
  }
  if ( !key )
    sub_1B86614(this, x.fields.key);
  return System_String__Replace_61691724(key, v4->fields.key, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall DataVals___c__DisplayClass41_0___ctor(DataVals___c__DisplayClass41_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass41_0___GetDependDataValsArray_b__0(
        DataVals___c__DisplayClass41_0_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  DataVals___c__DisplayClass41_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A4E009 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass41_0_o *)sub_1B863B8(
                                                 &Method_System_Collections_Generic_List_FuncList_TYPE__Contains__,
                                                 x);
    byte_4A4E009 = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass41_0_o *)v4->fields.funcTypeList) == 0LL )
    sub_1B86614(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.funcType,
           (const MethodInfo_35E24D8 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}


void __fastcall DataVals___c__DisplayClass84_0___ctor(DataVals___c__DisplayClass84_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataVals___c__DisplayClass84_0___IsHideNoEffect_b__0(
        DataVals___c__DisplayClass84_0_o *this,
        int32_t cause,
        const MethodInfo *method)
{
  return this->fields.invalidCause != cause;
}