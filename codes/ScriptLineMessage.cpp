void __fastcall ScriptLineMessage___ctor(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v14; // x20
  __int64 v15; // x0
  void *v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20

  if ( (byte_4210A9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v8);
    sub_B0D8A4(&StringLiteral_20522/*"medium"*/, v9);
    sub_B0D8A4(&StringLiteral_22244/*"small"*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    sub_B0D8A4(&StringLiteral_20240/*"large"*/, v12);
    sub_B0D8A4(&StringLiteral_23428/*"x-large"*/, v13);
    byte_4210A9C = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            method,
                                                                            v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v14,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v14 )
    sub_B0D97C(v15);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v14,
    (UIPanel_o *)StringLiteral_753/*"-"*/,
    30,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v14,
    (UIPanel_o *)StringLiteral_22244/*"small"*/,
    24,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v14,
    (UIPanel_o *)StringLiteral_20522/*"medium"*/,
    30,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v14,
    (UIPanel_o *)StringLiteral_20240/*"large"*/,
    48,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v14,
    (UIPanel_o *)StringLiteral_23428/*"x-large"*/,
    64,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v14;
  sub_B0D840(&this->fields.fontSizes, v14);
  v16 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.defaultColorTag, v16);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ScriptMessageLabel__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v19;
  sub_B0D840(&this->fields.dispLabelList, v19);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 Label; // x0
  ScriptMessageLabel_o *v13; // x20
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  UILabel_o *v17; // x0
  const MethodInfo *v18; // x1
  UILabel_o *RubyLabel; // x0
  System_String_o *v20; // x23
  __int64 v21; // x23
  int v22; // w8
  int32_t fontSize; // w4
  System_String_o *v24; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v26; // x1
  UISprite_o *v27; // x0
  System_String_o *v28; // x23
  int v29; // w8
  __int64 v30; // x24
  System_String_o *v31; // x23
  float v32; // s0
  int v33; // w8
  float v34; // s8
  UISprite_o *ImageSprite; // x0
  System_String_o *v36; // x0
  int32_t v37; // w22
  int32_t v38; // w0
  UILabel_o *MainLabel; // x0
  UnityEngine_Object_o *messageOffset; // x21
  UnityEngine_Transform_o *transform; // x21
  int v42; // s0
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v46; // x21
  float v47; // s0
  const MethodInfo *v48; // x1
  int v49; // w8
  __int64 v50; // x23
  UILabel_o *v51; // x0
  System_String_o *v52; // x21
  __int64 v53; // x21
  int v54; // w24
  int32_t v55; // w0
  __int64 v56; // x0
  UnityEngine_Vector2_o v57; // 0:s1.4,4:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4210A95 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, text);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4210A95 = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_60;
  v13 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v14 = Label + 112;
  *(_DWORD *)(v14 + 52) = 0;
  Label = sub_B0D840(v14, colorTag);
  if ( !text )
    goto LABEL_60;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
  {
LABEL_26:
    MainLabel = ScriptLineMessage__FetchMainLabel(this, v15);
    v13->fields.main = MainLabel;
    sub_B0D840(&v13->fields, MainLabel);
    ScriptMessageLabel__UpdateLabel(
      v13,
      &v13->fields.main,
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
    v17 = ScriptLineMessage__FetchMainLabel(this, v16);
    v13->fields.main = v17;
    sub_B0D840(&v13->fields, v17);
    RubyLabel = ScriptLineMessage__FetchRubyLabel(this, v18);
    v13->fields.ruby = RubyLabel;
    sub_B0D840(&v13->fields.ruby, RubyLabel);
    v20 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_60;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v20 )
        goto LABEL_60;
      Label = (__int64)System_String__Split(v20, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_60;
      v21 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_PreProcSetRubyLabel.method)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._7_SetText.methodPtr);
        v22 = *(_DWORD *)(v21 + 24);
        if ( v22 )
        {
          fontSize = this->fields.fontSize;
          v24 = *(System_String_o **)(v21 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v22 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              v13,
              &v13->fields.main,
              &v13->fields.ruby,
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v24,
              font,
              0LL);
          else
            ScriptMessageLabel__UpdateRuby(
              v13,
              &v13->fields.main,
              &v13->fields.ruby,
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v24,
              *(System_String_o **)(v21 + 40),
              font,
              this->fields.isTalkName,
              0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_61:
    v56 = sub_B0D9A8(Label);
    sub_B0D948(v56, 0LL);
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0LL) == 126 )
    {
      ImageSprite = ScriptLineMessage__FetchImageSprite(this, v15);
      v13->fields.image = ImageSprite;
      sub_B0D840(&v13->fields.image, ImageSprite);
      v36 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
      v37 = this->fields.fontSize;
      v38 = System_Int32__Parse(v36, 0LL);
      ScriptMessageLabel__UpdateLine(v13, &v13->fields.image, &this->fields.dispPosition, v37, v38, 0LL);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  v27 = ScriptLineMessage__FetchImageSprite(this, v26);
  v13->fields.image = v27;
  sub_B0D840(&v13->fields.image, v27);
  v28 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
  Label = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_60;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_61;
  *(_WORD *)(Label + 32) = 32;
  if ( !v28 )
    goto LABEL_60;
  Label = (__int64)System_String__Split(v28, (System_Char_array *)Label, 0LL);
  if ( !Label )
    goto LABEL_60;
  v29 = *(_DWORD *)(Label + 24);
  v30 = Label;
  if ( !v29 )
    goto LABEL_61;
  v31 = *(System_String_o **)(Label + 32);
  if ( v29 <= 1 )
  {
    Label = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_60;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_61;
    *(_WORD *)(Label + 32) = 58;
    if ( !v31 )
      goto LABEL_60;
    Label = (__int64)System_String__Split(v31, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_60;
    v49 = *(_DWORD *)(Label + 24);
    v50 = Label;
    if ( v49 <= 1 )
    {
      if ( !v49 )
        goto LABEL_61;
      ScriptMessageLabel__UpdateImage(
        v13,
        &v13->fields.image,
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        0LL);
    }
    else
    {
      v51 = ScriptLineMessage__FetchRubyLabel(this, v48);
      v13->fields.ruby = v51;
      Label = sub_B0D840(&v13->fields.ruby, v51);
      if ( *(_DWORD *)(v50 + 24) < 2u )
        goto LABEL_61;
      ScriptMessageLabel__UpdateImageRuby(
        v13,
        &v13->fields.image,
        &v13->fields.ruby,
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(v50 + 32),
        *(System_String_o **)(v50 + 40),
        font,
        0,
        0LL);
    }
  }
  else
  {
    v32 = System_Single__Parse(*(System_String_o **)(Label + 40), 0LL);
    v33 = *(_DWORD *)(v30 + 24);
    v34 = v32;
    if ( v33 == 2 )
    {
      ScriptMessageLabel__UpdateImage_33984332(
        v13,
        &v13->fields.image,
        &this->fields.dispPosition,
        this->fields.fontSize,
        v32,
        v31,
        0,
        0LL);
    }
    else if ( v33 <= 3 )
    {
      if ( (unsigned int)v33 <= 2 )
        goto LABEL_61;
      v52 = *(System_String_o **)(v30 + 48);
      Label = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_60;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_61;
      *(_WORD *)(Label + 32) = 44;
      if ( !v52 )
        goto LABEL_60;
      Label = (__int64)System_String__Split(v52, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_60;
      v53 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_61;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v53 + 24) <= 1u )
        goto LABEL_61;
      v54 = Label;
      v55 = System_Int32__Parse(*(System_String_o **)(v53 + 40), 0LL);
      v57.fields.x = (float)v54;
      v57.fields.y = (float)v55;
      ScriptMessageLabel__UpdateImage_33984460(
        v13,
        &v13->fields.image,
        &this->fields.dispPosition,
        this->fields.fontSize,
        v34,
        v31,
        v57,
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
    v58.fields.z = 0.0;
    v58.fields.x = (float)(this->fields.startPosition.fields.x - this->fields.dispPosition.fields.x) * 0.5;
    v58.fields.y = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Label, v58, 0LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_60;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
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
          v46 = (UnityEngine_Transform_o *)Label;
          LODWORD(v47) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0LL);
          if ( v46 )
          {
            v59.fields.x = (float)condensedSize / fabsf(v47);
            v59.fields.y = 1.0;
            v59.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v46, v59, 0LL);
            goto LABEL_39;
          }
        }
LABEL_60:
        sub_B0D97C(Label);
      }
    }
  }
LABEL_39:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_60;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Label,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
}


void __fastcall ScriptLineMessage__AfterParseEachChar(
        ScriptLineMessage_o *this,
        System_Text_StringBuilder_o *tempTxt,
        ScriptLineMessage_ProcAddLabel_o *addLabel,
        const MethodInfo *method)
{
  ;
}


void __fastcall ScriptLineMessage__ClearLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4210A8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v6);
    byte_4210A8F = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ScriptLineMessage__Init(this, method);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_9;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dispLabelList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v9.fields.current, v8);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_9:
    sub_B0D97C(dispLabelList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)dispLabelList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage__ClearText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // w8
  float y; // s1
  float v5; // s0
  UnityEngine_Object_o *messageOffset; // x20
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *v8; // x20
  __int64 v9; // x0
  int v10; // s0

  if ( (byte_4210A9A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4210A9A = 1;
  }
  ScriptLineMessage__ClearLabels(this, method);
  x = this->fields.startPosition.fields.x;
  y = this->fields.startPosition.fields.y;
  v5 = y - this->fields.textOnlyLineHeight;
  this->fields.dispPosition.fields.x = x;
  this->fields.dispPosition.fields.y = y;
  this->fields.maxDispPosition.fields.x = x;
  this->fields.maxDispPosition.fields.y = v5;
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
  {
    v8 = this->fields.messageOffset;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v8 )
      sub_B0D97C(v9);
    UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)&v10, 0LL);
  }
  ScriptLineMessage__SetDefaultState(this, v7);
}


void __fastcall ScriptLineMessage__DeleteLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *v13; // x20

  if ( (byte_4210A8D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v8);
    byte_4210A8D = 1;
  }
  ScriptLineMessage__Init(this, method);
  ScriptLineMessage__ClearLabels(this, v9);
  if ( this->fields.isRecycle )
  {
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
    if ( !labelStock )
      goto LABEL_31;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
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
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
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
        UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_31;
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v12, 0LL);
    }
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_31:
      sub_B0D97C(labelStock);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v13, 0LL);
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
    sub_B0D97C(messageRoot);
  }
}


// local variable allocation has failed, the output may be wrong!
UISprite_o *__fastcall ScriptLineMessage__FetchImageSprite(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *imageStock; // x0
  void *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v10; // x20
  struct UnityEngine_GameObject_o *imagePrefab; // x20
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x22
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w22
  UnityEngine_Transform_o *transform; // x19
  int v18; // s0
  UnityEngine_Transform_o *v21; // x19
  int v22; // s0
  __int64 v26; // x0

  if ( (byte_4210A92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v7);
    byte_4210A92 = 1;
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
                                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_srcLineSprite )
    {
      v12 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_srcLineSprite )
      {
        v10 = (UnityEngine_Component_o *)Component_srcLineSprite;
        Component_srcLineSprite = UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)Component_srcLineSprite,
                                    0LL);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)Component_srcLineSprite,
            this->fields.messageRoot,
            0LL);
          Component_srcLineSprite = UnityEngine_Component__get_gameObject(v10, 0LL);
          if ( this->fields.messageRoot )
          {
            v13 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
            Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.messageRoot,
                                        0LL);
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (void *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                  0LL);
              if ( v13 )
              {
                UnityEngine_GameObject__set_layer(v13, (int32_t)Component_srcLineSprite, 0LL);
                Component_srcLineSprite = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                            v12,
                                            (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_srcLineSprite )
                {
                  v14 = *((_DWORD *)Component_srcLineSprite + 6);
                  v15 = Component_srcLineSprite;
                  if ( v14 < 1 )
                    goto LABEL_22;
                  v16 = 0;
                  while ( 1 )
                  {
                    if ( v16 >= v14 )
                    {
                      v26 = sub_B0D9A8(Component_srcLineSprite);
                      sub_B0D948(v26, 0LL);
                    }
                    Component_srcLineSprite = (void *)*((_QWORD *)v15 + (int)v16 + 4);
                    if ( !Component_srcLineSprite )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_srcLineSprite,
                      this->fields.depthOffset + *((_DWORD *)Component_srcLineSprite + 42),
                      0LL);
                    v14 = *((_DWORD *)v15 + 6);
                    if ( (int)++v16 >= v14 )
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
    sub_B0D97C(Component_srcLineSprite);
  }
  Component_srcLineSprite = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                              imageStock,
                              (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v10 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_25;
LABEL_22:
  transform = UnityEngine_Component__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  v21 = UnityEngine_Component__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
  if ( !v21 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  return (UISprite_o *)v10;
}


ScriptMessageLabel_o *__fastcall ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  ScriptMessageLabel_o *v7; // x19

  if ( (byte_4210A93 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v5);
    byte_4210A93 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                     labelStock,
                                     (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v7 = (ScriptMessageLabel_o *)sub_B0D974(ScriptMessageLabel_TypeInfo, method, v2);
  ScriptMessageLabel___ctor(v7, 0LL);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptLineMessage__FetchMainLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *mainStock; // x0
  void *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v10; // x20
  struct UnityEngine_GameObject_o *mainPrefab; // x20
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x22
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w22
  UnityEngine_Transform_o *transform; // x19
  int v18; // s0
  UnityEngine_Transform_o *v21; // x19
  int v22; // s0
  __int64 v26; // x0

  if ( (byte_4210A90 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_4210A90 = 1;
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
                                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_srcLineSprite )
    {
      v12 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_srcLineSprite )
      {
        v10 = (UnityEngine_Component_o *)Component_srcLineSprite;
        Component_srcLineSprite = UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)Component_srcLineSprite,
                                    0LL);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)Component_srcLineSprite,
            this->fields.messageRoot,
            0LL);
          Component_srcLineSprite = UnityEngine_Component__get_gameObject(v10, 0LL);
          if ( this->fields.messageRoot )
          {
            v13 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
            Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.messageRoot,
                                        0LL);
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (void *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                  0LL);
              if ( v13 )
              {
                UnityEngine_GameObject__set_layer(v13, (int32_t)Component_srcLineSprite, 0LL);
                Component_srcLineSprite = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                            v12,
                                            (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_srcLineSprite )
                {
                  v14 = *((_DWORD *)Component_srcLineSprite + 6);
                  v15 = Component_srcLineSprite;
                  if ( v14 < 1 )
                    goto LABEL_22;
                  v16 = 0;
                  while ( 1 )
                  {
                    if ( v16 >= v14 )
                    {
                      v26 = sub_B0D9A8(Component_srcLineSprite);
                      sub_B0D948(v26, 0LL);
                    }
                    Component_srcLineSprite = (void *)*((_QWORD *)v15 + (int)v16 + 4);
                    if ( !Component_srcLineSprite )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_srcLineSprite,
                      this->fields.depthOffset + *((_DWORD *)Component_srcLineSprite + 42),
                      0LL);
                    v14 = *((_DWORD *)v15 + 6);
                    if ( (int)++v16 >= v14 )
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
    sub_B0D97C(Component_srcLineSprite);
  }
  Component_srcLineSprite = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                              mainStock,
                              (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v10 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_25;
LABEL_22:
  transform = UnityEngine_Component__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  v21 = UnityEngine_Component__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
  if ( !v21 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  return (UILabel_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptLineMessage__FetchRubyLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *rubyStock; // x0
  void *Component_srcLineSprite; // x0
  UnityEngine_Component_o *v10; // x20
  struct UnityEngine_GameObject_o *rubyPrefab; // x20
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x22
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w22
  UnityEngine_Transform_o *transform; // x21
  int v18; // s0
  UnityEngine_Transform_o *v21; // x21
  int v22; // s0
  __int64 v26; // x0

  if ( (byte_4210A91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_4210A91 = 1;
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
                                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_srcLineSprite )
    {
      v12 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_srcLineSprite )
      {
        v10 = (UnityEngine_Component_o *)Component_srcLineSprite;
        Component_srcLineSprite = UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)Component_srcLineSprite,
                                    0LL);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)Component_srcLineSprite,
            this->fields.messageRoot,
            0LL);
          Component_srcLineSprite = UnityEngine_Component__get_gameObject(v10, 0LL);
          if ( this->fields.messageRoot )
          {
            v13 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
            Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.messageRoot,
                                        0LL);
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (void *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                  0LL);
              if ( v13 )
              {
                UnityEngine_GameObject__set_layer(v13, (int32_t)Component_srcLineSprite, 0LL);
                Component_srcLineSprite = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                            v12,
                                            (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_srcLineSprite )
                {
                  v14 = *((_DWORD *)Component_srcLineSprite + 6);
                  v15 = Component_srcLineSprite;
                  if ( v14 < 1 )
                    goto LABEL_22;
                  v16 = 0;
                  while ( 1 )
                  {
                    if ( v16 >= v14 )
                    {
                      v26 = sub_B0D9A8(Component_srcLineSprite);
                      sub_B0D948(v26, 0LL);
                    }
                    Component_srcLineSprite = (void *)*((_QWORD *)v15 + (int)v16 + 4);
                    if ( !Component_srcLineSprite )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_srcLineSprite,
                      this->fields.depthOffset + *((_DWORD *)Component_srcLineSprite + 42),
                      0LL);
                    v14 = *((_DWORD *)v15 + 6);
                    if ( (int)++v16 >= v14 )
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
    sub_B0D97C(Component_srcLineSprite);
  }
  Component_srcLineSprite = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                              rubyStock,
                              (const MethodInfo_2A99154 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v10 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_25;
LABEL_22:
  transform = UnityEngine_Component__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  v21 = UnityEngine_Component__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
  if ( !v21 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  UILabel__set_fontSize((UILabel_o *)v10, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v10;
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
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x0

  if ( (byte_4210A8E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__, method);
    byte_4210A8E = 1;
  }
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_B0D97C(0LL);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)dispLabelList,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
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
  __int64 v3; // x1

  if ( (byte_4210A9B & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_15892/*"\\[#[^:]+:[^:]+\\]"*/, v3);
    byte_4210A9B = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_15892/*"\\[#[^:]+:[^:]+\\]"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage__Init(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  _BOOL4 isRecycle; // w8
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v26; // x20
  struct UnityEngine_GameObject_o *mainPrefab; // x20
  UnityEngine_GameObject_o *fontSizes; // x0
  UILabel_o *Component_srcLineSprite; // x21
  srcLineSprite_o *v30; // x0
  int defaultFontSize; // w2
  UILabel_o *v32; // x20
  float v33; // s0
  double v34; // d0
  int32_t rubyFontSize; // w8
  float v36; // s1
  float v37; // s0
  double v38; // d0
  int32_t v39; // w1
  float v40; // s0
  double v41; // d0
  float v42; // s1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v44; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v46; // s0
  const MethodInfo *v47; // x1
  UnityEngine_Transform_o *v48; // x20
  int v49; // s0

  if ( (byte_4210A8C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_Stack_UISprite__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_Stack_UILabel__TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v14);
    sub_B0D8A4(&StringLiteral_23855/*"■"*/, v15);
    byte_4210A8C = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v17 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v17,
        (const MethodInfo_2A98B4C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v17;
      sub_B0D840(&this->fields.mainStock, v17);
      v20 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                                                                  v18,
                                                                                                  v19);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v20,
        (const MethodInfo_2A98B4C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v20;
      sub_B0D840(&this->fields.rubyStock, v20);
      v23 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Stack_UISprite__TypeInfo,
                                                                                                  v21,
                                                                                                  v22);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v23,
        (const MethodInfo_2A98B4C *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v23;
      sub_B0D840(&this->fields.imageStock, v23);
      v26 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo,
                                                                                                  v24,
                                                                                                  v25);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v26,
        (const MethodInfo_2A98B4C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v26;
      sub_B0D840(&this->fields.labelStock, v26);
    }
    mainPrefab = this->fields.mainPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fontSizes = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             fontSizes,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.rubyPrefab,
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v30 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            fontSizes,
            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v32 = (UILabel_o *)v30;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (UnityEngine_GameObject_o *)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)fontSizes,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_753/*"-"*/,
        defaultFontSize,
        (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (UnityEngine_GameObject_o *)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                     (System_Collections_Generic_Dictionary_string__int__o *)fontSizes,
                                                     (System_String_o *)StringLiteral_753/*"-"*/,
                                                     (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v33 = this->fields.fontScale * (float)(int)fontSizes,
           v33 != INFINITY)
        ? (v34 = v33)
        : (v34 = -v33),
          this->fields.defaultFontSize = (int)v34,
          !Component_srcLineSprite) )
    {
LABEL_37:
      sub_B0D97C(fontSizes);
    }
    UILabel__set_fontSize(Component_srcLineSprite, (int)v34, 0LL);
    UILabel__set_text(Component_srcLineSprite, (System_String_o *)StringLiteral_23855/*"■"*/, 0LL);
    fontSizes = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))Component_srcLineSprite->klass->vtable._22_get_localSize.method)(
                                              Component_srcLineSprite,
                                              Component_srcLineSprite->klass->vtable._23_get_drawingDimensions.methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v36;
    if ( rubyFontSize <= 0 )
    {
      if ( !v32 )
        goto LABEL_37;
      v40 = this->fields.fontScale * (float)v32->fields.mFontSize;
      if ( v40 == INFINITY )
        v41 = -INFINITY;
      else
        v41 = v40;
      v39 = (int)v41;
      this->fields.rubyFontSize = (int)v41;
    }
    else
    {
      v37 = this->fields.fontScale * (float)rubyFontSize;
      if ( v37 == INFINITY )
        v38 = -INFINITY;
      else
        v38 = v37;
      v39 = (int)v38;
      this->fields.rubyFontSize = (int)v38;
      if ( !v32 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v32, v39, 0LL);
    UILabel__set_text(v32, (System_String_o *)StringLiteral_23855/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v32->klass->vtable._22_get_localSize.method)(
      v32,
      v32->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v42;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_srcLineSprite,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v32, 0LL);
    UnityEngine_Object__Destroy_34935276(v44, 0LL);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v46 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v46;
    if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
    {
      v48 = this->fields.messageOffset;
      *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v48 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, v47);
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
  ScriptLineMessage_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ScriptLineMessage_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  ScriptLineMessage_o *v11; // x1
  UnityEngine_Object_o *gameObject; // x22
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  ScriptLineMessage_o *v15; // x1
  UnityEngine_Object_o *v16; // x22
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  ScriptLineMessage_o *v19; // x1
  UnityEngine_Object_o *v20; // x22
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0

  v4 = this;
  if ( (byte_4210A94 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, label);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UILabel__Push__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Stack_UISprite__Push__, v7);
    this = (ScriptLineMessage_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4210A94 = 1;
  }
  if ( !label )
    goto LABEL_46;
  p_fields = (ScriptLineMessage_o **)&label->fields;
  main = (UnityEngine_Object_o *)label->fields.main;
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
    this = (ScriptLineMessage_o *)v4->fields.mainStock;
    v11 = *p_fields;
    if ( this )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
        (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)v11,
        (const MethodInfo_2A991E0 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !v11 )
        goto LABEL_46;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)*p_fields,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    }
    *p_fields = 0LL;
    sub_B0D840(&label->fields, 0LL);
  }
  p_ruby = &label->fields.ruby;
  ruby = (UnityEngine_Object_o *)label->fields.ruby;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    this = (ScriptLineMessage_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (ScriptLineMessage_o *)v4->fields.rubyStock;
    v15 = (ScriptLineMessage_o *)*p_ruby;
    if ( this )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
        (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)v15,
        (const MethodInfo_2A991E0 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !v15 )
        goto LABEL_46;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v16, 0LL);
    }
    *p_ruby = 0LL;
    sub_B0D840(&label->fields.ruby, 0LL);
  }
  p_image = &label->fields.image;
  image = (UnityEngine_Object_o *)label->fields.image;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(image, 0LL, 0LL) )
  {
    this = (ScriptLineMessage_o *)*p_image;
    if ( *p_image )
    {
      ((void (__fastcall *)(ScriptLineMessage_o *, const char *, float))this->klass[1]._1.gc_desc)(
        this,
        this->klass[1]._1.name,
        0.0);
      this = (ScriptLineMessage_o *)v4->fields.imageStock;
      v19 = (ScriptLineMessage_o *)*p_image;
      if ( this )
      {
        System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
          (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
          (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)v19,
          (const MethodInfo_2A991E0 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_42:
        *p_image = 0LL;
        sub_B0D840(&label->fields.image, 0LL);
        goto LABEL_43;
      }
      if ( v19 )
      {
        v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v20, 0LL);
        goto LABEL_42;
      }
    }
LABEL_46:
    sub_B0D97C(this);
  }
LABEL_43:
  ScriptMessageLabel__Release(label, 0LL);
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)v4->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
      labelStock,
      (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
      (const MethodInfo_2A991E0 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
}


void __fastcall ScriptLineMessage__ReturnText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float betweenLineHeight; // s2
  int32_t defaultFontSize; // w9
  float v6; // s0
  float y; // s1
  float defaultTextOnlyLineHeight; // w8
  void *v9; // x1

  if ( (byte_4210A98 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4210A98 = 1;
  }
  x = this->fields.dispPosition.fields.x;
  if ( this->fields.maxDispPosition.fields.x < x )
    this->fields.maxDispPosition.fields.x = x;
  betweenLineHeight = this->fields.betweenLineHeight;
  defaultFontSize = this->fields.defaultFontSize;
  v6 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  y = this->fields.dispPosition.fields.y;
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v6;
  this->fields.fontSize = defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.dispPosition.fields.y = y - (float)(v6 + betweenLineHeight);
  v9 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.defaultColorTag, v9);
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
      sub_B0D97C(0LL);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void __fastcall ScriptLineMessage__SetDefaultState(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float defaultTextOnlyLineHeight; // s0
  float rubyLineHeight; // s1
  int32_t defaultFontSize; // w8
  float defaultBetweenLineHeight; // w9
  void *v7; // x1

  if ( (byte_4210A97 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4210A97 = 1;
  }
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  rubyLineHeight = this->fields.rubyLineHeight;
  defaultFontSize = this->fields.defaultFontSize;
  defaultBetweenLineHeight = this->fields.defaultBetweenLineHeight;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.fontSize = defaultFontSize;
  this->fields.betweenLineHeight = defaultBetweenLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v7 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.defaultColorTag, v7);
}


void __fastcall ScriptLineMessage__SetFontSize(
        ScriptLineMessage_o *this,
        System_String_o *sizeName,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  float v6; // s0
  double v7; // d2
  bool v8; // zf
  double v9; // d0
  float textOnlyLineHeight; // s1
  int32_t v11; // w8
  float v12; // s0
  float y; // s1

  if ( (byte_4210A99 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, sizeName);
    byte_4210A99 = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_B0D97C(0LL);
  v6 = this->fields.fontScale
     * (float)System_Collections_Generic_Dictionary_string__int___get_Item(
                fontSizes,
                sizeName,
                (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v7 = v6;
  v8 = v6 == INFINITY;
  v9 = -v6;
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  if ( !v8 )
    v9 = v7;
  v11 = (int)v9;
  v12 = (float)(int)v9;
  this->fields.fontSize = v11;
  if ( textOnlyLineHeight < (float)v11 )
  {
    y = this->fields.dispPosition.fields.y;
    this->fields.textOnlyLineHeight = v12;
    this->fields.maxDispPosition.fields.y = y - v12;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage__UpdateLabels(
        ScriptLineMessage_o *this,
        System_String_o *txt,
        bool isFoward,
        System_String_o *enforceColor,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  ScriptLineMessage___c__DisplayClass52_0_o *v30; // x23
  __int64 Chars; // x0
  bool v32; // w8
  ScriptLineMessage___c__DisplayClass52_0_Fields *p_fields; // x24
  __int64 v34; // x1
  __int64 v35; // x2
  System_Text_StringBuilder_o *v36; // x20
  struct System_String_o **p_defaultColorTag; // x20
  struct System_String_o *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  ScriptLineMessage_ProcAddLabel_o *v41; // x25
  __int64 v42; // x1
  __int64 v43; // x2
  int32_t v44; // w28
  int v45; // w26
  System_String_o *v46; // x0
  System_String_o *v47; // x20
  int32_t v48; // w1
  int32_t v49; // w2
  System_String_o *v50; // x1
  System_String_o *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x1
  const MethodInfo *v54; // x1
  struct System_String_o *defaultColorTag; // x1
  System_String_o *v56; // x20
  System_String_array *v57; // x20
  struct System_String_o *v58; // x1
  System_String_o *v59; // x0
  const MethodInfo *v60; // x6
  bool v61; // w2
  UnityEngine_Font_o *v62; // x4
  System_String_o *v63; // x1
  ScriptLineMessage_o *v64; // x0
  int32_t v65; // w20
  int32_t BraceIndex; // w0
  int32_t v67; // w21
  System_String_o *v68; // x0
  int32_t v69; // w20
  System_String_o *String; // x0
  bool v71; // zf
  System_String_o *v72; // x20
  System_String_o *v73; // x0
  System_Text_StringBuilder_o *tmpTxt; // x20
  __int64 v75; // x1
  ScriptReplaceString_c *v76; // x0
  int32_t playerGenderIndex; // w20
  System_String_o *TagSplitString; // x20
  struct System_String_o *v79; // x1
  System_String_o *v80; // x3
  struct System_String_o *tmpColorTag; // x1
  System_String_o *v82; // x20
  System_Text_StringBuilder_o *v83; // x20
  ScriptLineMessage_ProcAddLabel2_o *v84; // [xsp+8h] [xbp-78h]
  struct System_String_o **v86; // [xsp+18h] [xbp-68h]
  System_String_o *overrideColor; // [xsp+20h] [xbp-60h]
  System_String_o *text; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4210A96 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptLineMessage_ProcAddLabel2_TypeInfo, txt);
    sub_B0D8A4(&ScriptLineMessage_ProcAddLabel_TypeInfo, v12);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v13);
    sub_B0D8A4(&ScriptReplaceString_TypeInfo, v14);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v15);
    sub_B0D8A4(&Method_ScriptLineMessage___c__DisplayClass52_0__UpdateLabels_b__0__, v16);
    sub_B0D8A4(&Method_ScriptLineMessage___c__DisplayClass52_0__UpdateLabels_b__1__, v17);
    sub_B0D8A4(&ScriptLineMessage___c__DisplayClass52_0_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_22052/*"servantName"*/, v19);
    sub_B0D8A4(&StringLiteral_15691/*"[-]"*/, v20);
    sub_B0D8A4(&StringLiteral_19315/*"i"*/, v21);
    sub_B0D8A4(&StringLiteral_15882/*"[~1]"*/, v22);
    sub_B0D8A4(&StringLiteral_15817/*"[^"*/, v23);
    sub_B0D8A4(&StringLiteral_21732/*"r"*/, v24);
    sub_B0D8A4(&StringLiteral_20291/*"line"*/, v25);
    sub_B0D8A4(&StringLiteral_19474/*"image"*/, v26);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v27);
    sub_B0D8A4(&StringLiteral_15881/*"[~"*/, v28);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v29);
    byte_4210A96 = 1;
  }
  text = 0LL;
  v30 = (ScriptLineMessage___c__DisplayClass52_0_o *)sub_B0D974(
                                                       ScriptLineMessage___c__DisplayClass52_0_TypeInfo,
                                                       txt,
                                                       isFoward);
  ScriptLineMessage___c__DisplayClass52_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_97;
  v30->fields.__4__this = this;
  sub_B0D840(&v30->fields.__4__this, this);
  v30->fields.font = font;
  v32 = isFoward;
  p_fields = &v30->fields;
  v30->fields.isFoward = v32;
  sub_B0D840(&v30->fields.font, font);
  v36 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v34, v35);
  System_Text_StringBuilder___ctor(v36, 0LL);
  v30->fields.tmpTxt = v36;
  sub_B0D840(&v30->fields, v36);
  p_defaultColorTag = &this->fields.defaultColorTag;
  if ( enforceColor )
  {
    *p_defaultColorTag = enforceColor;
    sub_B0D840(&this->fields.defaultColorTag, enforceColor);
  }
  v38 = *p_defaultColorTag;
  v86 = &this->fields.defaultColorTag;
  v30->fields.tmpColorTag = *p_defaultColorTag;
  sub_B0D840(&v30->fields.tmpColorTag, v38);
  v41 = (ScriptLineMessage_ProcAddLabel_o *)sub_B0D974(ScriptLineMessage_ProcAddLabel_TypeInfo, v39, v40);
  ScriptLineMessage_ProcAddLabel___ctor(
    v41,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass52_0__UpdateLabels_b__0__,
    0LL);
  v84 = (ScriptLineMessage_ProcAddLabel2_o *)sub_B0D974(ScriptLineMessage_ProcAddLabel2_TypeInfo, v42, v43);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v84,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass52_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_97:
    sub_B0D97C(Chars);
  overrideColor = enforceColor;
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_93:
    if ( !v41 )
      goto LABEL_97;
    goto LABEL_94;
  }
  v44 = 0;
  v45 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v44, 0LL) != 91 )
    {
      tmpTxt = p_fields->tmpTxt;
      Chars = System_String__get_Chars(txt, v44, 0LL);
      if ( !tmpTxt )
        goto LABEL_97;
      System_Text_StringBuilder__Append_42158644(tmpTxt, Chars, 0LL);
      v67 = v44;
      goto LABEL_91;
    }
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v65 = v44 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v44 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)p_fields->tmpTxt;
      if ( !p_fields->tmpTxt )
        goto LABEL_97;
      Chars = (__int64)System_Text_StringBuilder__Append_42155400(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15681/*"["*/,
                         0LL);
      goto LABEL_92;
    }
    v67 = BraceIndex;
    Chars = System_String__get_Chars(txt, v65, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v41 )
        goto LABEL_97;
      ScriptLineMessage_ProcAddLabel__Invoke(v41, 0LL);
      v68 = System_String__Substring_43913640(txt, v44 + 2, v45 + v67 - 2, 0LL);
      v69 = System_Int32__Parse(v68, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      String = ScriptReplaceString__GetString(v69, 0LL);
      v71 = v69 == 1;
      v72 = String;
      if ( v71 && removeUserNameColorCode )
      {
        if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        }
        v73 = ScriptMessageLabel__RemoveColorTag(v72, 0LL);
      }
      else
      {
        v73 = System_String__Concat_43849904(String, (System_String_o *)StringLiteral_15691/*"[-]"*/, 0LL);
      }
      tmpColorTag = v30->fields.tmpColorTag;
      v82 = v73;
      this->fields.defaultColorTag = tmpColorTag;
      sub_B0D840(v86, tmpColorTag);
      v61 = v30->fields.isFoward;
      v62 = v30->fields.font;
      v64 = this;
      v63 = v82;
      v80 = overrideColor;
LABEL_89:
      ScriptLineMessage__UpdateLabels(v64, v63, v61, v80, v62, 0, v60);
      defaultColorTag = this->fields.defaultColorTag;
      v30->fields.tmpColorTag = defaultColorTag;
LABEL_90:
      sub_B0D840(&v30->fields.tmpColorTag, defaultColorTag);
      goto LABEL_91;
    }
    Chars = System_String__get_Chars(txt, v65, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v41 )
        goto LABEL_97;
      ScriptLineMessage_ProcAddLabel__Invoke(v41, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      if ( !byte_4210BC1 )
      {
        sub_B0D8A4(&ScriptReplaceString_TypeInfo, v75);
        byte_4210BC1 = 1;
      }
      v76 = ScriptReplaceString_TypeInfo;
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v76 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v76->static_fields->playerGenderIndex;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v44 + 2, playerGenderIndex, 0LL);
      v79 = v30->fields.tmpColorTag;
      this->fields.defaultColorTag = v79;
      sub_B0D840(v86, v79);
      v61 = v30->fields.isFoward;
      v62 = v30->fields.font;
      v64 = this;
      v63 = TagSplitString;
LABEL_86:
      v80 = overrideColor;
      goto LABEL_89;
    }
    Chars = System_String__get_Chars(txt, v65, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v41 )
        goto LABEL_97;
      ScriptLineMessage_ProcAddLabel__Invoke(v41, 0LL);
      v46 = System_String__Substring_43913640(txt, v44, v45 + v67 + 1, 0LL);
      goto LABEL_25;
    }
    if ( System_String__get_Chars(txt, v65, 0LL) != 61 )
      break;
LABEL_91:
    v65 = v67 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, struct System_Text_StringBuilder_o *, ScriptLineMessage_ProcAddLabel_o *, Il2CppMethodPointer))this->klass->vtable._5_AfterParseEachChar.method)(
              this,
              p_fields->tmpTxt,
              v41,
              this->klass->vtable._6_PreProcSetRubyLabel.methodPtr);
LABEL_92:
    v45 = -v65;
    v44 = v65;
    if ( v65 >= txt->fields.m_stringLength )
      goto LABEL_93;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v65, 0LL);
  if ( !Chars )
    goto LABEL_97;
  v47 = (System_String_o *)Chars;
  Chars = System_String__Equals_43837244((System_String_o *)Chars, (System_String_o *)StringLiteral_19474/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v41, 0LL);
    v48 = v44 + 7;
    v49 = v45 + v67 - 7;
    goto LABEL_23;
  }
  Chars = System_String__Equals_43837244(v47, (System_String_o *)StringLiteral_19315/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v41, 0LL);
    v48 = v44 + 3;
    v49 = v45 + v67 - 3;
LABEL_23:
    v50 = System_String__Substring_43913640(txt, v48, v49, 0LL);
    v51 = (System_String_o *)StringLiteral_15817/*"[^"*/;
    v52 = (System_String_o *)StringLiteral_15917/*"]"*/;
LABEL_24:
    v46 = System_String__Concat_43852188(v51, v50, v52, 0LL);
LABEL_25:
    v53 = v46;
    Chars = (__int64)v84;
    if ( !v84 )
      goto LABEL_97;
LABEL_26:
    ScriptLineMessage_ProcAddLabel2__Invoke((ScriptLineMessage_ProcAddLabel2_o *)Chars, v53, 0LL);
    goto LABEL_91;
  }
  Chars = System_String__Equals_43837244(v47, (System_String_o *)StringLiteral_21732/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v41, 0LL);
    ScriptLineMessage__ReturnText(this, v54);
    if ( overrideColor )
    {
      *v86 = overrideColor;
      sub_B0D840(v86, overrideColor);
    }
    defaultColorTag = *v86;
    v30->fields.tmpColorTag = *v86;
    goto LABEL_90;
  }
  Chars = System_String__Equals_43837244(v47, (System_String_o *)StringLiteral_22052/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v41, 0LL);
    v56 = System_String__Substring_43913640(txt, v44 + 12, v45 + v67 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v57 = ScriptMessageLabel__AnalysTagParam(v56, 0, 0LL);
    v58 = v30->fields.tmpColorTag;
    this->fields.defaultColorTag = v58;
    sub_B0D840(v86, v58);
    v59 = ScriptMessageLabel__GetServantChangeName(v57, 0LL);
    v61 = v30->fields.isFoward;
    v62 = v30->fields.font;
    v63 = v59;
    v64 = this;
    goto LABEL_86;
  }
  Chars = System_String__StartsWith(v47, (System_String_o *)StringLiteral_20291/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v41, 0LL);
    Chars = (__int64)System_String__Substring_43913640(txt, v44 + 5, v45 + v67 - 5, 0LL);
    if ( !Chars )
      goto LABEL_97;
    v50 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v51 = (System_String_o *)StringLiteral_15881/*"[~"*/;
      v52 = (System_String_o *)StringLiteral_15917/*"]"*/;
      goto LABEL_24;
    }
    Chars = (__int64)v84;
    if ( !v84 )
      goto LABEL_97;
    v53 = (System_String_o *)StringLiteral_15882/*"[~1]"*/;
    goto LABEL_26;
  }
  if ( v67 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_43913640(txt, v44, v45 + v67 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(&v30->fields.tmpColorTag, &text, overrideColor, 0LL);
    Chars = (__int64)p_fields->tmpTxt;
    if ( !p_fields->tmpTxt )
      goto LABEL_97;
    System_Text_StringBuilder__Append_42155400((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_91;
  }
  v83 = p_fields->tmpTxt;
  Chars = (__int64)System_String__Substring(txt, v44, 0LL);
  if ( !v83 )
    goto LABEL_97;
  Chars = (__int64)System_Text_StringBuilder__Append_42155400(v83, (System_String_o *)Chars, 0LL);
  if ( !v41 )
    goto LABEL_97;
LABEL_94:
  ScriptLineMessage_ProcAddLabel__Invoke(v41, 0LL);
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
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, &v5, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall ScriptLineMessage_ProcAddLabel__Invoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  ScriptLineMessage_ProcAddLabel_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
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
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ScriptLineMessage_ProcAddLabel_o *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (ScriptLineMessage_ProcAddLabel_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v18->fields.extra_arg, method, v2, v3);
      if ( (sub_B0D8D4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B0D8CC(v20);
      v23 = sub_B0DCD0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AA67A0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B0D954(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
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
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AA67A0(v19, class_0, v9);
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
  sub_B0D840(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__Invoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ScriptLineMessage_ProcAddLabel2_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptLineMessage_ProcAddLabel2_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  ScriptLineMessage_ProcAddLabel2_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ScriptLineMessage_ProcAddLabel2_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, txt, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = txt->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(txt, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(txt, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(txt, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(txt, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(txt, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, txt, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, txt, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                txt,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, txt, v29);
    }
  }
}


void __fastcall ScriptLineMessage___c__DisplayClass52_0___ctor(
        ScriptLineMessage___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScriptLineMessage___c__DisplayClass52_0___UpdateLabels_b__0(
        ScriptLineMessage___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *tmpTxt; // x0
  ScriptLineMessage_o *_4__this; // x20
  struct ScriptLineMessage_o *v5; // x8
  struct System_String_o *tmpColorTag; // x1

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
    sub_B0D97C(tmpTxt);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (System_Text_StringBuilder_o *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *(_QWORD *)&tmpTxt[2].fields.m_ChunkLength = tmpColorTag;
  sub_B0D840(&tmpTxt[2].fields.m_ChunkLength, tmpColorTag);
}


void __fastcall ScriptLineMessage___c__DisplayClass52_0___UpdateLabels_b__1(
        ScriptLineMessage___c__DisplayClass52_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  ScriptLineMessage___c__DisplayClass52_0_o *v3; // x19
  struct System_Text_StringBuilder_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v3 = this;
  if ( text->fields.m_stringLength >= 1 )
  {
    this = (ScriptLineMessage___c__DisplayClass52_0_o *)this->fields.__4__this;
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
  this = (ScriptLineMessage___c__DisplayClass52_0_o *)v3->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  tmpColorTag = (struct System_Text_StringBuilder_o *)v3->fields.tmpColorTag;
  this[2].fields.tmpTxt = tmpColorTag;
  sub_B0D840(&this[2].fields, tmpColorTag);
}