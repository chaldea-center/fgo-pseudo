void __fastcall SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Text_RegularExpressions_Regex_o *v22; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *v30; // x19
  SkillDetailParamFormatResolver_NumericFormatData_o *v31; // x20
  __int64 v32; // x0
  __int64 v33; // x1
  SkillDetailParamFormatResolver_NumericFormatData_o *v34; // x20
  SkillDetailParamFormatResolver_NumericFormatData_o *v35; // x20
  struct SkillDetailParamFormatResolver_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_42E97B7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__,
      v1,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__,
      v4,
      v5,
      v6);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo,
      v7,
      v8,
      v9);
    sub_B5D5C4(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SkillDetailParamFormatResolver_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_16060/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, v19, v20, v21);
    byte_42E97B7 = 1;
  }
  v22 = (System_Text_RegularExpressions_Regex_o *)sub_B5D694(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_48773692(v22, (System_String_o *)StringLiteral_16060/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v22;
  sub_B5D560(static_fields, (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)sub_B5D694(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData____ctor(
    v30,
    (const MethodInfo_2EADFFC *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v31 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B5D694(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v31, 1, 0, 0LL);
  if ( !v30 )
    sub_B5D69C(v32, v33);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v30,
    0x64u,
    v31,
    (const MethodInfo_2EAEBB0 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v34 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B5D694(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v34, 10, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v30,
    0x6Du,
    v34,
    (const MethodInfo_2EAEBB0 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v35 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B5D694(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v35, 100, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v30,
    0x79u,
    v35,
    (const MethodInfo_2EAEBB0 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v36 = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  v36->NumericFormatDict = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v36->NumericFormatDict,
    (System_Int32_array **)v30,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
}


System_String_o *__fastcall SkillDetailParamFormatResolver__Apply(
        System_String_o *detailText,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  SkillDetailParamFormatResolver_c *v33; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v35; // x22

  if ( (byte_42E97B1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, (_DWORD)skillLvEntity, (_DWORD)method, v3);
    sub_B5D5C4(&SkillDetailParamFormatResolver_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__, v9, v10, v11);
    sub_B5D5C4(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23991/*"{{"*/, v15, v16, v17);
    byte_42E97B1 = 1;
  }
  v18 = sub_B5D694(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
  SkillDetailParamFormatResolver___c__DisplayClass11_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass11_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_QWORD *)(v18 + 24) = skillLvEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)skillLvEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23991/*"{{"*/, 0LL) )
  {
    *(_QWORD *)(v18 + 16) = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), 0LL, v27, v28, v29, v30, v31, v32);
    v33 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v33 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v33->static_fields->ParamFormatRegex;
    v35 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B5D694(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v35,
      (Il2CppObject *)v18,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_48781684(ParamFormatRegex, detailText, v35, 0LL);
LABEL_12:
    sub_B5D69C(v19, v20);
  }
  return detailText;
}


System_String_o *__fastcall SkillDetailParamFormatResolver__ApplyGivenValues(
        System_String_o *detailText,
        System_Int32_array *values,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  SkillDetailParamFormatResolver_c *v27; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v29; // x22

  if ( (byte_42E97B2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, (_DWORD)values, (_DWORD)method, v3);
    sub_B5D5C4(&SkillDetailParamFormatResolver_TypeInfo, v6, v7, v8);
    sub_B5D5C4(
      &Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23991/*"{{"*/, v15, v16, v17);
    byte_42E97B2 = 1;
  }
  v18 = sub_B5D694(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
  SkillDetailParamFormatResolver___c__DisplayClass12_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_QWORD *)(v18 + 16) = values;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)values, v21, v22, v23, v24, v25, v26);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_23991/*"{{"*/, 0LL) )
  {
    v27 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v27 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v27->static_fields->ParamFormatRegex;
    v29 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B5D694(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v29,
      (Il2CppObject *)v18,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_48781684(ParamFormatRegex, detailText, v29, 0LL);
LABEL_12:
    sub_B5D69C(v19, v20);
  }
  return detailText;
}


void __fastcall SkillDetailParamFormatResolver__AssertFailed(
        System_Text_RegularExpressions_Match_o *matchObj,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *Value; // x0
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int32_t skillDetailId; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E97B6 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)ent, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_13043/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v6, v7, v8);
    byte_42E97B6 = 1;
  }
  if ( matchObj )
  {
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
    if ( ent )
    {
      if ( Value )
      {
        skillId = ent->fields.skillId;
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillId);
        lv = ent->fields.lv;
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        skillDetailId = ent->fields.skillDetailId;
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillDetailId);
        System_String__Format_44578852((System_String_o *)StringLiteral_13043/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v10, v11, v12, 0LL);
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
  if ( (byte_42E97B3 & 1) == 0 )
  {
    funcIndex = (int32_t *)sub_B5D5C4(&char___TypeInfo, (_DWORD)endFuncIndex, (_DWORD)rawString, method);
    byte_42E97B3 = 1;
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
  funcIndex = (int32_t *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !funcIndex )
    goto LABEL_17;
  if ( !funcIndex[6] )
    goto LABEL_18;
  *((_WORD *)funcIndex + 16) = 95;
  funcIndex = (int32_t *)System_String__Split(rawString, (System_Char_array *)funcIndex, 0LL);
  if ( !funcIndex )
LABEL_17:
    sub_B5D69C(funcIndex, endFuncIndex);
  v9 = funcIndex;
  if ( !funcIndex[6] )
  {
LABEL_18:
    v11 = sub_B5D6C8(funcIndex);
    sub_B5D668(v11, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x19
  SkillDetailParamFormatResolver_c *v21; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_42E97B4 & 1) == 0 )
  {
    sub_B5D5C4(&SkillDetailParamFormatResolver_TypeInfo, (_DWORD)valsKeyStr, (_DWORD)vals, method);
    sub_B5D5C4(&StringLiteral_16074/*"]が取れませんでした"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_22761/*"svalsから["*/, v10, v11, v12);
    byte_42E97B4 = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v20 = (System_Int32_array **)System_String__Concat_44580072(
                                   (System_String_o *)StringLiteral_22761/*"svalsから["*/,
                                   valsKeyStr,
                                   (System_String_o *)StringLiteral_16074/*"]が取れませんでした"*/,
                                   0LL);
    v21 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v21 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v21->static_fields;
    static_fields->evaluationErrorMessage = (struct System_String_o *)v20;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->evaluationErrorMessage,
      v20,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return 0;
}


bool __fastcall SkillDetailParamFormatResolver__TryGetNumericFormat(
        SkillDetailParamFormatResolver_NumericFormatData_o **numericFormatData,
        int32_t *fractionalDigit,
        System_String_o *formatKey,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *Chars; // x0
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *monitor; // x22
  bool v45; // w21
  uint16_t v46; // w0
  __int64 v47; // x19
  __int64 v48; // x0
  __int64 *v49; // x8
  Il2CppObject *v50; // x2
  Il2CppObject *v51; // x1
  SkillDetailParamFormatResolver_c *v52; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v54; // x8
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__15_0; // x22
  System_String_o *v57; // x21
  Il2CppObject *v58; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerable_string__o *v66; // x0
  System_String_o *v67; // x20
  __int64 v68; // x0
  System_String_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  SkillDetailParamFormatResolver_c *v76; // x8
  System_Int32_array **v77; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v78; // x0
  int v80; // [xsp+Ch] [xbp-44h] BYREF
  int v81; // [xsp+18h] [xbp-38h] BYREF
  uint16_t v82; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42E97B5 & 1) == 0 )
  {
    sub_B5D5C4(&char_TypeInfo, (_DWORD)fractionalDigit, (_DWORD)formatKey, method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_char__string___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_char__string___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_char__string__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&int_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&SkillDetailParamFormatResolver_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__, v28, v29, v30);
    sub_B5D5C4(&SkillDetailParamFormatResolver___c_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_24190/*"指定可能な少数点以下の桁数は({0}～{1})です"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_24202/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_707/*","*/, v40, v41, v42);
    byte_42E97B5 = 1;
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
          (const MethodInfo_2EB08D4 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v52 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v52 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = v52->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___get_Keys(
               Chars,
               (const MethodInfo_2EAE7BC *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v54 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( (BYTE3(SkillDetailParamFormatResolver___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v54 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      static_fields = v54->static_fields;
      _9__15_0 = static_fields->__9__15_0;
      v57 = (System_String_o *)StringLiteral_707/*","*/;
      if ( !_9__15_0 )
      {
        if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54);
          static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        }
        v58 = (Il2CppObject *)static_fields->__9;
        _9__15_0 = (System_Func_char__string__o *)sub_B5D694(System_Func_char__string__TypeInfo);
        System_Func_char__string____ctor(
          _9__15_0,
          v58,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          (const MethodInfo_279D0E4 *)Method_System_Func_char__string___ctor__);
        v59 = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        v59->__9__15_0 = _9__15_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v59->__9__15_0,
          (System_Int32_array **)_9__15_0,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
      }
      v66 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_1CB1290 *)Method_System_Linq_Enumerable_Select_char__string___);
      v67 = System_String__Join_44633232(v57, v66, 0LL);
      v82 = System_String__get_Chars(formatKey, 0, 0LL);
      v68 = j_il2cpp_value_box_0(char_TypeInfo, &v82);
      v49 = &StringLiteral_24202/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v51 = (Il2CppObject *)v68;
      v50 = (Il2CppObject *)v67;
      goto LABEL_25;
    }
LABEL_31:
    sub_B5D69C(Chars, fractionalDigit);
  }
  if ( formatKey->fields.m_stringLength < 2 )
    return 1;
  v45 = 1;
  v46 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v46 - 48;
  if ( (unsigned __int16)(v46 - 49) >= 3u )
  {
    v81 = 1;
    v47 = j_il2cpp_value_box_0(int_TypeInfo, &v81);
    v80 = 3;
    v48 = j_il2cpp_value_box_0(int_TypeInfo, &v80);
    v49 = &StringLiteral_24190/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v50 = (Il2CppObject *)v48;
    v51 = (Il2CppObject *)v47;
LABEL_25:
    v69 = System_String__Format_44573324((System_String_o *)*v49, v51, v50, 0LL);
    v76 = SkillDetailParamFormatResolver_TypeInfo;
    v77 = (System_Int32_array **)v69;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v76 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v78 = v76->static_fields;
    v78->evaluationErrorMessage = (struct System_String_o *)v77;
    sub_B5D560((BattleServantConfConponent_o *)&v78->evaluationErrorMessage, v77, v70, v71, v72, v73, v74, v75);
    return 0;
  }
  return v45;
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache___ctor(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SkillLvEntity_k__BackingField = skillLvEntity;
  sub_B5D560(&this->fields);
}


DataVals_o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        int32_t endFuncIndex,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  const MethodInfo *v27; // x1
  System_Object_array *RootSkillValsArray; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *EndSkillValsDict; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v38; // x0
  Il2CppObject *v40; // x0
  __int64 v41; // x0
  int v42; // [xsp+4h] [xbp-3Ch] BYREF
  int v43; // [xsp+8h] [xbp-38h] BYREF
  int v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E5DDF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_DataVals___, funcIndex, endFuncIndex, errorMessage);
    sub_B5D5C4(&Method_BasicHelper_IsValidIndex_DataVals___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__, v15, v16, v17);
    sub_B5D5C4(&int_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_23956/*"{0}_{1})に該当する効果が存在しません"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_23979/*"{0}番目の効果が存在しません"*/, v24, v25, v26);
    byte_42E5DDF = 1;
  }
  *errorMessage = 0LL;
  sub_B5D560(errorMessage);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v27);
  if ( BasicHelper__IsValidIndex_object__28152308(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_1AD91F4 *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v29);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)EndSkillValsDict,
              funcIndex,
              (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v33);
        EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v34);
        if ( !EndSkillValsDict )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 EndSkillValsDict,
                 funcIndex,
                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__28152308(
                (System_Object_array *)Item,
                endFuncIndex,
                (const MethodInfo_1AD91F4 *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v43 = funcIndex + 1;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
          v42 = endFuncIndex + 1;
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
          *errorMessage = System_String__Format_44573324((System_String_o *)StringLiteral_23956/*"{0}_{1})に該当する効果が存在しません"*/, v36, v37, 0LL);
          sub_B5D560(errorMessage);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v32);
      if ( EndSkillValsDict )
      {
        v38 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                EndSkillValsDict,
                funcIndex,
                (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v38,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_B5D69C(EndSkillValsDict, v31);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(this, v29);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields.entries) <= funcIndex )
    {
      v41 = sub_B5D6C8(EndSkillValsDict);
      sub_B5D668(v41, 0LL);
    }
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields.count + funcIndex);
  }
  else
  {
    v44 = funcIndex + 1;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    *errorMessage = System_String__Format((System_String_o *)StringLiteral_23979/*"{0}番目の効果が存在しません"*/, v40, 0LL);
    sub_B5D560(errorMessage);
    return 0LL;
  }
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  FunctionMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v13; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *RootSkillValsArray; // x0
  __int64 v15; // x1
  WarBoardAIRoute_RouteData_o *EndSkillValsArrayFromRootValsForDisplay; // x21
  const MethodInfo *v17; // x1
  __int64 v18; // x0

  if ( (byte_42E5DE0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, funcIndex, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__, v9, v10, v11);
    byte_42E5DE0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (FunctionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                                    this,
                                                                                                    v13);
  if ( !RootSkillValsArray )
    goto LABEL_11;
  if ( LODWORD(RootSkillValsArray->fields.entries) <= funcIndex )
  {
    v18 = sub_B5D6C8(RootSkillValsArray);
    sub_B5D668(v18, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster
    || (EndSkillValsArrayFromRootValsForDisplay = (WarBoardAIRoute_RouteData_o *)FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                                                   Master_WarQuestSelectionMaster,
                                                                                   *((DataVals_o **)&RootSkillValsArray->fields.count
                                                                                   + funcIndex),
                                                                                   0LL),
        (RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v17)) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(RootSkillValsArray, v15);
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    RootSkillValsArray,
    funcIndex,
    EndSkillValsArrayFromRootValsForDisplay,
    (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_int__DataVals____o **p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v9; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1

  if ( (byte_42E5DDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo, v5, v6, v7);
    byte_42E5DDE = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = &this->fields.endSkillValsDict;
  v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v9,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    *p_endSkillValsDict = (struct System_Collections_Generic_Dictionary_int__DataVals____o *)v9;
    sub_B5D560(p_endSkillValsDict);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v9;
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
      sub_B5D69C(0LL, method);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0LL);
    *p_rootSkillValsArray = rootSkillValsArray;
    sub_B5D560(p_rootSkillValsArray);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t shiftDigit; // w8
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  double v13; // d0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x1
  System_String_o *v16; // x20
  System_String_o *SuffixStr; // x0
  int32_t v19; // [xsp+0h] [xbp-30h] BYREF
  int v20; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o format; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5DE3 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, value, fractionalDigit, method);
    sub_B5D5C4(&StringLiteral_19176/*"f{0}"*/, v7, v8, v9);
    byte_42E5DE3 = 1;
  }
  format.klass = 0LL;
  v20 = 0;
  shiftDigit = this->fields.shiftDigit;
  if ( fractionalDigit < 1 )
  {
    v20 = value / shiftDigit;
    v14 = System_Int32__ToString((int32_t)&v20, 0LL);
  }
  else
  {
    *(double *)&format.klass = (double)value / (double)shiftDigit;
    v19 = fractionalDigit;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v12 = System_String__Format((System_String_o *)StringLiteral_19176/*"f{0}"*/, v11, 0LL);
    v14 = System_Double__ToString_44521484(v13, &format, (const MethodInfo *)v12);
  }
  v16 = v14;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v15);
  return System_String__Concat_44577788(v16, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SkillDetailParamFormatResolver_NumericFormatData_o *v4; // x19

  v4 = this;
  if ( (byte_42E5DE2 & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5DE2 = 1;
  }
  if ( v4->fields.suffixType == 1 )
    return SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr((const MethodInfo *)this);
  else
    return string_TypeInfo->static_fields->Empty;
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *percentStr; // x19
  struct SkillDetailParamFormatResolver_NumericFormatData_StaticFields *static_fields; // x8

  if ( (byte_42E5DE1 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_6616/*"FUNC_VALUE_PERCENT"*/, v7, v8, v9);
    byte_42E5DE1 = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6616/*"FUNC_VALUE_PERCENT"*/, 0LL);
    static_fields = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields;
    static_fields->percentStr = percentStr;
    sub_B5D560(static_fields);
  }
  return percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DDB & 1) == 0 )
  {
    sub_B5D5C4(&SkillDetailParamFormatResolver___c_TypeInfo, v1, v2, v3);
    byte_42E5DDB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SkillDetailParamFormatResolver___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  struct SkillLvEntity_o *skillLvEntity; // x22
  Il2CppObject *v11; // x23
  SkillDetailParamFormatResolver_c *v12; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
  __int64 v15; // x1
  long double v16; // q0
  System_Text_RegularExpressions_GroupCollection_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  const MethodInfo *v20; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x23
  int32_t v22; // w20
  int32_t v23; // w22
  DataVals_o *v24; // x0
  DataVals_o *v25; // x20
  System_String_o *v26; // x21
  const MethodInfo *v27; // x3
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  __int64 value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E5DDC & 1) == 0 )
  {
    sub_B5D5C4(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, (_DWORD)matchObj, (_DWORD)method, v3);
    sub_B5D5C4(&SkillDetailParamFormatResolver_TypeInfo, v6, v7, v8);
    byte_42E5DDC = 1;
  }
  numericFormatData = 0LL;
  value = 0LL;
  *(_QWORD *)endFuncIndex = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v11 = (Il2CppObject *)sub_B5D694(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    System_Object___ctor(v11, 0LL);
    v11[1].klass = (Il2CppClass *)skillLvEntity;
    sub_B5D560(&v11[1]);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v11;
    sub_B5D560(&this->fields);
  }
  v12 = SkillDetailParamFormatResolver_TypeInfo;
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v12 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->evaluationErrorMessage = 0LL;
  *(__n128 *)&v16 = sub_B5D560(&static_fields->evaluationErrorMessage);
  if ( !matchObj )
    goto LABEL_31;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer, long double))matchObj->klass->vtable._5_get_Groups.method)(
                                                               matchObj,
                                                               matchObj->klass->vtable._6_GroupToStringImpl.methodPtr,
                                                               v16);
  numericFormatData = 0LL;
  value = 0LL;
  if ( !Item )
    goto LABEL_31;
  v17 = Item;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                               Item,
                                                               1,
                                                               0LL);
  if ( !Item )
    goto LABEL_31;
  v18 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, v18, 0LL) )
  {
    Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                 v17,
                                                                 3,
                                                                 0LL);
    if ( !Item )
      goto LABEL_31;
    v19 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, (int32_t *)&value + 1, v19, 0LL) )
    {
      Item = (System_Text_RegularExpressions_GroupCollection_o *)SkillDetailParamFormatResolver_TypeInfo;
      dataValsHierarchyCache = p_fields->dataValsHierarchyCache;
      v23 = endFuncIndex[0];
      v22 = endFuncIndex[1];
      if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      }
      if ( !dataValsHierarchyCache )
        goto LABEL_31;
      v24 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              dataValsHierarchyCache,
              v22,
              v23,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v20);
      if ( v24 )
      {
        v25 = v24;
        Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     v17,
                                                                     2,
                                                                     0LL);
        if ( !Item )
          goto LABEL_31;
        v26 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
        if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
        }
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue((int32_t *)&value, v26, v25, 0LL) )
        {
          Item = (System_Text_RegularExpressions_GroupCollection_o *)numericFormatData;
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     value,
                     SHIDWORD(value),
                     v27);
LABEL_31:
          sub_B5D69C(Item, v15);
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
  __int64 v3; // x3
  SkillDetailParamFormatResolver___c__DisplayClass12_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Text_RegularExpressions_GroupCollection_o *v9; // x21
  System_String_o *Value; // x22
  System_String_o *v11; // x21
  const MethodInfo *v12; // x3
  struct System_Int32_array *values; // x8
  __int64 v15; // x0
  int32_t endFuncIndex; // [xsp+4h] [xbp-3Ch] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-38h] BYREF
  int32_t funcIndex[2]; // [xsp+18h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42E5DDD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IsValidIndex_int___, (_DWORD)matchObj, (_DWORD)method, v3);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_B5D5C4(
                                                                       &SkillDetailParamFormatResolver_TypeInfo,
                                                                       v6,
                                                                       v7,
                                                                       v8);
    byte_42E5DDD = 1;
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
  v9 = (System_Text_RegularExpressions_GroupCollection_o *)this;
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
         v5->fields.values,
         funcIndex[0],
         (const MethodInfo_1AD918C *)Method_BasicHelper_IsValidIndex_int___) )
  {
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                       v9,
                                                                       3,
                                                                       0LL);
    if ( !this )
      goto LABEL_22;
    v11 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)SkillDetailParamFormatResolver__TryGetNumericFormat(
                                                                       &numericFormatData,
                                                                       &funcIndex[1],
                                                                       v11,
                                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      values = v5->fields.values;
      if ( values )
      {
        if ( funcIndex[0] >= values->max_length )
        {
          v15 = sub_B5D6C8(this);
          sub_B5D668(v15, 0LL);
        }
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[funcIndex[0] + 1],
                   funcIndex[1],
                   v12);
      }
LABEL_22:
      sub_B5D69C(this, matchObj);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}