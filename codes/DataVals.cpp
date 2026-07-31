void DataVals___cctor(const MethodInfo *method)
{
  if ( (byte_5938180 & 1) == 0 )
  {
    sub_21FFC50(&DataVals_TypeInfo);
    byte_5938180 = 1;
  }
  DataVals_TypeInfo->static_fields->MAX_DEPEND_FUNC = 20;
}


void DataVals___ctor(DataVals_o *this, System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__c *v12; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5938144 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo);
    byte_5938144 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v5,
    (const MethodInfo_3FBFF60 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.vals = (struct System_Collections_Generic_Dictionary_string__int__o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__TypeInfo;
  *(_QWORD *)&this->fields.targetCardIndex = -1;
  v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(v12);
  System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
    v13,
    (const MethodInfo_3F61E80 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause___ctor__);
  this->fields.invalidCauseDict = (struct System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__o *)v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.invalidCauseDict,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.svals = str;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.svals, (int32_t)str, v20, v21, v22, v23, v24, v25);
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
    sub_21FFECC(Param, v7);
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
  if ( (byte_593814E & 1) == 0 )
  {
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    byte_593814E = 1;
  }
  v9 = type;
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v5 = System_Enum__ToString(&v8, 0);
  v6 = System_Int32__ToString((int32_t)&v10, 0);
  return System_String__Concat_75438412(v5, v6, 0);
}


bool DataVals__ExistUseInFsmParam(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v5; // x1
  DataVals___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct DataVals___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__43_0; // x20
  Il2CppObject *v10; // x21
  struct DataVals___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5938149 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_string____91523848);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&Method_DataVals___c__ExistUseInFsmParam_b__43_0__);
    sub_21FFC50(&DataVals___c_TypeInfo);
    byte_5938149 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_21FFECC(0, method);
  Keys = System_Collections_Generic_Dictionary_object__int___get_Keys(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (const MethodInfo_3FC05BC *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
  v6 = DataVals___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !*(&DataVals___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo, v5);
    v6 = DataVals___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__43_0 = (System_Func_object__bool__o *)static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = DataVals___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_0, v10, Method_DataVals___c__ExistUseInFsmParam_b__43_0__, 0);
    v11 = DataVals___c_TypeInfo->static_fields;
    v11->__9__43_0 = (struct System_Func_string__bool__o *)_9__43_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__43_0, (int32_t)_9__43_0, v12, v13, v14, v15, v16, v17);
  }
  return System_Linq_Enumerable__Any_object__58935448(
           v7,
           (System_Func_TSource__bool__o *)_9__43_0,
           (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_string____91523848);
}


System_Int32_array *DataVals__GetAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *ValsList; // x20
  const MethodInfo *v5; // x2
  System_Int32_array *v6; // x1

  ValsList = DataVals__GetValsList(this, 39, v2);
  v6 = DataVals__GetValsList(this, 115, v5);
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

  if ( (byte_5938161 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938161 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 57, (System_String_o *)StringLiteral_1/*""*/, v2);
  result = (System_Int32_array *)System_String__IsNullOrEmpty(StrParam, 0);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    Param = DataVals__GetParam(this, 57, 0, v7);
    if ( Param < 1 )
      return 0;
    v9 = Param;
    result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
    if ( result )
    {
      if ( !LODWORD(result->max_length) )
        sub_21FFED4(result);
      result->m_Items[0] = v9;
      return result;
    }
LABEL_14:
    sub_21FFECC(result, v6);
  }
  if ( !StrParam )
    goto LABEL_14;
  if ( System_String__Contains_75500460(StrParam, 0x26u, 0) )
    v10 = 38;
  else
    v10 = 47;
  return BasicHelper__Convert2IntArray(StrParam, v10, 0);
}


System_Int32_array *DataVals__GetBackStepTargetArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 237, v2);
}


float DataVals__GetBgmFadeTime(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return (float)DataVals__GetParam(this, 216, 0, v2) / 1000.0;
}


int32_t DataVals__GetBgmPriority(DataVals_o *this, int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5938174 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938174 = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 163, &param, v3) || DataVals__TryGetParam(this, 114, &param, v6) )
    return param;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v10);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, bgmId, 0, 0);
}


int32_t DataVals__GetCallServantPositionIndex(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 270, 0, v2) - 1;
}


int32_t DataVals__GetCallSvtEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 89, 0, v2);
}


int32_t DataVals__GetCardIndex(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t result; // w0
  const MethodInfo *v5; // x3

  result = this->fields.targetCardIndex;
  if ( result == -1 )
  {
    if ( DataVals__isParam(this, 69, v2) )
      return DataVals__GetParam(this, 69, 0, v5);
    else
      return -1;
  }
  return result;
}


int32_t DataVals__GetCardIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  if ( DataVals__isParam(this, 70, v2) )
    return DataVals__GetParam(this, 70, 0, v4);
  else
    return -1;
}


int32_t DataVals__GetClassIconAuraEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 132, 0, v2);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
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
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0

  if ( (byte_5938176 & 1) == 0 )
  {
    sub_21FFC50(&ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
    byte_5938176 = 1;
  }
  if ( !DataVals__isParam(this, 168, v2) )
    return 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm___ctor__);
  v5 = sub_21FFEBC(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
  ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v5, 0);
  Param = (System_Int32_array *)DataVals__GetParam(this, 168, 0, v6);
  if ( !v5 )
    goto LABEL_22;
  *(_DWORD *)(v5 + 16) = (_DWORD)Param;
  ParamArray = DataVals__GetParamArray(this, 169, v9);
  *(_QWORD *)(v5 + 24) = ParamArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)ParamArray, v11, v12, v13, v14, v15, v16);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v4->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), v5, v17, v18, v19, v20, v21, v22);
  }
  Param = DataVals__GetTargetTypeIndexArray(this, 168, v27);
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
        sub_21FFED4(Param);
      v32 = v30->m_Items[v31];
      v33 = sub_21FFEBC(ControlOtherBgmPriorityAtOverStageBgm_TypeInfo);
      ControlOtherBgmPriorityAtOverStageBgm___ctor((ControlOtherBgmPriorityAtOverStageBgm_o *)v33, 0);
      Param = (System_Int32_array *)DataVals__GetParamAddTypeIndex(this, 168, v32, 0, v34);
      if ( !v33 )
        break;
      *(_DWORD *)(v33 + 16) = (_DWORD)Param;
      ParamArrayAddTypeIndex = DataVals__GetParamArrayAddTypeIndex(this, 169, v32, v35);
      *(_QWORD *)(v33 + 24) = ParamArrayAddTypeIndex;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v33 + 24),
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
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &v49->obj.klass + v51;
        v4->fields._size = v51 + 1;
        v52[4] = (Il2CppClass *)v33;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 4), v33, v43, v44, v45, v46, v47, v48);
      }
      LODWORD(max_length) = v30->max_length;
      if ( (__int64)++v31 >= (int)max_length )
        return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                                v4,
                                                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
    }
LABEL_22:
    sub_21FFECC(Param, v8);
  }
  return (ControlOtherBgmPriorityAtOverStageBgm_array *)System_Collections_Generic_List_object___ToArray(
                                                          v4,
                                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ControlOtherBgmPriorityAtOverStageBgm__ToArray__);
}


System_Int32_array *DataVals__GetCopyTargetBuffTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 129, v2);
}


System_Int32_array *DataVals__GetCopyTargetFunctionTypeArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 123, v2);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  DataVals_array *result; // x0
  System_Collections_Generic_List_object__o *dependDataValsList; // x19
  System_Predicate_object__o *v17; // x20

  if ( (byte_5938148 & 1) == 0 )
  {
    sub_21FFC50(&DataVals___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataVals__FindAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_21FFC50(&System_Predicate_DataVals__TypeInfo);
    sub_21FFC50(&Method_DataVals___c__DisplayClass42_0__GetDependDataValsArray_b__0__);
    sub_21FFC50(&DataVals___c__DisplayClass42_0_TypeInfo);
    byte_5938148 = 1;
  }
  v6 = sub_21FFEBC(DataVals___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 16) = funcTypeList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)funcTypeList, v9, v10, v11, v12, v13, v14);
  result = (DataVals_array *)sub_21FFD10(DataVals___TypeInfo, 0);
  dependDataValsList = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    v17 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_DataVals__TypeInfo);
    System_Predicate_object____ctor(
      v17,
      (Il2CppObject *)v6,
      Method_DataVals___c__DisplayClass42_0__GetDependDataValsArray_b__0__,
      0);
    All = System_Collections_Generic_List_object___FindAll(
            dependDataValsList,
            (System_Predicate_T__o *)v17,
            (const MethodInfo_4450234 *)Method_System_Collections_Generic_List_DataVals__FindAll__);
    if ( All )
      return (DataVals_array *)System_Collections_Generic_List_object___ToArray(
                                 (System_Collections_Generic_List_object__o *)All,
                                 (const MethodInfo_445164C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
LABEL_8:
    sub_21FFECC(All, v8);
  }
  return result;
}


System_Int32_array *DataVals__GetDependFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x19
  DataVals___c_c *v4; // x0
  struct DataVals___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__46_0; // x20
  Il2CppObject *v7; // x21
  struct DataVals___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  DataVals___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  struct DataVals___c_StaticFields *v19; // x9
  System_Func_object__int__o *_9__46_1; // x20
  Il2CppObject *v21; // x21
  struct DataVals___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_593814C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_21FFC50(&System_Func_DataVals__int__TypeInfo);
    sub_21FFC50(&System_Func_DataVals__bool__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_DataVals___c__GetDependFuncIdArray_b__46_0__);
    sub_21FFC50(&Method_DataVals___c__GetDependFuncIdArray_b__46_1__);
    sub_21FFC50(&DataVals___c_TypeInfo);
    byte_593814C = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( !dependDataValsList )
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  v4 = DataVals___c_TypeInfo;
  if ( !*(&DataVals___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo, method);
    v4 = DataVals___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__46_0 = (System_Func_object__bool__o *)static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = DataVals___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__46_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__46_0, v7, Method_DataVals___c__GetDependFuncIdArray_b__46_0__, 0);
    v8 = DataVals___c_TypeInfo->static_fields;
    v8->__9__46_0 = (struct System_Func_DataVals__bool__o *)_9__46_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__46_0, (int32_t)_9__46_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)dependDataValsList,
          (System_Func_TSource__bool__o *)_9__46_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_DataVals___);
  v17 = DataVals___c_TypeInfo;
  v18 = v15;
  if ( !*(&DataVals___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo, v16);
    v17 = DataVals___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__46_1 = (System_Func_object__int__o *)v19->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      v19 = DataVals___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__46_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(_9__46_1, v21, Method_DataVals___c__GetDependFuncIdArray_b__46_1__, 0);
    v22 = DataVals___c_TypeInfo->static_fields;
    v22->__9__46_1 = (struct System_Func_DataVals__int__o *)_9__46_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__46_1, (int32_t)_9__46_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__46_1,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v29,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t DataVals__GetDisplayLastFuncInvalidType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 56, 0, v2);
}


int32_t DataVals__GetEnemyCountChangeEffectId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 205, 0, v2);
}


float DataVals__GetEnemyCountChangeTime(DataVals_o *this, int32_t defaultPerMill, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return (float)DataVals__GetParam(this, 204, defaultPerMill, v3) / 1000.0;
}


float DataVals__GetEnemyCountWaitTimeAfterEffect(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-4h] BYREF

  param = 0;
  if ( DataVals__TryGetParam(this, 277, &param, v2) )
    return (float)param / 1000.0;
  else
    return -3.4028e38;
}


float DataVals__GetEnemyCountWaitTimeAfterMessage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return (float)DataVals__GetParam(this, 206, 0, v2) / 1000.0;
}


int32_t DataVals__GetFieldPriority(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3
  int32_t v5; // w1

  if ( DataVals__isParam(this, 166, v2) )
    v5 = 166;
  else
    v5 = 114;
  return DataVals__GetParam(this, v5, 0, v4);
}


System_Int32_array *DataVals__GetFixDamageRates(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *result; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  int32_t Param; // w19
  int32_t v8; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_5938172 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5938172 = 1;
  }
  result = DataVals__GetParamArray(this, 83, v2);
  if ( !result )
  {
    Param = DataVals__GetParam(this, 82, 0, v5);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    v8 = System_Math__Max_76939956(Param, 1, 0);
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                100,
                                                                v8,
                                                                (const MethodInfo_3856330 *)Method_System_Linq_Enumerable_Repeat_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v9,
             (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  return result;
}


int32_t DataVals__GetFuncCheckTargetIndividualityCountEqual(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 197, -1, v2);
}


int32_t DataVals__GetFuncCheckTargetIndividualityCountHigher(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 195, 0, v2);
}


int32_t DataVals__GetFuncCheckTargetIndividualityCountLower(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 196, 0, v2);
}


int32_t DataVals__GetFuncCheckTargetIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 194, -1, v2);
}


int32_t DataVals__GetFunctionTriggerStarNum(DataVals_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_Enum_o v8; // [xsp+8h] [xbp-38h] BYREF
  int v9; // [xsp+18h] [xbp-28h]

  if ( (byte_5938169 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    byte_5938169 = 1;
  }
  vals = this->fields.vals;
  v8.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v8.monitor = (void *)-1LL;
  v9 = 53;
  v4 = (Il2CppObject *)System_Enum__ToString(&v8, 0);
  if ( !vals )
    sub_21FFECC(v4, v5);
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)vals,
         v4,
         (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    return DataVals__GetParam(this, 53, 0, v6);
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

  if ( (byte_5938179 & 1) == 0 )
  {
    sub_21FFC50(&DataVals_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938179 = 1;
  }
  ParamStringFormat = DataVals__GetParamStringFormat(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !*(&DataVals_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataVals_TypeInfo, v6);
  return DataVals__GetInt2DimensionalArray_48646180(ParamStringFormat, v6);
}


System_Int32_array_array *DataVals__GetInt2DimensionalArray_48646180(
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_593817A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int____TypeInfo);
    byte_593817A = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(paramStr, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !paramStr
    || (v6 = System_String__Split(paramStr, 0x7Cu, 0, 0),
        v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_int____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_int_____ctor__),
        !v6) )
  {
LABEL_23:
    sub_21FFECC(IsNullOrEmpty, v4);
  }
  max_length = v6->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= max_length )
        sub_21FFED4(IsNullOrEmpty);
      v10 = &v6->obj.klass + (int)v9;
      v11 = (System_String_o *)v10[4];
      if ( !v11 )
        goto LABEL_23;
      if ( System_String__Contains_75500460((System_String_o *)v10[4], 0x26u, 0) )
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
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
                                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_int____ToArray__);
}


BattleBuffData_IntervalData_o *DataVals__GetIntervalData(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  BattleBuffData_IntervalData_o *v7; // x20

  if ( (byte_5938173 & 1) == 0 )
  {
    sub_21FFC50(&BattleBuffData_IntervalData_TypeInfo);
    byte_5938173 = 1;
  }
  if ( !DataVals__isParam(this, 134, v2)
    && !DataVals__isParam(this, 135, v4)
    && !DataVals__isParam(this, 210, v5)
    && !DataVals__isParam(this, 211, v6) )
  {
    return 0;
  }
  v7 = (BattleBuffData_IntervalData_o *)sub_21FFEBC(BattleBuffData_IntervalData_TypeInfo);
  BattleBuffData_IntervalData___ctor_52766412(v7, this, 0);
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

  if ( (byte_593815E & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593815E = 1;
  }
  StrParam = DataVals__GetStrParam(this, 40, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, 40, 0, v5);
  if ( Param < 1 )
    return 0;
  v7 = Param;
  result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
  if ( !result )
    sub_21FFECC(0, v9);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
  result->m_Items[0] = v7;
  return result;
}


int32_t DataVals__GetMotionChange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 66, 0, v2);
}


int32_t DataVals__GetNPFixedDamageValue(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 149, -1, v2);
}


System_Int32_array *DataVals__GetNotSkillCopyTargetFuncIdArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 130, v2);
}


System_Int32_array *DataVals__GetNotSkillCopyTargetIndividualities(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 131, v2);
}


int32_t DataVals__GetOverwriteFuncInvalidType(DataVals_o *this, int32_t defaultType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, 215, defaultType, v3);
}


int32_t DataVals__GetParam(DataVals_o *this, int32_t type, int32_t defaultValue, const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x4
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_593814F & 1) == 0 )
  {
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    byte_593814F = 1;
  }
  v11 = type;
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v7 = System_Enum__ToString(&v10, 0);
  return DataVals__GetParam_48632828(this, type, v7, defaultValue, v8);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_593817B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo);
    sub_21FFC50(&BattleBuffData_SaveArrayData_TypeInfo);
    byte_593817B = 1;
  }
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, type, method);
  if ( BasicHelper__IsNullOrEmpty(Int2DimensionalArray, 0) )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleBuffData_SaveArrayData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData___ctor__);
  if ( !Int2DimensionalArray )
LABEL_17:
    sub_21FFECC(v8, v9);
  monitor = Int2DimensionalArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)monitor )
        sub_21FFED4(v8);
      v12 = (System_Int32_array *)*((_QWORD *)&Int2DimensionalArray[2].klass + v11);
      v13 = (BattleBuffData_SaveArrayData_o *)sub_21FFEBC(BattleBuffData_SaveArrayData_TypeInfo);
      BattleBuffData_SaveArrayData___ctor_52790876(v13, v12, 0);
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
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      }
      LODWORD(monitor) = Int2DimensionalArray[1].monitor;
    }
    while ( (__int64)++v11 < (int)monitor );
  }
  if ( !v7 )
    goto LABEL_17;
  return (BattleBuffData_SaveArrayData_array *)System_Collections_Generic_List_object___ToArray(
                                                 v7,
                                                 (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleBuffData_SaveArrayData__ToArray__);
}


int32_t DataVals__GetParamAddIndividualityTargetType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 192, -1, v2);
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

  if ( (byte_5938151 & 1) == 0 )
  {
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    sub_21FFC50(&StringLiteral_26544/*"{0}_{1}"*/);
    byte_5938151 = 1;
  }
  v15 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v15);
  v14 = index;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
  v11 = System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, v9, v10, 0);
  return DataVals__GetParam_48632828(this, type, v11, defaultValue, v12);
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

  if ( (byte_593816B & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593816B = 1;
  }
  StrParam = DataVals__GetStrParam(this, paramType, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, paramType, 0, v7);
  if ( Param < 1 )
    return 0;
  v9 = Param;
  result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
  if ( !result )
    sub_21FFECC(0, v11);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
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

  if ( (byte_593816C & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593816C = 1;
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
  result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
  if ( !result )
    sub_21FFECC(0, v13);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
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

  if ( (byte_593815D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593815D = 1;
  }
  if ( !DataVals__IsStrParam(this, type, (const MethodInfo *)defaultValue) )
    return defaultValue;
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v7);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam, 0);
  if ( IsNullOrEmpty )
    return defaultValue;
  if ( !StrParam )
    sub_21FFECC(IsNullOrEmpty, v10);
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
  if ( (byte_5938178 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938178 = 1;
  }
  Param = 0;
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
int32_t DataVals__GetParam_48632828(
        DataVals_o *this,
        int32_t type,
        System_String_o *name,
        int32_t defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0
  unsigned int Item; // w0
  struct FuncParamValueUpInfoBase_o *FuncParamValueUpInfo_k__BackingField; // x8

  if ( (byte_5938150 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_5938150 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)vals,
          (Il2CppObject *)name,
          (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
    return defaultValue;
  vals = this->fields.vals;
  if ( !vals )
LABEL_9:
    sub_21FFECC(vals, *(_QWORD *)&type);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  FuncParamValueUpInfo_k__BackingField = this->fields._FuncParamValueUpInfo_k__BackingField;
  defaultValue = Item;
  if ( FuncParamValueUpInfo_k__BackingField )
    return (unsigned int)((_QWORD *(__fastcall *)(struct FuncParamValueUpInfoBase_o *__return_ptr, struct FuncParamValueUpInfoBase_o *, _QWORD, _QWORD, const MethodInfo *))FuncParamValueUpInfo_k__BackingField->klass->vtable._5_Enhance.methodPtr)(
                           FuncParamValueUpInfo_k__BackingField,
                           this->fields._FuncParamValueUpInfo_k__BackingField,
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

  if ( (byte_593817C & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_593817C = 1;
  }
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 238, v2);
  if ( BasicHelper__IsNullOrEmpty(ParamArray, 0) )
  {
    if ( DataVals__GetParam(this, 238, -1, v5) )
    {
      return 0;
    }
    else
    {
      v6 = sub_21FFD10(int___TypeInfo, 1);
      if ( !v6 )
        sub_21FFECC(0, v7);
      ParamArray = (System_Collections_ICollection_o *)v6;
      if ( !*(_DWORD *)(v6 + 24) )
        sub_21FFED4(v6);
      *(_DWORD *)(v6 + 32) = 0;
    }
  }
  return (System_Int32_array *)ParamArray;
}


System_Int32_array *DataVals__GetResistEffectList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 259, v2);
}


int32_t DataVals__GetResistPopupIconId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 257, 0, v2);
}


System_String_o *DataVals__GetResistPopupText(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593817F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593817F = 1;
  }
  return DataVals__GetStrParam(this, 256, (System_String_o *)StringLiteral_1/*""*/, v2);
}


int32_t DataVals__GetResistSkillLv(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 253, 1, v2);
}


int32_t DataVals__GetResultAggregateGroupId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 275, 0, v2);
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

  if ( (byte_593815F & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593815F = 1;
  }
  StrParam = DataVals__GetStrParam(this, 41, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, 41, 0, v5);
  if ( Param < 1 )
    return 0;
  v7 = Param;
  result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
  if ( !result )
    sub_21FFECC(0, v9);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
  result->m_Items[0] = v7;
  return result;
}


System_Int32_array *DataVals__GetShortenMaxCountArray(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_ICollection_o *ParamArray; // x19
  System_Array_o *v5; // x0
  System_RuntimeFieldHandle_o v6; // x1

  if ( (byte_5938177 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D);
    byte_5938177 = 1;
  }
  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 187, v2);
  if ( BasicHelper__IsNullOrEmpty(ParamArray, 0) )
  {
    v5 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 3);
    v6.fields.value = Field__PrivateImplementationDetails__11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D;
    ParamArray = (System_Collections_ICollection_o *)v5;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v5, v6, 0);
  }
  return (System_Int32_array *)ParamArray;
}


System_Int32_array_array *DataVals__GetSnapShotParamAddFieldIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 203, v2);
}


System_Int32_array_array *DataVals__GetSnapShotParamAddOpIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 202, v2);
}


System_Int32_array_array *DataVals__GetSnapShotParamAddSelfIndividualityAndCheck(
        DataVals_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetInt2DimensionalArray(this, 201, v2);
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

  if ( (byte_5938154 & 1) == 0 )
  {
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    byte_5938154 = 1;
  }
  v11 = type;
  v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v10.monitor = (void *)-1LL;
  v7 = System_Enum__ToString(&v10, 0);
  return DataVals__GetStrParam_48634016(this, v7, defaultValue, v8);
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

  if ( (byte_5938156 & 1) == 0 )
  {
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    sub_21FFC50(&StringLiteral_26544/*"{0}_{1}"*/);
    byte_5938156 = 1;
  }
  v15 = type;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v15);
  v14 = index;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
  v11 = System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, v9, v10, 0);
  return DataVals__GetStrParam_48634016(this, v11, defaultValue, v12);
}


System_String_o *DataVals__GetStrParam_48634016(
        DataVals_o *this,
        System_String_o *name,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v9; // x0

  if ( (byte_5938155 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    byte_5938155 = 1;
  }
  strVals = this->fields.strVals;
  if ( !strVals
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)strVals,
          (Il2CppObject *)name,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return defaultValue;
  }
  v9 = this->fields.strVals;
  if ( !v9 )
    sub_21FFECC(0, v8);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v9,
                              (Il2CppObject *)name,
                              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


System_Int32_array *DataVals__GetSubstituteEffectList(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 258, v2);
}


int32_t DataVals__GetSubstitutePopupIconId(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 255, 0, v2);
}


System_String_o *DataVals__GetSubstitutePopupText(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593817E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593817E = 1;
  }
  return DataVals__GetStrParam(this, 254, (System_String_o *)StringLiteral_1/*""*/, v2);
}


int32_t DataVals__GetSubstituteRate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 246, 1000, v2);
}


int32_t DataVals__GetSubstituteResist(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 247, 0, v2);
}


int32_t DataVals__GetSubstituteSkillLv(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 251, 1, v2);
}


System_Int32_array *DataVals__GetTargetBuffIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 190, v2);
}


System_Int32_array *DataVals__GetTargetFunctionIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__GetParamArray(this, 189, v2);
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

  if ( (byte_593815B & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593815B = 1;
  }
  StrParam = DataVals__GetStrParam(this, 34, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, 34, 0, v5);
  if ( Param < 1 )
    return 0;
  v7 = Param;
  result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
  if ( !result )
    sub_21FFECC(0, v9);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
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

  if ( (byte_5938160 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938160 = 1;
  }
  StrParam = DataVals__GetStrParam(this, 45, (System_String_o *)StringLiteral_1/*""*/, v2);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, 45, 0, v5);
  if ( Param < 1 )
    return 0;
  v7 = Param;
  result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
  if ( !result )
    sub_21FFECC(0, v9);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
  result->m_Items[0] = v7;
  return result;
}


System_Int32_array *DataVals__GetTargetTypeIndexArray(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  System_Func_T__TResult__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_T__TResult__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__int__o *v20; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v21; // x0
  __int64 v22; // x1
  DataVals___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  struct DataVals___c_StaticFields *static_fields; // x9
  System_Func_int__int__o *_9__149_2; // x20
  Il2CppObject *v27; // x21
  struct DataVals___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  int32_t v37; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5938175 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
    sub_21FFC50(&System_Func_int__int__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_string__int___bool__TypeInfo);
    sub_21FFC50(&System_Func_string__int__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_string__int___string__TypeInfo);
    sub_21FFC50(&Method_System_Int32_Parse__);
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    sub_21FFC50(&Method_DataVals___c__GetTargetTypeIndexArray_b__149_2__);
    sub_21FFC50(&Method_DataVals___c__DisplayClass149_0__GetTargetTypeIndexArray_b__0__);
    sub_21FFC50(&Method_DataVals___c__DisplayClass149_0__GetTargetTypeIndexArray_b__1__);
    sub_21FFC50(&DataVals___c__DisplayClass149_0_TypeInfo);
    sub_21FFC50(&DataVals___c_TypeInfo);
    sub_21FFC50(&StringLiteral_26539/*"{0}_"*/);
    byte_5938175 = 1;
  }
  v5 = sub_21FFEBC(DataVals___c__DisplayClass149_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v37 = type;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v37);
  v7 = System_String__Format((System_String_o *)StringLiteral_26539/*"{0}_"*/, v6, 0);
  if ( !v5 )
    sub_21FFECC(v7, v8);
  *(_QWORD *)(v5 + 16) = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v7, v9, v10, v11, v12, v13, v14);
  vals = this->fields.vals;
  v16 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__int___bool__TypeInfo);
  System_Func_KeyValuePair_object__int___bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_DataVals___c__DisplayClass149_0__GetTargetTypeIndexArray_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_386ED98 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v18 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__int___string__TypeInfo);
  System_Func_KeyValuePair_object__int___object____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_DataVals___c__DisplayClass149_0__GetTargetTypeIndexArray_b__1__,
    0);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_3858420 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___string___);
  v20 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_string__int__TypeInfo);
  System_Func_object__int____ctor(v20, 0, Method_System_Int32_Parse__, 0);
  v21 = System_Linq_Enumerable__Select_object__int_(
          v19,
          (System_Func_TSource__TResult__o *)v20,
          (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_string__int___);
  v23 = DataVals___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !*(&DataVals___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo, v22);
    v23 = DataVals___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__149_2 = static_fields->__9__149_2;
  if ( !_9__149_2 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v22);
      static_fields = DataVals___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__149_2 = (System_Func_int__int__o *)sub_21FFEBC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__149_2, v27, Method_DataVals___c__GetTargetTypeIndexArray_b__149_2__, 0);
    v28 = DataVals___c_TypeInfo->static_fields;
    v28->__9__149_2 = _9__149_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__149_2, (int32_t)_9__149_2, v29, v30, v31, v32, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__149_2,
                                                               (const MethodInfo_3855438 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v35,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t DataVals__GetTriggeredFieldCountTargetFlag(DataVals_o *this, bool isActorEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Param; // w0
  bool v6; // zf
  int32_t result; // w0

  Param = DataVals__GetParam(this, 136, 0, v3);
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
  int32_t result; // w0
  const MethodInfo *v9; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  *isSameTargetOnly = 0;
  *isAllCond = 0;
  param = 0;
  if ( DataVals__TryGetParam(this, 139, &param, method) )
  {
    result = param;
    *isSameTargetOnly = 1;
  }
  else if ( DataVals__TryGetParam(this, 140, &param, v7) )
  {
    result = param;
    *isAllCond = 1;
  }
  else
  {
    return DataVals__GetParam(this, 81, 0, v9);
  }
  return result;
}


System_Int32_array *DataVals__GetTriggeredFuncIndexArray(DataVals_o *this, bool *isAndCheck, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool ParamIntArray; // w8
  System_Int32_array *result; // x0
  System_Int32_array *paramArray; // [xsp+8h] [xbp-18h] BYREF

  *isAndCheck = 0;
  paramArray = 0;
  ParamIntArray = DataVals__TryGetParamIntArray(this, 193, &paramArray, v3);
  result = 0;
  if ( ParamIntArray )
  {
    result = paramArray;
    *isAndCheck = 1;
  }
  return result;
}


System_Collections_Generic_Dictionary_string__int__o *DataVals__GetUseInFsmParam(
        DataVals_o *this,
        const MethodInfo *method)
{
  DataVals___c_c *v3; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x19
  struct DataVals___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__44_0; // x20
  Il2CppObject *v7; // x21
  struct DataVals___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  DataVals___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  struct DataVals___c_StaticFields *v19; // x9
  System_Func_T__TResult__o *_9__44_1; // x20
  Il2CppObject *v21; // x21
  struct DataVals___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct DataVals___c_StaticFields *v29; // x9
  System_Func_T__TResult__o *_9__44_2; // x21
  Il2CppObject *v31; // x22
  struct DataVals___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_593814A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__int___string__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
    sub_21FFC50(&System_Func_KeyValuePair_string__int___int__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_string__int___bool__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_string__int___string__TypeInfo);
    sub_21FFC50(&Method_DataVals___c__GetUseInFsmParam_b__44_0__);
    sub_21FFC50(&Method_DataVals___c__GetUseInFsmParam_b__44_1__);
    sub_21FFC50(&Method_DataVals___c__GetUseInFsmParam_b__44_2__);
    sub_21FFC50(&DataVals___c_TypeInfo);
    byte_593814A = 1;
  }
  v3 = DataVals___c_TypeInfo;
  vals = this->fields.vals;
  if ( !*(&DataVals___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo, method);
    v3 = DataVals___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__44_0 = (System_Func_T__TResult__o *)static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = DataVals___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__44_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__int___bool__TypeInfo);
    System_Func_KeyValuePair_object__int___bool____ctor(
      _9__44_0,
      v7,
      Method_DataVals___c__GetUseInFsmParam_b__44_0__,
      0);
    v8 = DataVals___c_TypeInfo->static_fields;
    v8->__9__44_0 = (struct System_Func_KeyValuePair_string__int___bool__o *)_9__44_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__44_0, (int32_t)_9__44_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_KeyValuePair_object__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          (System_Func_TSource__bool__o *)_9__44_0,
          (const MethodInfo_386ED98 *)Method_System_Linq_Enumerable_Where_KeyValuePair_string__int____);
  v17 = DataVals___c_TypeInfo;
  v18 = v15;
  if ( !*(&DataVals___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataVals___c_TypeInfo, v16);
    v17 = DataVals___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__44_1 = (System_Func_T__TResult__o *)v19->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      v19 = DataVals___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__44_1 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__int___string__TypeInfo);
    System_Func_KeyValuePair_object__int___object____ctor(
      _9__44_1,
      v21,
      Method_DataVals___c__GetUseInFsmParam_b__44_1__,
      0);
    v22 = DataVals___c_TypeInfo->static_fields;
    v22->__9__44_1 = (struct System_Func_KeyValuePair_string__int___string__o *)_9__44_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__44_1, (int32_t)_9__44_1, v23, v24, v25, v26, v27, v28);
    v17 = DataVals___c_TypeInfo;
  }
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v16);
    v17 = DataVals___c_TypeInfo;
  }
  v29 = v17->static_fields;
  _9__44_2 = (System_Func_T__TResult__o *)v29->__9__44_2;
  if ( !_9__44_2 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      v29 = DataVals___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__44_2 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__44_2,
      v31,
      Method_DataVals___c__GetUseInFsmParam_b__44_2__,
      0);
    v32 = DataVals___c_TypeInfo->static_fields;
    v32->__9__44_2 = (struct System_Func_KeyValuePair_string__int___int__o *)_9__44_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->__9__44_2, (int32_t)_9__44_2, v33, v34, v35, v36, v37, v38);
  }
  return (System_Collections_Generic_Dictionary_string__int__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_object__int___object__int_(
                                                                   v18,
                                                                   (System_Func_TSource__TKey__o *)_9__44_1,
                                                                   (System_Func_TSource__TElement__o *)_9__44_2,
                                                                   (const MethodInfo_3868DB8 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__int___string__int___);
}


System_String_array *DataVals__GetValsArray(System_String_o *vals, const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v4; // x1
  long double v5; // q0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_5938145 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_string___);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5938145 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(vals, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_string___;
    v7 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
    if ( !v7 )
    {
      sub_2237B54(Method_System_Array_Empty_string___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_2237AF8(v5);
    if ( !*(_DWORD *)(v8 + 228) )
      *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(v8, v4);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_2237AF8(v5);
    return **(System_String_array ***)(v9 + 184);
  }
  else
  {
    if ( !vals
      || (IsNullOrEmpty = System_String__Replace_75490096(
                            vals,
                            (System_String_o *)StringLiteral_16395/*"["*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0)) == 0
      || (IsNullOrEmpty = System_String__Replace_75490096(
                            IsNullOrEmpty,
                            (System_String_o *)StringLiteral_16659/*"]"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0)) == 0 )
    {
      sub_21FFECC(IsNullOrEmpty, v4);
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

  if ( (byte_593815C & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593815C = 1;
  }
  StrParam = DataVals__GetStrParam(this, type, (System_String_o *)StringLiteral_1/*""*/, v3);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) )
    return BasicHelper__Convert2IntArray(StrParam, 0x2Fu, 0);
  Param = DataVals__GetParam(this, type, 0, v7);
  if ( !Param )
    return 0;
  v9 = Param;
  result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
  if ( !result )
    sub_21FFECC(0, v11);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
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

  return DataVals__isParam(this, 163, v2) || DataVals__isParam(this, 114, v4);
}


bool DataVals__IsActAttackFunction(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 151, 0, v2) > 0;
}


bool DataVals__IsActNoDamageBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 127, 0, v2) == 1;
}


bool DataVals__IsAddIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  System_String_o *v10; // x0

  if ( (byte_5938164 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938164 = 1;
  }
  if ( DataVals__GetParam(this, 39, 0, v2) )
    return 1;
  StrParam = DataVals__GetStrParam(this, 39, (System_String_o *)StringLiteral_1/*""*/, v4);
  if ( !System_String__IsNullOrEmpty(StrParam, 0) || DataVals__GetParam(this, 115, 0, v6) )
  {
    return 1;
  }
  else
  {
    v10 = DataVals__GetStrParam(this, 115, (System_String_o *)StringLiteral_1/*""*/, v7);
    return !System_String__IsNullOrEmpty(v10, 0);
  }
}


bool DataVals__IsAddLinkageTargetIndividualty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  System_String_o *StrParam; // x0

  if ( (byte_5938165 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938165 = 1;
  }
  if ( DataVals__GetParam(this, 40, 0, v2) )
  {
    return 1;
  }
  else
  {
    StrParam = DataVals__GetStrParam(this, 40, (System_String_o *)StringLiteral_1/*""*/, v4);
    return !System_String__IsNullOrEmpty(StrParam, 0);
  }
}


bool DataVals__IsAdjustmentBuffTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  return DataVals__isParam(this, 170, v2)
      || DataVals__isParam(this, 171, v4)
      || DataVals__isParam(this, 172, v5)
      || DataVals__isParam(this, 173, v6);
}


bool DataVals__IsBehaveAsFamilyBuff(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x3

  return !DataVals__isParam(this, 101, v2) || DataVals__GetParam(this, 101, 0, v4) > 0;
}


bool DataVals__IsCancelTransform(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 146, v2);
}


bool DataVals__IsChangeTDCommandType(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 54, 0, v2) != 0;
}


bool DataVals__IsContainOnFieldsParameter(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  return DataVals__isParam(this, 11, v2) || DataVals__isParam(this, 44, v4) || DataVals__isParam(this, 219, v5);
}


bool DataVals__IsCopyFunctionTargetPTOnly(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 124, 0, v2) == 1;
}


bool DataVals__IsDependOverCharge(DataVals_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_5938168 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_bool___);
    byte_5938168 = 1;
  }
  return BasicHelper__IndexValue_bool_(
           this->fields._dependOverChargeArray_k__BackingField,
           index,
           0,
           (const MethodInfo_37E1768 *)Method_BasicHelper_IndexValue_bool___);
}


bool DataVals__IsEndBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 37, 0, v2) != 0;
}


bool DataVals__IsEqualsTo1(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, type, 0, v3) == 1;
}


bool DataVals__IsEvenIfWinDie(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 88, 0, v2) == 1;
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

  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 155, v2);
  v6 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 156, v5);
  v8 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 157, v7);
  Int2DimensionalArray = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 201, v9);
  v12 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 202, v11);
  v14 = (System_Collections_ICollection_o *)DataVals__GetInt2DimensionalArray(this, 203, v13);
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

  return DataVals__isParam(this, 170, v2);
}


bool DataVals__IsExtendBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 172, v2);
}


bool DataVals__IsForceTurnProgressIfTimingIsOverInOpponentTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 214, 0, v2) == 1;
}


bool DataVals__IsForceTurnProgressIfTimingIsOverInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 213, 0, v2) == 1;
}


bool DataVals__IsForciblyAddState(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  return DataVals__isParam(this, 52, v2) || DataVals__isParam(this, 90, v4) || DataVals__isParam(this, 116, v5);
}


bool DataVals__IsFuncCheckFieldIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 266, v2);
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

  if ( (byte_5938162 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
    sub_21FFC50(&Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
    sub_21FFC50(&System_Func_DataVals_InvalidCause__bool__TypeInfo);
    sub_21FFC50(&Method_DataVals___c__DisplayClass87_0__IsHideNoEffect_b__0__);
    sub_21FFC50(&DataVals___c__DisplayClass87_0_TypeInfo);
    byte_5938162 = 1;
  }
  resultList = 0;
  Param = DataVals__GetParam(this, 12, 0, v3);
  if ( Param != 1 )
  {
    if ( DataVals__TryGetDisplayNoEffectCauseList(this, &resultList, v7) )
    {
      v8 = sub_21FFEBC(DataVals___c__DisplayClass87_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0);
      Value_int__Int32Enum = BasicHelper__GetValue_int__Int32Enum_(
                               (System_Collections_Generic_Dictionary_K__V__o *)this->fields.invalidCauseDict,
                               targetId,
                               0,
                               (const MethodInfo_37E0FC4 *)Method_BasicHelper_GetValue_int__DataVals_InvalidCause___);
      if ( !v8 )
        sub_21FFECC(Value_int__Int32Enum, v10);
      v11 = resultList;
      *(_DWORD *)(v8 + 16) = Value_int__Int32Enum;
      v12 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_DataVals_InvalidCause__bool__TypeInfo);
      System_Func_Int32Enum__bool____ctor(
        v12,
        (Il2CppObject *)v8,
        Method_DataVals___c__DisplayClass87_0__IsHideNoEffect_b__0__,
        0);
      LOBYTE(Param) = System_Linq_Enumerable__All_Int32Enum_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                        (System_Func_TSource__bool__o *)v12,
                        (const MethodInfo_3831510 *)Method_System_Linq_Enumerable_All_DataVals_InvalidCause___);
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

  return DataVals__GetParam(this, 150, 0, v2) == 1;
}


bool DataVals__IsIncludeIgnoreIndividuality(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 87, 0, v2) == 1;
}


bool DataVals__IsLinkageBuffGrantSuccessEvenIfOtherFailed(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 174, v2);
}


bool DataVals__IsLoseBattle(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 38, 0, v2) != 0;
}


bool DataVals__IsMatchFriendShipCondition(DataVals_o *this, int32_t friendShip, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__GetParam(this, 183, 0, v3) <= friendShip;
}


bool DataVals__IsNeedUpHate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  _BOOL8 v3; // x0

  if ( this->fields.targetType == 4 )
    return (char)&dword_0 + 1;
  else
    LOBYTE(v3) = DataVals__GetParam(this, 191, 0, v2) == 1;
  return v3;
}


bool DataVals__IsOnParty(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 95, 0, v2) == 1;
}


bool DataVals__IsOpponentOnly(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 35, 0, v2) != 0;
}


bool DataVals__IsOverChargeState(DataVals_o *this, int32_t state, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.overChargeState & state) < 0) ^ v3 | ((this->fields.overChargeState & state) == 0));
}


bool DataVals__IsParam(DataVals_o *this, System_String_o *typeKey, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_5938158 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    byte_5938158 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_21FFECC(0, typeKey);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)typeKey,
           (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
}


bool DataVals__IsParamAddBattlePoint(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  return DataVals__isParam(this, 185, v2) && DataVals__isParam(this, 186, v4);
}


bool DataVals__IsProgressTurnOnBoard(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 144, 0, v2) == 1;
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

  if ( (byte_593816F & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__int__bool__TypeInfo);
    sub_21FFC50(&Method_DataVals___c__DisplayClass120_0__IsSatisfyAboveBelowCond_b__0__);
    sub_21FFC50(&DataVals___c__DisplayClass120_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1611/*"<="*/);
    byte_593816F = 1;
  }
  v9 = sub_21FFEBC(DataVals___c__DisplayClass120_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  *(_DWORD *)(v9 + 16) = compareVal;
  ParamKey = DataVals__MakeParamKey(v10, paramType, index, v12);
  v14 = (System_Func_bool__int__bool__o *)sub_21FFEBC(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_DataVals___c__DisplayClass120_0__IsSatisfyAboveBelowCond_b__0__,
    0);
  return DataVals__IsSatisfyRangeCondition(this, ParamKey, (System_String_o *)StringLiteral_1611/*"<="*/, v14, v15);
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
  DataVals_TYPE_c *v10; // x8
  System_String_o *v11; // x20
  System_Func_bool__int__bool__o *v12; // x21
  const MethodInfo *v13; // x4
  System_Enum_o v15; // [xsp+8h] [xbp-58h] BYREF
  int32_t v16; // [xsp+18h] [xbp-48h]

  if ( (byte_5938170 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__int__bool__TypeInfo);
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    sub_21FFC50(&Method_DataVals___c__DisplayClass121_0__IsSatisfyAboveBelowCondition_b__0__);
    sub_21FFC50(&DataVals___c__DisplayClass121_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1572/*"<"*/);
    byte_5938170 = 1;
  }
  v7 = sub_21FFEBC(DataVals___c__DisplayClass121_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  v10 = DataVals_TYPE_TypeInfo;
  *(_DWORD *)(v7 + 16) = compareVal;
  v15.klass = (System_Enum_c *)v10;
  v15.monitor = (void *)-1LL;
  v16 = paramType;
  v11 = System_Enum__ToString(&v15, 0);
  v12 = (System_Func_bool__int__bool__o *)sub_21FFEBC(System_Func_bool__int__bool__TypeInfo);
  System_Func_bool__int__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_DataVals___c__DisplayClass121_0__IsSatisfyAboveBelowCondition_b__0__,
    0);
  return DataVals__IsSatisfyRangeCondition(this, v11, (System_String_o *)StringLiteral_1572/*"<"*/, v12, v13);
}


bool DataVals__IsSatisfyCommonReleaseId(
        DataVals_o *this,
        BattleData_o *btlData,
        BattleServantData_o *svtData,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w22
  int32_t v11; // w0
  char v12; // w8
  int32_t param; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593816A & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593816A = 1;
  }
  param = 0;
  if ( DataVals__TryGetParam(this, 212, &param, (const MethodInfo *)actData) )
  {
    v10 = param;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    if ( v10 >= 0 )
      v11 = v10;
    else
      v11 = -v10;
    v12 = (v10 < 0) ^ CommonReleaseExtension__IsOpenInBattle(v11, btlData, svtData, actData, 0, 0);
  }
  else
  {
    v12 = 1;
  }
  return v12 & 1;
}


bool DataVals__IsSatisfyRangeCondition(
        DataVals_o *this,
        System_String_o *paramType,
        System_String_o *compareKey,
        System_Func_bool__int__bool__o *funcCompare,
        const MethodInfo *method)
{
  System_String_o *StrParam_48634016; // x22
  __int64 IsMatch; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x21
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x21
  int v47; // w8
  __int64 v48; // x22
  unsigned int v49; // w26
  System_String_o *v50; // x23
  System_String_o *v51; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5938171 & 1) == 0 )
  {
    sub_21FFC50(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_765/*"(^"*/);
    sub_21FFC50(&StringLiteral_16643/*"\\d+$|^\\d+"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_485/*"$)"*/);
    byte_5938171 = 1;
  }
  result = 0;
  StrParam_48634016 = DataVals__GetStrParam_48634016(
                        this,
                        paramType,
                        (System_String_o *)StringLiteral_1/*""*/,
                        (const MethodInfo *)funcCompare);
  if ( System_String__IsNullOrEmpty(StrParam_48634016, 0) )
    return 1;
  IsMatch = sub_21FFD10(string___TypeInfo, 5);
  if ( !IsMatch )
    goto LABEL_25;
  v18 = IsMatch;
  if ( !*(_DWORD *)(IsMatch + 24) )
    goto LABEL_26;
  v19 = StringLiteral_765/*"(^"*/;
  *(_QWORD *)(IsMatch + 32) = StringLiteral_765/*"(^"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(IsMatch + 32), v19, v12, v13, v14, v15, v16, v17);
  if ( (*(_DWORD *)(v18 + 24) & 0xFFFFFFFE) == 0
    || (*(_QWORD *)(v18 + 40) = compareKey,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 40), (int32_t)compareKey, v20, v21, v22, v23, v24, v25),
        *(_DWORD *)(v18 + 24) <= 2u)
    || (v32 = StringLiteral_16643/*"\\d+$|^\\d+"*/,
        *(_QWORD *)(v18 + 48) = StringLiteral_16643/*"\\d+$|^\\d+"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 48), v32, v26, v27, v28, v29, v30, v31),
        (*(_DWORD *)(v18 + 24) & 0xFFFFFFFC) == 0)
    || (*(_QWORD *)(v18 + 56) = compareKey,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 56), (int32_t)compareKey, v33, v34, v35, v36, v37, v38),
        *(_DWORD *)(v18 + 24) <= 4u) )
  {
LABEL_26:
    sub_21FFED4(IsMatch);
  }
  v45 = StringLiteral_485/*"$)"*/;
  *(_QWORD *)(v18 + 64) = StringLiteral_485/*"$)"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 64), v45, v39, v40, v41, v42, v43, v44);
  IsMatch = (__int64)System_String__Concat_75483816((System_String_array *)v18, 0);
  if ( !StrParam_48634016
    || (v46 = (System_String_o *)IsMatch, (IsMatch = (__int64)System_String__Split(StrParam_48634016, 0x2Fu, 0, 0)) == 0) )
  {
LABEL_25:
    sub_21FFECC(IsMatch, v11);
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
    if ( !*(&System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, v11);
    IsMatch = System_Text_RegularExpressions_Regex__IsMatch(v50, v46, 0);
    if ( (IsMatch & 1) == 0 )
      return 0;
    if ( !v50 )
      goto LABEL_25;
    v51 = System_String__Replace_75490096(v50, compareKey, (System_String_o *)StringLiteral_1/*""*/, 0);
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

  return DataVals__isParam(this, 171, v2);
}


bool DataVals__IsShortenBuffHalfTurnInPartyTurn(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DataVals__isParam(this, 173, v2);
}


bool DataVals__IsStrParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *strVals; // x20
  Il2CppObject *v6; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+18h] [xbp-28h]

  if ( (byte_5938159 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    byte_5938159 = 1;
  }
  strVals = this->fields.strVals;
  if ( strVals )
  {
    v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v9.monitor = (void *)-1LL;
    v10 = type;
    v6 = (Il2CppObject *)System_Enum__ToString(&v9, 0);
    return System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)strVals,
             v6,
             (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  }
  else
  {
    return 0;
  }
}


bool DataVals__IsStun2WaitMode(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  bool ParamByValsKey; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5938153 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21951/*"isStun2WaitMode"*/);
    byte_5938153 = 1;
  }
  value = 0;
  ParamByValsKey = DataVals__TryGetParamByValsKey(this, (System_String_o *)StringLiteral_21951/*"isStun2WaitMode"*/, &value, v2);
  return ParamByValsKey && value == 1;
}


bool DataVals__IsWinBattleNotRelatedSurvivalStatus(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 59, 0, v2) != 0;
}


System_String_o *DataVals__MakeParamKey(DataVals_o *this, int32_t paramType, int32_t index, const MethodInfo *method)
{
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+4h] [xbp-3Ch] BYREF
  System_Enum_o v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h]

  if ( (byte_593816E & 1) == 0 )
  {
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    sub_21FFC50(&StringLiteral_26544/*"{0}_{1}"*/);
    byte_593816E = 1;
  }
  if ( index == 0x7FFFFFFF )
  {
    v11 = paramType;
    v10.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
    v10.monitor = (void *)-1LL;
    return System_Enum__ToString(&v10, 0);
  }
  else
  {
    LODWORD(v10.klass) = paramType;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(DataVals_TYPE_TypeInfo, &v10);
    v9 = index;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v9);
    return System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, v7, v8, 0);
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
    sub_21FFECC(Param, v10);
  if ( (_DWORD)Param != DataVals__GetParam(compVals, type, 0, v11) )
    this->fields.overChargeState |= state;
}


void DataVals__SetDependDataVals(
        DataVals_o *this,
        FunctionMaster_o *funcMst,
        int32_t *funcIndex,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  struct System_Collections_Generic_List_DataVals__o *dependDataValsList; // x8
  int32_t size; // w2
  int v9; // w9
  DataVals_c **v10; // x28
  System_String_o **v11; // x27
  System_String_o **v12; // x29
  System_String_o **v13; // x22
  int32_t v14; // w23
  int32_t i; // w24
  DataVals_c *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x5
  DataVals_o *v19; // x26
  const MethodInfo *v20; // x3
  System_String_o *v21; // x0
  const MethodInfo *v22; // x5
  System_String_o *v23; // x25
  System_String_o *IsNullOrEmpty; // x0
  __int64 v25; // x1
  DataVals_o *v26; // x24
  System_String_o **v27; // x21
  int32_t v28; // w22
  int32_t *v29; // x23
  System_String_o **v30; // x19
  DataVals_c **v31; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x28
  System_String_o **v33; // x20
  System_Collections_Generic_List_object__o *v34; // x27
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x0
  DataVals_o *v43; // x26
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x2
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  bool IsDependOverCharge; // w8
  System_String_Fields fields; // x8
  _QWORD *v55; // x9
  __int64 klass_low; // x10
  __int64 v57; // x8
  int32_t v58; // [xsp+Ch] [xbp-74h]
  MissionNaviTransitionBoardItem_o *p_dependDataValsList; // [xsp+10h] [xbp-70h]
  int32_t result; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)funcMst;
  if ( (byte_5938147 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_21FFC50(&DataVals_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataVals__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5938147 = 1;
  }
  result = 0;
  dependDataValsList = this->fields.dependDataValsList;
  p_dependDataValsList = (MissionNaviTransitionBoardItem_o *)&this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    size = dependDataValsList->fields._size;
    v9 = dependDataValsList->fields._version + 1;
    dependDataValsList->fields._size = 0;
    dependDataValsList->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)dependDataValsList->fields._items, 0, size, 0);
  }
  v10 = &DataVals_TypeInfo;
  v11 = (System_String_o **)&StringLiteral_16395/*"["*/;
  v12 = (System_String_o **)&StringLiteral_1/*""*/;
  v13 = (System_String_o **)&StringLiteral_16659/*"]"*/;
  v14 = 0;
  for ( i = 1; ; ++i )
  {
    v16 = *v10;
    if ( !*(&(*v10)->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, funcMst);
      v16 = *v10;
    }
    if ( i > v16->static_fields->MAX_DEPEND_FUNC )
      break;
    v17 = DataVals__ConcatenateTypeValue((DataVals_o *)v16, 46, i, method);
    v19 = (DataVals_o *)DataVals__cutValue(this, v17, 0x5Bu, 0x5Du, 1, v18);
    v21 = DataVals__ConcatenateTypeValue(v19, 47, i, v20);
    v23 = DataVals__cutValue(this, v21, 0x5Bu, 0x5Du, 1, v22);
    if ( System_String__IsNullOrEmpty((System_String_o *)v19, 0) )
      break;
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v23, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      break;
    if ( !p_dependDataValsList->klass )
    {
      v58 = i;
      v26 = this;
      v27 = v13;
      v28 = v14;
      v29 = funcIndex;
      v30 = v12;
      v31 = v10;
      v32 = v5;
      v33 = v11;
      v34 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_DataVals__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v34,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_DataVals___ctor__);
      v35 = (int)v34;
      p_dependDataValsList->klass = (MissionNaviTransitionBoardItem_c *)v34;
      v11 = v33;
      v5 = v32;
      v10 = v31;
      v12 = v30;
      funcIndex = v29;
      v14 = v28;
      v13 = v27;
      this = v26;
      i = v58;
      sub_21FFBF4(p_dependDataValsList, v35, v36, v37, v38, v39, v40, v41);
    }
    result = 0;
    if ( !v19 || (IsNullOrEmpty = System_String__Replace_75490096((System_String_o *)v19, *v11, *v12, 0)) == 0 )
LABEL_27:
      sub_21FFECC(IsNullOrEmpty, v25);
    v42 = System_String__Replace_75490096(IsNullOrEmpty, *v13, *v12, 0);
    if ( System_Int32__TryParse(v42, &result, 0) )
    {
      v43 = (DataVals_o *)sub_21FFEBC(*v10);
      DataVals___ctor(v43, v23, v44);
      if ( !v5 )
        goto LABEL_27;
      IsNullOrEmpty = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                           v5,
                                           result,
                                           (const MethodInfo_3EDD388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !v43 )
        goto LABEL_27;
      DataVals__SetType_48629628(v43, (FunctionEntity_o *)IsNullOrEmpty, *funcIndex, v45);
      IsDependOverCharge = DataVals__IsDependOverCharge(this, v14, v46);
      IsNullOrEmpty = (System_String_o *)this->fields.dependDataValsList;
      v43->fields._isOverCharge_k__BackingField = IsDependOverCharge;
      if ( !IsNullOrEmpty )
        goto LABEL_27;
      fields = IsNullOrEmpty->fields;
      v55 = Method_System_Collections_Generic_List_DataVals__Add__;
      ++HIDWORD(IsNullOrEmpty[1].klass);
      if ( !*(_QWORD *)&fields )
        goto LABEL_27;
      klass_low = SLODWORD(IsNullOrEmpty[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (Il2CppObject *)v43,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = *(_QWORD *)&fields + 8 * klass_low;
        LODWORD(IsNullOrEmpty[1].klass) = klass_low + 1;
        *(_QWORD *)(v57 + 32) = v43;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v57 + 32), (int32_t)v43, v47, v48, v49, v50, v51, v52);
      }
      ++v14;
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x8
  Il2CppObject *v16; // x21
  unsigned __int64 v17; // x22
  Il2CppObject *Item; // x23
  const MethodInfo *v19; // x2
  char *v20; // x10

  if ( (byte_5938167 & 1) == 0 )
  {
    sub_21FFC50(&bool___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataVals__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataVals__get_Item__);
    byte_5938167 = 1;
  }
  dependDataValsList = this->fields.dependDataValsList;
  if ( dependDataValsList )
  {
    if ( dependDataList )
    {
      size = (unsigned int)dependDataValsList->fields._size;
      if ( (_DWORD)size == dependDataList->fields._size )
      {
        v7 = (Il2CppObject *)sub_21FFD10(bool___TypeInfo, size);
        v15 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
        if ( !v15 )
LABEL_13:
          sub_21FFECC(v7, v8);
        v16 = v7;
        v17 = 0;
        while ( (__int64)v17 < v15->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v15,
                   v17,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          v7 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)dependDataList,
                 v17,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_DataVals__get_Item__);
          if ( Item )
          {
            v7 = (Il2CppObject *)DataVals__CheckOverCharge((DataVals_o *)Item, (DataVals_o *)v7, v19);
            if ( v16 )
            {
              if ( v17 >= LODWORD(v16[1].monitor) )
                sub_21FFED4(v7);
              v15 = (System_Collections_Generic_List_object__o *)this->fields.dependDataValsList;
              v20 = (char *)v16 + v17++;
              v20[32] = (unsigned __int8)v7 & 1;
              if ( v15 )
                continue;
            }
          }
          goto LABEL_13;
        }
        this->fields._dependOverChargeArray_k__BackingField = (struct System_Boolean_array *)v16;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
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

  if ( (byte_5938143 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
    byte_5938143 = 1;
  }
  invalidCauseDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.invalidCauseDict;
  if ( !invalidCauseDict )
    sub_21FFECC(0, *(_QWORD *)&targetId);
  System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
    invalidCauseDict,
    targetId,
    1,
    (const MethodInfo_3F62810 *)Method_System_Collections_Generic_Dictionary_int__DataVals_InvalidCause__set_Item__);
  return this;
}


void DataVals__SetOverCharge(DataVals_o *this, bool flg, const MethodInfo *method)
{
  this->fields._isOverCharge_k__BackingField = flg;
}


void DataVals__SetTempType(DataVals_o *this, FunctionMaster_o *funcMst, int32_t ft, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_svals; // x21
  struct System_String_o *svals; // x22
  const MethodInfo *v8; // x2
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t funcIndex; // [xsp+Ch] [xbp-24h] BYREF

  p_svals = (MissionNaviTransitionBoardItem_o *)&this->fields.svals;
  svals = this->fields.svals;
  funcIndex = 0;
  DataVals__SetDependDataVals(this, funcMst, &funcIndex, method);
  DataVals__SetType(this, ft, v8);
  p_svals->klass = (MissionNaviTransitionBoardItem_c *)svals;
  sub_21FFBF4(p_svals, (int32_t)svals, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void DataVals__SetType(DataVals_o *this, int32_t ft, const MethodInfo *method)
{
  void *svals; // x0
  System_String_o **v6; // x24
  __int64 v7; // x8
  _DWORD *v8; // x20
  DataVals_TYPE_c **v9; // x23
  const MethodInfo_3FC0AE8 **v10; // x27
  const MethodInfo_3FC08F4 **v11; // x28
  const MethodInfo_3FCA65C **v12; // x26
  unsigned __int64 v13; // x25
  System_String_o *v14; // x21
  int32_t funcType; // w8
  void *v16; // x22
  System_String_o **v17; // x29
  const MethodInfo_3FCA65C **v18; // x24
  const MethodInfo_3FC0AE8 **v19; // x26
  const MethodInfo_3FC08F4 **v20; // x27
  DataVals_TYPE_c **v21; // x28
  System_Collections_Generic_Dictionary_object__object__o *v22; // x23
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int v30; // w8
  unsigned int v31; // w9
  int v32; // w8
  System_Enum_c *v33; // x9
  int v34; // w8
  char *v35; // [xsp+8h] [xbp-88h]
  System_Enum_o v36; // [xsp+10h] [xbp-80h] BYREF
  int v37; // [xsp+20h] [xbp-70h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_5938146 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5938146 = 1;
  }
  svals = this->fields.svals;
  result = 0;
  this->fields.funcType = ft;
  if ( !svals
    || (v6 = (System_String_o **)&StringLiteral_1/*""*/,
        (svals = System_String__Replace_75490096(
                   (System_String_o *)svals,
                   (System_String_o *)StringLiteral_16395/*"["*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0)) == 0)
    || (svals = System_String__Replace_75490096(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16659/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0)) == 0
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0)) == 0 )
  {
LABEL_106:
    sub_21FFECC(svals, *(_QWORD *)&ft);
  }
  v7 = *((_QWORD *)svals + 3);
  v8 = svals;
  if ( (int)v7 >= 1 )
  {
    v9 = &DataVals_TYPE_TypeInfo;
    v10 = (const MethodInfo_3FC0AE8 **)&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__;
    v11 = (const MethodInfo_3FC08F4 **)&Method_System_Collections_Generic_Dictionary_string__int__Add__;
    v12 = (const MethodInfo_3FCA65C **)&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__;
    v13 = 0;
    v35 = (char *)svals + 32;
    do
    {
      if ( v13 >= (unsigned int)v7 )
LABEL_107:
        sub_21FFED4(svals);
      v14 = *v6;
      svals = (void *)System_Int32__TryParse(*(System_String_o **)&v35[8 * v13], &result, 0);
      if ( ((unsigned __int8)svals & 1) == 0 )
      {
        if ( v13 >= (unsigned int)v8[6] )
          goto LABEL_107;
        svals = *(void **)&v35[8 * v13];
        if ( !svals )
          goto LABEL_106;
        svals = System_String__Split((System_String_o *)svals, 0x3Au, 0, 0);
        if ( !svals )
          goto LABEL_106;
        v16 = svals;
        if ( *((int *)svals + 6) >= 2 )
        {
          v14 = (System_String_o *)*((_QWORD *)svals + 4);
          if ( !System_Int32__TryParse(*((System_String_o **)svals + 5), &result, 0) )
          {
            svals = this->fields.strVals;
            if ( !svals )
            {
              v17 = v6;
              v18 = v12;
              v19 = v10;
              v20 = v11;
              v21 = v9;
              v22 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
              System_Collections_Generic_Dictionary_object__object____ctor(
                v22,
                (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
              this->fields.strVals = (struct System_Collections_Generic_Dictionary_string__string__o *)v22;
              v23 = (int)v22;
              v9 = v21;
              v11 = v20;
              v10 = v19;
              v12 = v18;
              v6 = v17;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.strVals, v23, v24, v25, v26, v27, v28, v29);
              svals = this->fields.strVals;
              if ( !svals )
                goto LABEL_106;
            }
            svals = (void *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                              (System_Collections_Generic_Dictionary_object__object__o *)svals,
                              (Il2CppObject *)v14,
                              *v12);
            if ( ((unsigned __int8)svals & 1) == 0 )
            {
              if ( (*((_DWORD *)v16 + 6) & 0xFFFFFFFE) == 0 )
                goto LABEL_107;
              svals = this->fields.strVals;
              if ( !svals )
                goto LABEL_106;
              System_Collections_Generic_Dictionary_object__object___Add(
                (System_Collections_Generic_Dictionary_object__object__o *)svals,
                (Il2CppObject *)v14,
                *((Il2CppObject **)v16 + 5),
                (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
            }
          }
        }
        goto LABEL_92;
      }
      funcType = this->fields.funcType;
      if ( funcType <= 55 )
      {
        if ( funcType > 18 )
        {
          if ( (unsigned int)funcType <= 0x2F )
          {
            if ( funcType != 27 && funcType != 47 )
              goto LABEL_84;
          }
          else
          {
            if ( funcType == 52 )
              goto LABEL_60;
            if ( funcType != 55 )
              goto LABEL_84;
          }
          goto LABEL_73;
        }
        if ( funcType <= 2 )
        {
          if ( funcType != 1 )
          {
            if ( funcType == 2 )
              goto LABEL_60;
LABEL_84:
            if ( (_DWORD)v13 == 2 )
              goto LABEL_89;
            goto LABEL_85;
          }
        }
        else
        {
          if ( (unsigned int)(funcType - 11) > 0xFFFFFFFD )
            goto LABEL_60;
          if ( funcType == 15 )
            goto LABEL_73;
          if ( funcType != 16 )
          {
            if ( funcType != 18 )
              goto LABEL_84;
            goto LABEL_73;
          }
        }
      }
      else if ( (unsigned int)funcType <= 0x85 )
      {
        if ( (unsigned int)funcType <= 0x6D )
        {
          if ( funcType == 62 )
            goto LABEL_60;
          if ( funcType != 109 )
            goto LABEL_84;
          if ( (int)v13 > 1 )
          {
            if ( (_DWORD)v13 != 2 )
            {
              if ( (_DWORD)v13 != 3 )
                goto LABEL_92;
              v36.klass = (System_Enum_c *)*v9;
              v36.monitor = (void *)-1LL;
              v32 = 79;
              goto LABEL_90;
            }
LABEL_89:
            v36.klass = (System_Enum_c *)*v9;
            v36.monitor = (void *)-1LL;
            v32 = 6;
            goto LABEL_90;
          }
          goto LABEL_74;
        }
        if ( funcType == 121 )
          goto LABEL_73;
        v30 = (unsigned __int8)this->fields.funcType;
        if ( v30 != 130 )
        {
          if ( v30 == 131 || v30 == 133 )
            goto LABEL_60;
          goto LABEL_84;
        }
      }
      else
      {
        if ( (unsigned int)funcType <= 0x95 )
        {
          v31 = (unsigned __int8)this->fields.funcType;
          if ( v31 > 0x8F )
          {
            if ( v31 - 144 < 2 )
              goto LABEL_84;
            if ( v31 != 146 )
            {
LABEL_83:
              if ( funcType == 149 )
                goto LABEL_60;
              goto LABEL_84;
            }
LABEL_60:
            if ( (_DWORD)v13 == 2 )
            {
LABEL_61:
              v36.klass = (System_Enum_c *)*v9;
              v36.monitor = (void *)-1LL;
              v32 = 4;
              goto LABEL_90;
            }
LABEL_85:
            if ( (_DWORD)v13 == 1 )
            {
LABEL_88:
              v36.klass = (System_Enum_c *)*v9;
              v36.monitor = (void *)-1LL;
              v32 = 3;
              goto LABEL_90;
            }
            goto LABEL_86;
          }
          if ( v31 == 142 )
          {
            if ( (_DWORD)v13 == 2 )
            {
              v36.klass = (System_Enum_c *)*v9;
              v36.monitor = (void *)-1LL;
              v32 = 177;
              goto LABEL_90;
            }
            if ( (_DWORD)v13 == 1 )
            {
              v36.klass = (System_Enum_c *)*v9;
              v36.monitor = (void *)-1LL;
              v32 = 176;
              goto LABEL_90;
            }
LABEL_86:
            if ( (_DWORD)v13 )
              goto LABEL_92;
LABEL_87:
            v33 = (System_Enum_c *)*v9;
            v37 = 0;
            v36.klass = v33;
            v36.monitor = (void *)-1LL;
            goto LABEL_91;
          }
          if ( v31 != 143 )
            goto LABEL_83;
LABEL_73:
          if ( (int)v13 > 1 )
          {
            if ( (_DWORD)v13 == 2 )
              goto LABEL_89;
            if ( (_DWORD)v13 != 3 )
              goto LABEL_92;
            v36.klass = (System_Enum_c *)*v9;
            v36.monitor = (void *)-1LL;
            v32 = 7;
LABEL_90:
            v37 = v32;
LABEL_91:
            v14 = System_Enum__ToString(&v36, 0);
            goto LABEL_92;
          }
LABEL_74:
          if ( !(_DWORD)v13 )
            goto LABEL_87;
          if ( (_DWORD)v13 == 1 )
            goto LABEL_88;
          goto LABEL_92;
        }
        if ( funcType == 154 )
          goto LABEL_60;
        if ( (funcType & 0x7FFFFFFE) != 0xA0 )
          goto LABEL_84;
      }
      if ( (int)v13 <= 2 )
      {
        if ( (_DWORD)v13 )
        {
          if ( (_DWORD)v13 == 1 )
          {
            v36.klass = (System_Enum_c *)*v9;
            v36.monitor = (void *)-1LL;
            v32 = 1;
          }
          else
          {
            if ( (_DWORD)v13 != 2 )
              goto LABEL_92;
            v36.klass = (System_Enum_c *)*v9;
            v36.monitor = (void *)-1LL;
            v32 = 2;
          }
          goto LABEL_90;
        }
        goto LABEL_87;
      }
      switch ( (_DWORD)v13 )
      {
        case 3:
          goto LABEL_88;
        case 4:
          v36.klass = (System_Enum_c *)*v9;
          v36.monitor = (void *)-1LL;
          v32 = 5;
          goto LABEL_90;
        case 5:
          goto LABEL_61;
      }
LABEL_92:
      svals = (void *)System_String__op_Inequality(v14, *v6, 0);
      if ( ((unsigned __int8)svals & 1) != 0 )
        v34 = 0;
      else
        v34 = 52;
      if ( v34 != 52 )
      {
        svals = this->fields.vals;
        if ( !svals )
          goto LABEL_106;
        svals = (void *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                          (System_Collections_Generic_Dictionary_object__int__o *)svals,
                          (Il2CppObject *)v14,
                          *v10);
        if ( ((unsigned __int8)svals & 1) == 0 )
        {
          svals = this->fields.vals;
          if ( !svals )
            goto LABEL_106;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)svals,
            (Il2CppObject *)v14,
            result,
            *v11);
        }
      }
      LODWORD(v7) = v8[6];
      ++v13;
    }
    while ( (__int64)v13 < (int)v7 );
  }
}


// local variable allocation has failed, the output may be wrong!
void DataVals__SetType_48629628(
        DataVals_o *this,
        FunctionEntity_o *funcEnt,
        int32_t funcIndex,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t targetType; // w8

  if ( !funcEnt )
    sub_21FFECC(this, 0);
  v6 = (MissionNaviTransitionBoardItem_o *)this;
  DataVals__SetType(this, funcEnt->fields.funcType, *(const MethodInfo **)&funcIndex);
  v6->fields.sortValue0B = (int64_t)funcEnt;
  v6 = (MissionNaviTransitionBoardItem_o *)((char *)v6 + 40);
  sub_21FFBF4(v6, (int32_t)funcEnt, v7, v8, v9, v10, v11, v12);
  targetType = funcEnt->fields.targetType;
  *(&v6[-1].fields._BoardType_k__BackingField + 1) = funcIndex;
  HIDWORD(v6[-1].fields._NaviAction_k__BackingField) = targetType;
}


void DataVals__SetUpHatePriority(DataVals_o *this, BattleBuffData_BuffData_o *buffData, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t BuffType; // w20
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593817D & 1) == 0 )
  {
    sub_21FFC50(&BuffList_TypeInfo);
    byte_593817D = 1;
  }
  param = 0;
  v6 = DataVals__TryGetParam(this, 243, &param, v3);
  if ( v6 )
  {
    if ( !buffData )
      sub_21FFECC(v6, v7);
    BuffType = BattleBuffData_BuffData__get_BuffType(buffData, 0);
    if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v8);
    if ( BuffList__IsUpHate(BuffType, 0) )
      buffData->fields.PriorityEachType = param;
  }
}


bool DataVals__TryGetDisplayNoEffectCauseList(
        DataVals_o *this,
        System_Collections_Generic_List_DataVals_InvalidCause__o **resultList,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x4
  bool ParamStrArray; // w0
  bool v12; // w8
  System_Collections_Generic_List_T__o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
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

  if ( (byte_5938163 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Enum_TryParse_DataVals_InvalidCause___);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    byte_5938163 = 1;
  }
  result = 0;
  item = 0;
  *resultList = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)resultList, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  ParamStrArray = DataVals__TryGetParamStrArray(this, &result, 175, 0x7FFFFFFF, v10);
  v12 = 0;
  if ( ParamStrArray )
  {
    v13 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_DataVals_InvalidCause__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v13,
      (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_DataVals_InvalidCause___ctor__);
    *resultList = (System_Collections_Generic_List_DataVals_InvalidCause__o *)v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)resultList, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    v22 = result;
    if ( !result )
LABEL_19:
      sub_21FFECC(v20, v21);
    max_length = result->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_21FFED4(v20);
        v25 = v22->m_Items[i];
        if ( !*(_DWORD *)(qword_594C0C0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_594C0C0, v21);
        v20 = (System_Collections_Generic_List_DataVals_InvalidCause__o *)System_Enum__TryParse_Int32Enum__58909048(
                                                                            v25,
                                                                            0,
                                                                            &item,
                                                                            (const MethodInfo_382E178 *)Method_System_Enum_TryParse_DataVals_InvalidCause___);
        if ( ((unsigned __int8)v20 & 1) != 0 )
        {
          v20 = *resultList;
          if ( !*resultList )
            goto LABEL_19;
          items = (struct System_Object_array *)v20->fields._items;
          v21 = (unsigned int)item;
          v27 = Method_System_Collections_Generic_List_DataVals_InvalidCause__Add__;
          ++v20->fields._version;
          if ( !items )
            goto LABEL_19;
          size = v20->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_Int32Enum___AddWithResize(
              (System_Collections_Generic_List_T__o *)v20,
              v21,
              *(const MethodInfo_4435950 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
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
  int Param; // w0

  *countHigher = DataVals__GetParam(this, 195, 0, (const MethodInfo *)countEqual);
  *countLower = DataVals__GetParam(this, 196, 0, v9);
  Param = DataVals__GetParam(this, 197, -1, v10);
  *countEqual = Param;
  if ( *countHigher > 0 )
    return 1;
  return *countLower > 0 || Param >= 0;
}


bool DataVals__TryGetOverwriteFuncInvalidType(DataVals_o *this, int32_t *invalidType, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  bool isParam; // w20
  int32_t Param; // w8
  bool result; // w0

  isParam = DataVals__isParam(this, 215, method);
  if ( isParam )
    Param = DataVals__GetParam(this, 215, -1, v5);
  else
    Param = -1;
  result = isParam;
  *invalidType = Param;
  return result;
}


bool DataVals__TryGetParam(DataVals_o *this, int32_t type, int32_t *param, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+18h] [xbp-38h]

  if ( (byte_593815A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    byte_593815A = 1;
  }
  vals = this->fields.vals;
  v12 = type;
  v11.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v11.monitor = (void *)-1LL;
  v8 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
  if ( !vals )
    sub_21FFECC(v8, v9);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v8,
           param,
           (const MethodInfo_3FC241C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool DataVals__TryGetParamByValsKey(DataVals_o *this, System_String_o *name, int32_t *value, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x0

  if ( (byte_5938152 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_5938152 = 1;
  }
  vals = this->fields.vals;
  if ( !vals )
    sub_21FFECC(0, name);
  return System_Collections_Generic_Dictionary_object__int___TryGetValue(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           (Il2CppObject *)name,
           value,
           (const MethodInfo_3FC241C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
}


bool DataVals__TryGetParamIntArray(
        DataVals_o *this,
        int32_t type,
        System_Int32_array **paramArray,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v5 = DataVals__GetParamArray(this, type, (const MethodInfo *)paramArray);
  *paramArray = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)paramArray, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*paramArray, 0);
}


// local variable allocation has failed, the output may be wrong!
bool DataVals__TryGetParamStrArray(
        DataVals_o *this,
        System_String_array **result,
        int32_t paramType,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DataVals_o *v12; // x0
  const MethodInfo *v13; // x3
  System_String_o *ParamKey; // x0
  const MethodInfo *v15; // x3
  System_String_o *StrParam_48634016; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v18; // x1
  System_String_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_593816D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593816D = 1;
  }
  *result = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)result,
    0,
    *(System_String_o **)&paramType,
    *(System_String_o **)&index,
    (int32_t)method,
    v5,
    v6,
    v7);
  ParamKey = DataVals__MakeParamKey(v12, paramType, index, v13);
  StrParam_48634016 = DataVals__GetStrParam_48634016(this, ParamKey, (System_String_o *)StringLiteral_1/*""*/, v15);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StrParam_48634016, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !StrParam_48634016 )
      sub_21FFECC(IsNullOrEmpty, v18);
    v19 = System_String__Split(StrParam_48634016, 0x2Fu, 0, 0);
    *result = v19;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)result, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  }
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*result, 0);
}


bool DataVals__TryGetResistSkillId(DataVals_o *this, int32_t *skillId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__TryGetParam(this, 252, skillId, v3);
}


bool DataVals__TryGetSubstituteSkillId(DataVals_o *this, int32_t *skillId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return DataVals__TryGetParam(this, 250, skillId, v3);
}


void DataVals__UpdateOverChargeEachFunc(
        DataVals_o *this,
        DataVals_OverChargeState_array *targetStateArray,
        const MethodInfo *method)
{
  System_Func_T__TResult__o *v5; // x21

  if ( (byte_5938166 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_DataVals_OverChargeState___);
    sub_21FFC50(&Method_DataVals_IsOverChargeState__);
    sub_21FFC50(&System_Func_DataVals_OverChargeState__bool__TypeInfo);
    byte_5938166 = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_DataVals_OverChargeState__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v5, (Il2CppObject *)this, Method_DataVals_IsOverChargeState__, 0);
  this->fields._isOverCharge_k__BackingField = BasicHelper__Any_Int32Enum__58575096(
                                                 (System_Int32Enum_array *)targetStateArray,
                                                 (System_Func_T__bool__o *)v5,
                                                 (const MethodInfo_37DC8F8 *)Method_BasicHelper_Any_DataVals_OverChargeState___);
}


bool DataVals__UseBuffResistRate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 249, 0, v2) == 1;
}


bool DataVals__UseSvtResistRate(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 248, 0, v2) == 1;
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
  int v11; // w8
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x8
  System_String_o **p_svals; // x19
  struct System_String_o *svals; // t1
  int32_t v18; // w0
  int32_t v19; // w23
  int32_t v20; // w22
  int32_t v21; // w0
  int32_t v22; // w24
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int16 v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593814B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593814B = 1;
  }
  v11 = *(_DWORD *)(qword_594C0B0 + 228);
  v32 = 58;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(qword_594C0B0, key);
  v12 = System_Char__ToString((uint16_t)&v32, 0);
  v13 = System_String__Concat_75481624((System_String_o *)StringLiteral_869/*","*/, key, v12, 0);
  svals = this->fields.svals;
  p_svals = &this->fields.svals;
  v15 = svals;
  if ( !svals )
    goto LABEL_18;
  v18 = System_String__IndexOf_75501892(v15, v13, 0);
  if ( v18 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v19 = v18;
  v13 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v13 = (System_String_o *)System_String__IndexOf_75500512(v13, startWord, v19, 0);
  if ( !*p_svals )
    goto LABEL_18;
  v20 = (int)v13;
  v21 = System_String__IndexOf_75500512(*p_svals, endWord, v19, 0);
  if ( v20 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v22 = v21;
  if ( v21 == -1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v13 = *p_svals;
  if ( !*p_svals )
    goto LABEL_18;
  v23 = System_String__Substring_75489544(v13, v20, v22 - v20 + 1, 0);
  if ( isDelKeyValue )
  {
    v13 = *p_svals;
    if ( *p_svals )
    {
      v13 = System_String__Substring_75489544(v13, v19, v22 - v19 + 1, 0);
      if ( *p_svals )
      {
        v24 = System_String__Replace_75490096(*p_svals, v13, (System_String_o *)StringLiteral_1/*""*/, 0);
        *p_svals = v24;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_svals, (int32_t)v24, v25, v26, v27, v28, v29, v30);
        return v23;
      }
    }
LABEL_18:
    sub_21FFECC(v13, v14);
  }
  return v23;
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

  return DataVals__GetParam(this, 43, 0, v2) > 0;
}


bool DataVals__isCheckEnemyFieldSpace(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 80, 0, v2) == 1;
}


bool DataVals__isEffectSummon(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 31, 0, v2) != 0;
}


bool DataVals__isForcedEffectSpeedOne(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 78, 0, v2) != 0;
}


bool DataVals__isHideMiss(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 10, 0, v2) == 1;
}


bool DataVals__isLossHpChangeDamage(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 64, 0, v2) > 0;
}


bool DataVals__isParam(DataVals_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *vals; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+18h] [xbp-38h]

  if ( (byte_5938157 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    byte_5938157 = 1;
  }
  vals = this->fields.vals;
  v10 = type;
  v9.klass = (System_Enum_c *)DataVals_TYPE_TypeInfo;
  v9.monitor = (void *)-1LL;
  v6 = (Il2CppObject *)System_Enum__ToString(&v9, 0);
  if ( !vals )
    sub_21FFECC(v6, v7);
  return System_Collections_Generic_Dictionary_object__int___ContainsKey(
           (System_Collections_Generic_Dictionary_object__int__o *)vals,
           v6,
           (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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

  ParamArray = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 72, v2);
  v6 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 73, v5);
  v8 = (System_Collections_ICollection_o *)DataVals__GetParamArray(this, 74, v7);
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


bool DataVals__isRatioHpRange(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  return DataVals__GetParam(this, 33, 0, v2) || DataVals__GetParam(this, 32, 0, v4) != 0;
}


bool DataVals__isSameBuffLimit(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 42, 0, v2) > 0;
}


bool DataVals__isShowCommand(DataVals_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return DataVals__GetParam(this, 30, 0, v2) != 0;
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

  if ( (byte_593814D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&DataVals_TYPE_TypeInfo);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_593814D = 1;
  }
  svals = this->fields.svals;
  result = 0;
  if ( !svals
    || (svals = System_String__Replace_75490096(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16395/*"["*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0)) == 0
    || (svals = System_String__Replace_75490096(
                  (System_String_o *)svals,
                  (System_String_o *)StringLiteral_16659/*"]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0)) == 0
    || (svals = System_String__Split((System_String_o *)svals, 0x2Cu, 0, 0)) == 0 )
  {
LABEL_24:
    sub_21FFECC(svals, method);
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
        sub_21FFED4(svals);
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
                        (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
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
            (const MethodInfo_3FC08F4 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FuncParamValueUpInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FuncParamValueUpInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataVals__set_dependOverChargeArray(DataVals_o *this, System_Boolean_array *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._dependOverChargeArray_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._dependOverChargeArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938181 & 1) == 0 )
  {
    sub_21FFC50(&DataVals___c_TypeInfo);
    byte_5938181 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(DataVals___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataVals___c_TypeInfo->static_fields->__9 = (struct DataVals___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)DataVals___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataVals___c___ctor(DataVals___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c___ExistUseInFsmParam_b__43_0(DataVals___c_o *this, System_String_o *x, const MethodInfo *method)
{
  if ( (byte_5938182 & 1) == 0 )
  {
    this = (DataVals___c_o *)sub_21FFC50(&StringLiteral_15795/*"UseInFsm"*/);
    byte_5938182 = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  return System_String__StartsWith(x, (System_String_o *)StringLiteral_15795/*"UseInFsm"*/, 0);
}


bool DataVals___c___GetDependFuncIdArray_b__46_0(DataVals___c_o *this, DataVals_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.funcEnt != 0;
}


int32_t DataVals___c___GetDependFuncIdArray_b__46_1(DataVals___c_o *this, DataVals_o *x, const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8

  if ( !x || (funcEnt = x->fields.funcEnt) == 0 )
    sub_21FFECC(this, x);
  return funcEnt->fields.id;
}


int32_t DataVals___c___GetTargetTypeIndexArray_b__149_2(DataVals___c_o *this, int32_t x, const MethodInfo *method)
{
  return x;
}


bool DataVals___c___GetUseInFsmParam_b__44_0(
        DataVals___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = x.fields.key;
  if ( (byte_5938183 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    this = (DataVals___c_o *)sub_21FFC50(&StringLiteral_15795/*"UseInFsm"*/);
    byte_5938183 = 1;
  }
  if ( !key )
    sub_21FFECC(this, x.fields.key);
  return System_String__StartsWith(key, (System_String_o *)StringLiteral_15795/*"UseInFsm"*/, 0);
}


System_String_o *DataVals___c___GetUseInFsmParam_b__44_1(
        DataVals___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = x.fields.key;
  if ( (byte_5938184 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    byte_5938184 = 1;
  }
  return key;
}


int32_t DataVals___c___GetUseInFsmParam_b__44_2(
        DataVals___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_5938185 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_5938185 = 1;
  }
  return value;
}


void DataVals___c__DisplayClass120_0___ctor(DataVals___c__DisplayClass120_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass120_0___IsSatisfyAboveBelowCond_b__0(
        DataVals___c__DisplayClass120_0_o *this,
        bool isBelow,
        int32_t cond,
        const MethodInfo *method)
{
  int32_t compareVal; // w8
  bool v5; // cc
  bool v6; // w8
  bool v7; // w9

  compareVal = this->fields.compareVal;
  v5 = compareVal < cond;
  v6 = compareVal <= cond;
  v7 = !v5;
  if ( isBelow )
    return v6;
  else
    return v7;
}


void DataVals___c__DisplayClass121_0___ctor(DataVals___c__DisplayClass121_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass121_0___IsSatisfyAboveBelowCondition_b__0(
        DataVals___c__DisplayClass121_0_o *this,
        bool isBelow,
        int32_t cond,
        const MethodInfo *method)
{
  int32_t compareVal; // w8
  bool v5; // cc
  bool v6; // w8
  bool v7; // w9

  compareVal = this->fields.compareVal;
  v5 = compareVal < cond;
  v6 = compareVal <= cond;
  v7 = !v5;
  if ( isBelow )
    return v6;
  else
    return v7;
}


void DataVals___c__DisplayClass149_0___ctor(DataVals___c__DisplayClass149_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass149_0___GetTargetTypeIndexArray_b__0(
        DataVals___c__DisplayClass149_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass149_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_5938186 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass149_0_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    byte_5938186 = 1;
  }
  if ( !key )
    sub_21FFECC(this, x.fields.key);
  return System_String__StartsWith(key, v4->fields.key, 0);
}


System_String_o *DataVals___c__DisplayClass149_0___GetTargetTypeIndexArray_b__1(
        DataVals___c__DisplayClass149_0_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  System_String_o *key; // x19
  DataVals___c__DisplayClass149_0_o *v4; // x20

  key = x.fields.key;
  v4 = this;
  if ( (byte_5938187 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    this = (DataVals___c__DisplayClass149_0_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938187 = 1;
  }
  if ( !key )
    sub_21FFECC(this, x.fields.key);
  return System_String__Replace_75490096(key, v4->fields.key, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void DataVals___c__DisplayClass42_0___ctor(DataVals___c__DisplayClass42_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass42_0___GetDependDataValsArray_b__0(
        DataVals___c__DisplayClass42_0_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  DataVals___c__DisplayClass42_0_o *v4; // x20

  v4 = this;
  if ( (byte_5938188 & 1) == 0 )
  {
    this = (DataVals___c__DisplayClass42_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
    byte_5938188 = 1;
  }
  if ( !x || (this = (DataVals___c__DisplayClass42_0_o *)v4->fields.funcTypeList) == 0 )
    sub_21FFECC(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.funcType,
           (const MethodInfo_4435CD0 *)Method_System_Collections_Generic_List_FuncList_TYPE__Contains__);
}


void DataVals___c__DisplayClass87_0___ctor(DataVals___c__DisplayClass87_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataVals___c__DisplayClass87_0___IsHideNoEffect_b__0(
        DataVals___c__DisplayClass87_0_o *this,
        int32_t cause,
        const MethodInfo *method)
{
  return this->fields.invalidCause != cause;
}