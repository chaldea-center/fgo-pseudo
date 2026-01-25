void ScriptLineMessage___ctor(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CF05BC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
    sub_1C7BAE8(&StringLiteral_859/*"-"*/);
    sub_1C7BAE8(&StringLiteral_21719/*"medium"*/);
    sub_1C7BAE8(&StringLiteral_23774/*"small"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_21362/*"large"*/);
    sub_1C7BAE8(&StringLiteral_25156/*"x-large"*/);
    byte_4CF05BC = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_34E8DA8 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_859/*"-"*/,
    30,
    (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_23774/*"small"*/,
    24,
    (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_21719/*"medium"*/,
    30,
    (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_21362/*"large"*/,
    48,
    (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_25156/*"x-large"*/,
    64,
    (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.fontSizes, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v19;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dispLabelList, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptLineMessage__AddLabel(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  __int64 Label; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x19
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  UILabel_o *MainLabel; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x1
  UILabel_o *RubyLabel; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_String_o *v37; // x23
  __int64 v38; // x23
  int v39; // w8
  int32_t fontSize; // w4
  System_String_o *v41; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v43; // x1
  UISprite_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_String_o *v51; // x23
  int v52; // w8
  __int64 v53; // x24
  System_String_o *v54; // x23
  float v55; // s0
  int v56; // w8
  float v57; // s8
  UISprite_o *ImageSprite; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_String_o *v65; // x0
  int32_t v66; // w22
  int32_t v67; // w0
  UILabel_o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UnityEngine_Object_o *messageOffset; // x21
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  UnityEngine_Transform_o *v82; // x21
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v84; // x21
  float v85; // s0
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  int v90; // w8
  __int64 v91; // x23
  UILabel_o *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  System_String_o *v99; // x21
  __int64 v100; // x21
  int v101; // w24
  int32_t v102; // w0
  UnityEngine_Vector2_o v103; // 0:s1.4,4:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF05B5 & 1) == 0 )
  {
    sub_1C7BAE8(&char___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_21438/*"line"*/);
    byte_4CF05B5 = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_64;
  v18 = Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v19 = Label + 112;
  *(_DWORD *)(v19 + 52) = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v19, (int32_t)colorTag, v12, v13, v14, v15, v16, v17);
  if ( !text )
    goto LABEL_64;
  if ( System_String__get_Chars(text, 0, 0) != 91 )
    goto LABEL_26;
  if ( System_String__get_Chars(text, 1, 0) == 35 )
  {
    MainLabel = ScriptLineMessage__FetchMainLabel(this, v21);
    *(_QWORD *)(v18 + 16) = MainLabel;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 16), (int32_t)MainLabel, v23, v24, v25, v26, v27, v28);
    RubyLabel = ScriptLineMessage__FetchRubyLabel(this, v29);
    *(_QWORD *)(v18 + 24) = RubyLabel;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 24), (int32_t)RubyLabel, v31, v32, v33, v34, v35, v36);
    v37 = System_String__Substring_64222852(text, 2, text->fields._stringLength - 3, 0);
    Label = sub_1C7BB90(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_64;
    v11 = (const MethodInfo *)Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v37 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_64226004(v37, (System_Char_array *)Label, 0);
      if ( !Label )
        goto LABEL_64;
      v38 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, const MethodInfo *))this->klass->vtable._6_PreProcSetRubyLabel.methodPtr)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._6_PreProcSetRubyLabel.method);
        v39 = *(_DWORD *)(v38 + 24);
        if ( v39 )
        {
          fontSize = this->fields.fontSize;
          v41 = *(System_String_o **)(v38 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v39 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              (ScriptMessageLabel_o *)v18,
              (UILabel_o **)(v18 + 16),
              (UILabel_o **)(v18 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v41,
              font,
              0);
          else
            ScriptMessageLabel__UpdateRuby(
              (ScriptMessageLabel_o *)v18,
              (UILabel_o **)(v18 + 16),
              (UILabel_o **)(v18 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v41,
              *(System_String_o **)(v38 + 40),
              font,
              this->fields.isTalkName,
              0);
          goto LABEL_27;
        }
      }
    }
LABEL_65:
    sub_1C7BD48(Label);
  }
  if ( System_String__get_Chars(text, 1, 0) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0) == 126 )
    {
      ImageSprite = ScriptLineMessage__FetchImageSprite(this, v20);
      *(_QWORD *)(v18 + 32) = ImageSprite;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)ImageSprite, v59, v60, v61, v62, v63, v64);
      v65 = System_String__Substring_64222852(text, 2, text->fields._stringLength - 3, 0);
      v66 = this->fields.fontSize;
      v67 = System_Int32__Parse(v65, 0);
      ScriptMessageLabel__UpdateLine(
        (ScriptMessageLabel_o *)v18,
        (UISprite_o **)(v18 + 32),
        &this->fields.dispPosition,
        v66,
        v67,
        (System_String_o *)StringLiteral_21438/*"line"*/,
        0);
      goto LABEL_27;
    }
LABEL_26:
    v68 = ScriptLineMessage__FetchMainLabel(this, v20);
    *(_QWORD *)(v18 + 16) = v68;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 16), (int32_t)v68, v69, v70, v71, v72, v73, v74);
    ScriptMessageLabel__UpdateLabel(
      (ScriptMessageLabel_o *)v18,
      (UILabel_o **)(v18 + 16),
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.fontSize,
      0,
      text,
      font,
      0);
    goto LABEL_27;
  }
  v44 = ScriptLineMessage__FetchImageSprite(this, v43);
  *(_QWORD *)(v18 + 32) = v44;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = System_String__Substring_64222852(text, 2, text->fields._stringLength - 3, 0);
  Label = sub_1C7BB90(char___TypeInfo, 1);
  if ( !Label )
    goto LABEL_64;
  v11 = (const MethodInfo *)Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_65;
  *(_WORD *)(Label + 32) = 32;
  if ( !v51 )
    goto LABEL_64;
  Label = (__int64)System_String__Split_64226004(v51, (System_Char_array *)Label, 0);
  if ( !Label )
    goto LABEL_64;
  v52 = *(_DWORD *)(Label + 24);
  v53 = Label;
  if ( !v52 )
    goto LABEL_65;
  v54 = *(System_String_o **)(Label + 32);
  if ( v52 <= 1 )
  {
    Label = sub_1C7BB90(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_64;
    v11 = (const MethodInfo *)Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_65;
    *(_WORD *)(Label + 32) = 58;
    if ( !v54 )
      goto LABEL_64;
    Label = (__int64)System_String__Split_64226004(v54, (System_Char_array *)Label, 0);
    if ( !Label )
      goto LABEL_64;
    v90 = *(_DWORD *)(Label + 24);
    v91 = Label;
    if ( v90 <= 1 )
    {
      if ( !v90 )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImage(
        (ScriptMessageLabel_o *)v18,
        (UISprite_o **)(v18 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        0);
    }
    else
    {
      v92 = ScriptLineMessage__FetchRubyLabel(this, v11);
      *(_QWORD *)(v18 + 24) = v92;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 24), (int32_t)v92, v93, v94, v95, v96, v97, v98);
      if ( *(_DWORD *)(v91 + 24) < 2u )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImageRuby(
        (ScriptMessageLabel_o *)v18,
        (UISprite_o **)(v18 + 32),
        (UILabel_o **)(v18 + 24),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(v91 + 32),
        *(System_String_o **)(v91 + 40),
        font,
        0,
        0);
    }
  }
  else
  {
    v55 = System_Single__Parse(*(System_String_o **)(Label + 40), 0);
    v56 = *(_DWORD *)(v53 + 24);
    v57 = v55;
    if ( v56 == 2 )
    {
      ScriptMessageLabel__UpdateImage_45403256(
        (ScriptMessageLabel_o *)v18,
        (UISprite_o **)(v18 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v55,
        v54,
        0,
        0);
    }
    else if ( v56 <= 3 )
    {
      if ( (unsigned int)v56 <= 2 )
        goto LABEL_65;
      v99 = *(System_String_o **)(v53 + 48);
      Label = sub_1C7BB90(char___TypeInfo, 1);
      if ( !Label )
        goto LABEL_64;
      v11 = (const MethodInfo *)Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      *(_WORD *)(Label + 32) = 44;
      if ( !v99 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_64226004(v99, (System_Char_array *)Label, 0);
      if ( !Label )
        goto LABEL_64;
      v100 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0);
      if ( *(_DWORD *)(v100 + 24) <= 1u )
        goto LABEL_65;
      v101 = Label;
      v102 = System_Int32__Parse(*(System_String_o **)(v100 + 40), 0);
      v103.fields.x = (float)v101;
      v103.fields.y = (float)v102;
      ScriptMessageLabel__UpdateImage_45403408(
        (ScriptMessageLabel_o *)v18,
        (UISprite_o **)(v18 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v57,
        v54,
        v103,
        0,
        0);
    }
  }
LABEL_27:
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0, 0) )
  {
    Label = (__int64)this->fields.messageOffset;
    if ( !Label )
      goto LABEL_64;
    v104.fields.z = 0.0;
    v104.fields.x = (float)(this->fields.startPosition.fields.x - this->fields.dispPosition.fields.x) * 0.5;
    v104.fields.y = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Label, v104, 0);
    Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v82 = (UnityEngine_Transform_o *)Label;
    if ( !byte_4CE7E5E )
    {
      Label = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( !v82 )
      goto LABEL_64;
    UnityEngine_Transform__set_localScale(v82, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    if ( this->fields.isCondensedScale )
    {
      Label = (__int64)this->fields.messageOffset;
      if ( !Label )
        goto LABEL_64;
      if ( fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Label, 0))) >= (float)this->fields.condensedSize )
      {
        Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( this->fields.messageOffset )
        {
          condensedSize = this->fields.condensedSize;
          v84 = (UnityEngine_Transform_o *)Label;
          LODWORD(v85) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0);
          if ( v84 )
          {
            v105.fields.x = (float)condensedSize / fabsf(v85);
            v105.fields.y = 1.0;
            v105.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v84, v105, 0);
            goto LABEL_40;
          }
        }
LABEL_64:
        sub_1C7BD40(Label, v11);
      }
    }
  }
LABEL_40:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_64;
  v86 = *(_QWORD *)(Label + 16);
  v87 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
  ++*(_DWORD *)(Label + 28);
  if ( !v86 )
    goto LABEL_64;
  v88 = *(int *)(Label + 24);
  if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Label,
      (Il2CppObject *)v18,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = v86 + 8 * v88;
    *(_DWORD *)(Label + 24) = v88 + 1;
    *(_QWORD *)(v89 + 32) = v18;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v89 + 32), v18, v76, v77, v78, v79, v80, v81);
  }
}


void ScriptLineMessage__AfterParseEachChar(
        ScriptLineMessage_o *this,
        System_Text_StringBuilder_o *tempTxt,
        ScriptLineMessage_ProcAddLabel_o *addLabel,
        const MethodInfo *method)
{
  ;
}


void ScriptLineMessage__ChangeMainPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mainPrefab = prefab;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mainPrefab,
    (int32_t)prefab,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptLineMessage__ChangeMessageRoot(
        ScriptLineMessage_o *this,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.messageRoot = root;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.messageRoot,
    (int32_t)root,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptLineMessage__ChangeRubyPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.rubyPrefab = prefab;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.rubyPrefab,
    (int32_t)prefab,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptLineMessage__ClearLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF05AF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
    byte_4CF05AF = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ScriptLineMessage__Init(this, method);
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    dispLabelList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v9.fields._current, v5);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v6 = this->fields.dispLabelList;
  if ( !v6 )
LABEL_11:
    sub_1C7BD40(dispLabelList, v3);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


void ScriptLineMessage__ClearText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o startPosition; // x8
  float v4; // s0
  UnityEngine_Object_o *messageOffset; // x20
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *v8; // x20

  if ( (byte_4CF05BA & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF05BA = 1;
  }
  ScriptLineMessage__ClearLabels(this, method);
  startPosition = this->fields.startPosition;
  v4 = startPosition.fields.y - this->fields.textOnlyLineHeight;
  this->fields.dispPosition = startPosition;
  this->fields.maxDispPosition.fields.x = startPosition.fields.x;
  this->fields.maxDispPosition.fields.y = v4;
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(messageOffset, 0, 0);
  if ( (v6 & 1) != 0 )
  {
    v8 = this->fields.messageOffset;
    if ( !byte_4CE7E59 )
    {
      v6 = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
    }
    if ( !v8 )
      sub_1C7BD40(v6, v7);
    UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  ScriptLineMessage__SetDefaultState(this, v7);
}


void ScriptLineMessage__DeleteLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20

  if ( (byte_4CF05AD & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_4CF05AD = 1;
  }
  ScriptLineMessage__Init(this, method);
  ScriptLineMessage__ClearLabels(this, v3);
  if ( this->fields.isRecycle )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
    if ( !labelStock )
      goto LABEL_28;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3AA2BE8 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
      if ( labelStock )
      {
        ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, 0);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
    if ( !labelStock )
      goto LABEL_28;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3AA2BE8 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( labelStock )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)labelStock,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71870148(gameObject, 0);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
      if ( !labelStock )
        goto LABEL_28;
      if ( labelStock->fields._size <= 0 )
        break;
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3AA2BE8 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_28;
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(v7, 0);
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_28:
      sub_1C7BD40(labelStock, v4);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3AA2BE8 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71870148(v8, 0);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
    }
  }
}


void ScriptLineMessage__EffectScale(ScriptLineMessage_o *this, float s, float d, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v7; // 0:s1.4,4:s2.4,8:s3.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7.fields.z = 1.0;
  v7.fields.x = s;
  v7.fields.y = s;
  TweenScale__Begin(gameObject, d, v7, 0);
}


void ScriptLineMessage__Fadeout(ScriptLineMessage_o *this, float d, const MethodInfo *method)
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
  messageRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageRoot, 0);
  if ( !messageRoot )
    goto LABEL_8;
  v5 = (UnityEngine_Transform_o *)messageRoot;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)messageRoot, 0);
  if ( childCount >= 1 )
  {
    v7 = childCount;
    v8 = 0;
    while ( 1 )
    {
      messageRoot = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v5, v8, 0);
      if ( !messageRoot )
        break;
      gameObject = UnityEngine_Component__get_gameObject(messageRoot, 0);
      TweenAlpha__Begin(gameObject, d, 0.0, 0);
      if ( v7 == ++v8 )
        return;
    }
LABEL_8:
    sub_1C7BD40(messageRoot, method);
  }
}


UISprite_o *ScriptLineMessage__FetchImageSprite(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *imageStock; // x0
  __int64 Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x19
  Il2CppObject *imagePrefab; // x19
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x22
  int v10; // w8
  __int64 v11; // x21
  unsigned int v12; // w22
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_4CF05B2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_4CF05B2 = 1;
  }
  imageStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !imageStock || imageStock->fields._size < 1 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  imagePrefab,
                                  (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v8 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_object )
      {
        v6 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v6, 0);
          if ( this->fields.messageRoot )
          {
            v9 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
              if ( v9 )
              {
                UnityEngine_GameObject__set_layer(v9, Component_object, 0);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                                              v8,
                                              (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v10 = *(_DWORD *)(Component_object + 24);
                  v11 = Component_object;
                  if ( v10 < 1 )
                    goto LABEL_20;
                  v12 = 0;
                  while ( 1 )
                  {
                    if ( v12 >= v10 )
                      sub_1C7BD48(Component_object);
                    Component_object = *(_QWORD *)(v11 + 8LL * (int)v12 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0);
                    v10 = *(_DWORD *)(v11 + 24);
                    if ( (int)++v12 >= v10 )
                      goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C7BD40(Component_object, v5);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                imageStock,
                                (const MethodInfo_3AA2BE8 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v6 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v6 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4CE7E59 )
  {
    Component_object = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4CE7E5E )
  {
    Component_object = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v14 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (UISprite_o *)v6;
}


ScriptMessageLabel_o *ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v5; // x19

  if ( (byte_4CF05B3 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptMessageLabel_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    byte_4CF05B3 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_3AA2BE8 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v5 = (ScriptMessageLabel_o *)sub_1C7BD34(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v5, 0);
  return v5;
}


UILabel_o *ScriptLineMessage__FetchMainLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *mainStock; // x0
  __int64 Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x19
  Il2CppObject *mainPrefab; // x19
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x22
  int v10; // w8
  __int64 v11; // x21
  unsigned int v12; // w22
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_4CF05B0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4CF05B0 = 1;
  }
  mainStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
  if ( !mainStock || mainStock->fields._size < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  mainPrefab,
                                  (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v8 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v6 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v6, 0);
          if ( this->fields.messageRoot )
          {
            v9 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
              if ( v9 )
              {
                UnityEngine_GameObject__set_layer(v9, Component_object, 0);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                                              v8,
                                              (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v10 = *(_DWORD *)(Component_object + 24);
                  v11 = Component_object;
                  if ( v10 < 1 )
                    goto LABEL_20;
                  v12 = 0;
                  while ( 1 )
                  {
                    if ( v12 >= v10 )
                      sub_1C7BD48(Component_object);
                    Component_object = *(_QWORD *)(v11 + 8LL * (int)v12 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0);
                    v10 = *(_DWORD *)(v11 + 24);
                    if ( (int)++v12 >= v10 )
                      goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C7BD40(Component_object, v5);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                mainStock,
                                (const MethodInfo_3AA2BE8 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v6 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v6 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4CE7E59 )
  {
    Component_object = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4CE7E5E )
  {
    Component_object = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v14 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (UILabel_o *)v6;
}


UILabel_o *ScriptLineMessage__FetchRubyLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *rubyStock; // x0
  __int64 Component_object; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x20
  Il2CppObject *rubyPrefab; // x20
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x22
  int v10; // w8
  __int64 v11; // x21
  unsigned int v12; // w22
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x21

  if ( (byte_4CF05B1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4CF05B1 = 1;
  }
  rubyStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
  if ( !rubyStock || rubyStock->fields._size < 1 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  rubyPrefab,
                                  (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v8 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v6 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v6, 0);
          if ( this->fields.messageRoot )
          {
            v9 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
              if ( v9 )
              {
                UnityEngine_GameObject__set_layer(v9, Component_object, 0);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                                              v8,
                                              (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v10 = *(_DWORD *)(Component_object + 24);
                  v11 = Component_object;
                  if ( v10 < 1 )
                    goto LABEL_20;
                  v12 = 0;
                  while ( 1 )
                  {
                    if ( v12 >= v10 )
                      sub_1C7BD48(Component_object);
                    Component_object = *(_QWORD *)(v11 + 8LL * (int)v12 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0);
                    v10 = *(_DWORD *)(v11 + 24);
                    if ( (int)++v12 >= v10 )
                      goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C7BD40(Component_object, v5);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                rubyStock,
                                (const MethodInfo_3AA2BE8 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v6 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v6 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4CE7E59 )
  {
    Component_object = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4CE7E5E )
  {
    Component_object = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v14 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  UILabel__set_fontSize((UILabel_o *)v6, this->fields.rubyFontSize, 0);
  return (UILabel_o *)v6;
}


void ScriptLineMessage__FowardText(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  ScriptLineMessage__UpdateLabels(this, text, 1, color, font, 0, v5);
}


ScriptMessageLabel_array *ScriptLineMessage__GetDispLabelArray(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0

  if ( (byte_4CF05AE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
    byte_4CF05AE = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_1C7BD40(0, method);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_object___ToArray(
                                       dispLabelList,
                                       (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
}


UnityEngine_Vector2_o ScriptLineMessage__GetPrintedSize(ScriptLineMessage_o *this, const MethodInfo *method)
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


bool ScriptLineMessage__HasRubyFormat(System_String_o *text, const MethodInfo *method)
{
  if ( (byte_4CF05BB & 1) == 0 )
  {
    sub_1C7BAE8(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16091/*"\\[#[^:]+:[^:]+\\]"*/);
    byte_4CF05BB = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_16091/*"\\[#[^:]+:[^:]+\\]"*/, 0);
}


void ScriptLineMessage__Init(ScriptLineMessage_o *this, const MethodInfo *method)
{
  _BOOL4 isRecycle; // w8
  System_Collections_Generic_Stack_T__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_Stack_T__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_Stack_T__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_Stack_T__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *mainPrefab; // x20
  __int64 fontSizes; // x0
  __int64 v34; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v36; // x0
  int defaultFontSize; // w2
  UILabel_o *v38; // x20
  float v39; // s0
  int32_t rubyFontSize; // w8
  float v41; // s1
  float v42; // s0
  float v43; // s0
  float v44; // s1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v46; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v48; // s0
  UnityEngine_Transform_o *v49; // x20

  if ( (byte_4CF05AC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UILabel___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UISprite___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Stack_UILabel__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Stack_UISprite__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
    sub_1C7BAE8(&StringLiteral_859/*"-"*/);
    sub_1C7BAE8(&StringLiteral_25611/*"■"*/);
    byte_4CF05AC = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v4 = (System_Collections_Generic_Stack_T__o *)sub_1C7BD34(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v4,
        (const MethodInfo_3AA2620 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v4;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mainStock, (int32_t)v4, v5, v6, v7, v8, v9, v10);
      v11 = (System_Collections_Generic_Stack_T__o *)sub_1C7BD34(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v11,
        (const MethodInfo_3AA2620 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v11;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.rubyStock, (int32_t)v11, v12, v13, v14, v15, v16, v17);
      v18 = (System_Collections_Generic_Stack_T__o *)sub_1C7BD34(System_Collections_Generic_Stack_UISprite__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v18,
        (const MethodInfo_3AA2620 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v18;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.imageStock, (int32_t)v18, v19, v20, v21, v22, v23, v24);
      v25 = (System_Collections_Generic_Stack_T__o *)sub_1C7BD34(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v25,
        (const MethodInfo_3AA2620 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v25;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.labelStock, (int32_t)v25, v26, v27, v28, v29, v30, v31);
    }
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)fontSizes,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.rubyPrefab,
                           (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v36 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)fontSizes,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v38 = (UILabel_o *)v36;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (__int64)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
        (Il2CppObject *)StringLiteral_859/*"-"*/,
        defaultFontSize,
        (const MethodInfo_34E9748 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (__int64)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
                         (Il2CppObject *)StringLiteral_859/*"-"*/,
                         (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v39 = this->fields.fontScale * (float)(int)fontSizes,
           v39 != INFINITY)
        ? (v34 = (unsigned int)(int)v39)
        : (v34 = 0x80000000LL),
          this->fields.defaultFontSize = v34,
          !Component_object) )
    {
LABEL_37:
      sub_1C7BD40(fontSizes, v34);
    }
    UILabel__set_fontSize((UILabel_o *)Component_object, v34, 0);
    UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_25611/*"■"*/, 0);
    fontSizes = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[22].methodPtr)(
                  Component_object,
                  Component_object->klass->vtable[22].method);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v41;
    if ( rubyFontSize <= 0 )
    {
      if ( !v38 )
        goto LABEL_37;
      v43 = this->fields.fontScale * (float)v38->fields.mFontSize;
      if ( v43 == INFINITY )
        LODWORD(v34) = 0x80000000;
      else
        LODWORD(v34) = (int)v43;
      this->fields.rubyFontSize = v34;
    }
    else
    {
      v42 = this->fields.fontScale * (float)rubyFontSize;
      if ( v42 == INFINITY )
        v34 = 0x80000000LL;
      else
        v34 = (unsigned int)(int)v42;
      this->fields.rubyFontSize = v34;
      if ( !v38 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v38, v34, 0);
    UILabel__set_text(v38, (System_String_o *)StringLiteral_25611/*"■"*/, 0);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))v38->klass->vtable._22_get_localSize.methodPtr)(
      v38,
      v38->klass->vtable._22_get_localSize.method);
    this->fields.rubyLineHeight = v44;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_object,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
    v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0);
    UnityEngine_Object__Destroy_71870148(v46, 0);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v48 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v48;
    fontSizes = UnityEngine_Object__op_Inequality(messageOffset, 0, 0);
    if ( (fontSizes & 1) != 0 )
    {
      v49 = this->fields.messageOffset;
      if ( !byte_4CE7E59 )
      {
        fontSizes = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      if ( !v49 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v49, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, (const MethodInfo *)v34);
  }
}


void ScriptLineMessage__PreProcSetRubyLabel(
        ScriptLineMessage_o *this,
        System_String_o *mainText,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void ScriptLineMessage__Quit(ScriptLineMessage_o *this, const MethodInfo *method)
{
  ScriptLineMessage__DeleteLabels(this, method);
}


void ScriptLineMessage__ReleaseLabel(ScriptLineMessage_o *this, ScriptMessageLabel_o *label, const MethodInfo *method)
{
  ScriptMessageLabel_o *v3; // x19
  ScriptLineMessage_o *v4; // x20
  ScriptLineMessage_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_Object_o *gameObject; // x22
  ScriptLineMessage_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Object_o *v22; // x22
  ScriptLineMessage_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UnityEngine_Object_o *v31; // x22
  System_Collections_Generic_Stack_T__o *labelStock; // x0

  v3 = label;
  v4 = this;
  if ( (byte_4CF05B4 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UILabel__Push__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Stack_UISprite__Push__);
    this = (ScriptLineMessage_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF05B4 = 1;
  }
  if ( !v3 )
    goto LABEL_40;
  p_fields = (ScriptLineMessage_o **)&v3->fields;
  main = (UnityEngine_Object_o *)v3->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0, 0) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = (ScriptLineMessage_o *)v4->fields.mainStock;
    label = (ScriptMessageLabel_o *)*p_fields;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)label,
        (const MethodInfo_3AA2C48 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_40;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)*p_fields,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(gameObject, 0);
    }
    *p_fields = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields, 0, v7, v8, v9, v10, v11, v12);
  }
  p_ruby = (ScriptLineMessage_o **)&v3->fields.ruby;
  ruby = (UnityEngine_Object_o *)v3->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0, 0) )
  {
    this = *p_ruby;
    if ( !*p_ruby )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = (ScriptLineMessage_o *)v4->fields.rubyStock;
    label = (ScriptMessageLabel_o *)*p_ruby;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)label,
        (const MethodInfo_3AA2C48 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_40;
      v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(v22, 0);
    }
    *p_ruby = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.ruby, 0, v16, v17, v18, v19, v20, v21);
  }
  p_image = (ScriptLineMessage_o **)&v3->fields.image;
  image = (UnityEngine_Object_o *)v3->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    this = *p_image;
    if ( *p_image )
    {
      ((void (__fastcall *)(ScriptLineMessage_o *, void *, float))this->klass[1]._1.image)(
        this,
        this->klass[1]._1.gc_desc,
        0.0);
      this = (ScriptLineMessage_o *)v4->fields.imageStock;
      label = (ScriptMessageLabel_o *)*p_image;
      if ( this )
      {
        System_Collections_Generic_Stack_object___Push(
          (System_Collections_Generic_Stack_T__o *)this,
          (Il2CppObject *)label,
          (const MethodInfo_3AA2C48 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_36:
        *p_image = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.image, 0, v25, v26, v27, v28, v29, v30);
        goto LABEL_37;
      }
      if ( label )
      {
        v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71870148(v31, 0);
        goto LABEL_36;
      }
    }
LABEL_40:
    sub_1C7BD40(this, label);
  }
LABEL_37:
  ScriptMessageLabel__Release(v3, 0);
  labelStock = (System_Collections_Generic_Stack_T__o *)v4->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_object___Push(
      labelStock,
      (Il2CppObject *)v3,
      (const MethodInfo_3AA2C48 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
}


void ScriptLineMessage__ReturnText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  float x; // s0
  float defaultTextOnlyLineHeight; // s4
  float v11; // s1
  float v12; // s2
  float v13; // s0
  int32_t v14; // w1

  if ( (byte_4CF05B8 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF05B8 = 1;
  }
  x = this->fields.dispPosition.fields.x;
  if ( this->fields.maxDispPosition.fields.x < x )
    this->fields.maxDispPosition.fields.x = x;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  v11 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v12 = this->fields.startPosition.fields.x;
  v13 = this->fields.dispPosition.fields.y - (float)(v11 + this->fields.betweenLineHeight);
  this->fields.fontSize = this->fields.defaultFontSize;
  this->fields.dispPosition.fields.x = v12;
  this->fields.dispPosition.fields.y = v13;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v11;
  v14 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag, v14, v2, v3, v4, v5, v6, v7);
  this->fields.maxDispPosition.fields.y = this->fields.dispPosition.fields.y - this->fields.textOnlyLineHeight;
}


void ScriptLineMessage__SetBetweenLineHeight(ScriptLineMessage_o *this, float height, const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_1C7BD40(0, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void ScriptLineMessage__SetDefaultState(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  float rubyLineHeight; // s2
  float defaultTextOnlyLineHeight; // s1
  int32_t defaultFontSize; // w8
  int32_t v12; // w1

  if ( (byte_4CF05B7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF05B7 = 1;
  }
  rubyLineHeight = this->fields.rubyLineHeight;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  defaultFontSize = this->fields.defaultFontSize;
  this->fields.betweenLineHeight = this->fields.defaultBetweenLineHeight;
  this->fields.fontSize = defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v12 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag, v12, v2, v3, v4, v5, v6, v7);
}


void ScriptLineMessage__SetFontSize(ScriptLineMessage_o *this, System_String_o *sizeName, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  int32_t Item; // w0
  float textOnlyLineHeight; // s2
  float v8; // s0
  int32_t v9; // w8
  float v10; // s0
  float y; // s1

  if ( (byte_4CF05B9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4CF05B9 = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_1C7BD40(0, sizeName);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  v8 = this->fields.fontScale * (float)Item;
  v9 = (int)v8;
  if ( v8 == INFINITY )
    v9 = 0x80000000;
  v10 = (float)v9;
  this->fields.fontSize = v9;
  if ( textOnlyLineHeight < (float)v9 )
  {
    y = this->fields.dispPosition.fields.y;
    this->fields.textOnlyLineHeight = v10;
    this->fields.maxDispPosition.fields.y = y - v10;
  }
}


void ScriptLineMessage__SetText(
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


void ScriptLineMessage__UpdateLabels(
        ScriptLineMessage_o *this,
        System_String_o *txt,
        bool isFoward,
        System_String_o *enforceColor,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        const MethodInfo *method)
{
  __int64 v12; // x23
  __int64 Chars; // x0
  System_String_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Text_StringBuilder_o *v27; // x20
  System_Text_StringBuilder_o **v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x26
  __int64 v43; // x25
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  int32_t v46; // w29
  int v47; // w21
  int32_t v48; // w20
  int32_t BraceIndex; // w0
  int32_t v50; // w28
  System_String_o *v51; // x0
  int32_t v52; // w20
  System_String_o *String; // x0
  bool v54; // zf
  System_String_o *v55; // x20
  System_String_o *TagSplitString; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_Text_StringBuilder_o *v63; // x20
  ScriptReplaceString_c *v64; // x0
  int32_t playerGenderIndex; // w20
  struct System_String_o *v66; // x1
  System_String_o *v67; // x20
  const MethodInfo *v68; // x6
  char v69; // w2
  UnityEngine_Font_o *v70; // x4
  ScriptLineMessage_o *v71; // x0
  System_String_o *v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct System_String_o *v79; // x1
  System_String_o *v80; // x20
  int32_t v81; // w1
  int32_t v82; // w2
  System_String_o *v83; // x0
  System_String_o *v84; // x2
  ScriptLineMessage_ProcAddLabel2_o *v85; // x9
  __int64 v86; // x1
  const MethodInfo *v87; // x1
  System_String_o *v88; // x20
  System_String_array *v89; // x0
  struct System_String_o *v90; // x1
  System_String_array *v91; // x20
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  System_String_o *v98; // x0
  System_Text_StringBuilder_o *v99; // x20
  ScriptLineMessage_ProcAddLabel2_o *v100; // [xsp+0h] [xbp-80h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CF05B6 & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptLineMessage_ProcAddLabel2_TypeInfo);
    sub_1C7BAE8(&ScriptLineMessage_ProcAddLabel_TypeInfo);
    sub_1C7BAE8(&ScriptMessageLabel_TypeInfo);
    sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__);
    sub_1C7BAE8(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__);
    sub_1C7BAE8(&ScriptLineMessage___c__DisplayClass55_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23516/*"servantName"*/);
    sub_1C7BAE8(&StringLiteral_15881/*"[-]"*/);
    sub_1C7BAE8(&StringLiteral_20255/*"i"*/);
    sub_1C7BAE8(&StringLiteral_16079/*"[~1]"*/);
    sub_1C7BAE8(&StringLiteral_16014/*"[^"*/);
    sub_1C7BAE8(&StringLiteral_23139/*"r"*/);
    sub_1C7BAE8(&StringLiteral_21438/*"line"*/);
    sub_1C7BAE8(&StringLiteral_20453/*"image"*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    sub_1C7BAE8(&StringLiteral_16078/*"[~"*/);
    sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CF05B6 = 1;
  }
  text = 0;
  v12 = sub_1C7BD34(ScriptLineMessage___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_89;
  *(_QWORD *)(v12 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 24), (int32_t)this, v15, v16, v17, v18, v19, v20);
  *(_BYTE *)(v12 + 32) = isFoward;
  *(_QWORD *)(v12 + 40) = font;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 40), (int32_t)font, v21, v22, v23, v24, v25, v26);
  v27 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v27, 0);
  *(_QWORD *)(v12 + 16) = v27;
  v28 = (System_Text_StringBuilder_o **)(v12 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)v27, v29, v30, v31, v32, v33, v34);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag,
      (int32_t)enforceColor,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v12 + 48) = defaultColorTag;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 48), (int32_t)defaultColorTag, v35, v36, v37, v38, v39, v40);
  v43 = sub_1C7BD34(ScriptLineMessage_ProcAddLabel_TypeInfo);
  ScriptLineMessage_ProcAddLabel___ctor(
    (ScriptLineMessage_ProcAddLabel_o *)v43,
    (Il2CppObject *)v12,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__,
    v44);
  v100 = (ScriptLineMessage_ProcAddLabel2_o *)sub_1C7BD34(ScriptLineMessage_ProcAddLabel2_TypeInfo);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v100,
    (Il2CppObject *)v12,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__,
    v45);
  if ( !txt )
    goto LABEL_89;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_87;
  v46 = 0;
  v47 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v46, 0) != 91 )
    {
      v63 = *v28;
      Chars = System_String__get_Chars(txt, v46, 0);
      if ( !v63 )
        goto LABEL_89;
      System_Text_StringBuilder__Append_64263200(v63, Chars, 0);
      v50 = v46;
      goto LABEL_42;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v48 = v46 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v46 + 1, 0);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v28;
      if ( !*v28 )
        goto LABEL_89;
      Chars = (__int64)System_Text_StringBuilder__Append_64260872(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15862/*"["*/,
                         0);
      goto LABEL_43;
    }
    v50 = BraceIndex;
    Chars = System_String__get_Chars(txt, v48, 0);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v43 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
      v51 = System_String__Substring_64222852(txt, v46 + 2, v47 + v50 - 2, 0);
      v52 = System_Int32__Parse(v51, 0);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v52, 0);
      v54 = v52 == 1;
      v55 = String;
      if ( v54 && removeUserNameColorCode )
      {
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        TagSplitString = ScriptMessageLabel__RemoveColorTag(v55, 0);
      }
      else
      {
        TagSplitString = System_String__Concat_64176912(String, (System_String_o *)StringLiteral_15881/*"[-]"*/, 0);
      }
LABEL_39:
      v66 = *(struct System_String_o **)(v12 + 48);
      v67 = TagSplitString;
      this->fields.defaultColorTag = v66;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag,
        (int32_t)v66,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      v69 = *(_BYTE *)(v12 + 32);
      v70 = *(UnityEngine_Font_o **)(v12 + 40);
      v71 = this;
      v72 = v67;
LABEL_40:
      ScriptLineMessage__UpdateLabels(v71, v72, v69, enforceColor, v70, 0, v68);
      v79 = this->fields.defaultColorTag;
      *(_QWORD *)(v12 + 48) = v79;
LABEL_41:
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v12 + 48), (int32_t)v79, v73, v74, v75, v76, v77, v78);
      goto LABEL_42;
    }
    Chars = System_String__get_Chars(txt, v48, 0);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v43 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4CF02FD )
      {
        sub_1C7BAE8(&ScriptReplaceString_TypeInfo);
        byte_4CF02FD = 1;
      }
      v64 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v64 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v64->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v46 + 2, playerGenderIndex, 0);
      goto LABEL_39;
    }
    Chars = System_String__get_Chars(txt, v48, 0);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v43 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
      Chars = (__int64)System_String__Substring_64222852(txt, v46, v47 + v50 + 1, 0);
      goto LABEL_60;
    }
    if ( System_String__get_Chars(txt, v48, 0) != 61 )
      break;
LABEL_42:
    v48 = v50 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, System_Text_StringBuilder_o *, __int64, const MethodInfo *))this->klass->vtable._5_AfterParseEachChar.methodPtr)(
              this,
              *v28,
              v43,
              this->klass->vtable._5_AfterParseEachChar.method);
LABEL_43:
    v47 = -v48;
    v46 = v48;
    if ( v48 >= txt->fields._stringLength )
      goto LABEL_87;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v48, 0);
  if ( !Chars )
    goto LABEL_89;
  v80 = (System_String_o *)Chars;
  Chars = System_String__Equals_64212232((System_String_o *)Chars, (System_String_o *)StringLiteral_20453/*"image"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
    v81 = v46 + 7;
    v82 = v47 + v50 - 7;
    goto LABEL_58;
  }
  Chars = System_String__Equals_64212232(v80, (System_String_o *)StringLiteral_20255/*"i"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
    v81 = v46 + 3;
    v82 = v47 + v50 - 3;
LABEL_58:
    v14 = System_String__Substring_64222852(txt, v81, v82, 0);
    v83 = (System_String_o *)StringLiteral_16014/*"[^"*/;
    v84 = (System_String_o *)StringLiteral_16114/*"]"*/;
LABEL_59:
    Chars = (__int64)System_String__Concat_64215176(v83, v14, v84, 0);
LABEL_60:
    v85 = v100;
    if ( !v100 )
      goto LABEL_89;
    v86 = Chars;
LABEL_62:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v85->fields.invoke_impl)(
      v85->fields.method_code,
      v86,
      v85->fields.method);
    goto LABEL_42;
  }
  Chars = System_String__Equals_64212232(v80, (System_String_o *)StringLiteral_23139/*"r"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
    ScriptLineMessage__ReturnText(this, v87);
    if ( enforceColor )
    {
      *p_defaultColorTag = enforceColor;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag,
        (int32_t)enforceColor,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    v79 = *p_defaultColorTag;
    *(_QWORD *)(v12 + 48) = *p_defaultColorTag;
    goto LABEL_41;
  }
  Chars = System_String__Equals_64212232(v80, (System_String_o *)StringLiteral_23516/*"servantName"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
    v88 = System_String__Substring_64222852(txt, v46 + 12, v47 + v50 - 12, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v89 = ScriptMessageLabel__AnalysTagParam(v88, 0, 0);
    v90 = *(struct System_String_o **)(v12 + 48);
    v91 = v89;
    this->fields.defaultColorTag = v90;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag,
      (int32_t)v90,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    v98 = ScriptMessageLabel__GetServantChangeName(v91, 0);
    v69 = *(_BYTE *)(v12 + 32);
    v70 = *(UnityEngine_Font_o **)(v12 + 40);
    v72 = v98;
    v71 = this;
    goto LABEL_40;
  }
  Chars = System_String__StartsWith(v80, (System_String_o *)StringLiteral_21438/*"line"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
    Chars = (__int64)System_String__Substring_64222852(txt, v46 + 5, v47 + v50 - 5, 0);
    if ( !Chars )
      goto LABEL_89;
    v14 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v83 = (System_String_o *)StringLiteral_16078/*"[~"*/;
      v84 = (System_String_o *)StringLiteral_16114/*"]"*/;
      goto LABEL_59;
    }
    v85 = v100;
    if ( !v100 )
      goto LABEL_89;
    v86 = StringLiteral_16079/*"[~1]"*/;
    goto LABEL_62;
  }
  if ( v50 < txt->fields._stringLength )
  {
    text = System_String__Substring_64222852(txt, v46, v47 + v50 + 1, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v12 + 48), &text, enforceColor, 0);
    Chars = (__int64)*v28;
    if ( !*v28 )
      goto LABEL_89;
    System_Text_StringBuilder__Append_64260872((System_Text_StringBuilder_o *)Chars, text, 0);
    goto LABEL_42;
  }
  v99 = *v28;
  Chars = (__int64)System_String__Substring(txt, v46, 0);
  if ( !v99 )
    goto LABEL_89;
  Chars = (__int64)System_Text_StringBuilder__Append_64260872(v99, (System_String_o *)Chars, 0);
LABEL_87:
  if ( !v43 )
LABEL_89:
    sub_1C7BD40(Chars, v14);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v43 + 24))(*(_QWORD *)(v43 + 64), *(_QWORD *)(v43 + 40));
}


UnityEngine_Vector2_o ScriptLineMessage__get_DispPos(ScriptLineMessage_o *this, const MethodInfo *method)
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


float ScriptLineMessage__get_RubyLineHegight(ScriptLineMessage_o *this, const MethodInfo *method)
{
  return this->fields.rubyLineHeight;
}


UnityEngine_Vector2_o ScriptLineMessage__get_StartPos(ScriptLineMessage_o *this, const MethodInfo *method)
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


float ScriptLineMessage__get_textLineHeight(ScriptLineMessage_o *this, const MethodInfo *method)
{
  return this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
}


void ScriptLineMessage_ProcAddLabel___ctor(
        ScriptLineMessage_ProcAddLabel_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB3004;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB2FC4;
}


System_IAsyncResult_o *ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v5, callback, object);
}


void ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void ScriptLineMessage_ProcAddLabel__Invoke(ScriptLineMessage_ProcAddLabel_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void ScriptLineMessage_ProcAddLabel2___ctor(
        ScriptLineMessage_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AB3080;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AB3060;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AB3018;
}


System_IAsyncResult_o *ScriptLineMessage_ProcAddLabel2__BeginInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = txt;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v6, callback, object);
}


void ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void ScriptLineMessage_ProcAddLabel2__Invoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    txt,
    this->fields.method);
}


void ScriptLineMessage___c__DisplayClass55_0___ctor(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__0(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  char *tmpTxt; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  ScriptLineMessage_o *_4__this; // x20
  const MethodInfo *v11; // x5
  struct ScriptLineMessage_o *v12; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  if ( System_Text_StringBuilder__get_Length((System_Text_StringBuilder_o *)tmpTxt, 0) < 1 )
    goto LABEL_8;
  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (char *)(*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)tmpTxt + 360LL))(
                           tmpTxt,
                           *(_QWORD *)(*(_QWORD *)tmpTxt + 368LL)),
        (v12 = this->fields.__4__this) == 0)
    || !_4__this
    || (ScriptLineMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v12->fields.defaultColorTag,
          0,
          this->fields.font,
          v11),
        (tmpTxt = (char *)this->fields.tmpTxt) == 0) )
  {
LABEL_10:
    sub_1C7BD40(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 17) = tmpColorTag;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(tmpTxt + 136), (int32_t)tmpColorTag, v4, v5, v6, v7, v8, v9);
}


void ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__1(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  const MethodInfo *v5; // x5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ScriptLineMessage___c__DisplayClass55_0_o *v8; // x19
  struct ScriptLineMessage_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v8 = this;
  if ( text->fields._stringLength >= 1 )
  {
    this = (ScriptLineMessage___c__DisplayClass55_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptLineMessage__AddLabel(
      (ScriptLineMessage_o *)this,
      text,
      (System_String_o *)this[2].fields.__4__this,
      0,
      v8->fields.font,
      v5);
  }
  this = (ScriptLineMessage___c__DisplayClass55_0_o *)v8->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_1C7BD40(this, text);
  tmpColorTag = (struct ScriptLineMessage_o *)v8->fields.tmpColorTag;
  this[2].fields.__4__this = tmpColorTag;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this[2].fields.__4__this,
    (int32_t)tmpColorTag,
    (int32_t)method,
    v3,
    v4,
    (int32_t)v5,
    v6,
    v7);
}