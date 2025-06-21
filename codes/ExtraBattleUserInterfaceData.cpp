void __fastcall ExtraBattleUserInterfaceData___ctor(
        ExtraBattleUserInterfaceData_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_o *value,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  long double inited; // q0
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *data; // x23
  System_Collections_Generic_IEnumerable_TSource__o *labels; // x20
  ExtraBattleUserInterfaceData___c_c *v19; // x0
  System_Func_object__object__o *_9__18_0; // x21
  Il2CppObject *v21; // x22
  struct ExtraBattleUserInterfaceData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Object_array *v26; // x0
  struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *v27; // x1
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_4B1F332 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___, value);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper___,
      v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelDataWrapper___, v8);
    sub_1BCAFF8(
      &System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__TypeInfo,
      v9);
    sub_1BCAFF8(&Method_ExtraBattleUserInterfaceData___c___ctor_b__18_0__, v10);
    sub_1BCAFF8(&ExtraBattleUserInterfaceData___c_TypeInfo, v11);
    byte_4B1F332 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, v12, v13);
  data = this->fields.data;
  this->fields._Wave_k__BackingField = wave;
  if ( data && (labels = (System_Collections_Generic_IEnumerable_TSource__o *)data->fields.labels) != 0LL )
  {
    v19 = ExtraBattleUserInterfaceData___c_TypeInfo;
    if ( !ExtraBattleUserInterfaceData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData___c_TypeInfo);
      v19 = ExtraBattleUserInterfaceData___c_TypeInfo;
    }
    _9__18_0 = (System_Func_object__object__o *)v19->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = ExtraBattleUserInterfaceData___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__18_0 = (System_Func_object__object__o *)sub_1BCB244(System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__TypeInfo);
      System_Func_object__object____ctor(_9__18_0, v21, Method_ExtraBattleUserInterfaceData___c___ctor_b__18_0__, 0LL);
      static_fields = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = (struct System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__o *)_9__18_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v23, v24);
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 labels,
                                                                 (System_Func_TSource__TResult__o *)_9__18_0,
                                                                 (const MethodInfo_304EFCC *)Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper___);
    v26 = System_Linq_Enumerable__ToArray_object_(
            v25,
            (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelDataWrapper___);
    v27 = (struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *)v26;
    if ( !this )
      sub_1BCB254(v26, v26);
  }
  else
  {
    v28 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___;
    v29 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___ + 7);
    if ( !v29 )
    {
      sub_1C1B4B8(Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___);
      v29 = v28[7];
    }
    v30 = *(_QWORD *)(v29 + 16);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1C1B45C(inited);
    if ( !*(_DWORD *)(v30 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v30);
    v31 = *(_QWORD *)(v28[7] + 16LL);
    if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
      v31 = sub_1C1B45C(inited);
    v27 = **(struct ExtraBattleUserInterfaceData_LabelDataWrapper_array ***)(v31 + 184);
  }
  this->fields._Labels_k__BackingField = v27;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Labels_k__BackingField, (int32_t)v27, v14, v15);
}


System_String_o *__fastcall ExtraBattleUserInterfaceData__get_AssetPath(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.asset;
  else
    return 0LL;
}


bool __fastcall ExtraBattleUserInterfaceData__get_IsFromQuestPhase(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  return this->fields._Wave_k__BackingField == -999;
}


ExtraBattleUserInterfaceData_LabelDataWrapper_array *__fastcall ExtraBattleUserInterfaceData__get_Labels(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  return this->fields._Labels_k__BackingField;
}


int32_t __fastcall ExtraBattleUserInterfaceData__get_Wave(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  return this->fields._Wave_k__BackingField;
}


void __fastcall ExtraBattleUserInterfaceData_JsonConvertData___ctor(
        ExtraBattleUserInterfaceData_JsonConvertData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExtraBattleUserInterfaceData_LabelData___ctor(
        ExtraBattleUserInterfaceData_LabelData_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  if ( (byte_4B1F333 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    byte_4B1F333 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.valueStringFormat = static_fields->Empty;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.valueStringFormat, (int32_t)Empty, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExtraBattleUserInterfaceData_LabelDataWrapper___ctor(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        ExtraBattleUserInterfaceData_LabelData_o *value,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_Fields *p_fields; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 NumMissionCondDetail; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x9
  struct ExtraBattleUserInterfaceData_ValueData_array *values; // x23
  __int64 v13; // x8
  __int64 v14; // x24
  ExtraBattleUserInterfaceData_ValueData_o *v15; // x9
  struct ExtraBattleUserInterfaceData_LabelData_o *v16; // x8
  int64_t staticCount; // x27
  int32_t missionConditionDetailId; // w21
  int32_t countMax; // w22
  struct UnityEngine_Color_o v25; // [xsp+0h] [xbp-60h]

  if ( (byte_4B1F334 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, value);
    byte_4B1F334 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = value;
  p_fields = &this->fields;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, v6, v7);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( data->fields.labelType == 1 )
  {
    values = data->fields.values;
    if ( values )
    {
      v13 = *(_QWORD *)&values->max_length;
      if ( (int)v13 >= 1 )
      {
        v14 = 0LL;
        do
        {
          if ( (unsigned int)v14 >= (unsigned int)v13 )
            sub_1BCB25C(NumMissionCondDetail, v9, v10);
          v15 = values->m_Items[v14];
          if ( !v15 )
            goto LABEL_27;
          if ( !v15->fields.valueType )
          {
            v16 = this->fields.data;
            if ( !v16 )
              goto LABEL_27;
            staticCount = this->fields.staticCount;
            missionConditionDetailId = v15->fields.missionConditionDetailId;
            countMax = v16->fields.countMax;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            NumMissionCondDetail = CondType__GetNumMissionCondDetail(missionConditionDetailId, countMax, 0LL);
            this->fields.staticCount = staticCount + (int)NumMissionCondDetail;
            v13 = *(_QWORD *)&values->max_length;
          }
          ++v14;
        }
        while ( (int)v14 < (int)v13 );
        data = p_fields->data;
        if ( !p_fields->data )
          goto LABEL_27;
      }
    }
  }
  NumMissionCondDetail = System_String__IsNullOrEmpty(data->fields.labelColor, 0LL);
  __asm { FMOV            V0.4S, #1.0 }
  v25 = _Q0;
  if ( (NumMissionCondDetail & 1) != 0 )
    goto LABEL_20;
  if ( !p_fields->data )
    goto LABEL_27;
  NumMissionCondDetail = UnityEngine_ColorUtility__TryParseHtmlString(
                           p_fields->data->fields.labelColor,
                           &this->fields.normalColor,
                           0LL);
  if ( (NumMissionCondDetail & 1) == 0 )
LABEL_20:
    this->fields.normalColor = v25;
  if ( !p_fields->data )
LABEL_27:
    sub_1BCB254(NumMissionCondDetail, v9);
  NumMissionCondDetail = System_String__IsNullOrEmpty(p_fields->data->fields.overBorderColor, 0LL);
  if ( (NumMissionCondDetail & 1) == 0 )
  {
    if ( p_fields->data )
    {
      if ( UnityEngine_ColorUtility__TryParseHtmlString(
             p_fields->data->fields.overBorderColor,
             &this->fields.overBorderColor,
             0LL) )
      {
        return;
      }
      goto LABEL_25;
    }
    goto LABEL_27;
  }
LABEL_25:
  this->fields.overBorderColor = v25;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(
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
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = v4->fields.data;
  if ( !v6 )
LABEL_7:
    sub_1BCB254(this, *(_QWORD *)&value);
  return System_Int32__ToString_63959136((int32_t)&v7, v6->fields.valueStringFormat, 0LL);
}


int32_t __fastcall ExtraBattleUserInterfaceData_LabelDataWrapper__GetTotalCount(
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
  if ( (byte_4B1F335 & 1) == 0 )
  {
    this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)sub_1BCAFF8(&System_Math_TypeInfo, battleData);
    byte_4B1F335 = 1;
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
        sub_1BCB25C(this, battleData, method);
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
                                                                    0LL);
        staticCount += (int)this;
      }
      max_length = values->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_14;
    }
LABEL_22:
    sub_1BCB254(this, battleData);
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
  return System_Math__Min_63972800(v14, staticCount, 0LL);
}


void __fastcall ExtraBattleUserInterfaceData_LabelDataWrapper__LoadTextAndColorByLatestStats(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        BattleData_o *battleData,
        System_String_o **text,
        UnityEngine_Color_o *color,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *v8; // x20
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  int32_t TotalCount; // w22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  struct ExtraBattleUserInterfaceData_LabelData_o *v14; // x8
  System_String_o *v15; // x23
  System_String_o *v16; // x0
  struct ExtraBattleUserInterfaceData_LabelData_o *v17; // x8
  System_String_o *v18; // x1

  v8 = this;
  if ( (byte_4B1F336 & 1) == 0 )
  {
    this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)sub_1BCAFF8(&StringLiteral_1039/*"/"*/, battleData);
    byte_4B1F336 = 1;
  }
  *color = v8->fields.normalColor;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_13;
  if ( data->fields.labelType != 1 )
  {
    v18 = data->fields.text;
    *text = v18;
    sub_1BCAF9C((CGThumbnailListItem_o *)text, (int32_t)v18, (int32_t)text, (const MethodInfo *)color);
    return;
  }
  TotalCount = ExtraBattleUserInterfaceData_LabelDataWrapper__GetTotalCount(v8, battleData, (const MethodInfo *)text);
  this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(
                                                              v8,
                                                              TotalCount,
                                                              v11);
  v14 = v8->fields.data;
  if ( !v14 )
    goto LABEL_13;
  v15 = (System_String_o *)this;
  if ( v14->fields.showBorder == 1 )
  {
    v16 = ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(v8, v14->fields.countBorder, v12);
    v15 = System_String__Concat_62488672(v15, (System_String_o *)StringLiteral_1039/*"/"*/, v16, 0LL);
  }
  *text = v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)text, (int32_t)v15, (int32_t)v12, v13);
  v17 = v8->fields.data;
  if ( !v17 )
LABEL_13:
    sub_1BCB254(this, battleData);
  if ( v17->fields.countBorder <= TotalCount )
    *color = v8->fields.overBorderColor;
}


int32_t __fastcall ExtraBattleUserInterfaceData_LabelDataWrapper__get_CountMax(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  int32_t countBorder; // w9
  int32_t countMax; // w8

  data = this->fields.data;
  if ( !data )
    sub_1BCB254(this, method);
  countBorder = data->fields.countBorder;
  countMax = data->fields.countMax;
  if ( countBorder >= countMax )
    return countBorder;
  else
    return countMax;
}


void __fastcall ExtraBattleUserInterfaceData_ValueData___ctor(
        ExtraBattleUserInterfaceData_ValueData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ExtraBattleUserInterfaceData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1F337 & 1) == 0 )
  {
    sub_1BCAFF8(&ExtraBattleUserInterfaceData___c_TypeInfo, v1);
    byte_4B1F337 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ExtraBattleUserInterfaceData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ExtraBattleUserInterfaceData___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceData___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ExtraBattleUserInterfaceData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ExtraBattleUserInterfaceData___c___ctor(
        ExtraBattleUserInterfaceData___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ExtraBattleUserInterfaceData_LabelDataWrapper_o *__fastcall ExtraBattleUserInterfaceData___c____ctor_b__18_0(
        ExtraBattleUserInterfaceData___c_o *this,
        ExtraBattleUserInterfaceData_LabelData_o *ld,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B1F338 & 1) == 0 )
  {
    sub_1BCAFF8(&ExtraBattleUserInterfaceData_LabelDataWrapper_TypeInfo, ld);
    byte_4B1F338 = 1;
  }
  v4 = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)sub_1BCB244(ExtraBattleUserInterfaceData_LabelDataWrapper_TypeInfo);
  ExtraBattleUserInterfaceData_LabelDataWrapper___ctor(v4, ld, v5);
  return v4;
}