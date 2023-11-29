void __fastcall SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Text_RegularExpressions_Regex_o *v11; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  SkillDetailParamFormatResolver_NumericFormatData_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  SkillDetailParamFormatResolver_NumericFormatData_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  SkillDetailParamFormatResolver_NumericFormatData_o *v38; // x20
  struct SkillDetailParamFormatResolver_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_40F9203 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__,
      v1);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__,
      v5);
    sub_B16FFC(
      &System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo,
      v6);
    sub_B16FFC(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v7);
    sub_B16FFC(&System_Text_RegularExpressions_Regex_TypeInfo, v8);
    sub_B16FFC(&SkillDetailParamFormatResolver_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_15806, v10);
    byte_40F9203 = 1;
  }
  v11 = (System_Text_RegularExpressions_Regex_o *)sub_B170CC(
                                                    System_Text_RegularExpressions_Regex_TypeInfo,
                                                    v1,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Text_RegularExpressions_Regex___ctor_16010916(v11, (System_String_o *)StringLiteral_15806, 8, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v11;
  sub_B16F98(static_fields, (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
  v23 = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)sub_B170CC(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo, v19, v20, v21, v22);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData____ctor(
    v23,
    (const MethodInfo_2D7FB70 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v28 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B170CC(
                                                                SkillDetailParamFormatResolver_NumericFormatData_TypeInfo,
                                                                v24,
                                                                v25,
                                                                v26,
                                                                v27);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v28, 1, 0, 0LL);
  if ( !v23 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v23,
    0x64u,
    v28,
    (const MethodInfo_2D80724 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v33 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B170CC(
                                                                SkillDetailParamFormatResolver_NumericFormatData_TypeInfo,
                                                                v29,
                                                                v30,
                                                                v31,
                                                                v32);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v33, 10, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v23,
    0x6Du,
    v33,
    (const MethodInfo_2D80724 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v38 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B170CC(
                                                                SkillDetailParamFormatResolver_NumericFormatData_TypeInfo,
                                                                v34,
                                                                v35,
                                                                v36,
                                                                v37);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v38, 100, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v23,
    0x79u,
    v38,
    (const MethodInfo_2D80724 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v39 = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  v39->NumericFormatDict = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v39->NumericFormatDict,
    (System_Int32_array **)v23,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
}


System_String_o *__fastcall SkillDetailParamFormatResolver__Apply(
        System_String_o *detailText,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  SkillDetailParamFormatResolver_c *v28; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v30; // x22

  if ( (byte_40F91FD & 1) == 0 )
  {
    sub_B16FFC(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, skillLvEntity);
    sub_B16FFC(&SkillDetailParamFormatResolver_TypeInfo, v7);
    sub_B16FFC(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__, v8);
    sub_B16FFC(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_23585, v10);
    byte_40F91FD = 1;
  }
  v11 = sub_B170CC(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, skillLvEntity, method, v3, v4);
  SkillDetailParamFormatResolver___c__DisplayClass11_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass11_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 24) = skillLvEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 24),
    (System_Int32_array **)skillLvEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23585, 0LL) )
  {
    *(_QWORD *)(v11 + 16) = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), 0LL, v18, v19, v20, v21, v22, v23);
    v28 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v28 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v28->static_fields->ParamFormatRegex;
    v30 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B170CC(
                                                               System_Text_RegularExpressions_MatchEvaluator_TypeInfo,
                                                               v24,
                                                               v25,
                                                               v26,
                                                               v27);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v30,
      (Il2CppObject *)v11,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_16018908(ParamFormatRegex, detailText, v30, 0LL);
LABEL_12:
    sub_B170D4();
  }
  return detailText;
}


System_String_o *__fastcall SkillDetailParamFormatResolver__ApplyGivenValues(
        System_String_o *detailText,
        System_Int32_array *values,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  SkillDetailParamFormatResolver_c *v22; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v24; // x22

  if ( (byte_40F91FE & 1) == 0 )
  {
    sub_B16FFC(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, values);
    sub_B16FFC(&SkillDetailParamFormatResolver_TypeInfo, v7);
    sub_B16FFC(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__, v8);
    sub_B16FFC(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_23585, v10);
    byte_40F91FE = 1;
  }
  v11 = sub_B170CC(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, values, method, v3, v4);
  SkillDetailParamFormatResolver___c__DisplayClass12_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = values;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)values, v12, v13, v14, v15, v16, v17);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23585, 0LL) )
  {
    v22 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v22 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v22->static_fields->ParamFormatRegex;
    v24 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B170CC(
                                                               System_Text_RegularExpressions_MatchEvaluator_TypeInfo,
                                                               v18,
                                                               v19,
                                                               v20,
                                                               v21);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v24,
      (Il2CppObject *)v11,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_16018908(ParamFormatRegex, detailText, v24, 0LL);
LABEL_12:
    sub_B170D4();
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

  if ( (byte_40F9202 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, ent);
    sub_B16FFC(&StringLiteral_12831, v5);
    byte_40F9202 = 1;
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
        System_String__Format_43744796((System_String_o *)StringLiteral_12831, v7, v8, v9, 0LL);
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
  System_String_o *v7; // x0
  int32_t *v8; // x1
  System_String_array *v9; // x0
  __int64 v10; // x2
  System_String_array *v11; // x1
  System_String_array *v12; // x21
  bool result; // w0

  if ( (byte_40F91FF & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, endFuncIndex);
    byte_40F91FF = 1;
  }
  *endFuncIndex = 0;
  if ( !rawString )
    goto LABEL_17;
  if ( rawString->fields.m_stringLength == 1 )
  {
    v7 = rawString;
    v8 = funcIndex;
    goto LABEL_6;
  }
  v9 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, rawString);
  if ( !v9 )
    goto LABEL_17;
  v11 = v9;
  if ( !v9->max_length )
    goto LABEL_18;
  LOWORD(v9->m_Items[0]) = 95;
  v9 = System_String__Split(rawString, (System_Char_array *)v9, 0LL);
  if ( !v9 )
LABEL_17:
    sub_B170D4();
  v12 = v9;
  if ( !v9->max_length )
  {
LABEL_18:
    sub_B17100(v9, v11, v10);
    sub_B170A0();
  }
  if ( System_Int32__TryParse(v9->m_Items[0], funcIndex, 0LL) )
  {
    if ( (int)v12->max_length < 2 )
      goto LABEL_14;
    v7 = v12->m_Items[1];
    v8 = endFuncIndex;
LABEL_6:
    if ( !System_Int32__TryParse(v7, v8, 0LL) )
      return 0;
LABEL_14:
    result = 1;
    --*funcIndex;
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

  if ( (byte_40F9200 & 1) == 0 )
  {
    sub_B16FFC(&SkillDetailParamFormatResolver_TypeInfo, valsKeyStr);
    sub_B16FFC(&StringLiteral_15820, v7);
    sub_B16FFC(&StringLiteral_22365, v8);
    byte_40F9200 = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v16 = (System_Int32_array **)System_String__Concat_43746016(
                                   (System_String_o *)StringLiteral_22365,
                                   valsKeyStr,
                                   (System_String_o *)StringLiteral_15820,
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
    sub_B16F98(
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
  SkillDetailParamFormatResolver_c *v19; // x0
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *NumericFormatDict; // x22
  uint16_t Chars; // w0
  bool v22; // w21
  uint16_t v23; // w0
  __int64 v24; // x19
  __int64 v25; // x0
  __int64 *v26; // x8
  Il2CppObject *v27; // x2
  Il2CppObject *v28; // x1
  SkillDetailParamFormatResolver_c *v29; // x0
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v36; // x8
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__15_0; // x22
  System_String_o *v39; // x21
  Il2CppObject *v40; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_string__o *v48; // x0
  System_String_o *v49; // x20
  __int64 v50; // x0
  System_String_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  SkillDetailParamFormatResolver_c *v58; // x8
  System_Int32_array **v59; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v60; // x0
  int v62; // [xsp+Ch] [xbp-44h] BYREF
  int v63; // [xsp+18h] [xbp-38h] BYREF
  uint16_t v64; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40F9201 & 1) == 0 )
  {
    sub_B16FFC(&char_TypeInfo, fractionalDigit);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__,
      v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_char__string___, v9);
    sub_B16FFC(&Method_System_Func_char__string___ctor__, v10);
    sub_B16FFC(&System_Func_char__string__TypeInfo, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&SkillDetailParamFormatResolver_TypeInfo, v13);
    sub_B16FFC(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__, v14);
    sub_B16FFC(&SkillDetailParamFormatResolver___c_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_23770, v16);
    sub_B16FFC(&StringLiteral_23782, v17);
    sub_B16FFC(&StringLiteral_698, v18);
    byte_40F9201 = 1;
  }
  *fractionalDigit = 0;
  v19 = SkillDetailParamFormatResolver_TypeInfo;
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v19 = SkillDetailParamFormatResolver_TypeInfo;
  }
  if ( !formatKey )
    goto LABEL_31;
  NumericFormatDict = v19->static_fields->NumericFormatDict;
  Chars = System_String__get_Chars(formatKey, 0, 0LL);
  if ( !NumericFormatDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___TryGetValue(
          NumericFormatDict,
          Chars,
          numericFormatData,
          (const MethodInfo_2D82448 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v29 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v29 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v30 = v29->static_fields->NumericFormatDict;
    if ( v30 )
    {
      Keys = System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___get_Keys(
               v30,
               (const MethodInfo_2D80330 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v36 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( (BYTE3(SkillDetailParamFormatResolver___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v36 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      static_fields = v36->static_fields;
      _9__15_0 = static_fields->__9__15_0;
      v39 = (System_String_o *)StringLiteral_698;
      if ( !_9__15_0 )
      {
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__15_0 = (System_Func_char__string__o *)sub_B170CC(System_Func_char__string__TypeInfo, v31, v32, v33, v34);
        System_Func_char__string____ctor(
          _9__15_0,
          v40,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          (const MethodInfo_2B64924 *)Method_System_Func_char__string___ctor__);
        v41 = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        v41->__9__15_0 = _9__15_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v41->__9__15_0,
          (System_Int32_array **)_9__15_0,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      v48 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_19BEDB8 *)Method_System_Linq_Enumerable_Select_char__string___);
      v49 = System_String__Join_43799176(v39, v48, 0LL);
      v64 = System_String__get_Chars(formatKey, 0, 0LL);
      v50 = j_il2cpp_value_box_0(char_TypeInfo, &v64);
      v26 = &StringLiteral_23782;
      v28 = (Il2CppObject *)v50;
      v27 = (Il2CppObject *)v49;
      goto LABEL_25;
    }
LABEL_31:
    sub_B170D4();
  }
  if ( formatKey->fields.m_stringLength < 2 )
    return 1;
  v22 = 1;
  v23 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v23 - 48;
  if ( (unsigned __int16)(v23 - 49) >= 3u )
  {
    v63 = 1;
    v24 = j_il2cpp_value_box_0(int_TypeInfo, &v63);
    v62 = 3;
    v25 = j_il2cpp_value_box_0(int_TypeInfo, &v62);
    v26 = &StringLiteral_23770;
    v27 = (Il2CppObject *)v25;
    v28 = (Il2CppObject *)v24;
LABEL_25:
    v51 = System_String__Format_43739268((System_String_o *)*v26, v28, v27, 0LL);
    v58 = SkillDetailParamFormatResolver_TypeInfo;
    v59 = (System_Int32_array **)v51;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v58 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v60 = v58->static_fields;
    v60->evaluationErrorMessage = (struct System_String_o *)v59;
    sub_B16F98((BattleServantConfConponent_o *)&v60->evaluationErrorMessage, v59, v52, v53, v54, v55, v56, v57);
    return 0;
  }
  return v22;
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache___ctor(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SkillLvEntity_k__BackingField = skillLvEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)skillLvEntity,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
DataVals_o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        int32_t endFuncIndex,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  System_Object_array *RootSkillValsArray; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_Dictionary_int__DataVals____o *EndSkillValsDict; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  System_Collections_Generic_Dictionary_int__DataVals____o *v25; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  Il2CppObject *v27; // x23
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_Dictionary_int__DataVals____o *v36; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v37; // x0
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  DataVals_array *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  int v50; // [xsp+4h] [xbp-3Ch] BYREF
  int v51; // [xsp+8h] [xbp-38h] BYREF
  int v52; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F7A01 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_DataVals___, *(_QWORD *)&funcIndex);
    sub_B16FFC(&Method_BasicHelper_IsValidIndex_DataVals___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_23550, v16);
    sub_B16FFC(&StringLiteral_23573, v17);
    byte_40F7A01 = 1;
  }
  *errorMessage = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)errorMessage,
    0LL,
    *(System_String_array ***)&endFuncIndex,
    (System_String_array **)errorMessage,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v18);
  if ( BasicHelper__IsValidIndex_object__25920516(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_18B8404 *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v20);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)EndSkillValsDict,
              funcIndex,
              (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v23);
        v25 = SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v24);
        if ( !v25 )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v25,
                 funcIndex,
                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__25920516(
                (System_Object_array *)Item,
                endFuncIndex,
                (const MethodInfo_18B8404 *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v51 = funcIndex + 1;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
          v50 = endFuncIndex + 1;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
          v29 = System_String__Format_43739268((System_String_o *)StringLiteral_23550, v27, v28, 0LL);
          *errorMessage = v29;
          sub_B16F98(
            (BattleServantConfConponent_o *)errorMessage,
            (System_Int32_array **)v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
        }
      }
      v36 = SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v22);
      if ( v36 )
      {
        v37 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v36,
                funcIndex,
                (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v37,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_B170D4();
    }
    v47 = SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(this, v20);
    if ( !v47 )
      goto LABEL_17;
    if ( v47->max_length <= funcIndex )
    {
      sub_B17100(v47, v48, v49);
      sub_B170A0();
    }
    return v47->m_Items[funcIndex];
  }
  else
  {
    v52 = funcIndex + 1;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
    v40 = System_String__Format((System_String_o *)StringLiteral_23573, v39, 0LL);
    *errorMessage = v40;
    sub_B16F98((BattleServantConfConponent_o *)errorMessage, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
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
  DataVals_array *RootSkillValsArray; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardAIRoute_RouteData_o *EndSkillValsArrayFromRootValsForDisplay; // x21
  const MethodInfo *v13; // x1
  System_Collections_Generic_Dictionary_int__DataVals____o *EndSkillValsDict; // x0

  if ( (byte_40F7A02 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&funcIndex);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__, v6);
    byte_40F7A02 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (FunctionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(this, v8);
  if ( !RootSkillValsArray )
    goto LABEL_11;
  if ( RootSkillValsArray->max_length <= funcIndex )
  {
    sub_B17100(RootSkillValsArray, v10, v11);
    sub_B170A0();
  }
  if ( !Master_WarQuestSelectionMaster
    || (EndSkillValsArrayFromRootValsForDisplay = (WarBoardAIRoute_RouteData_o *)FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                                                   Master_WarQuestSelectionMaster,
                                                                                   RootSkillValsArray->m_Items[funcIndex],
                                                                                   0LL),
        (EndSkillValsDict = SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v13)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)EndSkillValsDict,
    funcIndex,
    EndSkillValsArrayFromRootValsForDisplay,
    (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BattleServantConfConponent_o *p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F7A00 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo, v6);
    byte_40F7A00 = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = (BattleServantConfConponent_o *)&this->fields.endSkillValsDict;
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_Dictionary_int__DataVals____TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v8,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    p_endSkillValsDict->klass = (BattleServantConfConponent_c *)v8;
    sub_B16F98(p_endSkillValsDict, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v8;
}


DataVals_array *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_rootSkillValsArray; // x19
  System_Int32_array **rootSkillValsArray; // x20
  SkillLvEntity_o *SkillLvEntity_k__BackingField; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_rootSkillValsArray = (BattleServantConfConponent_o *)&this->fields.rootSkillValsArray;
  rootSkillValsArray = (System_Int32_array **)this->fields.rootSkillValsArray;
  if ( !rootSkillValsArray )
  {
    SkillLvEntity_k__BackingField = this->fields._SkillLvEntity_k__BackingField;
    if ( !SkillLvEntity_k__BackingField )
      sub_B170D4();
    rootSkillValsArray = (System_Int32_array **)SkillLvEntity__GetSetTypeDataValArray(
                                                  SkillLvEntity_k__BackingField,
                                                  0LL);
    p_rootSkillValsArray->klass = (BattleServantConfConponent_c *)rootSkillValsArray;
    sub_B16F98(p_rootSkillValsArray, rootSkillValsArray, v5, v6, v7, v8, v9, v10);
  }
  return (DataVals_array *)rootSkillValsArray;
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

  if ( (byte_40F7A05 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&value);
    sub_B16FFC(&StringLiteral_18865, v7);
    byte_40F7A05 = 1;
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
    v10 = System_String__Format((System_String_o *)StringLiteral_18865, v9, 0LL);
    v12 = System_Double__ToString_43691524(v11, &format, (const MethodInfo *)v10);
  }
  v14 = v12;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v13);
  return System_String__Concat_43743732(v14, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver_NumericFormatData_o *v2; // x19

  v2 = this;
  if ( (byte_40F7A04 & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B16FFC(&string_TypeInfo, method);
    byte_40F7A04 = 1;
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
  System_Int32_array **percentStr; // x19
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F7A03 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v1);
    sub_B16FFC(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_6513, v3);
    byte_40F7A03 = 1;
  }
  percentStr = (System_Int32_array **)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    percentStr = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_6513, 0LL);
    static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)percentStr;
    sub_B16F98(static_fields, percentStr, v6, v7, v8, v9, v10, v11);
  }
  return (System_String_o *)percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79FD & 1) == 0 )
  {
    sub_B16FFC(&SkillDetailParamFormatResolver___c_TypeInfo, v1);
    byte_40F79FD = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SkillDetailParamFormatResolver___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  System_Int32_array **skillLvEntity; // x22
  __int64 v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  SkillDetailParamFormatResolver_c *v26; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *v28; // x0
  System_Text_RegularExpressions_GroupCollection_o *v29; // x21
  System_Text_RegularExpressions_Capture_o *Item; // x0
  System_String_o *v31; // x0
  System_Text_RegularExpressions_Capture_o *v32; // x0
  System_String_o *v33; // x22
  const MethodInfo *v34; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x23
  int32_t v36; // w20
  int32_t v37; // w22
  DataVals_o *v38; // x0
  DataVals_o *v39; // x20
  System_Text_RegularExpressions_Capture_o *v40; // x0
  System_String_o *v41; // x21
  const MethodInfo *v42; // x3
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  __int64 value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F79FE & 1) == 0 )
  {
    sub_B16FFC(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj);
    sub_B16FFC(&SkillDetailParamFormatResolver_TypeInfo, v10);
    byte_40F79FE = 1;
  }
  numericFormatData = 0LL;
  value = 0LL;
  *(_QWORD *)endFuncIndex = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = (System_Int32_array **)this->fields.skillLvEntity;
    v13 = sub_B170CC(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj, method, v3, v4);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    *(_QWORD *)(v13 + 16) = skillLvEntity;
    sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), skillLvEntity, v14, v15, v16, v17, v18, v19);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v13;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v13, v20, v21, v22, v23, v24, v25);
  }
  v26 = SkillDetailParamFormatResolver_TypeInfo;
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v26 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v26->static_fields;
  static_fields->evaluationErrorMessage = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->evaluationErrorMessage,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !matchObj )
    goto LABEL_31;
  v28 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer))matchObj->klass->vtable._5_get_Groups.method)(
                                                              matchObj,
                                                              matchObj->klass->vtable._6_GroupToStringImpl.methodPtr);
  numericFormatData = 0LL;
  value = 0LL;
  if ( !v28 )
    goto LABEL_31;
  v29 = v28;
  Item = (System_Text_RegularExpressions_Capture_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                       v28,
                                                       1,
                                                       0LL);
  if ( !Item )
    goto LABEL_31;
  v31 = System_Text_RegularExpressions_Capture__get_Value(Item, 0LL);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, v31, 0LL) )
  {
    v32 = (System_Text_RegularExpressions_Capture_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                        v29,
                                                        3,
                                                        0LL);
    if ( !v32 )
      goto LABEL_31;
    v33 = System_Text_RegularExpressions_Capture__get_Value(v32, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, (int32_t *)&value + 1, v33, 0LL) )
    {
      dataValsHierarchyCache = p_fields->dataValsHierarchyCache;
      v37 = endFuncIndex[0];
      v36 = endFuncIndex[1];
      if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      }
      if ( !dataValsHierarchyCache )
        goto LABEL_31;
      v38 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              dataValsHierarchyCache,
              v36,
              v37,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v34);
      if ( v38 )
      {
        v39 = v38;
        v40 = (System_Text_RegularExpressions_Capture_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                            v29,
                                                            2,
                                                            0LL);
        if ( !v40 )
          goto LABEL_31;
        v41 = System_Text_RegularExpressions_Capture__get_Value(v40, 0LL);
        if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
        }
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue((int32_t *)&value, v41, v39, 0LL) )
        {
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     value,
                     SHIDWORD(value),
                     v42);
LABEL_31:
          sub_B170D4();
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
  __int64 v5; // x1
  System_Text_RegularExpressions_GroupCollection_o *v6; // x0
  System_Text_RegularExpressions_GroupCollection_o *v7; // x21
  System_Text_RegularExpressions_Capture_o *Item; // x0
  System_String_o *Value; // x22
  System_Text_RegularExpressions_Capture_o *v10; // x0
  System_String_o *v11; // x21
  _BOOL8 NumericFormat; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  struct System_Int32_array *values; // x8
  int32_t endFuncIndex; // [xsp+4h] [xbp-3Ch] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-38h] BYREF
  int32_t funcIndex[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F79FF & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IsValidIndex_int___, matchObj);
    sub_B16FFC(&SkillDetailParamFormatResolver_TypeInfo, v5);
    byte_40F79FF = 1;
  }
  *(_QWORD *)funcIndex = 0LL;
  numericFormatData = 0LL;
  endFuncIndex = 0;
  if ( !matchObj )
    goto LABEL_22;
  v6 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer, const MethodInfo *))matchObj->klass->vtable._5_get_Groups.method)(
                                                             matchObj,
                                                             matchObj->klass->vtable._6_GroupToStringImpl.methodPtr,
                                                             method);
  funcIndex[1] = 0;
  numericFormatData = 0LL;
  if ( !v6 )
    goto LABEL_22;
  v7 = v6;
  Item = (System_Text_RegularExpressions_Capture_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                       v6,
                                                       1,
                                                       0LL);
  if ( !Item )
    goto LABEL_22;
  Value = System_Text_RegularExpressions_Capture__get_Value(Item, 0LL);
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  }
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(funcIndex, &endFuncIndex, Value, 0LL)
    && BasicHelper__IsValidIndex_int_(
         this->fields.values,
         funcIndex[0],
         (const MethodInfo_18B839C *)Method_BasicHelper_IsValidIndex_int___) )
  {
    v10 = (System_Text_RegularExpressions_Capture_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                        v7,
                                                        3,
                                                        0LL);
    if ( !v10 )
      goto LABEL_22;
    v11 = System_Text_RegularExpressions_Capture__get_Value(v10, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    NumericFormat = SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, &funcIndex[1], v11, 0LL);
    if ( NumericFormat )
    {
      values = this->fields.values;
      if ( values )
      {
        if ( funcIndex[0] >= values->max_length )
        {
          sub_B17100(NumericFormat, v13, v14);
          sub_B170A0();
        }
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[funcIndex[0] + 1],
                   funcIndex[1],
                   v15);
      }
LABEL_22:
      sub_B170D4();
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}