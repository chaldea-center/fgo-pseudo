void SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x19
  Il2CppObject *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  const MethodInfo_3F68108 *v13; // x3
  Il2CppObject *v14; // x20
  const MethodInfo_3F68108 *v15; // x3
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5971DD2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
    sub_2213A60(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_2213A60(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_2213A60(&SkillDetailParamFormatResolver_TypeInfo);
    sub_2213A60(&StringLiteral_16690/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/);
    byte_5971DD2 = 1;
  }
  v1 = (System_Text_RegularExpressions_Regex_o *)sub_2213CCC(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_82059952(v1, (System_String_o *)StringLiteral_16690/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0);
  SkillDetailParamFormatResolver_TypeInfo->static_fields->ParamFormatRegex = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
  System_Collections_Generic_Dictionary_char__object____ctor(
    v8,
    (const MethodInfo_3F67754 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v9 = (Il2CppObject *)sub_2213CCC(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v9, 0);
  v9[1].klass = (Il2CppClass *)(&dword_0 + 1);
  if ( !v8 )
    sub_2213CDC(v10, v11);
  System_Collections_Generic_Dictionary_char__object___Add(
    v8,
    0x64u,
    v9,
    (const MethodInfo_3F68108 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v12 = (Il2CppObject *)sub_2213CCC(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v12, 0);
  v13 = (const MethodInfo_3F68108 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__;
  v12[1].klass = (Il2CppClass *)(byte_9 + 1);
  System_Collections_Generic_Dictionary_char__object___Add(v8, 0x6Du, v12, v13);
  v14 = (Il2CppObject *)sub_2213CCC(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  System_Object___ctor(v14, 0);
  v15 = (const MethodInfo_3F68108 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__;
  v14[1].klass = (Il2CppClass *)(&qword_60 + 4);
  System_Collections_Generic_Dictionary_char__object___Add(v8, 0x79u, v14, v15);
  static_fields = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->NumericFormatDict = (struct System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->NumericFormatDict,
    (int32_t)v8,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


System_String_o *SkillDetailParamFormatResolver__Apply(
        System_String_o *detailText,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  SkillDetailParamFormatResolver_c *v21; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v23; // x22

  if ( (byte_5971DCD & 1) == 0 )
  {
    sub_2213A60(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_2213A60(&SkillDetailParamFormatResolver_TypeInfo);
    sub_2213A60(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__);
    sub_2213A60(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
    sub_2213A60(&StringLiteral_26633/*"{{"*/);
    byte_5971DCD = 1;
  }
  v5 = sub_2213CCC(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 24) = skillLvEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)skillLvEntity, v8, v9, v10, v11, v12, v13);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_26633/*"{{"*/, 0) )
  {
    *(_QWORD *)(v5 + 16) = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), 0, v14, v15, v16, v17, v18, v19);
    v21 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v20);
      v21 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v21->static_fields->ParamFormatRegex;
    v23 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_2213CCC(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v23,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_82057112(ParamFormatRegex, detailText, v23, 0);
LABEL_11:
    sub_2213CDC(v6, v7);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  SkillDetailParamFormatResolver_c *v15; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v17; // x22

  if ( (byte_5971DCE & 1) == 0 )
  {
    sub_2213A60(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_2213A60(&SkillDetailParamFormatResolver_TypeInfo);
    sub_2213A60(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__);
    sub_2213A60(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
    sub_2213A60(&StringLiteral_26633/*"{{"*/);
    byte_5971DCE = 1;
  }
  v5 = sub_2213CCC(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = values;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)values, v8, v9, v10, v11, v12, v13);
  if ( !detailText )
    goto LABEL_11;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_26633/*"{{"*/, 0) )
  {
    v15 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v14);
      v15 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v15->static_fields->ParamFormatRegex;
    v17 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_2213CCC(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_82057112(ParamFormatRegex, detailText, v17, 0);
LABEL_11:
    sub_2213CDC(v6, v7);
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

  if ( (byte_5971DD1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13438/*"SkillId({0}),Lv({1}),DetailId({2})"*/);
    byte_5971DD1 = 1;
  }
  if ( matchObj )
  {
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0);
    if ( ent )
    {
      if ( Value )
      {
        skillId = ent->fields.skillId;
        v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &skillId);
        lv = ent->fields.lv;
        v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &lv);
        skillDetailId = ent->fields.skillDetailId;
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &skillDetailId);
        System_String__Format_75697948((System_String_o *)StringLiteral_13438/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v6, v7, v8, 0);
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
  bool result; // w0

  *endFuncIndex = 0;
  if ( !rawString )
    goto LABEL_13;
  v5 = funcIndex;
  v6 = rawString;
  if ( rawString->fields._stringLength == 1 )
  {
    v7 = v5;
    goto LABEL_4;
  }
  funcIndex = (int32_t *)System_String__Split(rawString, 0x5Fu, 0, 0);
  if ( !funcIndex )
LABEL_13:
    sub_2213CDC(funcIndex, endFuncIndex);
  v8 = funcIndex;
  if ( !funcIndex[6] )
    sub_2213CE4(funcIndex);
  if ( !System_Int32__TryParse(*((System_String_o **)funcIndex + 4), v5, 0) )
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
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x19
  SkillDetailParamFormatResolver_c *v16; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_5971DCF & 1) == 0 )
  {
    sub_2213A60(&SkillDetailParamFormatResolver_TypeInfo);
    sub_2213A60(&StringLiteral_16721/*"]が取れませんでした"*/);
    sub_2213A60(&StringLiteral_25126/*"svalsから["*/);
    byte_5971DCF = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0) )
      return 1;
    v15 = System_String__Concat_75694928(
            (System_String_o *)StringLiteral_25126/*"svalsから["*/,
            valsKeyStr,
            (System_String_o *)StringLiteral_16721/*"]が取れませんでした"*/,
            0);
    v16 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v8);
      v16 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v16->static_fields;
    static_fields->evaluationErrorMessage = v15;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->evaluationErrorMessage,
      (int32_t)v15,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
  System_String_o *v9; // x0
  bool v10; // w19
  uint16_t v11; // w0
  unsigned int v12; // w8
  __int64 v13; // x19
  Il2CppObject *v14; // x2
  Il2CppObject *v15; // x1
  __int64 *v16; // x8
  SkillDetailParamFormatResolver_c *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v20; // x8
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__15_0; // x22
  System_String_o *v23; // x21
  Il2CppObject *v24; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_string__o *v32; // x0
  System_String_o *v33; // x20
  System_String_o *v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  SkillDetailParamFormatResolver_c *v42; // x8
  System_String_o *v43; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v44; // x0
  int v46; // [xsp+4h] [xbp-4Ch] BYREF
  int v47; // [xsp+8h] [xbp-48h] BYREF
  uint16_t v48; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5971DD0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_2213A60(&System_Func_char__string__TypeInfo);
    sub_2213A60(&SkillDetailParamFormatResolver_TypeInfo);
    sub_2213A60(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__);
    sub_2213A60(&SkillDetailParamFormatResolver___c_TypeInfo);
    sub_2213A60(&StringLiteral_26882/*"指定可能な少数点以下の桁数は({0}～{1})です"*/);
    sub_2213A60(&StringLiteral_26896/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_5971DD0 = 1;
  }
  Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SkillDetailParamFormatResolver_TypeInfo;
  *fractionalDigit = 0;
  if ( !HIDWORD(Chars[2].fields._values) )
  {
    j_il2cpp_runtime_class_init_0(Chars, fractionalDigit);
    Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SkillDetailParamFormatResolver_TypeInfo;
  }
  if ( !formatKey )
    goto LABEL_27;
  monitor = (System_Collections_Generic_Dictionary_TKey__TValue__o *)Chars[2].fields._entries->obj.monitor;
  Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_String__get_Chars(formatKey, 0, 0);
  if ( !monitor )
    goto LABEL_27;
  if ( !System_Collections_Generic_Dictionary_char__object___TryGetValue(
          monitor,
          (uint16_t)Chars,
          (Il2CppObject **)numericFormatData,
          (const MethodInfo_3F69C74 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v17 = SkillDetailParamFormatResolver_TypeInfo;
    if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, fractionalDigit);
      v17 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v17->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__object___get_Keys(
               Chars,
               (const MethodInfo_3F67DB0 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v20 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( !*(&SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo, v18);
        v20 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      static_fields = v20->static_fields;
      _9__15_0 = (System_Func_T__TResult__o *)static_fields->__9__15_0;
      v23 = (System_String_o *)StringLiteral_869/*","*/;
      if ( !_9__15_0 )
      {
        if ( !*(&v20->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v20, v18);
          static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__15_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_char__string__TypeInfo);
        System_Func_char__object____ctor(
          _9__15_0,
          v24,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          0);
        v25 = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        v25->__9__15_0 = (struct System_Func_char__string__o *)_9__15_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v25->__9__15_0,
          (int32_t)_9__15_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      v32 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_388D1A8 *)Method_System_Linq_Enumerable_Select_char__string___);
      v33 = System_String__Join_75699092(v23, v32, 0);
      v48 = System_String__get_Chars(formatKey, 0, 0);
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984388, &v48);
      v14 = (Il2CppObject *)v33;
      v16 = &StringLiteral_26896/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      goto LABEL_22;
    }
LABEL_27:
    sub_2213CDC(Chars, fractionalDigit);
  }
  if ( formatKey->fields._stringLength < 2 )
    return 1;
  v9 = formatKey;
  v10 = 1;
  v11 = System_String__get_Chars(v9, 1, 0);
  v12 = v11 - 48;
  *fractionalDigit = v12;
  if ( v11 < 0x31u || v12 >= 4 )
  {
    v47 = 1;
    v13 = j_il2cpp_value_box_0(qword_5984348, &v47);
    v46 = 3;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v46);
    v15 = (Il2CppObject *)v13;
    v16 = &StringLiteral_26882/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
LABEL_22:
    v34 = System_String__Format_75697880((System_String_o *)*v16, v15, v14, 0);
    v42 = SkillDetailParamFormatResolver_TypeInfo;
    v43 = v34;
    if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v35);
      v42 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v44 = v42->static_fields;
    v44->evaluationErrorMessage = v43;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v44->evaluationErrorMessage,
      (int32_t)v43,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    return 0;
  }
  return v10;
}


void SkillDetailParamFormatResolver_DataValsHierarchyCache___ctor(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SkillLvEntity_k__BackingField = skillLvEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)skillLvEntity, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
DataVals_o *SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        int32_t endFuncIndex,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Object_array *v30; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int v40; // [xsp+Ch] [xbp-44h] BYREF
  int v41; // [xsp+18h] [xbp-38h] BYREF
  int v42; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_5971DD6 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_DataVals___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_DataVals___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
    sub_2213A60(&StringLiteral_26597/*"{0}_{1})に該当する効果が存在しません"*/);
    sub_2213A60(&StringLiteral_26619/*"{0}番目の効果が存在しません"*/);
    byte_5971DD6 = 1;
  }
  *errorMessage = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)errorMessage,
    0,
    *(System_String_o **)&endFuncIndex,
    (System_String_o *)errorMessage,
    (int32_t)method,
    v5,
    v6,
    v7);
  RootSkillValsArray = (System_Object_array *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                this,
                                                v12);
  if ( BasicHelper__IsValidIndex_object__58806224(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_DataVals___) )
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
              (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
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
                                        (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__58806224(
                Item,
                endFuncIndex,
                (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v41 = funcIndex + 1;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v41);
          v40 = endFuncIndex + 1;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v40);
          v23 = System_String__Format_75697880((System_String_o *)StringLiteral_26597/*"{0}_{1})に該当する効果が存在しません"*/, v21, v22, 0);
          *errorMessage = v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)errorMessage, (int32_t)v23, v24, v25, v26, v27, v28, v29);
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
                                       (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_object_(
                               v30,
                               endFuncIndex,
                               0,
                               (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_2213CDC(EndSkillValsDict, v16);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v14);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields._entries) <= funcIndex )
      sub_2213CE4(EndSkillValsDict);
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields._count + funcIndex);
  }
  else
  {
    v42 = funcIndex + 1;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v42);
    v33 = System_String__Format((System_String_o *)StringLiteral_26619/*"{0}番目の効果が存在しません"*/, v32, 0);
    *errorMessage = v33;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)errorMessage, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5971DD7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
    byte_5971DD7 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&funcIndex);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__object__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                 this,
                                                                                 v6);
  if ( !RootSkillValsArray )
    goto LABEL_10;
  if ( LODWORD(RootSkillValsArray->fields._entries) <= funcIndex )
    sub_2213CE4(RootSkillValsArray);
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
    sub_2213CDC(RootSkillValsArray, v8);
  }
  System_Collections_Generic_Dictionary_int__object___set_Item(
    RootSkillValsArray,
    funcIndex,
    &EndSkillValsArrayFromRootValsForDisplay->obj,
    (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5971DD5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    byte_5971DD5 = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = (MissionNaviTransitionBoardItem_o *)&this->fields.endSkillValsDict;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v4,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    p_endSkillValsDict->klass = (MissionNaviTransitionBoardItem_c *)v4;
    sub_2213A04(p_endSkillValsDict, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v4;
}


DataVals_array *SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_rootSkillValsArray; // x19
  DataVals_array *rootSkillValsArray; // x20
  SkillLvEntity_o *SkillLvEntity_k__BackingField; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_rootSkillValsArray = (MissionNaviTransitionBoardItem_o *)&this->fields.rootSkillValsArray;
  rootSkillValsArray = this->fields.rootSkillValsArray;
  if ( !rootSkillValsArray )
  {
    SkillLvEntity_k__BackingField = this->fields._SkillLvEntity_k__BackingField;
    if ( !SkillLvEntity_k__BackingField )
      sub_2213CDC(0, method);
    rootSkillValsArray = SkillLvEntity__GetSetTypeDataValArray(SkillLvEntity_k__BackingField, 0);
    p_rootSkillValsArray->klass = (MissionNaviTransitionBoardItem_c *)rootSkillValsArray;
    sub_2213A04(p_rootSkillValsArray, (int32_t)rootSkillValsArray, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v12; // x20
  System_String_o *PercentStr; // x1
  int32_t v15; // [xsp+8h] [xbp-38h] BYREF
  int v16; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o format; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5971DD4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20652/*"f{0}"*/);
    byte_5971DD4 = 1;
  }
  format.klass = 0;
  shiftDigit = this->fields.shiftDigit;
  v16 = 0;
  if ( fractionalDigit < 1 )
  {
    v16 = value / shiftDigit;
    v11 = System_Int32__ToString((int32_t)&v16, 0);
  }
  else
  {
    v15 = fractionalDigit;
    *(double *)&format.klass = (double)value / (double)shiftDigit;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v15);
    v9 = System_String__Format((System_String_o *)StringLiteral_20652/*"f{0}"*/, v8, 0);
    v11 = System_Double__ToString_77048788(v10, &format, (const MethodInfo *)v9);
  }
  v12 = v11;
  if ( this->fields.suffixType == 1 )
    PercentStr = SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr((const MethodInfo *)v11);
  else
    PercentStr = **(System_String_o ***)(qword_5984390 + 184);
  return System_String__Concat_75651716(v12, PercentStr, 0);
}


System_String_o *SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  if ( this->fields.suffixType == 1 )
    return SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr((const MethodInfo *)this);
  else
    return **(System_String_o ***)(qword_5984390 + 184);
}


System_String_o *SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr(const MethodInfo *method)
{
  __int64 v1; // x1
  struct System_String_o *percentStr; // x19
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  if ( (byte_5971DD3 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_2213A60(&StringLiteral_6872/*"FUNC_VALUE_PERCENT"*/);
    byte_5971DD3 = 1;
  }
  percentStr = SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
    percentStr = LocalizationManager__Get((System_String_o *)StringLiteral_6872/*"FUNC_VALUE_PERCENT"*/, 0);
    SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr = percentStr;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields,
      (int32_t)percentStr,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
  return percentStr;
}


void SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971DD8 & 1) == 0 )
  {
    sub_2213A60(&SkillDetailParamFormatResolver___c_TypeInfo);
    byte_5971DD8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SkillDetailParamFormatResolver___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillDetailParamFormatResolver___c_TypeInfo->static_fields->__9 = (struct SkillDetailParamFormatResolver___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SkillDetailParamFormatResolver___c_TypeInfo->static_fields,
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


// local variable allocation has failed, the output may be wrong!
System_String_o *SkillDetailParamFormatResolver___c___TryGetNumericFormat_b__15_0(
        SkillDetailParamFormatResolver___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  if ( !*(_DWORD *)(qword_5984388 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984388, x);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x8
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  struct SkillLvEntity_o *skillLvEntity; // x22
  __int64 v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  SkillDetailParamFormatResolver_c *v26; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
  __int64 v29; // x1
  System_Text_RegularExpressions_GroupCollection_o *v30; // x21
  System_String_o *Value; // x0
  const MethodInfo *v32; // x3
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_String_o *v35; // x22
  const MethodInfo *v36; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *v37; // x20
  int32_t v38; // w22
  int32_t v39; // w23
  DataVals_o *v40; // x0
  DataVals_o *v41; // x20
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  System_String_o *v44; // x21
  const MethodInfo *v45; // x3
  int32_t funcIndex[2]; // [xsp+0h] [xbp-50h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-48h] BYREF
  int32_t fractionalDigit[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5971DD9 & 1) == 0 )
  {
    sub_2213A60(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    sub_2213A60(&SkillDetailParamFormatResolver_TypeInfo);
    byte_5971DD9 = 1;
  }
  *(_QWORD *)fractionalDigit = 0;
  numericFormatData = 0;
  p_fields = &this->fields;
  dataValsHierarchyCache = this->fields.dataValsHierarchyCache;
  *(_QWORD *)funcIndex = 0;
  if ( !dataValsHierarchyCache )
  {
    skillLvEntity = this->fields.skillLvEntity;
    v13 = sub_2213CCC(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    *(_QWORD *)(v13 + 16) = skillLvEntity;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)skillLvEntity, v14, v15, v16, v17, v18, v19);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, v13, v20, v21, v22, v23, v24, v25);
  }
  v26 = SkillDetailParamFormatResolver_TypeInfo;
  if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, matchObj);
    v26 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v26->static_fields;
  static_fields->evaluationErrorMessage = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->evaluationErrorMessage,
    0,
    (System_String_o *)method,
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
  v30 = Item;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                               Item,
                                                               1,
                                                               0);
  if ( !Item )
    goto LABEL_27;
  Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&funcIndex[1], funcIndex, Value, v32) )
  {
    Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                 v30,
                                                                 3,
                                                                 0);
    if ( !Item )
      goto LABEL_27;
    v35 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0);
    if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v33);
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, &fractionalDigit[1], v35, v34) )
    {
      Item = (System_Text_RegularExpressions_GroupCollection_o *)SkillDetailParamFormatResolver_TypeInfo;
      v37 = p_fields->dataValsHierarchyCache;
      v39 = funcIndex[0];
      v38 = funcIndex[1];
      if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v29);
      if ( !v37 )
        goto LABEL_27;
      v40 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              v37,
              v38,
              v39,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v36);
      if ( v40 )
      {
        v41 = v40;
        Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     v30,
                                                                     2,
                                                                     0);
        if ( !Item )
          goto LABEL_27;
        v44 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0);
        if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v42);
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue(fractionalDigit, v44, v41, v43) )
        {
          Item = (System_Text_RegularExpressions_GroupCollection_o *)numericFormatData;
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     fractionalDigit[0],
                     fractionalDigit[1],
                     v45);
LABEL_27:
          sub_2213CDC(Item, v29);
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
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  System_String_o *Value; // x22
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x21
  const MethodInfo *v12; // x3
  struct System_Int32_array *values; // x8
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  int32_t fractionalDigit; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_5971DDA & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IsValidIndex_int___);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_2213A60(&SkillDetailParamFormatResolver_TypeInfo);
    byte_5971DDA = 1;
  }
  fractionalDigit = 0;
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
  if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v6);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, Value, v7)
    && BasicHelper__IsValidIndex_int_(
         v4->fields.values,
         endFuncIndex[1],
         (const MethodInfo_3814F6C *)Method_BasicHelper_IsValidIndex_int___) )
  {
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                       (System_Text_RegularExpressions_GroupCollection_o *)v5,
                                                                       3,
                                                                       0);
    if ( !this )
      goto LABEL_20;
    v11 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0);
    if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v9);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)SkillDetailParamFormatResolver__TryGetNumericFormat(
                                                                       &numericFormatData,
                                                                       &fractionalDigit,
                                                                       v11,
                                                                       v10);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      values = v4->fields.values;
      if ( values )
      {
        if ( endFuncIndex[1] >= LODWORD(values->max_length) )
          sub_2213CE4(this);
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[endFuncIndex[1]],
                   fractionalDigit,
                   v12);
      }
LABEL_20:
      sub_2213CDC(this, matchObj);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0);
}