void ExtraBattleUserInterfaceData___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  Il2CppType *v9; // x19
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32Enum_array *v14; // x0
  struct ExtraBattleUserInterfaceData_StaticFields *static_fields; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CCA3BB & 1) == 0 )
  {
    sub_1C713B0(&System_Enum_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Cast_ExtraBattleUserInterfaceData_LabelType___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelType___);
    sub_1C713B0(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C713B0(&ExtraBattleUserInterfaceData_LabelType___TypeInfo);
    sub_1C713B0(&ExtraBattleUserInterfaceData_LabelType_var);
    sub_1C713B0(&System_Type_TypeInfo);
    byte_4CCA3BB = 1;
  }
  v1 = sub_1C71458(ExtraBattleUserInterfaceData_LabelType___TypeInfo, 2);
  if ( !v1 )
    sub_1C71608(0, v2);
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    sub_1C71610(v1);
  *(_DWORD *)(v1 + 36) = 1;
  ExtraBattleUserInterfaceData_TypeInfo->static_fields->DefaultUpdateLabelTypes = (struct ExtraBattleUserInterfaceData_LabelType_array *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ExtraBattleUserInterfaceData_TypeInfo->static_fields,
    v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = ExtraBattleUserInterfaceData_LabelType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v10.fields.value = (intptr_t)v9;
  TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_3159834 *)Method_System_Linq_Enumerable_Cast_ExtraBattleUserInterfaceData_LabelType___);
  v14 = System_Linq_Enumerable__ToArray_Int32Enum_(
          v13,
          (const MethodInfo_318AEDC *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelType___);
  static_fields = ExtraBattleUserInterfaceData_TypeInfo->static_fields;
  static_fields->AllLabelTypes = (struct ExtraBattleUserInterfaceData_LabelType_array *)v14;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->AllLabelTypes, (int32_t)v14, v16, v17, v18, v19, v20, v21);
}


void ExtraBattleUserInterfaceData___ctor(
        ExtraBattleUserInterfaceData_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_o *value,
        int32_t wave,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_Fields *p_fields; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  long double inited; // q0
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *data; // x24
  System_Collections_Generic_IEnumerable_TSource__o *labels; // x21
  ExtraBattleUserInterfaceData___c_c *v23; // x0
  System_Func_object__object__o *_9__25_0; // x22
  Il2CppObject *v25; // x23
  struct ExtraBattleUserInterfaceData___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Object_array *IsNullOrEmpty; // x0
  struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *v35; // x1
  _QWORD *v36; // x21
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *v40; // x8
  System_String_o *assignment; // x0
  System_String_o *v42; // x20
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CCA3BA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___);
    sub_1C713B0(&Method_System_Enum_TryParse_ExtraBattleUserInterfaceData_AssignmentType___);
    sub_1C713B0(&System_Enum_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelDataWrapper___);
    sub_1C713B0(&System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__TypeInfo);
    sub_1C713B0(&Method_ExtraBattleUserInterfaceData___c___ctor_b__25_0__);
    sub_1C713B0(&ExtraBattleUserInterfaceData___c_TypeInfo);
    byte_4CCA3BA = 1;
  }
  result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = value;
  p_fields = &this->fields;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, v8, v9, v10, v11, v12, v13);
  data = this->fields.data;
  this->fields._Wave_k__BackingField = wave;
  if ( data && (labels = (System_Collections_Generic_IEnumerable_TSource__o *)data->fields.labels) != 0 )
  {
    v23 = ExtraBattleUserInterfaceData___c_TypeInfo;
    if ( !ExtraBattleUserInterfaceData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData___c_TypeInfo);
      v23 = ExtraBattleUserInterfaceData___c_TypeInfo;
    }
    _9__25_0 = (System_Func_object__object__o *)v23->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = ExtraBattleUserInterfaceData___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__25_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__TypeInfo);
      System_Func_object__object____ctor(_9__25_0, v25, Method_ExtraBattleUserInterfaceData___c___ctor_b__25_0__, 0);
      static_fields = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__o *)_9__25_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__25_0,
        (int32_t)_9__25_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 labels,
                                                                 (System_Func_TSource__TResult__o *)_9__25_0,
                                                                 (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper___);
    IsNullOrEmpty = System_Linq_Enumerable__ToArray_object_(
                      v33,
                      (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelDataWrapper___);
    v35 = (struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *)IsNullOrEmpty;
    if ( !this )
LABEL_32:
      sub_1C71608(IsNullOrEmpty, v35);
  }
  else
  {
    v36 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___;
    v37 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___ + 7);
    if ( !v37 )
    {
      sub_1C474A0(Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___);
      v37 = v36[7];
    }
    v38 = *(_QWORD *)(v37 + 16);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v38 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v38);
    v39 = *(_QWORD *)(v36[7] + 16LL);
    if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
      v39 = sub_1C47444(inited);
    v35 = **(struct ExtraBattleUserInterfaceData_LabelDataWrapper_array ***)(v39 + 184);
  }
  this->fields._Labels_k__BackingField = v35;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Labels_k__BackingField,
    (int32_t)v35,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v40 = this->fields.data;
  this->fields._Assignment_k__BackingField = 0;
  if ( v40 )
    assignment = v40->fields.assignment;
  else
    assignment = 0;
  IsNullOrEmpty = (System_Object_array *)System_String__IsNullOrEmpty(assignment, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !p_fields->data )
      goto LABEL_32;
    v42 = p_fields->data->fields.assignment;
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    if ( System_Enum__TryParse_Int32Enum_(
           v42,
           &result,
           (const MethodInfo_3151C50 *)Method_System_Enum_TryParse_ExtraBattleUserInterfaceData_AssignmentType___) )
    {
      this->fields._Assignment_k__BackingField = result;
    }
  }
}


System_String_o *ExtraBattleUserInterfaceData__get_AssetPath(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.asset;
  else
    return 0;
}


int32_t ExtraBattleUserInterfaceData__get_Assignment(ExtraBattleUserInterfaceData_o *this, const MethodInfo *method)
{
  return this->fields._Assignment_k__BackingField;
}


bool ExtraBattleUserInterfaceData__get_IsFromQuestPhase(ExtraBattleUserInterfaceData_o *this, const MethodInfo *method)
{
  return this->fields._Wave_k__BackingField == -999;
}


ExtraBattleUserInterfaceData_LabelDataWrapper_array *ExtraBattleUserInterfaceData__get_Labels(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  return this->fields._Labels_k__BackingField;
}


int32_t ExtraBattleUserInterfaceData__get_Wave(ExtraBattleUserInterfaceData_o *this, const MethodInfo *method)
{
  return this->fields._Wave_k__BackingField;
}


void ExtraBattleUserInterfaceData_JsonConvertData___ctor(
        ExtraBattleUserInterfaceData_JsonConvertData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData_LabelData___ctor(
        ExtraBattleUserInterfaceData_LabelData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  if ( (byte_4CCA3BC & 1) == 0 )
  {
    sub_1C713B0(&string_TypeInfo);
    byte_4CCA3BC = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.valueStringFormat = static_fields->Empty;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.valueStringFormat, (int32_t)Empty, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData_LabelDataWrapper___ctor(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        ExtraBattleUserInterfaceData_LabelData_o *value,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_Fields *p_fields; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 NumMissionCondDetail; // x0
  __int64 v13; // x1
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x9
  struct ExtraBattleUserInterfaceData_ValueData_array *values; // x23
  il2cpp_array_size_t max_length; // x8
  __int64 v17; // x24
  ExtraBattleUserInterfaceData_ValueData_o *v18; // x9
  struct ExtraBattleUserInterfaceData_LabelData_o *v19; // x8
  int64_t staticCount; // x27
  int32_t missionConditionDetailId; // w21
  int32_t countMax; // w22
  System_Collections_Generic_IEnumerable_TSource__o *limitTurns; // x20
  ExtraBattleUserInterfaceData_LabelDataWrapper___c_c *v29; // x0
  System_Func_object__int__o *_9__11_0; // x21
  Il2CppObject *v31; // x22
  struct ExtraBattleUserInterfaceData_LabelDataWrapper___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Object_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct UnityEngine_Color_o v47; // [xsp+0h] [xbp-60h]

  if ( (byte_4CCA3BD & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_ExtraBattleUserInterfaceData_LimitTurnData__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LimitTurnData___);
    sub_1C713B0(&System_Func_ExtraBattleUserInterfaceData_LimitTurnData__int__TypeInfo);
    sub_1C713B0(&Method_ExtraBattleUserInterfaceData_LabelDataWrapper___c___ctor_b__11_0__);
    sub_1C713B0(&ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
    byte_4CCA3BD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = value;
  p_fields = &this->fields;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, v6, v7, v8, v9, v10, v11);
  data = this->fields.data;
  if ( !data )
    goto LABEL_36;
  if ( data->fields.labelType == 1 )
  {
    values = data->fields.values;
    if ( values )
    {
      max_length = values->max_length;
      if ( (int)max_length >= 1 )
      {
        v17 = 0;
        do
        {
          if ( (unsigned int)v17 >= (unsigned int)max_length )
            sub_1C71610(NumMissionCondDetail);
          v18 = values->m_Items[v17];
          if ( !v18 )
            goto LABEL_36;
          if ( !v18->fields.valueType )
          {
            v19 = this->fields.data;
            if ( !v19 )
              goto LABEL_36;
            staticCount = this->fields.staticCount;
            missionConditionDetailId = v18->fields.missionConditionDetailId;
            countMax = v19->fields.countMax;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            NumMissionCondDetail = CondType__GetNumMissionCondDetail(missionConditionDetailId, countMax, 0);
            this->fields.staticCount = staticCount + (int)NumMissionCondDetail;
            max_length = values->max_length;
          }
          ++v17;
        }
        while ( (int)v17 < (int)max_length );
        data = p_fields->data;
        if ( !p_fields->data )
          goto LABEL_36;
      }
    }
  }
  NumMissionCondDetail = System_String__IsNullOrEmpty(data->fields.labelColor, 0);
  __asm { FMOV            V0.4S, #1.0 }
  v47 = _Q0;
  if ( (NumMissionCondDetail & 1) != 0 )
    goto LABEL_20;
  if ( !p_fields->data )
    goto LABEL_36;
  NumMissionCondDetail = UnityEngine_ColorUtility__TryParseHtmlString(
                           p_fields->data->fields.labelColor,
                           &this->fields.normalColor,
                           0);
  if ( (NumMissionCondDetail & 1) == 0 )
LABEL_20:
    this->fields.normalColor = v47;
  if ( !p_fields->data )
    goto LABEL_36;
  NumMissionCondDetail = System_String__IsNullOrEmpty(p_fields->data->fields.overBorderColor, 0);
  if ( (NumMissionCondDetail & 1) != 0 )
    goto LABEL_25;
  if ( !p_fields->data )
    goto LABEL_36;
  NumMissionCondDetail = UnityEngine_ColorUtility__TryParseHtmlString(
                           p_fields->data->fields.overBorderColor,
                           &this->fields.overBorderColor,
                           0);
  if ( (NumMissionCondDetail & 1) == 0 )
LABEL_25:
    this->fields.overBorderColor = v47;
  if ( !p_fields->data )
LABEL_36:
    sub_1C71608(NumMissionCondDetail, v13);
  limitTurns = (System_Collections_Generic_IEnumerable_TSource__o *)p_fields->data->fields.limitTurns;
  if ( limitTurns )
  {
    v29 = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo;
    if ( !ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
      v29 = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__int__o *)v29->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__11_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_ExtraBattleUserInterfaceData_LimitTurnData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__11_0,
        v31,
        Method_ExtraBattleUserInterfaceData_LabelDataWrapper___c___ctor_b__11_0__,
        0);
      static_fields = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_ExtraBattleUserInterfaceData_LimitTurnData__int__o *)_9__11_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0,
        (int32_t)_9__11_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 limitTurns,
                                                                 (System_Func_TSource__TKey__o *)_9__11_0,
                                                                 (const MethodInfo_317AEBC *)Method_System_Linq_Enumerable_OrderByDescending_ExtraBattleUserInterfaceData_LimitTurnData__int___);
    v40 = System_Linq_Enumerable__ToArray_object_(
            v39,
            (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LimitTurnData___);
    this->fields.sortedLimitTurns = (struct ExtraBattleUserInterfaceData_LimitTurnData_array *)v40;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.sortedLimitTurns,
      (int32_t)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *v4; // x19
  struct ExtraBattleUserInterfaceData_LabelData_o *v6; // x8
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = value;
  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  v4 = this;
  this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)System_String__IsNullOrEmpty(
                                                              data->fields.valueStringFormat,
                                                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return System_Int32__ToString((int32_t)&v7, 0);
  v6 = v4->fields.data;
  if ( !v6 )
LABEL_7:
    sub_1C71608(this, *(_QWORD *)&value);
  return System_Int32__ToString_65540220((int32_t)&v7, v6->fields.valueStringFormat, 0);
}


ExtraBattleUserInterfaceData_LimitTurnData_o *ExtraBattleUserInterfaceData_LabelDataWrapper__GetCurrentLimitTurnData(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_LimitTurnData_array *sortedLimitTurns; // x10
  int max_length; // w8
  __int64 v5; // x9
  ExtraBattleUserInterfaceData_LimitTurnData_o **m_Items; // x10

  sortedLimitTurns = this->fields.sortedLimitTurns;
  if ( !sortedLimitTurns )
    return 0;
  max_length = sortedLimitTurns->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  m_Items = sortedLimitTurns->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
      sub_1C71610(this);
    this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)m_Items[v5];
    if ( !this )
      sub_1C71608(0, limitTurn);
    if ( SLODWORD(this->fields.data) <= limitTurn )
      break;
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return (ExtraBattleUserInterfaceData_LimitTurnData_o *)this;
}


int32_t ExtraBattleUserInterfaceData_LabelDataWrapper__GetTotalCount(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *v4; // x19
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  struct ExtraBattleUserInterfaceData_ValueData_array *values; // x22
  int max_length; // w8
  int64_t staticCount; // x21
  unsigned int v9; // w23
  ExtraBattleUserInterfaceData_ValueData_o *v10; // x8
  struct ExtraBattleUserInterfaceData_LabelData_o *v11; // x8
  int32_t countBorder; // w9
  int32_t countMax; // w8
  int32_t v14; // w19

  v4 = this;
  if ( (byte_4CCA3BE & 1) == 0 )
  {
    this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)sub_1C713B0(&System_Math_TypeInfo);
    byte_4CCA3BE = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.labelType != 1 )
    return 0;
  values = data->fields.values;
  if ( !values )
    goto LABEL_22;
  max_length = values->max_length;
  staticCount = v4->fields.staticCount;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C71610(this);
      v10 = values->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10->fields.valueType == 1 )
      {
        if ( !battleData )
          break;
        this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)BattleData__GetBattleValueForExBattleUi(
                                                                    battleData,
                                                                    v10->fields.battleValueKey,
                                                                    0);
        staticCount += (int)this;
      }
      max_length = values->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_14;
    }
LABEL_22:
    sub_1C71608(this, battleData);
  }
LABEL_14:
  v11 = v4->fields.data;
  if ( !v11 )
    goto LABEL_22;
  countBorder = v11->fields.countBorder;
  countMax = v11->fields.countMax;
  if ( countBorder >= countMax )
    v14 = countBorder;
  else
    v14 = countMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_65553884(v14, staticCount, 0);
}


bool ExtraBattleUserInterfaceData_LabelDataWrapper__LoadTextAndColorByLatestStats(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        BattleData_o *battleData,
        int32_t addTurn,
        System_String_o **text,
        UnityEngine_Color_o *color,
        System_String_o **animationName,
        ExtraBattleUserInterfaceData_LabelType_array *updateLabelTypes,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *DefaultUpdateLabelTypes; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_o *CurrentLimitTurnData; // x0
  __int64 v22; // x1
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  int32_t labelType; // w26
  ExtraBattleUserInterfaceData_c *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_String_o **p_CurrentAnimationName_k__BackingField; // x25
  const MethodInfo *v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  const MethodInfo *v39; // x2
  int v40; // w9
  int32_t v41; // w23
  struct ExtraBattleUserInterfaceData_LabelData_o *v42; // x8
  System_String_o *v43; // x24
  System_String_o *v44; // x22
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_String_o *monitor; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_String_o *v60; // x1
  System_String_o **v61; // x0
  int32_t TotalCount; // w21
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct ExtraBattleUserInterfaceData_LabelData_o *v71; // x8
  System_String_o *v72; // x23
  System_String_o *v73; // x0
  struct ExtraBattleUserInterfaceData_LabelData_o *v74; // x8
  struct ExtraBattleUserInterfaceData_LabelData_o *v75; // x8
  int32_t v76; // [xsp+Ch] [xbp-54h] BYREF

  DefaultUpdateLabelTypes = (System_Collections_ICollection_o *)updateLabelTypes;
  if ( (byte_4CCA3BF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_ExtraBattleUserInterfaceData_LabelType___);
    sub_1C713B0(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25231/*"{0}"*/);
    sub_1C713B0(&StringLiteral_1041/*"/"*/);
    byte_4CCA3BF = 1;
  }
  *text = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)text,
    0,
    addTurn,
    (int32_t)text,
    (System_String_o *)color,
    (int32_t)animationName,
    (int64_t)updateLabelTypes,
    (System_String_o *)method);
  *color = this->fields.normalColor;
  *animationName = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)animationName, 0, v15, v16, v17, v18, v19, v20);
  data = this->fields.data;
  if ( !data )
    goto LABEL_30;
  labelType = data->fields.labelType;
  if ( BasicHelper__IsNullOrEmpty(DefaultUpdateLabelTypes, 0) )
  {
    v25 = ExtraBattleUserInterfaceData_TypeInfo;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
      v25 = ExtraBattleUserInterfaceData_TypeInfo;
    }
    DefaultUpdateLabelTypes = (System_Collections_ICollection_o *)v25->static_fields->DefaultUpdateLabelTypes;
  }
  if ( !System_Linq_Enumerable__Contains_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)DefaultUpdateLabelTypes,
          labelType,
          (const MethodInfo_3168294 *)Method_System_Linq_Enumerable_Contains_ExtraBattleUserInterfaceData_LabelType___) )
    return 0;
  this->fields._CurrentAnimationName_k__BackingField = 0;
  p_CurrentAnimationName_k__BackingField = &this->fields._CurrentAnimationName_k__BackingField;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurrentAnimationName_k__BackingField,
    0,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( labelType == 1 )
  {
    TotalCount = ExtraBattleUserInterfaceData_LabelDataWrapper__GetTotalCount(this, battleData, v33);
    CurrentLimitTurnData = ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(this, TotalCount, v64);
    v71 = this->fields.data;
    if ( v71 )
    {
      v72 = CurrentLimitTurnData;
      if ( v71->fields.showBorder == 1 )
      {
        v73 = ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(this, v71->fields.countBorder, v65);
        v72 = System_String__Concat_64069988(v72, (System_String_o *)StringLiteral_1041/*"/"*/, v73, 0);
      }
      *text = v72;
      sub_1C71354((GrandQuestFolderBoardItem_o *)text, (int32_t)v72, (int32_t)v65, v66, v67, v68, v69, v70);
      v74 = this->fields.data;
      if ( v74 )
      {
        if ( v74->fields.countBorder <= TotalCount )
          *color = this->fields.overBorderColor;
        return 1;
      }
    }
    goto LABEL_30;
  }
  if ( labelType != 2 )
  {
    v75 = this->fields.data;
    if ( v75 )
    {
      v60 = v75->fields.text;
      v61 = text;
      *text = v60;
      goto LABEL_28;
    }
LABEL_30:
    sub_1C71608(CurrentLimitTurnData, v22);
  }
  if ( !battleData )
    goto LABEL_30;
  v40 = BattleData__GetLimitElapsedTurn(battleData, 0) + addTurn;
  if ( v40 <= 1 )
    v40 = 1;
  v41 = (battleData->fields.limitTurnCount - v40 + 1) & ~((battleData->fields.limitTurnCount - v40 + 1) >> 31);
  CurrentLimitTurnData = (System_String_o *)ExtraBattleUserInterfaceData_LabelDataWrapper__GetCurrentLimitTurnData(
                                              this,
                                              v41,
                                              v39);
  v42 = this->fields.data;
  if ( !v42 )
    goto LABEL_30;
  v43 = v42->fields.text;
  v44 = CurrentLimitTurnData;
  v76 = v41;
  if ( System_String__IsNullOrEmpty(v43, 0) )
    v43 = (System_String_o *)StringLiteral_25231/*"{0}"*/;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
  v46 = System_String__Format(v43, v45, 0);
  *text = v46;
  sub_1C71354((GrandQuestFolderBoardItem_o *)text, (int32_t)v46, v47, v48, v49, v50, v51, v52);
  if ( !v44 )
    return 1;
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)v44[1].klass, color, 0);
  monitor = (System_String_o *)v44[1].monitor;
  *animationName = monitor;
  sub_1C71354((GrandQuestFolderBoardItem_o *)animationName, (int32_t)monitor, v54, v55, v56, v57, v58, v59);
  v60 = *animationName;
  v61 = p_CurrentAnimationName_k__BackingField;
  *p_CurrentAnimationName_k__BackingField = *animationName;
LABEL_28:
  sub_1C71354((GrandQuestFolderBoardItem_o *)v61, (int32_t)v60, (int32_t)v33, v34, v35, v36, v37, v38);
  return 1;
}


int32_t ExtraBattleUserInterfaceData_LabelDataWrapper__get_CountMax(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  int32_t countBorder; // w9
  int32_t countMax; // w8

  data = this->fields.data;
  if ( !data )
    sub_1C71608(this, method);
  countBorder = data->fields.countBorder;
  countMax = data->fields.countMax;
  if ( countBorder >= countMax )
    return countBorder;
  else
    return countMax;
}


System_String_o *ExtraBattleUserInterfaceData_LabelDataWrapper__get_CurrentAnimationName(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentAnimationName_k__BackingField;
}


void ExtraBattleUserInterfaceData_LabelDataWrapper__set_CurrentAnimationName(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CurrentAnimationName_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurrentAnimationName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExtraBattleUserInterfaceData_LabelDataWrapper___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCA3C0 & 1) == 0 )
  {
    sub_1C713B0(&ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
    byte_4CCA3C0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceData_LabelDataWrapper___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExtraBattleUserInterfaceData_LabelDataWrapper___c___ctor(
        ExtraBattleUserInterfaceData_LabelDataWrapper___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ExtraBattleUserInterfaceData_LabelDataWrapper___c____ctor_b__11_0(
        ExtraBattleUserInterfaceData_LabelDataWrapper___c_o *this,
        ExtraBattleUserInterfaceData_LimitTurnData_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C71608(this, 0);
  return v->fields.turn;
}


void ExtraBattleUserInterfaceData_LimitTurnData___ctor(
        ExtraBattleUserInterfaceData_LimitTurnData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData_ValueData___ctor(
        ExtraBattleUserInterfaceData_ValueData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCA3C1 & 1) == 0 )
  {
    sub_1C713B0(&ExtraBattleUserInterfaceData___c_TypeInfo);
    byte_4CCA3C1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ExtraBattleUserInterfaceData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceData___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceData___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ExtraBattleUserInterfaceData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExtraBattleUserInterfaceData___c___ctor(ExtraBattleUserInterfaceData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ExtraBattleUserInterfaceData_LabelDataWrapper_o *ExtraBattleUserInterfaceData___c____ctor_b__25_0(
        ExtraBattleUserInterfaceData___c_o *this,
        ExtraBattleUserInterfaceData_LabelData_o *ld,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4CCA3C2 & 1) == 0 )
  {
    sub_1C713B0(&ExtraBattleUserInterfaceData_LabelDataWrapper_TypeInfo);
    byte_4CCA3C2 = 1;
  }
  v4 = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)sub_1C715FC(ExtraBattleUserInterfaceData_LabelDataWrapper_TypeInfo);
  ExtraBattleUserInterfaceData_LabelDataWrapper___ctor(v4, ld, v5);
  return v4;
}