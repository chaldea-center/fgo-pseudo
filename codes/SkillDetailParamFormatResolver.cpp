void __fastcall SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Text_RegularExpressions_Regex_o *v8; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *v16; // x19
  SkillDetailParamFormatResolver_NumericFormatData_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  SkillDetailParamFormatResolver_NumericFormatData_o *v20; // x20
  SkillDetailParamFormatResolver_NumericFormatData_o *v21; // x20
  struct SkillDetailParamFormatResolver_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4186D6F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__,
      v1);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__,
      v2);
    sub_B2C35C(
      &System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo,
      v3);
    sub_B2C35C(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v4);
    sub_B2C35C(&System_Text_RegularExpressions_Regex_TypeInfo, v5);
    sub_B2C35C(&SkillDetailParamFormatResolver_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15869/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, v7);
    byte_4186D6F = 1;
  }
  v8 = (System_Text_RegularExpressions_Regex_o *)sub_B2C42C(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_16108888(v8, (System_String_o *)StringLiteral_15869/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B2C2F8(static_fields, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)sub_B2C42C(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData____ctor(
    v16,
    (const MethodInfo_2DFD9D4 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v17 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B2C42C(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v17, 1, 0, 0LL);
  if ( !v16 )
    sub_B2C434(v18, v19);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v16,
    0x64u,
    v17,
    (const MethodInfo_2DFE588 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v20 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B2C42C(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v20, 10, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v16,
    0x6Du,
    v20,
    (const MethodInfo_2DFE588 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v21 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B2C42C(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v21, 100, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v16,
    0x79u,
    v21,
    (const MethodInfo_2DFE588 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v22 = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  v22->NumericFormatDict = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v22->NumericFormatDict,
    (System_Int32_array **)v16,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  __int64 v11; // x1
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
  SkillDetailParamFormatResolver_c *v24; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v26; // x22

  if ( (byte_4186D69 & 1) == 0 )
  {
    sub_B2C35C(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, skillLvEntity);
    sub_B2C35C(&SkillDetailParamFormatResolver_TypeInfo, v5);
    sub_B2C35C(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__, v6);
    sub_B2C35C(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23679/*"{{"*/, v8);
    byte_4186D69 = 1;
  }
  v9 = sub_B2C42C(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
  SkillDetailParamFormatResolver___c__DisplayClass11_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass11_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 24) = skillLvEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)skillLvEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23679/*"{{"*/, 0LL) )
  {
    *(_QWORD *)(v9 + 16) = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), 0LL, v18, v19, v20, v21, v22, v23);
    v24 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v24 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v24->static_fields->ParamFormatRegex;
    v26 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B2C42C(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v26,
      (Il2CppObject *)v9,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_16116880(ParamFormatRegex, detailText, v26, 0LL);
LABEL_12:
    sub_B2C434(v10, v11);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  SkillDetailParamFormatResolver_c *v18; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v20; // x22

  if ( (byte_4186D6A & 1) == 0 )
  {
    sub_B2C35C(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, values);
    sub_B2C35C(&SkillDetailParamFormatResolver_TypeInfo, v5);
    sub_B2C35C(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__, v6);
    sub_B2C35C(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23679/*"{{"*/, v8);
    byte_4186D6A = 1;
  }
  v9 = sub_B2C42C(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
  SkillDetailParamFormatResolver___c__DisplayClass12_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = values;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)values, v12, v13, v14, v15, v16, v17);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23679/*"{{"*/, 0LL) )
  {
    v18 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v18 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v18->static_fields->ParamFormatRegex;
    v20 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B2C42C(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v20,
      (Il2CppObject *)v9,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_16116880(ParamFormatRegex, detailText, v20, 0LL);
LABEL_12:
    sub_B2C434(v10, v11);
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

  if ( (byte_4186D6E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, ent);
    sub_B2C35C(&StringLiteral_12887/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v5);
    byte_4186D6E = 1;
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
        System_String__Format_44306596((System_String_o *)StringLiteral_12887/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v7, v8, v9, 0LL);
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
  if ( (byte_4186D6B & 1) == 0 )
  {
    funcIndex = (int32_t *)sub_B2C35C(&char___TypeInfo, endFuncIndex);
    byte_4186D6B = 1;
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
  funcIndex = (int32_t *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !funcIndex )
    goto LABEL_17;
  if ( !funcIndex[6] )
    goto LABEL_18;
  *((_WORD *)funcIndex + 16) = 95;
  funcIndex = (int32_t *)System_String__Split(rawString, (System_Char_array *)funcIndex, 0LL);
  if ( !funcIndex )
LABEL_17:
    sub_B2C434(funcIndex, endFuncIndex);
  v9 = funcIndex;
  if ( !funcIndex[6] )
  {
LABEL_18:
    v11 = sub_B2C460(funcIndex);
    sub_B2C400(v11, 0LL);
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

  if ( (byte_4186D6C & 1) == 0 )
  {
    sub_B2C35C(&SkillDetailParamFormatResolver_TypeInfo, valsKeyStr);
    sub_B2C35C(&StringLiteral_15883/*"]が取れませんでした"*/, v7);
    sub_B2C35C(&StringLiteral_22457/*"svalsから["*/, v8);
    byte_4186D6C = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v16 = (System_Int32_array **)System_String__Concat_44307816(
                                   (System_String_o *)StringLiteral_22457/*"svalsから["*/,
                                   valsKeyStr,
                                   (System_String_o *)StringLiteral_15883/*"]が取れませんでした"*/,
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
    sub_B2C2F8(
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
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v30; // x8
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__15_0; // x22
  System_String_o *v33; // x21
  Il2CppObject *v34; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_string__o *v42; // x0
  System_String_o *v43; // x20
  __int64 v44; // x0
  System_String_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  SkillDetailParamFormatResolver_c *v52; // x8
  System_Int32_array **v53; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v54; // x0
  int v56; // [xsp+Ch] [xbp-44h] BYREF
  int v57; // [xsp+18h] [xbp-38h] BYREF
  uint16_t v58; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4186D6D & 1) == 0 )
  {
    sub_B2C35C(&char_TypeInfo, fractionalDigit);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__,
      v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_char__string___, v9);
    sub_B2C35C(&Method_System_Func_char__string___ctor__, v10);
    sub_B2C35C(&System_Func_char__string__TypeInfo, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&SkillDetailParamFormatResolver_TypeInfo, v13);
    sub_B2C35C(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__, v14);
    sub_B2C35C(&SkillDetailParamFormatResolver___c_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_23869/*"指定可能な少数点以下の桁数は({0}～{1})です"*/, v16);
    sub_B2C35C(&StringLiteral_23881/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/, v17);
    sub_B2C35C(&StringLiteral_699/*","*/, v18);
    byte_4186D6D = 1;
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
          (const MethodInfo_2E002AC *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
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
               (const MethodInfo_2DFE194 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v30 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( (BYTE3(SkillDetailParamFormatResolver___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v30 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      static_fields = v30->static_fields;
      _9__15_0 = static_fields->__9__15_0;
      v33 = (System_String_o *)StringLiteral_699/*","*/;
      if ( !_9__15_0 )
      {
        if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)static_fields->__9;
        _9__15_0 = (System_Func_char__string__o *)sub_B2C42C(System_Func_char__string__TypeInfo);
        System_Func_char__string____ctor(
          _9__15_0,
          v34,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          (const MethodInfo_270B9E8 *)Method_System_Func_char__string___ctor__);
        v35 = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        v35->__9__15_0 = _9__15_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v35->__9__15_0,
          (System_Int32_array **)_9__15_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      v42 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_1A94FDC *)Method_System_Linq_Enumerable_Select_char__string___);
      v43 = System_String__Join_44360976(v33, v42, 0LL);
      v58 = System_String__get_Chars(formatKey, 0, 0LL);
      v44 = j_il2cpp_value_box_0(char_TypeInfo, &v58);
      v25 = &StringLiteral_23881/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v27 = (Il2CppObject *)v44;
      v26 = (Il2CppObject *)v43;
      goto LABEL_25;
    }
LABEL_31:
    sub_B2C434(Chars, fractionalDigit);
  }
  if ( formatKey->fields.m_stringLength < 2 )
    return 1;
  v21 = 1;
  v22 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v22 - 48;
  if ( (unsigned __int16)(v22 - 49) >= 3u )
  {
    v57 = 1;
    v23 = j_il2cpp_value_box_0(int_TypeInfo, &v57);
    v56 = 3;
    v24 = j_il2cpp_value_box_0(int_TypeInfo, &v56);
    v25 = &StringLiteral_23869/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v26 = (Il2CppObject *)v24;
    v27 = (Il2CppObject *)v23;
LABEL_25:
    v45 = System_String__Format_44301068((System_String_o *)*v25, v27, v26, 0LL);
    v52 = SkillDetailParamFormatResolver_TypeInfo;
    v53 = (System_Int32_array **)v45;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v52 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v54 = v52->static_fields;
    v54->evaluationErrorMessage = (struct System_String_o *)v53;
    sub_B2C2F8((BattleServantConfConponent_o *)&v54->evaluationErrorMessage, v53, v46, v47, v48, v49, v50, v51);
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
  sub_B2C2F8(&this->fields, skillLvEntity);
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
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  Il2CppObject *v24; // x23
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v27; // x0
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x0
  int v32; // [xsp+4h] [xbp-3Ch] BYREF
  int v33; // [xsp+8h] [xbp-38h] BYREF
  int v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4185462 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_DataVals___, *(_QWORD *)&funcIndex);
    sub_B2C35C(&Method_BasicHelper_IsValidIndex_DataVals___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_23644/*"{0}_{1})に該当する効果が存在しません"*/, v13);
    sub_B2C35C(&StringLiteral_23667/*"{0}番目の効果が存在しません"*/, v14);
    byte_4185462 = 1;
  }
  *errorMessage = 0LL;
  sub_B2C2F8(errorMessage, 0LL);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v15);
  if ( BasicHelper__IsValidIndex_object__24284012(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_1728B6C *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v17);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)EndSkillValsDict,
              funcIndex,
              (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v21);
        EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v22);
        if ( !EndSkillValsDict )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 EndSkillValsDict,
                 funcIndex,
                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__24284012(
                (System_Object_array *)Item,
                endFuncIndex,
                (const MethodInfo_1728B6C *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v33 = funcIndex + 1;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
          v32 = endFuncIndex + 1;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
          v26 = System_String__Format_44301068((System_String_o *)StringLiteral_23644/*"{0}_{1})に該当する効果が存在しません"*/, v24, v25, 0LL);
          *errorMessage = v26;
          sub_B2C2F8(errorMessage, v26);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v20);
      if ( EndSkillValsDict )
      {
        v27 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                EndSkillValsDict,
                funcIndex,
                (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v27,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_B2C434(EndSkillValsDict, v19);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(this, v17);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields.entries) <= funcIndex )
    {
      v31 = sub_B2C460(EndSkillValsDict);
      sub_B2C400(v31, 0LL);
    }
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields.count + funcIndex);
  }
  else
  {
    v34 = funcIndex + 1;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    v30 = System_String__Format((System_String_o *)StringLiteral_23667/*"{0}番目の効果が存在しません"*/, v29, 0LL);
    *errorMessage = v30;
    sub_B2C2F8(errorMessage, v30);
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
  __int64 v10; // x1
  WarBoardAIRoute_RouteData_o *EndSkillValsArrayFromRootValsForDisplay; // x21
  const MethodInfo *v12; // x1
  __int64 v13; // x0

  if ( (byte_4185463 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&funcIndex);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__, v6);
    byte_4185463 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (FunctionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                                    this,
                                                                                                    v8);
  if ( !RootSkillValsArray )
    goto LABEL_11;
  if ( LODWORD(RootSkillValsArray->fields.entries) <= funcIndex )
  {
    v13 = sub_B2C460(RootSkillValsArray);
    sub_B2C400(v13, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster
    || (EndSkillValsArrayFromRootValsForDisplay = (WarBoardAIRoute_RouteData_o *)FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                                                   Master_WarQuestSelectionMaster,
                                                                                   *((DataVals_o **)&RootSkillValsArray->fields.count
                                                                                   + funcIndex),
                                                                                   0LL),
        (RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v12)) == 0LL) )
  {
LABEL_11:
    sub_B2C434(RootSkillValsArray, v10);
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    RootSkillValsArray,
    funcIndex,
    EndSkillValsArrayFromRootValsForDisplay,
    (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__DataVals____o **p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1

  if ( (byte_4185461 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo, v3);
    byte_4185461 = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = &this->fields.endSkillValsDict;
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v5,
      (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    *p_endSkillValsDict = (struct System_Collections_Generic_Dictionary_int__DataVals____o *)v5;
    sub_B2C2F8(p_endSkillValsDict, v5);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v5;
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
      sub_B2C434(0LL, method);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0LL);
    *p_rootSkillValsArray = rootSkillValsArray;
    sub_B2C2F8(p_rootSkillValsArray, rootSkillValsArray);
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

  if ( (byte_4185466 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&value);
    sub_B2C35C(&StringLiteral_18937/*"f{0}"*/, v7);
    byte_4185466 = 1;
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
    v10 = System_String__Format((System_String_o *)StringLiteral_18937/*"f{0}"*/, v9, 0LL);
    v12 = System_Double__ToString_44253324(v11, &format, (const MethodInfo *)v10);
  }
  v14 = v12;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v13);
  return System_String__Concat_44305532(v14, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver_NumericFormatData_o *v2; // x19

  v2 = this;
  if ( (byte_4185465 & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B2C35C(&string_TypeInfo, method);
    byte_4185465 = 1;
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

  if ( (byte_4185464 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v1);
    sub_B2C35C(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_6537/*"FUNC_VALUE_PERCENT"*/, v3);
    byte_4185464 = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6537/*"FUNC_VALUE_PERCENT"*/, 0LL);
    static_fields = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields;
    static_fields->percentStr = percentStr;
    sub_B2C2F8(static_fields, percentStr);
  }
  return percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x0

  if ( (byte_418545E & 1) == 0 )
  {
    sub_B2C35C(&SkillDetailParamFormatResolver___c_TypeInfo, v1);
    byte_418545E = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SkillDetailParamFormatResolver___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v12; // x1
  long double v13; // q0
  System_Text_RegularExpressions_GroupCollection_o *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x22
  const MethodInfo *v17; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x23
  int32_t v19; // w20
  int32_t v20; // w22
  DataVals_o *v21; // x0
  DataVals_o *v22; // x20
  System_String_o *v23; // x21
  const MethodInfo *v24; // x3
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  __int64 value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_418545F & 1) == 0 )
  {
    sub_B2C35C(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj);
    sub_B2C35C(&SkillDetailParamFormatResolver_TypeInfo, v5);
    byte_418545F = 1;
  }
  numericFormatData = 0LL;
  value = 0LL;
  *(_QWORD *)endFuncIndex = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v8 = (Il2CppObject *)sub_B2C42C(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    System_Object___ctor(v8, 0LL);
    v8[1].klass = (Il2CppClass *)skillLvEntity;
    sub_B2C2F8(&v8[1], skillLvEntity);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v8;
    sub_B2C2F8(&this->fields, v8);
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
  *(__n128 *)&v13 = sub_B2C2F8(&static_fields->evaluationErrorMessage, 0LL);
  if ( !matchObj )
    goto LABEL_31;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer, long double))matchObj->klass->vtable._5_get_Groups.method)(
                                                               matchObj,
                                                               matchObj->klass->vtable._6_GroupToStringImpl.methodPtr,
                                                               v13);
  numericFormatData = 0LL;
  value = 0LL;
  if ( !Item )
    goto LABEL_31;
  v14 = Item;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                               Item,
                                                               1,
                                                               0LL);
  if ( !Item )
    goto LABEL_31;
  v15 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, v15, 0LL) )
  {
    Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                 v14,
                                                                 3,
                                                                 0LL);
    if ( !Item )
      goto LABEL_31;
    v16 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, (int32_t *)&value + 1, v16, 0LL) )
    {
      Item = (System_Text_RegularExpressions_GroupCollection_o *)SkillDetailParamFormatResolver_TypeInfo;
      dataValsHierarchyCache = p_fields->dataValsHierarchyCache;
      v20 = endFuncIndex[0];
      v19 = endFuncIndex[1];
      if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      }
      if ( !dataValsHierarchyCache )
        goto LABEL_31;
      v21 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              dataValsHierarchyCache,
              v19,
              v20,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v17);
      if ( v21 )
      {
        v22 = v21;
        Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     v14,
                                                                     2,
                                                                     0LL);
        if ( !Item )
          goto LABEL_31;
        v23 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
        if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
        }
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue((int32_t *)&value, v23, v22, 0LL) )
        {
          Item = (System_Text_RegularExpressions_GroupCollection_o *)numericFormatData;
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     value,
                     SHIDWORD(value),
                     v24);
LABEL_31:
          sub_B2C434(Item, v12);
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
  if ( (byte_4185460 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IsValidIndex_int___, matchObj);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_B2C35C(
                                                                       &SkillDetailParamFormatResolver_TypeInfo,
                                                                       v5);
    byte_4185460 = 1;
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
         (const MethodInfo_1728B04 *)Method_BasicHelper_IsValidIndex_int___) )
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
          v12 = sub_B2C460(this);
          sub_B2C400(v12, 0LL);
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
      sub_B2C434(this, matchObj);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}