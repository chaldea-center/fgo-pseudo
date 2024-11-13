void __fastcall SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Text_RegularExpressions_Regex_o *v16; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  Il2CppObject *v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  Il2CppObject *v40; // x20
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B17440 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__,
      v1,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__,
      v4,
      v5);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo,
      v6,
      v7);
    sub_1BCA7E0(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, v10, v11);
    sub_1BCA7E0(&SkillDetailParamFormatResolver_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_16235/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, v14, v15);
    byte_4B17440 = 1;
  }
  v16 = (System_Text_RegularExpressions_Regex_o *)sub_1BCAA2C(System_Text_RegularExpressions_Regex_TypeInfo, v1, v2, v3);
  System_Text_RegularExpressions_Regex___ctor_68962024(v16, (System_String_o *)StringLiteral_16235/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0LL);
  SkillDetailParamFormatResolver_TypeInfo->static_fields->ParamFormatRegex = v16;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v26 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo,
                                                                   v23,
                                                                   v24,
                                                                   v25);
  System_Collections_Generic_Dictionary_char__object____ctor(
    v26,
    (const MethodInfo_31D8694 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v30 = (Il2CppObject *)sub_1BCAA2C(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v27, v28, v29);
  System_Object___ctor(v30, 0LL);
  v30[1].klass = (Il2CppClass *)(&dword_0 + 1);
  if ( !v26 )
    sub_1BCAA3C(v31, v32);
  System_Collections_Generic_Dictionary_char__object___Add(
    v26,
    0x64u,
    v30,
    (const MethodInfo_31D9068 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v36 = (Il2CppObject *)sub_1BCAA2C(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v33, v34, v35);
  System_Object___ctor(v36, 0LL);
  v36[1].klass = (Il2CppClass *)(byte_9 + 1);
  System_Collections_Generic_Dictionary_char__object___Add(
    v26,
    0x6Du,
    v36,
    (const MethodInfo_31D9068 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v40 = (Il2CppObject *)sub_1BCAA2C(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v37, v38, v39);
  System_Object___ctor(v40, 0LL);
  v40[1].klass = (Il2CppClass *)(&qword_60 + 4);
  System_Collections_Generic_Dictionary_char__object___Add(
    v26,
    0x79u,
    v40,
    (const MethodInfo_31D9068 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  static_fields = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->NumericFormatDict = (struct System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)v26;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->NumericFormatDict,
    (int64_t)v26,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
}


System_String_o *__fastcall SkillDetailParamFormatResolver__Apply(
        System_String_o *detailText,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  SkillDetailParamFormatResolver_c *v32; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v34; // x22

  if ( (byte_4B1743B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, skillLvEntity, method);
    sub_1BCA7E0(&SkillDetailParamFormatResolver_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__, v8, v9);
    sub_1BCA7E0(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_25388/*"{{"*/, v12, v13);
    byte_4B1743B = 1;
  }
  v14 = sub_1BCAA2C(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, skillLvEntity, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  *(_QWORD *)(v14 + 24) = skillLvEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)skillLvEntity, v17, v18, v19, v20, v21, v22);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25388/*"{{"*/, 0LL) )
  {
    *(_QWORD *)(v14 + 16) = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), 0LL, v23, v24, v25, v26, v27, v28);
    v32 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v29);
      v32 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v32->static_fields->ParamFormatRegex;
    v34 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1BCAA2C(
                                                               System_Text_RegularExpressions_MatchEvaluator_TypeInfo,
                                                               v29,
                                                               v30,
                                                               v31);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v34,
      (Il2CppObject *)v14,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_68959288(ParamFormatRegex, detailText, v34, 0LL);
LABEL_11:
    sub_1BCAA3C(v15, v16);
  }
  return detailText;
}


System_String_o *__fastcall SkillDetailParamFormatResolver__ApplyGivenValues(
        System_String_o *detailText,
        System_Int32_array *values,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  SkillDetailParamFormatResolver_c *v26; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v28; // x22

  if ( (byte_4B1743C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, values, method);
    sub_1BCA7E0(&SkillDetailParamFormatResolver_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__, v8, v9);
    sub_1BCA7E0(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_25388/*"{{"*/, v12, v13);
    byte_4B1743C = 1;
  }
  v14 = sub_1BCAA2C(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, values, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  *(_QWORD *)(v14 + 16) = values;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)values, v17, v18, v19, v20, v21, v22);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25388/*"{{"*/, 0LL) )
  {
    v26 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v23);
      v26 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v26->static_fields->ParamFormatRegex;
    v28 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1BCAA2C(
                                                               System_Text_RegularExpressions_MatchEvaluator_TypeInfo,
                                                               v23,
                                                               v24,
                                                               v25);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v28,
      (Il2CppObject *)v14,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_68959288(ParamFormatRegex, detailText, v28, 0LL);
LABEL_11:
    sub_1BCAA3C(v15, v16);
  }
  return detailText;
}


void __fastcall SkillDetailParamFormatResolver__AssertFailed(
        System_Text_RegularExpressions_Match_o *matchObj,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *Value; // x0
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  int32_t skillDetailId; // [xsp+Ch] [xbp-34h] BYREF
  int32_t lv; // [xsp+18h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B1743F & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, ent, method);
    sub_1BCA7E0(&StringLiteral_12950/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v5, v6);
    byte_4B1743F = 1;
  }
  if ( matchObj )
  {
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
    if ( ent )
    {
      if ( Value )
      {
        skillId = ent->fields.skillId;
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillId);
        lv = ent->fields.lv;
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        skillDetailId = ent->fields.skillDetailId;
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillDetailId);
        System_String__Format_62415660((System_String_o *)StringLiteral_12950/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v8, v9, v10, 0LL);
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
  int32_t *v5; // x20
  System_String_o *v6; // x0
  int32_t *v7; // x1
  int32_t *v8; // x21
  bool result; // w0

  *endFuncIndex = 0;
  if ( !rawString )
    goto LABEL_13;
  v5 = funcIndex;
  if ( rawString->fields._stringLength == 1 )
  {
    v6 = rawString;
    v7 = v5;
    goto LABEL_4;
  }
  funcIndex = (int32_t *)System_String__Split(rawString, 0x5Fu, 0, 0LL);
  if ( !funcIndex )
LABEL_13:
    sub_1BCAA3C(funcIndex, endFuncIndex);
  v8 = funcIndex;
  if ( !funcIndex[6] )
    sub_1BCAA44(funcIndex, endFuncIndex);
  if ( !System_Int32__TryParse(*((System_String_o **)funcIndex + 4), v5, 0LL) )
    return 0;
  if ( v8[6] < 2 )
  {
LABEL_10:
    result = 1;
    --*v5;
    --*endFuncIndex;
    return result;
  }
  v6 = (System_String_o *)*((_QWORD *)v8 + 5);
  v7 = endFuncIndex;
LABEL_4:
  if ( System_Int32__TryParse(v6, v7, 0LL) )
    goto LABEL_10;
  return 0;
}


bool __fastcall SkillDetailParamFormatResolver__TryGetFuncParamValue(
        int32_t *value,
        System_String_o *valsKeyStr,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_String_o *v19; // x19
  SkillDetailParamFormatResolver_c *v20; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_4B1743D & 1) == 0 )
  {
    sub_1BCA7E0(&SkillDetailParamFormatResolver_TypeInfo, valsKeyStr, vals);
    sub_1BCA7E0(&StringLiteral_16265/*"]が取れませんでした"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_23942/*"svalsから["*/, v9, v10);
    byte_4B1743D = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v19 = System_String__Concat_62412480(
            (System_String_o *)StringLiteral_23942/*"svalsから["*/,
            valsKeyStr,
            (System_String_o *)StringLiteral_16265/*"]が取れませんでした"*/,
            0LL);
    v20 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v12);
      v20 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v20->static_fields;
    static_fields->evaluationErrorMessage = v19;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->evaluationErrorMessage,
      (int64_t)v19,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *Chars; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *monitor; // x22
  bool v31; // w21
  uint16_t v32; // w0
  __int64 v33; // x19
  __int64 v34; // x0
  __int64 *v35; // x8
  Il2CppObject *v36; // x2
  Il2CppObject *v37; // x1
  SkillDetailParamFormatResolver_c *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v43; // x8
  System_Func_T__TResult__o *_9__15_0; // x22
  System_String_o *v45; // x21
  Il2CppObject *v46; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_IEnumerable_string__o *v54; // x0
  System_String_o *v55; // x20
  __int64 v56; // x0
  System_String_o *v57; // x0
  __int64 v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  SkillDetailParamFormatResolver_c *v65; // x8
  int64_t v66; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v67; // x0
  int v69; // [xsp+4h] [xbp-4Ch] BYREF
  int v70; // [xsp+8h] [xbp-48h] BYREF
  uint16_t v71; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1743E & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, fractionalDigit, formatKey);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_char__string___, v11, v12);
    sub_1BCA7E0(&System_Func_char__string__TypeInfo, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&SkillDetailParamFormatResolver_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__, v19, v20);
    sub_1BCA7E0(&SkillDetailParamFormatResolver___c_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_25620/*"指定可能な少数点以下の桁数は({0}～{1})です"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_25634/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v27, v28);
    byte_4B1743E = 1;
  }
  *fractionalDigit = 0;
  Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SkillDetailParamFormatResolver_TypeInfo;
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, fractionalDigit);
    Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SkillDetailParamFormatResolver_TypeInfo;
  }
  if ( !formatKey )
    goto LABEL_26;
  monitor = (System_Collections_Generic_Dictionary_TKey__TValue__o *)Chars[2].fields._entries->obj.monitor;
  Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_String__get_Chars(formatKey, 0, 0LL);
  if ( !monitor )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_char__object___TryGetValue(
          monitor,
          (uint16_t)Chars,
          (Il2CppObject **)numericFormatData,
          (const MethodInfo_31DA8B0 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v38 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, fractionalDigit);
      v38 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v38->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__object___get_Keys(
               Chars,
               (const MethodInfo_31D8D28 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v43 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo, v39);
        v43 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      _9__15_0 = (System_Func_T__TResult__o *)v43->static_fields->__9__15_0;
      v45 = (System_String_o *)StringLiteral_863/*","*/;
      if ( !_9__15_0 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43, v39);
          v43 = SkillDetailParamFormatResolver___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v43->static_fields->__9;
        _9__15_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_char__string__TypeInfo, v39, v40, v41);
        System_Func_char__object____ctor(
          _9__15_0,
          v46,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          0LL);
        static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        static_fields->__9__15_0 = (struct System_Func_char__string__o *)_9__15_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__15_0,
          (int64_t)_9__15_0,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
      }
      v54 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_2F3E6CC *)Method_System_Linq_Enumerable_Select_char__string___);
      v55 = System_String__Join_62416876(v45, v54, 0LL);
      v71 = System_String__get_Chars(formatKey, 0, 0LL);
      v56 = j_il2cpp_value_box_0(char_TypeInfo, &v71);
      v35 = &StringLiteral_25634/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v37 = (Il2CppObject *)v56;
      v36 = (Il2CppObject *)v55;
      goto LABEL_21;
    }
LABEL_26:
    sub_1BCAA3C(Chars, fractionalDigit);
  }
  if ( formatKey->fields._stringLength < 2 )
    return 1;
  v31 = 1;
  v32 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v32 - 48;
  if ( (unsigned __int16)(v32 - 49) >= 3u )
  {
    v70 = 1;
    v33 = j_il2cpp_value_box_0(int_TypeInfo, &v70);
    v69 = 3;
    v34 = j_il2cpp_value_box_0(int_TypeInfo, &v69);
    v35 = &StringLiteral_25620/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v36 = (Il2CppObject *)v34;
    v37 = (Il2CppObject *)v33;
LABEL_21:
    v57 = System_String__Format_62415592((System_String_o *)*v35, v37, v36, 0LL);
    v65 = SkillDetailParamFormatResolver_TypeInfo;
    v66 = (int64_t)v57;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v58);
      v65 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v67 = v65->static_fields;
    v67->evaluationErrorMessage = (struct System_String_o *)v66;
    sub_1BCA784((PartyOrganizationUtility_o *)&v67->evaluationErrorMessage, v66, v59, v60, v61, v62, v63, v64);
    return 0;
  }
  return v31;
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache___ctor(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SkillLvEntity_k__BackingField = skillLvEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)skillLvEntity, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
DataVals_o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        int32_t endFuncIndex,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x1
  System_Object_array *RootSkillValsArray; // x0
  const MethodInfo *v26; // x1
  System_Collections_Generic_Dictionary_int__object__o *EndSkillValsDict; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  System_Object_array *Item; // x0
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Object_array *v42; // x0
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int v52; // [xsp+Ch] [xbp-44h] BYREF
  int v53; // [xsp+18h] [xbp-38h] BYREF
  int v54; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B17445 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_DataVals___, *(_QWORD *)&funcIndex, *(_QWORD *)&endFuncIndex);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_DataVals___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__, v16, v17);
    sub_1BCA7E0(&int_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_25354/*"{0}_{1})に該当する効果が存在しません"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_25374/*"{0}番目の効果が存在しません"*/, v22, v23);
    byte_4B17445 = 1;
  }
  *errorMessage = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)errorMessage,
    0LL,
    *(int64_t *)&endFuncIndex,
    (int32_t)errorMessage,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v24);
  if ( BasicHelper__IsValidIndex_object__49290248(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v26);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              EndSkillValsDict,
              funcIndex,
              (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v30);
        EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                     this,
                                                                                     v31);
        if ( !EndSkillValsDict )
          goto LABEL_17;
        Item = (System_Object_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        EndSkillValsDict,
                                        funcIndex,
                                        (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__49290248(
                Item,
                endFuncIndex,
                (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v53 = funcIndex + 1;
          v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
          v52 = endFuncIndex + 1;
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
          v35 = System_String__Format_62415592((System_String_o *)StringLiteral_25354/*"{0}_{1})に該当する効果が存在しません"*/, v33, v34, 0LL);
          *errorMessage = v35;
          sub_1BCA784((PartyOrganizationUtility_o *)errorMessage, (int64_t)v35, v36, v37, v38, v39, v40, v41);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v29);
      if ( EndSkillValsDict )
      {
        v42 = (System_Object_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       EndSkillValsDict,
                                       funcIndex,
                                       (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_object_(
                               v42,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_1BCAA3C(EndSkillValsDict, v28);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v26);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields._entries) <= funcIndex )
      sub_1BCAA44(EndSkillValsDict, v28);
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields._count + funcIndex);
  }
  else
  {
    v54 = funcIndex + 1;
    v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
    v45 = System_String__Format((System_String_o *)StringLiteral_25374/*"{0}番目の効果が存在しません"*/, v44, 0LL);
    *errorMessage = v45;
    sub_1BCA784((PartyOrganizationUtility_o *)errorMessage, (int64_t)v45, v46, v47, v48, v49, v50, v51);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x21
  const MethodInfo *v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *RootSkillValsArray; // x0
  __int64 v12; // x1
  DataVals_array *EndSkillValsArrayFromRootValsForDisplay; // x21
  const MethodInfo *v14; // x1

  if ( (byte_4B17446 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&funcIndex, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__, v7, v8);
    byte_4B17446 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&funcIndex);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v10);
  if ( !RootSkillValsArray )
    goto LABEL_10;
  if ( LODWORD(RootSkillValsArray->fields._entries) <= funcIndex )
    sub_1BCAA44(RootSkillValsArray, v12);
  if ( !Master_object
    || (EndSkillValsArrayFromRootValsForDisplay = FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                    (FunctionMaster_o *)Master_object,
                                                    *((DataVals_o **)&RootSkillValsArray->fields._count + funcIndex),
                                                    0LL),
        (RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                        this,
                                                                                        v14)) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(RootSkillValsArray, v12);
  }
  System_Collections_Generic_Dictionary_int__object___set_Item(
    RootSkillValsArray,
    funcIndex,
    &EndSkillValsArrayFromRootValsForDisplay->obj,
    (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  PartyOrganizationUtility_o *p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__object__o *v8; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B17444 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo, v5, v6);
    byte_4B17444 = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = (PartyOrganizationUtility_o *)&this->fields.endSkillValsDict;
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_int__DataVals____TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v8,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    p_endSkillValsDict->klass = (PartyOrganizationUtility_c *)v8;
    sub_1BCA784(p_endSkillValsDict, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v8;
}


DataVals_array *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_rootSkillValsArray; // x19
  DataVals_array *rootSkillValsArray; // x20
  SkillLvEntity_o *SkillLvEntity_k__BackingField; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_rootSkillValsArray = (PartyOrganizationUtility_o *)&this->fields.rootSkillValsArray;
  rootSkillValsArray = this->fields.rootSkillValsArray;
  if ( !rootSkillValsArray )
  {
    SkillLvEntity_k__BackingField = this->fields._SkillLvEntity_k__BackingField;
    if ( !SkillLvEntity_k__BackingField )
      sub_1BCAA3C(0LL, method);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0LL);
    p_rootSkillValsArray->klass = (PartyOrganizationUtility_c *)rootSkillValsArray;
    sub_1BCA784(p_rootSkillValsArray, (int64_t)rootSkillValsArray, v5, v6, v7, v8, v9, v10);
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
  __int64 v8; // x2
  int32_t shiftDigit; // w8
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  double v12; // d0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x1
  System_String_o *v15; // x20
  System_String_o *SuffixStr; // x0
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int v19; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o format; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B17443 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&value, *(_QWORD *)&fractionalDigit);
    sub_1BCA7E0(&StringLiteral_19884/*"f{0}"*/, v7, v8);
    byte_4B17443 = 1;
  }
  format.klass = 0LL;
  v19 = 0;
  shiftDigit = this->fields.shiftDigit;
  if ( fractionalDigit < 1 )
  {
    v19 = value / shiftDigit;
    v13 = System_Int32__ToString((int32_t)&v19, 0LL);
  }
  else
  {
    *(double *)&format.klass = (double)value / (double)shiftDigit;
    v18 = fractionalDigit;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v11 = System_String__Format((System_String_o *)StringLiteral_19884/*"f{0}"*/, v10, 0LL);
    v13 = System_Double__ToString_63111624(v12, &format, (const MethodInfo *)v11);
  }
  v15 = v13;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v14);
  return System_String__Concat_62401220(v15, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SkillDetailParamFormatResolver_NumericFormatData_o *v3; // x19

  v3 = this;
  if ( (byte_4B17442 & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B17442 = 1;
  }
  if ( v3->fields.suffixType == 1 )
    return SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr((const MethodInfo *)this);
  else
    return string_TypeInfo->static_fields->Empty;
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_o *percentStr; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B17441 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_6671/*"FUNC_VALUE_PERCENT"*/, v5, v6);
    byte_4B17441 = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6671/*"FUNC_VALUE_PERCENT"*/, 0LL);
    SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr = percentStr;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields,
      (int64_t)percentStr,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17447 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillDetailParamFormatResolver___c_TypeInfo, v1, v2);
    byte_4B17447 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SkillDetailParamFormatResolver___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SkillDetailParamFormatResolver___c_TypeInfo->static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SkillDetailParamFormatResolver___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SkillDetailParamFormatResolver___c___ctor(
        SkillDetailParamFormatResolver___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillDetailParamFormatResolver___c___TryGetNumericFormat_b__15_0(
        SkillDetailParamFormatResolver___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4B17448 & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, x, method);
    byte_4B17448 = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo, x);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  struct SkillLvEntity_o *skillLvEntity; // x22
  int64_t v14; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  SkillDetailParamFormatResolver_c *v27; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
  __int64 v30; // x1
  System_Text_RegularExpressions_GroupCollection_o *v31; // x21
  System_String_o *Value; // x0
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  System_String_o *v36; // x22
  const MethodInfo *v37; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x23
  int32_t v39; // w20
  int32_t v40; // w22
  DataVals_o *v41; // x0
  DataVals_o *v42; // x20
  __int64 v43; // x1
  const MethodInfo *v44; // x3
  System_String_o *v45; // x21
  const MethodInfo *v46; // x3
  int32_t funcIndex[2]; // [xsp+0h] [xbp-50h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-48h] BYREF
  int32_t fractionalDigit[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B17449 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj, method);
    sub_1BCA7E0(&SkillDetailParamFormatResolver_TypeInfo, v10, v11);
    byte_4B17449 = 1;
  }
  *(_QWORD *)funcIndex = 0LL;
  numericFormatData = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v14 = sub_1BCAA2C(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj, method, v3);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    *(_QWORD *)(v14 + 16) = skillLvEntity;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)skillLvEntity, v15, v16, v17, v18, v19, v20);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v14;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v14, v21, v22, v23, v24, v25, v26);
  }
  v27 = SkillDetailParamFormatResolver_TypeInfo;
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, matchObj);
    v27 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v27->static_fields;
  static_fields->evaluationErrorMessage = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->evaluationErrorMessage,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !matchObj )
    goto LABEL_27;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer))matchObj->klass->vtable._5_get_Groups.method)(
                                                               matchObj,
                                                               matchObj->klass->vtable._6_GroupToStringImpl.methodPtr);
  *(_QWORD *)fractionalDigit = 0LL;
  numericFormatData = 0LL;
  if ( !Item )
    goto LABEL_27;
  v31 = Item;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                               Item,
                                                               1,
                                                               0LL);
  if ( !Item )
    goto LABEL_27;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&funcIndex[1], funcIndex, Value, v33) )
  {
    Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                 v31,
                                                                 3,
                                                                 0LL);
    if ( !Item )
      goto LABEL_27;
    v36 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v34);
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, &fractionalDigit[1], v36, v35) )
    {
      Item = (System_Text_RegularExpressions_GroupCollection_o *)SkillDetailParamFormatResolver_TypeInfo;
      dataValsHierarchyCache = p_fields->dataValsHierarchyCache;
      v40 = funcIndex[0];
      v39 = funcIndex[1];
      if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v30);
      if ( !dataValsHierarchyCache )
        goto LABEL_27;
      v41 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              dataValsHierarchyCache,
              v39,
              v40,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v37);
      if ( v41 )
      {
        v42 = v41;
        Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     v31,
                                                                     2,
                                                                     0LL);
        if ( !Item )
          goto LABEL_27;
        v45 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
        if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v43);
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue(fractionalDigit, v45, v42, v44) )
        {
          Item = (System_Text_RegularExpressions_GroupCollection_o *)numericFormatData;
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     fractionalDigit[0],
                     fractionalDigit[1],
                     v46);
LABEL_27:
          sub_1BCAA3C(Item, v30);
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
  __int64 v6; // x2
  SkillDetailParamFormatResolver___c__DisplayClass12_0_o *v7; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_String_o *Value; // x22
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_String_o *v13; // x21
  const MethodInfo *v14; // x3
  struct System_Int32_array *values; // x8
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  int32_t fractionalDigit; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B1744A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_int___, matchObj, method);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_1BCA7E0(
                                                                       &SkillDetailParamFormatResolver_TypeInfo,
                                                                       v5,
                                                                       v6);
    byte_4B1744A = 1;
  }
  *(_QWORD *)endFuncIndex = 0LL;
  numericFormatData = 0LL;
  if ( !matchObj )
    goto LABEL_20;
  this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer, const MethodInfo *))matchObj->klass->vtable._5_get_Groups.method)(
                                                                     matchObj,
                                                                     matchObj->klass->vtable._6_GroupToStringImpl.methodPtr,
                                                                     method);
  fractionalDigit = 0;
  numericFormatData = 0LL;
  if ( !this )
    goto LABEL_20;
  v7 = this;
  this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                     1,
                                                                     0LL);
  if ( !this )
    goto LABEL_20;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v8);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, Value, v9)
    && BasicHelper__IsValidIndex_int_(
         v4->fields.values,
         endFuncIndex[1],
         (const MethodInfo_2F01BA4 *)Method_BasicHelper_IsValidIndex_int___) )
  {
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                       (System_Text_RegularExpressions_GroupCollection_o *)v7,
                                                                       3,
                                                                       0LL);
    if ( !this )
      goto LABEL_20;
    v13 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v11);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)SkillDetailParamFormatResolver__TryGetNumericFormat(
                                                                       &numericFormatData,
                                                                       &fractionalDigit,
                                                                       v13,
                                                                       v12);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      values = v4->fields.values;
      if ( values )
      {
        if ( endFuncIndex[1] >= values->max_length )
          sub_1BCAA44(this, matchObj);
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[endFuncIndex[1] + 1],
                   fractionalDigit,
                   v14);
      }
LABEL_20:
      sub_1BCAA3C(this, matchObj);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}