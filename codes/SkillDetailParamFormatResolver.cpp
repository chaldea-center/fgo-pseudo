void __fastcall SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x19
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x20
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5C377 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
    sub_1B885B0(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_1B885B0(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1B885B0(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1B885B0(&StringLiteral_16068/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/);
    byte_4A5C377 = 1;
  }
  v1 = (System_Text_RegularExpressions_Regex_o *)sub_1B887FC(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_68267392(v1, (System_String_o *)StringLiteral_16068/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0LL);
  SkillDetailParamFormatResolver_TypeInfo->static_fields->ParamFormatRegex = v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
  System_Collections_Generic_Dictionary_char__object____ctor(
    v4,
    (const MethodInfo_31402A8 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v5 = (Il2CppObject *)sub_1B887FC(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v5, 0LL);
  v5[1].klass = (Il2CppClass *)(&dword_0 + 1);
  if ( !v4 )
    sub_1B8880C(v6, v7);
  System_Collections_Generic_Dictionary_char__object___Add(
    v4,
    0x64u,
    v5,
    (const MethodInfo_3140C7C *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v8 = (Il2CppObject *)sub_1B887FC(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v8, 0LL);
  v8[1].klass = (Il2CppClass *)(byte_9 + 1);
  System_Collections_Generic_Dictionary_char__object___Add(
    v4,
    0x6Du,
    v8,
    (const MethodInfo_3140C7C *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v9 = (Il2CppObject *)sub_1B887FC(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v9, 0LL);
  v9[1].klass = (Il2CppClass *)(&qword_60 + 4);
  System_Collections_Generic_Dictionary_char__object___Add(
    v4,
    0x79u,
    v9,
    (const MethodInfo_3140C7C *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  static_fields = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->NumericFormatDict = (struct System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->NumericFormatDict, (int32_t)v4, v11, v12);
}


System_String_o *__fastcall SkillDetailParamFormatResolver__Apply(
        System_String_o *detailText,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  SkillDetailParamFormatResolver_c *v12; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v14; // x22

  if ( (byte_4A5C372 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_1B885B0(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1B885B0(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__);
    sub_1B885B0(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
    sub_1B885B0(&StringLiteral_25133/*"{{"*/);
    byte_4A5C372 = 1;
  }
  v5 = sub_1B887FC(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 24) = skillLvEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)skillLvEntity, v8, v9);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25133/*"{{"*/, 0LL) )
  {
    *(_QWORD *)(v5 + 16) = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), 0, v10, v11);
    v12 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v12 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v12->static_fields->ParamFormatRegex;
    v14 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1B887FC(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v14,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_68264656(ParamFormatRegex, detailText, v14, 0LL);
LABEL_11:
    sub_1B8880C(v6, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3
  SkillDetailParamFormatResolver_c *v10; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v12; // x22

  if ( (byte_4A5C373 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_1B885B0(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1B885B0(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__);
    sub_1B885B0(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
    sub_1B885B0(&StringLiteral_25133/*"{{"*/);
    byte_4A5C373 = 1;
  }
  v5 = sub_1B887FC(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = values;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)values, v8, v9);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25133/*"{{"*/, 0LL) )
  {
    v10 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v10 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v10->static_fields->ParamFormatRegex;
    v12 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1B887FC(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_68264656(ParamFormatRegex, detailText, v12, 0LL);
LABEL_11:
    sub_1B8880C(v6, v7);
  }
  return detailText;
}


void __fastcall SkillDetailParamFormatResolver__AssertFailed(
        System_Text_RegularExpressions_Match_o *matchObj,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  System_String_o *Value; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  int32_t skillDetailId; // [xsp+Ch] [xbp-34h] BYREF
  int32_t lv; // [xsp+18h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4A5C376 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_12792/*"SkillId({0}),Lv({1}),DetailId({2})"*/);
    byte_4A5C376 = 1;
  }
  if ( matchObj )
  {
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
    if ( ent )
    {
      if ( Value )
      {
        skillId = ent->fields.skillId;
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillId, v6, v7, v8);
        lv = ent->fields.lv;
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v10, v11, v12);
        skillDetailId = ent->fields.skillDetailId;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillDetailId, v14, v15, v16);
        System_String__Format_61721472((System_String_o *)StringLiteral_12792/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v9, v13, v17, 0LL);
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
    sub_1B8880C(funcIndex, endFuncIndex);
  v8 = funcIndex;
  if ( !funcIndex[6] )
    sub_1B88814(funcIndex, endFuncIndex);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x19
  SkillDetailParamFormatResolver_c *v11; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_4A5C374 & 1) == 0 )
  {
    sub_1B885B0(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1B885B0(&StringLiteral_16098/*"]が取れませんでした"*/);
    sub_1B885B0(&StringLiteral_23694/*"svalsから["*/);
    byte_4A5C374 = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v10 = System_String__Concat_61718292(
            (System_String_o *)StringLiteral_23694/*"svalsから["*/,
            valsKeyStr,
            (System_String_o *)StringLiteral_16098/*"]が取れませんでした"*/,
            0LL);
    v11 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v11 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->evaluationErrorMessage = v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->evaluationErrorMessage, (int32_t)v10, v8, v9);
  }
  return 0;
}


bool __fastcall SkillDetailParamFormatResolver__TryGetNumericFormat(
        SkillDetailParamFormatResolver_NumericFormatData_o **numericFormatData,
        int32_t *fractionalDigit,
        System_String_o *formatKey,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *Chars; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *monitor; // x22
  bool v9; // w21
  uint16_t v10; // w0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x0
  __int64 *v19; // x8
  Il2CppObject *v20; // x2
  Il2CppObject *v21; // x1
  SkillDetailParamFormatResolver_c *v22; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v24; // x8
  System_Func_T__TResult__o *_9__15_0; // x22
  System_String_o *v26; // x21
  Il2CppObject *v27; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_string__o *v31; // x0
  System_String_o *v32; // x20
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x0
  System_String_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  SkillDetailParamFormatResolver_c *v40; // x8
  System_String_o *v41; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v42; // x0
  int v44; // [xsp+4h] [xbp-4Ch] BYREF
  int v45; // [xsp+8h] [xbp-48h] BYREF
  uint16_t v46; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5C375 & 1) == 0 )
  {
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_1B885B0(&System_Func_char__string__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1B885B0(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__);
    sub_1B885B0(&SkillDetailParamFormatResolver___c_TypeInfo);
    sub_1B885B0(&StringLiteral_25365/*"指定可能な少数点以下の桁数は({0}～{1})です"*/);
    sub_1B885B0(&StringLiteral_25379/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5C375 = 1;
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
          (const MethodInfo_31424C4 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v22 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v22 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v22->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__object___get_Keys(
               Chars,
               (const MethodInfo_314093C *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v24 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v24 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      _9__15_0 = (System_Func_T__TResult__o *)v24->static_fields->__9__15_0;
      v26 = (System_String_o *)StringLiteral_868/*","*/;
      if ( !_9__15_0 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = SkillDetailParamFormatResolver___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v24->static_fields->__9;
        _9__15_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_char__string__TypeInfo);
        System_Func_char__object____ctor(
          _9__15_0,
          v27,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          0LL);
        static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        static_fields->__9__15_0 = (struct System_Func_char__string__o *)_9__15_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v29, v30);
      }
      v31 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_2EAD0F8 *)Method_System_Linq_Enumerable_Select_char__string___);
      v32 = System_String__Join_61722688(v26, v31, 0LL);
      v46 = System_String__get_Chars(formatKey, 0, 0LL);
      v36 = j_il2cpp_value_box_0(char_TypeInfo, &v46, v33, v34, v35);
      v19 = &StringLiteral_25379/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v21 = (Il2CppObject *)v36;
      v20 = (Il2CppObject *)v32;
      goto LABEL_21;
    }
LABEL_26:
    sub_1B8880C(Chars, fractionalDigit);
  }
  if ( formatKey->fields._stringLength < 2 )
    return 1;
  v9 = 1;
  v10 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v10 - 48;
  if ( (unsigned __int16)(v10 - 49) >= 3u )
  {
    v45 = 1;
    v14 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v11, v12, v13);
    v44 = 3;
    v18 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v15, v16, v17);
    v19 = &StringLiteral_25365/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v20 = (Il2CppObject *)v18;
    v21 = (Il2CppObject *)v14;
LABEL_21:
    v37 = System_String__Format_61721404((System_String_o *)*v19, v21, v20, 0LL);
    v40 = SkillDetailParamFormatResolver_TypeInfo;
    v41 = v37;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v40 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v42 = v40->static_fields;
    v42->evaluationErrorMessage = v41;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v42->evaluationErrorMessage, (int32_t)v41, v38, v39);
    return 0;
  }
  return v9;
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache___ctor(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SkillLvEntity_k__BackingField = skillLvEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)skillLvEntity, v5, v6);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_Dictionary_int__object__o *EndSkillValsDict; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  System_Object_array *Item; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Object_array *v32; // x0
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int v38; // [xsp+Ch] [xbp-44h] BYREF
  int v39; // [xsp+18h] [xbp-38h] BYREF
  int v40; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A5C37C & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_DataVals___);
    sub_1B885B0(&Method_BasicHelper_IsValidIndex_DataVals___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_25099/*"{0}_{1})に該当する効果が存在しません"*/);
    sub_1B885B0(&StringLiteral_25119/*"{0}番目の効果が存在しません"*/);
    byte_4A5C37C = 1;
  }
  *errorMessage = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)errorMessage, 0, endFuncIndex, (int32_t)errorMessage);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v9);
  if ( BasicHelper__IsValidIndex_object__48687876(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_2E6EB04 *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v11);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              EndSkillValsDict,
              funcIndex,
              (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
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
                                        (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__48687876(
                Item,
                endFuncIndex,
                (const MethodInfo_2E6EB04 *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v39 = funcIndex + 1;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v21, v22, v23);
          v38 = endFuncIndex + 1;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v25, v26, v27);
          v29 = System_String__Format_61721404((System_String_o *)StringLiteral_25099/*"{0}_{1})に該当する効果が存在しません"*/, v24, v28, 0LL);
          *errorMessage = v29;
          sub_1B88554((ServantStatusBattleListViewItem_o *)errorMessage, (int32_t)v29, v30, v31);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v17);
      if ( EndSkillValsDict )
      {
        v32 = (System_Object_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       EndSkillValsDict,
                                       funcIndex,
                                       (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_object_(
                               v32,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_1B8880C(EndSkillValsDict, v16);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v11);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields._entries) <= funcIndex )
      sub_1B88814(EndSkillValsDict, v16);
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields._count + funcIndex);
  }
  else
  {
    v40 = funcIndex + 1;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v12, v13, v14);
    v35 = System_String__Format((System_String_o *)StringLiteral_25119/*"{0}番目の効果が存在しません"*/, v34, 0LL);
    *errorMessage = v35;
    sub_1B88554((ServantStatusBattleListViewItem_o *)errorMessage, (int32_t)v35, v36, v37);
    return 0LL;
  }
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(
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

  if ( (byte_4A5C37D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
    byte_4A5C37D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v6);
  if ( !RootSkillValsArray )
    goto LABEL_10;
  if ( LODWORD(RootSkillValsArray->fields._entries) <= funcIndex )
    sub_1B88814(RootSkillValsArray, v8);
  if ( !Master_object
    || (EndSkillValsArrayFromRootValsForDisplay = FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                    (FunctionMaster_o *)Master_object,
                                                    *((DataVals_o **)&RootSkillValsArray->fields._count + funcIndex),
                                                    0LL),
        (RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                        this,
                                                                                        v10)) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(RootSkillValsArray, v8);
  }
  System_Collections_Generic_Dictionary_int__object___set_Item(
    RootSkillValsArray,
    funcIndex,
    &EndSkillValsArrayFromRootValsForDisplay->obj,
    (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5C37B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    byte_4A5C37B = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = (ServantStatusBattleListViewItem_o *)&this->fields.endSkillValsDict;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v4,
      (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    p_endSkillValsDict->klass = (ServantStatusBattleListViewItem_c *)v4;
    sub_1B88554(p_endSkillValsDict, (int32_t)v4, v6, v7);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v4;
}


DataVals_array *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_rootSkillValsArray; // x19
  DataVals_array *rootSkillValsArray; // x20
  SkillLvEntity_o *SkillLvEntity_k__BackingField; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  p_rootSkillValsArray = (ServantStatusBattleListViewItem_o *)&this->fields.rootSkillValsArray;
  rootSkillValsArray = this->fields.rootSkillValsArray;
  if ( !rootSkillValsArray )
  {
    SkillLvEntity_k__BackingField = this->fields._SkillLvEntity_k__BackingField;
    if ( !SkillLvEntity_k__BackingField )
      sub_1B8880C(0LL, method);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0LL);
    p_rootSkillValsArray->klass = (ServantStatusBattleListViewItem_c *)rootSkillValsArray;
    sub_1B88554(p_rootSkillValsArray, (int32_t)rootSkillValsArray, v5, v6);
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
  int32_t shiftDigit; // w8
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  double v11; // d0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x20
  System_String_o *SuffixStr; // x0
  int32_t v17; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o format; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5C37A & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_19682/*"f{0}"*/);
    byte_4A5C37A = 1;
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
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, *(_QWORD *)&fractionalDigit, method, v4);
    v10 = System_String__Format((System_String_o *)StringLiteral_19682/*"f{0}"*/, v9, 0LL);
    v12 = System_Double__ToString_62417108(v11, &format, (const MethodInfo *)v10);
  }
  v14 = v12;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v13);
  return System_String__Concat_61707032(v14, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver_NumericFormatData_o *v2; // x19

  v2 = this;
  if ( (byte_4A5C379 & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_1B885B0(&string_TypeInfo);
    byte_4A5C379 = 1;
  }
  if ( v2->fields.suffixType == 1 )
    return SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr((const MethodInfo *)this);
  else
    return string_TypeInfo->static_fields->Empty;
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr(const MethodInfo *method)
{
  struct System_String_o *percentStr; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C378 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_1B885B0(&StringLiteral_6552/*"FUNC_VALUE_PERCENT"*/);
    byte_4A5C378 = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6552/*"FUNC_VALUE_PERCENT"*/, 0LL);
    SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr = percentStr;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields,
      (int32_t)percentStr,
      v2,
      v3);
  }
  return percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C37E & 1) == 0 )
  {
    sub_1B885B0(&SkillDetailParamFormatResolver___c_TypeInfo);
    byte_4A5C37E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SkillDetailParamFormatResolver___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SkillDetailParamFormatResolver___c_TypeInfo->static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SkillDetailParamFormatResolver___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4A5C37F & 1) == 0 )
  {
    sub_1B885B0(&char_TypeInfo);
    byte_4A5C37F = 1;
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
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  struct SkillLvEntity_o *skillLvEntity; // x22
  __int64 v8; // x23
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  SkillDetailParamFormatResolver_c *v13; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
  __int64 v16; // x1
  System_Text_RegularExpressions_GroupCollection_o *v17; // x21
  System_String_o *Value; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  System_String_o *v21; // x22
  const MethodInfo *v22; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x23
  int32_t v24; // w20
  int32_t v25; // w22
  DataVals_o *v26; // x0
  DataVals_o *v27; // x20
  const MethodInfo *v28; // x3
  System_String_o *v29; // x21
  const MethodInfo *v30; // x3
  int32_t funcIndex[2]; // [xsp+0h] [xbp-50h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-48h] BYREF
  int32_t fractionalDigit[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5C380 & 1) == 0 )
  {
    sub_1B885B0(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    sub_1B885B0(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4A5C380 = 1;
  }
  *(_QWORD *)funcIndex = 0LL;
  numericFormatData = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v8 = sub_1B887FC(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0LL);
    *(_QWORD *)(v8 + 16) = skillLvEntity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)skillLvEntity, v9, v10);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, v8, v11, v12);
  }
  v13 = SkillDetailParamFormatResolver_TypeInfo;
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v13 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->evaluationErrorMessage = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->evaluationErrorMessage, 0, (int32_t)method, v3);
  if ( !matchObj )
    goto LABEL_27;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer))matchObj->klass->vtable._5_get_Groups.method)(
                                                               matchObj,
                                                               matchObj->klass->vtable._6_GroupToStringImpl.methodPtr);
  *(_QWORD *)fractionalDigit = 0LL;
  numericFormatData = 0LL;
  if ( !Item )
    goto LABEL_27;
  v17 = Item;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                               Item,
                                                               1,
                                                               0LL);
  if ( !Item )
    goto LABEL_27;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&funcIndex[1], funcIndex, Value, v19) )
  {
    Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                 v17,
                                                                 3,
                                                                 0LL);
    if ( !Item )
      goto LABEL_27;
    v21 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, &fractionalDigit[1], v21, v20) )
    {
      Item = (System_Text_RegularExpressions_GroupCollection_o *)SkillDetailParamFormatResolver_TypeInfo;
      dataValsHierarchyCache = p_fields->dataValsHierarchyCache;
      v25 = funcIndex[0];
      v24 = funcIndex[1];
      if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      if ( !dataValsHierarchyCache )
        goto LABEL_27;
      v26 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              dataValsHierarchyCache,
              v24,
              v25,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v22);
      if ( v26 )
      {
        v27 = v26;
        Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     v17,
                                                                     2,
                                                                     0LL);
        if ( !Item )
          goto LABEL_27;
        v29 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
        if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue(fractionalDigit, v29, v27, v28) )
        {
          Item = (System_Text_RegularExpressions_GroupCollection_o *)numericFormatData;
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     fractionalDigit[0],
                     fractionalDigit[1],
                     v30);
LABEL_27:
          sub_1B8880C(Item, v16);
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
  if ( (byte_4A5C381 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IsValidIndex_int___);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_1B885B0(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4A5C381 = 1;
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
  v5 = this;
  this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     (System_Text_RegularExpressions_GroupCollection_o *)this,
                                                                     1,
                                                                     0LL);
  if ( !this )
    goto LABEL_20;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, Value, v6)
    && BasicHelper__IsValidIndex_int_(
         v4->fields.values,
         endFuncIndex[1],
         (const MethodInfo_2E6EAA0 *)Method_BasicHelper_IsValidIndex_int___) )
  {
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                       (System_Text_RegularExpressions_GroupCollection_o *)v5,
                                                                       3,
                                                                       0LL);
    if ( !this )
      goto LABEL_20;
    v9 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
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
        if ( endFuncIndex[1] >= values->max_length )
          sub_1B88814(this, matchObj);
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[endFuncIndex[1] + 1],
                   fractionalDigit,
                   v10);
      }
LABEL_20:
      sub_1B8880C(this, matchObj);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}