void ExtraBattleUserInterfaceData___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Il2CppType *v4; // x19
  System_RuntimeTypeHandle_o v5; // x0
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Int32Enum_array *v9; // x0
  struct ExtraBattleUserInterfaceData_StaticFields *static_fields; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C45EE2 & 1) == 0 )
  {
    sub_1C37058(&System_Enum_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Cast_ExtraBattleUserInterfaceData_LabelType___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelType___);
    sub_1C37058(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C37058(&ExtraBattleUserInterfaceData_LabelType___TypeInfo);
    sub_1C37058(&ExtraBattleUserInterfaceData_LabelType_var);
    sub_1C37058(&System_Type_TypeInfo);
    byte_4C45EE2 = 1;
  }
  v1 = sub_1C37100(ExtraBattleUserInterfaceData_LabelType___TypeInfo, 2);
  if ( !v1 )
    sub_1C372B4(0);
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    sub_1C372BC(v1);
  *(_DWORD *)(v1 + 36) = 1;
  ExtraBattleUserInterfaceData_TypeInfo->static_fields->DefaultUpdateLabelTypes = (struct ExtraBattleUserInterfaceData_LabelType_array *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ExtraBattleUserInterfaceData_TypeInfo->static_fields, v1, v2, v3);
  v4 = ExtraBattleUserInterfaceData_LabelType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (intptr_t)v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                              (System_Collections_IEnumerable_o *)Values,
                                                              (const MethodInfo_30F62A4 *)Method_System_Linq_Enumerable_Cast_ExtraBattleUserInterfaceData_LabelType___);
  v9 = System_Linq_Enumerable__ToArray_Int32Enum_(
         v8,
         (const MethodInfo_31271E4 *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelType___);
  static_fields = ExtraBattleUserInterfaceData_TypeInfo->static_fields;
  static_fields->AllLabelTypes = (struct ExtraBattleUserInterfaceData_LabelType_array *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->AllLabelTypes, (int32_t)v9, v11, v12);
}


void ExtraBattleUserInterfaceData___ctor(
        ExtraBattleUserInterfaceData_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_o *value,
        int32_t wave,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_Fields *p_fields; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  long double inited; // q0
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *data; // x24
  System_Collections_Generic_IEnumerable_TSource__o *labels; // x21
  ExtraBattleUserInterfaceData___c_c *v15; // x0
  System_Func_object__object__o *_9__25_0; // x22
  Il2CppObject *v17; // x23
  struct ExtraBattleUserInterfaceData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *IsNullOrEmpty; // x0
  struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *v23; // x1
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *v28; // x8
  System_String_o *assignment; // x0
  System_String_o *v30; // x20
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C45EE1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___);
    sub_1C37058(&Method_System_Enum_TryParse_ExtraBattleUserInterfaceData_AssignmentType___);
    sub_1C37058(&System_Enum_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelDataWrapper___);
    sub_1C37058(&System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__TypeInfo);
    sub_1C37058(&Method_ExtraBattleUserInterfaceData___c___ctor_b__25_0__);
    sub_1C37058(&ExtraBattleUserInterfaceData___c_TypeInfo);
    byte_4C45EE1 = 1;
  }
  result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = value;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, v8, v9);
  data = this->fields.data;
  this->fields._Wave_k__BackingField = wave;
  if ( data && (labels = (System_Collections_Generic_IEnumerable_TSource__o *)data->fields.labels) != 0 )
  {
    v15 = ExtraBattleUserInterfaceData___c_TypeInfo;
    if ( !ExtraBattleUserInterfaceData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData___c_TypeInfo);
      v15 = ExtraBattleUserInterfaceData___c_TypeInfo;
    }
    _9__25_0 = (System_Func_object__object__o *)v15->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = ExtraBattleUserInterfaceData___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__25_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__TypeInfo);
      System_Func_object__object____ctor(_9__25_0, v17, Method_ExtraBattleUserInterfaceData___c___ctor_b__25_0__, 0);
      static_fields = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__o *)_9__25_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 labels,
                                                                 (System_Func_TSource__TResult__o *)_9__25_0,
                                                                 (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper___);
    IsNullOrEmpty = System_Linq_Enumerable__ToArray_object_(
                      v21,
                      (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelDataWrapper___);
    v23 = (struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *)IsNullOrEmpty;
    if ( !this )
LABEL_32:
      sub_1C372B4(IsNullOrEmpty);
  }
  else
  {
    v24 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___;
    v25 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___ + 7);
    if ( !v25 )
    {
      sub_1C877C8(Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C8776C(inited);
    v23 = **(struct ExtraBattleUserInterfaceData_LabelDataWrapper_array ***)(v27 + 184);
  }
  this->fields._Labels_k__BackingField = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Labels_k__BackingField, (int32_t)v23, v10, v11);
  v28 = this->fields.data;
  this->fields._Assignment_k__BackingField = 0;
  if ( v28 )
    assignment = v28->fields.assignment;
  else
    assignment = 0;
  IsNullOrEmpty = (System_Object_array *)System_String__IsNullOrEmpty(assignment, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !p_fields->data )
      goto LABEL_32;
    v30 = p_fields->data->fields.assignment;
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    if ( System_Enum__TryParse_Int32Enum_(
           v30,
           &result,
           (const MethodInfo_30EE79C *)Method_System_Enum_TryParse_ExtraBattleUserInterfaceData_AssignmentType___) )
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
  const MethodInfo *v3; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  if ( (byte_4C45EE3 & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    byte_4C45EE3 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.valueStringFormat = static_fields->Empty;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.valueStringFormat, (int32_t)Empty, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData_LabelDataWrapper___ctor(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        ExtraBattleUserInterfaceData_LabelData_o *value,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_Fields *p_fields; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 NumMissionCondDetail; // x0
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x9
  struct ExtraBattleUserInterfaceData_ValueData_array *values; // x23
  il2cpp_array_size_t max_length; // x8
  __int64 v12; // x24
  ExtraBattleUserInterfaceData_ValueData_o *v13; // x9
  struct ExtraBattleUserInterfaceData_LabelData_o *v14; // x8
  int64_t staticCount; // x27
  int32_t missionConditionDetailId; // w21
  int32_t countMax; // w22
  System_Collections_Generic_IEnumerable_TSource__o *limitTurns; // x20
  ExtraBattleUserInterfaceData_LabelDataWrapper___c_c *v24; // x0
  System_Func_object__int__o *_9__11_0; // x21
  Il2CppObject *v26; // x22
  struct ExtraBattleUserInterfaceData_LabelDataWrapper___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct UnityEngine_Color_o v34; // [xsp+0h] [xbp-60h]

  if ( (byte_4C45EE4 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_ExtraBattleUserInterfaceData_LimitTurnData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LimitTurnData___);
    sub_1C37058(&System_Func_ExtraBattleUserInterfaceData_LimitTurnData__int__TypeInfo);
    sub_1C37058(&Method_ExtraBattleUserInterfaceData_LabelDataWrapper___c___ctor_b__11_0__);
    sub_1C37058(&ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
    byte_4C45EE4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = value;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, v6, v7);
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
        v12 = 0;
        do
        {
          if ( (unsigned int)v12 >= (unsigned int)max_length )
            sub_1C372BC(NumMissionCondDetail);
          v13 = values->m_Items[v12];
          if ( !v13 )
            goto LABEL_36;
          if ( !v13->fields.valueType )
          {
            v14 = this->fields.data;
            if ( !v14 )
              goto LABEL_36;
            staticCount = this->fields.staticCount;
            missionConditionDetailId = v13->fields.missionConditionDetailId;
            countMax = v14->fields.countMax;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            NumMissionCondDetail = CondType__GetNumMissionCondDetail(missionConditionDetailId, countMax, 0);
            this->fields.staticCount = staticCount + (int)NumMissionCondDetail;
            max_length = values->max_length;
          }
          ++v12;
        }
        while ( (int)v12 < (int)max_length );
        data = p_fields->data;
        if ( !p_fields->data )
          goto LABEL_36;
      }
    }
  }
  NumMissionCondDetail = System_String__IsNullOrEmpty(data->fields.labelColor, 0);
  __asm { FMOV            V0.4S, #1.0 }
  v34 = _Q0;
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
    this->fields.normalColor = v34;
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
    this->fields.overBorderColor = v34;
  if ( !p_fields->data )
LABEL_36:
    sub_1C372B4(NumMissionCondDetail);
  limitTurns = (System_Collections_Generic_IEnumerable_TSource__o *)p_fields->data->fields.limitTurns;
  if ( limitTurns )
  {
    v24 = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo;
    if ( !ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
      v24 = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__int__o *)v24->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__11_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ExtraBattleUserInterfaceData_LimitTurnData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__11_0,
        v26,
        Method_ExtraBattleUserInterfaceData_LabelDataWrapper___c___ctor_b__11_0__,
        0);
      static_fields = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_ExtraBattleUserInterfaceData_LimitTurnData__int__o *)_9__11_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v28, v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 limitTurns,
                                                                 (System_Func_TSource__TKey__o *)_9__11_0,
                                                                 (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_ExtraBattleUserInterfaceData_LimitTurnData__int___);
    v31 = System_Linq_Enumerable__ToArray_object_(
            v30,
            (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LimitTurnData___);
    this->fields.sortedLimitTurns = (struct ExtraBattleUserInterfaceData_LimitTurnData_array *)v31;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sortedLimitTurns, (int32_t)v31, v32, v33);
  }
}


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
    sub_1C372B4(this);
  return System_Int32__ToString_65071764((int32_t)&v7, v6->fields.valueStringFormat, 0);
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
      sub_1C372BC(this);
    this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)m_Items[v5];
    if ( !this )
      sub_1C372B4(0);
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
  if ( (byte_4C45EE5 & 1) == 0 )
  {
    this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)sub_1C37058(&System_Math_TypeInfo);
    byte_4C45EE5 = 1;
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
        sub_1C372BC(this);
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
    sub_1C372B4(this);
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
  return System_Math__Min_65085428(v14, staticCount, 0);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *CurrentLimitTurnData; // x0
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  int32_t labelType; // w26
  ExtraBattleUserInterfaceData_c *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_String_o **p_CurrentAnimationName_k__BackingField; // x25
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  int v27; // w9
  int32_t v28; // w23
  struct ExtraBattleUserInterfaceData_LabelData_o *v29; // x8
  System_String_o *v30; // x24
  System_String_o *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_String_o *monitor; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_o *v45; // x1
  System_String_o **v46; // x0
  int32_t TotalCount; // w21
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x3
  struct ExtraBattleUserInterfaceData_LabelData_o *v52; // x8
  System_String_o *v53; // x23
  System_String_o *v54; // x0
  struct ExtraBattleUserInterfaceData_LabelData_o *v55; // x8
  struct ExtraBattleUserInterfaceData_LabelData_o *v56; // x8
  int32_t v57; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C45EE6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_ExtraBattleUserInterfaceData_LabelType___);
    sub_1C37058(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_25101/*"{0}"*/);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C45EE6 = 1;
  }
  *text = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)text, 0, addTurn, (const MethodInfo *)text);
  *color = this->fields.normalColor;
  *animationName = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)animationName, 0, v15, v16);
  data = this->fields.data;
  if ( !data )
    goto LABEL_30;
  labelType = data->fields.labelType;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)updateLabelTypes, 0) )
  {
    v20 = ExtraBattleUserInterfaceData_TypeInfo;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
      v20 = ExtraBattleUserInterfaceData_TypeInfo;
    }
    updateLabelTypes = v20->static_fields->DefaultUpdateLabelTypes;
  }
  if ( !System_Linq_Enumerable__Contains_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)updateLabelTypes,
          labelType,
          (const MethodInfo_3104D04 *)Method_System_Linq_Enumerable_Contains_ExtraBattleUserInterfaceData_LabelType___) )
    return 0;
  this->fields._CurrentAnimationName_k__BackingField = 0;
  p_CurrentAnimationName_k__BackingField = &this->fields._CurrentAnimationName_k__BackingField;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._CurrentAnimationName_k__BackingField, 0, v21, v22);
  if ( labelType == 1 )
  {
    TotalCount = ExtraBattleUserInterfaceData_LabelDataWrapper__GetTotalCount(this, battleData, v24);
    CurrentLimitTurnData = ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(this, TotalCount, v49);
    v52 = this->fields.data;
    if ( v52 )
    {
      v53 = CurrentLimitTurnData;
      if ( v52->fields.showBorder == 1 )
      {
        v54 = ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(this, v52->fields.countBorder, v50);
        v53 = System_String__Concat_63599904(v53, (System_String_o *)StringLiteral_1048/*"/"*/, v54, 0);
      }
      *text = v53;
      sub_1C36FFC((CGThumbnailListItem_o *)text, (int32_t)v53, (int32_t)v50, v51);
      v55 = this->fields.data;
      if ( v55 )
      {
        if ( v55->fields.countBorder <= TotalCount )
          *color = this->fields.overBorderColor;
        return 1;
      }
    }
    goto LABEL_30;
  }
  if ( labelType != 2 )
  {
    v56 = this->fields.data;
    if ( v56 )
    {
      v45 = v56->fields.text;
      v46 = text;
      *text = v45;
      goto LABEL_28;
    }
LABEL_30:
    sub_1C372B4(CurrentLimitTurnData);
  }
  if ( !battleData )
    goto LABEL_30;
  v27 = BattleData__GetLimitElapsedTurn(battleData, 0) + addTurn;
  if ( v27 <= 1 )
    v27 = 1;
  v28 = (battleData->fields.limitTurnCount - v27 + 1) & ~((battleData->fields.limitTurnCount - v27 + 1) >> 31);
  CurrentLimitTurnData = (System_String_o *)ExtraBattleUserInterfaceData_LabelDataWrapper__GetCurrentLimitTurnData(
                                              this,
                                              v28,
                                              v26);
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_30;
  v30 = v29->fields.text;
  v31 = CurrentLimitTurnData;
  v57 = v28;
  if ( System_String__IsNullOrEmpty(v30, 0) )
    v30 = (System_String_o *)StringLiteral_25101/*"{0}"*/;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v32, v33, v34, v35, v36, v37);
  v39 = System_String__Format(v30, v38, 0);
  *text = v39;
  sub_1C36FFC((CGThumbnailListItem_o *)text, (int32_t)v39, v40, v41);
  if ( !v31 )
    return 1;
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)v31[1].klass, color, 0);
  monitor = (System_String_o *)v31[1].monitor;
  *animationName = monitor;
  sub_1C36FFC((CGThumbnailListItem_o *)animationName, (int32_t)monitor, v43, v44);
  v45 = *animationName;
  v46 = p_CurrentAnimationName_k__BackingField;
  *p_CurrentAnimationName_k__BackingField = *animationName;
LABEL_28:
  sub_1C36FFC((CGThumbnailListItem_o *)v46, (int32_t)v45, (int32_t)v24, v25);
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
    sub_1C372B4(this);
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
  const MethodInfo *v3; // x3

  this->fields._CurrentAnimationName_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._CurrentAnimationName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ExtraBattleUserInterfaceData_LabelDataWrapper___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45EE7 & 1) == 0 )
  {
    sub_1C37058(&ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
    byte_4C45EE7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceData_LabelDataWrapper___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C372B4(this);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C45EE8 & 1) == 0 )
  {
    sub_1C37058(&ExtraBattleUserInterfaceData___c_TypeInfo);
    byte_4C45EE8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ExtraBattleUserInterfaceData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceData___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceData___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ExtraBattleUserInterfaceData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C45EE9 & 1) == 0 )
  {
    sub_1C37058(&ExtraBattleUserInterfaceData_LabelDataWrapper_TypeInfo);
    byte_4C45EE9 = 1;
  }
  v4 = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)sub_1C372A4(ExtraBattleUserInterfaceData_LabelDataWrapper_TypeInfo);
  ExtraBattleUserInterfaceData_LabelDataWrapper___ctor(v4, ld, v5);
  return v4;
}