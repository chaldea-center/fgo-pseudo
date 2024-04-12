void __fastcall SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *v9; // x19
  SkillDetailParamFormatResolver_NumericFormatData_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  SkillDetailParamFormatResolver_NumericFormatData_o *v13; // x20
  SkillDetailParamFormatResolver_NumericFormatData_o *v14; // x20
  struct SkillDetailParamFormatResolver_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42B0D1D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
    sub_B52984(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_B52984(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B52984(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B52984(&StringLiteral_15975/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/);
    byte_42B0D1D = 1;
  }
  v1 = (System_Text_RegularExpressions_Regex_o *)sub_B52A54(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_48443180(v1, (System_String_o *)StringLiteral_15975/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)sub_B52A54(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData____ctor(
    v9,
    (const MethodInfo_2EA3C40 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v10 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B52A54(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v10, 1, 0, 0LL);
  if ( !v9 )
    sub_B52A5C(v11, v12);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v9,
    0x64u,
    v10,
    (const MethodInfo_2EA47F4 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v13 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B52A54(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v13, 10, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v9,
    0x6Du,
    v13,
    (const MethodInfo_2EA47F4 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v14 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B52A54(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v14, 100, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v9,
    0x79u,
    v14,
    (const MethodInfo_2EA47F4 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v15 = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  v15->NumericFormatDict = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&v15->NumericFormatDict,
    (System_Int32_array **)v9,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


System_String_o *__fastcall SkillDetailParamFormatResolver__Apply(
        System_String_o *detailText,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  SkillDetailParamFormatResolver_c *v20; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v22; // x22

  if ( (byte_42B0D17 & 1) == 0 )
  {
    sub_B52984(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_B52984(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B52984(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__);
    sub_B52984(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
    sub_B52984(&StringLiteral_23873/*"{{"*/);
    byte_42B0D17 = 1;
  }
  v5 = sub_B52A54(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
  SkillDetailParamFormatResolver___c__DisplayClass11_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass11_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = skillLvEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)skillLvEntity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23873/*"{{"*/, 0LL) )
  {
    *(_QWORD *)(v5 + 16) = 0LL;
    sub_B52920((BattleServantConfConponent_o *)(v5 + 16), 0LL, v14, v15, v16, v17, v18, v19);
    v20 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v20 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v20->static_fields->ParamFormatRegex;
    v22 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B52A54(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v22,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_48451172(ParamFormatRegex, detailText, v22, 0LL);
LABEL_12:
    sub_B52A5C(v6, v7);
  }
  return detailText;
}


System_String_o *__fastcall SkillDetailParamFormatResolver__ApplyGivenValues(
        System_String_o *detailText,
        System_Int32_array *values,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  SkillDetailParamFormatResolver_c *v14; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v16; // x22

  if ( (byte_42B0D18 & 1) == 0 )
  {
    sub_B52984(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_B52984(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B52984(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__);
    sub_B52984(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
    sub_B52984(&StringLiteral_23873/*"{{"*/);
    byte_42B0D18 = 1;
  }
  v5 = sub_B52A54(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
  SkillDetailParamFormatResolver___c__DisplayClass12_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = values;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)values, v8, v9, v10, v11, v12, v13);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23873/*"{{"*/, 0LL) )
  {
    v14 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v14 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v14->static_fields->ParamFormatRegex;
    v16 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B52A54(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v16,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_48451172(ParamFormatRegex, detailText, v16, 0LL);
LABEL_12:
    sub_B52A5C(v6, v7);
  }
  return detailText;
}


void __fastcall SkillDetailParamFormatResolver__AssertFailed(
        System_Text_RegularExpressions_Match_o *matchObj,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  System_String_o *Value; // x0
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  int32_t skillDetailId; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B0D1C & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_12984/*"SkillId({0}),Lv({1}),DetailId({2})"*/);
    byte_42B0D1C = 1;
  }
  if ( matchObj )
  {
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
    if ( ent )
    {
      if ( Value )
      {
        skillId = ent->fields.skillId;
        v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillId);
        lv = ent->fields.lv;
        v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        skillDetailId = ent->fields.skillDetailId;
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillDetailId);
        System_String__Format_44569380((System_String_o *)StringLiteral_12984/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v6, v7, v8, 0LL);
      }
    }
  }
}


bool __fastcall SkillDetailParamFormatResolver__TryGetFuncIndex(
        int32_t *funcIndex,
        int32_t *endFuncIndex,
        System_String_o *rawString,
        const MethodInfo *method)
{
  int32_t *v6; // x20
  System_String_o *v7; // x0
  int32_t *v8; // x1
  int32_t *v9; // x21
  bool result; // w0
  __int64 v11; // x0

  v6 = funcIndex;
  if ( (byte_42B0D19 & 1) == 0 )
  {
    funcIndex = (int32_t *)sub_B52984(&char___TypeInfo);
    byte_42B0D19 = 1;
  }
  *endFuncIndex = 0;
  if ( !rawString )
    goto LABEL_17;
  if ( rawString->fields.m_stringLength == 1 )
  {
    v7 = rawString;
    v8 = v6;
    goto LABEL_6;
  }
  funcIndex = (int32_t *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !funcIndex )
    goto LABEL_17;
  if ( !funcIndex[6] )
    goto LABEL_18;
  *((_WORD *)funcIndex + 16) = 95;
  funcIndex = (int32_t *)System_String__Split(rawString, (System_Char_array *)funcIndex, 0LL);
  if ( !funcIndex )
LABEL_17:
    sub_B52A5C(funcIndex, endFuncIndex);
  v9 = funcIndex;
  if ( !funcIndex[6] )
  {
LABEL_18:
    v11 = sub_B52A88(funcIndex);
    sub_B52A28(v11, 0LL);
  }
  if ( System_Int32__TryParse(*((System_String_o **)funcIndex + 4), v6, 0LL) )
  {
    if ( v9[6] < 2 )
      goto LABEL_14;
    v7 = (System_String_o *)*((_QWORD *)v9 + 5);
    v8 = endFuncIndex;
LABEL_6:
    if ( !System_Int32__TryParse(v7, v8, 0LL) )
      return 0;
LABEL_14:
    result = 1;
    --*v6;
    --*endFuncIndex;
    return result;
  }
  return 0;
}


bool __fastcall SkillDetailParamFormatResolver__TryGetFuncParamValue(
        int32_t *value,
        System_String_o *valsKeyStr,
        DataVals_o *vals,
        const MethodInfo *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x19
  SkillDetailParamFormatResolver_c *v15; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_42B0D1A & 1) == 0 )
  {
    sub_B52984(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B52984(&StringLiteral_15989/*"]が取れませんでした"*/);
    sub_B52984(&StringLiteral_22646/*"svalsから["*/);
    byte_42B0D1A = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v14 = (System_Int32_array **)System_String__Concat_44570600(
                                   (System_String_o *)StringLiteral_22646/*"svalsから["*/,
                                   valsKeyStr,
                                   (System_String_o *)StringLiteral_15989/*"]が取れませんでした"*/,
                                   0LL);
    v15 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v15 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->evaluationErrorMessage = (struct System_String_o *)v14;
    sub_B52920((BattleServantConfConponent_o *)&static_fields->evaluationErrorMessage, v14, v8, v9, v10, v11, v12, v13);
  }
  return 0;
}


bool __fastcall SkillDetailParamFormatResolver__TryGetNumericFormat(
        SkillDetailParamFormatResolver_NumericFormatData_o **numericFormatData,
        int32_t *fractionalDigit,
        System_String_o *formatKey,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *Chars; // x0
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *monitor; // x22
  bool v9; // w21
  uint16_t v10; // w0
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 *v13; // x8
  Il2CppObject *v14; // x2
  Il2CppObject *v15; // x1
  SkillDetailParamFormatResolver_c *v16; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v18; // x8
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__15_0; // x22
  System_String_o *v21; // x21
  Il2CppObject *v22; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_string__o *v30; // x0
  System_String_o *v31; // x20
  __int64 v32; // x0
  System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  SkillDetailParamFormatResolver_c *v40; // x8
  System_Int32_array **v41; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v42; // x0
  int v44; // [xsp+Ch] [xbp-44h] BYREF
  int v45; // [xsp+18h] [xbp-38h] BYREF
  uint16_t v46; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B0D1B & 1) == 0 )
  {
    sub_B52984(&char_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
    sub_B52984(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_B52984(&Method_System_Func_char__string___ctor__);
    sub_B52984(&System_Func_char__string__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B52984(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__);
    sub_B52984(&SkillDetailParamFormatResolver___c_TypeInfo);
    sub_B52984(&StringLiteral_24070/*"指定可能な少数点以下の桁数は({0}～{1})です"*/);
    sub_B52984(&StringLiteral_24082/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/);
    sub_B52984(&StringLiteral_709/*","*/);
    byte_42B0D1B = 1;
  }
  *fractionalDigit = 0;
  Chars = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)SkillDetailParamFormatResolver_TypeInfo;
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    Chars = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)SkillDetailParamFormatResolver_TypeInfo;
  }
  if ( !formatKey )
    goto LABEL_31;
  monitor = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)Chars[2].fields.entries->obj.monitor;
  Chars = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)System_String__get_Chars(formatKey, 0, 0LL);
  if ( !monitor )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___TryGetValue(
          monitor,
          (uint16_t)Chars,
          numericFormatData,
          (const MethodInfo_2EA6518 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v16 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v16 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = v16->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___get_Keys(
               Chars,
               (const MethodInfo_2EA4400 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v18 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( (BYTE3(SkillDetailParamFormatResolver___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v18 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__15_0 = static_fields->__9__15_0;
      v21 = (System_String_o *)StringLiteral_709/*","*/;
      if ( !_9__15_0 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__15_0 = (System_Func_char__string__o *)sub_B52A54(System_Func_char__string__TypeInfo);
        System_Func_char__string____ctor(
          _9__15_0,
          v22,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          (const MethodInfo_2783A10 *)Method_System_Func_char__string___ctor__);
        v23 = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        v23->__9__15_0 = _9__15_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v23->__9__15_0,
          (System_Int32_array **)_9__15_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      v30 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_1B682EC *)Method_System_Linq_Enumerable_Select_char__string___);
      v31 = System_String__Join_44623760(v21, v30, 0LL);
      v46 = System_String__get_Chars(formatKey, 0, 0LL);
      v32 = j_il2cpp_value_box_0(char_TypeInfo, &v46);
      v13 = &StringLiteral_24082/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v15 = (Il2CppObject *)v32;
      v14 = (Il2CppObject *)v31;
      goto LABEL_25;
    }
LABEL_31:
    sub_B52A5C(Chars, fractionalDigit);
  }
  if ( formatKey->fields.m_stringLength < 2 )
    return 1;
  v9 = 1;
  v10 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v10 - 48;
  if ( (unsigned __int16)(v10 - 49) >= 3u )
  {
    v45 = 1;
    v11 = j_il2cpp_value_box_0(int_TypeInfo, &v45);
    v44 = 3;
    v12 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
    v13 = &StringLiteral_24070/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v14 = (Il2CppObject *)v12;
    v15 = (Il2CppObject *)v11;
LABEL_25:
    v33 = System_String__Format_44563852((System_String_o *)*v13, v15, v14, 0LL);
    v40 = SkillDetailParamFormatResolver_TypeInfo;
    v41 = (System_Int32_array **)v33;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v40 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v42 = v40->static_fields;
    v42->evaluationErrorMessage = (struct System_String_o *)v41;
    sub_B52920((BattleServantConfConponent_o *)&v42->evaluationErrorMessage, v41, v34, v35, v36, v37, v38, v39);
    return 0;
  }
  return v9;
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache___ctor(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SkillLvEntity_k__BackingField = skillLvEntity;
  sub_B52920(&this->fields);
}


DataVals_o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        int32_t endFuncIndex,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  System_Object_array *RootSkillValsArray; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *EndSkillValsDict; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v20; // x0
  Il2CppObject *v22; // x0
  __int64 v23; // x0
  int v24; // [xsp+4h] [xbp-3Ch] BYREF
  int v25; // [xsp+8h] [xbp-38h] BYREF
  int v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42AD3C7 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_DataVals___);
    sub_B52984(&Method_BasicHelper_IsValidIndex_DataVals___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23838/*"{0}_{1})に該当する効果が存在しません"*/);
    sub_B52984(&StringLiteral_23861/*"{0}番目の効果が存在しません"*/);
    byte_42AD3C7 = 1;
  }
  *errorMessage = 0LL;
  sub_B52920(errorMessage);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v9);
  if ( BasicHelper__IsValidIndex_object__27541804(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_1A4412C *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v11);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)EndSkillValsDict,
              funcIndex,
              (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v15);
        EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v16);
        if ( !EndSkillValsDict )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 EndSkillValsDict,
                 funcIndex,
                 (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__27541804(
                (System_Object_array *)Item,
                endFuncIndex,
                (const MethodInfo_1A4412C *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v25 = funcIndex + 1;
          v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
          v24 = endFuncIndex + 1;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
          *errorMessage = System_String__Format_44563852((System_String_o *)StringLiteral_23838/*"{0}_{1})に該当する効果が存在しません"*/, v18, v19, 0LL);
          sub_B52920(errorMessage);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v14);
      if ( EndSkillValsDict )
      {
        v20 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                EndSkillValsDict,
                funcIndex,
                (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v20,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_1A43FCC *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_B52A5C(EndSkillValsDict, v13);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(this, v11);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields.entries) <= funcIndex )
    {
      v23 = sub_B52A88(EndSkillValsDict);
      sub_B52A28(v23, 0LL);
    }
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields.count + funcIndex);
  }
  else
  {
    v26 = funcIndex + 1;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    *errorMessage = System_String__Format((System_String_o *)StringLiteral_23861/*"{0}番目の効果が存在しません"*/, v22, 0LL);
    sub_B52920(errorMessage);
    return 0LL;
  }
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  FunctionMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *RootSkillValsArray; // x0
  __int64 v8; // x1
  WarBoardAIRoute_RouteData_o *EndSkillValsArrayFromRootValsForDisplay; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x0

  if ( (byte_42AD3C8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
    byte_42AD3C8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (FunctionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                                    this,
                                                                                                    v6);
  if ( !RootSkillValsArray )
    goto LABEL_11;
  if ( LODWORD(RootSkillValsArray->fields.entries) <= funcIndex )
  {
    v11 = sub_B52A88(RootSkillValsArray);
    sub_B52A28(v11, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster
    || (EndSkillValsArrayFromRootValsForDisplay = (WarBoardAIRoute_RouteData_o *)FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                                                   Master_WarQuestSelectionMaster,
                                                                                   *((DataVals_o **)&RootSkillValsArray->fields.count
                                                                                   + funcIndex),
                                                                                   0LL),
        (RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v10)) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(RootSkillValsArray, v8);
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    RootSkillValsArray,
    funcIndex,
    EndSkillValsArrayFromRootValsForDisplay,
    (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__DataVals____o **p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1

  if ( (byte_42AD3C6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    byte_42AD3C6 = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = &this->fields.endSkillValsDict;
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v4,
      (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    *p_endSkillValsDict = (struct System_Collections_Generic_Dictionary_int__DataVals____o *)v4;
    sub_B52920(p_endSkillValsDict);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v4;
}


DataVals_array *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  struct DataVals_array **p_rootSkillValsArray; // x19
  DataVals_array *rootSkillValsArray; // x20
  SkillLvEntity_o *SkillLvEntity_k__BackingField; // x0

  p_rootSkillValsArray = &this->fields.rootSkillValsArray;
  rootSkillValsArray = this->fields.rootSkillValsArray;
  if ( !rootSkillValsArray )
  {
    SkillLvEntity_k__BackingField = this->fields._SkillLvEntity_k__BackingField;
    if ( !SkillLvEntity_k__BackingField )
      sub_B52A5C(0LL, method);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0LL);
    *p_rootSkillValsArray = rootSkillValsArray;
    sub_B52920(p_rootSkillValsArray);
  }
  return rootSkillValsArray;
}


SkillLvEntity_o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_SkillLvEntity(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillLvEntity_k__BackingField;
}


void __fastcall SkillDetailParamFormatResolver_NumericFormatData___ctor(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        int32_t shiftDigit,
        int32_t suffixType,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.shiftDigit = shiftDigit;
  this->fields.suffixType = suffixType;
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        int32_t value,
        int32_t fractionalDigit,
        const MethodInfo *method)
{
  int32_t shiftDigit; // w8
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  double v10; // d0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x1
  System_String_o *v13; // x20
  System_String_o *SuffixStr; // x0
  int32_t v16; // [xsp+0h] [xbp-30h] BYREF
  int v17; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o format; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AD3CB & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_19079/*"f{0}"*/);
    byte_42AD3CB = 1;
  }
  format.klass = 0LL;
  v17 = 0;
  shiftDigit = this->fields.shiftDigit;
  if ( fractionalDigit < 1 )
  {
    v17 = value / shiftDigit;
    v11 = System_Int32__ToString((int32_t)&v17, 0LL);
  }
  else
  {
    *(double *)&format.klass = (double)value / (double)shiftDigit;
    v16 = fractionalDigit;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v9 = System_String__Format((System_String_o *)StringLiteral_19079/*"f{0}"*/, v8, 0LL);
    v11 = System_Double__ToString_44512012(v10, &format, (const MethodInfo *)v9);
  }
  v13 = v11;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v12);
  return System_String__Concat_44568316(v13, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver_NumericFormatData_o *v2; // x19

  v2 = this;
  if ( (byte_42AD3CA & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B52984(&string_TypeInfo);
    byte_42AD3CA = 1;
  }
  if ( v2->fields.suffixType == 1 )
    return SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr((const MethodInfo *)this);
  else
    return string_TypeInfo->static_fields->Empty;
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr(const MethodInfo *method)
{
  System_String_o *percentStr; // x19
  struct SkillDetailParamFormatResolver_NumericFormatData_StaticFields *static_fields; // x8

  if ( (byte_42AD3C9 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_B52984(&StringLiteral_6580/*"FUNC_VALUE_PERCENT"*/);
    byte_42AD3C9 = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6580/*"FUNC_VALUE_PERCENT"*/, 0LL);
    static_fields = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields;
    static_fields->percentStr = percentStr;
    sub_B52920(static_fields);
  }
  return percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x0

  if ( (byte_42AD3C3 & 1) == 0 )
  {
    sub_B52984(&SkillDetailParamFormatResolver___c_TypeInfo);
    byte_42AD3C3 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(SkillDetailParamFormatResolver___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall SkillDetailParamFormatResolver___c___ctor(
        SkillDetailParamFormatResolver___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver___c___TryGetNumericFormat_b__15_0(
        SkillDetailParamFormatResolver___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


void __fastcall SkillDetailParamFormatResolver___c__DisplayClass11_0___ctor(
        SkillDetailParamFormatResolver___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver___c__DisplayClass11_0___Apply_g__Evaluator_0(
        SkillDetailParamFormatResolver___c__DisplayClass11_0_o *this,
        System_Text_RegularExpressions_Match_o *matchObj,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  struct SkillLvEntity_o *skillLvEntity; // x22
  Il2CppObject *v7; // x23
  SkillDetailParamFormatResolver_c *v8; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
  __int64 v11; // x1
  long double v12; // q0
  System_Text_RegularExpressions_GroupCollection_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x22
  const MethodInfo *v16; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x23
  int32_t v18; // w20
  int32_t v19; // w22
  DataVals_o *v20; // x0
  DataVals_o *v21; // x20
  System_String_o *v22; // x21
  const MethodInfo *v23; // x3
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  __int64 value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42AD3C4 & 1) == 0 )
  {
    sub_B52984(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    sub_B52984(&SkillDetailParamFormatResolver_TypeInfo);
    byte_42AD3C4 = 1;
  }
  numericFormatData = 0LL;
  value = 0LL;
  *(_QWORD *)endFuncIndex = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v7 = (Il2CppObject *)sub_B52A54(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    System_Object___ctor(v7, 0LL);
    v7[1].klass = (Il2CppClass *)skillLvEntity;
    sub_B52920(&v7[1]);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v7;
    sub_B52920(&this->fields);
  }
  v8 = SkillDetailParamFormatResolver_TypeInfo;
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v8 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->evaluationErrorMessage = 0LL;
  *(__n128 *)&v12 = sub_B52920(&static_fields->evaluationErrorMessage);
  if ( !matchObj )
    goto LABEL_31;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer, long double))matchObj->klass->vtable._5_get_Groups.method)(
                                                               matchObj,
                                                               matchObj->klass->vtable._6_GroupToStringImpl.methodPtr,
                                                               v12);
  numericFormatData = 0LL;
  value = 0LL;
  if ( !Item )
    goto LABEL_31;
  v13 = Item;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                               Item,
                                                               1,
                                                               0LL);
  if ( !Item )
    goto LABEL_31;
  v14 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, v14, 0LL) )
  {
    Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                 v13,
                                                                 3,
                                                                 0LL);
    if ( !Item )
      goto LABEL_31;
    v15 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, (int32_t *)&value + 1, v15, 0LL) )
    {
      Item = (System_Text_RegularExpressions_GroupCollection_o *)SkillDetailParamFormatResolver_TypeInfo;
      dataValsHierarchyCache = p_fields->dataValsHierarchyCache;
      v19 = endFuncIndex[0];
      v18 = endFuncIndex[1];
      if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      }
      if ( !dataValsHierarchyCache )
        goto LABEL_31;
      v20 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              dataValsHierarchyCache,
              v18,
              v19,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v16);
      if ( v20 )
      {
        v21 = v20;
        Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     v13,
                                                                     2,
                                                                     0LL);
        if ( !Item )
          goto LABEL_31;
        v22 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
        if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
        }
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue((int32_t *)&value, v22, v21, 0LL) )
        {
          Item = (System_Text_RegularExpressions_GroupCollection_o *)numericFormatData;
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     value,
                     SHIDWORD(value),
                     v23);
LABEL_31:
          sub_B52A5C(Item, v11);
        }
      }
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}


void __fastcall SkillDetailParamFormatResolver___c__DisplayClass12_0___ctor(
        SkillDetailParamFormatResolver___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver___c__DisplayClass12_0___ApplyGivenValues_g__Evaluator_0(
        SkillDetailParamFormatResolver___c__DisplayClass12_0_o *this,
        System_Text_RegularExpressions_Match_o *matchObj,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver___c__DisplayClass12_0_o *v4; // x20
  System_Text_RegularExpressions_GroupCollection_o *v5; // x21
  System_String_o *Value; // x22
  System_String_o *v7; // x21
  const MethodInfo *v8; // x3
  struct System_Int32_array *values; // x8
  __int64 v11; // x0
  int32_t endFuncIndex; // [xsp+4h] [xbp-3Ch] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-38h] BYREF
  int32_t funcIndex[2]; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42AD3C5 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IsValidIndex_int___);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_B52984(&SkillDetailParamFormatResolver_TypeInfo);
    byte_42AD3C5 = 1;
  }
  *(_QWORD *)funcIndex = 0LL;
  numericFormatData = 0LL;
  endFuncIndex = 0;
  if ( !matchObj )
    goto LABEL_22;
  this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer, const MethodInfo *))matchObj->klass->vtable._5_get_Groups.method)(
                                                                     matchObj,
                                                                     matchObj->klass->vtable._6_GroupToStringImpl.methodPtr,
                                                                     method);
  funcIndex[1] = 0;
  numericFormatData = 0LL;
  if ( !this )
    goto LABEL_22;
  v5 = (System_Text_RegularExpressions_GroupCollection_o *)this;
  this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                     1,
                                                                     0LL);
  if ( !this )
    goto LABEL_22;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  }
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(funcIndex, &endFuncIndex, Value, 0LL)
    && BasicHelper__IsValidIndex_int_(
         v4->fields.values,
         funcIndex[0],
         (const MethodInfo_1A440C4 *)Method_BasicHelper_IsValidIndex_int___) )
  {
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                       v5,
                                                                       3,
                                                                       0LL);
    if ( !this )
      goto LABEL_22;
    v7 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)SkillDetailParamFormatResolver__TryGetNumericFormat(
                                                                       &numericFormatData,
                                                                       &funcIndex[1],
                                                                       v7,
                                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      values = v4->fields.values;
      if ( values )
      {
        if ( funcIndex[0] >= values->max_length )
        {
          v11 = sub_B52A88(this);
          sub_B52A28(v11, 0LL);
        }
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[funcIndex[0] + 1],
                   funcIndex[1],
                   v8);
      }
LABEL_22:
      sub_B52A5C(this, matchObj);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}