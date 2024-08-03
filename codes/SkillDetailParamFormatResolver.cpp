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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x20
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49FD5F1 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__,
      v1);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__,
      v3);
    sub_1B640C8(
      &System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo,
      v4);
    sub_1B640C8(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v5);
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, v6);
    sub_1B640C8(&SkillDetailParamFormatResolver_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_15999/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, v8);
    byte_49FD5F1 = 1;
  }
  v9 = (System_Text_RegularExpressions_Regex_o *)sub_1B64314(System_Text_RegularExpressions_Regex_TypeInfo, v1, v2);
  System_Text_RegularExpressions_Regex___ctor_67935748(v9, (System_String_o *)StringLiteral_15999/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0LL);
  SkillDetailParamFormatResolver_TypeInfo->static_fields->ParamFormatRegex = v9;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields,
    (int32_t)v9,
    v10,
    v11);
  v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo,
                                                                   v12,
                                                                   v13);
  System_Collections_Generic_Dictionary_char__object____ctor(
    v14,
    (const MethodInfo_30F6134 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v17 = (Il2CppObject *)sub_1B64314(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v15, v16);
  System_Object___ctor(v17, 0LL);
  v17[1].klass = (Il2CppClass *)(&dword_0 + 1);
  if ( !v14 )
    sub_1B64324(v18);
  System_Collections_Generic_Dictionary_char__object___Add(
    v14,
    0x64u,
    v17,
    (const MethodInfo_30F6B08 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v21 = (Il2CppObject *)sub_1B64314(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v19, v20);
  System_Object___ctor(v21, 0LL);
  v21[1].klass = (Il2CppClass *)(byte_9 + 1);
  System_Collections_Generic_Dictionary_char__object___Add(
    v14,
    0x6Du,
    v21,
    (const MethodInfo_30F6B08 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v24 = (Il2CppObject *)sub_1B64314(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v22, v23);
  System_Object___ctor(v24, 0LL);
  v24[1].klass = (Il2CppClass *)(&qword_60 + 4);
  System_Collections_Generic_Dictionary_char__object___Add(
    v14,
    0x79u,
    v24,
    (const MethodInfo_30F6B08 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  static_fields = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->NumericFormatDict = (struct System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->NumericFormatDict, (int32_t)v14, v26, v27);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  SkillDetailParamFormatResolver_c *v17; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v19; // x22

  if ( (byte_49FD5EC & 1) == 0 )
  {
    sub_1B640C8(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, skillLvEntity);
    sub_1B640C8(&SkillDetailParamFormatResolver_TypeInfo, v5);
    sub_1B640C8(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__, v6);
    sub_1B640C8(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_25032/*"{{"*/, v8);
    byte_49FD5EC = 1;
  }
  v9 = sub_1B64314(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo, skillLvEntity, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 24) = skillLvEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)skillLvEntity, v11, v12);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25032/*"{{"*/, 0LL) )
  {
    *(_QWORD *)(v9 + 16) = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), 0, v13, v14);
    v17 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v17 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v17->static_fields->ParamFormatRegex;
    v19 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1B64314(
                                                               System_Text_RegularExpressions_MatchEvaluator_TypeInfo,
                                                               v15,
                                                               v16);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v19,
      (Il2CppObject *)v9,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_67933012(ParamFormatRegex, detailText, v19, 0LL);
LABEL_11:
    sub_1B64324(v10);
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  SkillDetailParamFormatResolver_c *v15; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v17; // x22

  if ( (byte_49FD5ED & 1) == 0 )
  {
    sub_1B640C8(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo, values);
    sub_1B640C8(&SkillDetailParamFormatResolver_TypeInfo, v5);
    sub_1B640C8(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__, v6);
    sub_1B640C8(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_25032/*"{{"*/, v8);
    byte_49FD5ED = 1;
  }
  v9 = sub_1B64314(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo, values, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = values;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)values, v11, v12);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_25032/*"{{"*/, 0LL) )
  {
    v15 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v15 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v15->static_fields->ParamFormatRegex;
    v17 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_1B64314(
                                                               System_Text_RegularExpressions_MatchEvaluator_TypeInfo,
                                                               v13,
                                                               v14);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v17,
      (Il2CppObject *)v9,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_67933012(ParamFormatRegex, detailText, v17, 0LL);
LABEL_11:
    sub_1B64324(v10);
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
  int32_t skillDetailId; // [xsp+Ch] [xbp-34h] BYREF
  int32_t lv; // [xsp+18h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_49FD5F0 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, ent);
    sub_1B640C8(&StringLiteral_12729/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v5);
    byte_49FD5F0 = 1;
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
        System_String__Format_61389836((System_String_o *)StringLiteral_12729/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v7, v8, v9, 0LL);
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
  __int64 v8; // x1
  int32_t *v9; // x21
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
    sub_1B64324(funcIndex);
  v9 = funcIndex;
  if ( !funcIndex[6] )
    sub_1B6432C(funcIndex, v8);
  if ( !System_Int32__TryParse(*((System_String_o **)funcIndex + 4), v5, 0LL) )
    return 0;
  if ( v9[6] < 2 )
  {
LABEL_10:
    result = 1;
    --*v5;
    --*endFuncIndex;
    return result;
  }
  v6 = (System_String_o *)*((_QWORD *)v9 + 5);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x19
  SkillDetailParamFormatResolver_c *v13; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_49FD5EE & 1) == 0 )
  {
    sub_1B640C8(&SkillDetailParamFormatResolver_TypeInfo, valsKeyStr);
    sub_1B640C8(&StringLiteral_16029/*"]が取れませんでした"*/, v7);
    sub_1B640C8(&StringLiteral_23597/*"svalsから["*/, v8);
    byte_49FD5EE = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v12 = System_String__Concat_61386656(
            (System_String_o *)StringLiteral_23597/*"svalsから["*/,
            valsKeyStr,
            (System_String_o *)StringLiteral_16029/*"]が取れませんでした"*/,
            0LL);
    v13 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v13 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->evaluationErrorMessage = v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->evaluationErrorMessage, (int32_t)v12, v10, v11);
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
  __int64 v22; // x19
  __int64 v23; // x0
  __int64 *v24; // x8
  Il2CppObject *v25; // x2
  Il2CppObject *v26; // x1
  SkillDetailParamFormatResolver_c *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v31; // x8
  System_Func_T__TResult__o *_9__15_0; // x22
  System_String_o *v33; // x21
  Il2CppObject *v34; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_string__o *v38; // x0
  System_String_o *v39; // x20
  __int64 v40; // x0
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  SkillDetailParamFormatResolver_c *v44; // x8
  System_String_o *v45; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v46; // x0
  int v48; // [xsp+4h] [xbp-4Ch] BYREF
  int v49; // [xsp+8h] [xbp-48h] BYREF
  uint16_t v50; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FD5EF & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, fractionalDigit);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__,
      v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_char__string___, v9);
    sub_1B640C8(&System_Func_char__string__TypeInfo, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&SkillDetailParamFormatResolver_TypeInfo, v12);
    sub_1B640C8(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__, v13);
    sub_1B640C8(&SkillDetailParamFormatResolver___c_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_25263/*"指定可能な少数点以下の桁数は({0}～{1})です"*/, v15);
    sub_1B640C8(&StringLiteral_25277/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/, v16);
    sub_1B640C8(&StringLiteral_869/*","*/, v17);
    byte_49FD5EF = 1;
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
          (const MethodInfo_30F8350 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v27 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v27 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v27->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__object___get_Keys(
               Chars,
               (const MethodInfo_30F67C8 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v31 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v31 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      _9__15_0 = (System_Func_T__TResult__o *)v31->static_fields->__9__15_0;
      v33 = (System_String_o *)StringLiteral_869/*","*/;
      if ( !_9__15_0 )
      {
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = SkillDetailParamFormatResolver___c_TypeInfo;
        }
        v34 = (Il2CppObject *)v31->static_fields->__9;
        _9__15_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_char__string__TypeInfo, v28, v29);
        System_Func_char__object____ctor(
          _9__15_0,
          v34,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          0LL);
        static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        static_fields->__9__15_0 = (struct System_Func_char__string__o *)_9__15_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v36, v37);
      }
      v38 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_2E6638C *)Method_System_Linq_Enumerable_Select_char__string___);
      v39 = System_String__Join_61391052(v33, v38, 0LL);
      v50 = System_String__get_Chars(formatKey, 0, 0LL);
      v40 = j_il2cpp_value_box_0(char_TypeInfo, &v50);
      v24 = &StringLiteral_25277/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v26 = (Il2CppObject *)v40;
      v25 = (Il2CppObject *)v39;
      goto LABEL_21;
    }
LABEL_26:
    sub_1B64324(Chars);
  }
  if ( formatKey->fields._stringLength < 2 )
    return 1;
  v20 = 1;
  v21 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v21 - 48;
  if ( (unsigned __int16)(v21 - 49) >= 3u )
  {
    v49 = 1;
    v22 = j_il2cpp_value_box_0(int_TypeInfo, &v49);
    v48 = 3;
    v23 = j_il2cpp_value_box_0(int_TypeInfo, &v48);
    v24 = &StringLiteral_25263/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v25 = (Il2CppObject *)v23;
    v26 = (Il2CppObject *)v22;
LABEL_21:
    v41 = System_String__Format_61389768((System_String_o *)*v24, v26, v25, 0LL);
    v44 = SkillDetailParamFormatResolver_TypeInfo;
    v45 = v41;
    if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v44 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v46 = v44->static_fields;
    v46->evaluationErrorMessage = v45;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->evaluationErrorMessage, (int32_t)v45, v42, v43);
    return 0;
  }
  return v20;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)skillLvEntity, v5, v6);
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
  System_Collections_Generic_Dictionary_int__object__o *EndSkillValsDict; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  System_Object_array *Item; // x0
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Object_array *v28; // x0
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  int v35; // [xsp+Ch] [xbp-44h] BYREF
  int v36; // [xsp+18h] [xbp-38h] BYREF
  int v37; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FD5F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_DataVals___, *(_QWORD *)&funcIndex);
    sub_1B640C8(&Method_BasicHelper_IsValidIndex_DataVals___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_24998/*"{0}_{1})に該当する効果が存在しません"*/, v13);
    sub_1B640C8(&StringLiteral_25018/*"{0}番目の効果が存在しません"*/, v14);
    byte_49FD5F6 = 1;
  }
  *errorMessage = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)errorMessage, 0, endFuncIndex, (int32_t)errorMessage);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v15);
  if ( BasicHelper__IsValidIndex_object__48399848(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_2E285E8 *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v17);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              EndSkillValsDict,
              funcIndex,
              (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v20);
        EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                     this,
                                                                                     v21);
        if ( !EndSkillValsDict )
          goto LABEL_17;
        Item = (System_Object_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        EndSkillValsDict,
                                        funcIndex,
                                        (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__48399848(
                Item,
                endFuncIndex,
                (const MethodInfo_2E285E8 *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v36 = funcIndex + 1;
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
          v35 = endFuncIndex + 1;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
          v25 = System_String__Format_61389768((System_String_o *)StringLiteral_24998/*"{0}_{1})に該当する効果が存在しません"*/, v23, v24, 0LL);
          *errorMessage = v25;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)errorMessage, (int32_t)v25, v26, v27);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
                                                                                   this,
                                                                                   v19);
      if ( EndSkillValsDict )
      {
        v28 = (System_Object_array *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                       EndSkillValsDict,
                                       funcIndex,
                                       (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_object_(
                               v28,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_2E28238 *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_1B64324(EndSkillValsDict);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v17);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields._entries) <= funcIndex )
      sub_1B6432C(EndSkillValsDict, v34);
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields._count + funcIndex);
  }
  else
  {
    v37 = funcIndex + 1;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
    v31 = System_String__Format((System_String_o *)StringLiteral_25018/*"{0}番目の効果が存在しません"*/, v30, 0LL);
    *errorMessage = v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)errorMessage, (int32_t)v31, v32, v33);
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

  if ( (byte_49FD5F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&funcIndex);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__, v6);
    byte_49FD5F7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v8);
  if ( !RootSkillValsArray )
    goto LABEL_10;
  if ( LODWORD(RootSkillValsArray->fields._entries) <= funcIndex )
    sub_1B6432C(RootSkillValsArray, v10);
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
    sub_1B64324(RootSkillValsArray);
  }
  System_Collections_Generic_Dictionary_int__object___set_Item(
    RootSkillValsArray,
    funcIndex,
    &EndSkillValsArrayFromRootValsForDisplay->obj,
    (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  ServantStatusBattleListViewItem_o *p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FD5F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo, v4);
    byte_49FD5F5 = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = (ServantStatusBattleListViewItem_o *)&this->fields.endSkillValsDict;
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_int__DataVals____TypeInfo,
                                                                   method,
                                                                   v2);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v6,
      (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    p_endSkillValsDict->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B6406C(p_endSkillValsDict, (int32_t)v6, v8, v9);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v6;
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
      sub_1B64324(0LL);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0LL);
    p_rootSkillValsArray->klass = (ServantStatusBattleListViewItem_c *)rootSkillValsArray;
    sub_1B6406C(p_rootSkillValsArray, (int32_t)rootSkillValsArray, v5, v6);
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
  int32_t v17; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o format; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FD5F4 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&value);
    sub_1B640C8(&StringLiteral_19603/*"f{0}"*/, v7);
    byte_49FD5F4 = 1;
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
    v10 = System_String__Format((System_String_o *)StringLiteral_19603/*"f{0}"*/, v9, 0LL);
    v12 = System_Double__ToString_62085464(v11, &format, (const MethodInfo *)v10);
  }
  v14 = v12;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v13);
  return System_String__Concat_61375396(v14, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver_NumericFormatData_o *v2; // x19

  v2 = this;
  if ( (byte_49FD5F3 & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_1B640C8(&string_TypeInfo, method);
    byte_49FD5F3 = 1;
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
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FD5F2 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v1);
    sub_1B640C8(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_6526/*"FUNC_VALUE_PERCENT"*/, v3);
    byte_49FD5F2 = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6526/*"FUNC_VALUE_PERCENT"*/, 0LL);
    SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr = percentStr;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields,
      (int32_t)percentStr,
      v5,
      v6);
  }
  return percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD5F8 & 1) == 0 )
  {
    sub_1B640C8(&SkillDetailParamFormatResolver___c_TypeInfo, v1);
    byte_49FD5F8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SkillDetailParamFormatResolver___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SkillDetailParamFormatResolver___c_TypeInfo->static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SkillDetailParamFormatResolver___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  if ( (byte_49FD5F9 & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, x);
    byte_49FD5F9 = 1;
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
  __int64 v6; // x1
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  struct SkillLvEntity_o *skillLvEntity; // x22
  __int64 v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  SkillDetailParamFormatResolver_c *v14; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
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

  if ( (byte_49FD5FA & 1) == 0 )
  {
    sub_1B640C8(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj);
    sub_1B640C8(&SkillDetailParamFormatResolver_TypeInfo, v6);
    byte_49FD5FA = 1;
  }
  *(_QWORD *)funcIndex = 0LL;
  numericFormatData = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v9 = sub_1B64314(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo, matchObj, method);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    *(_QWORD *)(v9 + 16) = skillLvEntity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)skillLvEntity, v10, v11);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, v9, v12, v13);
  }
  v14 = SkillDetailParamFormatResolver_TypeInfo;
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v14 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v14->static_fields;
  static_fields->evaluationErrorMessage = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->evaluationErrorMessage, 0, (int32_t)method, v3);
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
          sub_1B64324(Item);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  struct System_Int32_array *values; // x8
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  int32_t fractionalDigit; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_49FD5FB & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IsValidIndex_int___, matchObj);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_1B640C8(
                                                                       &SkillDetailParamFormatResolver_TypeInfo,
                                                                       v5);
    byte_49FD5FB = 1;
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
         (const MethodInfo_2E28584 *)Method_BasicHelper_IsValidIndex_int___) )
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
          sub_1B6432C(this, v11);
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[endFuncIndex[1] + 1],
                   fractionalDigit,
                   v12);
      }
LABEL_20:
      sub_1B64324(this);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}