void __fastcall RubyLabelHelper___ctor(
        RubyLabelHelper_o *this,
        UILabel_o *label,
        UnityEngine_GameObject_o *inputMainPrefab,
        UnityEngine_GameObject_o *inputRubyPrefab,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_int__o *v23; // x23
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_bool__o *v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_bool__o *v37; // x23
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct UnityEngine_GameObject_o **p_mainPrefab; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct UnityEngine_GameObject_o **p_rubyPrefab; // x19
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  UnityEngine_Object_o *v78; // x20

  if ( (byte_438DC2B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_bool__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DC2B = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  this->fields.mainTextList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mainTextList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rubyTextList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.textPositionYList = v23;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.textPositionYList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_bool__o *)sub_B77694(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v30,
    (const MethodInfo_3082660 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyFlagList = v30;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rubyFlagList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_bool__o *)sub_B77694(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v37,
    (const MethodInfo_3082660 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyLineList = v37;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rubyLineList,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v44;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mainList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v51;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rubyList,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.messageLabel = label;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)label, v58, v59, v60, v61, v62, v63);
  this->fields.mainPrefab = inputMainPrefab;
  p_mainPrefab = &this->fields.mainPrefab;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mainPrefab,
    (System_Int32_array **)inputMainPrefab,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields.rubyPrefab = inputRubyPrefab;
  p_rubyPrefab = &this->fields.rubyPrefab;
  sub_B77560(
    (BattleServantConfConponent_o *)p_rubyPrefab,
    (System_Int32_array **)inputRubyPrefab,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v78 = (UnityEngine_Object_o *)*p_mainPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
  UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)*p_rubyPrefab, 0LL, 0LL);
}


System_String_o *__fastcall RubyLabelHelper__GetFormalText(
        RubyLabelHelper_o *this,
        System_String_o *labelText,
        const MethodInfo *method)
{
  System_String_o *v5; // x22
  System_Collections_Generic_List_char__o *v6; // x21
  System_String_o *Chars; // x0
  __int64 v8; // x1
  int32_t v9; // w23
  char v10; // w19
  char v11; // w28
  char v12; // w26
  System_String_o *v13; // x24
  System_String_o *v14; // x1
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  struct UILabel_o *messageLabel; // x8
  RubyLabelHelper_o *v21; // [xsp+0h] [xbp-60h]
  __int16 v22[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438DC30 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_char__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_char___ctor__);
    sub_B775C4(&System_Collections_Generic_List_char__TypeInfo);
    sub_B775C4(&StringLiteral_15928/*"[#"*/);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438DC30 = 1;
  }
  v22[0] = 0;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v6 = (System_Collections_Generic_List_char__o *)sub_B77694(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v6,
    (const MethodInfo_30A5324 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_35;
  v21 = this;
  if ( labelText->fields.m_stringLength >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 1;
    v13 = v5;
    while ( 1 )
    {
      v22[0] = System_String__get_Chars(labelText, v9, 0LL);
      v16 = System_Char__ToString((uint16_t)v22, 0LL);
      v5 = System_String__Concat_44901936(v5, v16, 0LL);
      if ( (v11 & 1) != 0 )
      {
        v22[0] = System_String__get_Chars(labelText, v9, 0LL);
        v17 = System_Char__ToString((uint16_t)v22, 0LL);
        v13 = System_String__Concat_44901936(v13, v17, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0LL);
      if ( !v6 )
        goto LABEL_35;
      System_Collections_Generic_List_char___Add(
        v6,
        (uint16_t)Chars,
        (const MethodInfo_30A6080 *)Method_System_Collections_Generic_List_char__Add__);
      if ( System_String__get_Chars(labelText, v9, 0LL) == 91 && System_String__get_Chars(labelText, v9 + 1, 0LL) == 35 )
        break;
      if ( (v10 & 1) == 0 )
      {
        v10 = 0;
        goto LABEL_27;
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0LL);
      v22[0] = (__int16)Chars;
      if ( (unsigned __int16)Chars == 93 )
      {
        if ( (v11 & 1) != 0 )
        {
          Chars = System_String__Concat_44901936((System_String_o *)StringLiteral_1252/*":"*/, v13, 0LL);
          if ( !v5 )
            goto LABEL_35;
          v14 = Chars;
        }
        else
        {
          if ( !v5 )
            goto LABEL_35;
          v14 = (System_String_o *)StringLiteral_16162/*"]"*/;
        }
        v15 = System_String__Replace_44909172(v5, v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v13 = (System_String_o *)StringLiteral_1/*""*/;
        v5 = v15;
        v10 = 0;
        v11 = 0;
        goto LABEL_27;
      }
      if ( (unsigned __int16)Chars != 58 )
      {
        if ( (unsigned __int16)Chars == 35 )
        {
          if ( !v5 )
            goto LABEL_35;
          v5 = System_String__Replace_44909172(
                 v5,
                 (System_String_o *)StringLiteral_15928/*"[#"*/,
                 (System_String_o *)StringLiteral_1/*""*/,
                 0LL);
        }
        goto LABEL_25;
      }
      v10 = 1;
      v11 = 1;
LABEL_27:
      if ( ++v9 >= labelText->fields.m_stringLength )
        goto LABEL_30;
    }
    v12 = 0;
LABEL_25:
    v10 = 1;
    goto LABEL_27;
  }
  v12 = 1;
LABEL_30:
  Chars = (System_String_o *)WrapControlText__textAdjust(v21->fields.messageLabel, v5, 22, 0, 0, 0LL);
  if ( (v12 & 1) != 0 )
  {
    messageLabel = v21->fields.messageLabel;
    if ( messageLabel )
      return messageLabel->fields.mText;
LABEL_35:
    sub_B7769C(Chars, v8);
  }
  return RubyLabelHelper__TextFormalAdjust(v21, (System_Collections_Generic_IReadOnlyList_char__o *)v6, v18);
}


void __fastcall RubyLabelHelper__ReleasePrefabs(RubyLabelHelper_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *rubyList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-78h] BYREF
  int v10[2]; // [xsp+20h] [xbp-60h]
  int v11; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_438DC2C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UILabel__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_bool__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DC2C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v11 = 0;
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    rubyList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v12 = v9;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B7769C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v12.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  }
  v10[0] = 56;
  v11 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  v11 = 0;
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mainList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    rubyList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v12 = v9;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B7769C(0LL, v6);
    v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v12.fields.current,
                                   0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v7, 0LL);
  }
  v10[0] = 112;
  v8 = ++v11;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  if ( v8 && v10[v8 - 1] == 112 )
    v11 = v8 - 1;
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mainTextList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__);
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyTextList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__);
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.textPositionYList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)rubyList,
    (const MethodInfo_30E61F4 *)Method_System_Collections_Generic_List_int__Clear__);
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyFlagList;
  if ( !rubyList
    || (System_Collections_Generic_List_bool___Clear(
          (System_Collections_Generic_List_bool__o *)rubyList,
          (const MethodInfo_30837D4 *)Method_System_Collections_Generic_List_bool__Clear__),
        (rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyLineList) == 0LL)
    || (System_Collections_Generic_List_bool___Clear(
          (System_Collections_Generic_List_bool__o *)rubyList,
          (const MethodInfo_30837D4 *)Method_System_Collections_Generic_List_bool__Clear__),
        (rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mainList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
          (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UILabel__Clear__),
        (rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyList) == 0LL) )
  {
LABEL_32:
    sub_B7769C(rubyList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UILabel__Clear__);
}


void __fastcall RubyLabelHelper__SetMainObject(RubyLabelHelper_o *this, const MethodInfo *method)
{
  UIWidget_o *messageLabel; // x0
  int32_t rightAnchor; // w20
  float finalAlpha; // w22
  float v6; // s0
  float v7; // s8
  float v8; // s0
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  unsigned __int64 v10; // x24
  int32_t v11; // w26
  int32_t v12; // w21
  char v13; // w25
  float v14; // s8
  float v15; // s10
  float v16; // s12
  int v17; // w28
  float v18; // s11
  struct UnityEngine_GameObject_o *mainPrefab; // x22
  UnityEngine_Transform_o *Component_WebViewObject; // x23
  struct System_Collections_Generic_List_string__o *v21; // x23
  UILabel_o *v22; // x22
  struct UILabel_o *v23; // x8
  struct System_Collections_Generic_List_int__o *textPositionYList; // x23
  struct System_Int32_array *items; // x8
  struct System_Collections_Generic_List_bool__o *rubyLineList; // x23
  bool v27; // w8
  struct System_Collections_Generic_List_int__o *v28; // x26
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x23
  const MethodInfo *v30; // x4
  struct System_Collections_Generic_List_int__o *v31; // x23
  float v32; // s0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DC2E & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Transform___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B775C4(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DC2E = 1;
  }
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_43;
  rightAnchor = (int32_t)messageLabel[1].fields.rightAnchor;
  finalAlpha = messageLabel[1].fields.finalAlpha;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))messageLabel->klass->vtable._22_get_localSize.method)(
    messageLabel,
    messageLabel->klass->vtable._23_get_drawingDimensions.methodPtr);
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel
    || (v7 = v6,
        LODWORD(v8) = *(_QWORD *)&UIWidget__get_pivotOffset(messageLabel, 0LL),
        mainTextList = this->fields.mainTextList,
        this->fields.addSize.fields.x = 0.0,
        this->fields.addSize.fields.y = 0.0,
        !mainTextList) )
  {
LABEL_43:
    sub_B7769C(messageLabel, method);
  }
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = v7 * v8;
  v15 = (float)(((rightAnchor - 15) & ~((rightAnchor - 15) >> 31)) + 2 * LODWORD(finalAlpha));
  v16 = 0.0;
  v17 = -(LODWORD(finalAlpha) + rightAnchor);
  v18 = 0.0;
  while ( (__int64)v10 < mainTextList->fields._size )
  {
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    if ( messageLabel )
    {
      mainPrefab = this->fields.mainPrefab;
      Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)messageLabel,
                                                             (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      messageLabel = (UIWidget_o *)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)mainPrefab,
                                     Component_WebViewObject,
                                     (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
      if ( messageLabel )
      {
        messageLabel = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)messageLabel,
                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        v21 = this->fields.mainTextList;
        if ( v21 )
        {
          v22 = (UILabel_o *)messageLabel;
          if ( v10 >= (unsigned int)v21->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          if ( messageLabel )
          {
            UILabel__set_text((UILabel_o *)messageLabel, v21->fields._items->m_Items[v10], 0LL);
            UILabel__set_fontSize(v22, rightAnchor, 0LL);
            v23 = this->fields.messageLabel;
            if ( v23 )
            {
              UIWidget__set_depth((UIWidget_o *)v22, v23->fields.mDepth, 0LL);
              textPositionYList = this->fields.textPositionYList;
              if ( textPositionYList )
              {
                if ( v10 >= (unsigned int)textPositionYList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                items = textPositionYList->fields._items;
                rubyLineList = this->fields.rubyLineList;
                v27 = v11 == items->m_Items[v10 + 1];
                if ( !v27 )
                  v16 = 0.0;
                if ( rubyLineList )
                {
                  v13 &= v27;
                  if ( v10 >= (unsigned int)rubyLineList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                  if ( !(v13 & 1 | !rubyLineList->fields._items->m_Items[v10 + 4]) )
                  {
                    v18 = v18 + v15;
                    v13 = 1;
                    this->fields.addSize.fields.y = v18;
                  }
                  messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v22, 0LL);
                  v28 = this->fields.textPositionYList;
                  if ( v28 )
                  {
                    if ( v10 >= (unsigned int)v28->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                    if ( messageLabel )
                    {
                      v33.fields.z = 0.0;
                      v33.fields.y = (float)(v28->fields._items->m_Items[v10 + 1] * v17) - v18;
                      v33.fields.x = v16 - v14;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v33, 0LL);
                      rubyFlagList = this->fields.rubyFlagList;
                      if ( rubyFlagList )
                      {
                        if ( v10 >= (unsigned int)rubyFlagList->fields._size )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                        if ( rubyFlagList->fields._items->m_Items[v10 + 4] )
                        {
                          messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v22,
                                                         0LL);
                          if ( !messageLabel )
                            goto LABEL_43;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)messageLabel,
                                            0LL);
                          RubyLabelHelper__SetRubyObject(this, v12++, localPosition, rightAnchor, v22, v30);
                        }
                        v31 = this->fields.textPositionYList;
                        if ( v31 )
                        {
                          if ( v10 >= (unsigned int)v31->fields._size )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                          v11 = v31->fields._items->m_Items[v10 + 1];
                          LODWORD(v32) = *(_QWORD *)&UILabel__get_printedSize(v22, 0LL);
                          messageLabel = (UIWidget_o *)this->fields.mainList;
                          if ( messageLabel )
                          {
                            v16 = v16 + v32;
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabel,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UILabel__Add__);
                            mainTextList = this->fields.mainTextList;
                            ++v10;
                            if ( mainTextList )
                              continue;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_43;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RubyLabelHelper__SetRubyObject(
        RubyLabelHelper_o *this,
        int32_t idx,
        UnityEngine_Vector3_o mainPosition,
        int32_t fontSize,
        UILabel_o *mainLabel,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s8
  UnityEngine_Component_o *messageLabel; // x0
  struct UnityEngine_GameObject_o *rubyPrefab; // x21
  UnityEngine_Transform_o *Component_WebViewObject; // x24
  UILabel_o *v15; // x21
  float v16; // s0
  struct System_Collections_Generic_List_string__o *rubyTextList; // x24
  double v18; // d13
  struct System_String_o *mText; // x8
  int v20; // w26
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v21; // x24
  System_String_o *v22; // x0
  int32_t v23; // w8
  int v24; // w23
  int32_t v25; // w8
  struct System_Collections_Generic_List_string__o *v26; // x24
  struct UILabel_o *v27; // x8
  float v28; // s10
  float v29; // s11
  float v30; // s0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_438DC2F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Transform___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B775C4(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_24337/*"・"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DC2F = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_44;
  rubyPrefab = this->fields.rubyPrefab;
  Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         messageLabel,
                                                         (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              (UILabel_o *)rubyPrefab,
                                              Component_WebViewObject,
                                              (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
  if ( !messageLabel )
    goto LABEL_44;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)messageLabel,
                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !mainLabel )
    goto LABEL_44;
  v15 = (UILabel_o *)messageLabel;
  v16 = UILabel__get_printedSize(mainLabel, 0LL).fields.x;
  rubyTextList = this->fields.rubyTextList;
  v18 = v16 == INFINITY ? -v16 : v16;
  if ( !rubyTextList )
    goto LABEL_44;
  if ( rubyTextList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  messageLabel = (UnityEngine_Component_o *)System_String__op_Equality(
                                              rubyTextList->fields._items->m_Items[idx],
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    mText = mainLabel->fields.mText;
    if ( mText )
    {
      v20 = -1;
      while ( ++v20 < mText->fields.m_stringLength )
      {
        v21 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.rubyTextList;
        if ( v21 )
        {
          if ( v21->fields._size <= (unsigned int)idx )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v22 = System_String__Concat_44901936(
                  (System_String_o *)v21->fields._items->m_Items[idx],
                  (System_String_o *)StringLiteral_24337/*"・"*/,
                  0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            v21,
            idx,
            (WarBoardManager_TaskList_o *)v22,
            (const MethodInfo_3052FF0 *)Method_System_Collections_Generic_List_string__set_Item__);
          mText = mainLabel->fields.mText;
          if ( mText )
            continue;
        }
        goto LABEL_44;
      }
      if ( v15 )
      {
        UILabel__set_fontSize(v15, fontSize, 0LL);
        if ( fontSize >= 0 )
          v25 = fontSize;
        else
          v25 = fontSize + 1;
        v24 = (v25 >> 1) + 5;
        goto LABEL_34;
      }
    }
LABEL_44:
    sub_B7769C(messageLabel, *(_QWORD *)&idx);
  }
  if ( !v15 )
    goto LABEL_44;
  if ( fontSize >= 0 )
    v23 = fontSize;
  else
    v23 = fontSize + 1;
  UILabel__set_fontSize(v15, v23 >> 1, 0LL);
  v24 = v15->fields.mFontSize + 1;
LABEL_34:
  v26 = this->fields.rubyTextList;
  if ( !v26 )
    goto LABEL_44;
  if ( v26->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  UILabel__set_text(v15, v26->fields._items->m_Items[idx], 0LL);
  v27 = this->fields.messageLabel;
  if ( !v27 )
    goto LABEL_44;
  UIWidget__set_depth((UIWidget_o *)v15, v27->fields.mDepth, 0LL);
  LODWORD(v28) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0LL);
  LODWORD(v29) = *(_QWORD *)&UILabel__get_printedSize(v15, 0LL);
  v30 = UILabel__get_printedSize(v15, 0LL).fields.x;
  if ( v30 <= UILabel__get_printedSize(mainLabel, 0LL).fields.x )
    x = x + (float)((float)(v28 - v29) * 0.5);
  else
    UILabel__SetCondensedScale(v15, (int)v18, 0LL);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v15, 0LL);
  if ( !messageLabel )
    goto LABEL_44;
  v31.fields.y = y + (float)v24;
  v31.fields.z = 0.0;
  v31.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v31, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyList;
  if ( !messageLabel )
    goto LABEL_44;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabel,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UILabel__Add__);
}


void __fastcall RubyLabelHelper__SetText(RubyLabelHelper_o *this, System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *FormalText; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  UnityEngine_Behaviour_o *messageLabel; // x0

  RubyLabelHelper__ReleasePrefabs(this, (const MethodInfo *)text);
  FormalText = RubyLabelHelper__GetFormalText(this, text, v5);
  RubyLabelHelper__SetTextObjectList(this, FormalText, v7);
  if ( !this->fields.notRubyFlag )
  {
    RubyLabelHelper__SetMainObject(this, v8);
    messageLabel = (UnityEngine_Behaviour_o *)this->fields.messageLabel;
    if ( !messageLabel )
      sub_B7769C(0LL, v9);
    UnityEngine_Behaviour__set_enabled(messageLabel, 0, 0LL);
  }
}


void __fastcall RubyLabelHelper__SetTextObjectList(
        RubyLabelHelper_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v5; // x22
  System_Char_array *mainTextList; // x0
  System_Char_array *v7; // x1
  int max_length; // w8
  char v9; // w20
  int32_t v10; // w21
  System_String_o *v11; // x25
  System_String_o *v12; // x23
  bool continueRuby; // w26
  int32_t v14; // w24
  bool v15; // w28
  uint16_t Chars; // w0
  System_String_o *v17; // x1
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  __int64 v21; // x0
  System_Char_array *v22; // [xsp+0h] [xbp-60h]
  __int16 v23[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438DC2D & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_bool__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DC2D = 1;
  }
  v23[0] = 0;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  this->fields.notRubyFlag = 1;
  this->fields.continueRuby = 0;
  mainTextList = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !mainTextList )
    goto LABEL_57;
  v7 = mainTextList;
  if ( !mainTextList->max_length )
  {
LABEL_58:
    v21 = sub_B776C8(mainTextList);
    sub_B77668(v21, 0LL);
  }
  mainTextList->m_Items[2] = 10;
  if ( !message || (mainTextList = (System_Char_array *)System_String__Split(message, mainTextList, 0LL)) == 0LL )
LABEL_57:
    sub_B7769C(mainTextList, v7);
  max_length = mainTextList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = v5;
    v22 = mainTextList;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        goto LABEL_58;
      v12 = *(System_String_o **)&mainTextList->m_Items[4 * v10 + 2];
      continueRuby = this->fields.continueRuby;
      if ( !v12 )
        goto LABEL_57;
      if ( v12->fields.m_stringLength >= 1 )
        break;
      v15 = this->fields.continueRuby;
LABEL_46:
      if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
      {
        mainTextList = (System_Char_array *)this->fields.mainTextList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        mainTextList = (System_Char_array *)this->fields.rubyFlagList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_bool___Add(
          (System_Collections_Generic_List_bool__o *)mainTextList,
          continueRuby,
          (const MethodInfo_30833C4 *)Method_System_Collections_Generic_List_bool__Add__);
        mainTextList = (System_Char_array *)this->fields.rubyLineList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_bool___Add(
          (System_Collections_Generic_List_bool__o *)mainTextList,
          v15,
          (const MethodInfo_30833C4 *)Method_System_Collections_Generic_List_bool__Add__);
        mainTextList = (System_Char_array *)this->fields.textPositionYList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)mainTextList,
          v10,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v15 )
        {
          mainTextList = (System_Char_array *)this->fields.rubyTextList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        }
        v11 = (System_String_o *)StringLiteral_1/*""*/;
      }
      mainTextList = v22;
      ++v10;
      max_length = v22->max_length;
      if ( v10 >= max_length )
        return;
    }
    v14 = 1;
    v15 = this->fields.continueRuby;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v12, v14 - 1, 0LL);
      v23[0] = Chars;
      if ( Chars <= 0x5Au )
        break;
      if ( Chars == 91 )
      {
        if ( System_String__get_Chars(v12, v14, 0LL) != 35 )
        {
          v19 = System_Char__ToString((uint16_t)v23, 0LL);
          v11 = System_String__Concat_44901936(v11, v19, 0LL);
          goto LABEL_43;
        }
        this->fields.continueRuby = 1;
        if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        {
          mainTextList = (System_Char_array *)this->fields.mainTextList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          mainTextList = (System_Char_array *)this->fields.rubyFlagList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_bool___Add(
            (System_Collections_Generic_List_bool__o *)mainTextList,
            continueRuby,
            (const MethodInfo_30833C4 *)Method_System_Collections_Generic_List_bool__Add__);
          mainTextList = (System_Char_array *)this->fields.rubyLineList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_bool___Add(
            (System_Collections_Generic_List_bool__o *)mainTextList,
            1,
            (const MethodInfo_30833C4 *)Method_System_Collections_Generic_List_bool__Add__);
          mainTextList = (System_Char_array *)this->fields.textPositionYList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)mainTextList,
            v10,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          v11 = (System_String_o *)StringLiteral_1/*""*/;
        }
        this->fields.notRubyFlag = 0;
        continueRuby = 1;
LABEL_40:
        v15 = 1;
        goto LABEL_43;
      }
      if ( Chars != 93 )
        goto LABEL_27;
      if ( !v15 )
        goto LABEL_31;
      mainTextList = (System_Char_array *)this->fields.mainTextList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      mainTextList = (System_Char_array *)this->fields.rubyTextList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      mainTextList = (System_Char_array *)this->fields.rubyFlagList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_bool___Add(
        (System_Collections_Generic_List_bool__o *)mainTextList,
        continueRuby,
        (const MethodInfo_30833C4 *)Method_System_Collections_Generic_List_bool__Add__);
      mainTextList = (System_Char_array *)this->fields.rubyLineList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_bool___Add(
        (System_Collections_Generic_List_bool__o *)mainTextList,
        1,
        (const MethodInfo_30833C4 *)Method_System_Collections_Generic_List_bool__Add__);
      mainTextList = (System_Char_array *)this->fields.textPositionYList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)mainTextList,
        v10,
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      continueRuby = 0;
      v15 = 0;
      v9 = 0;
      v5 = (System_String_o *)StringLiteral_1/*""*/;
      this->fields.continueRuby = 0;
      v11 = v5;
LABEL_43:
      if ( v14++ >= v12->fields.m_stringLength )
        goto LABEL_46;
    }
    if ( Chars == 35 )
    {
      if ( v15 )
        goto LABEL_40;
LABEL_31:
      v18 = System_Char__ToString((uint16_t)v23, 0LL);
      v11 = System_String__Concat_44901936(v11, v18, 0LL);
      v15 = 0;
      goto LABEL_43;
    }
    if ( Chars == 58 )
    {
      if ( !v15 )
        goto LABEL_31;
      v15 = 1;
    }
    else
    {
LABEL_27:
      v17 = System_Char__ToString((uint16_t)v23, 0LL);
      if ( (v9 & 1) == 0 )
      {
        v11 = System_String__Concat_44901936(v11, v17, 0LL);
        v9 = 0;
        goto LABEL_43;
      }
      v5 = System_String__Concat_44901936(v5, v17, 0LL);
    }
    v9 = 1;
    goto LABEL_43;
  }
}


System_String_o *__fastcall RubyLabelHelper__TextFormalAdjust(
        RubyLabelHelper_o *this,
        System_Collections_Generic_IReadOnlyList_char__o *localMainTextList,
        const MethodInfo *method)
{
  RubyLabelHelper_o *v4; // x20
  int32_t v5; // w21
  System_String_o *v6; // x22
  unsigned int i; // w23
  System_Collections_Generic_IReadOnlyList_char__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  struct UILabel_o *messageLabel; // x8
  unsigned __int16 v17; // w24
  uint16_t Chars; // w0
  System_Collections_Generic_IReadOnlyList_char__c *v19; // x8
  uint16_t v20; // w25
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  System_String_o *v24; // x0
  struct UILabel_o *v25; // x8
  struct System_String_o *mText; // x9
  System_Collections_Generic_IReadOnlyList_char__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  unsigned int v35; // w24
  System_Collections_Generic_IReadOnlyList_char__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  System_String_o *v40; // x0
  struct UILabel_o *v41; // x8
  unsigned __int16 v42; // w26
  struct UILabel_o *v43; // x8
  System_String_o *v44; // x0
  struct UILabel_o *v45; // x8
  struct System_String_o *v46; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  struct UILabel_o *v51; // x8
  System_String_o *v52; // x0
  struct UILabel_o *v53; // x8
  struct System_String_o *v54; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  System_String_o *v59; // x0
  __int16 v61[2]; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_438DC31 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyCollection_char__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IReadOnlyList_char__TypeInfo);
    this = (RubyLabelHelper_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DC31 = 1;
  }
  v61[0] = 0;
  if ( !localMainTextList )
LABEL_88:
    sub_B7769C(this, localMainTextList);
  v5 = 0;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  for ( i = 0; ; ++i )
  {
    klass = localMainTextList->klass;
    if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL);
    }
    if ( (int)i >= (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))p_method)(
                     localMainTextList,
                     *(_QWORD *)(p_method + 8)) )
      break;
    v12 = localMainTextList->klass;
    if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v14 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v15)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v15 + 8));
    messageLabel = v4->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_88;
    v17 = (unsigned __int16)this;
    this = (RubyLabelHelper_o *)messageLabel->fields.mText;
    if ( !this )
      goto LABEL_88;
    Chars = System_String__get_Chars((System_String_o *)this, v5, 0LL);
    v19 = localMainTextList->klass;
    v20 = Chars;
    if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v22 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v23 = (__int64)&v19->vtable[*v22].method;
    }
    else
    {
LABEL_24:
      v23 = sub_B0F4C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v23)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v23 + 8));
    if ( v17 == v20 )
    {
      v61[0] = (__int16)this;
      v24 = System_Char__ToString((uint16_t)v61, 0LL);
      this = (RubyLabelHelper_o *)System_String__Concat_44901936(v6, v24, 0LL);
      v25 = v4->fields.messageLabel;
      if ( !v25 )
        goto LABEL_88;
      mText = v25->fields.mText;
      if ( !mText )
        goto LABEL_88;
      v6 = (System_String_o *)this;
      if ( v5 < mText->fields.m_stringLength - 1 )
        ++v5;
    }
    else
    {
      if ( (unsigned __int16)this != 10 )
      {
        v31 = localMainTextList->klass;
        if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
        {
          v32 = 0LL;
          v33 = &v31->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v33 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            ++v32;
            v33 += 4;
            if ( v32 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
              goto LABEL_45;
          }
          v34 = (__int64)&v31->vtable[*v33].method;
        }
        else
        {
LABEL_45:
          v34 = sub_B0F4C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
        }
        v61[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v34)(
                   localMainTextList,
                   i,
                   *(_QWORD *)(v34 + 8));
        v40 = System_Char__ToString((uint16_t)v61, 0LL);
        v6 = System_String__Concat_44901936(v6, v40, 0LL);
        continue;
      }
      v25 = v4->fields.messageLabel;
      if ( !v25 )
        goto LABEL_88;
    }
    this = (RubyLabelHelper_o *)v25->fields.mText;
    if ( !this )
      goto LABEL_88;
    if ( System_String__get_Chars((System_String_o *)this, v5, 0LL) == 10 )
    {
      v27 = localMainTextList->klass;
      if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        v29 = &v27->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)v29 - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
            goto LABEL_40;
        }
        v30 = (__int64)&v27->vtable[*v29].method;
      }
      else
      {
LABEL_40:
        v30 = sub_B0F4C0(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v30)(
                                    localMainTextList,
                                    *(_QWORD *)(v30 + 8));
      v35 = i + 1;
      if ( (int)(i + 1) >= (int)this )
        goto LABEL_59;
      v36 = localMainTextList->klass;
      if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
      {
        v37 = 0LL;
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v38 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          ++v37;
          v38 += 4;
          if ( v37 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
            goto LABEL_52;
        }
        v39 = (__int64)&v36->vtable[*v38].method;
      }
      else
      {
LABEL_52:
        v39 = sub_B0F4C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v39)(
                                    localMainTextList,
                                    v35,
                                    *(_QWORD *)(v39 + 8));
      v41 = v4->fields.messageLabel;
      if ( !v41 )
        goto LABEL_88;
      v42 = (unsigned __int16)this;
      this = (RubyLabelHelper_o *)v41->fields.mText;
      if ( !this )
        goto LABEL_88;
      this = (RubyLabelHelper_o *)System_String__get_Chars((System_String_o *)this, v5 + 1, 0LL);
      if ( v42 == (unsigned __int16)this )
      {
LABEL_59:
        v43 = v4->fields.messageLabel;
        if ( !v43 )
          goto LABEL_88;
        this = (RubyLabelHelper_o *)v43->fields.mText;
        if ( !this )
          goto LABEL_88;
        v61[0] = System_String__get_Chars((System_String_o *)this, v5, 0LL);
        v44 = System_Char__ToString((uint16_t)v61, 0LL);
        this = (RubyLabelHelper_o *)System_String__Concat_44901936(v6, v44, 0LL);
        v45 = v4->fields.messageLabel;
        if ( !v45 )
          goto LABEL_88;
        v46 = v45->fields.mText;
        if ( !v46 )
          goto LABEL_88;
        v6 = (System_String_o *)this;
        if ( v5 < v46->fields.m_stringLength - 1 )
          ++v5;
      }
      else
      {
        v47 = localMainTextList->klass;
        if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
        {
          v48 = 0LL;
          v49 = &v47->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v49 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            ++v48;
            v49 += 4;
            if ( v48 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
              goto LABEL_70;
          }
          v50 = (__int64)&v47->vtable[*v49].method;
        }
        else
        {
LABEL_70:
          v50 = sub_B0F4C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
        }
        this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v50)(
                                      localMainTextList,
                                      v35,
                                      *(_QWORD *)(v50 + 8));
        if ( (unsigned __int16)this == 10 )
        {
          v51 = v4->fields.messageLabel;
          if ( !v51 )
            goto LABEL_88;
          this = (RubyLabelHelper_o *)v51->fields.mText;
          if ( !this )
            goto LABEL_88;
          v61[0] = System_String__get_Chars((System_String_o *)this, v5, 0LL);
          v52 = System_Char__ToString((uint16_t)v61, 0LL);
          this = (RubyLabelHelper_o *)System_String__Concat_44901936(v6, v52, 0LL);
          v53 = v4->fields.messageLabel;
          if ( !v53 )
            goto LABEL_88;
          v54 = v53->fields.mText;
          if ( !v54 )
            goto LABEL_88;
          v6 = (System_String_o *)this;
          if ( v5 < v54->fields.m_stringLength - 1 )
            ++v5;
        }
        else
        {
          v55 = localMainTextList->klass;
          if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
          {
            v56 = 0LL;
            v57 = &v55->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v57 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
            {
              ++v56;
              v57 += 4;
              if ( v56 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
                goto LABEL_84;
            }
            v58 = (__int64)&v55->vtable[*v57].method;
          }
          else
          {
LABEL_84:
            v58 = sub_B0F4C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
          }
          v61[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v58)(
                     localMainTextList,
                     v35,
                     *(_QWORD *)(v58 + 8));
          v59 = System_Char__ToString((uint16_t)v61, 0LL);
          v6 = System_String__Concat_44901936(v6, v59, 0LL);
          ++i;
        }
      }
    }
  }
  return v6;
}


UnityEngine_Vector2_o __fastcall RubyLabelHelper__get_Size(RubyLabelHelper_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_B7769C(0LL, method);
  printedSize = UILabel__get_printedSize(messageLabel, 0LL);
  v5 = printedSize.fields.x + this->fields.addSize.fields.x;
  v6 = printedSize.fields.y + this->fields.addSize.fields.y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}