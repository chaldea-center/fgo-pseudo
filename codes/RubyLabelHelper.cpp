void __fastcall RubyLabelHelper___ctor(
        RubyLabelHelper_o *this,
        UILabel_o *label,
        UnityEngine_GameObject_o *inputMainPrefab,
        UnityEngine_GameObject_o *inputRubyPrefab,
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_int__o *v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_bool__o *v54; // x23
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_bool__o *v61; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x23
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x23
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct UnityEngine_GameObject_o **p_mainPrefab; // x22
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct UnityEngine_GameObject_o **p_rubyPrefab; // x19
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  UnityEngine_Object_o *v102; // x20

  if ( (byte_42EAF4C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_bool___ctor__,
      (_DWORD)label,
      (_DWORD)inputMainPrefab,
      inputRubyPrefab);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UILabel___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_UILabel__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v30, v31, v32);
    byte_42EAF4C = 1;
  }
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.mainTextList = (struct System_Collections_Generic_List_string__o *)v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainTextList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rubyTextList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v47,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.textPositionYList = v47;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.textPositionYList,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (System_Collections_Generic_List_bool__o *)sub_B5D694(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v54,
    (const MethodInfo_30146F0 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyFlagList = v54;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rubyFlagList,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (System_Collections_Generic_List_bool__o *)sub_B5D694(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v61,
    (const MethodInfo_30146F0 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyLineList = v61;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rubyLineList,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainList,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v75,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v75;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rubyList,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.messageLabel = label;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)label, v82, v83, v84, v85, v86, v87);
  this->fields.mainPrefab = inputMainPrefab;
  p_mainPrefab = &this->fields.mainPrefab;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainPrefab,
    (System_Int32_array **)inputMainPrefab,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields.rubyPrefab = inputRubyPrefab;
  p_rubyPrefab = &this->fields.rubyPrefab;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_rubyPrefab,
    (System_Int32_array **)inputRubyPrefab,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v102 = (UnityEngine_Object_o *)*p_mainPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Inequality(v102, 0LL, 0LL);
  UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)*p_rubyPrefab, 0LL, 0LL);
}


System_String_o *__fastcall RubyLabelHelper__GetFormalText(
        RubyLabelHelper_o *this,
        System_String_o *labelText,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_String_o *v24; // x22
  System_Collections_Generic_List_char__o *v25; // x21
  System_String_o *Chars; // x0
  __int64 v27; // x1
  int32_t v28; // w23
  char v29; // w19
  char v30; // w28
  char v31; // w26
  System_String_o *v32; // x24
  System_String_o *v33; // x1
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  const MethodInfo *v37; // x2
  struct UILabel_o *messageLabel; // x8
  RubyLabelHelper_o *v40; // [xsp+0h] [xbp-60h]
  __int16 v41[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42EAF51 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_char__Add__, (_DWORD)labelText, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_char___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_char__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_15827/*"[#"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v21, v22, v23);
    byte_42EAF51 = 1;
  }
  v41[0] = 0;
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  v25 = (System_Collections_Generic_List_char__o *)sub_B5D694(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v25,
    (const MethodInfo_301A704 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_35;
  v40 = this;
  if ( labelText->fields.m_stringLength >= 1 )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 1;
    v32 = v24;
    while ( 1 )
    {
      v41[0] = System_String__get_Chars(labelText, v28, 0LL);
      v35 = System_Char__ToString((uint16_t)v41, 0LL);
      v24 = System_String__Concat_44577788(v24, v35, 0LL);
      if ( (v30 & 1) != 0 )
      {
        v41[0] = System_String__get_Chars(labelText, v28, 0LL);
        v36 = System_Char__ToString((uint16_t)v41, 0LL);
        v32 = System_String__Concat_44577788(v32, v36, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v28, 0LL);
      if ( !v25 )
        goto LABEL_35;
      System_Collections_Generic_List_char___Add(
        v25,
        (uint16_t)Chars,
        (const MethodInfo_301B460 *)Method_System_Collections_Generic_List_char__Add__);
      if ( System_String__get_Chars(labelText, v28, 0LL) == 91
        && System_String__get_Chars(labelText, v28 + 1, 0LL) == 35 )
      {
        break;
      }
      if ( (v29 & 1) == 0 )
      {
        v29 = 0;
        goto LABEL_27;
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v28, 0LL);
      v41[0] = (__int16)Chars;
      if ( (unsigned __int16)Chars == 93 )
      {
        if ( (v30 & 1) != 0 )
        {
          Chars = System_String__Concat_44577788((System_String_o *)StringLiteral_1245/*":"*/, v32, 0LL);
          if ( !v24 )
            goto LABEL_35;
          v33 = Chars;
        }
        else
        {
          if ( !v24 )
            goto LABEL_35;
          v33 = (System_String_o *)StringLiteral_16061/*"]"*/;
        }
        v34 = System_String__Replace_44585024(v24, v33, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v32 = (System_String_o *)StringLiteral_1/*""*/;
        v24 = v34;
        v29 = 0;
        v30 = 0;
        goto LABEL_27;
      }
      if ( (unsigned __int16)Chars != 58 )
      {
        if ( (unsigned __int16)Chars == 35 )
        {
          if ( !v24 )
            goto LABEL_35;
          v24 = System_String__Replace_44585024(
                  v24,
                  (System_String_o *)StringLiteral_15827/*"[#"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
        }
        goto LABEL_25;
      }
      v29 = 1;
      v30 = 1;
LABEL_27:
      if ( ++v28 >= labelText->fields.m_stringLength )
        goto LABEL_30;
    }
    v31 = 0;
LABEL_25:
    v29 = 1;
    goto LABEL_27;
  }
  v31 = 1;
LABEL_30:
  Chars = (System_String_o *)WrapControlText__textAdjust(v40->fields.messageLabel, v24, 22, 0, 0, 0LL);
  if ( (v31 & 1) != 0 )
  {
    messageLabel = v40->fields.messageLabel;
    if ( messageLabel )
      return messageLabel->fields.mText;
LABEL_35:
    sub_B5D69C(Chars, v27);
  }
  return RubyLabelHelper__TextFormalAdjust(v40, (System_Collections_Generic_IReadOnlyList_char__o *)v25, v37);
}


void __fastcall RubyLabelHelper__ReleasePrefabs(RubyLabelHelper_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *rubyList; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v32; // x1
  UnityEngine_Object_o *v33; // x20
  int v34; // w20
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-78h] BYREF
  int v36[2]; // [xsp+20h] [xbp-60h]
  int v37; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42EAF4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UILabel__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UILabel__Clear__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UILabel__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EAF4D = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v37 = 0;
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    rubyList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v38 = v35;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v38.fields.current )
      sub_B5D69C(0LL, v30);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v38.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  v36[0] = 56;
  v37 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  v37 = 0;
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mainList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    rubyList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v38 = v35;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v38.fields.current )
      sub_B5D69C(0LL, v32);
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)v38.fields.current,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v33, 0LL);
  }
  v36[0] = 112;
  v34 = ++v37;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  if ( v34 && v36[v34 - 1] == 112 )
    v37 = v34 - 1;
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mainTextList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyTextList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.textPositionYList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)rubyList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyFlagList;
  if ( !rubyList
    || (System_Collections_Generic_List_bool___Clear(
          (System_Collections_Generic_List_bool__o *)rubyList,
          (const MethodInfo_3015864 *)Method_System_Collections_Generic_List_bool__Clear__),
        (rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyLineList) == 0LL)
    || (System_Collections_Generic_List_bool___Clear(
          (System_Collections_Generic_List_bool__o *)rubyList,
          (const MethodInfo_3015864 *)Method_System_Collections_Generic_List_bool__Clear__),
        (rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mainList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UILabel__Clear__),
        (rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyList) == 0LL) )
  {
LABEL_32:
    sub_B5D69C(rubyList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UILabel__Clear__);
}


void __fastcall RubyLabelHelper__SetMainObject(RubyLabelHelper_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UIWidget_o *messageLabel; // x0
  int32_t rightAnchor; // w20
  float finalAlpha; // w22
  float v32; // s0
  float v33; // s8
  float v34; // s0
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  unsigned __int64 v36; // x24
  int32_t v37; // w26
  int32_t v38; // w21
  char v39; // w25
  float v40; // s8
  float v41; // s10
  float v42; // s12
  int v43; // w28
  float v44; // s11
  struct UnityEngine_GameObject_o *mainPrefab; // x22
  UnityEngine_Transform_o *Component_WebViewObject; // x23
  struct System_Collections_Generic_List_string__o *v47; // x23
  UILabel_o *v48; // x22
  struct UILabel_o *v49; // x8
  struct System_Collections_Generic_List_int__o *textPositionYList; // x23
  struct System_Int32_array *items; // x8
  struct System_Collections_Generic_List_bool__o *rubyLineList; // x23
  bool v53; // w8
  struct System_Collections_Generic_List_int__o *v54; // x26
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x23
  const MethodInfo *v56; // x4
  struct System_Collections_Generic_List_int__o *v57; // x23
  float v58; // s0
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAF4F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Transform___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UILabel__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EAF4F = 1;
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
    || (v33 = v32,
        LODWORD(v34) = *(_QWORD *)&UIWidget__get_pivotOffset(messageLabel, 0LL),
        mainTextList = this->fields.mainTextList,
        this->fields.addSize.fields.x = 0.0,
        this->fields.addSize.fields.y = 0.0,
        !mainTextList) )
  {
LABEL_43:
    sub_B5D69C(messageLabel, method);
  }
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = v33 * v34;
  v41 = (float)(((rightAnchor - 15) & ~((rightAnchor - 15) >> 31)) + 2 * LODWORD(finalAlpha));
  v42 = 0.0;
  v43 = -(LODWORD(finalAlpha) + rightAnchor);
  v44 = 0.0;
  while ( (__int64)v36 < mainTextList->fields._size )
  {
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    if ( messageLabel )
    {
      mainPrefab = this->fields.mainPrefab;
      Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)messageLabel,
                                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      messageLabel = (UIWidget_o *)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)mainPrefab,
                                     Component_WebViewObject,
                                     (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      if ( messageLabel )
      {
        messageLabel = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)messageLabel,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        v47 = this->fields.mainTextList;
        if ( v47 )
        {
          v48 = (UILabel_o *)messageLabel;
          if ( v36 >= (unsigned int)v47->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( messageLabel )
          {
            UILabel__set_text((UILabel_o *)messageLabel, v47->fields._items->m_Items[v36], 0LL);
            UILabel__set_fontSize(v48, rightAnchor, 0LL);
            v49 = this->fields.messageLabel;
            if ( v49 )
            {
              UIWidget__set_depth((UIWidget_o *)v48, v49->fields.mDepth, 0LL);
              textPositionYList = this->fields.textPositionYList;
              if ( textPositionYList )
              {
                if ( v36 >= (unsigned int)textPositionYList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                items = textPositionYList->fields._items;
                rubyLineList = this->fields.rubyLineList;
                v53 = v37 == items->m_Items[v36 + 1];
                if ( !v53 )
                  v42 = 0.0;
                if ( rubyLineList )
                {
                  v39 &= v53;
                  if ( v36 >= (unsigned int)rubyLineList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  if ( !(v39 & 1 | !rubyLineList->fields._items->m_Items[v36 + 4]) )
                  {
                    v44 = v44 + v41;
                    v39 = 1;
                    this->fields.addSize.fields.y = v44;
                  }
                  messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v48, 0LL);
                  v54 = this->fields.textPositionYList;
                  if ( v54 )
                  {
                    if ( v36 >= (unsigned int)v54->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                    if ( messageLabel )
                    {
                      v59.fields.z = 0.0;
                      v59.fields.y = (float)(v54->fields._items->m_Items[v36 + 1] * v43) - v44;
                      v59.fields.x = v42 - v40;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v59, 0LL);
                      rubyFlagList = this->fields.rubyFlagList;
                      if ( rubyFlagList )
                      {
                        if ( v36 >= (unsigned int)rubyFlagList->fields._size )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                        if ( rubyFlagList->fields._items->m_Items[v36 + 4] )
                        {
                          messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v48,
                                                         0LL);
                          if ( !messageLabel )
                            goto LABEL_43;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)messageLabel,
                                            0LL);
                          RubyLabelHelper__SetRubyObject(this, v38++, localPosition, rightAnchor, v48, v56);
                        }
                        v57 = this->fields.textPositionYList;
                        if ( v57 )
                        {
                          if ( v36 >= (unsigned int)v57->fields._size )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                          v37 = v57->fields._items->m_Items[v36 + 1];
                          LODWORD(v58) = *(_QWORD *)&UILabel__get_printedSize(v48, 0LL);
                          messageLabel = (UIWidget_o *)this->fields.mainList;
                          if ( messageLabel )
                          {
                            v42 = v42 + v58;
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabel,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UILabel__Add__);
                            mainTextList = this->fields.mainTextList;
                            ++v36;
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UnityEngine_Component_o *messageLabel; // x0
  struct UnityEngine_GameObject_o *rubyPrefab; // x21
  UnityEngine_Transform_o *Component_WebViewObject; // x24
  UILabel_o *v39; // x21
  float v40; // s0
  struct System_Collections_Generic_List_string__o *rubyTextList; // x24
  double v42; // d13
  struct System_String_o *mText; // x8
  int v44; // w26
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v45; // x24
  System_String_o *v46; // x0
  int32_t v47; // w8
  int v48; // w23
  int32_t v49; // w8
  struct System_Collections_Generic_List_string__o *v50; // x24
  struct UILabel_o *v51; // x8
  float v52; // s10
  float v53; // s11
  float v54; // s0
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_42EAF50 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Transform___, idx, fontSize, mainLabel);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UILabel__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__set_Item__, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_24158/*"・"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    byte_42EAF50 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_44;
  rubyPrefab = this->fields.rubyPrefab;
  Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         messageLabel,
                                                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              (UILabel_o *)rubyPrefab,
                                              Component_WebViewObject,
                                              (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  if ( !messageLabel )
    goto LABEL_44;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)messageLabel,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !mainLabel )
    goto LABEL_44;
  v39 = (UILabel_o *)messageLabel;
  v40 = UILabel__get_printedSize(mainLabel, 0LL).fields.x;
  rubyTextList = this->fields.rubyTextList;
  v42 = v40 == INFINITY ? -v40 : v40;
  if ( !rubyTextList )
    goto LABEL_44;
  if ( rubyTextList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  messageLabel = (UnityEngine_Component_o *)System_String__op_Equality(
                                              rubyTextList->fields._items->m_Items[idx],
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    mText = mainLabel->fields.mText;
    if ( mText )
    {
      v44 = -1;
      while ( ++v44 < mText->fields.m_stringLength )
      {
        v45 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.rubyTextList;
        if ( v45 )
        {
          if ( v45->fields._size <= (unsigned int)idx )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v46 = System_String__Concat_44577788(
                  (System_String_o *)v45->fields._items->m_Items[idx],
                  (System_String_o *)StringLiteral_24158/*"・"*/,
                  0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            v45,
            idx,
            (WarBoardManager_TaskList_o *)v46,
            (const MethodInfo_3056D18 *)Method_System_Collections_Generic_List_string__set_Item__);
          mText = mainLabel->fields.mText;
          if ( mText )
            continue;
        }
        goto LABEL_44;
      }
      if ( v39 )
      {
        UILabel__set_fontSize(v39, fontSize, 0LL);
        if ( fontSize >= 0 )
          v49 = fontSize;
        else
          v49 = fontSize + 1;
        v48 = (v49 >> 1) + 5;
        goto LABEL_34;
      }
    }
LABEL_44:
    sub_B5D69C(messageLabel, *(_QWORD *)&idx);
  }
  if ( !v39 )
    goto LABEL_44;
  if ( fontSize >= 0 )
    v47 = fontSize;
  else
    v47 = fontSize + 1;
  UILabel__set_fontSize(v39, v47 >> 1, 0LL);
  v48 = v39->fields.mFontSize + 1;
LABEL_34:
  v50 = this->fields.rubyTextList;
  if ( !v50 )
    goto LABEL_44;
  if ( v50->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  UILabel__set_text(v39, v50->fields._items->m_Items[idx], 0LL);
  v51 = this->fields.messageLabel;
  if ( !v51 )
    goto LABEL_44;
  UIWidget__set_depth((UIWidget_o *)v39, v51->fields.mDepth, 0LL);
  LODWORD(v52) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0LL);
  LODWORD(v53) = *(_QWORD *)&UILabel__get_printedSize(v39, 0LL);
  v54 = UILabel__get_printedSize(v39, 0LL).fields.x;
  if ( v54 <= UILabel__get_printedSize(mainLabel, 0LL).fields.x )
    x = x + (float)((float)(v52 - v53) * 0.5);
  else
    UILabel__SetCondensedScale(v39, (int)v42, 0LL);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v39, 0LL);
  if ( !messageLabel )
    goto LABEL_44;
  v55.fields.y = y + (float)v48;
  v55.fields.z = 0.0;
  v55.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v55, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyList;
  if ( !messageLabel )
    goto LABEL_44;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabel,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UILabel__Add__);
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
      sub_B5D69C(0LL, v9);
    UnityEngine_Behaviour__set_enabled(messageLabel, 0, 0LL);
  }
}


void __fastcall RubyLabelHelper__SetTextObjectList(
        RubyLabelHelper_o *this,
        System_String_o *message,
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
  System_String_o *v18; // x22
  System_Char_array *mainTextList; // x0
  System_Char_array *v20; // x1
  int max_length; // w8
  char v22; // w20
  int32_t v23; // w21
  System_String_o *v24; // x25
  System_String_o *v25; // x23
  bool continueRuby; // w26
  int32_t v27; // w24
  bool v28; // w28
  uint16_t Chars; // w0
  System_String_o *v30; // x1
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  __int64 v34; // x0
  System_Char_array *v35; // [xsp+0h] [xbp-60h]
  __int16 v36[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42EAF4E & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)message, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42EAF4E = 1;
  }
  v36[0] = 0;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  this->fields.notRubyFlag = 1;
  this->fields.continueRuby = 0;
  mainTextList = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !mainTextList )
    goto LABEL_57;
  v20 = mainTextList;
  if ( !mainTextList->max_length )
  {
LABEL_58:
    v34 = sub_B5D6C8(mainTextList);
    sub_B5D668(v34, 0LL);
  }
  mainTextList->m_Items[2] = 10;
  if ( !message || (mainTextList = (System_Char_array *)System_String__Split(message, mainTextList, 0LL)) == 0LL )
LABEL_57:
    sub_B5D69C(mainTextList, v20);
  max_length = mainTextList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    v23 = 0;
    v24 = v18;
    v35 = mainTextList;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)max_length )
        goto LABEL_58;
      v25 = *(System_String_o **)&mainTextList->m_Items[4 * v23 + 2];
      continueRuby = this->fields.continueRuby;
      if ( !v25 )
        goto LABEL_57;
      if ( v25->fields.m_stringLength >= 1 )
        break;
      v28 = this->fields.continueRuby;
LABEL_46:
      if ( System_String__op_Inequality(v24, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
      {
        mainTextList = (System_Char_array *)this->fields.mainTextList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        mainTextList = (System_Char_array *)this->fields.rubyFlagList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_bool___Add(
          (System_Collections_Generic_List_bool__o *)mainTextList,
          continueRuby,
          (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
        mainTextList = (System_Char_array *)this->fields.rubyLineList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_bool___Add(
          (System_Collections_Generic_List_bool__o *)mainTextList,
          v28,
          (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
        mainTextList = (System_Char_array *)this->fields.textPositionYList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)mainTextList,
          v23,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( v28 )
        {
          mainTextList = (System_Char_array *)this->fields.rubyTextList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        }
        v24 = (System_String_o *)StringLiteral_1/*""*/;
      }
      mainTextList = v35;
      ++v23;
      max_length = v35->max_length;
      if ( v23 >= max_length )
        return;
    }
    v27 = 1;
    v28 = this->fields.continueRuby;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v25, v27 - 1, 0LL);
      v36[0] = Chars;
      if ( Chars <= 0x5Au )
        break;
      if ( Chars == 91 )
      {
        if ( System_String__get_Chars(v25, v27, 0LL) != 35 )
        {
          v32 = System_Char__ToString((uint16_t)v36, 0LL);
          v24 = System_String__Concat_44577788(v24, v32, 0LL);
          goto LABEL_43;
        }
        this->fields.continueRuby = 1;
        if ( System_String__op_Inequality(v24, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        {
          mainTextList = (System_Char_array *)this->fields.mainTextList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          mainTextList = (System_Char_array *)this->fields.rubyFlagList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_bool___Add(
            (System_Collections_Generic_List_bool__o *)mainTextList,
            continueRuby,
            (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
          mainTextList = (System_Char_array *)this->fields.rubyLineList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_bool___Add(
            (System_Collections_Generic_List_bool__o *)mainTextList,
            1,
            (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
          mainTextList = (System_Char_array *)this->fields.textPositionYList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)mainTextList,
            v23,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v24 = (System_String_o *)StringLiteral_1/*""*/;
        }
        this->fields.notRubyFlag = 0;
        continueRuby = 1;
LABEL_40:
        v28 = 1;
        goto LABEL_43;
      }
      if ( Chars != 93 )
        goto LABEL_27;
      if ( !v28 )
        goto LABEL_31;
      mainTextList = (System_Char_array *)this->fields.mainTextList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      mainTextList = (System_Char_array *)this->fields.rubyTextList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      mainTextList = (System_Char_array *)this->fields.rubyFlagList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_bool___Add(
        (System_Collections_Generic_List_bool__o *)mainTextList,
        continueRuby,
        (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
      mainTextList = (System_Char_array *)this->fields.rubyLineList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_bool___Add(
        (System_Collections_Generic_List_bool__o *)mainTextList,
        1,
        (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
      mainTextList = (System_Char_array *)this->fields.textPositionYList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)mainTextList,
        v23,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      continueRuby = 0;
      v28 = 0;
      v22 = 0;
      v18 = (System_String_o *)StringLiteral_1/*""*/;
      this->fields.continueRuby = 0;
      v24 = v18;
LABEL_43:
      if ( v27++ >= v25->fields.m_stringLength )
        goto LABEL_46;
    }
    if ( Chars == 35 )
    {
      if ( v28 )
        goto LABEL_40;
LABEL_31:
      v31 = System_Char__ToString((uint16_t)v36, 0LL);
      v24 = System_String__Concat_44577788(v24, v31, 0LL);
      v28 = 0;
      goto LABEL_43;
    }
    if ( Chars == 58 )
    {
      if ( !v28 )
        goto LABEL_31;
      v28 = 1;
    }
    else
    {
LABEL_27:
      v30 = System_Char__ToString((uint16_t)v36, 0LL);
      if ( (v22 & 1) == 0 )
      {
        v24 = System_String__Concat_44577788(v24, v30, 0LL);
        v22 = 0;
        goto LABEL_43;
      }
      v18 = System_String__Concat_44577788(v18, v30, 0LL);
    }
    v22 = 1;
    goto LABEL_43;
  }
}


System_String_o *__fastcall RubyLabelHelper__TextFormalAdjust(
        RubyLabelHelper_o *this,
        System_Collections_Generic_IReadOnlyList_char__o *localMainTextList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  RubyLabelHelper_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t v12; // w21
  System_String_o *v13; // x22
  unsigned int i; // w23
  System_Collections_Generic_IReadOnlyList_char__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IReadOnlyList_char__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  struct UILabel_o *messageLabel; // x8
  unsigned __int16 v25; // w24
  uint16_t Chars; // w0
  __int64 v27; // x3
  System_Collections_Generic_IReadOnlyList_char__c *v28; // x8
  uint16_t v29; // w25
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x3
  System_String_o *v34; // x0
  struct UILabel_o *v35; // x8
  struct System_String_o *mText; // x9
  System_Collections_Generic_IReadOnlyList_char__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x3
  unsigned int v46; // w24
  System_Collections_Generic_IReadOnlyList_char__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  System_String_o *v51; // x0
  struct UILabel_o *v52; // x8
  unsigned __int16 v53; // w26
  __int64 v54; // x3
  struct UILabel_o *v55; // x8
  System_String_o *v56; // x0
  struct UILabel_o *v57; // x8
  struct System_String_o *v58; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v59; // x8
  unsigned __int64 v60; // x10
  int32_t *v61; // x11
  __int64 v62; // x0
  __int64 v63; // x3
  struct UILabel_o *v64; // x8
  System_String_o *v65; // x0
  struct UILabel_o *v66; // x8
  struct System_String_o *v67; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v68; // x8
  unsigned __int64 v69; // x10
  int32_t *v70; // x11
  __int64 v71; // x0
  System_String_o *v72; // x0
  __int16 v74[2]; // [xsp+Ch] [xbp-54h] BYREF

  v5 = this;
  if ( (byte_42EAF52 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyCollection_char__TypeInfo,
      (_DWORD)localMainTextList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyList_char__TypeInfo, v6, v7, v8);
    this = (RubyLabelHelper_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EAF52 = 1;
  }
  v74[0] = 0;
  if ( !localMainTextList )
LABEL_88:
    sub_B5D69C(this, localMainTextList);
  v12 = 0;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  for ( i = 0; ; ++i )
  {
    klass = localMainTextList->klass;
    if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL, v3);
    }
    if ( (int)i >= (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))p_method)(
                     localMainTextList,
                     *(_QWORD *)(p_method + 8)) )
      break;
    v20 = localMainTextList->klass;
    if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v22 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_AF54C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v19);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v23)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v23 + 8));
    messageLabel = v5->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_88;
    v25 = (unsigned __int16)this;
    this = (RubyLabelHelper_o *)messageLabel->fields.mText;
    if ( !this )
      goto LABEL_88;
    Chars = System_String__get_Chars((System_String_o *)this, v12, 0LL);
    v28 = localMainTextList->klass;
    v29 = Chars;
    if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v31 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v32 = (__int64)&v28->vtable[*v31].method;
    }
    else
    {
LABEL_24:
      v32 = sub_AF54C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v27);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v32)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v32 + 8));
    if ( v25 == v29 )
    {
      v74[0] = (__int16)this;
      v34 = System_Char__ToString((uint16_t)v74, 0LL);
      this = (RubyLabelHelper_o *)System_String__Concat_44577788(v13, v34, 0LL);
      v35 = v5->fields.messageLabel;
      if ( !v35 )
        goto LABEL_88;
      mText = v35->fields.mText;
      if ( !mText )
        goto LABEL_88;
      v13 = (System_String_o *)this;
      if ( v12 < mText->fields.m_stringLength - 1 )
        ++v12;
    }
    else
    {
      if ( (unsigned __int16)this != 10 )
      {
        v41 = localMainTextList->klass;
        if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
        {
          v42 = 0LL;
          v43 = &v41->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v43 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            ++v42;
            v43 += 4;
            if ( v42 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
              goto LABEL_45;
          }
          v44 = (__int64)&v41->vtable[*v43].method;
        }
        else
        {
LABEL_45:
          v44 = sub_AF54C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v33);
        }
        v74[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v44)(
                   localMainTextList,
                   i,
                   *(_QWORD *)(v44 + 8));
        v51 = System_Char__ToString((uint16_t)v74, 0LL);
        v13 = System_String__Concat_44577788(v13, v51, 0LL);
        continue;
      }
      v35 = v5->fields.messageLabel;
      if ( !v35 )
        goto LABEL_88;
    }
    this = (RubyLabelHelper_o *)v35->fields.mText;
    if ( !this )
      goto LABEL_88;
    if ( System_String__get_Chars((System_String_o *)this, v12, 0LL) == 10 )
    {
      v37 = localMainTextList->klass;
      if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        v39 = &v37->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)v39 - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
            goto LABEL_40;
        }
        v40 = (__int64)&v37->vtable[*v39].method;
      }
      else
      {
LABEL_40:
        v40 = sub_AF54C0(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL, v3);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v40)(
                                    localMainTextList,
                                    *(_QWORD *)(v40 + 8));
      v46 = i + 1;
      if ( (int)(i + 1) >= (int)this )
        goto LABEL_59;
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
            goto LABEL_52;
        }
        v50 = (__int64)&v47->vtable[*v49].method;
      }
      else
      {
LABEL_52:
        v50 = sub_AF54C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v45);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v50)(
                                    localMainTextList,
                                    v46,
                                    *(_QWORD *)(v50 + 8));
      v52 = v5->fields.messageLabel;
      if ( !v52 )
        goto LABEL_88;
      v53 = (unsigned __int16)this;
      this = (RubyLabelHelper_o *)v52->fields.mText;
      if ( !this )
        goto LABEL_88;
      this = (RubyLabelHelper_o *)System_String__get_Chars((System_String_o *)this, v12 + 1, 0LL);
      if ( v53 == (unsigned __int16)this )
      {
LABEL_59:
        v55 = v5->fields.messageLabel;
        if ( !v55 )
          goto LABEL_88;
        this = (RubyLabelHelper_o *)v55->fields.mText;
        if ( !this )
          goto LABEL_88;
        v74[0] = System_String__get_Chars((System_String_o *)this, v12, 0LL);
        v56 = System_Char__ToString((uint16_t)v74, 0LL);
        this = (RubyLabelHelper_o *)System_String__Concat_44577788(v13, v56, 0LL);
        v57 = v5->fields.messageLabel;
        if ( !v57 )
          goto LABEL_88;
        v58 = v57->fields.mText;
        if ( !v58 )
          goto LABEL_88;
        v13 = (System_String_o *)this;
        if ( v12 < v58->fields.m_stringLength - 1 )
          ++v12;
      }
      else
      {
        v59 = localMainTextList->klass;
        if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
        {
          v60 = 0LL;
          v61 = &v59->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v61 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            ++v60;
            v61 += 4;
            if ( v60 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
              goto LABEL_70;
          }
          v62 = (__int64)&v59->vtable[*v61].method;
        }
        else
        {
LABEL_70:
          v62 = sub_AF54C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v54);
        }
        this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v62)(
                                      localMainTextList,
                                      v46,
                                      *(_QWORD *)(v62 + 8));
        if ( (unsigned __int16)this == 10 )
        {
          v64 = v5->fields.messageLabel;
          if ( !v64 )
            goto LABEL_88;
          this = (RubyLabelHelper_o *)v64->fields.mText;
          if ( !this )
            goto LABEL_88;
          v74[0] = System_String__get_Chars((System_String_o *)this, v12, 0LL);
          v65 = System_Char__ToString((uint16_t)v74, 0LL);
          this = (RubyLabelHelper_o *)System_String__Concat_44577788(v13, v65, 0LL);
          v66 = v5->fields.messageLabel;
          if ( !v66 )
            goto LABEL_88;
          v67 = v66->fields.mText;
          if ( !v67 )
            goto LABEL_88;
          v13 = (System_String_o *)this;
          if ( v12 < v67->fields.m_stringLength - 1 )
            ++v12;
        }
        else
        {
          v68 = localMainTextList->klass;
          if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
          {
            v69 = 0LL;
            v70 = &v68->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v70 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
            {
              ++v69;
              v70 += 4;
              if ( v69 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
                goto LABEL_84;
            }
            v71 = (__int64)&v68->vtable[*v70].method;
          }
          else
          {
LABEL_84:
            v71 = sub_AF54C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v63);
          }
          v74[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v71)(
                     localMainTextList,
                     v46,
                     *(_QWORD *)(v71 + 8));
          v72 = System_Char__ToString((uint16_t)v74, 0LL);
          v13 = System_String__Concat_44577788(v13, v72, 0LL);
          ++i;
        }
      }
    }
  }
  return v13;
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
    sub_B5D69C(0LL, method);
  printedSize = UILabel__get_printedSize(messageLabel, 0LL);
  v5 = printedSize.fields.x + this->fields.addSize.fields.x;
  v6 = printedSize.fields.y + this->fields.addSize.fields.y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}