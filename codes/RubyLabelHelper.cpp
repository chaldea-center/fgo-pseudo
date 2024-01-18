void __fastcall RubyLabelHelper___ctor(
        RubyLabelHelper_o *this,
        UILabel_o *label,
        UnityEngine_GameObject_o *inputMainPrefab,
        UnityEngine_GameObject_o *inputRubyPrefab,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_bool__o *v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_bool__o *v45; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x23
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct UnityEngine_GameObject_o **p_mainPrefab; // x22
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct UnityEngine_GameObject_o **p_rubyPrefab; // x19
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  UnityEngine_Object_o *v86; // x20

  if ( (byte_418BB9F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_bool___ctor___67301528, label);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UILabel___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_UILabel__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_bool__TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    byte_418BB9F = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.mainTextList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mainTextList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rubyTextList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.textPositionYList = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.textPositionYList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_bool__o *)sub_B2C42C(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v38,
    (const MethodInfo_2F2DCD0 *)Method_System_Collections_Generic_List_bool___ctor___67301528);
  this->fields.rubyFlagList = v38;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rubyFlagList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_bool__o *)sub_B2C42C(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v45,
    (const MethodInfo_2F2DCD0 *)Method_System_Collections_Generic_List_bool___ctor___67301528);
  this->fields.rubyLineList = v45;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rubyLineList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v52;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mainList,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v59;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rubyList,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.messageLabel = label;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)label, v66, v67, v68, v69, v70, v71);
  this->fields.mainPrefab = inputMainPrefab;
  p_mainPrefab = &this->fields.mainPrefab;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mainPrefab,
    (System_Int32_array **)inputMainPrefab,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.rubyPrefab = inputRubyPrefab;
  p_rubyPrefab = &this->fields.rubyPrefab;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_rubyPrefab,
    (System_Int32_array **)inputRubyPrefab,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = (UnityEngine_Object_o *)*p_mainPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Inequality(v86, 0LL, 0LL);
  UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)*p_rubyPrefab, 0LL, 0LL);
}


System_String_o *__fastcall RubyLabelHelper__GetFormalText(
        RubyLabelHelper_o *this,
        System_String_o *labelText,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x22
  System_Collections_Generic_List_char__o *v12; // x21
  System_String_o *Chars; // x0
  __int64 v14; // x1
  int32_t v15; // w23
  char v16; // w19
  char v17; // w28
  char v18; // w26
  System_String_o *v19; // x24
  System_String_o *v20; // x1
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  struct UILabel_o *messageLabel; // x8
  RubyLabelHelper_o *v27; // [xsp+0h] [xbp-60h]
  __int16 v28[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418BBA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_char__Add__, labelText);
    sub_B2C35C(&Method_System_Collections_Generic_List_char___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_char__TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15637/*"[#"*/, v7);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v10);
    byte_418BBA4 = 1;
  }
  v28[0] = 0;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  v12 = (System_Collections_Generic_List_char__o *)sub_B2C42C(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v12,
    (const MethodInfo_2F33CE4 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_35;
  v27 = this;
  if ( labelText->fields.m_stringLength >= 1 )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = v11;
    while ( 1 )
    {
      v28[0] = System_String__get_Chars(labelText, v15, 0LL);
      v22 = System_Char__ToString((uint16_t)v28, 0LL);
      v11 = System_String__Concat_44305532(v11, v22, 0LL);
      if ( (v17 & 1) != 0 )
      {
        v28[0] = System_String__get_Chars(labelText, v15, 0LL);
        v23 = System_Char__ToString((uint16_t)v28, 0LL);
        v19 = System_String__Concat_44305532(v19, v23, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v15, 0LL);
      if ( !v12 )
        goto LABEL_35;
      System_Collections_Generic_List_char___Add(
        v12,
        (uint16_t)Chars,
        (const MethodInfo_2F34A40 *)Method_System_Collections_Generic_List_char__Add__);
      if ( System_String__get_Chars(labelText, v15, 0LL) == 91
        && System_String__get_Chars(labelText, v15 + 1, 0LL) == 35 )
      {
        break;
      }
      if ( (v16 & 1) == 0 )
      {
        v16 = 0;
        goto LABEL_27;
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v15, 0LL);
      v28[0] = (__int16)Chars;
      if ( (unsigned __int16)Chars == 93 )
      {
        if ( (v17 & 1) != 0 )
        {
          Chars = System_String__Concat_44305532((System_String_o *)StringLiteral_1225/*":"*/, v19, 0LL);
          if ( !v11 )
            goto LABEL_35;
          v20 = Chars;
        }
        else
        {
          if ( !v11 )
            goto LABEL_35;
          v20 = (System_String_o *)StringLiteral_15870/*"]"*/;
        }
        v21 = System_String__Replace_44312768(v11, v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v19 = (System_String_o *)StringLiteral_1/*""*/;
        v11 = v21;
        v16 = 0;
        v17 = 0;
        goto LABEL_27;
      }
      if ( (unsigned __int16)Chars != 58 )
      {
        if ( (unsigned __int16)Chars == 35 )
        {
          if ( !v11 )
            goto LABEL_35;
          v11 = System_String__Replace_44312768(
                  v11,
                  (System_String_o *)StringLiteral_15637/*"[#"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
        }
        goto LABEL_25;
      }
      v16 = 1;
      v17 = 1;
LABEL_27:
      if ( ++v15 >= labelText->fields.m_stringLength )
        goto LABEL_30;
    }
    v18 = 0;
LABEL_25:
    v16 = 1;
    goto LABEL_27;
  }
  v18 = 1;
LABEL_30:
  Chars = (System_String_o *)WrapControlText__textAdjust(v27->fields.messageLabel, v11, 22, 0, 0, 0LL);
  if ( (v18 & 1) != 0 )
  {
    messageLabel = v27->fields.messageLabel;
    if ( messageLabel )
      return messageLabel->fields.mText;
LABEL_35:
    sub_B2C434(Chars, v14);
  }
  return RubyLabelHelper__TextFormalAdjust(v27, (System_Collections_Generic_IReadOnlyList_char__o *)v12, v24);
}


void __fastcall RubyLabelHelper__ReleasePrefabs(RubyLabelHelper_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *rubyList; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20
  int v16; // w20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  int v18[2]; // [xsp+20h] [xbp-60h]
  int v19; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418BBA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UILabel__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UILabel__Clear__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UILabel__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418BBA0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v19 = 0;
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    rubyList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v20 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B2C434(0LL, v12);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v20.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  v18[0] = 56;
  v19 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  v19 = 0;
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mainList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    rubyList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v20 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B2C434(0LL, v14);
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)v20.fields.current,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v15, 0LL);
  }
  v18[0] = 112;
  v16 = ++v19;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  if ( v16 && v18[v16 - 1] == 112 )
    v19 = v16 - 1;
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mainTextList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyTextList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.textPositionYList;
  if ( !rubyList )
    goto LABEL_32;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)rubyList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyFlagList;
  if ( !rubyList
    || (System_Collections_Generic_List_bool___Clear(
          (System_Collections_Generic_List_bool__o *)rubyList,
          (const MethodInfo_2F2EE44 *)Method_System_Collections_Generic_List_bool__Clear__),
        (rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyLineList) == 0LL)
    || (System_Collections_Generic_List_bool___Clear(
          (System_Collections_Generic_List_bool__o *)rubyList,
          (const MethodInfo_2F2EE44 *)Method_System_Collections_Generic_List_bool__Clear__),
        (rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.mainList) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UILabel__Clear__),
        (rubyList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.rubyList) == 0LL) )
  {
LABEL_32:
    sub_B2C434(rubyList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)rubyList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UILabel__Clear__);
}


void __fastcall RubyLabelHelper__SetMainObject(RubyLabelHelper_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UIWidget_o *messageLabel; // x0
  int32_t rightAnchor; // w20
  float finalAlpha; // w22
  float v14; // s0
  float v15; // s8
  float v16; // s0
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  unsigned __int64 v18; // x24
  int32_t v19; // w26
  int32_t v20; // w21
  char v21; // w25
  float v22; // s8
  float v23; // s10
  float v24; // s12
  int v25; // w28
  float v26; // s11
  struct UnityEngine_GameObject_o *mainPrefab; // x22
  UnityEngine_Transform_o *Component_WebViewObject; // x23
  struct System_Collections_Generic_List_string__o *v29; // x23
  UILabel_o *v30; // x22
  struct UILabel_o *v31; // x8
  struct System_Collections_Generic_List_int__o *textPositionYList; // x23
  struct System_Int32_array *items; // x8
  struct System_Collections_Generic_List_bool__o *rubyLineList; // x23
  bool v35; // w8
  struct System_Collections_Generic_List_int__o *v36; // x26
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x23
  const MethodInfo *v38; // x4
  struct System_Collections_Generic_List_int__o *v39; // x23
  float v40; // s0
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418BBA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Transform___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UILabel__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418BBA2 = 1;
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
    || (v15 = v14,
        LODWORD(v16) = *(_QWORD *)&UIWidget__get_pivotOffset(messageLabel, 0LL),
        mainTextList = this->fields.mainTextList,
        this->fields.addSize.fields.x = 0.0,
        this->fields.addSize.fields.y = 0.0,
        !mainTextList) )
  {
LABEL_43:
    sub_B2C434(messageLabel, method);
  }
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = v15 * v16;
  v23 = (float)(((rightAnchor - 15) & ~((rightAnchor - 15) >> 31)) + 2 * LODWORD(finalAlpha));
  v24 = 0.0;
  v25 = -(LODWORD(finalAlpha) + rightAnchor);
  v26 = 0.0;
  while ( (__int64)v18 < mainTextList->fields._size )
  {
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    if ( messageLabel )
    {
      mainPrefab = this->fields.mainPrefab;
      Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             (UnityEngine_Component_o *)messageLabel,
                                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      messageLabel = (UIWidget_o *)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)mainPrefab,
                                     Component_WebViewObject,
                                     (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
      if ( messageLabel )
      {
        messageLabel = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)messageLabel,
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        v29 = this->fields.mainTextList;
        if ( v29 )
        {
          v30 = (UILabel_o *)messageLabel;
          if ( v18 >= (unsigned int)v29->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( messageLabel )
          {
            UILabel__set_text((UILabel_o *)messageLabel, v29->fields._items->m_Items[v18], 0LL);
            UILabel__set_fontSize(v30, rightAnchor, 0LL);
            v31 = this->fields.messageLabel;
            if ( v31 )
            {
              UIWidget__set_depth((UIWidget_o *)v30, v31->fields.mDepth, 0LL);
              textPositionYList = this->fields.textPositionYList;
              if ( textPositionYList )
              {
                if ( v18 >= (unsigned int)textPositionYList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                items = textPositionYList->fields._items;
                rubyLineList = this->fields.rubyLineList;
                v35 = v19 == items->m_Items[v18 + 1];
                if ( !v35 )
                  v24 = 0.0;
                if ( rubyLineList )
                {
                  v21 &= v35;
                  if ( v18 >= (unsigned int)rubyLineList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                  if ( !(v21 & 1 | !rubyLineList->fields._items->m_Items[v18 + 4]) )
                  {
                    v26 = v26 + v23;
                    v21 = 1;
                    this->fields.addSize.fields.y = v26;
                  }
                  messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0LL);
                  v36 = this->fields.textPositionYList;
                  if ( v36 )
                  {
                    if ( v18 >= (unsigned int)v36->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                    if ( messageLabel )
                    {
                      v41.fields.z = 0.0;
                      v41.fields.y = (float)(v36->fields._items->m_Items[v18 + 1] * v25) - v26;
                      v41.fields.x = v24 - v22;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v41, 0LL);
                      rubyFlagList = this->fields.rubyFlagList;
                      if ( rubyFlagList )
                      {
                        if ( v18 >= (unsigned int)rubyFlagList->fields._size )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                        if ( rubyFlagList->fields._items->m_Items[v18 + 4] )
                        {
                          messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v30,
                                                         0LL);
                          if ( !messageLabel )
                            goto LABEL_43;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)messageLabel,
                                            0LL);
                          RubyLabelHelper__SetRubyObject(this, v20++, localPosition, rightAnchor, v30, v38);
                        }
                        v39 = this->fields.textPositionYList;
                        if ( v39 )
                        {
                          if ( v18 >= (unsigned int)v39->fields._size )
                            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                          v19 = v39->fields._items->m_Items[v18 + 1];
                          LODWORD(v40) = *(_QWORD *)&UILabel__get_printedSize(v30, 0LL);
                          messageLabel = (UIWidget_o *)this->fields.mainList;
                          if ( messageLabel )
                          {
                            v24 = v24 + v40;
                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabel,
                              (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UILabel__Add__);
                            mainTextList = this->fields.mainTextList;
                            ++v18;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Component_o *messageLabel; // x0
  struct UnityEngine_GameObject_o *rubyPrefab; // x21
  UnityEngine_Transform_o *Component_WebViewObject; // x24
  UILabel_o *v23; // x21
  float v24; // s0
  struct System_Collections_Generic_List_string__o *rubyTextList; // x24
  double v26; // d13
  struct System_String_o *mText; // x8
  int v28; // w26
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v29; // x24
  System_String_o *v30; // x0
  int32_t v31; // w8
  int v32; // w23
  int32_t v33; // w8
  struct System_Collections_Generic_List_string__o *v34; // x24
  struct UILabel_o *v35; // x8
  float v36; // s10
  float v37; // s11
  float v38; // s0
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_418BBA3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Transform___, *(_QWORD *)&idx);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UILabel__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__set_Item__, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_23841/*"・"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    byte_418BBA3 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_44;
  rubyPrefab = this->fields.rubyPrefab;
  Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         messageLabel,
                                                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              (UILabel_o *)rubyPrefab,
                                              Component_WebViewObject,
                                              (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
  if ( !messageLabel )
    goto LABEL_44;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)messageLabel,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !mainLabel )
    goto LABEL_44;
  v23 = (UILabel_o *)messageLabel;
  v24 = UILabel__get_printedSize(mainLabel, 0LL).fields.x;
  rubyTextList = this->fields.rubyTextList;
  v26 = v24 == INFINITY ? -v24 : v24;
  if ( !rubyTextList )
    goto LABEL_44;
  if ( rubyTextList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  messageLabel = (UnityEngine_Component_o *)System_String__op_Equality(
                                              rubyTextList->fields._items->m_Items[idx],
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    mText = mainLabel->fields.mText;
    if ( mText )
    {
      v28 = -1;
      while ( ++v28 < mText->fields.m_stringLength )
      {
        v29 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.rubyTextList;
        if ( v29 )
        {
          if ( v29->fields._size <= (unsigned int)idx )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v30 = System_String__Concat_44305532(
                  (System_String_o *)v29->fields._items->m_Items[idx],
                  (System_String_o *)StringLiteral_23841/*"・"*/,
                  0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            v29,
            idx,
            (WarBoardManager_TaskList_o *)v30,
            (const MethodInfo_2EF41B8 *)Method_System_Collections_Generic_List_string__set_Item__);
          mText = mainLabel->fields.mText;
          if ( mText )
            continue;
        }
        goto LABEL_44;
      }
      if ( v23 )
      {
        UILabel__set_fontSize(v23, fontSize, 0LL);
        if ( fontSize >= 0 )
          v33 = fontSize;
        else
          v33 = fontSize + 1;
        v32 = (v33 >> 1) + 5;
        goto LABEL_34;
      }
    }
LABEL_44:
    sub_B2C434(messageLabel, *(_QWORD *)&idx);
  }
  if ( !v23 )
    goto LABEL_44;
  if ( fontSize >= 0 )
    v31 = fontSize;
  else
    v31 = fontSize + 1;
  UILabel__set_fontSize(v23, v31 >> 1, 0LL);
  v32 = v23->fields.mFontSize + 1;
LABEL_34:
  v34 = this->fields.rubyTextList;
  if ( !v34 )
    goto LABEL_44;
  if ( v34->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  UILabel__set_text(v23, v34->fields._items->m_Items[idx], 0LL);
  v35 = this->fields.messageLabel;
  if ( !v35 )
    goto LABEL_44;
  UIWidget__set_depth((UIWidget_o *)v23, v35->fields.mDepth, 0LL);
  LODWORD(v36) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0LL);
  LODWORD(v37) = *(_QWORD *)&UILabel__get_printedSize(v23, 0LL);
  v38 = UILabel__get_printedSize(v23, 0LL).fields.x;
  if ( v38 <= UILabel__get_printedSize(mainLabel, 0LL).fields.x )
    x = x + (float)((float)(v36 - v37) * 0.5);
  else
    UILabel__SetCondensedScale(v23, (int)v26, 0LL);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v23, 0LL);
  if ( !messageLabel )
    goto LABEL_44;
  v39.fields.y = y + (float)v32;
  v39.fields.z = 0.0;
  v39.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v39, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyList;
  if ( !messageLabel )
    goto LABEL_44;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabel,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UILabel__Add__);
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
      sub_B2C434(0LL, v9);
    UnityEngine_Behaviour__set_enabled(messageLabel, 0, 0LL);
  }
}


void __fastcall RubyLabelHelper__SetTextObjectList(
        RubyLabelHelper_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x22
  System_Char_array *mainTextList; // x0
  System_Char_array *v11; // x1
  int max_length; // w8
  char v13; // w20
  int32_t v14; // w21
  System_String_o *v15; // x25
  System_String_o *v16; // x23
  bool continueRuby; // w26
  int32_t v18; // w24
  bool v19; // w28
  uint16_t Chars; // w0
  System_String_o *v21; // x1
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v25; // x0
  System_Char_array *v26; // [xsp+0h] [xbp-60h]
  __int16 v27[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418BBA1 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, message);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418BBA1 = 1;
  }
  v27[0] = 0;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  this->fields.notRubyFlag = 1;
  this->fields.continueRuby = 0;
  mainTextList = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !mainTextList )
    goto LABEL_57;
  v11 = mainTextList;
  if ( !mainTextList->max_length )
  {
LABEL_58:
    v25 = sub_B2C460(mainTextList);
    sub_B2C400(v25, 0LL);
  }
  mainTextList->m_Items[2] = 10;
  if ( !message || (mainTextList = (System_Char_array *)System_String__Split(message, mainTextList, 0LL)) == 0LL )
LABEL_57:
    sub_B2C434(mainTextList, v11);
  max_length = mainTextList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    v14 = 0;
    v15 = v9;
    v26 = mainTextList;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        goto LABEL_58;
      v16 = *(System_String_o **)&mainTextList->m_Items[4 * v14 + 2];
      continueRuby = this->fields.continueRuby;
      if ( !v16 )
        goto LABEL_57;
      if ( v16->fields.m_stringLength >= 1 )
        break;
      v19 = this->fields.continueRuby;
LABEL_46:
      if ( System_String__op_Inequality(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
      {
        mainTextList = (System_Char_array *)this->fields.mainTextList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        mainTextList = (System_Char_array *)this->fields.rubyFlagList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_bool___Add(
          (System_Collections_Generic_List_bool__o *)mainTextList,
          continueRuby,
          (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
        mainTextList = (System_Char_array *)this->fields.rubyLineList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_bool___Add(
          (System_Collections_Generic_List_bool__o *)mainTextList,
          v19,
          (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
        mainTextList = (System_Char_array *)this->fields.textPositionYList;
        if ( !mainTextList )
          goto LABEL_57;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)mainTextList,
          v14,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v19 )
        {
          mainTextList = (System_Char_array *)this->fields.rubyTextList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        }
        v15 = (System_String_o *)StringLiteral_1/*""*/;
      }
      mainTextList = v26;
      ++v14;
      max_length = v26->max_length;
      if ( v14 >= max_length )
        return;
    }
    v18 = 1;
    v19 = this->fields.continueRuby;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v16, v18 - 1, 0LL);
      v27[0] = Chars;
      if ( Chars <= 0x5Au )
        break;
      if ( Chars == 91 )
      {
        if ( System_String__get_Chars(v16, v18, 0LL) != 35 )
        {
          v23 = System_Char__ToString((uint16_t)v27, 0LL);
          v15 = System_String__Concat_44305532(v15, v23, 0LL);
          goto LABEL_43;
        }
        this->fields.continueRuby = 1;
        if ( System_String__op_Inequality(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        {
          mainTextList = (System_Char_array *)this->fields.mainTextList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          mainTextList = (System_Char_array *)this->fields.rubyFlagList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_bool___Add(
            (System_Collections_Generic_List_bool__o *)mainTextList,
            continueRuby,
            (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
          mainTextList = (System_Char_array *)this->fields.rubyLineList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_bool___Add(
            (System_Collections_Generic_List_bool__o *)mainTextList,
            1,
            (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
          mainTextList = (System_Char_array *)this->fields.textPositionYList;
          if ( !mainTextList )
            goto LABEL_57;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)mainTextList,
            v14,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          v15 = (System_String_o *)StringLiteral_1/*""*/;
        }
        this->fields.notRubyFlag = 0;
        continueRuby = 1;
LABEL_40:
        v19 = 1;
        goto LABEL_43;
      }
      if ( Chars != 93 )
        goto LABEL_27;
      if ( !v19 )
        goto LABEL_31;
      mainTextList = (System_Char_array *)this->fields.mainTextList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      mainTextList = (System_Char_array *)this->fields.rubyTextList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mainTextList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      mainTextList = (System_Char_array *)this->fields.rubyFlagList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_bool___Add(
        (System_Collections_Generic_List_bool__o *)mainTextList,
        continueRuby,
        (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
      mainTextList = (System_Char_array *)this->fields.rubyLineList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_bool___Add(
        (System_Collections_Generic_List_bool__o *)mainTextList,
        1,
        (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
      mainTextList = (System_Char_array *)this->fields.textPositionYList;
      if ( !mainTextList )
        goto LABEL_57;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)mainTextList,
        v14,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      continueRuby = 0;
      v19 = 0;
      v13 = 0;
      v9 = (System_String_o *)StringLiteral_1/*""*/;
      this->fields.continueRuby = 0;
      v15 = v9;
LABEL_43:
      if ( v18++ >= v16->fields.m_stringLength )
        goto LABEL_46;
    }
    if ( Chars == 35 )
    {
      if ( v19 )
        goto LABEL_40;
LABEL_31:
      v22 = System_Char__ToString((uint16_t)v27, 0LL);
      v15 = System_String__Concat_44305532(v15, v22, 0LL);
      v19 = 0;
      goto LABEL_43;
    }
    if ( Chars == 58 )
    {
      if ( !v19 )
        goto LABEL_31;
      v19 = 1;
    }
    else
    {
LABEL_27:
      v21 = System_Char__ToString((uint16_t)v27, 0LL);
      if ( (v13 & 1) == 0 )
      {
        v15 = System_String__Concat_44305532(v15, v21, 0LL);
        v13 = 0;
        goto LABEL_43;
      }
      v9 = System_String__Concat_44305532(v9, v21, 0LL);
    }
    v13 = 1;
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
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w21
  System_String_o *v9; // x22
  unsigned int i; // w23
  System_Collections_Generic_IReadOnlyList_char__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IReadOnlyList_char__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  struct UILabel_o *messageLabel; // x8
  unsigned __int16 v21; // w24
  uint16_t Chars; // w0
  __int64 v23; // x3
  System_Collections_Generic_IReadOnlyList_char__c *v24; // x8
  uint16_t v25; // w25
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  System_String_o *v30; // x0
  struct UILabel_o *v31; // x8
  struct System_String_o *mText; // x9
  System_Collections_Generic_IReadOnlyList_char__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x3
  unsigned int v42; // w24
  System_Collections_Generic_IReadOnlyList_char__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  System_String_o *v47; // x0
  struct UILabel_o *v48; // x8
  unsigned __int16 v49; // w26
  __int64 v50; // x3
  struct UILabel_o *v51; // x8
  System_String_o *v52; // x0
  struct UILabel_o *v53; // x8
  struct System_String_o *v54; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x3
  struct UILabel_o *v60; // x8
  System_String_o *v61; // x0
  struct UILabel_o *v62; // x8
  struct System_String_o *v63; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  System_String_o *v68; // x0
  __int16 v70[2]; // [xsp+Ch] [xbp-54h] BYREF

  v5 = this;
  if ( (byte_418BBA5 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, localMainTextList);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyList_char__TypeInfo, v6);
    this = (RubyLabelHelper_o *)sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418BBA5 = 1;
  }
  v70[0] = 0;
  if ( !localMainTextList )
LABEL_88:
    sub_B2C434(this, localMainTextList);
  v8 = 0;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  for ( i = 0; ; ++i )
  {
    klass = localMainTextList->klass;
    if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL, v3);
    }
    if ( (int)i >= (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))p_method)(
                     localMainTextList,
                     *(_QWORD *)(p_method + 8)) )
      break;
    v16 = localMainTextList->klass;
    if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v18 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AC5258(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v15);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v19)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v19 + 8));
    messageLabel = v5->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_88;
    v21 = (unsigned __int16)this;
    this = (RubyLabelHelper_o *)messageLabel->fields.mText;
    if ( !this )
      goto LABEL_88;
    Chars = System_String__get_Chars((System_String_o *)this, v8, 0LL);
    v24 = localMainTextList->klass;
    v25 = Chars;
    if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v27 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      v28 = (__int64)&v24->vtable[*v27].method;
    }
    else
    {
LABEL_24:
      v28 = sub_AC5258(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v23);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v28)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v28 + 8));
    if ( v21 == v25 )
    {
      v70[0] = (__int16)this;
      v30 = System_Char__ToString((uint16_t)v70, 0LL);
      this = (RubyLabelHelper_o *)System_String__Concat_44305532(v9, v30, 0LL);
      v31 = v5->fields.messageLabel;
      if ( !v31 )
        goto LABEL_88;
      mText = v31->fields.mText;
      if ( !mText )
        goto LABEL_88;
      v9 = (System_String_o *)this;
      if ( v8 < mText->fields.m_stringLength - 1 )
        ++v8;
    }
    else
    {
      if ( (unsigned __int16)this != 10 )
      {
        v37 = localMainTextList->klass;
        if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
        {
          v38 = 0LL;
          v39 = &v37->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v39 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            ++v38;
            v39 += 4;
            if ( v38 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
              goto LABEL_45;
          }
          v40 = (__int64)&v37->vtable[*v39].method;
        }
        else
        {
LABEL_45:
          v40 = sub_AC5258(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v29);
        }
        v70[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v40)(
                   localMainTextList,
                   i,
                   *(_QWORD *)(v40 + 8));
        v47 = System_Char__ToString((uint16_t)v70, 0LL);
        v9 = System_String__Concat_44305532(v9, v47, 0LL);
        continue;
      }
      v31 = v5->fields.messageLabel;
      if ( !v31 )
        goto LABEL_88;
    }
    this = (RubyLabelHelper_o *)v31->fields.mText;
    if ( !this )
      goto LABEL_88;
    if ( System_String__get_Chars((System_String_o *)this, v8, 0LL) == 10 )
    {
      v33 = localMainTextList->klass;
      if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
      {
        v34 = 0LL;
        v35 = &v33->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)v35 - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
        {
          ++v34;
          v35 += 4;
          if ( v34 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
            goto LABEL_40;
        }
        v36 = (__int64)&v33->vtable[*v35].method;
      }
      else
      {
LABEL_40:
        v36 = sub_AC5258(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL, v3);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v36)(
                                    localMainTextList,
                                    *(_QWORD *)(v36 + 8));
      v42 = i + 1;
      if ( (int)(i + 1) >= (int)this )
        goto LABEL_59;
      v43 = localMainTextList->klass;
      if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        v45 = &v43->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v45 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
            goto LABEL_52;
        }
        v46 = (__int64)&v43->vtable[*v45].method;
      }
      else
      {
LABEL_52:
        v46 = sub_AC5258(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v41);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v46)(
                                    localMainTextList,
                                    v42,
                                    *(_QWORD *)(v46 + 8));
      v48 = v5->fields.messageLabel;
      if ( !v48 )
        goto LABEL_88;
      v49 = (unsigned __int16)this;
      this = (RubyLabelHelper_o *)v48->fields.mText;
      if ( !this )
        goto LABEL_88;
      this = (RubyLabelHelper_o *)System_String__get_Chars((System_String_o *)this, v8 + 1, 0LL);
      if ( v49 == (unsigned __int16)this )
      {
LABEL_59:
        v51 = v5->fields.messageLabel;
        if ( !v51 )
          goto LABEL_88;
        this = (RubyLabelHelper_o *)v51->fields.mText;
        if ( !this )
          goto LABEL_88;
        v70[0] = System_String__get_Chars((System_String_o *)this, v8, 0LL);
        v52 = System_Char__ToString((uint16_t)v70, 0LL);
        this = (RubyLabelHelper_o *)System_String__Concat_44305532(v9, v52, 0LL);
        v53 = v5->fields.messageLabel;
        if ( !v53 )
          goto LABEL_88;
        v54 = v53->fields.mText;
        if ( !v54 )
          goto LABEL_88;
        v9 = (System_String_o *)this;
        if ( v8 < v54->fields.m_stringLength - 1 )
          ++v8;
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
              goto LABEL_70;
          }
          v58 = (__int64)&v55->vtable[*v57].method;
        }
        else
        {
LABEL_70:
          v58 = sub_AC5258(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v50);
        }
        this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v58)(
                                      localMainTextList,
                                      v42,
                                      *(_QWORD *)(v58 + 8));
        if ( (unsigned __int16)this == 10 )
        {
          v60 = v5->fields.messageLabel;
          if ( !v60 )
            goto LABEL_88;
          this = (RubyLabelHelper_o *)v60->fields.mText;
          if ( !this )
            goto LABEL_88;
          v70[0] = System_String__get_Chars((System_String_o *)this, v8, 0LL);
          v61 = System_Char__ToString((uint16_t)v70, 0LL);
          this = (RubyLabelHelper_o *)System_String__Concat_44305532(v9, v61, 0LL);
          v62 = v5->fields.messageLabel;
          if ( !v62 )
            goto LABEL_88;
          v63 = v62->fields.mText;
          if ( !v63 )
            goto LABEL_88;
          v9 = (System_String_o *)this;
          if ( v8 < v63->fields.m_stringLength - 1 )
            ++v8;
        }
        else
        {
          v64 = localMainTextList->klass;
          if ( *(_WORD *)&localMainTextList->klass->_2.bitflags1 )
          {
            v65 = 0LL;
            v66 = &v64->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v66 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
            {
              ++v65;
              v66 += 4;
              if ( v65 >= *(unsigned __int16 *)&localMainTextList->klass->_2.bitflags1 )
                goto LABEL_84;
            }
            v67 = (__int64)&v64->vtable[*v66].method;
          }
          else
          {
LABEL_84:
            v67 = sub_AC5258(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL, v59);
          }
          v70[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v67)(
                     localMainTextList,
                     v42,
                     *(_QWORD *)(v67 + 8));
          v68 = System_Char__ToString((uint16_t)v70, 0LL);
          v9 = System_String__Concat_44305532(v9, v68, 0LL);
          ++i;
        }
      }
    }
  }
  return v9;
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
    sub_B2C434(0LL, method);
  printedSize = UILabel__get_printedSize(messageLabel, 0LL);
  v5 = printedSize.fields.x + this->fields.addSize.fields.x;
  v6 = printedSize.fields.y + this->fields.addSize.fields.y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}