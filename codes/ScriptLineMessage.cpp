void __fastcall ScriptLineMessage___ctor(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  void *v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20

  if ( (byte_4183CD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v6);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v7);
    sub_B2C35C(&StringLiteral_20459/*"medium"*/, v8);
    sub_B2C35C(&StringLiteral_22169/*"small"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    sub_B2C35C(&StringLiteral_20177/*"large"*/, v11);
    sub_B2C35C(&StringLiteral_23350/*"x-large"*/, v12);
    byte_4183CD1 = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v13,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v13 )
    sub_B2C434(v14, v15);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v13,
    (UIPanel_o *)StringLiteral_747/*"-"*/,
    30,
    (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v13,
    (UIPanel_o *)StringLiteral_22169/*"small"*/,
    24,
    (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v13,
    (UIPanel_o *)StringLiteral_20459/*"medium"*/,
    30,
    (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v13,
    (UIPanel_o *)StringLiteral_20177/*"large"*/,
    48,
    (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)v13,
    (UIPanel_o *)StringLiteral_23350/*"x-large"*/,
    64,
    (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v13;
  sub_B2C2F8(&this->fields.fontSizes, v13);
  v16 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.defaultColorTag, v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v17;
  sub_B2C2F8(&this->fields.dispLabelList, v17);
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
  const MethodInfo *v13; // x1
  ScriptMessageLabel_o *v14; // x20
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UILabel_o *v18; // x0
  const MethodInfo *v19; // x1
  UILabel_o *RubyLabel; // x0
  System_String_o *v21; // x23
  __int64 v22; // x23
  int v23; // w8
  int32_t fontSize; // w4
  System_String_o *v25; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v27; // x1
  UISprite_o *v28; // x0
  System_String_o *v29; // x23
  int v30; // w8
  __int64 v31; // x24
  System_String_o *v32; // x23
  float v33; // s0
  int v34; // w8
  float v35; // s8
  UISprite_o *ImageSprite; // x0
  System_String_o *v37; // x0
  int32_t v38; // w22
  int32_t v39; // w0
  UILabel_o *MainLabel; // x0
  UnityEngine_Object_o *messageOffset; // x21
  UnityEngine_Transform_o *transform; // x21
  int v43; // s0
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v47; // x21
  float v48; // s0
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

  if ( (byte_4183CCA & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, text);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4183CCA = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_60;
  v14 = (ScriptMessageLabel_o *)Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v15 = Label + 112;
  *(_DWORD *)(v15 + 52) = 0;
  Label = sub_B2C2F8(v15, colorTag);
  if ( !text )
    goto LABEL_60;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
  {
LABEL_26:
    MainLabel = ScriptLineMessage__FetchMainLabel(this, v16);
    v14->fields.main = MainLabel;
    sub_B2C2F8(&v14->fields, MainLabel);
    ScriptMessageLabel__UpdateLabel(
      v14,
      &v14->fields.main,
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
    v18 = ScriptLineMessage__FetchMainLabel(this, v17);
    v14->fields.main = v18;
    sub_B2C2F8(&v14->fields, v18);
    RubyLabel = ScriptLineMessage__FetchRubyLabel(this, v19);
    v14->fields.ruby = RubyLabel;
    sub_B2C2F8(&v14->fields.ruby, RubyLabel);
    v21 = System_String__Substring_44369268(text, 2, text->fields.m_stringLength - 3, 0LL);
    Label = sub_B2C374(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_60;
    v13 = (const MethodInfo *)Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v21 )
        goto LABEL_60;
      Label = (__int64)System_String__Split(v21, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_60;
      v22 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_PreProcSetRubyLabel.method)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._7_SetText.methodPtr);
        v23 = *(_DWORD *)(v22 + 24);
        if ( v23 )
        {
          fontSize = this->fields.fontSize;
          v25 = *(System_String_o **)(v22 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v23 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              v14,
              &v14->fields.main,
              &v14->fields.ruby,
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v25,
              font,
              0LL);
          else
            ScriptMessageLabel__UpdateRuby(
              v14,
              &v14->fields.main,
              &v14->fields.ruby,
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v25,
              *(System_String_o **)(v22 + 40),
              font,
              this->fields.isTalkName,
              0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_61:
    v56 = sub_B2C460(Label);
    sub_B2C400(v56, 0LL);
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0LL) == 126 )
    {
      ImageSprite = ScriptLineMessage__FetchImageSprite(this, v16);
      v14->fields.image = ImageSprite;
      sub_B2C2F8(&v14->fields.image, ImageSprite);
      v37 = System_String__Substring_44369268(text, 2, text->fields.m_stringLength - 3, 0LL);
      v38 = this->fields.fontSize;
      v39 = System_Int32__Parse(v37, 0LL);
      ScriptMessageLabel__UpdateLine(v14, &v14->fields.image, &this->fields.dispPosition, v38, v39, 0LL);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  v28 = ScriptLineMessage__FetchImageSprite(this, v27);
  v14->fields.image = v28;
  sub_B2C2F8(&v14->fields.image, v28);
  v29 = System_String__Substring_44369268(text, 2, text->fields.m_stringLength - 3, 0LL);
  Label = sub_B2C374(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_60;
  v13 = (const MethodInfo *)Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_61;
  *(_WORD *)(Label + 32) = 32;
  if ( !v29 )
    goto LABEL_60;
  Label = (__int64)System_String__Split(v29, (System_Char_array *)Label, 0LL);
  if ( !Label )
    goto LABEL_60;
  v30 = *(_DWORD *)(Label + 24);
  v31 = Label;
  if ( !v30 )
    goto LABEL_61;
  v32 = *(System_String_o **)(Label + 32);
  if ( v30 <= 1 )
  {
    Label = sub_B2C374(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_60;
    v13 = (const MethodInfo *)Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_61;
    *(_WORD *)(Label + 32) = 58;
    if ( !v32 )
      goto LABEL_60;
    Label = (__int64)System_String__Split(v32, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_60;
    v49 = *(_DWORD *)(Label + 24);
    v50 = Label;
    if ( v49 <= 1 )
    {
      if ( !v49 )
        goto LABEL_61;
      ScriptMessageLabel__UpdateImage(
        v14,
        &v14->fields.image,
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        0LL);
    }
    else
    {
      v51 = ScriptLineMessage__FetchRubyLabel(this, v13);
      v14->fields.ruby = v51;
      Label = sub_B2C2F8(&v14->fields.ruby, v51);
      if ( *(_DWORD *)(v50 + 24) < 2u )
        goto LABEL_61;
      ScriptMessageLabel__UpdateImageRuby(
        v14,
        &v14->fields.image,
        &v14->fields.ruby,
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
    v33 = System_Single__Parse(*(System_String_o **)(Label + 40), 0LL);
    v34 = *(_DWORD *)(v31 + 24);
    v35 = v33;
    if ( v34 == 2 )
    {
      ScriptMessageLabel__UpdateImage_34418152(
        v14,
        &v14->fields.image,
        &this->fields.dispPosition,
        this->fields.fontSize,
        v33,
        v32,
        0,
        0LL);
    }
    else if ( v34 <= 3 )
    {
      if ( (unsigned int)v34 <= 2 )
        goto LABEL_61;
      v52 = *(System_String_o **)(v31 + 48);
      Label = sub_B2C374(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_60;
      v13 = (const MethodInfo *)Label;
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
      ScriptMessageLabel__UpdateImage_34418280(
        v14,
        &v14->fields.image,
        &this->fields.dispPosition,
        this->fields.fontSize,
        v35,
        v32,
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
    *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_60;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v43, 0LL);
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
          v47 = (UnityEngine_Transform_o *)Label;
          LODWORD(v48) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0LL);
          if ( v47 )
          {
            v59.fields.x = (float)condensedSize / fabsf(v48);
            v59.fields.y = 1.0;
            v59.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v47, v59, 0LL);
            goto LABEL_39;
          }
        }
LABEL_60:
        sub_B2C434(Label, v13);
      }
    }
  }
LABEL_39:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_60;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Label,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
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
  __int64 v7; // x1
  struct System_Collections_Generic_List_ScriptMessageLabel__o *dispLabelList; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4183CC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v6);
    byte_4183CC4 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ScriptLineMessage__Init(this, method);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_9;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)dispLabelList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v10.fields.current, v9);
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
LABEL_9:
    sub_B2C434(dispLabelList, v7);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)dispLabelList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
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
  __int64 v10; // x1
  int v11; // s0

  if ( (byte_4183CCF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4183CCF = 1;
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
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v8 )
      sub_B2C434(v9, v10);
    UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)&v11, 0LL);
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
  __int64 v10; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *v14; // x20

  if ( (byte_4183CC2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v8);
    byte_4183CC2 = 1;
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
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
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
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
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
        UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_31;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v13, 0LL);
    }
    labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_31:
      sub_B2C434(labelStock, v10);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(labelStock, (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v14, 0LL);
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
    sub_B2C434(messageRoot, method);
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
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x20
  struct UnityEngine_GameObject_o *imagePrefab; // x20
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  int v15; // w8
  void *v16; // x21
  unsigned int v17; // w22
  UnityEngine_Transform_o *transform; // x19
  int v19; // s0
  UnityEngine_Transform_o *v22; // x19
  int v23; // s0
  __int64 v27; // x0

  if ( (byte_4183CC7 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v7);
    byte_4183CC7 = 1;
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
                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_srcLineSprite )
    {
      v13 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_srcLineSprite )
      {
        v11 = (UnityEngine_Component_o *)Component_srcLineSprite;
        Component_srcLineSprite = UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)Component_srcLineSprite,
                                    0LL);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)Component_srcLineSprite,
            this->fields.messageRoot,
            0LL);
          Component_srcLineSprite = UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( this->fields.messageRoot )
          {
            v14 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
            Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.messageRoot,
                                        0LL);
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (void *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                  0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__set_layer(v14, (int32_t)Component_srcLineSprite, 0LL);
                Component_srcLineSprite = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                            v13,
                                            (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_srcLineSprite )
                {
                  v15 = *((_DWORD *)Component_srcLineSprite + 6);
                  v16 = Component_srcLineSprite;
                  if ( v15 < 1 )
                    goto LABEL_22;
                  v17 = 0;
                  while ( 1 )
                  {
                    if ( v17 >= v15 )
                    {
                      v27 = sub_B2C460(Component_srcLineSprite);
                      sub_B2C400(v27, 0LL);
                    }
                    Component_srcLineSprite = (void *)*((_QWORD *)v16 + (int)v17 + 4);
                    if ( !Component_srcLineSprite )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_srcLineSprite,
                      this->fields.depthOffset + *((_DWORD *)Component_srcLineSprite + 42),
                      0LL);
                    v15 = *((_DWORD *)v16 + 6);
                    if ( (int)++v17 >= v15 )
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
    sub_B2C434(Component_srcLineSprite, v10);
  }
  Component_srcLineSprite = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                              imageStock,
                              (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v11 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_25;
LABEL_22:
  transform = UnityEngine_Component__get_transform(v11, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = UnityEngine_Component__get_transform(v11, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL);
  if ( !v22 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  return (UISprite_o *)v11;
}


ScriptMessageLabel_o *__fastcall ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0
  ScriptMessageLabel_o *v6; // x19

  if ( (byte_4183CC8 & 1) == 0 )
  {
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v4);
    byte_4183CC8 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                                     labelStock,
                                     (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v6 = (ScriptMessageLabel_o *)sub_B2C42C(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v6, 0LL);
  return v6;
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
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x20
  struct UnityEngine_GameObject_o *mainPrefab; // x20
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  int v15; // w8
  void *v16; // x21
  unsigned int v17; // w22
  UnityEngine_Transform_o *transform; // x19
  int v19; // s0
  UnityEngine_Transform_o *v22; // x19
  int v23; // s0
  __int64 v27; // x0

  if ( (byte_4183CC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_4183CC5 = 1;
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
                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_srcLineSprite )
    {
      v13 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_srcLineSprite )
      {
        v11 = (UnityEngine_Component_o *)Component_srcLineSprite;
        Component_srcLineSprite = UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)Component_srcLineSprite,
                                    0LL);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)Component_srcLineSprite,
            this->fields.messageRoot,
            0LL);
          Component_srcLineSprite = UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( this->fields.messageRoot )
          {
            v14 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
            Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.messageRoot,
                                        0LL);
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (void *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                  0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__set_layer(v14, (int32_t)Component_srcLineSprite, 0LL);
                Component_srcLineSprite = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                            v13,
                                            (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_srcLineSprite )
                {
                  v15 = *((_DWORD *)Component_srcLineSprite + 6);
                  v16 = Component_srcLineSprite;
                  if ( v15 < 1 )
                    goto LABEL_22;
                  v17 = 0;
                  while ( 1 )
                  {
                    if ( v17 >= v15 )
                    {
                      v27 = sub_B2C460(Component_srcLineSprite);
                      sub_B2C400(v27, 0LL);
                    }
                    Component_srcLineSprite = (void *)*((_QWORD *)v16 + (int)v17 + 4);
                    if ( !Component_srcLineSprite )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_srcLineSprite,
                      this->fields.depthOffset + *((_DWORD *)Component_srcLineSprite + 42),
                      0LL);
                    v15 = *((_DWORD *)v16 + 6);
                    if ( (int)++v17 >= v15 )
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
    sub_B2C434(Component_srcLineSprite, v10);
  }
  Component_srcLineSprite = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                              mainStock,
                              (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v11 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_25;
LABEL_22:
  transform = UnityEngine_Component__get_transform(v11, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = UnityEngine_Component__get_transform(v11, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL);
  if ( !v22 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  return (UILabel_o *)v11;
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
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x20
  struct UnityEngine_GameObject_o *rubyPrefab; // x20
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  int v15; // w8
  void *v16; // x21
  unsigned int v17; // w22
  UnityEngine_Transform_o *transform; // x21
  int v19; // s0
  UnityEngine_Transform_o *v22; // x21
  int v23; // s0
  __int64 v27; // x0

  if ( (byte_4183CC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_4183CC6 = 1;
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
                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_srcLineSprite )
    {
      v13 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_srcLineSprite )
      {
        v11 = (UnityEngine_Component_o *)Component_srcLineSprite;
        Component_srcLineSprite = UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)Component_srcLineSprite,
                                    0LL);
        if ( Component_srcLineSprite )
        {
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)Component_srcLineSprite,
            this->fields.messageRoot,
            0LL);
          Component_srcLineSprite = UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( this->fields.messageRoot )
          {
            v14 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
            Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.messageRoot,
                                        0LL);
            if ( Component_srcLineSprite )
            {
              Component_srcLineSprite = (void *)UnityEngine_GameObject__get_layer(
                                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                  0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__set_layer(v14, (int32_t)Component_srcLineSprite, 0LL);
                Component_srcLineSprite = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                            v13,
                                            (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_srcLineSprite )
                {
                  v15 = *((_DWORD *)Component_srcLineSprite + 6);
                  v16 = Component_srcLineSprite;
                  if ( v15 < 1 )
                    goto LABEL_22;
                  v17 = 0;
                  while ( 1 )
                  {
                    if ( v17 >= v15 )
                    {
                      v27 = sub_B2C460(Component_srcLineSprite);
                      sub_B2C400(v27, 0LL);
                    }
                    Component_srcLineSprite = (void *)*((_QWORD *)v16 + (int)v17 + 4);
                    if ( !Component_srcLineSprite )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_srcLineSprite,
                      this->fields.depthOffset + *((_DWORD *)Component_srcLineSprite + 42),
                      0LL);
                    v15 = *((_DWORD *)v16 + 6);
                    if ( (int)++v17 >= v15 )
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
    sub_B2C434(Component_srcLineSprite, v10);
  }
  Component_srcLineSprite = System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop(
                              rubyStock,
                              (const MethodInfo_285419C *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v11 = (UnityEngine_Component_o *)Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_25;
LABEL_22:
  transform = UnityEngine_Component__get_transform(v11, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = UnityEngine_Component__get_transform(v11, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL);
  if ( !v22 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  UILabel__set_fontSize((UILabel_o *)v11, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v11;
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

  if ( (byte_4183CC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__, method);
    byte_4183CC3 = 1;
  }
  dispLabelList = this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_B2C434(0LL, method);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)dispLabelList,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
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

  if ( (byte_4183CD0 & 1) == 0 )
  {
    sub_B2C35C(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15845/*"\\[#[^:]+:[^:]+\\]"*/, v3);
    byte_4183CD0 = 1;
  }
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_15845/*"\\[#[^:]+:[^:]+\\]"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage__Init(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  _BOOL4 isRecycle; // w8
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v16; // x20
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v17; // x20
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v18; // x20
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *v19; // x20
  struct UnityEngine_GameObject_o *mainPrefab; // x20
  UnityEngine_GameObject_o *fontSizes; // x0
  __int64 v22; // x1
  UILabel_o *Component_srcLineSprite; // x21
  srcLineSprite_o *v24; // x0
  int defaultFontSize; // w2
  UILabel_o *v26; // x20
  float v27; // s0
  double v28; // d0
  int32_t rubyFontSize; // w8
  float v30; // s1
  float v31; // s0
  double v32; // d0
  float v33; // s0
  double v34; // d0
  float v35; // s1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v37; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v39; // s0
  const MethodInfo *v40; // x1
  UnityEngine_Transform_o *v41; // x20
  int v42; // s0

  if ( (byte_4183CC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v4);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_Stack_UISprite__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_Stack_UILabel__TypeInfo, v12);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v13);
    sub_B2C35C(&StringLiteral_23777/*"■"*/, v14);
    byte_4183CC1 = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v16 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B2C42C(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v16,
        (const MethodInfo_2853B94 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v16;
      sub_B2C2F8(&this->fields.mainStock, v16);
      v17 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B2C42C(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v17,
        (const MethodInfo_2853B94 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v17;
      sub_B2C2F8(&this->fields.rubyStock, v17);
      v18 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B2C42C(System_Collections_Generic_Stack_UISprite__TypeInfo);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v18,
        (const MethodInfo_2853B94 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v18;
      sub_B2C2F8(&this->fields.imageStock, v18);
      v19 = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)sub_B2C42C(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame____ctor(
        v19,
        (const MethodInfo_2853B94 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v19;
      sub_B2C2F8(&this->fields.labelStock, v19);
    }
    mainPrefab = this->fields.mainPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fontSizes = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             fontSizes,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.rubyPrefab,
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v24 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            fontSizes,
            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v26 = (UILabel_o *)v24;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (UnityEngine_GameObject_o *)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)fontSizes,
        (System_Xml_XmlQualifiedName_o *)StringLiteral_747/*"-"*/,
        defaultFontSize,
        (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (UnityEngine_GameObject_o *)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                     (System_Collections_Generic_Dictionary_string__int__o *)fontSizes,
                                                     (System_String_o *)StringLiteral_747/*"-"*/,
                                                     (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v27 = this->fields.fontScale * (float)(int)fontSizes,
           v27 != INFINITY)
        ? (v28 = v27)
        : (v28 = -v27),
          v22 = (unsigned int)(int)v28,
          this->fields.defaultFontSize = v22,
          !Component_srcLineSprite) )
    {
LABEL_37:
      sub_B2C434(fontSizes, v22);
    }
    UILabel__set_fontSize(Component_srcLineSprite, v22, 0LL);
    UILabel__set_text(Component_srcLineSprite, (System_String_o *)StringLiteral_23777/*"■"*/, 0LL);
    fontSizes = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))Component_srcLineSprite->klass->vtable._22_get_localSize.method)(
                                              Component_srcLineSprite,
                                              Component_srcLineSprite->klass->vtable._23_get_drawingDimensions.methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v30;
    if ( rubyFontSize <= 0 )
    {
      if ( !v26 )
        goto LABEL_37;
      v33 = this->fields.fontScale * (float)v26->fields.mFontSize;
      if ( v33 == INFINITY )
        v34 = -INFINITY;
      else
        v34 = v33;
      LODWORD(v22) = (int)v34;
      this->fields.rubyFontSize = (int)v34;
    }
    else
    {
      v31 = this->fields.fontScale * (float)rubyFontSize;
      if ( v31 == INFINITY )
        v32 = -INFINITY;
      else
        v32 = v31;
      v22 = (unsigned int)(int)v32;
      this->fields.rubyFontSize = v22;
      if ( !v26 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v26, v22, 0LL);
    UILabel__set_text(v26, (System_String_o *)StringLiteral_23777/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v26->klass->vtable._22_get_localSize.method)(
      v26,
      v26->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v35;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_srcLineSprite,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
    UnityEngine_Object__Destroy_35314896(v37, 0LL);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v39 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v39;
    if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
    {
      v41 = this->fields.messageOffset;
      *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v41 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v41, *(UnityEngine_Vector3_o *)&v42, 0LL);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, v40);
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
  ScriptMessageLabel_o *v3; // x19
  ScriptLineMessage_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ScriptLineMessage_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  UnityEngine_Object_o *gameObject; // x22
  ScriptLineMessage_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  UnityEngine_Object_o *v14; // x22
  ScriptLineMessage_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  UnityEngine_Object_o *v17; // x22
  System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *labelStock; // x0

  v3 = label;
  v4 = this;
  if ( (byte_4183CC9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UILabel__Push__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Stack_UISprite__Push__, v7);
    this = (ScriptLineMessage_o *)sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4183CC9 = 1;
  }
  if ( !v3 )
    goto LABEL_46;
  p_fields = (ScriptLineMessage_o **)&v3->fields;
  main = (UnityEngine_Object_o *)v3->fields.main;
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
    label = (ScriptMessageLabel_o *)*p_fields;
    if ( this )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
        (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
        (const MethodInfo_2854228 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    }
    *p_fields = 0LL;
    sub_B2C2F8(&v3->fields, 0LL);
  }
  p_ruby = (ScriptLineMessage_o **)&v3->fields.ruby;
  ruby = (UnityEngine_Object_o *)v3->fields.ruby;
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
    this = (ScriptLineMessage_o *)v4->fields.rubyStock;
    label = (ScriptMessageLabel_o *)*p_ruby;
    if ( this )
    {
      System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
        (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
        (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
        (const MethodInfo_2854228 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_46;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v14, 0LL);
    }
    *p_ruby = 0LL;
    sub_B2C2F8(&v3->fields.ruby, 0LL);
  }
  p_image = (ScriptLineMessage_o **)&v3->fields.image;
  image = (UnityEngine_Object_o *)v3->fields.image;
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
      this = (ScriptLineMessage_o *)v4->fields.imageStock;
      label = (ScriptMessageLabel_o *)*p_image;
      if ( this )
      {
        System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
          (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)this,
          (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)label,
          (const MethodInfo_2854228 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_42:
        *p_image = 0LL;
        sub_B2C2F8(&v3->fields.image, 0LL);
        goto LABEL_43;
      }
      if ( label )
      {
        v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v17, 0LL);
        goto LABEL_42;
      }
    }
LABEL_46:
    sub_B2C434(this, label);
  }
LABEL_43:
  ScriptMessageLabel__Release(v3, 0LL);
  labelStock = (System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame__o *)v4->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push(
      labelStock,
      (System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_o *)v3,
      (const MethodInfo_2854228 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
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

  if ( (byte_4183CCD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4183CCD = 1;
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
  sub_B2C2F8(&this->fields.defaultColorTag, v9);
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
      sub_B2C434(0LL, method);
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

  if ( (byte_4183CCC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4183CCC = 1;
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
  sub_B2C2F8(&this->fields.defaultColorTag, v7);
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

  if ( (byte_4183CCE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, sizeName);
    byte_4183CCE = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_B2C434(0LL, sizeName);
  v6 = this->fields.fontScale
     * (float)System_Collections_Generic_Dictionary_string__int___get_Item(
                fontSizes,
                sizeName,
                (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
  System_String_o *v32; // x1
  bool v33; // w8
  ScriptLineMessage___c__DisplayClass52_0_Fields *p_fields; // x24
  System_Text_StringBuilder_o *v35; // x20
  struct System_String_o **p_defaultColorTag; // x20
  struct System_String_o *v37; // x1
  ScriptLineMessage_ProcAddLabel_o *v38; // x25
  int32_t v39; // w28
  int v40; // w26
  System_String_o *v41; // x0
  System_String_o *v42; // x20
  int32_t v43; // w1
  int32_t v44; // w2
  System_String_o *v45; // x0
  System_String_o *v46; // x2
  const MethodInfo *v47; // x1
  struct System_String_o *defaultColorTag; // x1
  System_String_o *v49; // x20
  System_String_array *v50; // x20
  struct System_String_o *v51; // x1
  System_String_o *v52; // x0
  const MethodInfo *v53; // x6
  bool v54; // w2
  UnityEngine_Font_o *v55; // x4
  System_String_o *v56; // x1
  ScriptLineMessage_o *v57; // x0
  int32_t v58; // w20
  int32_t BraceIndex; // w0
  int32_t v60; // w21
  System_String_o *v61; // x0
  int32_t v62; // w20
  System_String_o *String; // x0
  bool v64; // zf
  System_String_o *v65; // x20
  System_String_o *v66; // x0
  System_Text_StringBuilder_o *tmpTxt; // x20
  __int64 v68; // x1
  ScriptReplaceString_c *v69; // x0
  int32_t playerGenderIndex; // w20
  System_String_o *TagSplitString; // x20
  struct System_String_o *v72; // x1
  System_String_o *v73; // x3
  struct System_String_o *tmpColorTag; // x1
  System_String_o *v75; // x20
  System_Text_StringBuilder_o *v76; // x20
  ScriptLineMessage_ProcAddLabel2_o *v77; // [xsp+8h] [xbp-78h]
  struct System_String_o **v79; // [xsp+18h] [xbp-68h]
  System_String_o *overrideColor; // [xsp+20h] [xbp-60h]
  System_String_o *text; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4183CCB & 1) == 0 )
  {
    sub_B2C35C(&ScriptLineMessage_ProcAddLabel2_TypeInfo, txt);
    sub_B2C35C(&ScriptLineMessage_ProcAddLabel_TypeInfo, v12);
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, v13);
    sub_B2C35C(&ScriptReplaceString_TypeInfo, v14);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v15);
    sub_B2C35C(&Method_ScriptLineMessage___c__DisplayClass52_0__UpdateLabels_b__0__, v16);
    sub_B2C35C(&Method_ScriptLineMessage___c__DisplayClass52_0__UpdateLabels_b__1__, v17);
    sub_B2C35C(&ScriptLineMessage___c__DisplayClass52_0_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_21979/*"servantName"*/, v19);
    sub_B2C35C(&StringLiteral_15644/*"[-]"*/, v20);
    sub_B2C35C(&StringLiteral_19254/*"i"*/, v21);
    sub_B2C35C(&StringLiteral_15835/*"[~1]"*/, v22);
    sub_B2C35C(&StringLiteral_15770/*"[^"*/, v23);
    sub_B2C35C(&StringLiteral_21662/*"r"*/, v24);
    sub_B2C35C(&StringLiteral_20228/*"line"*/, v25);
    sub_B2C35C(&StringLiteral_19412/*"image"*/, v26);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v27);
    sub_B2C35C(&StringLiteral_15834/*"[~"*/, v28);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v29);
    byte_4183CCB = 1;
  }
  text = 0LL;
  v30 = (ScriptLineMessage___c__DisplayClass52_0_o *)sub_B2C42C(ScriptLineMessage___c__DisplayClass52_0_TypeInfo);
  ScriptLineMessage___c__DisplayClass52_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_97;
  v30->fields.__4__this = this;
  sub_B2C2F8(&v30->fields.__4__this, this);
  v30->fields.font = font;
  v33 = isFoward;
  p_fields = &v30->fields;
  v30->fields.isFoward = v33;
  sub_B2C2F8(&v30->fields.font, font);
  v35 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v35, 0LL);
  v30->fields.tmpTxt = v35;
  sub_B2C2F8(&v30->fields, v35);
  p_defaultColorTag = &this->fields.defaultColorTag;
  if ( enforceColor )
  {
    *p_defaultColorTag = enforceColor;
    sub_B2C2F8(&this->fields.defaultColorTag, enforceColor);
  }
  v37 = *p_defaultColorTag;
  v79 = &this->fields.defaultColorTag;
  v30->fields.tmpColorTag = *p_defaultColorTag;
  sub_B2C2F8(&v30->fields.tmpColorTag, v37);
  v38 = (ScriptLineMessage_ProcAddLabel_o *)sub_B2C42C(ScriptLineMessage_ProcAddLabel_TypeInfo);
  ScriptLineMessage_ProcAddLabel___ctor(
    v38,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass52_0__UpdateLabels_b__0__,
    0LL);
  v77 = (ScriptLineMessage_ProcAddLabel2_o *)sub_B2C42C(ScriptLineMessage_ProcAddLabel2_TypeInfo);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v77,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass52_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_97:
    sub_B2C434(Chars, v32);
  overrideColor = enforceColor;
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_93:
    if ( !v38 )
      goto LABEL_97;
    goto LABEL_94;
  }
  v39 = 0;
  v40 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v39, 0LL) != 91 )
    {
      tmpTxt = p_fields->tmpTxt;
      Chars = System_String__get_Chars(txt, v39, 0LL);
      if ( !tmpTxt )
        goto LABEL_97;
      System_Text_StringBuilder__Append_42411944(tmpTxt, Chars, 0LL);
      v60 = v39;
      goto LABEL_91;
    }
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v58 = v39 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v39 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)p_fields->tmpTxt;
      if ( !p_fields->tmpTxt )
        goto LABEL_97;
      Chars = (__int64)System_Text_StringBuilder__Append_42408700(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15634/*"["*/,
                         0LL);
      goto LABEL_92;
    }
    v60 = BraceIndex;
    Chars = System_String__get_Chars(txt, v58, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v38 )
        goto LABEL_97;
      ScriptLineMessage_ProcAddLabel__Invoke(v38, 0LL);
      v61 = System_String__Substring_44369268(txt, v39 + 2, v40 + v60 - 2, 0LL);
      v62 = System_Int32__Parse(v61, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      String = ScriptReplaceString__GetString(v62, 0LL);
      v64 = v62 == 1;
      v65 = String;
      if ( v64 && removeUserNameColorCode )
      {
        if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        }
        v66 = ScriptMessageLabel__RemoveColorTag(v65, 0LL);
      }
      else
      {
        v66 = System_String__Concat_44305532(String, (System_String_o *)StringLiteral_15644/*"[-]"*/, 0LL);
      }
      tmpColorTag = v30->fields.tmpColorTag;
      v75 = v66;
      this->fields.defaultColorTag = tmpColorTag;
      sub_B2C2F8(v79, tmpColorTag);
      v54 = v30->fields.isFoward;
      v55 = v30->fields.font;
      v57 = this;
      v56 = v75;
      v73 = overrideColor;
LABEL_89:
      ScriptLineMessage__UpdateLabels(v57, v56, v54, v73, v55, 0, v53);
      defaultColorTag = this->fields.defaultColorTag;
      v30->fields.tmpColorTag = defaultColorTag;
LABEL_90:
      sub_B2C2F8(&v30->fields.tmpColorTag, defaultColorTag);
      goto LABEL_91;
    }
    Chars = System_String__get_Chars(txt, v58, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v38 )
        goto LABEL_97;
      ScriptLineMessage_ProcAddLabel__Invoke(v38, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      if ( !byte_4183DF6 )
      {
        sub_B2C35C(&ScriptReplaceString_TypeInfo, v68);
        byte_4183DF6 = 1;
      }
      v69 = ScriptReplaceString_TypeInfo;
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v69 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v69->static_fields->playerGenderIndex;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v39 + 2, playerGenderIndex, 0LL);
      v72 = v30->fields.tmpColorTag;
      this->fields.defaultColorTag = v72;
      sub_B2C2F8(v79, v72);
      v54 = v30->fields.isFoward;
      v55 = v30->fields.font;
      v57 = this;
      v56 = TagSplitString;
LABEL_86:
      v73 = overrideColor;
      goto LABEL_89;
    }
    Chars = System_String__get_Chars(txt, v58, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v38 )
        goto LABEL_97;
      ScriptLineMessage_ProcAddLabel__Invoke(v38, 0LL);
      v41 = System_String__Substring_44369268(txt, v39, v40 + v60 + 1, 0LL);
      goto LABEL_25;
    }
    if ( System_String__get_Chars(txt, v58, 0LL) != 61 )
      break;
LABEL_91:
    v58 = v60 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, struct System_Text_StringBuilder_o *, ScriptLineMessage_ProcAddLabel_o *, Il2CppMethodPointer))this->klass->vtable._5_AfterParseEachChar.method)(
              this,
              p_fields->tmpTxt,
              v38,
              this->klass->vtable._6_PreProcSetRubyLabel.methodPtr);
LABEL_92:
    v40 = -v58;
    v39 = v58;
    if ( v58 >= txt->fields.m_stringLength )
      goto LABEL_93;
  }
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v58, 0LL);
  if ( !Chars )
    goto LABEL_97;
  v42 = (System_String_o *)Chars;
  Chars = System_String__Equals_44292872((System_String_o *)Chars, (System_String_o *)StringLiteral_19412/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v38, 0LL);
    v43 = v39 + 7;
    v44 = v40 + v60 - 7;
    goto LABEL_23;
  }
  Chars = System_String__Equals_44292872(v42, (System_String_o *)StringLiteral_19254/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v38, 0LL);
    v43 = v39 + 3;
    v44 = v40 + v60 - 3;
LABEL_23:
    v32 = System_String__Substring_44369268(txt, v43, v44, 0LL);
    v45 = (System_String_o *)StringLiteral_15770/*"[^"*/;
    v46 = (System_String_o *)StringLiteral_15870/*"]"*/;
LABEL_24:
    v41 = System_String__Concat_44307816(v45, v32, v46, 0LL);
LABEL_25:
    v32 = v41;
    Chars = (__int64)v77;
    if ( !v77 )
      goto LABEL_97;
LABEL_26:
    ScriptLineMessage_ProcAddLabel2__Invoke((ScriptLineMessage_ProcAddLabel2_o *)Chars, v32, 0LL);
    goto LABEL_91;
  }
  Chars = System_String__Equals_44292872(v42, (System_String_o *)StringLiteral_21662/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v38, 0LL);
    ScriptLineMessage__ReturnText(this, v47);
    if ( overrideColor )
    {
      *v79 = overrideColor;
      sub_B2C2F8(v79, overrideColor);
    }
    defaultColorTag = *v79;
    v30->fields.tmpColorTag = *v79;
    goto LABEL_90;
  }
  Chars = System_String__Equals_44292872(v42, (System_String_o *)StringLiteral_21979/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v38, 0LL);
    v49 = System_String__Substring_44369268(txt, v39 + 12, v40 + v60 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v50 = ScriptMessageLabel__AnalysTagParam(v49, 0, 0LL);
    v51 = v30->fields.tmpColorTag;
    this->fields.defaultColorTag = v51;
    sub_B2C2F8(v79, v51);
    v52 = ScriptMessageLabel__GetServantChangeName(v50, 0LL);
    v54 = v30->fields.isFoward;
    v55 = v30->fields.font;
    v56 = v52;
    v57 = this;
    goto LABEL_86;
  }
  Chars = System_String__StartsWith(v42, (System_String_o *)StringLiteral_20228/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_97;
    ScriptLineMessage_ProcAddLabel__Invoke(v38, 0LL);
    Chars = (__int64)System_String__Substring_44369268(txt, v39 + 5, v40 + v60 - 5, 0LL);
    if ( !Chars )
      goto LABEL_97;
    v32 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v45 = (System_String_o *)StringLiteral_15834/*"[~"*/;
      v46 = (System_String_o *)StringLiteral_15870/*"]"*/;
      goto LABEL_24;
    }
    Chars = (__int64)v77;
    if ( !v77 )
      goto LABEL_97;
    v32 = (System_String_o *)StringLiteral_15835/*"[~1]"*/;
    goto LABEL_26;
  }
  if ( v60 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_44369268(txt, v39, v40 + v60 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(&v30->fields.tmpColorTag, &text, overrideColor, 0LL);
    Chars = (__int64)p_fields->tmpTxt;
    if ( !p_fields->tmpTxt )
      goto LABEL_97;
    System_Text_StringBuilder__Append_42408700((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_91;
  }
  v76 = p_fields->tmpTxt;
  Chars = (__int64)System_String__Substring(txt, v39, 0LL);
  if ( !v76 )
    goto LABEL_97;
  Chars = (__int64)System_Text_StringBuilder__Append_42408700(v76, (System_String_o *)Chars, 0LL);
  if ( !v38 )
    goto LABEL_97;
LABEL_94:
  ScriptLineMessage_ProcAddLabel__Invoke(v38, 0LL);
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  ScriptLineMessage_ProcAddLabel_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ScriptLineMessage_ProcAddLabel_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
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
  sub_B2C2F8(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptLineMessage_ProcAddLabel2_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  ScriptLineMessage_ProcAddLabel2_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
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
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, txt, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = txt->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(txt, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(txt, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = txt->klass;
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(txt, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(txt, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(txt, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, txt, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, txt, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                txt,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, txt, v31);
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
    sub_B2C434(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (System_Text_StringBuilder_o *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *(_QWORD *)&tmpTxt[2].fields.m_ChunkLength = tmpColorTag;
  sub_B2C2F8(&tmpTxt[2].fields.m_ChunkLength, tmpColorTag);
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
    sub_B2C434(this, text);
  tmpColorTag = (struct System_Text_StringBuilder_o *)v3->fields.tmpColorTag;
  this[2].fields.tmpTxt = tmpColorTag;
  sub_B2C2F8(&this[2].fields, tmpColorTag);
}