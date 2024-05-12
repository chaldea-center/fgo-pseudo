void __fastcall SkillDetailParamFormatResolver___cctor(const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *v9; // x19
  SkillDetailParamFormatResolver_NumericFormatData_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  SkillDetailParamFormatResolver_NumericFormatData_o *v13; // x20
  SkillDetailParamFormatResolver_NumericFormatData_o *v14; // x20
  struct SkillDetailParamFormatResolver_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438C05D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
    sub_B775C4(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_B775C4(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B775C4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B775C4(&StringLiteral_16161/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/);
    byte_438C05D = 1;
  }
  v1 = (System_Text_RegularExpressions_Regex_o *)sub_B77694(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_49342424(v1, (System_String_o *)StringLiteral_16161/*"\\{\\{([0-9_]{1,5}):(\\w+):(\\w{1,2})\\}\\}"*/, 8, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *)sub_B77694(System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TypeInfo);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData____ctor(
    v9,
    (const MethodInfo_2F55ABC *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___ctor__);
  v10 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B77694(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v10, 1, 0, 0LL);
  if ( !v9 )
    sub_B7769C(v11, v12);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v9,
    0x64u,
    v10,
    (const MethodInfo_2F56670 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v13 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B77694(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v13, 10, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v9,
    0x6Du,
    v13,
    (const MethodInfo_2F56670 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v14 = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B77694(SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
  SkillDetailParamFormatResolver_NumericFormatData___ctor(v14, 100, 0, 0LL);
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___Add(
    v9,
    0x79u,
    v14,
    (const MethodInfo_2F56670 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__Add__);
  v15 = SkillDetailParamFormatResolver_TypeInfo->static_fields;
  v15->NumericFormatDict = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&v15->NumericFormatDict,
    (System_Int32_array **)v9,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


System_String_o *__fastcall SkillDetailParamFormatResolver__Apply(
        System_String_o *detailText,
        SkillLvEntity_o *skillLvEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  SkillDetailParamFormatResolver_c *v20; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v22; // x22

  if ( (byte_438C057 & 1) == 0 )
  {
    sub_B775C4(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_B775C4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B775C4(&Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__);
    sub_B775C4(&SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
    sub_B775C4(&StringLiteral_24167/*"{{"*/);
    byte_438C057 = 1;
  }
  v5 = sub_B77694(SkillDetailParamFormatResolver___c__DisplayClass11_0_TypeInfo);
  SkillDetailParamFormatResolver___c__DisplayClass11_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass11_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = skillLvEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)skillLvEntity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_24167/*"{{"*/, 0LL) )
  {
    *(_QWORD *)(v5 + 16) = 0LL;
    sub_B77560((BattleServantConfConponent_o *)(v5 + 16), 0LL, v14, v15, v16, v17, v18, v19);
    v20 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v20 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v20->static_fields->ParamFormatRegex;
    v22 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B77694(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v22,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass11_0__Apply_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_49350416(ParamFormatRegex, detailText, v22, 0LL);
LABEL_12:
    sub_B7769C(v6, v7);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  SkillDetailParamFormatResolver_c *v14; // x0
  System_Text_RegularExpressions_Regex_o *ParamFormatRegex; // x21
  System_Text_RegularExpressions_MatchEvaluator_o *v16; // x22

  if ( (byte_438C058 & 1) == 0 )
  {
    sub_B775C4(&System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    sub_B775C4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B775C4(&Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__);
    sub_B775C4(&SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
    sub_B775C4(&StringLiteral_24167/*"{{"*/);
    byte_438C058 = 1;
  }
  v5 = sub_B77694(SkillDetailParamFormatResolver___c__DisplayClass12_0_TypeInfo);
  SkillDetailParamFormatResolver___c__DisplayClass12_0___ctor(
    (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = values;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)values, v8, v9, v10, v11, v12, v13);
  if ( !detailText )
    goto LABEL_12;
  if ( System_String__Contains(detailText, (System_String_o *)StringLiteral_24167/*"{{"*/, 0LL) )
  {
    v14 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v14 = SkillDetailParamFormatResolver_TypeInfo;
    }
    ParamFormatRegex = v14->static_fields->ParamFormatRegex;
    v16 = (System_Text_RegularExpressions_MatchEvaluator_o *)sub_B77694(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    System_Text_RegularExpressions_MatchEvaluator___ctor(
      v16,
      (Il2CppObject *)v5,
      Method_SkillDetailParamFormatResolver___c__DisplayClass12_0__ApplyGivenValues_g__Evaluator_0__,
      0LL);
    if ( ParamFormatRegex )
      return System_Text_RegularExpressions_Regex__Replace_49350416(ParamFormatRegex, detailText, v16, 0LL);
LABEL_12:
    sub_B7769C(v6, v7);
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
  Il2CppObject *v7; // x20
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  int32_t skillDetailId; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438C05C & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_13130/*"SkillId({0}),Lv({1}),DetailId({2})"*/);
    byte_438C05C = 1;
  }
  if ( matchObj )
  {
    Value = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
    if ( ent )
    {
      if ( Value )
      {
        skillId = ent->fields.skillId;
        v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillId, v6);
        lv = ent->fields.lv;
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v8);
        skillDetailId = ent->fields.skillDetailId;
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &skillDetailId, v10);
        System_String__Format_44903000((System_String_o *)StringLiteral_13130/*"SkillId({0}),Lv({1}),DetailId({2})"*/, v7, v9, v11, 0LL);
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
  if ( (byte_438C059 & 1) == 0 )
  {
    funcIndex = (int32_t *)sub_B775C4(&char___TypeInfo);
    byte_438C059 = 1;
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
  funcIndex = (int32_t *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !funcIndex )
    goto LABEL_17;
  if ( !funcIndex[6] )
    goto LABEL_18;
  *((_WORD *)funcIndex + 16) = 95;
  funcIndex = (int32_t *)System_String__Split(rawString, (System_Char_array *)funcIndex, 0LL);
  if ( !funcIndex )
LABEL_17:
    sub_B7769C(funcIndex, endFuncIndex);
  v9 = funcIndex;
  if ( !funcIndex[6] )
  {
LABEL_18:
    v11 = sub_B776C8(funcIndex);
    sub_B77668(v11, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x19
  SkillDetailParamFormatResolver_c *v15; // x8
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0

  if ( (byte_438C05A & 1) == 0 )
  {
    sub_B775C4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B775C4(&StringLiteral_16175/*"]が取れませんでした"*/);
    sub_B775C4(&StringLiteral_22933/*"svalsから["*/);
    byte_438C05A = 1;
  }
  *value = 0;
  if ( vals )
  {
    if ( DataVals__TryGetParamByValsKey(vals, valsKeyStr, value, 0LL) )
      return 1;
    v14 = (System_Int32_array **)System_String__Concat_44904220(
                                   (System_String_o *)StringLiteral_22933/*"svalsから["*/,
                                   valsKeyStr,
                                   (System_String_o *)StringLiteral_16175/*"]が取れませんでした"*/,
                                   0LL);
    v15 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v15 = SkillDetailParamFormatResolver_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->evaluationErrorMessage = (struct System_String_o *)v14;
    sub_B77560((BattleServantConfConponent_o *)&static_fields->evaluationErrorMessage, v14, v8, v9, v10, v11, v12, v13);
  }
  return 0;
}


bool __fastcall SkillDetailParamFormatResolver__TryGetNumericFormat(
        SkillDetailParamFormatResolver_NumericFormatData_o **numericFormatData,
        int32_t *fractionalDigit,
        System_String_o *formatKey,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *Chars; // x0
  System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__o *monitor; // x22
  bool v9; // w21
  uint16_t v10; // w0
  __int64 v11; // x2
  __int64 v12; // x19
  __int64 v13; // x2
  __int64 v14; // x0
  __int64 *v15; // x8
  Il2CppObject *v16; // x2
  Il2CppObject *v17; // x1
  SkillDetailParamFormatResolver_c *v18; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x20
  SkillDetailParamFormatResolver___c_c *v20; // x8
  struct SkillDetailParamFormatResolver___c_StaticFields *static_fields; // x9
  System_Func_char__string__o *_9__15_0; // x22
  System_String_o *v23; // x21
  Il2CppObject *v24; // x23
  struct SkillDetailParamFormatResolver___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_string__o *v32; // x0
  System_String_o *v33; // x20
  __int64 v34; // x2
  __int64 v35; // x0
  System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  SkillDetailParamFormatResolver_c *v43; // x8
  System_Int32_array **v44; // x19
  struct SkillDetailParamFormatResolver_StaticFields *v45; // x0
  int v47; // [xsp+Ch] [xbp-44h] BYREF
  int v48; // [xsp+18h] [xbp-38h] BYREF
  uint16_t v49; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_438C05B & 1) == 0 )
  {
    sub_B775C4(&char_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_B775C4(&Method_System_Func_char__string___ctor__);
    sub_B775C4(&System_Func_char__string__TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B775C4(&Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__);
    sub_B775C4(&SkillDetailParamFormatResolver___c_TypeInfo);
    sub_B775C4(&StringLiteral_24370/*"指定可能な少数点以下の桁数は({0}～{1})です"*/);
    sub_B775C4(&StringLiteral_24383/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/);
    sub_B775C4(&StringLiteral_714/*","*/);
    byte_438C05B = 1;
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
          (const MethodInfo_2F58394 *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__TryGetValue__) )
  {
    v18 = SkillDetailParamFormatResolver_TypeInfo;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v18 = SkillDetailParamFormatResolver_TypeInfo;
    }
    Chars = v18->static_fields->NumericFormatDict;
    if ( Chars )
    {
      Keys = System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData___get_Keys(
               Chars,
               (const MethodInfo_2F5627C *)Method_System_Collections_Generic_Dictionary_char__SkillDetailParamFormatResolver_NumericFormatData__get_Keys__);
      v20 = SkillDetailParamFormatResolver___c_TypeInfo;
      if ( (BYTE3(SkillDetailParamFormatResolver___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver___c_TypeInfo);
        v20 = SkillDetailParamFormatResolver___c_TypeInfo;
      }
      static_fields = v20->static_fields;
      _9__15_0 = static_fields->__9__15_0;
      v23 = (System_String_o *)StringLiteral_714/*","*/;
      if ( !_9__15_0 )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          static_fields = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__15_0 = (System_Func_char__string__o *)sub_B77694(System_Func_char__string__TypeInfo);
        System_Func_char__string____ctor(
          _9__15_0,
          v24,
          Method_SkillDetailParamFormatResolver___c__TryGetNumericFormat_b__15_0__,
          (const MethodInfo_29E1DF0 *)Method_System_Func_char__string___ctor__);
        v25 = SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
        v25->__9__15_0 = _9__15_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v25->__9__15_0,
          (System_Int32_array **)_9__15_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      v32 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_char__string_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                  (System_Func_TSource__TResult__o *)_9__15_0,
                                                                  (const MethodInfo_1D36D44 *)Method_System_Linq_Enumerable_Select_char__string___);
      v33 = System_String__Join_44957380(v23, v32, 0LL);
      v49 = System_String__get_Chars(formatKey, 0, 0LL);
      v35 = j_il2cpp_value_box_0(char_TypeInfo, &v49, v34);
      v15 = &StringLiteral_24383/*"未定義フォーマット[{0}]\n指定可能なフォーマットは[{1}]です"*/;
      v17 = (Il2CppObject *)v35;
      v16 = (Il2CppObject *)v33;
      goto LABEL_25;
    }
LABEL_31:
    sub_B7769C(Chars, fractionalDigit);
  }
  if ( formatKey->fields.m_stringLength < 2 )
    return 1;
  v9 = 1;
  v10 = System_String__get_Chars(formatKey, 1, 0LL);
  *fractionalDigit = v10 - 48;
  if ( (unsigned __int16)(v10 - 49) >= 3u )
  {
    v48 = 1;
    v12 = j_il2cpp_value_box_0(int_TypeInfo, &v48, v11);
    v47 = 3;
    v14 = j_il2cpp_value_box_0(int_TypeInfo, &v47, v13);
    v15 = &StringLiteral_24370/*"指定可能な少数点以下の桁数は({0}～{1})です"*/;
    v16 = (Il2CppObject *)v14;
    v17 = (Il2CppObject *)v12;
LABEL_25:
    v36 = System_String__Format_44897472((System_String_o *)*v15, v17, v16, 0LL);
    v43 = SkillDetailParamFormatResolver_TypeInfo;
    v44 = (System_Int32_array **)v36;
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      v43 = SkillDetailParamFormatResolver_TypeInfo;
    }
    v45 = v43->static_fields;
    v45->evaluationErrorMessage = (struct System_String_o *)v44;
    sub_B77560((BattleServantConfConponent_o *)&v45->evaluationErrorMessage, v44, v37, v38, v39, v40, v41, v42);
    return 0;
  }
  return v9;
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
  sub_B77560(
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
  const MethodInfo *v12; // x1
  System_Object_array *RootSkillValsArray; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *EndSkillValsDict; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v22; // x2
  Il2CppObject *v23; // x23
  __int64 v24; // x2
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v33; // x0
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0
  int v44; // [xsp+4h] [xbp-3Ch] BYREF
  int v45; // [xsp+8h] [xbp-38h] BYREF
  int v46; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4388E92 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_DataVals___);
    sub_B775C4(&Method_BasicHelper_IsValidIndex_DataVals___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_24132/*"{0}_{1})に該当する効果が存在しません"*/);
    sub_B775C4(&StringLiteral_24155/*"{0}番目の効果が存在しません"*/);
    byte_4388E92 = 1;
  }
  *errorMessage = 0LL;
  sub_B77560(
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
                                                v12);
  if ( BasicHelper__IsValidIndex_object__29787652(
         RootSkillValsArray,
         funcIndex,
         (const MethodInfo_1C68604 *)Method_BasicHelper_IsValidIndex_DataVals___) )
  {
    if ( (endFuncIndex & 0x80000000) == 0 )
    {
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v14);
      if ( !EndSkillValsDict )
        goto LABEL_17;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)EndSkillValsDict,
              funcIndex,
              (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__DataVals____ContainsKey__) )
      {
        SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(this, funcIndex, v19);
        EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v20);
        if ( !EndSkillValsDict )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 EndSkillValsDict,
                 funcIndex,
                 (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        if ( !BasicHelper__IsValidIndex_object__29787652(
                (System_Object_array *)Item,
                endFuncIndex,
                (const MethodInfo_1C68604 *)Method_BasicHelper_IsValidIndex_DataVals___) )
        {
          v45 = funcIndex + 1;
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v22);
          v44 = endFuncIndex + 1;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v24);
          v26 = System_String__Format_44897472((System_String_o *)StringLiteral_24132/*"{0}_{1})に該当する効果が存在しません"*/, v23, v25, 0LL);
          *errorMessage = v26;
          sub_B77560(
            (BattleServantConfConponent_o *)errorMessage,
            (System_Int32_array **)v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
        }
      }
      EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v18);
      if ( EndSkillValsDict )
      {
        v33 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                EndSkillValsDict,
                funcIndex,
                (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__DataVals____get_Item__);
        return (DataVals_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v33,
                               endFuncIndex,
                               0LL,
                               (const MethodInfo_1C684A4 *)Method_BasicHelper_IndexValue_DataVals___);
      }
LABEL_17:
      sub_B7769C(EndSkillValsDict, v17);
    }
    EndSkillValsDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(this, v14);
    if ( !EndSkillValsDict )
      goto LABEL_17;
    if ( LODWORD(EndSkillValsDict->fields.entries) <= funcIndex )
    {
      v43 = sub_B776C8(EndSkillValsDict);
      sub_B77668(v43, 0LL);
    }
    return (DataVals_o *)*((_QWORD *)&EndSkillValsDict->fields.count + funcIndex);
  }
  else
  {
    v46 = funcIndex + 1;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v15);
    v36 = System_String__Format((System_String_o *)StringLiteral_24155/*"{0}番目の効果が存在しません"*/, v35, 0LL);
    *errorMessage = v36;
    sub_B77560((BattleServantConfConponent_o *)errorMessage, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
    return 0LL;
  }
}


void __fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__RegisterEndSkillVals(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        int32_t funcIndex,
        const MethodInfo *method)
{
  FunctionMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *RootSkillValsArray; // x0
  __int64 v8; // x1
  WarBoardAIRoute_RouteData_o *EndSkillValsArrayFromRootValsForDisplay; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x0

  if ( (byte_4388E93 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
    byte_4388E93 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (FunctionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
  RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_RootSkillValsArray(
                                                                                                    this,
                                                                                                    v6);
  if ( !RootSkillValsArray )
    goto LABEL_11;
  if ( LODWORD(RootSkillValsArray->fields.entries) <= funcIndex )
  {
    v11 = sub_B776C8(RootSkillValsArray);
    sub_B77668(v11, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster
    || (EndSkillValsArrayFromRootValsForDisplay = (WarBoardAIRoute_RouteData_o *)FunctionMaster__GetEndSkillValsArrayFromRootValsForDisplay(
                                                                                   Master_WarQuestSelectionMaster,
                                                                                   *((DataVals_o **)&RootSkillValsArray->fields.count
                                                                                   + funcIndex),
                                                                                   0LL),
        (RootSkillValsArray = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(this, v10)) == 0LL) )
  {
LABEL_11:
    sub_B7769C(RootSkillValsArray, v8);
  }
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    RootSkillValsArray,
    funcIndex,
    EndSkillValsArrayFromRootValsForDisplay,
    (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__DataVals____set_Item__);
}


System_Collections_Generic_Dictionary_int__DataVals____o *__fastcall SkillDetailParamFormatResolver_DataValsHierarchyCache__get_EndSkillValsDict(
        SkillDetailParamFormatResolver_DataValsHierarchyCache_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_endSkillValsDict; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  struct System_Collections_Generic_Dictionary_int__DataVals____o *endSkillValsDict; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4388E91 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    byte_4388E91 = 1;
  }
  endSkillValsDict = this->fields.endSkillValsDict;
  p_endSkillValsDict = (BattleServantConfConponent_o *)&this->fields.endSkillValsDict;
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)endSkillValsDict;
  if ( !endSkillValsDict )
  {
    v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__DataVals____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v4,
      (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__DataVals_____ctor__);
    p_endSkillValsDict->klass = (BattleServantConfConponent_c *)v4;
    sub_B77560(p_endSkillValsDict, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
  }
  return (System_Collections_Generic_Dictionary_int__DataVals____o *)v4;
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
      sub_B7769C(0LL, method);
    rootSkillValsArray = (System_Int32_array **)SkillLvEntity__GetSetTypeDataValArray(
                                                  SkillLvEntity_k__BackingField,
                                                  0LL);
    p_rootSkillValsArray->klass = (BattleServantConfConponent_c *)rootSkillValsArray;
    sub_B77560(p_rootSkillValsArray, rootSkillValsArray, v5, v6, v7, v8, v9, v10);
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
  int32_t shiftDigit; // w8
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  double v10; // d0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x1
  System_String_o *v13; // x20
  System_String_o *SuffixStr; // x0
  int32_t v16; // [xsp+0h] [xbp-30h] BYREF
  int v17; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_o format; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4388E96 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_19320/*"f{0}"*/);
    byte_4388E96 = 1;
  }
  format.klass = 0LL;
  v17 = 0;
  shiftDigit = this->fields.shiftDigit;
  if ( fractionalDigit < 1 )
  {
    v17 = value / shiftDigit;
    v11 = System_Int32__ToString((int32_t)&v17, 0LL);
  }
  else
  {
    *(double *)&format.klass = (double)value / (double)shiftDigit;
    v16 = fractionalDigit;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, *(_QWORD *)&fractionalDigit);
    v9 = System_String__Format((System_String_o *)StringLiteral_19320/*"f{0}"*/, v8, 0LL);
    v11 = System_Double__ToString_45061792(v10, &format, (const MethodInfo *)v9);
  }
  v13 = v11;
  SuffixStr = SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(this, v12);
  return System_String__Concat_44901936(v13, SuffixStr, 0LL);
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__GetSuffixStr(
        SkillDetailParamFormatResolver_NumericFormatData_o *this,
        const MethodInfo *method)
{
  SkillDetailParamFormatResolver_NumericFormatData_o *v2; // x19

  v2 = this;
  if ( (byte_4388E95 & 1) == 0 )
  {
    this = (SkillDetailParamFormatResolver_NumericFormatData_o *)sub_B775C4(&string_TypeInfo);
    byte_4388E95 = 1;
  }
  if ( v2->fields.suffixType == 1 )
    return SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr((const MethodInfo *)this);
  else
    return string_TypeInfo->static_fields->Empty;
}


System_String_o *__fastcall SkillDetailParamFormatResolver_NumericFormatData__get_PercentStr(const MethodInfo *method)
{
  System_Int32_array **percentStr; // x19
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E94 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&SkillDetailParamFormatResolver_NumericFormatData_TypeInfo);
    sub_B775C4(&StringLiteral_6685/*"FUNC_VALUE_PERCENT"*/);
    byte_4388E94 = 1;
  }
  percentStr = (System_Int32_array **)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields->percentStr;
  if ( !percentStr )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    percentStr = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_6685/*"FUNC_VALUE_PERCENT"*/, 0LL);
    static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver_NumericFormatData_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)percentStr;
    sub_B77560(static_fields, percentStr, v3, v4, v5, v6, v7, v8);
  }
  return (System_String_o *)percentStr;
}


void __fastcall SkillDetailParamFormatResolver___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E8E & 1) == 0 )
  {
    sub_B775C4(&SkillDetailParamFormatResolver___c_TypeInfo);
    byte_4388E8E = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SkillDetailParamFormatResolver___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)SkillDetailParamFormatResolver___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  SkillDetailParamFormatResolver___c__DisplayClass11_0_Fields *p_fields; // x20
  System_Int32_array **skillLvEntity; // x22
  __int64 v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  SkillDetailParamFormatResolver_c *v25; // x0
  struct SkillDetailParamFormatResolver_StaticFields *static_fields; // x0
  System_Text_RegularExpressions_GroupCollection_o *Item; // x0
  __int64 v28; // x1
  System_Text_RegularExpressions_GroupCollection_o *v29; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  const MethodInfo *v32; // x4
  SkillDetailParamFormatResolver_DataValsHierarchyCache_o *dataValsHierarchyCache; // x23
  int32_t v34; // w20
  int32_t v35; // w22
  DataVals_o *v36; // x0
  DataVals_o *v37; // x20
  System_String_o *v38; // x21
  const MethodInfo *v39; // x3
  int32_t endFuncIndex[2]; // [xsp+8h] [xbp-48h] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+10h] [xbp-40h] BYREF
  __int64 value; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4388E8F & 1) == 0 )
  {
    sub_B775C4(&SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    sub_B775C4(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4388E8F = 1;
  }
  numericFormatData = 0LL;
  value = 0LL;
  *(_QWORD *)endFuncIndex = 0LL;
  p_fields = &this->fields;
  if ( !this->fields.dataValsHierarchyCache )
  {
    skillLvEntity = (System_Int32_array **)this->fields.skillLvEntity;
    v12 = sub_B77694(SkillDetailParamFormatResolver_DataValsHierarchyCache_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    *(_QWORD *)(v12 + 16) = skillLvEntity;
    sub_B77560((BattleServantConfConponent_o *)(v12 + 16), skillLvEntity, v13, v14, v15, v16, v17, v18);
    this->fields.dataValsHierarchyCache = (struct SkillDetailParamFormatResolver_DataValsHierarchyCache_o *)v12;
    sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v12, v19, v20, v21, v22, v23, v24);
  }
  v25 = SkillDetailParamFormatResolver_TypeInfo;
  if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    v25 = SkillDetailParamFormatResolver_TypeInfo;
  }
  static_fields = v25->static_fields;
  static_fields->evaluationErrorMessage = 0LL;
  sub_B77560(
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
  Item = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, Il2CppMethodPointer))matchObj->klass->vtable._5_get_Groups.method)(
                                                               matchObj,
                                                               matchObj->klass->vtable._6_GroupToStringImpl.methodPtr);
  numericFormatData = 0LL;
  value = 0LL;
  if ( !Item )
    goto LABEL_31;
  v29 = Item;
  Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                               Item,
                                                               1,
                                                               0LL);
  if ( !Item )
    goto LABEL_31;
  v30 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
  if ( SkillDetailParamFormatResolver__TryGetFuncIndex(&endFuncIndex[1], endFuncIndex, v30, 0LL) )
  {
    Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                 v29,
                                                                 3,
                                                                 0LL);
    if ( !Item )
      goto LABEL_31;
    v31 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    if ( SkillDetailParamFormatResolver__TryGetNumericFormat(&numericFormatData, (int32_t *)&value + 1, v31, 0LL) )
    {
      Item = (System_Text_RegularExpressions_GroupCollection_o *)SkillDetailParamFormatResolver_TypeInfo;
      dataValsHierarchyCache = p_fields->dataValsHierarchyCache;
      v35 = endFuncIndex[0];
      v34 = endFuncIndex[1];
      if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      }
      if ( !dataValsHierarchyCache )
        goto LABEL_31;
      v36 = SkillDetailParamFormatResolver_DataValsHierarchyCache__Get(
              dataValsHierarchyCache,
              v34,
              v35,
              &SkillDetailParamFormatResolver_TypeInfo->static_fields->evaluationErrorMessage,
              v32);
      if ( v36 )
      {
        v37 = v36;
        Item = (System_Text_RegularExpressions_GroupCollection_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                     v29,
                                                                     2,
                                                                     0LL);
        if ( !Item )
          goto LABEL_31;
        v38 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)Item, 0LL);
        if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
        }
        if ( SkillDetailParamFormatResolver__TryGetFuncParamValue((int32_t *)&value, v38, v37, 0LL) )
        {
          Item = (System_Text_RegularExpressions_GroupCollection_o *)numericFormatData;
          if ( numericFormatData )
            return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                     numericFormatData,
                     value,
                     SHIDWORD(value),
                     v39);
LABEL_31:
          sub_B7769C(Item, v28);
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
  System_Text_RegularExpressions_GroupCollection_o *v5; // x21
  System_String_o *Value; // x22
  System_String_o *v7; // x21
  const MethodInfo *v8; // x3
  struct System_Int32_array *values; // x8
  __int64 v11; // x0
  int32_t endFuncIndex; // [xsp+4h] [xbp-3Ch] BYREF
  SkillDetailParamFormatResolver_NumericFormatData_o *numericFormatData; // [xsp+8h] [xbp-38h] BYREF
  int32_t funcIndex[2]; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4388E90 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IsValidIndex_int___);
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)sub_B775C4(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4388E90 = 1;
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
  v5 = (System_Text_RegularExpressions_GroupCollection_o *)this;
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
         (const MethodInfo_1C6859C *)Method_BasicHelper_IsValidIndex_int___) )
  {
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)System_Text_RegularExpressions_GroupCollection__get_Item(
                                                                       v5,
                                                                       3,
                                                                       0LL);
    if ( !this )
      goto LABEL_22;
    v7 = System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)this, 0LL);
    if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
    }
    this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)SkillDetailParamFormatResolver__TryGetNumericFormat(
                                                                       &numericFormatData,
                                                                       &funcIndex[1],
                                                                       v7,
                                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      values = v4->fields.values;
      if ( values )
      {
        if ( funcIndex[0] >= values->max_length )
        {
          v11 = sub_B776C8(this);
          sub_B77668(v11, 0LL);
        }
        this = (SkillDetailParamFormatResolver___c__DisplayClass12_0_o *)numericFormatData;
        if ( numericFormatData )
          return SkillDetailParamFormatResolver_NumericFormatData__ConvertValueToStr(
                   numericFormatData,
                   values->m_Items[funcIndex[0] + 1],
                   funcIndex[1],
                   v8);
      }
LABEL_22:
      sub_B7769C(this, matchObj);
    }
  }
  return System_Text_RegularExpressions_Capture__get_Value((System_Text_RegularExpressions_Capture_o *)matchObj, 0LL);
}