void __fastcall ScriptLineMessage___ctor(ScriptLineMessage_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v35; // x20
  __int64 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20

  if ( (byte_42E4B8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20719/*"medium"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_22471/*"small"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_20433/*"large"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_23661/*"x-large"*/, v32, v33, v34);
    byte_42E4B8D = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v35 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v35,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v35 )
    sub_B5D69C(v36, v37);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v35,
    (UIPanel_o *)StringLiteral_755/*"-"*/,
    30,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v35,
    (UIPanel_o *)StringLiteral_22471/*"small"*/,
    24,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v35,
    (UIPanel_o *)StringLiteral_20719/*"medium"*/,
    30,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v35,
    (UIPanel_o *)StringLiteral_20433/*"large"*/,
    48,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v35,
    (UIPanel_o *)StringLiteral_23661/*"x-large"*/,
    64,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v35;
  sub_B5D560(&this->fields.fontSizes);
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.defaultColorTag);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v38;
  sub_B5D560(&this->fields.dispLabelList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage__AddLabel(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 Label; // x0
  const MethodInfo *v20; // x1
  ScriptMessageLabel_o *v21; // x20
  __int64 v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  System_String_o *v26; // x23
  __int64 v27; // x23
  int v28; // w8
  int32_t fontSize; // w4
  System_String_o *v30; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v32; // x1
  System_String_o *v33; // x23
  int v34; // w8
  __int64 v35; // x24
  System_String_o *v36; // x23
  float v37; // s0
  int v38; // w8
  float v39; // s8
  System_String_o *v40; // x0
  int32_t v41; // w22
  int32_t v42; // w0
  UnityEngine_Object_o *messageOffset; // x21
  UnityEngine_Transform_o *transform; // x21
  int v45; // s0
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v49; // x21
  float v50; // s0
  int v51; // w8
  __int64 v52; // x23
  System_String_o *v53; // x21
  __int64 v54; // x21
  int v55; // w24
  int32_t v56; // w0
  __int64 v57; // x0
  UnityEngine_Vector2_o v58; // 0:s1.4,4:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E4B86 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)text, (_DWORD)colorTag, isFoward);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_20484/*"line"*/, v16, v17, v18);
    byte_42E4B86 = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_60;
  v21 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v22 = Label + 112;
  *(_DWORD *)(v22 + 52) = 0;
  Label = sub_B5D560(v22);
  if ( !text )
    goto LABEL_60;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
  {
LABEL_26:
    v21->fields.main = ScriptLineMessage__FetchMainLabel(this, v23);
    sub_B5D560(&v21->fields);
    ScriptMessageLabel__UpdateLabel(
      v21,
      &v21->fields.main,
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.fontSize,
      0,
      text,
      font,
      0LL);
    goto LABEL_27;
  }
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    v21->fields.main = ScriptLineMessage__FetchMainLabel(this, v24);
    sub_B5D560(&v21->fields);
    v21->fields.ruby = ScriptLineMessage__FetchRubyLabel(this, v25);
    sub_B5D560(&v21->fields.ruby);
    v26 = System_String__Substring_44641524(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_60;
    v20 = (const MethodInfo *)Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v26 )
        goto LABEL_60;
      Label = (__int64)System_String__Split(v26, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_60;
      v27 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_PreProcSetRubyLabel.method)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._7_SetText.methodPtr);
        v28 = *(_DWORD *)(v27 + 24);
        if ( v28 )
        {
          fontSize = this->fields.fontSize;
          v30 = *(System_String_o **)(v27 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v28 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              v21,
              &v21->fields.main,
              &v21->fields.ruby,
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v30,
              font,
              0LL);
          else
            ScriptMessageLabel__UpdateRuby(
              v21,
              &v21->fields.main,
              &v21->fields.ruby,
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v30,
              *(System_String_o **)(v27 + 40),
              font,
              this->fields.isTalkName,
              0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_61:
    v57 = sub_B5D6C8(Label);
    sub_B5D668(v57, 0LL);
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0LL) == 126 )
    {
      v21->fields.image = ScriptLineMessage__FetchImageSprite(this, v23);
      sub_B5D560(&v21->fields.image);
      v40 = System_String__Substring_44641524(text, 2, text->fields.m_stringLength - 3, 0LL);
      v41 = this->fields.fontSize;
      v42 = System_Int32__Parse(v40, 0LL);
      ScriptMessageLabel__UpdateLine(
        v21,
        &v21->fields.image,
        &this->fields.dispPosition,
        v41,
        v42,
        (System_String_o *)StringLiteral_20484/*"line"*/,
        0LL);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  v21->fields.image = ScriptLineMessage__FetchImageSprite(this, v32);
  sub_B5D560(&v21->fields.image);
  v33 = System_String__Substring_44641524(text, 2, text->fields.m_stringLength - 3, 0LL);
  Label = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_60;
  v20 = (const MethodInfo *)Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_61;
  *(_WORD *)(Label + 32) = 32;
  if ( !v33 )
    goto LABEL_60;
  Label = (__int64)System_String__Split(v33, (System_Char_array *)Label, 0LL);
  if ( !Label )
    goto LABEL_60;
  v34 = *(_DWORD *)(Label + 24);
  v35 = Label;
  if ( !v34 )
    goto LABEL_61;
  v36 = *(System_String_o **)(Label + 32);
  if ( v34 <= 1 )
  {
    Label = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_60;
    v20 = (const MethodInfo *)Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_61;
    *(_WORD *)(Label + 32) = 58;
    if ( !v36 )
      goto LABEL_60;
    Label = (__int64)System_String__Split(v36, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_60;
    v51 = *(_DWORD *)(Label + 24);
    v52 = Label;
    if ( v51 <= 1 )
    {
      if ( !v51 )
        goto LABEL_61;
      ScriptMessageLabel__UpdateImage(
        v21,
        &v21->fields.image,
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        0LL);
    }
    else
    {
      v21->fields.ruby = ScriptLineMessage__FetchRubyLabel(this, v20);
      Label = sub_B5D560(&v21->fields.ruby);
      if ( *(_DWORD *)(v52 + 24) < 2u )
        goto LABEL_61;
      ScriptMessageLabel__UpdateImageRuby(
        v21,
        &v21->fields.image,
        &v21->fields.ruby,
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(v52 + 32),
        *(System_String_o **)(v52 + 40),
        font,
        0,
        0LL);
    }
  }
  else
  {
    v37 = System_Single__Parse(*(System_String_o **)(Label + 40), 0LL);
    v38 = *(_DWORD *)(v35 + 24);
    v39 = v37;
    if ( v38 == 2 )
    {
      ScriptMessageLabel__UpdateImage_34902708(
        v21,
        &v21->fields.image,
        &this->fields.dispPosition,
        this->fields.fontSize,
        v37,
        v36,
        0,
        0LL);
    }
    else if ( v38 <= 3 )
    {
      if ( (unsigned int)v38 <= 2 )
        goto LABEL_61;
      v53 = *(System_String_o **)(v35 + 48);
      Label = sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_60;
      v20 = (const MethodInfo *)Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_61;
      *(_WORD *)(Label + 32) = 44;
      if ( !v53 )
        goto LABEL_60;
      Label = (__int64)System_String__Split(v53, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_60;
      v54 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_61;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v54 + 24) <= 1u )
        goto LABEL_61;
      v55 = Label;
      v56 = System_Int32__Parse(*(System_String_o **)(v54 + 40), 0LL);
      v58.fields.x = (float)v55;
      v58.fields.y = (float)v56;
      ScriptMessageLabel__UpdateImage_34902836(
        v21,
        &v21->fields.image,
        &this->fields.dispPosition,
        this->fields.fontSize,
        v39,
        v36,
        v58,
        0,
        0LL);
    }
  }
LABEL_27:
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
  {
    Label = (__int64)this->fields.messageOffset;
    if ( !Label )
      goto LABEL_60;
    v59.fields.z = 0.0;
    v59.fields.x = (float)(this->fields.startPosition.fields.x - this->fields.dispPosition.fields.x) * 0.5;
    v59.fields.y = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Label, v59, 0LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_60;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v45, 0LL);
    if ( this->fields.isCondensedScale )
    {
      Label = (__int64)this->fields.messageOffset;
      if ( !Label )
        goto LABEL_60;
      if ( fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Label, 0LL))) >= (float)this->fields.condensedSize )
      {
        Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( this->fields.messageOffset )
        {
          condensedSize = this->fields.condensedSize;
          v49 = (UnityEngine_Transform_o *)Label;
          LODWORD(v50) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0LL);
          if ( v49 )
          {
            v60.fields.x = (float)condensedSize / fabsf(v50);
            v60.fields.y = 1.0;
            v60.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v49, v60, 0LL);
            goto LABEL_39;
          }
        }
LABEL_60:
        sub_B5D69C(Label, v20);
      }
    }
  }
LABEL_39:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_60;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Label,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
}


void __fastcall ScriptLineMessage__AfterParseEachChar(
        ScriptLineMessage_o *this,
        System_Text_StringBuilder_o *tempTxt,
        ScriptLineMessage_ProcAddLabel_o *addLabel,
        const MethodInfo *method)
{
  ;
}


void __fastcall ScriptLineMessage__ChangeMainPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  this->fields.mainPrefab = prefab;
  sub_B5D560(&this->fields.mainPrefab);
}


void __fastcall ScriptLineMessage__ChangeMessageRoot(
        ScriptLineMessage_o *this,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  this->fields.messageRoot = root;
  sub_B5D560(&this->fields.messageRoot);
}


void __fastcall ScriptLineMessage__ChangeRubyPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  this->fields.rubyPrefab = prefab;
  sub_B5D560(&this->fields.rubyPrefab);
}


void __fastcall ScriptLineMessage__ClearLabels(ScriptLineMessage_o *this, const MethodInfo *method)
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
  __int64 v17; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x0
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E4B80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v14, v15, v16);
    byte_42E4B80 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ScriptLineMessage__Init(this, method);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_9;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dispLabelList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v20.fields.current, v19);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_9:
    sub_B5D69C(dispLabelList, v17);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)dispLabelList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage__ClearText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float x; // w8
  float y; // s1
  float v7; // s0
  UnityEngine_Object_o *messageOffset; // x20
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // s0

  if ( (byte_42E4B8B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B8B = 1;
  }
  ScriptLineMessage__ClearLabels(this, method);
  x = this->fields.startPosition.fields.x;
  y = this->fields.startPosition.fields.y;
  v7 = y - this->fields.textOnlyLineHeight;
  this->fields.dispPosition.fields.x = x;
  this->fields.dispPosition.fields.y = y;
  this->fields.maxDispPosition.fields.x = x;
  this->fields.maxDispPosition.fields.y = v7;
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
  {
    v10 = this->fields.messageOffset;
    *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v10 )
      sub_B5D69C(v11, v12);
    UnityEngine_Transform__set_localPosition(v10, *(UnityEngine_Vector3_o *)&v13, 0LL);
  }
  ScriptLineMessage__SetDefaultState(this, v9);
}


void __fastcall ScriptLineMessage__DeleteLabels(ScriptLineMessage_o *this, const MethodInfo *method)
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
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Object_o *v28; // x20

  if ( (byte_42E4B7E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v20, v21, v22);
    byte_42E4B7E = 1;
  }
  ScriptLineMessage__Init(this, method);
  ScriptLineMessage__ClearLabels(this, v23);
  if ( this->fields.isRecycle )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
    if ( !labelStock )
      goto LABEL_31;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
      if ( labelStock )
      {
        ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, 0LL);
        labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_31;
    }
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.mainStock;
    if ( !labelStock )
      goto LABEL_31;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( labelStock )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)labelStock,
                                               0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
        labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.mainStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_31;
    }
    while ( 1 )
    {
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.rubyStock;
      if ( !labelStock )
        goto LABEL_31;
      if ( labelStock->fields._size <= 0 )
        break;
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_31;
      v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v27, 0LL);
    }
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_31:
      sub_B5D69C(labelStock, v24);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v28, 0LL);
        labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_31;
    }
  }
}


void __fastcall ScriptLineMessage__EffectScale(ScriptLineMessage_o *this, float s, float d, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v7; // 0:s1.4,4:s2.4,8:s3.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7.fields.z = 1.0;
  v7.fields.x = s;
  v7.fields.y = s;
  TweenScale__Begin(gameObject, d, v7, 0LL);
}


void __fastcall ScriptLineMessage__Fadeout(ScriptLineMessage_o *this, float d, const MethodInfo *method)
{
  UnityEngine_Component_o *messageRoot; // x0
  UnityEngine_Transform_o *v5; // x19
  int32_t childCount; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  UnityEngine_GameObject_o *gameObject; // x0

  messageRoot = (UnityEngine_Component_o *)this->fields.messageRoot;
  if ( !messageRoot )
    goto LABEL_8;
  messageRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageRoot, 0LL);
  if ( !messageRoot )
    goto LABEL_8;
  v5 = (UnityEngine_Transform_o *)messageRoot;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)messageRoot, 0LL);
  if ( childCount >= 1 )
  {
    v7 = childCount;
    v8 = 0;
    while ( 1 )
    {
      messageRoot = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v5, v8, 0LL);
      if ( !messageRoot )
        break;
      gameObject = UnityEngine_Component__get_gameObject(messageRoot, 0LL);
      TweenAlpha__Begin(gameObject, d, 0.0, 0LL);
      if ( ++v8 >= v7 )
        return;
    }
LABEL_8:
    sub_B5D69C(messageRoot, method);
  }
}


// local variable allocation has failed, the output may be wrong!
UISprite_o *__fastcall ScriptLineMessage__FetchImageSprite(ScriptLineMessage_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *imageStock; // x0
  void *Component_srcLineSprite; // x0
  __int64 v22; // x1
  UnityEngine_Component_o *v23; // x20
  struct UnityEngine_GameObject_o *imagePrefab; // x20
  UnityEngine_GameObject_o *v25; // x21
  UnityEngine_GameObject_o *v26; // x22
  int v27; // w8
  void *v28; // x21
  unsigned int v29; // w22
  UnityEngine_Transform_o *transform; // x19
  int v31; // s0
  UnityEngine_Transform_o *v34; // x19
  int v35; // s0
  __int64 v39; // x0

  if ( (byte_42E4B83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v17, v18, v19);
    byte_42E4B83 = 1;
  }
  imageStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
  if ( !imageStock || imageStock->fields._size < 1 )
  {
    imagePrefab = this->fields.imagePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                (UnityEngine_UI_Dropdown_DropdownItem_o *)imagePrefab,
                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_srcLineSprite )
    {
      v25 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_srcLineSprite )
      {
        v23 = (UnityEngine_Component_o *)Component_srcLineSprite;
        Component_srcLineSprite = UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)Component_srcLineSprite,
                                    0LL);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)Component_srcLineSprite,
            this->fields.messageRoot,
            0LL);
          Component_srcLineSprite = UnityEngine_Component__get_gameObject(v23, 0LL);
          if ( this->fields.messageRoot )
          {
            v26 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
            Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.messageRoot,
                                        0LL);
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (void *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                  0LL);
              if ( v26 )
              {
                UnityEngine_GameObject__set_layer(v26, (int32_t)Component_srcLineSprite, 0LL);
                Component_srcLineSprite = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                            v25,
                                            (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_srcLineSprite )
                {
                  v27 = *((_DWORD *)Component_srcLineSprite + 6);
                  v28 = Component_srcLineSprite;
                  if ( v27 < 1 )
                    goto LABEL_22;
                  v29 = 0;
                  while ( 1 )
                  {
                    if ( v29 >= v27 )
                    {
                      v39 = sub_B5D6C8(Component_srcLineSprite);
                      sub_B5D668(v39, 0LL);
                    }
                    Component_srcLineSprite = (void *)*((_QWORD *)v28 + (int)v29 + 4);
                    if ( !Component_srcLineSprite )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_srcLineSprite,
                      this->fields.depthOffset + *((_DWORD *)Component_srcLineSprite + 42),
                      0LL);
                    v27 = *((_DWORD *)v28 + 6);
                    if ( (int)++v29 >= v27 )
                      goto LABEL_22;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(Component_srcLineSprite, v22);
  }
  Component_srcLineSprite = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                              imageStock,
                              (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v23 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_25;
LABEL_22:
  transform = UnityEngine_Component__get_transform(v23, 0LL);
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  v34 = UnityEngine_Component__get_transform(v23, 0LL);
  *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_one(0LL);
  if ( !v34 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
  return (UISprite_o *)v23;
}


ScriptMessageLabel_o *__fastcall ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  ScriptMessageLabel_o *v12; // x19

  if ( (byte_42E4B84 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v8, v9, v10);
    byte_42E4B84 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                     labelStock,
                                     (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v12 = (ScriptMessageLabel_o *)sub_B5D694(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v12, 0LL);
  return v12;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptLineMessage__FetchMainLabel(ScriptLineMessage_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *mainStock; // x0
  void *Component_srcLineSprite; // x0
  __int64 v22; // x1
  UnityEngine_Component_o *v23; // x20
  struct UnityEngine_GameObject_o *mainPrefab; // x20
  UnityEngine_GameObject_o *v25; // x21
  UnityEngine_GameObject_o *v26; // x22
  int v27; // w8
  void *v28; // x21
  unsigned int v29; // w22
  UnityEngine_Transform_o *transform; // x19
  int v31; // s0
  UnityEngine_Transform_o *v34; // x19
  int v35; // s0
  __int64 v39; // x0

  if ( (byte_42E4B81 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v17, v18, v19);
    byte_42E4B81 = 1;
  }
  mainStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.mainStock;
  if ( !mainStock || mainStock->fields._size < 1 )
  {
    mainPrefab = this->fields.mainPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_srcLineSprite )
    {
      v25 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_srcLineSprite )
      {
        v23 = (UnityEngine_Component_o *)Component_srcLineSprite;
        Component_srcLineSprite = UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)Component_srcLineSprite,
                                    0LL);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)Component_srcLineSprite,
            this->fields.messageRoot,
            0LL);
          Component_srcLineSprite = UnityEngine_Component__get_gameObject(v23, 0LL);
          if ( this->fields.messageRoot )
          {
            v26 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
            Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.messageRoot,
                                        0LL);
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (void *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                  0LL);
              if ( v26 )
              {
                UnityEngine_GameObject__set_layer(v26, (int32_t)Component_srcLineSprite, 0LL);
                Component_srcLineSprite = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                            v25,
                                            (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_srcLineSprite )
                {
                  v27 = *((_DWORD *)Component_srcLineSprite + 6);
                  v28 = Component_srcLineSprite;
                  if ( v27 < 1 )
                    goto LABEL_22;
                  v29 = 0;
                  while ( 1 )
                  {
                    if ( v29 >= v27 )
                    {
                      v39 = sub_B5D6C8(Component_srcLineSprite);
                      sub_B5D668(v39, 0LL);
                    }
                    Component_srcLineSprite = (void *)*((_QWORD *)v28 + (int)v29 + 4);
                    if ( !Component_srcLineSprite )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_srcLineSprite,
                      this->fields.depthOffset + *((_DWORD *)Component_srcLineSprite + 42),
                      0LL);
                    v27 = *((_DWORD *)v28 + 6);
                    if ( (int)++v29 >= v27 )
                      goto LABEL_22;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(Component_srcLineSprite, v22);
  }
  Component_srcLineSprite = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                              mainStock,
                              (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v23 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_25;
LABEL_22:
  transform = UnityEngine_Component__get_transform(v23, 0LL);
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  v34 = UnityEngine_Component__get_transform(v23, 0LL);
  *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_one(0LL);
  if ( !v34 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
  return (UILabel_o *)v23;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptLineMessage__FetchRubyLabel(ScriptLineMessage_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *rubyStock; // x0
  void *Component_srcLineSprite; // x0
  __int64 v22; // x1
  UnityEngine_Component_o *v23; // x20
  struct UnityEngine_GameObject_o *rubyPrefab; // x20
  UnityEngine_GameObject_o *v25; // x21
  UnityEngine_GameObject_o *v26; // x22
  int v27; // w8
  void *v28; // x21
  unsigned int v29; // w22
  UnityEngine_Transform_o *transform; // x21
  int v31; // s0
  UnityEngine_Transform_o *v34; // x21
  int v35; // s0
  __int64 v39; // x0

  if ( (byte_42E4B82 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v17, v18, v19);
    byte_42E4B82 = 1;
  }
  rubyStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.rubyStock;
  if ( !rubyStock || rubyStock->fields._size < 1 )
  {
    rubyPrefab = this->fields.rubyPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                (UnityEngine_UI_Dropdown_DropdownItem_o *)rubyPrefab,
                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_srcLineSprite )
    {
      v25 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_srcLineSprite )
      {
        v23 = (UnityEngine_Component_o *)Component_srcLineSprite;
        Component_srcLineSprite = UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)Component_srcLineSprite,
                                    0LL);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)Component_srcLineSprite,
            this->fields.messageRoot,
            0LL);
          Component_srcLineSprite = UnityEngine_Component__get_gameObject(v23, 0LL);
          if ( this->fields.messageRoot )
          {
            v26 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
            Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.messageRoot,
                                        0LL);
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (void *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                  0LL);
              if ( v26 )
              {
                UnityEngine_GameObject__set_layer(v26, (int32_t)Component_srcLineSprite, 0LL);
                Component_srcLineSprite = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                            v25,
                                            (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_srcLineSprite )
                {
                  v27 = *((_DWORD *)Component_srcLineSprite + 6);
                  v28 = Component_srcLineSprite;
                  if ( v27 < 1 )
                    goto LABEL_22;
                  v29 = 0;
                  while ( 1 )
                  {
                    if ( v29 >= v27 )
                    {
                      v39 = sub_B5D6C8(Component_srcLineSprite);
                      sub_B5D668(v39, 0LL);
                    }
                    Component_srcLineSprite = (void *)*((_QWORD *)v28 + (int)v29 + 4);
                    if ( !Component_srcLineSprite )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_srcLineSprite,
                      this->fields.depthOffset + *((_DWORD *)Component_srcLineSprite + 42),
                      0LL);
                    v27 = *((_DWORD *)v28 + 6);
                    if ( (int)++v29 >= v27 )
                      goto LABEL_22;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(Component_srcLineSprite, v22);
  }
  Component_srcLineSprite = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                              rubyStock,
                              (const MethodInfo_2CC5948 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v23 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_25;
LABEL_22:
  transform = UnityEngine_Component__get_transform(v23, 0LL);
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  v34 = UnityEngine_Component__get_transform(v23, 0LL);
  *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_one(0LL);
  if ( !v34 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
  UILabel__set_fontSize((UILabel_o *)v23, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v23;
}


void __fastcall ScriptLineMessage__FowardText(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  ScriptLineMessage__UpdateLabels(this, text, 1, color, font, 0, v5);
}


ScriptMessageLabel_array *__fastcall ScriptLineMessage__GetDispLabelArray(
        ScriptLineMessage_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x0

  if ( (byte_42E4B7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__, (_DWORD)method, v2, v3);
    byte_42E4B7F = 1;
  }
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_B5D69C(0LL, method);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)dispLabelList,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
}


UnityEngine_Vector2_o __fastcall ScriptLineMessage__GetPrintedSize(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float v3; // s0
  float v4; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.maxDispPosition.fields.x;
  if ( x < this->fields.dispPosition.fields.x )
    x = this->fields.dispPosition.fields.x;
  v3 = x - this->fields.startPosition.fields.x;
  v4 = -(float)(this->fields.maxDispPosition.fields.y - this->fields.startPosition.fields.y);
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


bool __fastcall ScriptLineMessage__HasRubyFormat(System_String_o *text, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E4B8C & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16036/*"\\[#[^:]+:[^:]+\\]"*/, v5, v6, v7);
    byte_42E4B8C = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_16036/*"\\[#[^:]+:[^:]+\\]"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage__Init(ScriptLineMessage_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  _BOOL4 isRecycle; // w8
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v42; // x20
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v43; // x20
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v44; // x20
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v45; // x20
  struct UnityEngine_GameObject_o *mainPrefab; // x20
  UnityEngine_GameObject_o *fontSizes; // x0
  __int64 v48; // x1
  UILabel_o *Component_srcLineSprite; // x21
  srcLineSprite_o *v50; // x0
  int defaultFontSize; // w2
  UILabel_o *v52; // x20
  float v53; // s0
  double v54; // d0
  int32_t rubyFontSize; // w8
  float v56; // s1
  float v57; // s0
  double v58; // d0
  float v59; // s0
  double v60; // d0
  float v61; // s1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v63; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v65; // s0
  const MethodInfo *v66; // x1
  UnityEngine_Transform_o *v67; // x20
  int v68; // s0

  if ( (byte_42E4B7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_Stack_UISprite__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_Stack_UILabel__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_24090/*"■"*/, v38, v39, v40);
    byte_42E4B7D = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v42 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B5D694(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v42,
        (const MethodInfo_2CC5340 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v42;
      sub_B5D560(&this->fields.mainStock);
      v43 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B5D694(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v43,
        (const MethodInfo_2CC5340 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v43;
      sub_B5D560(&this->fields.rubyStock);
      v44 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B5D694(System_Collections_Generic_Stack_UISprite__TypeInfo);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v44,
        (const MethodInfo_2CC5340 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v44;
      sub_B5D560(&this->fields.imageStock);
      v45 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B5D694(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v45,
        (const MethodInfo_2CC5340 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v45;
      sub_B5D560(&this->fields.labelStock);
    }
    mainPrefab = this->fields.mainPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fontSizes = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             fontSizes,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.rubyPrefab,
                                              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v50 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            fontSizes,
            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v52 = (UILabel_o *)v50;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (UnityEngine_GameObject_o *)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)fontSizes,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_755/*"-"*/,
        defaultFontSize,
        (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (UnityEngine_GameObject_o *)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                     (System_Collections_Generic_Dictionary_string__int__o *)fontSizes,
                                                     (System_String_o *)StringLiteral_755/*"-"*/,
                                                     (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v53 = this->fields.fontScale * (float)(int)fontSizes,
           v53 != INFINITY)
        ? (v54 = v53)
        : (v54 = -v53),
          v48 = (unsigned int)(int)v54,
          this->fields.defaultFontSize = v48,
          !Component_srcLineSprite) )
    {
LABEL_37:
      sub_B5D69C(fontSizes, v48);
    }
    UILabel__set_fontSize(Component_srcLineSprite, v48, 0LL);
    UILabel__set_text(Component_srcLineSprite, (System_String_o *)StringLiteral_24090/*"■"*/, 0LL);
    fontSizes = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))Component_srcLineSprite->klass->vtable._22_get_localSize.method)(
                                              Component_srcLineSprite,
                                              Component_srcLineSprite->klass->vtable._23_get_drawingDimensions.methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v56;
    if ( rubyFontSize <= 0 )
    {
      if ( !v52 )
        goto LABEL_37;
      v59 = this->fields.fontScale * (float)v52->fields.mFontSize;
      if ( v59 == INFINITY )
        v60 = -INFINITY;
      else
        v60 = v59;
      LODWORD(v48) = (int)v60;
      this->fields.rubyFontSize = (int)v60;
    }
    else
    {
      v57 = this->fields.fontScale * (float)rubyFontSize;
      if ( v57 == INFINITY )
        v58 = -INFINITY;
      else
        v58 = v57;
      v48 = (unsigned int)(int)v58;
      this->fields.rubyFontSize = v48;
      if ( !v52 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v52, v48, 0LL);
    UILabel__set_text(v52, (System_String_o *)StringLiteral_24090/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v52->klass->vtable._22_get_localSize.method)(
      v52,
      v52->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v61;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_srcLineSprite,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    v63 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v52, 0LL);
    UnityEngine_Object__Destroy_35620236(v63, 0LL);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v65 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v65;
    if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
    {
      v67 = this->fields.messageOffset;
      *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v67 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v67, *(UnityEngine_Vector3_o *)&v68, 0LL);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, v66);
  }
}


void __fastcall ScriptLineMessage__PreProcSetRubyLabel(
        ScriptLineMessage_o *this,
        System_String_o *mainText,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall ScriptLineMessage__Quit(ScriptLineMessage_o *this, const MethodInfo *method)
{
  ScriptLineMessage__DeleteLabels(this, method);
}


void __fastcall ScriptLineMessage__ReleaseLabel(
        ScriptLineMessage_o *this,
        ScriptMessageLabel_o *label,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ScriptMessageLabel_o *v4; // x19
  ScriptLineMessage_o *v5; // x20
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
  ScriptLineMessage_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  UnityEngine_Object_o *gameObject; // x22
  ScriptLineMessage_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  UnityEngine_Object_o *v23; // x22
  ScriptLineMessage_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  UnityEngine_Object_o *v26; // x22
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0

  v4 = label;
  v5 = this;
  if ( (byte_42E4B85 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UILabel__Push__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Stack_UISprite__Push__, v12, v13, v14);
    this = (ScriptLineMessage_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v15, v16, v17);
    byte_42E4B85 = 1;
  }
  if ( !v4 )
    goto LABEL_46;
  p_fields = (ScriptLineMessage_o **)&v4->fields;
  main = (UnityEngine_Object_o *)v4->fields.main;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (ScriptLineMessage_o *)v5->fields.mainStock;
    label = (ScriptMessageLabel_o *)*p_fields;
    if ( this )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
        (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
        (const MethodInfo_2CC59D4 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_46;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)*p_fields,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    }
    *p_fields = 0LL;
    sub_B5D560(&v4->fields);
  }
  p_ruby = (ScriptLineMessage_o **)&v4->fields.ruby;
  ruby = (UnityEngine_Object_o *)v4->fields.ruby;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    this = *p_ruby;
    if ( !*p_ruby )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (ScriptLineMessage_o *)v5->fields.rubyStock;
    label = (ScriptMessageLabel_o *)*p_ruby;
    if ( this )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
        (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
        (const MethodInfo_2CC59D4 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_46;
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v23, 0LL);
    }
    *p_ruby = 0LL;
    sub_B5D560(&v4->fields.ruby);
  }
  p_image = (ScriptLineMessage_o **)&v4->fields.image;
  image = (UnityEngine_Object_o *)v4->fields.image;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    this = *p_image;
    if ( *p_image )
    {
      ((void (__fastcall *)(ScriptLineMessage_o *, const char *, float))this->klass[1]._1.gc_desc)(
        this,
        this->klass[1]._1.name,
        0.0);
      this = (ScriptLineMessage_o *)v5->fields.imageStock;
      label = (ScriptMessageLabel_o *)*p_image;
      if ( this )
      {
        System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
          (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
          (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
          (const MethodInfo_2CC59D4 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_42:
        *p_image = 0LL;
        sub_B5D560(&v4->fields.image);
        goto LABEL_43;
      }
      if ( label )
      {
        v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v26, 0LL);
        goto LABEL_42;
      }
    }
LABEL_46:
    sub_B5D69C(this, label);
  }
LABEL_43:
  ScriptMessageLabel__Release(v4, 0LL);
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)v5->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
      labelStock,
      (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)v4,
      (const MethodInfo_2CC59D4 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
}


void __fastcall ScriptLineMessage__ReturnText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float x; // s0
  float betweenLineHeight; // s2
  int32_t defaultFontSize; // w9
  float v8; // s0
  float y; // s1
  float defaultTextOnlyLineHeight; // w8

  if ( (byte_42E4B89 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E4B89 = 1;
  }
  x = this->fields.dispPosition.fields.x;
  if ( this->fields.maxDispPosition.fields.x < x )
    this->fields.maxDispPosition.fields.x = x;
  betweenLineHeight = this->fields.betweenLineHeight;
  defaultFontSize = this->fields.defaultFontSize;
  v8 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  y = this->fields.dispPosition.fields.y;
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v8;
  this->fields.fontSize = defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.dispPosition.fields.y = y - (float)(v8 + betweenLineHeight);
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.defaultColorTag);
  this->fields.maxDispPosition.fields.y = this->fields.dispPosition.fields.y - this->fields.textOnlyLineHeight;
}


void __fastcall ScriptLineMessage__SetBetweenLineHeight(
        ScriptLineMessage_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_B5D69C(0LL, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void __fastcall ScriptLineMessage__SetDefaultState(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float defaultTextOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  int32_t defaultFontSize; // w8
  float defaultBetweenLineHeight; // w9

  if ( (byte_42E4B88 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E4B88 = 1;
  }
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  rubyLineHeight = this->fields.rubyLineHeight;
  defaultFontSize = this->fields.defaultFontSize;
  defaultBetweenLineHeight = this->fields.defaultBetweenLineHeight;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.fontSize = defaultFontSize;
  this->fields.betweenLineHeight = defaultBetweenLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.defaultColorTag);
}


void __fastcall ScriptLineMessage__SetFontSize(
        ScriptLineMessage_o *this,
        System_String_o *sizeName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  float v7; // s0
  double v8; // d2
  bool v9; // zf
  double v10; // d0
  float textOnlyLineHeight; // s1
  int32_t v12; // w8
  float v13; // s0
  float y; // s1

  if ( (byte_42E4B8A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__int__get_Item__,
      (_DWORD)sizeName,
      (_DWORD)method,
      v3);
    byte_42E4B8A = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_B5D69C(0LL, sizeName);
  v7 = this->fields.fontScale
     * (float)System_Collections_Generic_Dictionary_string__int___get_Item(
                fontSizes,
                sizeName,
                (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v8 = v7;
  v9 = v7 == INFINITY;
  v10 = -v7;
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  if ( !v9 )
    v10 = v8;
  v12 = (int)v10;
  v13 = (float)(int)v10;
  this->fields.fontSize = v12;
  if ( textOnlyLineHeight < (float)v12 )
  {
    y = this->fields.dispPosition.fields.y;
    this->fields.textOnlyLineHeight = v13;
    this->fields.maxDispPosition.fields.y = y - v13;
  }
}


void __fastcall ScriptLineMessage__SetText(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        bool isTalkName,
        const MethodInfo *method)
{
  const MethodInfo *v12; // x6

  this->fields.isTalkName = isTalkName;
  ScriptLineMessage__ClearText(this, (const MethodInfo *)text);
  ScriptLineMessage__UpdateLabels(this, text, 0, color, font, removeUserNameColorCode, v12);
}


void __fastcall ScriptLineMessage__UpdateLabels(
        ScriptLineMessage_o *this,
        System_String_o *txt,
        bool isFoward,
        System_String_o *enforceColor,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        const MethodInfo *method)
{
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  int v54; // w1
  char v55; // w2
  __int64 v56; // x3
  int v57; // w1
  char v58; // w2
  __int64 v59; // x3
  int v60; // w1
  char v61; // w2
  __int64 v62; // x3
  int v63; // w1
  char v64; // w2
  __int64 v65; // x3
  ScriptLineMessage___c__DisplayClass55_0_o *v66; // x23
  __int64 Chars; // x0
  System_String_o *v68; // x1
  bool v69; // w8
  ScriptLineMessage___c__DisplayClass55_0_Fields *p_fields; // x24
  System_Text_StringBuilder_o *v71; // x20
  struct System_String_o **p_defaultColorTag; // x20
  ScriptLineMessage_ProcAddLabel_o *v73; // x25
  int32_t v74; // w28
  int v75; // w26
  System_String_o *v76; // x0
  System_String_o *v77; // x20
  int32_t v78; // w1
  int32_t v79; // w2
  System_String_o *v80; // x0
  System_String_o *v81; // x2
  const MethodInfo *v82; // x1
  System_String_o *v83; // x20
  System_String_array *v84; // x20
  System_String_o *v85; // x0
  const MethodInfo *v86; // x6
  bool v87; // w2
  UnityEngine_Font_o *v88; // x4
  System_String_o *v89; // x1
  ScriptLineMessage_o *v90; // x0
  int32_t v91; // w20
  int32_t BraceIndex; // w0
  int32_t v93; // w21
  System_String_o *v94; // x0
  int32_t v95; // w20
  System_String_o *String; // x0
  bool v97; // zf
  System_String_o *v98; // x20
  System_String_o *v99; // x0
  System_Text_StringBuilder_o *tmpTxt; // x20
  int v101; // w1
  char v102; // w2
  __int64 v103; // x3
  ScriptReplaceString_c *v104; // x0
  int32_t playerGenderIndex; // w20
  System_String_o *TagSplitString; // x20
  System_String_o *v107; // x3
  System_String_o *v108; // x20
  System_Text_StringBuilder_o *v109; // x20
  ScriptLineMessage_ProcAddLabel2_o *v110; // [xsp+8h] [xbp-78h]
  struct System_String_o **v112; // [xsp+18h] [xbp-68h]
  System_String_o *overrideColor; // [xsp+20h] [xbp-60h]
  System_String_o *text; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E4B87 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptLineMessage_ProcAddLabel2_TypeInfo, (_DWORD)txt, isFoward, enforceColor);
    sub_B5D5C4(&ScriptLineMessage_ProcAddLabel_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__, v24, v25, v26);
    sub_B5D5C4(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__, v27, v28, v29);
    sub_B5D5C4(&ScriptLineMessage___c__DisplayClass55_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22278/*"servantName"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_15834/*"[-]"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_19497/*"i"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_16026/*"[~1]"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_15961/*"[^"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_21954/*"r"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_20484/*"line"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_19657/*"image"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_16025/*"[~"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v63, v64, v65);
    byte_42E4B87 = 1;
  }
  text = 0LL;
  v66 = (ScriptLineMessage___c__DisplayClass55_0_o *)sub_B5D694(ScriptLineMessage___c__DisplayClass55_0_TypeInfo);
  ScriptLineMessage___c__DisplayClass55_0___ctor(v66, 0LL);
  if ( !v66 )
    goto LABEL_97;
  v66->fields.__4__this = this;
  sub_B5D560(&v66->fields.__4__this);
  v66->fields.font = font;
  v69 = isFoward;
  p_fields = &v66->fields;
  v66->fields.isFoward = v69;
  sub_B5D560(&v66->fields.font);
  v71 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v71, 0LL);
  v66->fields.tmpTxt = v71;
  sub_B5D560(&v66->fields);
  p_defaultColorTag = &this->fields.defaultColorTag;
  if ( enforceColor )
  {
    *p_defaultColorTag = enforceColor;
    sub_B5D560(&this->fields.defaultColorTag);
  }
  v112 = &this->fields.defaultColorTag;
  v66->fields.tmpColorTag = *p_defaultColorTag;
  sub_B5D560(&v66->fields.tmpColorTag);
  v73 = (ScriptLineMessage_ProcAddLabel_o *)sub_B5D694(ScriptLineMessage_ProcAddLabel_TypeInfo);
  ScriptLineMessage_ProcAddLabel___ctor(
    v73,
    (Il2CppObject *)v66,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__,
    0LL);
  v110 = (ScriptLineMessage_ProcAddLabel2_o *)sub_B5D694(ScriptLineMessage_ProcAddLabel2_TypeInfo);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v110,
    (Il2CppObject *)v66,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_97:
    sub_B5D69C(Chars, v68);
  overrideColor = enforceColor;
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_93:
    if ( !v73 )
      goto LABEL_97;
    goto LABEL_94;
  }
  v74 = 0;
  v75 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v74, 0LL) != 91 )
    {
      tmpTxt = p_fields->tmpTxt;
      Chars = System_String__get_Chars(txt, v74, 0LL);
      if ( !tmpTxt )
        goto LABEL_97;
      System_Text_StringBuilder__Append_42956988(tmpTxt, Chars, 0LL);
      v93 = v74;
      goto LABEL_91;
    }
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v91 = v74 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v74 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)p_fields->tmpTxt;
      if ( !p_fields->tmpTxt )
        goto LABEL_97;
      Chars = (__int64)System_Text_StringBuilder__Append_42953744(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15824/*"["*/,
                         0LL);
      goto LABEL_92;
    }
    v93 = BraceIndex;
    Chars = System_String__get_Chars(txt, v91, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v73 )
        goto LABEL_97;
      ScriptLineMessage_ProcAddLabel__Invoke(v73, 0LL);
      v94 = System_String__Substring_44641524(txt, v74 + 2, v75 + v93 - 2, 0LL);
      v95 = System_Int32__Parse(v94, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      String = ScriptReplaceString__GetString(v95, 0LL);
      v97 = v95 == 1;
      v98 = String;
      if ( v97 && removeUserNameColorCode )
      {
        if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        }
        v99 = ScriptMessageLabel__RemoveColorTag(v98, 0LL);
      }
      else
      {
        v99 = System_String__Concat_44577788(String, (System_String_o *)StringLiteral_15834/*"[-]"*/, 0LL);
      }
      v108 = v99;
      this->fields.defaultColorTag = v66->fields.tmpColorTag;
      sub_B5D560(v112);
      v87 = v66->fields.isFoward;
      v88 = v66->fields.font;
      v90 = this;
      v89 = v108;
      v107 = overrideColor;
LABEL_89:
      ScriptLineMessage__UpdateLabels(v90, v89, v87, v107, v88, 0, v86);
      v66->fields.tmpColorTag = this->fields.defaultColorTag;
LABEL_90:
      sub_B5D560(&v66->fields.tmpColorTag);
      goto LABEL_91;
    }
    Chars = System_String__get_Chars(txt, v91, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v73 )
        goto LABEL_97;
      ScriptLineMessage_ProcAddLabel__Invoke(v73, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      if ( !byte_42E4CBB )
      {
        sub_B5D5C4(&ScriptReplaceString_TypeInfo, v101, v102, v103);
        byte_42E4CBB = 1;
      }
      v104 = ScriptReplaceString_TypeInfo;
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v104 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v104->static_fields->playerGenderIndex;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v74 + 2, playerGenderIndex, 0LL);
      this->fields.defaultColorTag = v66->fields.tmpColorTag;
      sub_B5D560(v112);
      v87 = v66->fields.isFoward;
      v88 = v66->fields.font;
      v90 = this;
      v89 = TagSplitString;
LABEL_86:
      v107 = overrideColor;
      goto LABEL_89;
    }
    Chars = System_String__get_Chars(txt, v91, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v73 )
        goto LABEL_97;
      ScriptLineMessage_ProcAddLabel__Invoke(v73, 0LL);
      v76 = System_String__Substring_44641524(txt, v74, v75 + v93 + 1, 0LL);
      goto LABEL_25;
    }
    if ( System_String__get_Chars(txt, v91, 0LL) != 61 )
      break;
LABEL_91:
    v91 = v93 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, struct System_Text_StringBuilder_o *, ScriptLineMessage_ProcAddLabel_o *, Il2CppMethodPointer))this->klass->vtable._5_AfterParseEachChar.method)(
              this,
              p_fields->tmpTxt,
              v73,
              this->klass->vtable._6_PreProcSetRubyLabel.methodPtr);
LABEL_92:
    v75 = -v91;
    v74 = v91;
    if ( v91 >= txt->fields.m_stringLength )
      goto LABEL_93;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v91, 0LL);
  if ( !Chars )
    goto LABEL_97;
  v77 = (System_String_o *)Chars;
  Chars = System_String__Equals_44565128((System_String_o *)Chars, (System_String_o *)StringLiteral_19657/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v73 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v73, 0LL);
    v78 = v74 + 7;
    v79 = v75 + v93 - 7;
    goto LABEL_23;
  }
  Chars = System_String__Equals_44565128(v77, (System_String_o *)StringLiteral_19497/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v73 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v73, 0LL);
    v78 = v74 + 3;
    v79 = v75 + v93 - 3;
LABEL_23:
    v68 = System_String__Substring_44641524(txt, v78, v79, 0LL);
    v80 = (System_String_o *)StringLiteral_15961/*"[^"*/;
    v81 = (System_String_o *)StringLiteral_16061/*"]"*/;
LABEL_24:
    v76 = System_String__Concat_44580072(v80, v68, v81, 0LL);
LABEL_25:
    v68 = v76;
    Chars = (__int64)v110;
    if ( !v110 )
      goto LABEL_97;
LABEL_26:
    ScriptLineMessage_ProcAddLabel2__Invoke((ScriptLineMessage_ProcAddLabel2_o *)Chars, v68, 0LL);
    goto LABEL_91;
  }
  Chars = System_String__Equals_44565128(v77, (System_String_o *)StringLiteral_21954/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v73 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v73, 0LL);
    ScriptLineMessage__ReturnText(this, v82);
    if ( overrideColor )
    {
      *v112 = overrideColor;
      sub_B5D560(v112);
    }
    v66->fields.tmpColorTag = *v112;
    goto LABEL_90;
  }
  Chars = System_String__Equals_44565128(v77, (System_String_o *)StringLiteral_22278/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v73 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v73, 0LL);
    v83 = System_String__Substring_44641524(txt, v74 + 12, v75 + v93 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v84 = ScriptMessageLabel__AnalysTagParam(v83, 0, 0LL);
    this->fields.defaultColorTag = v66->fields.tmpColorTag;
    sub_B5D560(v112);
    v85 = ScriptMessageLabel__GetServantChangeName(v84, 0LL);
    v87 = v66->fields.isFoward;
    v88 = v66->fields.font;
    v89 = v85;
    v90 = this;
    goto LABEL_86;
  }
  Chars = System_String__StartsWith(v77, (System_String_o *)StringLiteral_20484/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v73 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v73, 0LL);
    Chars = (__int64)System_String__Substring_44641524(txt, v74 + 5, v75 + v93 - 5, 0LL);
    if ( !Chars )
      goto LABEL_97;
    v68 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v80 = (System_String_o *)StringLiteral_16025/*"[~"*/;
      v81 = (System_String_o *)StringLiteral_16061/*"]"*/;
      goto LABEL_24;
    }
    Chars = (__int64)v110;
    if ( !v110 )
      goto LABEL_97;
    v68 = (System_String_o *)StringLiteral_16026/*"[~1]"*/;
    goto LABEL_26;
  }
  if ( v93 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_44641524(txt, v74, v75 + v93 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(&v66->fields.tmpColorTag, &text, overrideColor, 0LL);
    Chars = (__int64)p_fields->tmpTxt;
    if ( !p_fields->tmpTxt )
      goto LABEL_97;
    System_Text_StringBuilder__Append_42953744((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_91;
  }
  v109 = p_fields->tmpTxt;
  Chars = (__int64)System_String__Substring(txt, v74, 0LL);
  if ( !v109 )
    goto LABEL_97;
  Chars = (__int64)System_Text_StringBuilder__Append_42953744(v109, (System_String_o *)Chars, 0LL);
  if ( !v73 )
    goto LABEL_97;
LABEL_94:
  ScriptLineMessage_ProcAddLabel__Invoke(v73, 0LL);
}


UnityEngine_Vector2_o __fastcall ScriptLineMessage__get_DispPos(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.dispPosition.fields.x;
  y = this->fields.dispPosition.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall ScriptLineMessage__get_RubyLineHegight(ScriptLineMessage_o *this, const MethodInfo *method)
{
  return this->fields.rubyLineHeight;
}


UnityEngine_Vector2_o __fastcall ScriptLineMessage__get_StartPos(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.startPosition.fields.x;
  y = this->fields.startPosition.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall ScriptLineMessage__get_textLineHeight(ScriptLineMessage_o *this, const MethodInfo *method)
{
  return this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage_ProcAddLabel___ctor(
        ScriptLineMessage_ProcAddLabel_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall ScriptLineMessage_ProcAddLabel__Invoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  ScriptLineMessage_ProcAddLabel_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  ScriptLineMessage_ProcAddLabel_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  ScriptLineMessage_ProcAddLabel_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (ScriptLineMessage_ProcAddLabel_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage_ProcAddLabel2___ctor(
        ScriptLineMessage_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel2__BeginInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)txt;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__Invoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ScriptLineMessage_ProcAddLabel2_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(System_String_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptLineMessage_ProcAddLabel2_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(System_String_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  System_String_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  ScriptLineMessage_ProcAddLabel2_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ScriptLineMessage_ProcAddLabel2_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(System_String_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, txt, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = txt->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(txt, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(txt, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = txt->klass;
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(txt, class_0, v9, v11);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(txt, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(txt, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, txt, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v23)(v31, txt, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v31
                                                                           + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                           + 312))(
                v31,
                txt,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v32)(v31, txt, v30);
    }
  }
}


void __fastcall ScriptLineMessage___c__DisplayClass55_0___ctor(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__0(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *tmpTxt; // x0
  ScriptLineMessage_o *_4__this; // x20
  struct ScriptLineMessage_o *v5; // x8

  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  if ( System_Text_StringBuilder__get_Length(tmpTxt, 0LL) < 1 )
    goto LABEL_8;
  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))tmpTxt->klass->vtable._3_ToString.method)(
                                                  tmpTxt,
                                                  tmpTxt->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr),
        (v5 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptLineMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v5->fields.defaultColorTag,
          this->fields.isFoward,
          this->fields.font,
          0LL),
        (tmpTxt = this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (System_Text_StringBuilder_o *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  *(_QWORD *)&tmpTxt[2].fields.m_ChunkLength = this->fields.tmpColorTag;
  sub_B5D560(&tmpTxt[2].fields.m_ChunkLength);
}


void __fastcall ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__1(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  ScriptLineMessage___c__DisplayClass55_0_o *v3; // x19

  if ( !text )
    goto LABEL_7;
  v3 = this;
  if ( text->fields.m_stringLength >= 1 )
  {
    this = (ScriptLineMessage___c__DisplayClass55_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptLineMessage__AddLabel(
      (ScriptLineMessage_o *)this,
      text,
      (System_String_o *)this[2].fields.tmpTxt,
      v3->fields.isFoward,
      v3->fields.font,
      0LL);
  }
  this = (ScriptLineMessage___c__DisplayClass55_0_o *)v3->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_B5D69C(this, text);
  this[2].fields.tmpTxt = (struct System_Text_StringBuilder_o *)v3->fields.tmpColorTag;
  sub_B5D560(&this[2].fields);
}