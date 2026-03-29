void SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x19
  Il2CppObject *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x20
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D31ED6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
    sub_1C93AD4(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_1C93AD4(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C93AD4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1C93AD4(&StringLiteral_16155/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/);
    byte_4D31ED6 = 1;
  }
  v1 = (System_Text_RegularExpressions_Regex_o *)sub_1C93D20(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_70946496(v1, (System_String_o *)StringLiteral_16155/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0);
  SkillDetailParamFormatResolver_TypeInfo->static_fields->ParamFormatRegex = v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
  System_Collections_Generic_Dictionary_char__object____ctor(
    v8,
    (const MethodInfo_348F67C *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v9 = (Il2CppObject *)sub_1C93D20(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v9, 0);
  v9[1].klass = (Il2CppClass *)(&dword_0 + 1);
  if ( !v8 )
    sub_1C93D2C(v10, v11);
  System_Collections_Generic_Dictionary_char__object___Add(
    v8,
    0x64u,
    v9,
    (const MethodInfo_3490050 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v12 = (Il2CppObject *)sub_1C93D20(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v12, 0);
  v12[1].klass = (Il2CppClass *)(byte_9 + 1);
  System_Collections_Generic_Dictionary_char__object___Add(
    v8,
    0x6Du,
    v12,
    (const MethodInfo_3490050 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v13 = (Il2CppObject *)sub_1C93D20(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v13, 0);
  v13[1].klass = (Il2CppClass *)(&qword_60 + 4);
  System_Collections_Generic_Dictionary_char__object___Add(
    v8,
    0x79u,
    v13,
    (const MethodInfo_3490050 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  static_fields = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->NumericFormatDict = (struct System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)v8;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->NumericFormatDict,
    (int32_t)v8,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


System_String_o *SkillDetailParamFormatResolver__Apply(
        System_String_o *detailText,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
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
  SkillDetailParamFormatResolver_c *v20; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v22; // x22

  if ( (byte_4D31ED1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_1C93AD4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1C93AD4(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__);
    sub_1C93AD4(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_25558/*"{{"*/);
    byte_4D31ED1 = 1;
  }
  v5 = sub_1C93D20(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 24) = skillLvEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)skillLvEntity, v8, v9, v10, v11, v12, v13);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25558/*"{{"*/, 0) )
  {
    *(_QWORD *)(v5 + 16) = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), 0, v14, v15, v16, v17, v18, v19);
    v20 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v20 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v20->static_fields->ParamFormatRegex;
    v22 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1C93D20(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v22,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_70943652(ParamFormatRegex, detailText, v22, 0);
LABEL_11:
    sub_1C93D2C(v6, v7);
  }
  return detailText;
}


System_String_o *SkillDetailParamFormatResolver__ApplyGivenValues(
        System_String_o *detailText,
        System_Int32_array *values,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  SkillDetailParamFormatResolver_c *v14; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v16; // x22

  if ( (byte_4D31ED2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_1C93AD4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1C93AD4(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__);
    sub_1C93AD4(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_25558/*"{{"*/);
    byte_4D31ED2 = 1;
  }
  v5 = sub_1C93D20(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = values;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)values, v8, v9, v10, v11, v12, v13);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25558/*"{{"*/, 0) )
  {
    v14 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v14 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v14->static_fields->ParamFormatRegex;
    v16 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1C93D20(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v16,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_70943652(ParamFormatRegex, detailText, v16, 0);
LABEL_11:
    sub_1C93D2C(v6, v7);
  }
  return detailText;
}


void SkillDetailParamFormatResolver__AssertFailed(
        System_Text_RegularExpressions_Match_o *matchObj,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  System_String_o *Value; // x0
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  int32_t skillDetailId; // [xsp+Ch] [xbp-34h] BYREF
  int32_t lv; // [xsp+18h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4D31ED5 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_12991/*"SkillId({0}),Lv({1}),DetailId({2})"*/);
    byte_4D31ED5 = 1;
  }
  if ( matchObj )
  {
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0);
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
        System_String__Format_64467100((System_String_o *)StringLiteral_12991/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v6, v7, v8, 0);
      }
    }
  }
}


bool SkillDetailParamFormatResolver__TryGetFuncIndex(
        int32_t *funcIndex,
        int32_t *endFuncIndex,
        System_String_o *rawString,
        const MethodInfo *method)
{
  int32_t *v5; // x20
  System_String_o *v6; // x0
  int32_t *v7; // x1
  int32_t *v8; // x21

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
  funcIndex = (int32_t *)System_String__Split(rawString, 0x5Fu, 0, 0);
  if ( !funcIndex )
LABEL_13:
    sub_1C93D2C(funcIndex, endFuncIndex);
  v8 = funcIndex;
  if ( !funcIndex[6] )
    sub_1C93D34(funcIndex);
  if ( !System_Int32__TryParse(*((System_String_o **)funcIndex + 4), v5, 0) )
    return 0;
  if ( v8[6] < 2 )
  {
LABEL_10:
    --*v5;
    --*endFuncIndex;
    return 1;
  }
  v6 = (System_String_o *)*((_QWORD *)v8 + 5);
  v7 = endFuncIndex;
LABEL_4:
  if ( System_Int32__TryParse(v6, v7, 0) )
    goto LABEL_10;
  return 0;
}


bool SkillDetailParamFormatResolver__TryGetFuncParamValue(
        int32_t *value,
        System_String_o *valsKeyStr,
        DataVals_o *vals,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_String_o *v14; // x19
  SkillDetailParamFormatResolver_c *v15; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_4D31ED3 & 1) == 0 )
  {
    sub_1C93AD4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1C93AD4(&StringLiteral_16182/*"]が取れませんでした"*/);
    sub_1C93AD4(&StringLiteral_24153/*"svalsから["*/);
    byte_4D31ED3 = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0) )
      return 1;
    v14 = System_String__Concat_64463988(
            (System_String_o *)StringLiteral_24153/*"svalsから["*/,
            valsKeyStr,
            (System_String_o *)StringLiteral_16182/*"]が取れませんでした"*/,
            0);
    v15 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v15 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->evaluationErrorMessage = v14;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->evaluationErrorMessage,
      (int32_t)v14,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return 0;
}


bool SkillDetailParamFormatResolver__TryGetNumericFormat(
        SkillDetailParamFormatResolver_NumericFormatData_o **numericFormatData,
        int32_t *fractionalDigit,
        System_String_o *formatKey,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *Chars; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *monitor; // x22
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
  System_Func_T__TResult__o *_9__15_0; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_IEnumerable_string__o *v29; // x0
  System_String_o *v30; // x20
  __int64 v31; // x0
  System_String_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  SkillDetailParamFormatResolver_c *v39; // x8
  System_String_o *v40; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v41; // x0
  int v43; // [xsp+4h] [xbp-4Ch] BYREF
  int v44; // [xsp+8h] [xbp-48h] BYREF
  uint16_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D31ED4 & 1) == 0 )
  {
    sub_1C93AD4(&char_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_1C93AD4(&System_Func_char__string__TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1C93AD4(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__);
    sub_1C93AD4(&SkillDetailParamFormatResolver___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_25807/*"指定可能な少数点以下の桁数は({0}～{1})です"*/);
    sub_1C93AD4(&StringLiteral_25821/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    byte_4D31ED4 = 1;
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
  Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_String__get_Chars(formatKey, 0, 0);
  if ( !monitor )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_char__object___TryGetValue(
          monitor,
          (uint16_t)Chars,
          (Il2CppObject **)numericFormatData,
          (const MethodInfo_3491898 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v16 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v16 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__object___get_Keys(
               Chars,
               (const MethodInfo_348FD10 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v18 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v18 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      _9__15_0 = (System_Func_T__TResult__o *)v18->static_fields->__9__15_0;
      v20 = (System_String_o *)StringLiteral_809/*","*/;
      if ( !_9__15_0 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = SkillDetailParamFormatResolver___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v18->static_fields->__9;
        _9__15_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_char__string__TypeInfo);
        System_Func_char__object____ctor(
          _9__15_0,
          v21,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          0);
        static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        static_fields->__9__15_0 = (struct System_Func_char__string__o *)_9__15_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0,
          (int32_t)_9__15_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      v29 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_31D71D4 *)Method_System_Linq_Enumerable_Select_char__string___);
      v30 = System_String__Join_64468316(v20, v29, 0);
      v45 = System_String__get_Chars(formatKey, 0, 0);
      v31 = j_il2cpp_value_box_0(char_TypeInfo, &v45);
      v13 = &StringLiteral_25821/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v15 = (Il2CppObject *)v31;
      v14 = (Il2CppObject *)v30;
      goto LABEL_21;
    }
LABEL_26:
    sub_1C93D2C(Chars, fractionalDigit);
  }
  if ( formatKey->fields._stringLength < 2 )
    return 1;
  v9 = 1;
  v10 = System_String__get_Chars(formatKey, 1, 0);
  *fractionalDigit = v10 - 48;
  if ( (unsigned __int16)(v10 - 49) >= 3u )
  {
    v44 = 1;
    v11 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
    v43 = 3;
    v12 = j_il2cpp_value_box_0(int_TypeInfo, &v43);
    v13 = &StringLiteral_25807/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v14 = (Il2CppObject *)v12;
    v15 = (Il2CppObject *)v11;
LABEL_21:
    v32 = System_String__Format_64467032((System_String_o *)*v13, v15, v14, 0);
    v39 = SkillDetailParamFormatResolver_TypeInfo;
    v40 = v32;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v39 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v41 = v39->static_fields;
    v41->evaluationErrorMessage = v40;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v41->evaluationErrorMessage, (int32_t)v40, v33, v34, v35, v36, v37, v38);
    return 0;
  }
  return v9;
}


void SkillDetailParamFormatResolver_DataValsHierarchyCache___ctor(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SkillLvEntity_k__BackingField = skillLvEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)skillLvEntity, v5, v6, v7, v8, v9, v10);
}


DataVals_o *SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        int32_t endFuncIndex,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v12; // x1
  System_Object_array *RootSkillValsArray; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_Dictionary_int__object__o *EndSkillValsDict; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  System_Object_array *Item; // x0
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Object_array *v30; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int v40; // [xsp+Ch] [xbp-44h] BYREF
  int v41; // [xsp+18h] [xbp-38h] BYREF
  int v42; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4D31EDB & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_DataVals___);
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_DataVals___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_25523/*"{0}_{1})に該当する効果が存在しません"*/);
    sub_1C93AD4(&StringLiteral_25544/*"{0}番目の効果が存在しません"*/);
    byte_4D31EDB = 1;
  }
  *errorMessage = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)errorMessage,
    0,
    endFuncIndex,
    (int32_t)errorMessage,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v12);
  if ( BasicHelper__IsValidIndex_object__51982632(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v14);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              EndSkillValsDict,
              funcIndex,
              (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v18);
        EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                     this,
                                                                                     v19);
        if ( !EndSkillValsDict )
          goto LABEL_17;
        Item = (System_Object_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        EndSkillValsDict,
                                        funcIndex,
                                        (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__51982632(
                Item,
                endFuncIndex,
                (const MethodInfo_3193128 *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v41 = funcIndex + 1;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
          v40 = endFuncIndex + 1;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
          v23 = System_String__Format_64467032((System_String_o *)StringLiteral_25523/*"{0}_{1})に該当する効果が存在しません"*/, v21, v22, 0);
          *errorMessage = v23;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)errorMessage, (int32_t)v23, v24, v25, v26, v27, v28, v29);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v17);
      if ( EndSkillValsDict )
      {
        v30 = (System_Object_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       EndSkillValsDict,
                                       funcIndex,
                                       (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_object_(
                               v30,
                               endFuncIndex,
                               0,
                               (const MethodInfo_3192D78 *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_1C93D2C(EndSkillValsDict, v16);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v14);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields._entries) <= funcIndex )
      sub_1C93D34(EndSkillValsDict);
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields._count + funcIndex);
  }
  else
  {
    v42 = funcIndex + 1;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    v33 = System_String__Format((System_String_o *)StringLiteral_25544/*"{0}番目の効果が存在しません"*/, v32, 0);
    *errorMessage = v33;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)errorMessage, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    return 0;
  }
}


void SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_Dictionary_int__object__o *RootSkillValsArray; // x0
  __int64 v8; // x1
  DataVals_array *EndSkillValsArrayFromRootValsForDisplay; // x21
  const MethodInfo *v10; // x1

  if ( (byte_4D31EDC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
    byte_4D31EDC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v6);
  if ( !RootSkillValsArray )
    goto LABEL_10;
  if ( LODWORD(RootSkillValsArray->fields._entries) <= funcIndex )
    sub_1C93D34(RootSkillValsArray);
  if ( !Master_object
    || (EndSkillValsArrayFromRootValsForDisplay = FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                    (FunctionMaster_o *)Master_object,
                                                    *((DataVals_o **)&RootSkillValsArray->fields._count + funcIndex),
                                                    0),
        (RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                        this,
                                                                                        v10)) == 0) )
  {
LABEL_10:
    sub_1C93D2C(RootSkillValsArray, v8);
  }
  System_Collections_Generic_Dictionary_int__object___set_Item(
    RootSkillValsArray,
    funcIndex,
    &EndSkillValsArrayFromRootValsForDisplay->obj,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D31EDA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    byte_4D31EDA = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = (GrandQuestFolderBoardItem_o *)&this->fields.endSkillValsDict;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v4,
      (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    p_endSkillValsDict->klass = (GrandQuestFolderBoardItem_c *)v4;
    sub_1C93A78(p_endSkillValsDict, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v4;
}


DataVals_array *SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_rootSkillValsArray; // x19
  DataVals_array *rootSkillValsArray; // x20
  SkillLvEntity_o *SkillLvEntity_k__BackingField; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_rootSkillValsArray = (GrandQuestFolderBoardItem_o *)&this->fields.rootSkillValsArray;
  rootSkillValsArray = this->fields.rootSkillValsArray;
  if ( !rootSkillValsArray )
  {
    SkillLvEntity_k__BackingField = this->fields._SkillLvEntity_k__BackingField;
    if ( !SkillLvEntity_k__BackingField )
      sub_1C93D2C(0, method);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0);
    p_rootSkillValsArray->klass = (GrandQuestFolderBoardItem_c *)rootSkillValsArray;
    sub_1C93A78(p_rootSkillValsArray, (int32_t)rootSkillValsArray, v5, v6, v7, v8, v9, v10);
  }
  return rootSkillValsArray;
}


SkillLvEntity_o *SkillDetailParamFormatResolver_DataValsHierarchyCache__get_SkillLvEntity(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillLvEntity_k__BackingField;
}


void SkillDetailParamFormatResolver_NumericFormatData___ctor(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        int32_t shiftDigit,
        int32_t suffixType,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.shiftDigit = shiftDigit;
  this->fields.suffixType = suffixType;
}


System_String_o *SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
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
  int32_t v16; // [xsp+8h] [xbp-38h] BYREF
  int v17; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o format; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D31ED9 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_19932/*"f{0}"*/);
    byte_4D31ED9 = 1;
  }
  format.klass = 0;
  v17 = 0;
  shiftDigit = this->fields.shiftDigit;
  if ( fractionalDigit < 1 )
  {
    v17 = value / shiftDigit;
    v11 = System_Int32__ToString((int32_t)&v17, 0);
  }
  else
  {
    *(double *)&format.klass = (double)value / (double)shiftDigit;
    v16 = fractionalDigit;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v9 = System_String__Format((System_String_o *)StringLiteral_19932/*"f{0}"*/, v8, 0);
    v11 = System_Double__ToString_65844768(v10, &format, (const MethodInfo *)v9);
  }
  v13 = v11;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v12);
  return System_String__Concat_64425724(v13, SuffixStr, 0);
}


System_String_o *SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver_NumericFormatData_o *v2; // x19

  v2 = this;
  if ( (byte_4D31ED8 & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_1C93AD4(&string_TypeInfo);
    byte_4D31ED8 = 1;
  }
  if ( v2->fields.suffixType == 1 )
    return SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr((const MethodInfo *)this);
  else
    return string_TypeInfo->static_fields->Empty;
}


System_String_o *SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr(const MethodInfo *method)
{
  struct System_String_o *percentStr; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31ED7 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_1C93AD4(&StringLiteral_6617/*"FUNC_VALUE_PERCENT"*/);
    byte_4D31ED7 = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6617/*"FUNC_VALUE_PERCENT"*/, 0);
    SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr = percentStr;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields,
      (int32_t)percentStr,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  return percentStr;
}


void SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31EDD & 1) == 0 )
  {
    sub_1C93AD4(&SkillDetailParamFormatResolver___c_TypeInfo);
    byte_4D31EDD = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SkillDetailParamFormatResolver___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillDetailParamFormatResolver___c_TypeInfo->static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SkillDetailParamFormatResolver___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SkillDetailParamFormatResolver___c___ctor(SkillDetailParamFormatResolver___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SkillDetailParamFormatResolver___c___TryGetNumericFormat_b__15_0(
        SkillDetailParamFormatResolver___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4D31EDE & 1) == 0 )
  {
    sub_1C93AD4(&char_TypeInfo);
    byte_4D31EDE = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0);
}


void SkillDetailParamFormatResolver___c__DisplayClass11_0___ctor(
        SkillDetailParamFormatResolver___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SkillDetailParamFormatResolver___c__DisplayClass11_0___Apply_g__Evaluator_0(
        SkillDetailParamFormatResolver___c__DisplayClass11_0_o *this,
        System_Text_RegularExpressions_Match_o *matchObj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  struct SkillLvEntity_o *skillLvEntity; // x22
  __int64 v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  SkillDetailParamFormatResolver_c *v25; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
  __int64 v28; // x1
  System_Text_RegularExpressions_GroupCollection_o *v29; // x21
  System_String_o *Value; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  System_String_o *v33; // x22
  const MethodInfo *v34; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x23
  int32_t v36; // w20
  int32_t v37; // w22
  DataVals_o *v38; // x0
  DataVals_o *v39; // x20
  const MethodInfo *v40; // x3
  System_String_o *v41; // x21
  const MethodInfo *v42; // x3
  int32_t funcIndex[2]; // [xsp+0h] [xbp-50h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-48h] BYREF
  int32_t fractionalDigit[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D31EDF & 1) == 0 )
  {
    sub_1C93AD4(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    sub_1C93AD4(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4D31EDF = 1;
  }
  *(_QWORD *)funcIndex = 0;
  numericFormatData = 0;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v12 = sub_1C93D20(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    *(_QWORD *)(v12 + 16) = skillLvEntity;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)skillLvEntity, v13, v14, v15, v16, v17, v18);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v12;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, v12, v19, v20, v21, v22, v23, v24);
  }
  v25 = SkillDetailParamFormatResolver_TypeInfo;
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v25 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v25->static_fields;
  static_fields->evaluationErrorMessage = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->evaluationErrorMessage,
    0,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !matchObj )
    goto LABEL_27;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))matchObj->klass->vtable._5_get_Groups.methodPtr)(
                                                               matchObj,
                                                               matchObj->klass->vtable._5_get_Groups.method);
  *(_QWORD *)fractionalDigit = 0;
  numericFormatData = 0;
  if ( !Item )
    goto LABEL_27;
  v29 = Item;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                               Item,
                                                               1,
                                                               0);
  if ( !Item )
    goto LABEL_27;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&funcIndex[1], funcIndex, Value, v31) )
  {
    Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                 v29,
                                                                 3,
                                                                 0);
    if ( !Item )
      goto LABEL_27;
    v33 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0);
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, &fractionalDigit[1], v33, v32) )
    {
      Item = (System_Text_RegularExpressions_GroupCollection_o *)SkillDetailParamFormatResolver_TypeInfo;
      dataValsHierarchyCache = p_fields->dataValsHierarchyCache;
      v37 = funcIndex[0];
      v36 = funcIndex[1];
      if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      if ( !dataValsHierarchyCache )
        goto LABEL_27;
      v38 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              dataValsHierarchyCache,
              v36,
              v37,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v34);
      if ( v38 )
      {
        v39 = v38;
        Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     v29,
                                                                     2,
                                                                     0);
        if ( !Item )
          goto LABEL_27;
        v41 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0);
        if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue(fractionalDigit, v41, v39, v40) )
        {
          Item = (System_Text_RegularExpressions_GroupCollection_o *)numericFormatData;
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     fractionalDigit[0],
                     fractionalDigit[1],
                     v42);
LABEL_27:
          sub_1C93D2C(Item, v28);
        }
      }
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0);
}


void SkillDetailParamFormatResolver___c__DisplayClass12_0___ctor(
        SkillDetailParamFormatResolver___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SkillDetailParamFormatResolver___c__DisplayClass12_0___ApplyGivenValues_g__Evaluator_0(
        SkillDetailParamFormatResolver___c__DisplayClass12_0_o *this,
        System_Text_RegularExpressions_Match_o *matchObj,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver___c__DisplayClass12_0_o *v4; // x20
  SkillDetailParamFormatResolver___c__DisplayClass12_0_o *v5; // x21
  const MethodInfo *v6; // x3
  System_String_o *Value; // x22
  const MethodInfo *v8; // x3
  System_String_o *v9; // x21
  const MethodInfo *v10; // x3
  struct System_Int32_array *values; // x8
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  int32_t fractionalDigit; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4D31EE0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IsValidIndex_int___);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_1C93AD4(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4D31EE0 = 1;
  }
  *(_QWORD *)endFuncIndex = 0;
  numericFormatData = 0;
  if ( !matchObj )
    goto LABEL_20;
  this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *, const MethodInfo *))matchObj->klass->vtable._5_get_Groups.methodPtr)(
                                                                     matchObj,
                                                                     matchObj->klass->vtable._5_get_Groups.method,
                                                                     method);
  fractionalDigit = 0;
  numericFormatData = 0;
  if ( !this )
    goto LABEL_20;
  v5 = this;
  this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                     1,
                                                                     0);
  if ( !this )
    goto LABEL_20;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, Value, v6)
    && BasicHelper__IsValidIndex_int_(
         v4->fields.values,
         endFuncIndex[1],
         (const MethodInfo_31930C4 *)Method_BasicHelper_IsValidIndex_int___) )
  {
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                       (System_Text_RegularExpressions_GroupCollection_o *)v5,
                                                                       3,
                                                                       0);
    if ( !this )
      goto LABEL_20;
    v9 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0);
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)SkillDetailParamFormatResolver__TryGetNumericFormat(
                                                                       &numericFormatData,
                                                                       &fractionalDigit,
                                                                       v9,
                                                                       v8);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      values = v4->fields.values;
      if ( values )
      {
        if ( endFuncIndex[1] >= LODWORD(values->max_length) )
          sub_1C93D34(this);
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[endFuncIndex[1]],
                   fractionalDigit,
                   v10);
      }
LABEL_20:
      sub_1C93D2C(this, matchObj);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0);
}