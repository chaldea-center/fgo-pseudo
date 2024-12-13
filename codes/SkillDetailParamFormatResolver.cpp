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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x19
  Il2CppObject *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x20
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B38406 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__,
      v1);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__,
      v2);
    sub_1BD3458(
      &System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo,
      v3);
    sub_1BD3458(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v4);
    sub_1BD3458(&System_Text_RegularExpressions_Regex_TypeInfo, v5);
    sub_1BD3458(&SkillDetailParamFormatResolver_TypeInfo, v6);
    sub_1BD3458(&StringLiteral_16254/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, v7);
    byte_4B38406 = 1;
  }
  v8 = (System_Text_RegularExpressions_Regex_o *)sub_1BD36A4(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_69086052(v8, (System_String_o *)StringLiteral_16254/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0LL);
  SkillDetailParamFormatResolver_TypeInfo->static_fields->ParamFormatRegex = v8;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
  System_Collections_Generic_Dictionary_char__object____ctor(
    v15,
    (const MethodInfo_31F7744 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v16 = (Il2CppObject *)sub_1BD36A4(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v16, 0LL);
  v16[1].klass = (Il2CppClass *)(&dword_0 + 1);
  if ( !v15 )
    sub_1BD36B4(v17, v18);
  System_Collections_Generic_Dictionary_char__object___Add(
    v15,
    0x64u,
    v16,
    (const MethodInfo_31F8118 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v19 = (Il2CppObject *)sub_1BD36A4(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v19, 0LL);
  v19[1].klass = (Il2CppClass *)(byte_9 + 1);
  System_Collections_Generic_Dictionary_char__object___Add(
    v15,
    0x6Du,
    v19,
    (const MethodInfo_31F8118 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v20 = (Il2CppObject *)sub_1BD36A4(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v20, 0LL);
  v20[1].klass = (Il2CppClass *)(&qword_60 + 4);
  System_Collections_Generic_Dictionary_char__object___Add(
    v15,
    0x79u,
    v20,
    (const MethodInfo_31F8118 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  static_fields = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->NumericFormatDict = (struct System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)v15;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&static_fields->NumericFormatDict,
    (int64_t)v15,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  SkillDetailParamFormatResolver_c *v24; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v26; // x22

  if ( (byte_4B38401 & 1) == 0 )
  {
    sub_1BD3458(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, skillLvEntity);
    sub_1BD3458(&SkillDetailParamFormatResolver_TypeInfo, v5);
    sub_1BD3458(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__, v6);
    sub_1BD3458(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_25424/*"{{"*/, v8);
    byte_4B38401 = 1;
  }
  v9 = sub_1BD36A4(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 24) = skillLvEntity;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)skillLvEntity, v12, v13, v14, v15, v16, v17);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25424/*"{{"*/, 0LL) )
  {
    *(_QWORD *)(v9 + 16) = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v9 + 16), 0LL, v18, v19, v20, v21, v22, v23);
    v24 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v24 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v24->static_fields->ParamFormatRegex;
    v26 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1BD36A4(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v26,
      (Il2CppObject *)v9,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_69083316(ParamFormatRegex, detailText, v26, 0LL);
LABEL_11:
    sub_1BD36B4(v10, v11);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  SkillDetailParamFormatResolver_c *v18; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v20; // x22

  if ( (byte_4B38402 & 1) == 0 )
  {
    sub_1BD3458(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, values);
    sub_1BD3458(&SkillDetailParamFormatResolver_TypeInfo, v5);
    sub_1BD3458(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__, v6);
    sub_1BD3458(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_25424/*"{{"*/, v8);
    byte_4B38402 = 1;
  }
  v9 = sub_1BD36A4(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = values;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)values, v12, v13, v14, v15, v16, v17);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25424/*"{{"*/, 0LL) )
  {
    v18 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v18 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v18->static_fields->ParamFormatRegex;
    v20 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1BD36A4(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v20,
      (Il2CppObject *)v9,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_69083316(ParamFormatRegex, detailText, v20, 0LL);
LABEL_11:
    sub_1BD36B4(v10, v11);
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  int32_t skillDetailId; // [xsp+Ch] [xbp-34h] BYREF
  int32_t lv; // [xsp+18h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B38405 & 1) == 0 )
  {
    sub_1BD3458(&int_TypeInfo, ent);
    sub_1BD3458(&StringLiteral_12969/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v5);
    byte_4B38405 = 1;
  }
  if ( matchObj )
  {
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
    if ( ent )
    {
      if ( Value )
      {
        skillId = ent->fields.skillId;
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillId, v7, v8, v9);
        lv = ent->fields.lv;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v11, v12, v13);
        skillDetailId = ent->fields.skillDetailId;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillDetailId, v15, v16, v17);
        System_String__Format_62539688((System_String_o *)StringLiteral_12969/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v10, v14, v18, 0LL);
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
    sub_1BD36B4(funcIndex, endFuncIndex);
  v8 = funcIndex;
  if ( !funcIndex[6] )
    sub_1BD36BC(funcIndex, endFuncIndex);
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
  __int64 v8; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *v16; // x19
  SkillDetailParamFormatResolver_c *v17; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_4B38403 & 1) == 0 )
  {
    sub_1BD3458(&SkillDetailParamFormatResolver_TypeInfo, valsKeyStr);
    sub_1BD3458(&StringLiteral_16284/*"]が取れませんでした"*/, v7);
    sub_1BD3458(&StringLiteral_23977/*"svalsから["*/, v8);
    byte_4B38403 = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v16 = System_String__Concat_62536508(
            (System_String_o *)StringLiteral_23977/*"svalsから["*/,
            valsKeyStr,
            (System_String_o *)StringLiteral_16284/*"]が取れませんでした"*/,
            0LL);
    v17 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v17 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->evaluationErrorMessage = v16;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->evaluationErrorMessage,
      (int64_t)v16,
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *Chars; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *monitor; // x22
  bool v20; // w21
  uint16_t v21; // w0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x19
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x0
  __int64 *v30; // x8
  Il2CppObject *v31; // x2
  Il2CppObject *v32; // x1
  SkillDetailParamFormatResolver_c *v33; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v35; // x8
  System_Func_T__TResult__o *_9__15_0; // x22
  System_String_o *v37; // x21
  Il2CppObject *v38; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_string__o *v46; // x0
  System_String_o *v47; // x20
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x0
  System_String_o *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  SkillDetailParamFormatResolver_c *v59; // x8
  int64_t v60; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v61; // x0
  int v63; // [xsp+4h] [xbp-4Ch] BYREF
  int v64; // [xsp+8h] [xbp-48h] BYREF
  uint16_t v65; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B38404 & 1) == 0 )
  {
    sub_1BD3458(&char_TypeInfo, fractionalDigit);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__,
      v7);
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__,
      v8);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_char__string___, v9);
    sub_1BD3458(&System_Func_char__string__TypeInfo, v10);
    sub_1BD3458(&int_TypeInfo, v11);
    sub_1BD3458(&SkillDetailParamFormatResolver_TypeInfo, v12);
    sub_1BD3458(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__, v13);
    sub_1BD3458(&SkillDetailParamFormatResolver___c_TypeInfo, v14);
    sub_1BD3458(&StringLiteral_25658/*"指定可能な少数点以下の桁数は({0}～{1})です"*/, v15);
    sub_1BD3458(&StringLiteral_25672/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/, v16);
    sub_1BD3458(&StringLiteral_863/*","*/, v17);
    byte_4B38404 = 1;
  }
  *fractionalDigit = 0;
  Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SkillDetailParamFormatResolver_TypeInfo;
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
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
          (const MethodInfo_31F9960 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v33 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v33 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v33->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__object___get_Keys(
               Chars,
               (const MethodInfo_31F7DD8 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v35 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v35 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      _9__15_0 = (System_Func_T__TResult__o *)v35->static_fields->__9__15_0;
      v37 = (System_String_o *)StringLiteral_863/*","*/;
      if ( !_9__15_0 )
      {
        if ( !v35->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35);
          v35 = SkillDetailParamFormatResolver___c_TypeInfo;
        }
        v38 = (Il2CppObject *)v35->static_fields->__9;
        _9__15_0 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_char__string__TypeInfo);
        System_Func_char__object____ctor(
          _9__15_0,
          v38,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          0LL);
        static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        static_fields->__9__15_0 = (struct System_Func_char__string__o *)_9__15_0;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&static_fields->__9__15_0,
          (int64_t)_9__15_0,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      v46 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_2F5DA78 *)Method_System_Linq_Enumerable_Select_char__string___);
      v47 = System_String__Join_62540904(v37, v46, 0LL);
      v65 = System_String__get_Chars(formatKey, 0, 0LL);
      v51 = j_il2cpp_value_box_0(char_TypeInfo, &v65, v48, v49, v50);
      v30 = &StringLiteral_25672/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v32 = (Il2CppObject *)v51;
      v31 = (Il2CppObject *)v47;
      goto LABEL_21;
    }
LABEL_26:
    sub_1BD36B4(Chars, fractionalDigit);
  }
  if ( formatKey->fields._stringLength < 2 )
    return 1;
  v20 = 1;
  v21 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v21 - 48;
  if ( (unsigned __int16)(v21 - 49) >= 3u )
  {
    v64 = 1;
    v25 = j_il2cpp_value_box_0(int_TypeInfo, &v64, v22, v23, v24);
    v63 = 3;
    v29 = j_il2cpp_value_box_0(int_TypeInfo, &v63, v26, v27, v28);
    v30 = &StringLiteral_25658/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v31 = (Il2CppObject *)v29;
    v32 = (Il2CppObject *)v25;
LABEL_21:
    v52 = System_String__Format_62539620((System_String_o *)*v30, v32, v31, 0LL);
    v59 = SkillDetailParamFormatResolver_TypeInfo;
    v60 = (int64_t)v52;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v59 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v61 = v59->static_fields;
    v61->evaluationErrorMessage = (struct System_String_o *)v60;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v61->evaluationErrorMessage, v60, v53, v54, v55, v56, v57, v58);
    return 0;
  }
  return v20;
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)skillLvEntity, v5, v6, v7, v8, v9, v10);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  System_Object_array *RootSkillValsArray; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_Dictionary_int__object__o *EndSkillValsDict; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  System_Object_array *Item; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Object_array *v45; // x0
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int v55; // [xsp+Ch] [xbp-44h] BYREF
  int v56; // [xsp+18h] [xbp-38h] BYREF
  int v57; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B3840B & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_IndexValue_DataVals___, *(_QWORD *)&funcIndex);
    sub_1BD3458(&Method_BasicHelper_IsValidIndex_DataVals___, v12);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__, v14);
    sub_1BD3458(&int_TypeInfo, v15);
    sub_1BD3458(&StringLiteral_25389/*"{0}_{1})に該当する効果が存在しません"*/, v16);
    sub_1BD3458(&StringLiteral_25410/*"{0}番目の効果が存在しません"*/, v17);
    byte_4B3840B = 1;
  }
  *errorMessage = 0LL;
  sub_1BD33FC(
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
                                                v18);
  if ( BasicHelper__IsValidIndex_object__49415676(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_2F205FC *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v20);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              EndSkillValsDict,
              funcIndex,
              (const MethodInfo_3225188 *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v27);
        EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                     this,
                                                                                     v28);
        if ( !EndSkillValsDict )
          goto LABEL_17;
        Item = (System_Object_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        EndSkillValsDict,
                                        funcIndex,
                                        (const MethodInfo_3224EF4 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__49415676(
                Item,
                endFuncIndex,
                (const MethodInfo_2F205FC *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v56 = funcIndex + 1;
          v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v30, v31, v32);
          v55 = endFuncIndex + 1;
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v34, v35, v36);
          v38 = System_String__Format_62539620((System_String_o *)StringLiteral_25389/*"{0}_{1})に該当する効果が存在しません"*/, v33, v37, 0LL);
          *errorMessage = v38;
          sub_1BD33FC((PartyOrganizationUtility_o *)errorMessage, (int64_t)v38, v39, v40, v41, v42, v43, v44);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v26);
      if ( EndSkillValsDict )
      {
        v45 = (System_Object_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       EndSkillValsDict,
                                       funcIndex,
                                       (const MethodInfo_3224EF4 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_object_(
                               v45,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_2F2024C *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_1BD36B4(EndSkillValsDict, v25);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v20);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields._entries) <= funcIndex )
      sub_1BD36BC(EndSkillValsDict, v25);
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields._count + funcIndex);
  }
  else
  {
    v57 = funcIndex + 1;
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v21, v22, v23);
    v48 = System_String__Format((System_String_o *)StringLiteral_25410/*"{0}番目の効果が存在しません"*/, v47, 0LL);
    *errorMessage = v48;
    sub_1BD33FC((PartyOrganizationUtility_o *)errorMessage, (int64_t)v48, v49, v50, v51, v52, v53, v54);
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
  Il2CppObject *Master_object; // x21
  const MethodInfo *v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *RootSkillValsArray; // x0
  __int64 v10; // x1
  DataVals_array *EndSkillValsArrayFromRootValsForDisplay; // x21
  const MethodInfo *v12; // x1

  if ( (byte_4B3840C & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&funcIndex);
    sub_1BD3458(&DataManager_TypeInfo, v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__, v6);
    byte_4B3840C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v8);
  if ( !RootSkillValsArray )
    goto LABEL_10;
  if ( LODWORD(RootSkillValsArray->fields._entries) <= funcIndex )
    sub_1BD36BC(RootSkillValsArray, v10);
  if ( !Master_object
    || (EndSkillValsArrayFromRootValsForDisplay = FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                    (FunctionMaster_o *)Master_object,
                                                    *((DataVals_o **)&RootSkillValsArray->fields._count + funcIndex),
                                                    0LL),
        (RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                        this,
                                                                                        v12)) == 0LL) )
  {
LABEL_10:
    sub_1BD36B4(RootSkillValsArray, v10);
  }
  System_Collections_Generic_Dictionary_int__object___set_Item(
    RootSkillValsArray,
    funcIndex,
    &EndSkillValsArrayFromRootValsForDisplay->obj,
    (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B3840A & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__, method);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo, v3);
    byte_4B3840A = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = (PartyOrganizationUtility_o *)&this->fields.endSkillValsDict;
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v5,
      (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    p_endSkillValsDict->klass = (PartyOrganizationUtility_c *)v5;
    sub_1BD33FC(p_endSkillValsDict, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v5;
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
      sub_1BD36B4(0LL, method);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0LL);
    p_rootSkillValsArray->klass = (PartyOrganizationUtility_c *)rootSkillValsArray;
    sub_1BD33FC(p_rootSkillValsArray, (int64_t)rootSkillValsArray, v5, v6, v7, v8, v9, v10);
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
  __int64 v4; // x4
  __int64 v8; // x1
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

  if ( (byte_4B38409 & 1) == 0 )
  {
    sub_1BD3458(&int_TypeInfo, *(_QWORD *)&value);
    sub_1BD3458(&StringLiteral_19914/*"f{0}"*/, v8);
    byte_4B38409 = 1;
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
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, *(_QWORD *)&fractionalDigit, method, v4);
    v11 = System_String__Format((System_String_o *)StringLiteral_19914/*"f{0}"*/, v10, 0LL);
    v13 = System_Double__ToString_63235652(v12, &format, (const MethodInfo *)v11);
  }
  v15 = v13;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v14);
  return System_String__Concat_62525248(v15, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver_NumericFormatData_o *v2; // x19

  v2 = this;
  if ( (byte_4B38408 & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_1BD3458(&string_TypeInfo, method);
    byte_4B38408 = 1;
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
  struct System_String_o *percentStr; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B38407 & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, v1);
    sub_1BD3458(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v2);
    sub_1BD3458(&StringLiteral_6684/*"FUNC_VALUE_PERCENT"*/, v3);
    byte_4B38407 = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6684/*"FUNC_VALUE_PERCENT"*/, 0LL);
    SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr = percentStr;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields,
      (int64_t)percentStr,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3840D & 1) == 0 )
  {
    sub_1BD3458(&SkillDetailParamFormatResolver___c_TypeInfo, v1);
    byte_4B3840D = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(SkillDetailParamFormatResolver___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SkillDetailParamFormatResolver___c_TypeInfo->static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)SkillDetailParamFormatResolver___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  if ( (byte_4B3840E & 1) == 0 )
  {
    sub_1BD3458(&char_TypeInfo, x);
    byte_4B3840E = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  struct SkillLvEntity_o *skillLvEntity; // x22
  int64_t v13; // x23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  SkillDetailParamFormatResolver_c *v26; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
  __int64 v29; // x1
  System_Text_RegularExpressions_GroupCollection_o *v30; // x21
  System_String_o *Value; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  System_String_o *v34; // x22
  const MethodInfo *v35; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x23
  int32_t v37; // w20
  int32_t v38; // w22
  DataVals_o *v39; // x0
  DataVals_o *v40; // x20
  const MethodInfo *v41; // x3
  System_String_o *v42; // x21
  const MethodInfo *v43; // x3
  int32_t funcIndex[2]; // [xsp+0h] [xbp-50h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-48h] BYREF
  int32_t fractionalDigit[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B3840F & 1) == 0 )
  {
    sub_1BD3458(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj);
    sub_1BD3458(&SkillDetailParamFormatResolver_TypeInfo, v10);
    byte_4B3840F = 1;
  }
  *(_QWORD *)funcIndex = 0LL;
  numericFormatData = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v13 = sub_1BD36A4(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    *(_QWORD *)(v13 + 16) = skillLvEntity;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)skillLvEntity, v14, v15, v16, v17, v18, v19);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v13;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, v13, v20, v21, v22, v23, v24, v25);
  }
  v26 = SkillDetailParamFormatResolver_TypeInfo;
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v26 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v26->static_fields;
  static_fields->evaluationErrorMessage = 0LL;
  sub_1BD33FC(
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
  v30 = Item;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                               Item,
                                                               1,
                                                               0LL);
  if ( !Item )
    goto LABEL_27;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&funcIndex[1], funcIndex, Value, v32) )
  {
    Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                 v30,
                                                                 3,
                                                                 0LL);
    if ( !Item )
      goto LABEL_27;
    v34 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, &fractionalDigit[1], v34, v33) )
    {
      Item = (System_Text_RegularExpressions_GroupCollection_o *)SkillDetailParamFormatResolver_TypeInfo;
      dataValsHierarchyCache = p_fields->dataValsHierarchyCache;
      v38 = funcIndex[0];
      v37 = funcIndex[1];
      if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      if ( !dataValsHierarchyCache )
        goto LABEL_27;
      v39 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              dataValsHierarchyCache,
              v37,
              v38,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v35);
      if ( v39 )
      {
        v40 = v39;
        Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     v30,
                                                                     2,
                                                                     0LL);
        if ( !Item )
          goto LABEL_27;
        v42 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
        if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue(fractionalDigit, v42, v40, v41) )
        {
          Item = (System_Text_RegularExpressions_GroupCollection_o *)numericFormatData;
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     fractionalDigit[0],
                     fractionalDigit[1],
                     v43);
LABEL_27:
          sub_1BD36B4(Item, v29);
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
  SkillDetailParamFormatResolver___c__DisplayClass12_0_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *Value; // x22
  const MethodInfo *v9; // x3
  System_String_o *v10; // x21
  const MethodInfo *v11; // x3
  struct System_Int32_array *values; // x8
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  int32_t fractionalDigit; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B38410 & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_IsValidIndex_int___, matchObj);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_1BD3458(
                                                                       &SkillDetailParamFormatResolver_TypeInfo,
                                                                       v5);
    byte_4B38410 = 1;
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
  v6 = this;
  this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                     1,
                                                                     0LL);
  if ( !this )
    goto LABEL_20;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, Value, v7)
    && BasicHelper__IsValidIndex_int_(
         v4->fields.values,
         endFuncIndex[1],
         (const MethodInfo_2F20598 *)Method_BasicHelper_IsValidIndex_int___) )
  {
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                       (System_Text_RegularExpressions_GroupCollection_o *)v6,
                                                                       3,
                                                                       0LL);
    if ( !this )
      goto LABEL_20;
    v10 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)SkillDetailParamFormatResolver__TryGetNumericFormat(
                                                                       &numericFormatData,
                                                                       &fractionalDigit,
                                                                       v10,
                                                                       v9);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      values = v4->fields.values;
      if ( values )
      {
        if ( endFuncIndex[1] >= values->max_length )
          sub_1BD36BC(this, matchObj);
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[endFuncIndex[1] + 1],
                   fractionalDigit,
                   v11);
      }
LABEL_20:
      sub_1BD36B4(this, matchObj);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}