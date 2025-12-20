void DataVals___cctor(const MethodInfo *method)
{
  if ( (byte_4D2C354 & 1) == 0 )
  {
    sub_1C94098(&DataVals_TypeInfo);
    byte_4D2C354 = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D2C319 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo);
    byte_4D2C319 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_3517510 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)&this->fields.targetCardIndex = -1;
  v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo);
  System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
    v12,
    (const MethodInfo_34AE250 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
  this->fields.invalidCauseDict = (struct System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__o *)v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.invalidCauseDict, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svals = str;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.svals, (int32_t)str, v19, v20, v21, v22, v23, v24);
}


bool DataVals__CheckAssertStrParam(DataVals_o *this, int32_t type, bool *existParamNum, const MethodInfo *method)
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
bool DataVals__CheckFunctionTriggerStar(DataVals_o *this, int32_t totalStar, const MethodInfo *method)
{
  int32_t FunctionTriggerStarNum; // w0

  FunctionTriggerStarNum = DataVals__GetFunctionTriggerStarNum(this, *(const MethodInfo **)&totalStar);
  return FunctionTriggerStarNum < 0 || FunctionTriggerStarNum <= totalStar;
}


bool DataVals__CheckOverCharge(DataVals_o *this, DataVals_o *baseVals, const MethodInfo *method)
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
    sub_1C942F0(Param, v7);
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


System_String_o *DataVals__ConcatenateTypeValue(
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
  if ( (byte_4D2C323 & 1) == 0 )
  {
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    byte_4D2C323 = 1;
  }
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = type;
  v5 = System_Enum__ToString(&v8, 0);
  v6 = System_Int32__ToString((int32_t)&v10, 0);
  return System_String__Concat_64417744(v5, v6, 0);
}


bool DataVals__ExistUseInFsmParam(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  DataVals___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__bool__o *_9__42_0; // x20
  Il2CppObject *v8; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2C31E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_string____79085152);
    sub_1C94098(&System_Func_string__bool__TypeInfo);
    sub_1C94098(&Method_DataVals___c__ExistUseInFsmParam_b__42_0__);
    sub_1C94098(&DataVals___c_TypeInfo);
    byte_4D2C31E = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1C942F0(0, method);
  Keys = System_Collections_Generic_Dictionary_object__int___get_Keys(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (const MethodInfo_3517BA4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
  v5 = DataVals___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v5 = DataVals___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__bool__o *)v5->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = DataVals___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__42_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__42_0, v8, Method_DataVals___c__ExistUseInFsmParam_b__42_0__, 0);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_string__bool__o *)_9__42_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__42_0,
      (int32_t)_9__42_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return System_Linq_Enumerable__Any_object__52076056(
           v6,
           (System_Func_TSource__bool__o *)_9__42_0,
           (const MethodInfo_31A9E18 *)Method_System_Linq_Enumerable_Any_string____79085152);
}


System_Int32_array *DataVals__GetAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *ValsList; // x20
  const MethodInfo *v5; // x2
  System_Int32_array *v6; // x1

  ValsList = DataVals__GetValsList(this, 37, v2);
  v6 = DataVals__GetValsList(this, 112, v5);
  return CommonFunction__JoinIndiv(ValsList, v6, 0);
}


System_Int32_array *DataVals__GetAndCheckIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  System_Int32_array *result; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int32_t Param; // w0
  int32_t v9; // w19
  uint16_t v10; // w1

  if ( (byte_4D2C335 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C335 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 55, (System_String_o *)StringLiteral_1/*""*/, v2);
  result = (System_Int32_array *)System_String__IsNullOrEmpty(StrParam, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    Param = DataVals__GetParam(this, 55, 0, v7);
    if ( Param < 1 )
      return 0;
    v9 = Param;
    result = (System_Int32_array *)sub_1C94140(int___TypeInfo, 1);
    if ( result )
    {
      if ( !LODWORD(result->max_length) )
        sub_1C942F8(result);
      result->m_Items[0] = v9;
      return result;
    }
LABEL_14:
    sub_1C942F0(result, v6);
  }
  if ( !StrParam )
    goto LABEL_14;
  if ( System_String__Contains_64474732(StrParam, 0x26u, 0) )
    v10 = 38;
  else
    v10 = 47;
  return BasicHelper__Convert2IntArray(StrParam, v10, 0);
}


System_Int32_array *DataVals__GetBackStepTargetArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 234, v2);
}


float DataVals__GetBgmFadeTime(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return (float)DataVals__GetParam(this, 213, 0, v2) / 1000.0;
}


int32_t DataVals__GetBgmPriority(DataVals_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x3
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2C348 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C348 = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 160, &param, v3) || DataVals__TryGetParam(this, 111, &param, v6) )
    return param;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v9);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, bgmId, 0, 0);
}


int32_t DataVals__GetCallSvtEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 87, 0, v2);
}


int32_t DataVals__GetCardIndex(DataVals_o *this, const MethodInfo *method)
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


int32_t DataVals__GetCardIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  if ( DataVals__isParam(this, 68, v2) )
    return DataVals__GetParam(this, 68, 0, v4);
  else
    return -1;
}


int32_t DataVals__GetClassIconAuraEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 129, 0, v2);
}


ControlOtherBgmPriorityAtOverStageBgm_array *DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x21
  const MethodInfo *v6; // x3
  System_Int32_array *Param; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Int32_array *ParamArray; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  const MethodInfo *v27; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v30; // x21
  unsigned __int64 v31; // x26
  int32_t v32; // w23
  __int64 v33; // x22
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x3
  System_Int32_array *ParamArrayAddTypeIndex; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0

  if ( (byte_4D2C34A & 1) == 0 )
  {
    sub_1C94098(&ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
    byte_4D2C34A = 1;
  }
  if ( !DataVals__isParam(this, 165, v2) )
    return 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
  v5 = sub_1C942E4(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
  ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v5, 0);
  Param = (System_Int32_array *)DataVals__GetParam(this, 165, 0, v6);
  if ( !v5 )
    goto LABEL_22;
  *(_DWORD *)(v5 + 16) = (_DWORD)Param;
  ParamArray = DataVals__GetParamArray(this, 166, v9);
  *(_QWORD *)(v5 + 24) = ParamArray;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)ParamArray, v11, v12, v13, v14, v15, v16);
  if ( !v4 )
    goto LABEL_22;
  items = v4->fields._items;
  v24 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
  ++v4->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v4->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v4,
      (Il2CppObject *)v5,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v26 + 4), v5, v17, v18, v19, v20, v21, v22);
  }
  Param = DataVals__GetTargetTypeIndexArray(this, 165, v27);
  if ( !Param )
    goto LABEL_22;
  max_length = Param->max_length;
  v30 = Param;
  if ( (int)max_length >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)max_length )
        sub_1C942F8(Param);
      v32 = v30->m_Items[v31];
      v33 = sub_1C942E4(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
      ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v33, 0);
      Param = (System_Int32_array *)DataVals__GetParamAddTypeIndex(this, 165, v32, 0, v34);
      if ( !v33 )
        break;
      *(_DWORD *)(v33 + 16) = (_DWORD)Param;
      ParamArrayAddTypeIndex = DataVals__GetParamArrayAddTypeIndex(this, 166, v32, v35);
      *(_QWORD *)(v33 + 24) = ParamArrayAddTypeIndex;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)(v33 + 24),
        (int32_t)ParamArrayAddTypeIndex,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      v49 = v4->fields._items;
      v50 = Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__;
      ++v4->fields._version;
      if ( !v49 )
        break;
      v51 = v4->fields._size;
      if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          (Il2CppObject *)v33,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &v49->obj.klass + v51;
        v4->fields._size = v51 + 1;
        v52[4] = (Il2CppClass *)v33;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v52 + 4), v33, v43, v44, v45, v46, v47, v48);
      }
      LODWORD(max_length) = v30->max_length;
      if ( (__int64)++v31 >= (int)max_length )
        return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                                v4,
                                                                (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    }
LABEL_22:
    sub_1C942F0(Param, v8);
  }
  return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                          v4,
                                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
}


System_Int32_array *DataVals__GetCopyTargetBuffTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 126, v2);
}


System_Int32_array *DataVals__GetCopyTargetFunctionTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 120, v2);
}


DataVals_array *DataVals__GetDependDataValsArray(
        DataVals_o *this,
        System_Collections_Generic_List_FuncList_TYPE__o *funcTypeList,
        bool isCheckNotFound,
        const MethodInfo *method)
{
  __int64 v6; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  DataVals_array *result; // x0
  System_Collections_Generic_List_object__o *dependDataValsList; // x19
  System_Predicate_object__o *v17; // x20

  if ( (byte_4D2C31D & 1) == 0 )
  {
    sub_1C94098(&DataVals___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_DataVals__FindAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_1C94098(&System_Predicate_DataVals__TypeInfo);
    sub_1C94098(&Method_DataVals___c__DisplayClass41_0__GetDependDataValsArray_b__0__);
    sub_1C94098(&DataVals___c__DisplayClass41_0_TypeInfo);
    byte_4D2C31D = 1;
  }
  v6 = sub_1C942E4(DataVals___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 16) = funcTypeList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)funcTypeList, v9, v10, v11, v12, v13, v14);
  result = (DataVals_array *)sub_1C94140(DataVals___TypeInfo, 0);
  dependDataValsList = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    v17 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_DataVals__TypeInfo);
    System_Predicate_object____ctor(
      v17,
      (Il2CppObject *)v6,
      Method_DataVals___c__DisplayClass41_0__GetDependDataValsArray_b__0__,
      0);
    All = System_Collections_Generic_List_object___FindAll(
            dependDataValsList,
            (System_Predicate_T__o *)v17,
            (const MethodInfo_386B544 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
    if ( All )
      return (DataVals_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)All,
                                 (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
LABEL_8:
    sub_1C942F0(All, v8);
  }
  return result;
}


System_Int32_array *DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v4; // x0
  System_Func_object__bool__o *_9__45_0; // x20
  Il2CppObject *v6; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  DataVals___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__int__o *_9__45_1; // x20
  Il2CppObject *v18; // x21
  struct DataVals___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4D2C321 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_1C94098(&System_Func_DataVals__int__TypeInfo);
    sub_1C94098(&System_Func_DataVals__bool__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_DataVals___c__GetDependFuncIdArray_b__45_0__);
    sub_1C94098(&Method_DataVals___c__GetDependFuncIdArray_b__45_1__);
    sub_1C94098(&DataVals___c_TypeInfo);
    byte_4D2C321 = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  v4 = DataVals___c_TypeInfo;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v4 = DataVals___c_TypeInfo;
  }
  _9__45_0 = (System_Func_object__bool__o *)v4->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = DataVals___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__45_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__45_0, v6, Method_DataVals___c__GetDependFuncIdArray_b__45_0__, 0);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_DataVals__bool__o *)_9__45_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__45_0,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v15 = DataVals___c_TypeInfo;
  v16 = v14;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v15 = DataVals___c_TypeInfo;
  }
  _9__45_1 = (System_Func_object__int__o *)v15->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = DataVals___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__45_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(_9__45_1, v18, Method_DataVals___c__GetDependFuncIdArray_b__45_1__, 0);
    v19 = DataVals___c_TypeInfo->static_fields;
    v19->__9__45_1 = (struct System_Func_DataVals__int__o *)_9__45_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v19->__9__45_1, (int32_t)_9__45_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__45_1,
                                                               (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v26,
           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t DataVals__GetDisplayLastFuncInvalidType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 54, 0, v2);
}


int32_t DataVals__GetEnemyCountChangeEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 202, 0, v2);
}


float DataVals__GetEnemyCountChangeTime(DataVals_o *this, int32_t defaultPerMill, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return (float)DataVals__GetParam(this, 201, defaultPerMill, v3) / 1000.0;
}


float DataVals__GetEnemyCountWaitTimeAfterMessage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return (float)DataVals__GetParam(this, 203, 0, v2) / 1000.0;
}


int32_t DataVals__GetFieldPriority(DataVals_o *this, const MethodInfo *method)
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


System_Int32_array *DataVals__GetFixDamageRates(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *result; // x0
  const MethodInfo *v5; // x3
  int32_t Param; // w19
  int32_t v7; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_4D2C346 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2C346 = 1;
  }
  result = DataVals__GetParamArray(this, 81, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 80, 0, v5);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = System_Math__Max_65939564(Param, 1, 0);
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                100,
                                                                v7,
                                                                (const MethodInfo_31CCC7C *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v8,
             (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t DataVals__GetFuncCheckTargetIndividualityCountEqual(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 194, -1, v2);
}


int32_t DataVals__GetFuncCheckTargetIndividualityCountHigher(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 192, 0, v2);
}


int32_t DataVals__GetFuncCheckTargetIndividualityCountLower(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 193, 0, v2);
}


int32_t DataVals__GetFuncCheckTargetIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 191, -1, v2);
}


int32_t DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_Enum_o v8; // [xsp+8h] [xbp-38h] BYREF
  int v9; // [xsp+18h] [xbp-28h]

  if ( (byte_4D2C33D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    byte_4D2C33D = 1;
  }
  vals = this->fields.vals;
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = 51;
  v4 = (Il2CppObject *)System_Enum__ToString(&v8, 0);
  if ( !vals )
    sub_1C942F0(v4, v5);
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)vals,
         v4,
         (const MethodInfo_35180B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 51, 0, v6);
  }
  else
  {
    return -1;
  }
}


System_Int32_array_array *DataVals__GetInt2DimensionalArray(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  System_String_o *ParamStringFormat; // x19

  if ( (byte_4D2C34D & 1) == 0 )
  {
    sub_1C94098(&DataVals_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C34D = 1;
  }
  ParamStringFormat = DataVals__GetParamStringFormat(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !DataVals_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataVals_TypeInfo);
  return DataVals__GetInt2DimensionalArray_42458004(ParamStringFormat, v6);
}


System_Int32_array_array *DataVals__GetInt2DimensionalArray_42458004(
        System_String_o *paramStr,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  System_String_array *v6; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  int max_length; // w8
  unsigned int v9; // w22
  Il2CppClass **v10; // x8
  System_String_o *v11; // x21
  uint16_t v12; // w1
  System_Collections_ICollection_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4D2C34E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int____Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C94098(&System_Collections_Generic_List_int____TypeInfo);
    byte_4D2C34E = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(paramStr, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !paramStr
    || (v6 = System_String__Split(paramStr, 0x7Cu, 0, 0),
        v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_int____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_int_____ctor__),
        !v6) )
  {
LABEL_23:
    sub_1C942F0(IsNullOrEmpty, v4);
  }
  max_length = v6->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= max_length )
        sub_1C942F8(IsNullOrEmpty);
      v10 = &v6->obj.klass + (int)v9;
      v11 = (System_String_o *)v10[4];
      if ( !v11 )
        goto LABEL_23;
      if ( System_String__Contains_64474732((System_String_o *)v10[4], 0x26u, 0) )
        v12 = 38;
      else
        v12 = 47;
      v13 = (System_Collections_ICollection_o *)BasicHelper__Convert2IntArray(v11, v12, 0);
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v13, 0);
      if ( !IsNullOrEmpty )
      {
        if ( !v7 )
          goto LABEL_23;
        items = v7->fields._items;
        v21 = Method_System_Collections_Generic_List_int____Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v13,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
        }
      }
      max_length = v6->max_length;
    }
    while ( (int)++v9 < max_length );
  }
  if ( !v7 )
    goto LABEL_23;
  return (System_Int32_array_array *)System_Collections_Generic_List_object___ToArray(
                                       v7,
                                       (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_int____ToArray__);
}


BattleBuffData_IntervalData_o *DataVals__GetIntervalData(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  BattleBuffData_IntervalData_o *v7; // x20

  if ( (byte_4D2C347 & 1) == 0 )
  {
    sub_1C94098(&BattleBuffData_IntervalData_TypeInfo);
    byte_4D2C347 = 1;
  }
  if ( !DataVals__isParam(this, 131, v2)
    && !DataVals__isParam(this, 132, v4)
    && !DataVals__isParam(this, 207, v5)
    && !DataVals__isParam(this, 208, v6) )
  {
    return 0;
  }
  v7 = (BattleBuffData_IntervalData_o *)sub_1C942E4(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_46733296(v7, this, 0);
  return v7;
}


System_Int32_array *DataVals__GetLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1

  if ( (byte_4D2C332 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C332 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, 38, 0, v5);
  if ( Param < 1 )
    return 0;
  v7 = Param;
  result = (System_Int32_array *)sub_1C94140(int___TypeInfo, 1);
  if ( !result )
    sub_1C942F0(0, v9);
  if ( !LODWORD(result->max_length) )
    sub_1C942F8(result);
  result->m_Items[0] = v7;
  return result;
}


int32_t DataVals__GetMotionChange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 64, 0, v2);
}


int32_t DataVals__GetNPFixedDamageValue(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 146, -1, v2);
}


System_Int32_array *DataVals__GetNotSkillCopyTargetFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 127, v2);
}


System_Int32_array *DataVals__GetNotSkillCopyTargetIndividualities(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 128, v2);
}


int32_t DataVals__GetOverwriteFuncInvalidType(DataVals_o *this, int32_t defaultType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, 212, defaultType, v3);
}


int32_t DataVals__GetParam(DataVals_o *this, int32_t type, int32_t defaultValue, const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x4
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4D2C324 & 1) == 0 )
  {
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    byte_4D2C324 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0);
  return DataVals__GetParam_42444644(this, type, v7, defaultValue, v8);
}


BattleBuffData_SaveArrayData_array *DataVals__GetParamAddIndividualityAndCheckArrayData(
        DataVals_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *Int2DimensionalArray; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  void *monitor; // x8
  unsigned __int64 v11; // x23
  System_Int32_array *v12; // x22
  BattleBuffData_SaveArrayData_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4D2C34F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo);
    sub_1C94098(&BattleBuffData_SaveArrayData_TypeInfo);
    byte_4D2C34F = 1;
  }
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, type, method);
  if ( BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0) )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__);
  if ( !Int2DimensionalArray )
LABEL_17:
    sub_1C942F0(v8, v9);
  monitor = Int2DimensionalArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)monitor )
        sub_1C942F8(v8);
      v12 = (System_Int32_array *)*((_QWORD *)&Int2DimensionalArray[2].klass + v11);
      v13 = (BattleBuffData_SaveArrayData_o *)sub_1C942E4(BattleBuffData_SaveArrayData_TypeInfo);
      BattleBuffData_SaveArrayData___ctor_46752096(v13, v12, 0);
      if ( !v7 )
        goto LABEL_17;
      items = v7->fields._items;
      v21 = Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v13,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v13;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      }
      LODWORD(monitor) = Int2DimensionalArray[1].monitor;
    }
    while ( (__int64)++v11 < (int)monitor );
  }
  if ( !v7 )
    goto LABEL_17;
  return (BattleBuffData_SaveArrayData_array *)System_Collections_Generic_List_object___ToArray(
                                                 v7,
                                                 (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__);
}


int32_t DataVals__GetParamAddIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 189, -1, v2);
}


int32_t DataVals__GetParamAddTypeIndex(
        DataVals_o *this,
        int32_t type,
        int32_t index,
        int32_t defaultValue,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x23
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x4
  int32_t v14; // [xsp+8h] [xbp-48h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2C326 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    sub_1C94098(&StringLiteral_25450/*"{0}_{1}"*/);
    byte_4D2C326 = 1;
  }
  v15 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v15);
  v14 = index;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v11 = System_String__Format_64459052((System_String_o *)StringLiteral_25450/*"{0}_{1}"*/, v9, v10, 0);
  return DataVals__GetParam_42444644(this, type, v11, defaultValue, v12);
}


System_Int32_array *DataVals__GetParamArray(DataVals_o *this, int32_t paramType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *StrParam; // x21
  const MethodInfo *v7; // x3
  int32_t Param; // w0
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1

  if ( (byte_4D2C33F & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C33F = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, paramType, 0, v7);
  if ( Param < 1 )
    return 0;
  v9 = Param;
  result = (System_Int32_array *)sub_1C94140(int___TypeInfo, 1);
  if ( !result )
    sub_1C942F0(0, v11);
  if ( !LODWORD(result->max_length) )
    sub_1C942F8(result);
  result->m_Items[0] = v9;
  return result;
}


System_Int32_array *DataVals__GetParamArrayAddTypeIndex(
        DataVals_o *this,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_String_o *StrParamAddTypeIndex; // x22
  const MethodInfo *v9; // x4
  int32_t ParamAddTypeIndex; // w0
  int32_t v11; // w19
  System_Int32_array *result; // x0
  __int64 v13; // x1

  if ( (byte_4D2C340 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C340 = 1;
  }
  StrParamAddTypeIndex = DataVals__GetStrParamAddTypeIndex(
                           this,
                           paramType,
                           index,
                           (System_String_o *)StringLiteral_1/*""*/,
                           v4);
  if ( !System_String__IsNullOrEmpty(StrParamAddTypeIndex, 0) )
    return BasicHelper__Convert2IntArray(StrParamAddTypeIndex, 0x2Fu, 0);
  ParamAddTypeIndex = DataVals__GetParamAddTypeIndex(this, paramType, index, 0, v9);
  if ( ParamAddTypeIndex < 1 )
    return 0;
  v11 = ParamAddTypeIndex;
  result = (System_Int32_array *)sub_1C94140(int___TypeInfo, 1);
  if ( !result )
    sub_1C942F0(0, v13);
  if ( !LODWORD(result->max_length) )
    sub_1C942F8(result);
  result->m_Items[0] = v11;
  return result;
}


System_String_array *DataVals__GetParamAsStringArray(
        DataVals_o *this,
        int32_t type,
        System_String_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_String_o *StrParam; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1

  if ( (byte_4D2C331 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C331 = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0);
  if ( IsNullOrEmpty )
    return defaultValue;
  if ( !StrParam )
    sub_1C942F0(IsNullOrEmpty, v10);
  return System_String__Split(StrParam, 0x2Fu, 0, 0);
}


System_String_o *DataVals__GetParamStringFormat(
        DataVals_o *this,
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *StrParam; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  int32_t Param; // [xsp+Ch] [xbp-24h] BYREF

  StrParam = defaultValue;
  if ( (byte_4D2C34C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C34C = 1;
  }
  if ( DataVals__isParam(this, type, (const MethodInfo *)defaultValue) )
  {
    StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
    if ( System_String__IsNullOrEmpty(StrParam, 0) )
    {
      Param = DataVals__GetParam(this, type, 0, v8);
      return System_Int32__ToString((int32_t)&Param, 0);
    }
  }
  return StrParam;
}


// local variable allocation has failed, the output may be wrong!
int32_t DataVals__GetParam_42444644(
        DataVals_o *this,
        int32_t type,
        System_String_o *name,
        int32_t defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8

  if ( (byte_4D2C325 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4D2C325 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)vals,
          (Il2CppObject *)name,
          (const MethodInfo_35180B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  vals = this->fields.vals;
  if ( !vals )
LABEL_9:
    sub_1C942F0(vals, *(_QWORD *)&type);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           (const MethodInfo_3517E44 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  FuncParamValueUpInfo_k__BackingField = this->fields._FuncParamValueUpInfo_k__BackingField;
  defaultValue = Item;
  if ( FuncParamValueUpInfo_k__BackingField )
    return ((__int64 (__fastcall *)(struct FuncParamValueUpInfoBase_o *, _QWORD, _QWORD, const MethodInfo *))FuncParamValueUpInfo_k__BackingField->klass->vtable._5_Enhance.methodPtr)(
             FuncParamValueUpInfo_k__BackingField,
             (unsigned int)type,
             Item,
             FuncParamValueUpInfo_k__BackingField->klass->vtable._5_Enhance.method);
  return defaultValue;
}


System_Int32_array *DataVals__GetReplacePositionTargetArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_ICollection_o *ParamArray; // x20
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2C350 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    byte_4D2C350 = 1;
  }
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 235, v2);
  if ( BasicHelper__IsNullOrEmpty(ParamArray, 0) )
  {
    if ( DataVals__GetParam(this, 235, -1, v5) )
    {
      return 0;
    }
    else
    {
      v6 = sub_1C94140(int___TypeInfo, 1);
      if ( !v6 )
        sub_1C942F0(0, v7);
      ParamArray = (System_Collections_ICollection_o *)v6;
      if ( !*(_DWORD *)(v6 + 24) )
        sub_1C942F8(v6);
      *(_DWORD *)(v6 + 32) = 0;
    }
  }
  return (System_Int32_array *)ParamArray;
}


System_Int32_array *DataVals__GetResistEffectList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 256, v2);
}


int32_t DataVals__GetResistPopupIconId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 254, 0, v2);
}


System_String_o *DataVals__GetResistPopupText(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2C353 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C353 = 1;
  }
  return DataVals__GetStrParam(this, 253, (System_String_o *)StringLiteral_1/*""*/, v2);
}


int32_t DataVals__GetResistSkillLv(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 250, 1, v2);
}


System_Int32_array *DataVals__GetSameBuffLimitTargetIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1

  if ( (byte_4D2C333 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C333 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, 39, 0, v5);
  if ( Param < 1 )
    return 0;
  v7 = Param;
  result = (System_Int32_array *)sub_1C94140(int___TypeInfo, 1);
  if ( !result )
    sub_1C942F0(0, v9);
  if ( !LODWORD(result->max_length) )
    sub_1C942F8(result);
  result->m_Items[0] = v7;
  return result;
}


System_Int32_array *DataVals__GetShortenMaxCountArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_ICollection_o *ParamArray; // x19
  System_Array_o *v5; // x0
  System_RuntimeFieldHandle_o v6; // x1

  if ( (byte_4D2C34B & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D);
    byte_4D2C34B = 1;
  }
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 184, v2);
  if ( BasicHelper__IsNullOrEmpty(ParamArray, 0) )
  {
    v5 = (System_Array_o *)sub_1C94140(int___TypeInfo, 3);
    v6.fields.value = Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D;
    ParamArray = (System_Collections_ICollection_o *)v5;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v5, v6, 0);
  }
  return (System_Int32_array *)ParamArray;
}


System_Int32_array_array *DataVals__GetSnapShotParamAddFieldIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 200, v2);
}


System_Int32_array_array *DataVals__GetSnapShotParamAddOpIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 199, v2);
}


System_Int32_array_array *DataVals__GetSnapShotParamAddSelfIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 198, v2);
}


System_String_o *DataVals__GetStrParam(
        DataVals_o *this,
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4D2C328 & 1) == 0 )
  {
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    byte_4D2C328 = 1;
  }
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = type;
  v7 = System_Enum__ToString(&v10, 0);
  return DataVals__GetStrParam_42445732(this, v7, defaultValue, v8);
}


System_String_o *DataVals__GetStrParamAddTypeIndex(
        DataVals_o *this,
        int32_t type,
        int32_t index,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  int32_t v14; // [xsp+8h] [xbp-48h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2C32A & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    sub_1C94098(&StringLiteral_25450/*"{0}_{1}"*/);
    byte_4D2C32A = 1;
  }
  v15 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v15);
  v14 = index;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v11 = System_String__Format_64459052((System_String_o *)StringLiteral_25450/*"{0}_{1}"*/, v9, v10, 0);
  return DataVals__GetStrParam_42445732(this, v11, defaultValue, v12);
}


System_String_o *DataVals__GetStrParam_42445732(
        DataVals_o *this,
        System_String_o *name,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v9; // x0

  if ( (byte_4D2C329 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_4D2C329 = 1;
  }
  strVals = this->fields.strVals;
  if ( !strVals
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)strVals,
          (Il2CppObject *)name,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return defaultValue;
  }
  v9 = this->fields.strVals;
  if ( !v9 )
    sub_1C942F0(0, v8);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v9,
                              (Il2CppObject *)name,
                              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_Int32_array *DataVals__GetSubstituteEffectList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 255, v2);
}


int32_t DataVals__GetSubstitutePopupIconId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 252, 0, v2);
}


System_String_o *DataVals__GetSubstitutePopupText(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2C352 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C352 = 1;
  }
  return DataVals__GetStrParam(this, 251, (System_String_o *)StringLiteral_1/*""*/, v2);
}


int32_t DataVals__GetSubstituteRate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 243, 1000, v2);
}


int32_t DataVals__GetSubstituteResist(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 244, 0, v2);
}


int32_t DataVals__GetSubstituteSkillLv(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 248, 1, v2);
}


System_Int32_array *DataVals__GetTargetBuffIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 187, v2);
}


System_Int32_array *DataVals__GetTargetFunctionIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 186, v2);
}


System_Int32_array *DataVals__GetTargetList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1

  if ( (byte_4D2C32F & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C32F = 1;
  }
  StrParam = DataVals__GetStrParam(this, 32, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, 32, 0, v5);
  if ( Param < 1 )
    return 0;
  v7 = Param;
  result = (System_Int32_array *)sub_1C94140(int___TypeInfo, 1);
  if ( !result )
    sub_1C942F0(0, v9);
  if ( !LODWORD(result->max_length) )
    sub_1C942F8(result);
  result->m_Items[0] = v7;
  return result;
}


System_Int32_array *DataVals__GetTargetRarityList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *StrParam; // x20
  const MethodInfo *v5; // x3
  int32_t Param; // w0
  int32_t v7; // w19
  System_Int32_array *result; // x0
  __int64 v9; // x1

  if ( (byte_4D2C334 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C334 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 43, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, 43, 0, v5);
  if ( Param < 1 )
    return 0;
  v7 = Param;
  result = (System_Int32_array *)sub_1C94140(int___TypeInfo, 1);
  if ( !result )
    sub_1C942F0(0, v9);
  if ( !LODWORD(result->max_length) )
    sub_1C942F8(result);
  result->m_Items[0] = v7;
  return result;
}


System_Int32_array *DataVals__GetTargetTypeIndexArray(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  System_Func_T__TResult__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_T__TResult__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__int__o *v20; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v21; // x0
  DataVals___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_int__int__o *_9__147_2; // x20
  Il2CppObject *v25; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  int32_t v35; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D2C349 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
    sub_1C94098(&System_Func_int__int__TypeInfo);
    sub_1C94098(&System_Func_KeyValuePair_string__int___bool__TypeInfo);
    sub_1C94098(&System_Func_string__int__TypeInfo);
    sub_1C94098(&System_Func_KeyValuePair_string__int___string__TypeInfo);
    sub_1C94098(&Method_System_Int32_Parse__);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    sub_1C94098(&Method_DataVals___c__GetTargetTypeIndexArray_b__147_2__);
    sub_1C94098(&Method_DataVals___c__DisplayClass147_0__GetTargetTypeIndexArray_b__0__);
    sub_1C94098(&Method_DataVals___c__DisplayClass147_0__GetTargetTypeIndexArray_b__1__);
    sub_1C94098(&DataVals___c__DisplayClass147_0_TypeInfo);
    sub_1C94098(&DataVals___c_TypeInfo);
    sub_1C94098(&StringLiteral_25447/*"{0}_"*/);
    byte_4D2C349 = 1;
  }
  v5 = sub_1C942E4(DataVals___c__DisplayClass147_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v35 = type;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v35);
  v7 = System_String__Format((System_String_o *)StringLiteral_25447/*"{0}_"*/, v6, 0);
  if ( !v5 )
    sub_1C942F0(v7, v8);
  *(_QWORD *)(v5 + 16) = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v7, v9, v10, v11, v12, v13, v14);
  vals = this->fields.vals;
  v16 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_string__int___bool__TypeInfo);
  System_Func_KeyValuePair_object__int___bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_DataVals___c__DisplayClass147_0__GetTargetTypeIndexArray_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_31E28D0 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v18 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_string__int___string__TypeInfo);
  System_Func_KeyValuePair_object__int___object____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_DataVals___c__DisplayClass147_0__GetTargetTypeIndexArray_b__1__,
    0);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_31CE5C8 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
  v20 = (System_Func_object__int__o *)sub_1C942E4(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v20, 0, Method_System_Int32_Parse__, 0);
  v21 = System_Linq_Enumerable__Select_object__int_(
          v19,
          (System_Func_TSource__TResult__o *)v20,
          (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_string__int___);
  v22 = DataVals___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v22 = DataVals___c_TypeInfo;
  }
  _9__147_2 = v22->static_fields->__9__147_2;
  if ( !_9__147_2 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = DataVals___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__147_2 = (System_Func_int__int__o *)sub_1C942E4(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__147_2, v25, Method_DataVals___c__GetTargetTypeIndexArray_b__147_2__, 0);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__147_2 = _9__147_2;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__147_2,
      (int32_t)_9__147_2,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)_9__147_2,
                                                               (const MethodInfo_31CBF54 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v33,
           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t DataVals__GetTriggeredFieldCountTargetFlag(DataVals_o *this, bool isActorEnemy, const MethodInfo *method)
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


int32_t DataVals__GetTriggeredFuncIndex(
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


System_Int32_array *DataVals__GetTriggeredFuncIndexArray(DataVals_o *this, bool *isAndCheck, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool ParamIntArray; // w8
  System_Int32_array *result; // x0
  System_Int32_array *paramArray; // [xsp+8h] [xbp-18h] BYREF

  paramArray = 0;
  *isAndCheck = 0;
  ParamIntArray = DataVals__TryGetParamIntArray(this, 190, &paramArray, v3);
  result = 0;
  if ( ParamIntArray )
  {
    *isAndCheck = 1;
    return paramArray;
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__o *DataVals__GetUseInFsmParam(
        DataVals_o *this,
        const MethodInfo *method)
{
  DataVals___c_c *v3; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  System_Func_T__TResult__o *_9__43_0; // x20
  Il2CppObject *v6; // x21
  struct DataVals___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  DataVals___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_T__TResult__o *_9__43_1; // x20
  Il2CppObject *v18; // x21
  struct DataVals___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Func_T__TResult__o *_9__43_2; // x21
  Il2CppObject *v27; // x22
  struct DataVals___c_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  if ( (byte_4D2C31F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__int___string__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
    sub_1C94098(&System_Func_KeyValuePair_string__int___int__TypeInfo);
    sub_1C94098(&System_Func_KeyValuePair_string__int___bool__TypeInfo);
    sub_1C94098(&System_Func_KeyValuePair_string__int___string__TypeInfo);
    sub_1C94098(&Method_DataVals___c__GetUseInFsmParam_b__43_0__);
    sub_1C94098(&Method_DataVals___c__GetUseInFsmParam_b__43_1__);
    sub_1C94098(&Method_DataVals___c__GetUseInFsmParam_b__43_2__);
    sub_1C94098(&DataVals___c_TypeInfo);
    byte_4D2C31F = 1;
  }
  v3 = DataVals___c_TypeInfo;
  vals = this->fields.vals;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v3 = DataVals___c_TypeInfo;
  }
  _9__43_0 = (System_Func_T__TResult__o *)v3->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = DataVals___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__43_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_string__int___bool__TypeInfo);
    System_Func_KeyValuePair_object__int___bool____ctor(
      _9__43_0,
      v6,
      Method_DataVals___c__GetUseInFsmParam_b__43_0__,
      0);
    static_fields = DataVals___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_KeyValuePair_string__int___bool__o *)_9__43_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)_9__43_0,
          (const MethodInfo_31E28D0 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v15 = DataVals___c_TypeInfo;
  v16 = v14;
  if ( !DataVals___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo);
    v15 = DataVals___c_TypeInfo;
  }
  _9__43_1 = (System_Func_T__TResult__o *)v15->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = DataVals___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__43_1 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_string__int___string__TypeInfo);
    System_Func_KeyValuePair_object__int___object____ctor(
      _9__43_1,
      v18,
      Method_DataVals___c__GetUseInFsmParam_b__43_1__,
      0);
    v19 = DataVals___c_TypeInfo->static_fields;
    v19->__9__43_1 = (struct System_Func_KeyValuePair_string__int___string__o *)_9__43_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v19->__9__43_1, (int32_t)_9__43_1, v20, v21, v22, v23, v24, v25);
    v15 = DataVals___c_TypeInfo;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = DataVals___c_TypeInfo;
  }
  _9__43_2 = (System_Func_T__TResult__o *)v15->static_fields->__9__43_2;
  if ( !_9__43_2 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = DataVals___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v15->static_fields->__9;
    _9__43_2 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_string__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__43_2,
      v27,
      Method_DataVals___c__GetUseInFsmParam_b__43_2__,
      0);
    v28 = DataVals___c_TypeInfo->static_fields;
    v28->__9__43_2 = (struct System_Func_KeyValuePair_string__int___int__o *)_9__43_2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v28->__9__43_2, (int32_t)_9__43_2, v29, v30, v31, v32, v33, v34);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_object__int___object__int_(
                                                                   v16,
                                                                   (System_Func_TSource__TKey__o *)_9__43_1,
                                                                   (System_Func_TSource__TElement__o *)_9__43_2,
                                                                   (const MethodInfo_31DCF78 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__int___string__int___);
}


System_String_array *DataVals__GetValsArray(System_String_o *vals, const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v4; // x1
  long double inited; // q0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4D2C31A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_string___);
    sub_1C94098(&StringLiteral_15861/*"["*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_16112/*"]"*/);
    byte_4D2C31A = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(vals, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_string___;
    v7 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
    if ( !v7 )
    {
      sub_1C6A188(Method_System_Array_Empty_string___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C6A12C(inited);
    return **(System_String_array ***)(v9 + 184);
  }
  else
  {
    if ( !vals
      || (IsNullOrEmpty = System_String__Replace_64464308(
                            vals,
                            (System_String_o *)StringLiteral_15861/*"["*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0)) == 0
      || (IsNullOrEmpty = System_String__Replace_64464308(
                            IsNullOrEmpty,
                            (System_String_o *)StringLiteral_16112/*"]"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0)) == 0 )
    {
      sub_1C942F0(IsNullOrEmpty, v4);
    }
    return System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0);
  }
}


System_Int32_array *DataVals__GetValsList(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *StrParam; // x21
  const MethodInfo *v7; // x3
  int32_t Param; // w0
  int32_t v9; // w19
  System_Int32_array *result; // x0
  __int64 v11; // x1

  if ( (byte_4D2C330 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C330 = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, type, 0, v7);
  if ( !Param )
    return 0;
  v9 = Param;
  result = (System_Int32_array *)sub_1C94140(int___TypeInfo, 1);
  if ( !result )
    sub_1C942F0(0, v11);
  if ( !LODWORD(result->max_length) )
    sub_1C942F8(result);
  result->m_Items[0] = v9;
  return result;
}


int32_t DataVals__GetValue(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 3, 0, v2);
}


int32_t DataVals__GetValue2(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 4, 0, v2);
}


bool DataVals__HasBgmPriorityInVals(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return DataVals__isParam(this, 160, v2) || DataVals__isParam(this, 111, v4);
}


bool DataVals__IsActAttackFunction(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 148, 0, v2) > 0;
}


bool DataVals__IsActNoDamageBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 124, 0, v2) == 1;
}


bool DataVals__IsAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  System_String_o *v10; // x0

  if ( (byte_4D2C338 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C338 = 1;
  }
  if ( DataVals__GetParam(this, 37, 0, v2) )
    return 1;
  StrParam = DataVals__GetStrParam(this, 37, (System_String_o *)StringLiteral_1/*""*/, v4);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) || DataVals__GetParam(this, 112, 0, v6) )
  {
    return 1;
  }
  else
  {
    v10 = DataVals__GetStrParam(this, 112, (System_String_o *)StringLiteral_1/*""*/, v7);
    return !System_String__IsNullOrEmpty(v10, 0);
  }
}


bool DataVals__IsAddLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0

  if ( (byte_4D2C339 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C339 = 1;
  }
  if ( DataVals__GetParam(this, 38, 0, v2) )
  {
    return 1;
  }
  else
  {
    StrParam = DataVals__GetStrParam(this, 38, (System_String_o *)StringLiteral_1/*""*/, v4);
    return !System_String__IsNullOrEmpty(StrParam, 0);
  }
}


bool DataVals__IsAdjustmentBuffTurn(DataVals_o *this, const MethodInfo *method)
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


bool DataVals__IsBehaveAsFamilyBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  return !DataVals__isParam(this, 98, v2) || DataVals__GetParam(this, 98, 0, v4) > 0;
}


bool DataVals__IsCancelTransform(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 143, v2);
}


bool DataVals__IsChangeTDCommandType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 52, 0, v2) != 0;
}


bool DataVals__IsContainOnFieldsParameter(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  return DataVals__isParam(this, 11, v2) || DataVals__isParam(this, 42, v4) || DataVals__isParam(this, 216, v5);
}


bool DataVals__IsCopyFunctionTargetPTOnly(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 121, 0, v2) == 1;
}


bool DataVals__IsDependOverCharge(DataVals_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_4D2C33C & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_bool___);
    byte_4D2C33C = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_318A494 *)Method_BasicHelper_IndexValue_bool___);
}


bool DataVals__IsEndBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 35, 0, v2) != 0;
}


bool DataVals__IsEqualsTo1(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, type, 0, v3) == 1;
}


bool DataVals__IsEvenIfWinDie(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 86, 0, v2) == 1;
}


bool DataVals__IsExistSnapShotParamAddIndv(DataVals_o *this, const MethodInfo *method)
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
  return !BasicHelper__IsNullOrEmpty(ParamArray, 0)
      || !BasicHelper__IsNullOrEmpty(v6, 0)
      || !BasicHelper__IsNullOrEmpty(v8, 0)
      || !BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0)
      || !BasicHelper__IsNullOrEmpty(v12, 0)
      || !BasicHelper__IsNullOrEmpty(v14, 0);
}


bool DataVals__IsExtendBuffHalfTurnInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 167, v2);
}


bool DataVals__IsExtendBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 169, v2);
}


bool DataVals__IsForceTurnProgressIfTimingIsOverInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 211, 0, v2) == 1;
}


bool DataVals__IsForceTurnProgressIfTimingIsOverInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 210, 0, v2) == 1;
}


bool DataVals__IsForciblyAddState(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  return DataVals__isParam(this, 50, v2) || DataVals__isParam(this, 88, v4) || DataVals__isParam(this, 113, v5);
}


bool DataVals__IsFuncCheckFieldIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 263, v2);
}


bool DataVals__IsHideNoEffect(DataVals_o *this, int32_t targetId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Param; // w0
  const MethodInfo *v7; // x2
  __int64 v8; // x21
  __int64 Value_int__Int32Enum; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_DataVals_InvalidCause__o *v11; // x19
  System_Func_T__TResult__o *v12; // x20
  System_Collections_Generic_List_DataVals_InvalidCause__o *resultList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2C336 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
    sub_1C94098(&Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
    sub_1C94098(&System_Func_DataVals_InvalidCause__bool__TypeInfo);
    sub_1C94098(&Method_DataVals___c__DisplayClass85_0__IsHideNoEffect_b__0__);
    sub_1C94098(&DataVals___c__DisplayClass85_0_TypeInfo);
    byte_4D2C336 = 1;
  }
  resultList = 0;
  Param = DataVals__GetParam(this, 12, 0, v3);
  if ( Param != 1 )
  {
    if ( DataVals__TryGetDisplayNoEffectCauseList(this, &resultList, v7) )
    {
      v8 = sub_1C942E4(DataVals___c__DisplayClass85_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0);
      Value_int__Int32Enum = BasicHelper__GetValue_int__Int32Enum_(
                               (System_Collections_Generic_Dictionary_K__V__o *)this->fields.invalidCauseDict,
                               targetId,
                               0,
                               (const MethodInfo_3189D0C *)Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
      if ( !v8 )
        sub_1C942F0(Value_int__Int32Enum, v10);
      *(_DWORD *)(v8 + 16) = Value_int__Int32Enum;
      v11 = resultList;
      v12 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_DataVals_InvalidCause__bool__TypeInfo);
      System_Func_Int32Enum__bool____ctor(
        v12,
        (Il2CppObject *)v8,
        Method_DataVals___c__DisplayClass85_0__IsHideNoEffect_b__0__,
        0);
      LOBYTE(Param) = System_Linq_Enumerable__All_Int32Enum_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                        (System_Func_TSource__bool__o *)v12,
                        (const MethodInfo_31A62B8 *)Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
    }
    else
    {
      LOBYTE(Param) = 0;
    }
  }
  return Param & 1;
}


bool DataVals__IsIgnoreShiftSafeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 147, 0, v2) == 1;
}


bool DataVals__IsIncludeIgnoreIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 85, 0, v2) == 1;
}


bool DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 171, v2);
}


bool DataVals__IsLoseBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 36, 0, v2) != 0;
}


bool DataVals__IsMatchFriendShipCondition(DataVals_o *this, int32_t friendShip, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, 180, 0, v3) <= friendShip;
}


bool DataVals__IsOnParty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 92, 0, v2) == 1;
}


bool DataVals__IsOpponentOnly(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 33, 0, v2) != 0;
}


bool DataVals__IsOverChargeState(DataVals_o *this, int32_t state, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.overChargeState & state) < 0) ^ v3 | ((this->fields.overChargeState & state) == 0));
}


bool DataVals__IsParam(DataVals_o *this, System_String_o *typeKey, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_4D2C32C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    byte_4D2C32C = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1C942F0(0, typeKey);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)typeKey,
           (const MethodInfo_35180B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool DataVals__IsParamAddBattlePoint(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return DataVals__isParam(this, 182, v2) && DataVals__isParam(this, 183, v4);
}


bool DataVals__IsProgressTurnOnBoard(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 141, 0, v2) == 1;
}


bool DataVals__IsSatisfyAboveBelowCond(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x23
  DataVals_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_String_o *ParamKey; // x20
  System_Func_bool__int__bool__o *v14; // x21
  const MethodInfo *v15; // x4

  if ( (byte_4D2C343 & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__int__bool__TypeInfo);
    sub_1C94098(&Method_DataVals___c__DisplayClass118_0__IsSatisfyAboveBelowCond_b__0__);
    sub_1C94098(&DataVals___c__DisplayClass118_0_TypeInfo);
    sub_1C94098(&StringLiteral_1525/*"<="*/);
    byte_4D2C343 = 1;
  }
  v9 = sub_1C942E4(DataVals___c__DisplayClass118_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C942F0(v10, v11);
  *(_DWORD *)(v9 + 16) = compareVal;
  ParamKey = DataVals__MakeParamKey(v10, paramType, index, v12);
  v14 = (System_Func_bool__int__bool__o *)sub_1C942E4(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_DataVals___c__DisplayClass118_0__IsSatisfyAboveBelowCond_b__0__,
    0);
  return DataVals__IsSatisfyRangeCondition(this, ParamKey, (System_String_o *)StringLiteral_1525/*"<="*/, v14, v15);
}


bool DataVals__IsSatisfyAboveBelowCondition(
        DataVals_o *this,
        int32_t paramType,
        int32_t compareVal,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_Func_bool__int__bool__o *v11; // x21
  const MethodInfo *v12; // x4
  System_Enum_o v14; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+18h] [xbp-48h]

  if ( (byte_4D2C344 & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__int__bool__TypeInfo);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    sub_1C94098(&Method_DataVals___c__DisplayClass119_0__IsSatisfyAboveBelowCondition_b__0__);
    sub_1C94098(&DataVals___c__DisplayClass119_0_TypeInfo);
    sub_1C94098(&StringLiteral_1490/*"<"*/);
    byte_4D2C344 = 1;
  }
  v7 = sub_1C942E4(DataVals___c__DisplayClass119_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_DWORD *)(v7 + 16) = compareVal;
  v14.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v14.monitor = (void *)-1LL;
  v15 = paramType;
  v10 = System_Enum__ToString(&v14, 0);
  v11 = (System_Func_bool__int__bool__o *)sub_1C942E4(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_DataVals___c__DisplayClass119_0__IsSatisfyAboveBelowCondition_b__0__,
    0);
  return DataVals__IsSatisfyRangeCondition(this, v10, (System_String_o *)StringLiteral_1490/*"<"*/, v11, v12);
}


bool DataVals__IsSatisfyCommonReleaseId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  CommonReleaseMaster_o *v8; // x19
  int32_t v9; // w1
  char v10; // w8
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2C33E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2C33E = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 209, &param, v2) )
  {
    v4 = param;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    v7 = param;
    v8 = (CommonReleaseMaster_o *)Master_object;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( !v8 )
      sub_1C942F0(Master_object, v6);
    if ( v7 >= 0 )
      v9 = v7;
    else
      v9 = -v7;
    v10 = (v4 < 0) ^ CommonReleaseMaster__IsOpen(v8, v9, 0, 0, 0);
  }
  else
  {
    v10 = 1;
  }
  return v10 & 1;
}


bool DataVals__IsSatisfyRangeCondition(
        DataVals_o *this,
        System_String_o *paramType,
        System_String_o *compareKey,
        System_Func_bool__int__bool__o *funcCompare,
        const MethodInfo *method)
{
  System_String_o *StrParam_42445732; // x22
  __int64 IsMatch; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x21
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w1
  System_String_o *v46; // x21
  int v47; // w8
  __int64 v48; // x22
  unsigned int v49; // w25
  System_String_o *v50; // x23
  System_String_o *v51; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2C345 & 1) == 0 )
  {
    sub_1C94098(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_733/*"(^"*/);
    sub_1C94098(&StringLiteral_16096/*"\\d+$|^\\d+"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_458/*"$)"*/);
    byte_4D2C345 = 1;
  }
  result = 0;
  StrParam_42445732 = DataVals__GetStrParam_42445732(
                        this,
                        paramType,
                        (System_String_o *)StringLiteral_1/*""*/,
                        (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam_42445732, 0) )
    return 1;
  IsMatch = sub_1C94140(string___TypeInfo, 5);
  if ( !IsMatch )
    goto LABEL_25;
  v18 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
    goto LABEL_26;
  v19 = StringLiteral_733/*"(^"*/;
  *(_QWORD *)(IsMatch + 32) = StringLiteral_733/*"(^"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(IsMatch + 32), v19, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v18 + 24) <= 1u
    || (*(_QWORD *)(v18 + 40) = compareKey,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 40), (int32_t)compareKey, v20, v21, v22, v23, v24, v25),
        *(_DWORD *)(v18 + 24) <= 2u)
    || (v32 = StringLiteral_16096/*"\\d+$|^\\d+"*/,
        *(_QWORD *)(v18 + 48) = StringLiteral_16096/*"\\d+$|^\\d+"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 48), v32, v26, v27, v28, v29, v30, v31),
        *(_DWORD *)(v18 + 24) <= 3u)
    || (*(_QWORD *)(v18 + 56) = compareKey,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 56), (int32_t)compareKey, v33, v34, v35, v36, v37, v38),
        *(_DWORD *)(v18 + 24) <= 4u) )
  {
LABEL_26:
    sub_1C942F8(IsMatch);
  }
  v45 = StringLiteral_458/*"$)"*/;
  *(_QWORD *)(v18 + 64) = StringLiteral_458/*"$)"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 64), v45, v39, v40, v41, v42, v43, v44);
  IsMatch = (__int64)System_String__Concat_64458276((System_String_array *)v18, 0);
  if ( !StrParam_42445732
    || (v46 = (System_String_o *)IsMatch, (IsMatch = (__int64)System_String__Split(StrParam_42445732, 0x2Fu, 0, 0)) == 0) )
  {
LABEL_25:
    sub_1C942F0(IsMatch, v11);
  }
  v47 = *(_DWORD *)(IsMatch + 24);
  v48 = IsMatch;
  if ( v47 < 1 )
    return 1;
  v49 = 0;
  while ( 1 )
  {
    if ( v49 >= v47 )
      goto LABEL_26;
    v50 = *(System_String_o **)(v48 + 8LL * (int)v49 + 32);
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v50, v46, 0);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v50 )
      goto LABEL_25;
    v51 = System_String__Replace_64464308(v50, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !System_Int32__TryParse(v51, &result, 0) )
      return 0;
    IsMatch = System_String__StartsWith(v50, compareKey, 0);
    if ( !funcCompare )
      goto LABEL_25;
    IsMatch = ((__int64 (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))funcCompare->fields.invoke_impl)(
                funcCompare->fields.method_code,
                IsMatch & 1,
                (unsigned int)result,
                funcCompare->fields.method);
    if ( (IsMatch & 1) == 0 )
      return 0;
    v47 = *(_DWORD *)(v48 + 24);
    if ( (int)++v49 >= v47 )
      return 1;
  }
}


bool DataVals__IsShortenBuffHalfTurnInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 168, v2);
}


bool DataVals__IsShortenBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 170, v2);
}


bool DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x20
  Il2CppObject *v6; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+18h] [xbp-28h]

  if ( (byte_4D2C32D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    byte_4D2C32D = 1;
  }
  strVals = this->fields.strVals;
  if ( strVals )
  {
    v10 = type;
    v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v9.monitor = (void *)-1LL;
    v6 = (Il2CppObject *)System_Enum__ToString(&v9, 0);
    return System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)strVals,
             v6,
             (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  }
  else
  {
    return 0;
  }
}


bool DataVals__IsWinBattleNotRelatedSurvivalStatus(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 57, 0, v2) != 0;
}


System_String_o *DataVals__MakeParamKey(DataVals_o *this, int32_t paramType, int32_t index, const MethodInfo *method)
{
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+18h] [xbp-38h]
  int32_t v11; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4D2C342 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    sub_1C94098(&StringLiteral_25450/*"{0}_{1}"*/);
    byte_4D2C342 = 1;
  }
  if ( index == 0x7FFFFFFF )
  {
    v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v9.monitor = (void *)-1LL;
    v10 = paramType;
    return System_Enum__ToString(&v9, 0);
  }
  else
  {
    LODWORD(v9.klass) = paramType;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v9);
    v11 = index;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    return System_String__Format_64459052((System_String_o *)StringLiteral_25450/*"{0}_{1}"*/, v7, v8, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void DataVals__OnOverChargeState(
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
    sub_1C942F0(Param, v10);
  if ( (_DWORD)Param != DataVals__GetParam(compVals, type, 0, v11) )
    this->fields.overChargeState |= state;
}


void DataVals__SetDependDataVals(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t *funcIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  struct System_Collections_Generic_List_DataVals__o **p_dependDataValsList; // x22
  int32_t size; // w2
  int v8; // w9
  DataVals_c **v9; // x28
  System_String_o **v10; // x27
  System_String_o **v11; // x20
  int32_t v12; // w23
  int32_t i; // w24
  DataVals_c *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x5
  DataVals_o *v17; // x26
  const MethodInfo *v18; // x3
  System_String_o *v19; // x0
  const MethodInfo *v20; // x5
  System_String_o *v21; // x25
  System_String_o *IsNullOrEmpty; // x0
  __int64 v23; // x1
  DataVals_c **v24; // x29
  System_String_o **v25; // x28
  System_String_o **v26; // x20
  System_Collections_Generic_List_object__o *v27; // x27
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_String_o *v35; // x0
  DataVals_o *v36; // x26
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_String_Fields fields; // x8
  _QWORD *v47; // x9
  __int64 klass_low; // x10
  __int64 v49; // x8
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4D2C31C & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C94098(&DataVals_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_DataVals__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_1C94098(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_1C94098(&StringLiteral_15861/*"["*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_16112/*"]"*/);
    byte_4D2C31C = 1;
  }
  result = 0;
  p_dependDataValsList = &this->fields.dependDataValsList;
  dependDataValsList = this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    size = dependDataValsList->fields._size;
    v8 = dependDataValsList->fields._version + 1;
    dependDataValsList->fields._size = 0;
    dependDataValsList->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)dependDataValsList->fields._items, 0, size, 0);
  }
  v9 = &DataVals_TypeInfo;
  v10 = (System_String_o **)&StringLiteral_15861/*"["*/;
  v11 = (System_String_o **)&StringLiteral_16112/*"]"*/;
  v12 = 0;
  for ( i = 1; ; ++i )
  {
    v14 = *v9;
    if ( !(*v9)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = *v9;
    }
    if ( i > v14->static_fields->MAX_DEPEND_FUNC )
      break;
    v15 = DataVals__ConcatenateTypeValue((DataVals_o *)v14, 44, i, method);
    v17 = (DataVals_o *)DataVals__cutValue(this, v15, 0x5Bu, 0x5Du, 1, v16);
    v19 = DataVals__ConcatenateTypeValue(v17, 45, i, v18);
    v21 = DataVals__cutValue(this, v19, 0x5Bu, 0x5Du, 1, v20);
    if ( System_String__IsNullOrEmpty((System_String_o *)v17, 0) )
      break;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v21, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      break;
    if ( !*p_dependDataValsList )
    {
      v24 = v9;
      v25 = v11;
      v26 = v10;
      v27 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v27,
        (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v28 = (int)v27;
      *p_dependDataValsList = (struct System_Collections_Generic_List_DataVals__o *)v27;
      v10 = v26;
      v11 = v25;
      v9 = v24;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dependDataValsList, v28, v29, v30, v31, v32, v33, v34);
    }
    result = 0;
    if ( !v17
      || (IsNullOrEmpty = System_String__Replace_64464308(
                            (System_String_o *)v17,
                            *v10,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0)) == 0 )
    {
LABEL_27:
      sub_1C942F0(IsNullOrEmpty, v23);
    }
    v35 = System_String__Replace_64464308(IsNullOrEmpty, *v11, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( System_Int32__TryParse(v35, &result, 0) )
    {
      v36 = (DataVals_o *)sub_1C942E4(*v9);
      DataVals___ctor(v36, v21, v37);
      IsNullOrEmpty = (System_String_o *)funcMst;
      if ( !funcMst )
        goto LABEL_27;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)funcMst,
                                           result,
                                           (const MethodInfo_345B4C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v36 )
        goto LABEL_27;
      DataVals__SetType_42441420(v36, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v38);
      v36->fields._isOverCharge_k__BackingField = DataVals__IsDependOverCharge(this, v12, v39);
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
          (Il2CppObject *)v36,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(IsNullOrEmpty[1].klass) = klass_low + 1;
        *(_QWORD *)(v49 + 32) = v36;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v49 + 32), (int32_t)v36, v40, v41, v42, v43, v44, v45);
      }
      ++v12;
      ++*funcIndex;
    }
  }
}


void DataVals__SetDependOverChargeFlag(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals__o *dependDataList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  __int64 size; // x1
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x8
  Il2CppObject *v16; // x21
  unsigned __int64 v17; // x22
  Il2CppObject *Item; // x23
  const MethodInfo *v19; // x2

  if ( (byte_4D2C33B & 1) == 0 )
  {
    sub_1C94098(&bool___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_DataVals__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_DataVals__get_Item__);
    byte_4D2C33B = 1;
  }
  if ( dependDataList )
  {
    dependDataValsList = this->fields.dependDataValsList;
    if ( dependDataValsList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v7 = (Il2CppObject *)sub_1C94140(bool___TypeInfo, size);
        v15 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
        if ( !v15 )
LABEL_13:
          sub_1C942F0(v7, v8);
        v16 = v7;
        v17 = 0;
        while ( (__int64)v17 < v15->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v15,
                   v17,
                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          v7 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)dependDataList,
                 v17,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          if ( Item )
          {
            v7 = (Il2CppObject *)DataVals__CheckOverCharge((DataVals_o *)Item, (DataVals_o *)v7, v19);
            if ( v16 )
            {
              if ( v17 >= LODWORD(v16[1].monitor) )
                sub_1C942F8(v7);
              *((_BYTE *)&v16[2].klass + v17) = (unsigned __int8)v7 & 1;
              v15 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
              ++v17;
              if ( v15 )
                continue;
            }
          }
          goto LABEL_13;
        }
        this->fields._dependOverChargeArray_k__BackingField = (struct System_Boolean_array *)v16;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
          (int32_t)v16,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
DataVals_o *DataVals__SetInvalidCauseByAnyBuff(DataVals_o *this, int32_t targetId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *invalidCauseDict; // x0

  if ( (byte_4D2C318 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
    byte_4D2C318 = 1;
  }
  invalidCauseDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.invalidCauseDict;
  if ( !invalidCauseDict )
    sub_1C942F0(0, *(_QWORD *)&targetId);
  System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
    invalidCauseDict,
    targetId,
    1,
    (const MethodInfo_34AEC00 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
  return this;
}


void DataVals__SetOverCharge(DataVals_o *this, bool flg, const MethodInfo *method)
{
  this->fields._isOverCharge_k__BackingField = flg;
}


void DataVals__SetTempType(DataVals_o *this, FunctionMaster_o *funcMst, int32_t ft, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_svals; // x21
  struct System_String_o *svals; // x22
  const MethodInfo *v8; // x2
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t funcIndex; // [xsp+Ch] [xbp-24h] BYREF

  funcIndex = 0;
  p_svals = (GrandQuestFolderBoardItem_o *)&this->fields.svals;
  svals = this->fields.svals;
  DataVals__SetDependDataVals(this, funcMst, &funcIndex, method);
  DataVals__SetType(this, ft, v8);
  p_svals->klass = (GrandQuestFolderBoardItem_c *)svals;
  sub_1C9403C(p_svals, (int32_t)svals, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void DataVals__SetType(DataVals_o *this, int32_t ft, const MethodInfo *method)
{
  void *svals; // x0
  __int64 v6; // x8
  _DWORD *v7; // x29
  DataVals_TYPE_c **v8; // x24
  const MethodInfo_35180B8 **v9; // x28
  const MethodInfo_3517EC4 **v10; // x21
  unsigned __int64 v11; // x26
  char *v12; // x20
  Il2CppObject *v13; // x22
  int32_t funcType; // w8
  void *v15; // x23
  DataVals_o *v16; // x29
  const MethodInfo_3517EC4 **v17; // x27
  const MethodInfo_35180B8 **v18; // x21
  DataVals_TYPE_c **v19; // x28
  System_Collections_Generic_Dictionary_object__object__o *v20; // x24
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int v28; // w8
  System_Enum_c *v29; // x8
  int v30; // w8
  _DWORD *v31; // [xsp+0h] [xbp-90h]
  GrandQuestFolderBoardItem_o *p_strVals; // [xsp+8h] [xbp-88h]
  System_Enum_o v33; // [xsp+10h] [xbp-80h] BYREF
  int v34; // [xsp+20h] [xbp-70h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4D2C31B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    sub_1C94098(&StringLiteral_15861/*"["*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_16112/*"]"*/);
    byte_4D2C31B = 1;
  }
  result = 0;
  svals = this->fields.svals;
  this->fields.funcType = ft;
  if ( !svals
    || (svals = System_String__Replace_64464308(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15861/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0)) == 0
    || (svals = System_String__Replace_64464308(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16112/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0)) == 0
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0)) == 0 )
  {
LABEL_87:
    sub_1C942F0(svals, *(_QWORD *)&ft);
  }
  v6 = *((_QWORD *)svals + 3);
  v7 = svals;
  if ( (int)v6 >= 1 )
  {
    v8 = &DataVals_TYPE_TypeInfo;
    v9 = (const MethodInfo_35180B8 **)&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__;
    v10 = (const MethodInfo_3517EC4 **)&Method_System_Collections_Generic_Dictionary_string__int__Add__;
    v11 = 0;
    v12 = (char *)svals + 32;
    v31 = svals;
    p_strVals = (GrandQuestFolderBoardItem_o *)&this->fields.strVals;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v6 )
LABEL_88:
        sub_1C942F8(svals);
      v13 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v12[8 * v11], &result, 0);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v11 >= (unsigned int)v7[6] )
          goto LABEL_88;
        svals = *(void **)&v12[8 * v11];
        if ( !svals )
          goto LABEL_87;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0);
        if ( !svals )
          goto LABEL_87;
        v15 = svals;
        if ( *((int *)svals + 6) >= 2 )
        {
          v13 = (Il2CppObject *)*((_QWORD *)svals + 4);
          if ( !System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0) )
          {
            svals = p_strVals->klass;
            if ( !p_strVals->klass )
            {
              v16 = this;
              v17 = v10;
              v18 = v9;
              v19 = v8;
              v20 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_object__object____ctor(
                v20,
                (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              v21 = (int)v20;
              p_strVals->klass = (GrandQuestFolderBoardItem_c *)v20;
              v8 = v19;
              v9 = v18;
              v10 = v17;
              this = v16;
              v7 = v31;
              sub_1C9403C(p_strVals, v21, v22, v23, v24, v25, v26, v27);
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_87;
            }
            svals = (void *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                              (System_Collections_Generic_Dictionary_object__object__o *)svals,
                              v13,
                              (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
            if ( ((unsigned __int8)svals & 1) == 0 )
            {
              if ( *((_DWORD *)v15 + 6) <= 1u )
                goto LABEL_88;
              svals = p_strVals->klass;
              if ( !p_strVals->klass )
                goto LABEL_87;
              System_Collections_Generic_Dictionary_object__object___Add(
                (System_Collections_Generic_Dictionary_object__object__o *)svals,
                v13,
                *((Il2CppObject **)v15 + 5),
                (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
            }
          }
        }
        goto LABEL_73;
      }
      funcType = this->fields.funcType;
      if ( funcType <= 55 )
        break;
      if ( funcType > 133 )
      {
        if ( funcType <= 149 )
        {
          switch ( funcType )
          {
            case 142:
              if ( (_DWORD)v11 == 2 )
              {
                v33.klass = (System_Enum_c *)*v8;
                v33.monitor = (void *)-1LL;
                v28 = 174;
              }
              else
              {
                if ( (_DWORD)v11 != 1 )
                  goto LABEL_67;
                v33.klass = (System_Enum_c *)*v8;
                v33.monitor = (void *)-1LL;
                v28 = 173;
              }
              break;
            case 143:
              goto LABEL_50;
            case 146:
            case 149:
              goto LABEL_63;
            default:
              goto LABEL_65;
          }
          goto LABEL_71;
        }
        if ( funcType == 154 )
          goto LABEL_63;
        if ( (funcType & 0xFFFFFFFE) != 0xA0 )
          goto LABEL_65;
        goto LABEL_59;
      }
      if ( funcType > 109 )
      {
        if ( funcType > 130 )
        {
          if ( funcType == 131 || funcType == 133 )
            goto LABEL_63;
LABEL_65:
          if ( (_DWORD)v11 != 2 )
            goto LABEL_66;
LABEL_70:
          v33.klass = (System_Enum_c *)*v8;
          v33.monitor = (void *)-1LL;
          v28 = 6;
          goto LABEL_71;
        }
        if ( funcType != 121 )
        {
          if ( funcType != 130 )
            goto LABEL_65;
LABEL_59:
          switch ( (int)v11 )
          {
            case 0:
              goto LABEL_68;
            case 1:
              v33.klass = (System_Enum_c *)*v8;
              v33.monitor = (void *)-1LL;
              v28 = 1;
              goto LABEL_71;
            case 2:
              v33.klass = (System_Enum_c *)*v8;
              v33.monitor = (void *)-1LL;
              v28 = 2;
              goto LABEL_71;
            case 3:
              goto LABEL_69;
            case 4:
              v33.klass = (System_Enum_c *)*v8;
              v33.monitor = (void *)-1LL;
              v28 = 5;
              goto LABEL_71;
            case 5:
              goto LABEL_64;
            default:
              goto LABEL_73;
          }
          goto LABEL_73;
        }
        goto LABEL_50;
      }
      if ( funcType == 62 )
        goto LABEL_63;
      if ( funcType != 109 )
        goto LABEL_65;
      switch ( (int)v11 )
      {
        case 0:
          goto LABEL_68;
        case 1:
          goto LABEL_69;
        case 2:
          goto LABEL_70;
        case 3:
          v33.klass = (System_Enum_c *)*v8;
          v33.monitor = (void *)-1LL;
          v28 = 77;
          goto LABEL_71;
        default:
          break;
      }
LABEL_73:
      svals = (void *)System_String__op_Inequality((System_String_o *)v13, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( ((unsigned __int8)svals & 1) != 0 )
        v30 = 0;
      else
        v30 = 52;
      if ( v30 != 52 )
      {
        svals = this->fields.vals;
        if ( !svals )
          goto LABEL_87;
        svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__int__o *)svals,
                          v13,
                          *v9);
        if ( ((unsigned __int8)svals & 1) == 0 )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_87;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v13,
            result,
            *v10);
        }
      }
      LODWORD(v6) = v7[6];
      if ( (__int64)++v11 >= (int)v6 )
        return;
    }
    if ( funcType <= 18 )
    {
      if ( funcType <= 2 )
      {
        if ( funcType != 1 )
        {
          if ( funcType != 2 )
            goto LABEL_65;
LABEL_63:
          if ( (_DWORD)v11 == 2 )
          {
LABEL_64:
            v33.klass = (System_Enum_c *)*v8;
            v33.monitor = (void *)-1LL;
            v28 = 4;
            goto LABEL_71;
          }
LABEL_66:
          if ( (_DWORD)v11 != 1 )
          {
LABEL_67:
            if ( (_DWORD)v11 )
              goto LABEL_73;
LABEL_68:
            v29 = (System_Enum_c *)*v8;
            v34 = 0;
            v33.klass = v29;
            v33.monitor = (void *)-1LL;
            goto LABEL_72;
          }
LABEL_69:
          v33.klass = (System_Enum_c *)*v8;
          v33.monitor = (void *)-1LL;
          v28 = 3;
LABEL_71:
          v34 = v28;
LABEL_72:
          v13 = (Il2CppObject *)System_Enum__ToString(&v33, 0);
          goto LABEL_73;
        }
        goto LABEL_59;
      }
      if ( (unsigned int)(funcType - 9) < 2 )
        goto LABEL_63;
      if ( funcType != 15 )
      {
        if ( funcType == 16 )
          goto LABEL_59;
        if ( funcType != 18 )
          goto LABEL_65;
      }
    }
    else if ( funcType <= 47 )
    {
      if ( funcType != 27 && funcType != 47 )
        goto LABEL_65;
    }
    else
    {
      if ( funcType == 52 )
        goto LABEL_63;
      if ( funcType != 55 )
        goto LABEL_65;
    }
LABEL_50:
    switch ( (int)v11 )
    {
      case 0:
        goto LABEL_68;
      case 1:
        goto LABEL_69;
      case 2:
        goto LABEL_70;
      case 3:
        v33.klass = (System_Enum_c *)*v8;
        v33.monitor = (void *)-1LL;
        v28 = 7;
        goto LABEL_71;
      default:
        goto LABEL_73;
    }
    goto LABEL_73;
  }
}


// local variable allocation has failed, the output may be wrong!
void DataVals__SetType_42441420(
        DataVals_o *this,
        FunctionEntity_o *funcEnt,
        int32_t funcIndex,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t targetType; // w8

  if ( !funcEnt )
    sub_1C942F0(this, 0);
  v6 = (GrandQuestFolderBoardItem_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.sortValue0B = (int64_t)funcEnt;
  v6 = (GrandQuestFolderBoardItem_o *)((char *)v6 + 40);
  sub_1C9403C(v6, (int32_t)funcEnt, v7, v8, v9, v10, v11, v12);
  targetType = funcEnt->fields.targetType;
  HIDWORD(v6[-1].fields._ClosedMessage_k__BackingField) = funcIndex;
  HIDWORD(v6[-1].fields._ListCreatedTime_k__BackingField) = targetType;
}


void DataVals__SetUpHatePriority(DataVals_o *this, BattleBuffData_BuffData_o *buffData, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t BuffType; // w20
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2C351 & 1) == 0 )
  {
    sub_1C94098(&BuffList_TypeInfo);
    byte_4D2C351 = 1;
  }
  param = 0;
  v6 = DataVals__TryGetParam(this, 240, &param, v3);
  if ( v6 )
  {
    if ( !buffData )
      sub_1C942F0(v6, v7);
    BuffType = BattleBuffData_BuffData__get_BuffType(buffData, 0);
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( BuffList__IsUpHate(BuffType, 0) )
      buffData->fields.PriorityEachType = param;
  }
}


bool DataVals__TryGetDisplayNoEffectCauseList(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals_InvalidCause__o **resultList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x4
  bool ParamStrArray; // w0
  bool v12; // w8
  System_Collections_Generic_List_T__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_DataVals_InvalidCause__o *v20; // x0
  __int64 v21; // x1
  System_String_array *v22; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  System_String_o *v25; // x20
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int32_t item; // [xsp+Ch] [xbp-54h] BYREF
  System_String_array *result; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D2C337 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Enum_TryParse_DataVals_InvalidCause___);
    sub_1C94098(&System_Enum_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    sub_1C94098(&System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    byte_4D2C337 = 1;
  }
  result = 0;
  item = 0;
  *resultList = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)resultList, 0, (int32_t)method, v3, v4, v5, v6, v7);
  ParamStrArray = DataVals__TryGetParamStrArray(this, &result, 172, 0x7FFFFFFF, v10);
  v12 = 0;
  if ( ParamStrArray )
  {
    v13 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v13,
      (const MethodInfo_384FDE8 *)Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    *resultList = (System_Collections_Generic_List_DataVals_InvalidCause__o *)v13;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)resultList, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    v22 = result;
    if ( !result )
LABEL_20:
      sub_1C942F0(v20, v21);
    max_length = result->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C942F8(v20);
        v25 = v22->m_Items[i];
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        v20 = (System_Collections_Generic_List_DataVals_InvalidCause__o *)System_Enum__TryParse_Int32Enum__52047196(
                                                                            v25,
                                                                            0,
                                                                            &item,
                                                                            (const MethodInfo_31A2D5C *)Method_System_Enum_TryParse_DataVals_InvalidCause___);
        if ( ((unsigned __int8)v20 & 1) != 0 )
        {
          v20 = *resultList;
          if ( !*resultList )
            goto LABEL_20;
          v21 = (unsigned int)item;
          items = (struct System_Object_array *)v20->fields._items;
          v27 = Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__;
          ++v20->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v20->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)v20,
              v21,
              *(const MethodInfo_385063C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v20->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = v21;
          }
        }
        LODWORD(max_length) = v22->max_length;
      }
    }
    return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0);
  }
  return v12;
}


bool DataVals__TryGetFuncCheckTargetIndividualityCount(
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


bool DataVals__TryGetOverwriteFuncInvalidType(DataVals_o *this, int32_t *invalidType, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  bool isParam; // w20
  int32_t Param; // w0

  isParam = DataVals__isParam(this, 212, method);
  if ( isParam )
    Param = DataVals__GetParam(this, 212, -1, v5);
  else
    Param = -1;
  *invalidType = Param;
  return isParam;
}


bool DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+18h] [xbp-38h]

  if ( (byte_4D2C32E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    byte_4D2C32E = 1;
  }
  vals = this->fields.vals;
  v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = type;
  v8 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
  if ( !vals )
    sub_1C942F0(v8, v9);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v8,
           param,
           (const MethodInfo_3519680 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool DataVals__TryGetParamByValsKey(DataVals_o *this, System_String_o *name, int32_t *value, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_4D2C327 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_4D2C327 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_1C942F0(0, name);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           value,
           (const MethodInfo_3519680 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool DataVals__TryGetParamIntArray(
        DataVals_o *this,
        int32_t type,
        System_Int32_array **paramArray,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v5 = DataVals__GetParamArray(this, type, (const MethodInfo *)paramArray);
  *paramArray = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)paramArray, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*paramArray, 0);
}


bool DataVals__TryGetParamStrArray(
        DataVals_o *this,
        System_String_array **result,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  DataVals_o *v12; // x0
  const MethodInfo *v13; // x3
  System_String_o *ParamKey; // x0
  const MethodInfo *v15; // x3
  System_String_o *StrParam_42445732; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v18; // x1
  System_String_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D2C341 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C341 = 1;
  }
  *result = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)result, 0, paramType, index, (System_String_o *)method, v5, v6, v7);
  ParamKey = DataVals__MakeParamKey(v12, paramType, index, v13);
  StrParam_42445732 = DataVals__GetStrParam_42445732(this, ParamKey, (System_String_o *)StringLiteral_1/*""*/, v15);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam_42445732, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !StrParam_42445732 )
      sub_1C942F0(IsNullOrEmpty, v18);
    v19 = System_String__Split(StrParam_42445732, 0x2Fu, 0, 0);
    *result = v19;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)result, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*result, 0);
}


bool DataVals__TryGetResistSkillId(DataVals_o *this, int32_t *skillId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__TryGetParam(this, 249, skillId, v3);
}


bool DataVals__TryGetSubstituteSkillId(DataVals_o *this, int32_t *skillId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__TryGetParam(this, 247, skillId, v3);
}


void DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  System_Func_T__TResult__o *v5; // x21

  if ( (byte_4D2C33A & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_DataVals_OverChargeState___);
    sub_1C94098(&Method_DataVals_IsOverChargeState__);
    sub_1C94098(&System_Func_DataVals_OverChargeState__bool__TypeInfo);
    byte_4D2C33A = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v5, (Il2CppObject *)this, Method_DataVals_IsOverChargeState__, 0);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_Int32Enum__51925808(
                                                 (System_Int32Enum_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v5,
                                                 (const MethodInfo_3185330 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
}


bool DataVals__UseBuffResistRate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 246, 0, v2) == 1;
}


bool DataVals__UseSvtResistRate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 245, 0, v2) == 1;
}


bool DataVals__checkActSet(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 16, 0, v2) != 0;
}


System_String_o *DataVals__cutValue(
        DataVals_o *this,
        System_String_o *key,
        uint16_t startWord,
        uint16_t endWord,
        bool isDelKeyValue,
        const MethodInfo *method)
{
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x8
  System_String_o **p_svals; // x19
  struct System_String_o *svals; // t1
  int32_t v17; // w0
  int32_t v18; // w23
  int32_t v19; // w22
  int32_t v20; // w0
  int32_t v21; // w24
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int16 v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2C320 & 1) == 0 )
  {
    sub_1C94098(&char_TypeInfo);
    sub_1C94098(&StringLiteral_808/*","*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C320 = 1;
  }
  v31 = 58;
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  v11 = System_Char__ToString((uint16_t)&v31, 0);
  v12 = System_String__Concat_64456008((System_String_o *)StringLiteral_808/*","*/, key, v11, 0);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v14 = svals;
  if ( !svals )
    goto LABEL_18;
  v17 = System_String__IndexOf_64476136(v14, v12, 0);
  if ( v17 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v18 = v17;
  v12 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v12 = (System_String_o *)System_String__IndexOf_64474784(v12, startWord, v18, 0);
  if ( !*p_svals )
    goto LABEL_18;
  v19 = (int)v12;
  v20 = System_String__IndexOf_64474784(*p_svals, endWord, v18, 0);
  if ( v19 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v21 = v20;
  if ( v20 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v12 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v22 = System_String__Substring_64463684(v12, v19, v21 - v19 + 1, 0);
  if ( isDelKeyValue )
  {
    v12 = *p_svals;
    if ( *p_svals )
    {
      v12 = System_String__Substring_64463684(v12, v18, v21 - v18 + 1, 0);
      if ( *p_svals )
      {
        v23 = System_String__Replace_64464308(*p_svals, v12, (System_String_o *)StringLiteral_1/*""*/, 0);
        *p_svals = v23;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p_svals, (int32_t)v23, v24, v25, v26, v27, v28, v29);
        return v22;
      }
    }
LABEL_18:
    sub_1C942F0(v12, v13);
  }
  return v22;
}


int32_t DataVals__getActSet(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 16, 0, v2);
}


int32_t DataVals__getActSetWeight(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 17, 0, v2);
}


System_Collections_Generic_List_DataVals__o *DataVals__get_DependDataValsList(
        DataVals_o *this,
        const MethodInfo *method)
{
  return this->fields.dependDataValsList;
}


FuncParamValueUpInfoBase_o *DataVals__get_FuncParamValueUpInfo(DataVals_o *this, const MethodInfo *method)
{
  return this->fields._FuncParamValueUpInfo_k__BackingField;
}


System_Boolean_array *DataVals__get_dependOverChargeArray(DataVals_o *this, const MethodInfo *method)
{
  return this->fields._dependOverChargeArray_k__BackingField;
}


bool DataVals__get_isOverCharge(DataVals_o *this, const MethodInfo *method)
{
  return this->fields._isOverCharge_k__BackingField;
}


bool DataVals__isCheckDead(DataVals_o *this, const MethodInfo *method)
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


bool DataVals__isCheckDuplicate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 41, 0, v2) > 0;
}


bool DataVals__isCheckEnemyFieldSpace(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 78, 0, v2) == 1;
}


bool DataVals__isEffectSummon(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 29, 0, v2) != 0;
}


bool DataVals__isForcedEffectSpeedOne(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 76, 0, v2) != 0;
}


bool DataVals__isHideMiss(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 10, 0, v2) == 1;
}


bool DataVals__isLossHpChangeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 62, 0, v2) > 0;
}


bool DataVals__isParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+18h] [xbp-38h]

  if ( (byte_4D2C32B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    byte_4D2C32B = 1;
  }
  vals = this->fields.vals;
  v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = type;
  v6 = (Il2CppObject *)System_Enum__ToString(&v9, 0);
  if ( !vals )
    sub_1C942F0(v6, v7);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v6,
           (const MethodInfo_35180B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool DataVals__isParamAddIndividuality(DataVals_o *this, const MethodInfo *method)
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
  return !BasicHelper__IsNullOrEmpty(ParamArray, 0)
      || !BasicHelper__IsNullOrEmpty(v6, 0)
      || !BasicHelper__IsNullOrEmpty(v8, 0)
      || !BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0)
      || !BasicHelper__IsNullOrEmpty(v12, 0)
      || !BasicHelper__IsNullOrEmpty(v14, 0);
}


bool DataVals__isRatioHpRange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  return DataVals__GetParam(this, 31, 0, v2) || DataVals__GetParam(this, 30, 0, v4) != 0;
}


bool DataVals__isSameBuffLimit(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 40, 0, v2) > 0;
}


bool DataVals__isShowCommand(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 28, 0, v2) != 0;
}


bool DataVals__isShowQuestNoEffect(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 18, 0, v2) != 0;
}


bool DataVals__isShowState(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 14, 0, v2) != 0;
}


bool DataVals__isUnaffected(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 13, 0, v2) == 1;
}


void DataVals__loadActSet(DataVals_o *this, const MethodInfo *method)
{
  void *svals; // x0
  __int64 v4; // x8
  _DWORD *v5; // x20
  unsigned __int64 v6; // x23
  char *v7; // x27
  Il2CppObject *v8; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_Enum_o v11; // [xsp+0h] [xbp-80h] BYREF
  int v12; // [xsp+10h] [xbp-70h]
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4D2C322 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C94098(&DataVals_TYPE_TypeInfo);
    sub_1C94098(&StringLiteral_15861/*"["*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_16112/*"]"*/);
    byte_4D2C322 = 1;
  }
  result = 0;
  svals = this->fields.svals;
  if ( !svals
    || (svals = System_String__Replace_64464308(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_15861/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0)) == 0
    || (svals = System_String__Replace_64464308(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16112/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0)) == 0
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0)) == 0 )
  {
LABEL_24:
    sub_1C942F0(svals, method);
  }
  v4 = *((_QWORD *)svals + 3);
  v5 = svals;
  if ( (int)v4 >= 1 )
  {
    v6 = 0;
    v7 = (char *)svals + 32;
    do
    {
      if ( v6 >= (unsigned int)v4 )
LABEL_25:
        sub_1C942F8(svals);
      v8 = (Il2CppObject *)StringLiteral_1/*""*/;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v7[8 * v6], &result, 0);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v6 >= (unsigned int)v5[6] )
          goto LABEL_25;
        svals = *(void **)&v7[8 * v6];
        if ( !svals )
          goto LABEL_24;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0);
        if ( !svals )
          goto LABEL_24;
        if ( *((int *)svals + 6) >= 2 )
        {
          v8 = (Il2CppObject *)*((_QWORD *)svals + 4);
          System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0);
        }
      }
      svals = this->fields.vals;
      if ( !svals )
        goto LABEL_24;
      svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                        (System_Collections_Generic_Dictionary_object__int__o *)svals,
                        v8,
                        (const MethodInfo_35180B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        v12 = 16;
        v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
        v11.monitor = (void *)-1LL;
        v9 = System_Enum__ToString(&v11, 0);
        if ( System_String__op_Equality(v9, (System_String_o *)v8, 0)
          || (v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo,
              v11.monitor = (void *)-1LL,
              v12 = 17,
              v10 = System_Enum__ToString(&v11, 0),
              svals = (void *)System_String__op_Equality(v10, (System_String_o *)v8, 0),
              ((unsigned __int8)svals & 1) != 0) )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            v8,
            result,
            (const MethodInfo_3517EC4 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
        }
      }
      LODWORD(v4) = v5[6];
      ++v6;
    }
    while ( (__int64)v6 < (int)v4 );
  }
}


void DataVals__set_FuncParamValueUpInfo(DataVals_o *this, FuncParamValueUpInfoBase_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._FuncParamValueUpInfo_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._FuncParamValueUpInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataVals__set_dependOverChargeArray(DataVals_o *this, System_Boolean_array *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._dependOverChargeArray_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataVals__set_isOverCharge(DataVals_o *this, bool value, const MethodInfo *method)
{
  this->fields._isOverCharge_k__BackingField = value;
}


void DataVals___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C355 & 1) == 0 )
  {
    sub_1C94098(&DataVals___c_TypeInfo);
    byte_4D2C355 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(DataVals___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataVals___c_TypeInfo->static_fields->__9 = (struct DataVals___c_o *)v1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)DataVals___c_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void DataVals___c___ctor(DataVals___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c___ExistUseInFsmParam_b__42_0(DataVals___c_o *this, System_String_o *x, const MethodInfo *method)
{
  if ( (byte_4D2C356 & 1) == 0 )
  {
    this = (DataVals___c_o *)sub_1C94098(&StringLiteral_15273/*"UseInFsm"*/);
    byte_4D2C356 = 1;
  }
  if ( !x )
    sub_1C942F0(this, x);
  return System_String__StartsWith(x, (System_String_o *)StringLiteral_15273/*"UseInFsm"*/, 0);
}


bool DataVals___c___GetDependFuncIdArray_b__45_0(DataVals___c_o *this, DataVals_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.funcEnt != 0;
}


int32_t DataVals___c___GetDependFuncIdArray_b__45_1(DataVals___c_o *this, DataVals_o *x, const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0 )
    sub_1C942F0(this, x);
  return funcEnt->fields.id;
}


int32_t DataVals___c___GetTargetTypeIndexArray_b__147_2(DataVals___c_o *this, int32_t x, const MethodInfo *method)
{
  return x;
}


bool DataVals___c___GetUseInFsmParam_b__43_0(
        DataVals___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = x.fields.key;
  if ( (byte_4D2C357 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    this = (DataVals___c_o *)sub_1C94098(&StringLiteral_15273/*"UseInFsm"*/);
    byte_4D2C357 = 1;
  }
  if ( !key )
    sub_1C942F0(this, x.fields.key);
  return System_String__StartsWith(key, (System_String_o *)StringLiteral_15273/*"UseInFsm"*/, 0);
}


System_String_o *DataVals___c___GetUseInFsmParam_b__43_1(
        DataVals___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = x.fields.key;
  if ( (byte_4D2C358 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    byte_4D2C358 = 1;
  }
  return key;
}


int32_t DataVals___c___GetUseInFsmParam_b__43_2(
        DataVals___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4D2C359 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_4D2C359 = 1;
  }
  return value;
}


void DataVals___c__DisplayClass118_0___ctor(DataVals___c__DisplayClass118_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass118_0___IsSatisfyAboveBelowCond_b__0(
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


void DataVals___c__DisplayClass119_0___ctor(DataVals___c__DisplayClass119_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass119_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass119_0_o *this,
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


void DataVals___c__DisplayClass147_0___ctor(DataVals___c__DisplayClass147_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass147_0___GetTargetTypeIndexArray_b__0(
        DataVals___c__DisplayClass147_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass147_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_4D2C35A & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass147_0_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    byte_4D2C35A = 1;
  }
  if ( !key )
    sub_1C942F0(this, x.fields.key);
  return System_String__StartsWith(key, v4->fields.key, 0);
}


System_String_o *DataVals___c__DisplayClass147_0___GetTargetTypeIndexArray_b__1(
        DataVals___c__DisplayClass147_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass147_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_4D2C35B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    this = (DataVals___c__DisplayClass147_0_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C35B = 1;
  }
  if ( !key )
    sub_1C942F0(this, x.fields.key);
  return System_String__Replace_64464308(key, v4->fields.key, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void DataVals___c__DisplayClass41_0___ctor(DataVals___c__DisplayClass41_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass41_0___GetDependDataValsArray_b__0(
        DataVals___c__DisplayClass41_0_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  DataVals___c__DisplayClass41_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D2C35C & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass41_0_o *)sub_1C94098(&Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
    byte_4D2C35C = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass41_0_o *)v4->fields.funcTypeList) == 0 )
    sub_1C942F0(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.funcType,
           (const MethodInfo_38509B4 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}


void DataVals___c__DisplayClass85_0___ctor(DataVals___c__DisplayClass85_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass85_0___IsHideNoEffect_b__0(
        DataVals___c__DisplayClass85_0_o *this,
        int32_t cause,
        const MethodInfo *method)
{
  return this->fields.invalidCause != cause;
}