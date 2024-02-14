void __fastcall SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Text_RegularExpressions_Regex_o *v9; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  SkillDetailParamFormatResolver_NumericFormatData_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  SkillDetailParamFormatResolver_NumericFormatData_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  SkillDetailParamFormatResolver_NumericFormatData_o *v29; // x20
  struct SkillDetailParamFormatResolver_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_42154F2 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__,
      v1);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__,
      v3);
    sub_B0D8A4(
      &System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo,
      v4);
    sub_B0D8A4(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v5);
    sub_B0D8A4(&System_Text_RegularExpressions_Regex_TypeInfo, v6);
    sub_B0D8A4(&SkillDetailParamFormatResolver_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_15916/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, v8);
    byte_42154F2 = 1;
  }
  v9 = (System_Text_RegularExpressions_Regex_o *)sub_B0D974(System_Text_RegularExpressions_Regex_TypeInfo, v1, v2);
  System_Text_RegularExpressions_Regex___ctor_47932480(v9, (System_String_o *)StringLiteral_15916/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B0D840(static_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  v19 = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)sub_B0D974(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo, v17, v18);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData____ctor(
    v19,
    (const MethodInfo_2DFA704 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v22 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B0D974(
                                                                SkillDetailParamFormatResolver_NumericFormatData_TypeInfo,
                                                                v20,
                                                                v21);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v22, 1, 0, 0LL);
  if ( !v19 )
    sub_B0D97C(v23);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v19,
    0x64u,
    v22,
    (const MethodInfo_2DFB2B8 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v26 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B0D974(
                                                                SkillDetailParamFormatResolver_NumericFormatData_TypeInfo,
                                                                v24,
                                                                v25);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v26, 10, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v19,
    0x6Du,
    v26,
    (const MethodInfo_2DFB2B8 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v29 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B0D974(
                                                                SkillDetailParamFormatResolver_NumericFormatData_TypeInfo,
                                                                v27,
                                                                v28);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v29, 100, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v19,
    0x79u,
    v29,
    (const MethodInfo_2DFB2B8 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v30 = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  v30->NumericFormatDict = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v30->NumericFormatDict,
    (System_Int32_array **)v19,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


System_String_o *__fastcall SkillDetailParamFormatResolver__Apply(
        System_String_o *detailText,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  SkillDetailParamFormatResolver_c *v25; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v27; // x22

  if ( (byte_42154EC & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, skillLvEntity);
    sub_B0D8A4(&SkillDetailParamFormatResolver_TypeInfo, v5);
    sub_B0D8A4(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__, v6);
    sub_B0D8A4(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_23757/*"{{"*/, v8);
    byte_42154EC = 1;
  }
  v9 = sub_B0D974(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, skillLvEntity, method);
  SkillDetailParamFormatResolver___c__DisplayClass11_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass11_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 24) = skillLvEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)skillLvEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23757/*"{{"*/, 0LL) )
  {
    *(_QWORD *)(v9 + 16) = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), 0LL, v17, v18, v19, v20, v21, v22);
    v25 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v25 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v25->static_fields->ParamFormatRegex;
    v27 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B0D974(
                                                               System_Text_RegularExpressions_MatchEvaluator_TypeInfo,
                                                               v23,
                                                               v24);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v27,
      (Il2CppObject *)v9,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_47940472(ParamFormatRegex, detailText, v27, 0LL);
LABEL_12:
    sub_B0D97C(v10);
  }
  return detailText;
}


System_String_o *__fastcall SkillDetailParamFormatResolver__ApplyGivenValues(
        System_String_o *detailText,
        System_Int32_array *values,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  SkillDetailParamFormatResolver_c *v19; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v21; // x22

  if ( (byte_42154ED & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, values);
    sub_B0D8A4(&SkillDetailParamFormatResolver_TypeInfo, v5);
    sub_B0D8A4(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__, v6);
    sub_B0D8A4(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_23757/*"{{"*/, v8);
    byte_42154ED = 1;
  }
  v9 = sub_B0D974(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, values, method);
  SkillDetailParamFormatResolver___c__DisplayClass12_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = values;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)values, v11, v12, v13, v14, v15, v16);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23757/*"{{"*/, 0LL) )
  {
    v19 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v19 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v19->static_fields->ParamFormatRegex;
    v21 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B0D974(
                                                               System_Text_RegularExpressions_MatchEvaluator_TypeInfo,
                                                               v17,
                                                               v18);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v21,
      (Il2CppObject *)v9,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_47940472(ParamFormatRegex, detailText, v21, 0LL);
LABEL_12:
    sub_B0D97C(v10);
  }
  return detailText;
}


void __fastcall SkillDetailParamFormatResolver__AssertFailed(
        System_Text_RegularExpressions_Match_o *matchObj,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *Value; // x0
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  int32_t skillDetailId; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42154F1 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, ent);
    sub_B0D8A4(&StringLiteral_12931/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v5);
    byte_42154F1 = 1;
  }
  if ( matchObj )
  {
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
    if ( ent )
    {
      if ( Value )
      {
        skillId = ent->fields.skillId;
        v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillId);
        lv = ent->fields.lv;
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        skillDetailId = ent->fields.skillDetailId;
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillDetailId);
        System_String__Format_43850968((System_String_o *)StringLiteral_12931/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v7, v8, v9, 0LL);
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
  if ( (byte_42154EE & 1) == 0 )
  {
    funcIndex = (int32_t *)sub_B0D8A4(&char___TypeInfo, endFuncIndex);
    byte_42154EE = 1;
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
  funcIndex = (int32_t *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !funcIndex )
    goto LABEL_17;
  if ( !funcIndex[6] )
    goto LABEL_18;
  *((_WORD *)funcIndex + 16) = 95;
  funcIndex = (int32_t *)System_String__Split(rawString, (System_Char_array *)funcIndex, 0LL);
  if ( !funcIndex )
LABEL_17:
    sub_B0D97C(funcIndex);
  v9 = funcIndex;
  if ( !funcIndex[6] )
  {
LABEL_18:
    v11 = sub_B0D9A8(funcIndex);
    sub_B0D948(v11, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x19
  SkillDetailParamFormatResolver_c *v17; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_42154EF & 1) == 0 )
  {
    sub_B0D8A4(&SkillDetailParamFormatResolver_TypeInfo, valsKeyStr);
    sub_B0D8A4(&StringLiteral_15930/*"]が取れませんでした"*/, v7);
    sub_B0D8A4(&StringLiteral_22533/*"svalsから["*/, v8);
    byte_42154EF = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v16 = (System_Int32_array **)System_String__Concat_43852188(
                                   (System_String_o *)StringLiteral_22533/*"svalsから["*/,
                                   valsKeyStr,
                                   (System_String_o *)StringLiteral_15930/*"]が取れませんでした"*/,
                                   0LL);
    v17 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v17 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->evaluationErrorMessage = (struct System_String_o *)v16;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->evaluationErrorMessage,
      v16,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return 0;
}


bool __fastcall SkillDetailParamFormatResolver__TryGetNumericFormat(
        SkillDetailParamFormatResolver_NumericFormatData_o **numericFormatData,
        int32_t *fractionalDigit,
        System_String_o *formatKey,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *Chars; // x0
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *monitor; // x22
  bool v21; // w21
  uint16_t v22; // w0
  __int64 v23; // x19
  __int64 v24; // x0
  __int64 *v25; // x8
  Il2CppObject *v26; // x2
  Il2CppObject *v27; // x1
  SkillDetailParamFormatResolver_c *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v32; // x8
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__15_0; // x22
  System_String_o *v35; // x21
  Il2CppObject *v36; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_string__o *v44; // x0
  System_String_o *v45; // x20
  __int64 v46; // x0
  System_String_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  SkillDetailParamFormatResolver_c *v54; // x8
  System_Int32_array **v55; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v56; // x0
  int v58; // [xsp+Ch] [xbp-44h] BYREF
  int v59; // [xsp+18h] [xbp-38h] BYREF
  uint16_t v60; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42154F0 & 1) == 0 )
  {
    sub_B0D8A4(&char_TypeInfo, fractionalDigit);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__,
      v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_char__string___, v9);
    sub_B0D8A4(&Method_System_Func_char__string___ctor__, v10);
    sub_B0D8A4(&System_Func_char__string__TypeInfo, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&SkillDetailParamFormatResolver_TypeInfo, v13);
    sub_B0D8A4(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__, v14);
    sub_B0D8A4(&SkillDetailParamFormatResolver___c_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_23950/*"指定可能な少数点以下の桁数は({0}～{1})です"*/, v16);
    sub_B0D8A4(&StringLiteral_23962/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/, v17);
    sub_B0D8A4(&StringLiteral_705/*","*/, v18);
    byte_42154F0 = 1;
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
          (const MethodInfo_2DFCFDC *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v28 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v28 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = v28->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___get_Keys(
               Chars,
               (const MethodInfo_2DFAEC4 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v32 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( (BYTE3(SkillDetailParamFormatResolver___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v32 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__15_0 = static_fields->__9__15_0;
      v35 = (System_String_o *)StringLiteral_705/*","*/;
      if ( !_9__15_0 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        }
        v36 = (Il2CppObject *)static_fields->__9;
        _9__15_0 = (System_Func_char__string__o *)sub_B0D974(System_Func_char__string__TypeInfo, v29, v30);
        System_Func_char__string____ctor(
          _9__15_0,
          v36,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          (const MethodInfo_261279C *)Method_System_Func_char__string___ctor__);
        v37 = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        v37->__9__15_0 = _9__15_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v37->__9__15_0,
          (System_Int32_array **)_9__15_0,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      v44 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_1B502A8 *)Method_System_Linq_Enumerable_Select_char__string___);
      v45 = System_String__Join_43905348(v35, v44, 0LL);
      v60 = System_String__get_Chars(formatKey, 0, 0LL);
      v46 = j_il2cpp_value_box_0(char_TypeInfo, &v60);
      v25 = &StringLiteral_23962/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v27 = (Il2CppObject *)v46;
      v26 = (Il2CppObject *)v45;
      goto LABEL_25;
    }
LABEL_31:
    sub_B0D97C(Chars);
  }
  if ( formatKey->fields.m_stringLength < 2 )
    return 1;
  v21 = 1;
  v22 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v22 - 48;
  if ( (unsigned __int16)(v22 - 49) >= 3u )
  {
    v59 = 1;
    v23 = j_il2cpp_value_box_0(int_TypeInfo, &v59);
    v58 = 3;
    v24 = j_il2cpp_value_box_0(int_TypeInfo, &v58);
    v25 = &StringLiteral_23950/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v26 = (Il2CppObject *)v24;
    v27 = (Il2CppObject *)v23;
LABEL_25:
    v47 = System_String__Format_43845440((System_String_o *)*v25, v27, v26, 0LL);
    v54 = SkillDetailParamFormatResolver_TypeInfo;
    v55 = (System_Int32_array **)v47;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v54 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v56 = v54->static_fields;
    v56->evaluationErrorMessage = (struct System_String_o *)v55;
    sub_B0D840((BattleServantConfConponent_o *)&v56->evaluationErrorMessage, v55, v48, v49, v50, v51, v52, v53);
    return 0;
  }
  return v21;
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache___ctor(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SkillLvEntity_k__BackingField = skillLvEntity;
  sub_B0D840(&this->fields, skillLvEntity);
}


// local variable allocation has failed, the output may be wrong!
DataVals_o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        int32_t endFuncIndex,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  System_Object_array *RootSkillValsArray; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *EndSkillValsDict; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v26; // x0
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  __int64 v30; // x0
  int v31; // [xsp+4h] [xbp-3Ch] BYREF
  int v32; // [xsp+8h] [xbp-38h] BYREF
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42122AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_DataVals___, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&Method_BasicHelper_IsValidIndex_DataVals___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_23722/*"{0}_{1})に該当する効果が存在しません"*/, v13);
    sub_B0D8A4(&StringLiteral_23745/*"{0}番目の効果が存在しません"*/, v14);
    byte_42122AC = 1;
  }
  *errorMessage = 0LL;
  sub_B0D840(errorMessage, 0LL);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v15);
  if ( BasicHelper__IsValidIndex_object__24155640(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_17095F8 *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v17);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)EndSkillValsDict,
              funcIndex,
              (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v20);
        EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v21);
        if ( !EndSkillValsDict )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 EndSkillValsDict,
                 funcIndex,
                 (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__24155640(
                (System_Object_array *)Item,
                endFuncIndex,
                (const MethodInfo_17095F8 *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v32 = funcIndex + 1;
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
          v31 = endFuncIndex + 1;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
          v25 = System_String__Format_43845440((System_String_o *)StringLiteral_23722/*"{0}_{1})に該当する効果が存在しません"*/, v23, v24, 0LL);
          *errorMessage = v25;
          sub_B0D840(errorMessage, v25);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v19);
      if ( EndSkillValsDict )
      {
        v26 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                EndSkillValsDict,
                funcIndex,
                (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v26,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_B0D97C(EndSkillValsDict);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(this, v17);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields.entries) <= funcIndex )
    {
      v30 = sub_B0D9A8(EndSkillValsDict);
      sub_B0D948(v30, 0LL);
    }
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields.count + funcIndex);
  }
  else
  {
    v33 = funcIndex + 1;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    v29 = System_String__Format((System_String_o *)StringLiteral_23745/*"{0}番目の効果が存在しません"*/, v28, 0LL);
    *errorMessage = v29;
    sub_B0D840(errorMessage, v29);
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FunctionMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v8; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *RootSkillValsArray; // x0
  WarBoardAIRoute_RouteData_o *EndSkillValsArrayFromRootValsForDisplay; // x21
  const MethodInfo *v11; // x1
  __int64 v12; // x0

  if ( (byte_42122AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&funcIndex);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__, v6);
    byte_42122AD = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (FunctionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                                    this,
                                                                                                    v8);
  if ( !RootSkillValsArray )
    goto LABEL_11;
  if ( LODWORD(RootSkillValsArray->fields.entries) <= funcIndex )
  {
    v12 = sub_B0D9A8(RootSkillValsArray);
    sub_B0D948(v12, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster
    || (EndSkillValsArrayFromRootValsForDisplay = (WarBoardAIRoute_RouteData_o *)FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                                                   Master_WarQuestSelectionMaster,
                                                                                   *((DataVals_o **)&RootSkillValsArray->fields.count
                                                                                   + funcIndex),
                                                                                   0LL),
        (RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v11)) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(RootSkillValsArray);
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    RootSkillValsArray,
    funcIndex,
    EndSkillValsArrayFromRootValsForDisplay,
    (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__DataVals____o **p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1

  if ( (byte_42122AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo, v4);
    byte_42122AB = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = &this->fields.endSkillValsDict;
  v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_Dictionary_int__DataVals____TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v6,
      (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    *p_endSkillValsDict = (struct System_Collections_Generic_Dictionary_int__DataVals____o *)v6;
    sub_B0D840(p_endSkillValsDict, v6);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v6;
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
      sub_B0D97C(0LL);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0LL);
    *p_rootSkillValsArray = rootSkillValsArray;
    sub_B0D840(p_rootSkillValsArray, rootSkillValsArray);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        int32_t value,
        int32_t fractionalDigit,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t shiftDigit; // w8
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  double v11; // d0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x20
  System_String_o *SuffixStr; // x0
  int32_t v17; // [xsp+0h] [xbp-30h] BYREF
  int v18; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o format; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42122B0 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&value);
    sub_B0D8A4(&StringLiteral_18995/*"f{0}"*/, v7);
    byte_42122B0 = 1;
  }
  format.klass = 0LL;
  v18 = 0;
  shiftDigit = this->fields.shiftDigit;
  if ( fractionalDigit < 1 )
  {
    v18 = value / shiftDigit;
    v12 = System_Int32__ToString((int32_t)&v18, 0LL);
  }
  else
  {
    *(double *)&format.klass = (double)value / (double)shiftDigit;
    v17 = fractionalDigit;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v10 = System_String__Format((System_String_o *)StringLiteral_18995/*"f{0}"*/, v9, 0LL);
    v12 = System_Double__ToString_43793600(v11, &format, (const MethodInfo *)v10);
  }
  v14 = v12;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v13);
  return System_String__Concat_43849904(v14, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver_NumericFormatData_o *v2; // x19

  v2 = this;
  if ( (byte_42122AF & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B0D8A4(&string_TypeInfo, method);
    byte_42122AF = 1;
  }
  if ( v2->fields.suffixType == 1 )
    return SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr((const MethodInfo *)this);
  else
    return string_TypeInfo->static_fields->Empty;
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *percentStr; // x19
  struct SkillDetailParamFormatResolver_NumericFormatData_StaticFields *static_fields; // x8

  if ( (byte_42122AE & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v1);
    sub_B0D8A4(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_6554/*"FUNC_VALUE_PERCENT"*/, v3);
    byte_42122AE = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6554/*"FUNC_VALUE_PERCENT"*/, 0LL);
    static_fields = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields;
    static_fields->percentStr = percentStr;
    sub_B0D840(static_fields, percentStr);
  }
  return percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x0

  if ( (byte_42122A8 & 1) == 0 )
  {
    sub_B0D8A4(&SkillDetailParamFormatResolver___c_TypeInfo, v1);
    byte_42122A8 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SkillDetailParamFormatResolver___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v5; // x1
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  struct SkillLvEntity_o *skillLvEntity; // x22
  Il2CppObject *v8; // x23
  SkillDetailParamFormatResolver_c *v9; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
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

  if ( (byte_42122A9 & 1) == 0 )
  {
    sub_B0D8A4(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj);
    sub_B0D8A4(&SkillDetailParamFormatResolver_TypeInfo, v5);
    byte_42122A9 = 1;
  }
  numericFormatData = 0LL;
  value = 0LL;
  *(_QWORD *)endFuncIndex = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v8 = (Il2CppObject *)sub_B0D974(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj, method);
    System_Object___ctor(v8, 0LL);
    v8[1].klass = (Il2CppClass *)skillLvEntity;
    sub_B0D840(&v8[1], skillLvEntity);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v8;
    sub_B0D840(&this->fields, v8);
  }
  v9 = SkillDetailParamFormatResolver_TypeInfo;
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v9 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->evaluationErrorMessage = 0LL;
  *(__n128 *)&v12 = sub_B0D840(&static_fields->evaluationErrorMessage, 0LL);
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
          sub_B0D97C(Item);
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
  __int64 v5; // x1
  System_Text_RegularExpressions_GroupCollection_o *v6; // x21
  System_String_o *Value; // x22
  System_String_o *v8; // x21
  const MethodInfo *v9; // x3
  struct System_Int32_array *values; // x8
  __int64 v12; // x0
  int32_t endFuncIndex; // [xsp+4h] [xbp-3Ch] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-38h] BYREF
  int32_t funcIndex[2]; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42122AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IsValidIndex_int___, matchObj);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_B0D8A4(
                                                                       &SkillDetailParamFormatResolver_TypeInfo,
                                                                       v5);
    byte_42122AA = 1;
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
  v6 = (System_Text_RegularExpressions_GroupCollection_o *)this;
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
         (const MethodInfo_1709590 *)Method_BasicHelper_IsValidIndex_int___) )
  {
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                       v6,
                                                                       3,
                                                                       0LL);
    if ( !this )
      goto LABEL_22;
    v8 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)SkillDetailParamFormatResolver__TryGetNumericFormat(
                                                                       &numericFormatData,
                                                                       &funcIndex[1],
                                                                       v8,
                                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      values = v4->fields.values;
      if ( values )
      {
        if ( funcIndex[0] >= values->max_length )
        {
          v12 = sub_B0D9A8(this);
          sub_B0D948(v12, 0LL);
        }
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[funcIndex[0] + 1],
                   funcIndex[1],
                   v9);
      }
LABEL_22:
      sub_B0D97C(this);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}