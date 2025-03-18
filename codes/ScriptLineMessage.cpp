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
  System_Collections_Generic_Dictionary_object__int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  void *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4C23C4D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, v5);
    sub_1C3B764(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v6);
    sub_1C3B764(&StringLiteral_897/*"--MM--Z"*/, v7);
    sub_1C3B764(&StringLiteral_21804/*"not"*/, v8);
    sub_1C3B764(&StringLiteral_23869/*"unity-dragline"*/, v9);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    sub_1C3B764(&StringLiteral_21464/*"mstQuestAdd"*/, v11);
    sub_1C3B764(&StringLiteral_25292, v12);
    byte_4C23C4D = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v13 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v13,
    (const MethodInfo_334BECC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v13 )
    sub_1C3B9C0(v14, v15);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_897/*"--MM--Z"*/,
    30,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_23869/*"unity-dragline"*/,
    24,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_21804/*"not"*/,
    30,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_21464/*"mstQuestAdd"*/,
    48,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v13,
    (Il2CppObject *)StringLiteral_25292,
    64,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontSizes, (int64_t)v13, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v29;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.dispLabelList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


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
  __int64 v12; // x1
  __int64 Label; // x0
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x19
  PartyOrganizationUtility_o *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UILabel_o *MainLabel; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1
  UILabel_o *RubyLabel; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_String_o *v40; // x23
  __int64 v41; // x23
  int v42; // w8
  int32_t fontSize; // w4
  System_String_o *v44; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v46; // x1
  UISprite_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *v54; // x23
  int v55; // w8
  __int64 v56; // x24
  System_String_o *v57; // x23
  float v58; // s0
  int v59; // w8
  float v60; // s8
  UISprite_o *ImageSprite; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_String_o *v68; // x0
  int32_t v69; // w22
  int32_t v70; // w0
  UILabel_o *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  UnityEngine_Object_o *messageOffset; // x21
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  UnityEngine_Transform_o *v85; // x21
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v87; // x21
  float v88; // s0
  __int64 v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  __int64 v92; // x8
  int v93; // w8
  __int64 v94; // x23
  UILabel_o *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_String_o *v102; // x21
  __int64 v103; // x21
  int v104; // w24
  int32_t v105; // w0
  UnityEngine_Vector2_o v106; // 0:s1.4,4:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23C46 & 1) == 0 )
  {
    sub_1C3B764(&char___TypeInfo, text);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_21534/*"mstSvt"*/, v12);
    byte_4C23C46 = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_64;
  v21 = Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v22 = (PartyOrganizationUtility_o *)(Label + 112);
  v22->fields._SelectedInitPosition_k__BackingField = 0;
  sub_1C3B708(v22, (int64_t)colorTag, v15, v16, v17, v18, v19, v20);
  if ( !text )
    goto LABEL_64;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_26;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    MainLabel = ScriptLineMessage__FetchMainLabel(this, v24);
    *(_QWORD *)(v21 + 16) = MainLabel;
    sub_1C3B708((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)MainLabel, v26, v27, v28, v29, v30, v31);
    RubyLabel = ScriptLineMessage__FetchRubyLabel(this, v32);
    *(_QWORD *)(v21 + 24) = RubyLabel;
    sub_1C3B708((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)RubyLabel, v34, v35, v36, v37, v38, v39);
    v40 = System_String__Substring_63387616(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1C3B80C(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v14 = (const MethodInfo *)Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v40 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_63390768(v40, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v41 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_PreProcSetRubyLabel.method)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._7_SetText.methodPtr);
        v42 = *(_DWORD *)(v41 + 24);
        if ( v42 )
        {
          fontSize = this->fields.fontSize;
          v44 = *(System_String_o **)(v41 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v42 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              (ScriptMessageLabel_o *)v21,
              (UILabel_o **)(v21 + 16),
              (UILabel_o **)(v21 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v44,
              font,
              0LL);
          else
            ScriptMessageLabel__UpdateRuby(
              (ScriptMessageLabel_o *)v21,
              (UILabel_o **)(v21 + 16),
              (UILabel_o **)(v21 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v44,
              *(System_String_o **)(v41 + 40),
              font,
              this->fields.isTalkName,
              0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_65:
    sub_1C3B9C8(Label, v14);
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0LL) == 126 )
    {
      ImageSprite = ScriptLineMessage__FetchImageSprite(this, v23);
      *(_QWORD *)(v21 + 32) = ImageSprite;
      sub_1C3B708((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)ImageSprite, v62, v63, v64, v65, v66, v67);
      v68 = System_String__Substring_63387616(text, 2, text->fields._stringLength - 3, 0LL);
      v69 = this->fields.fontSize;
      v70 = System_Int32__Parse(v68, 0LL);
      ScriptMessageLabel__UpdateLine(
        (ScriptMessageLabel_o *)v21,
        (UISprite_o **)(v21 + 32),
        &this->fields.dispPosition,
        v69,
        v70,
        (System_String_o *)StringLiteral_21534/*"mstSvt"*/,
        0LL);
      goto LABEL_27;
    }
LABEL_26:
    v71 = ScriptLineMessage__FetchMainLabel(this, v23);
    *(_QWORD *)(v21 + 16) = v71;
    sub_1C3B708((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)v71, v72, v73, v74, v75, v76, v77);
    ScriptMessageLabel__UpdateLabel(
      (ScriptMessageLabel_o *)v21,
      (UILabel_o **)(v21 + 16),
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.fontSize,
      0,
      text,
      font,
      0LL);
    goto LABEL_27;
  }
  v47 = ScriptLineMessage__FetchImageSprite(this, v46);
  *(_QWORD *)(v21 + 32) = v47;
  sub_1C3B708((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)v47, v48, v49, v50, v51, v52, v53);
  v54 = System_String__Substring_63387616(text, 2, text->fields._stringLength - 3, 0LL);
  Label = sub_1C3B80C(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_64;
  v14 = (const MethodInfo *)Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_65;
  *(_WORD *)(Label + 32) = 32;
  if ( !v54 )
    goto LABEL_64;
  Label = (__int64)System_String__Split_63390768(v54, (System_Char_array *)Label, 0LL);
  if ( !Label )
    goto LABEL_64;
  v55 = *(_DWORD *)(Label + 24);
  v56 = Label;
  if ( !v55 )
    goto LABEL_65;
  v57 = *(System_String_o **)(Label + 32);
  if ( v55 <= 1 )
  {
    Label = sub_1C3B80C(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v14 = (const MethodInfo *)Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_65;
    *(_WORD *)(Label + 32) = 58;
    if ( !v57 )
      goto LABEL_64;
    Label = (__int64)System_String__Split_63390768(v57, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_64;
    v93 = *(_DWORD *)(Label + 24);
    v94 = Label;
    if ( v93 <= 1 )
    {
      if ( !v93 )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImage(
        (ScriptMessageLabel_o *)v21,
        (UISprite_o **)(v21 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        0LL);
    }
    else
    {
      v95 = ScriptLineMessage__FetchRubyLabel(this, v14);
      *(_QWORD *)(v21 + 24) = v95;
      sub_1C3B708((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)v95, v96, v97, v98, v99, v100, v101);
      if ( *(_DWORD *)(v94 + 24) < 2u )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImageRuby(
        (ScriptMessageLabel_o *)v21,
        (UISprite_o **)(v21 + 32),
        (UILabel_o **)(v21 + 24),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(v94 + 32),
        *(System_String_o **)(v94 + 40),
        font,
        0,
        0LL);
    }
  }
  else
  {
    v58 = System_Single__Parse(*(System_String_o **)(Label + 40), 0LL);
    v59 = *(_DWORD *)(v56 + 24);
    v60 = v58;
    if ( v59 == 2 )
    {
      ScriptMessageLabel__UpdateImage_43219472(
        (ScriptMessageLabel_o *)v21,
        (UISprite_o **)(v21 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v58,
        v57,
        0,
        0LL);
    }
    else if ( v59 <= 3 )
    {
      if ( (unsigned int)v59 <= 2 )
        goto LABEL_65;
      v102 = *(System_String_o **)(v56 + 48);
      Label = sub_1C3B80C(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_64;
      v14 = (const MethodInfo *)Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      *(_WORD *)(Label + 32) = 44;
      if ( !v102 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_63390768(v102, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v103 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v103 + 24) <= 1u )
        goto LABEL_65;
      v104 = Label;
      v105 = System_Int32__Parse(*(System_String_o **)(v103 + 40), 0LL);
      v106.fields.x = (float)v104;
      v106.fields.y = (float)v105;
      ScriptMessageLabel__UpdateImage_43219624(
        (ScriptMessageLabel_o *)v21,
        (UISprite_o **)(v21 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v60,
        v57,
        v106,
        0,
        0LL);
    }
  }
LABEL_27:
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
  {
    Label = (__int64)this->fields.messageOffset;
    if ( !Label )
      goto LABEL_64;
    v107.fields.z = 0.0;
    v107.fields.x = (float)(this->fields.startPosition.fields.x - this->fields.dispPosition.fields.x) * 0.5;
    v107.fields.y = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Label, v107, 0LL);
    Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v85 = (UnityEngine_Transform_o *)Label;
    if ( !byte_4C1C516 )
    {
      Label = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v14);
      byte_4C1C516 = 1;
    }
    if ( !v85 )
      goto LABEL_64;
    UnityEngine_Transform__set_localScale(v85, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    if ( this->fields.isCondensedScale )
    {
      Label = (__int64)this->fields.messageOffset;
      if ( !Label )
        goto LABEL_64;
      if ( fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Label, 0LL))) >= (float)this->fields.condensedSize )
      {
        Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( this->fields.messageOffset )
        {
          condensedSize = this->fields.condensedSize;
          v87 = (UnityEngine_Transform_o *)Label;
          LODWORD(v88) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0LL);
          if ( v87 )
          {
            v108.fields.x = (float)condensedSize / fabsf(v88);
            v108.fields.y = 1.0;
            v108.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v87, v108, 0LL);
            goto LABEL_40;
          }
        }
LABEL_64:
        sub_1C3B9C0(Label, v14);
      }
    }
  }
LABEL_40:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_64;
  v89 = *(_QWORD *)(Label + 16);
  v90 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
  ++*(_DWORD *)(Label + 28);
  if ( !v89 )
    goto LABEL_64;
  v91 = *(int *)(Label + 24);
  if ( (unsigned int)v91 >= *(_DWORD *)(v89 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Label,
      (Il2CppObject *)v21,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = v89 + 8 * v91;
    *(_DWORD *)(Label + 24) = v91 + 1;
    *(_QWORD *)(v92 + 32) = v21;
    sub_1C3B708((PartyOrganizationUtility_o *)(v92 + 32), v21, v79, v80, v81, v82, v83, v84);
  }
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mainPrefab = prefab;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mainPrefab,
    (int64_t)prefab,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptLineMessage__ChangeMessageRoot(
        ScriptLineMessage_o *this,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.messageRoot = root;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.messageRoot,
    (int64_t)root,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptLineMessage__ChangeRubyPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.rubyPrefab = prefab;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.rubyPrefab,
    (int64_t)prefab,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScriptLineMessage__ClearLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C23C40 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v6);
    byte_4C23C40 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ScriptLineMessage__Init(this, method);
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    dispLabelList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v13.fields._current, v9);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v10 = this->fields.dispLabelList;
  if ( !v10 )
LABEL_11:
    sub_1C3B9C0(dispLabelList, v7);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
}


void __fastcall ScriptLineMessage__ClearText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o startPosition; // x8
  float v4; // s0
  UnityEngine_Object_o *messageOffset; // x20
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *v8; // x20

  if ( (byte_4C23C4B & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23C4B = 1;
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
  v6 = UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL);
  if ( (v6 & 1) != 0 )
  {
    v8 = this->fields.messageOffset;
    if ( !byte_4C1C511 )
    {
      v6 = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v7);
      byte_4C1C511 = 1;
    }
    if ( !v8 )
      sub_1C3B9C0(v6, v7);
    UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *v14; // x20

  if ( (byte_4C23C3E & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v8);
    byte_4C23C3E = 1;
  }
  ScriptLineMessage__Init(this, method);
  ScriptLineMessage__ClearLabels(this, v9);
  if ( this->fields.isRecycle )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
    if ( !labelStock )
      goto LABEL_28;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_38E2054 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
      if ( labelStock )
      {
        ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, 0LL);
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
                                                              (const MethodInfo_38E2054 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( labelStock )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)labelStock,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
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
                                                              (const MethodInfo_38E2054 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_28;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748(v13, 0LL);
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_28:
      sub_1C3B9C0(labelStock, v10);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_38E2054 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71122748(v14, 0LL);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
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
      if ( v7 == ++v8 )
        return;
    }
LABEL_8:
    sub_1C3B9C0(messageRoot, method);
  }
}


UISprite_o *__fastcall ScriptLineMessage__FetchImageSprite(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_T__o *imageStock; // x0
  __int64 Component_object; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x19
  Il2CppObject *imagePrefab; // x19
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  int v15; // w8
  __int64 v16; // x21
  unsigned int v17; // w22
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x20

  if ( (byte_4C23C43 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v7);
    byte_4C23C43 = 1;
  }
  imageStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !imageStock || imageStock->fields._size < 1 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  imagePrefab,
                                  (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v13 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_object )
      {
        v11 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( this->fields.messageRoot )
          {
            v14 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__set_layer(v14, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__50603580(
                                              v13,
                                              (const MethodInfo_304263C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v15 = *(_DWORD *)(Component_object + 24);
                  v16 = Component_object;
                  if ( v15 < 1 )
                    goto LABEL_20;
                  v17 = 0;
                  while ( 1 )
                  {
                    if ( v17 >= v15 )
                      sub_1C3B9C8(Component_object, v10);
                    Component_object = *(_QWORD *)(v16 + 8LL * (int)v17 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
                    v15 = *(_DWORD *)(v16 + 24);
                    if ( (int)++v17 >= v15 )
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
    sub_1C3B9C0(Component_object, v10);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                imageStock,
                                (const MethodInfo_38E2054 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v11 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v11 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C1C511 )
  {
    Component_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4C1C511 = 1;
  }
  if ( !v18 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C1C516 )
  {
    Component_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4C1C516 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UISprite_o *)v11;
}


ScriptMessageLabel_o *__fastcall ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v7; // x19

  if ( (byte_4C23C44 & 1) == 0 )
  {
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v4);
    byte_4C23C44 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_38E2054 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v7 = (ScriptMessageLabel_o *)sub_1C3B9B0(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v7, 0LL);
  return v7;
}


UILabel_o *__fastcall ScriptLineMessage__FetchMainLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_T__o *mainStock; // x0
  __int64 Component_object; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x19
  Il2CppObject *mainPrefab; // x19
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  int v15; // w8
  __int64 v16; // x21
  unsigned int v17; // w22
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x20

  if ( (byte_4C23C41 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_4C23C41 = 1;
  }
  mainStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
  if ( !mainStock || mainStock->fields._size < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  mainPrefab,
                                  (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v13 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v11 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( this->fields.messageRoot )
          {
            v14 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__set_layer(v14, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__50603580(
                                              v13,
                                              (const MethodInfo_304263C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v15 = *(_DWORD *)(Component_object + 24);
                  v16 = Component_object;
                  if ( v15 < 1 )
                    goto LABEL_20;
                  v17 = 0;
                  while ( 1 )
                  {
                    if ( v17 >= v15 )
                      sub_1C3B9C8(Component_object, v10);
                    Component_object = *(_QWORD *)(v16 + 8LL * (int)v17 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
                    v15 = *(_DWORD *)(v16 + 24);
                    if ( (int)++v17 >= v15 )
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
    sub_1C3B9C0(Component_object, v10);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                mainStock,
                                (const MethodInfo_38E2054 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v11 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v11 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C1C511 )
  {
    Component_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4C1C511 = 1;
  }
  if ( !v18 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C1C516 )
  {
    Component_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4C1C516 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UILabel_o *)v11;
}


UILabel_o *__fastcall ScriptLineMessage__FetchRubyLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Stack_T__o *rubyStock; // x0
  __int64 Component_object; // x0
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x20
  Il2CppObject *rubyPrefab; // x20
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  int v15; // w8
  __int64 v16; // x21
  unsigned int v17; // w22
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x21

  if ( (byte_4C23C42 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_4C23C42 = 1;
  }
  rubyStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
  if ( !rubyStock || rubyStock->fields._size < 1 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  rubyPrefab,
                                  (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v13 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v11 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( this->fields.messageRoot )
          {
            v14 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v14 )
              {
                UnityEngine_GameObject__set_layer(v14, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__50603580(
                                              v13,
                                              (const MethodInfo_304263C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v15 = *(_DWORD *)(Component_object + 24);
                  v16 = Component_object;
                  if ( v15 < 1 )
                    goto LABEL_20;
                  v17 = 0;
                  while ( 1 )
                  {
                    if ( v17 >= v15 )
                      sub_1C3B9C8(Component_object, v10);
                    Component_object = *(_QWORD *)(v16 + 8LL * (int)v17 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
                    v15 = *(_DWORD *)(v16 + 24);
                    if ( (int)++v17 >= v15 )
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
    sub_1C3B9C0(Component_object, v10);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                rubyStock,
                                (const MethodInfo_38E2054 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v11 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v11 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v18 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C1C511 )
  {
    Component_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4C1C511 = 1;
  }
  if ( !v18 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v11, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C1C516 )
  {
    Component_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v10);
    byte_4C1C516 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  System_Collections_Generic_List_object__o *dispLabelList; // x0

  if ( (byte_4C23C3F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__, method);
    byte_4C23C3F = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_1C3B9C0(0LL, method);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_object___ToArray(
                                       dispLabelList,
                                       (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
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

  if ( (byte_4C23C4C & 1) == 0 )
  {
    sub_1C3B764(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_1C3B764(&StringLiteral_16360/*"aes256"*/, v3);
    byte_4C23C4C = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_16360/*"aes256"*/, 0LL);
}


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
  System_Collections_Generic_Stack_T__o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_Stack_T__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_Stack_T__o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_Stack_T__o *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppObject *mainPrefab; // x20
  __int64 fontSizes; // x0
  __int64 v46; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v48; // x0
  int defaultFontSize; // w2
  UILabel_o *v50; // x20
  float v51; // s0
  int32_t rubyFontSize; // w8
  float v53; // s1
  float v54; // s0
  float v55; // s0
  float v56; // s1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v58; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v60; // s0
  UnityEngine_Transform_o *v61; // x20

  if ( (byte_4C23C3D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v3);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v4);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_Stack_UILabel__TypeInfo, v10);
    sub_1C3B764(&System_Collections_Generic_Stack_UISprite__TypeInfo, v11);
    sub_1C3B764(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v12);
    sub_1C3B764(&StringLiteral_897/*"--MM--Z"*/, v13);
    sub_1C3B764(&StringLiteral_25771, v14);
    byte_4C23C3D = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v16 = (System_Collections_Generic_Stack_T__o *)sub_1C3B9B0(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v16,
        (const MethodInfo_38E1A8C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v16;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mainStock, (int64_t)v16, v17, v18, v19, v20, v21, v22);
      v23 = (System_Collections_Generic_Stack_T__o *)sub_1C3B9B0(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v23,
        (const MethodInfo_38E1A8C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v23;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.rubyStock, (int64_t)v23, v24, v25, v26, v27, v28, v29);
      v30 = (System_Collections_Generic_Stack_T__o *)sub_1C3B9B0(System_Collections_Generic_Stack_UISprite__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v30,
        (const MethodInfo_38E1A8C *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v30;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.imageStock, (int64_t)v30, v31, v32, v33, v34, v35, v36);
      v37 = (System_Collections_Generic_Stack_T__o *)sub_1C3B9B0(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v37,
        (const MethodInfo_38E1A8C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v37;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.labelStock, (int64_t)v37, v38, v39, v40, v41, v42, v43);
    }
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)fontSizes,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.rubyPrefab,
                           (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v48 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)fontSizes,
            (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v50 = (UILabel_o *)v48;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (__int64)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
        (Il2CppObject *)StringLiteral_897/*"--MM--Z"*/,
        defaultFontSize,
        (const MethodInfo_334C86C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (__int64)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
                         (Il2CppObject *)StringLiteral_897/*"--MM--Z"*/,
                         (const MethodInfo_334C800 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v51 = this->fields.fontScale * (float)(int)fontSizes,
           v51 != INFINITY)
        ? (v46 = (unsigned int)(int)v51)
        : (v46 = 0x80000000LL),
          this->fields.defaultFontSize = v46,
          !Component_object) )
    {
LABEL_37:
      sub_1C3B9C0(fontSizes, v46);
    }
    UILabel__set_fontSize((UILabel_o *)Component_object, v46, 0LL);
    UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_25771, 0LL);
    fontSizes = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[22].method)(
                  Component_object,
                  Component_object->klass->vtable[23].methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v53;
    if ( rubyFontSize <= 0 )
    {
      if ( !v50 )
        goto LABEL_37;
      v55 = this->fields.fontScale * (float)v50->fields.mFontSize;
      if ( v55 == INFINITY )
        LODWORD(v46) = 0x80000000;
      else
        LODWORD(v46) = (int)v55;
      this->fields.rubyFontSize = v46;
    }
    else
    {
      v54 = this->fields.fontScale * (float)rubyFontSize;
      if ( v54 == INFINITY )
        v46 = 0x80000000LL;
      else
        v46 = (unsigned int)(int)v54;
      this->fields.rubyFontSize = v46;
      if ( !v50 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v50, v46, 0LL);
    UILabel__set_text(v50, (System_String_o *)StringLiteral_25771, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v50->klass->vtable._22_get_localSize.method)(
      v50,
      v50->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v56;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_object,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
    v58 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50, 0LL);
    UnityEngine_Object__Destroy_71122748(v58, 0LL);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v60 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v60;
    fontSizes = UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL);
    if ( (fontSizes & 1) != 0 )
    {
      v61 = this->fields.messageOffset;
      if ( !byte_4C1C511 )
      {
        fontSizes = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v46);
        byte_4C1C511 = 1;
      }
      if ( !v61 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v61, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, (const MethodInfo *)v46);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Object_o *gameObject; // x22
  ScriptLineMessage_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *v26; // x22
  ScriptLineMessage_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Object_o *v35; // x22
  System_Collections_Generic_Stack_T__o *labelStock; // x0

  v3 = label;
  v4 = this;
  if ( (byte_4C23C45 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, label);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UILabel__Push__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Stack_UISprite__Push__, v7);
    this = (ScriptLineMessage_o *)sub_1C3B764(&StringLiteral_1/*""*/, v8);
    byte_4C23C45 = 1;
  }
  if ( !v3 )
    goto LABEL_40;
  p_fields = (ScriptLineMessage_o **)&v3->fields;
  main = (UnityEngine_Object_o *)v3->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (ScriptLineMessage_o *)v4->fields.mainStock;
    label = (ScriptMessageLabel_o *)*p_fields;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)label,
        (const MethodInfo_38E20B4 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_40;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)*p_fields,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
    }
    *p_fields = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&v3->fields, 0LL, v11, v12, v13, v14, v15, v16);
  }
  p_ruby = (ScriptLineMessage_o **)&v3->fields.ruby;
  ruby = (UnityEngine_Object_o *)v3->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    this = *p_ruby;
    if ( !*p_ruby )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (ScriptLineMessage_o *)v4->fields.rubyStock;
    label = (ScriptMessageLabel_o *)*p_ruby;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)label,
        (const MethodInfo_38E20B4 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_40;
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748(v26, 0LL);
    }
    *p_ruby = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&v3->fields.ruby, 0LL, v20, v21, v22, v23, v24, v25);
  }
  p_image = (ScriptLineMessage_o **)&v3->fields.image;
  image = (UnityEngine_Object_o *)v3->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        System_Collections_Generic_Stack_object___Push(
          (System_Collections_Generic_Stack_T__o *)this,
          (Il2CppObject *)label,
          (const MethodInfo_38E20B4 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_36:
        *p_image = 0LL;
        sub_1C3B708((PartyOrganizationUtility_o *)&v3->fields.image, 0LL, v29, v30, v31, v32, v33, v34);
        goto LABEL_37;
      }
      if ( label )
      {
        v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71122748(v35, 0LL);
        goto LABEL_36;
      }
    }
LABEL_40:
    sub_1C3B9C0(this, label);
  }
LABEL_37:
  ScriptMessageLabel__Release(v3, 0LL);
  labelStock = (System_Collections_Generic_Stack_T__o *)v4->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_object___Push(
      labelStock,
      (Il2CppObject *)v3,
      (const MethodInfo_38E20B4 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
}


void __fastcall ScriptLineMessage__ReturnText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  float x; // s0
  float defaultTextOnlyLineHeight; // s4
  float v11; // s1
  float v12; // s2
  float v13; // s0
  void *v14; // x1

  if ( (byte_4C23C49 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C23C49 = 1;
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v14, v2, v3, v4, v5, v6, v7);
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
      sub_1C3B9C0(0LL, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void __fastcall ScriptLineMessage__SetDefaultState(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  float rubyLineHeight; // s2
  float defaultTextOnlyLineHeight; // s1
  int32_t defaultFontSize; // w8
  void *v12; // x1

  if ( (byte_4C23C48 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C23C48 = 1;
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall ScriptLineMessage__SetFontSize(
        ScriptLineMessage_o *this,
        System_String_o *sizeName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  int32_t Item; // w0
  float textOnlyLineHeight; // s2
  float v8; // s0
  int32_t v9; // w8
  float v10; // s0
  float y; // s1

  if ( (byte_4C23C4A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, sizeName);
    byte_4C23C4A = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_1C3B9C0(0LL, sizeName);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_334C800 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
  __int64 v30; // x23
  __int64 Chars; // x0
  System_String_o *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Text_StringBuilder_o *v45; // x20
  System_Text_StringBuilder_o **v46; // x24
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x26
  __int64 v61; // x25
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  int32_t v64; // w29
  int v65; // w21
  int32_t v66; // w20
  int32_t BraceIndex; // w0
  int32_t v68; // w28
  System_String_o *v69; // x0
  int32_t v70; // w20
  System_String_o *String; // x0
  bool v72; // zf
  System_String_o *v73; // x20
  System_String_o *TagSplitString; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_Text_StringBuilder_o *v81; // x20
  __int64 v82; // x1
  ScriptReplaceString_c *v83; // x0
  int32_t playerGenderIndex; // w20
  struct System_String_o *v85; // x1
  System_String_o *v86; // x20
  const MethodInfo *v87; // x6
  char v88; // w2
  UnityEngine_Font_o *v89; // x4
  ScriptLineMessage_o *v90; // x0
  System_String_o *v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct System_String_o *v98; // x1
  System_String_o *v99; // x20
  int32_t v100; // w1
  int32_t v101; // w2
  System_String_o *v102; // x0
  System_String_o *v103; // x2
  ScriptLineMessage_ProcAddLabel2_o *v104; // x9
  __int64 v105; // x1
  const MethodInfo *v106; // x1
  System_String_o *v107; // x20
  System_String_array *v108; // x0
  struct System_String_o *v109; // x1
  System_String_array *v110; // x20
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  System_String_o *v117; // x0
  System_Text_StringBuilder_o *v118; // x20
  ScriptLineMessage_ProcAddLabel2_o *v119; // [xsp+0h] [xbp-80h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C23C47 & 1) == 0 )
  {
    sub_1C3B764(&ScriptLineMessage_ProcAddLabel2_TypeInfo, txt);
    sub_1C3B764(&ScriptLineMessage_ProcAddLabel_TypeInfo, v12);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v13);
    sub_1C3B764(&ScriptReplaceString_TypeInfo, v14);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1C3B764(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__, v16);
    sub_1C3B764(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__, v17);
    sub_1C3B764(&ScriptLineMessage___c__DisplayClass55_0_TypeInfo, v18);
    sub_1C3B764(&StringLiteral_23601/*"time_status_fes01"*/, v19);
    sub_1C3B764(&StringLiteral_16146/*"__max-thumb"*/, v20);
    sub_1C3B764(&StringLiteral_20443/*"is"*/, v21);
    sub_1C3B764(&StringLiteral_16348/*"advActorHide"*/, v22);
    sub_1C3B764(&StringLiteral_16283/*"a77d"*/, v23);
    sub_1C3B764(&StringLiteral_23214/*"stay_no_dialog"*/, v24);
    sub_1C3B764(&StringLiteral_21534/*"mstSvt"*/, v25);
    sub_1C3B764(&StringLiteral_20635/*"k_PKCS7Key"*/, v26);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v27);
    sub_1C3B764(&StringLiteral_16347/*"adjustedHorizontalAdvance"*/, v28);
    sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v29);
    byte_4C23C47 = 1;
  }
  text = 0LL;
  v30 = sub_1C3B9B0(ScriptLineMessage___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_89;
  *(_QWORD *)(v30 + 24) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 24), (int64_t)this, v33, v34, v35, v36, v37, v38);
  *(_BYTE *)(v30 + 32) = isFoward;
  *(_QWORD *)(v30 + 40) = font;
  sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 40), (int64_t)font, v39, v40, v41, v42, v43, v44);
  v45 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v45, 0LL);
  *(_QWORD *)(v30 + 16) = v45;
  v46 = (System_Text_StringBuilder_o **)(v30 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)v45, v47, v48, v49, v50, v51, v52);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
      (int64_t)enforceColor,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v30 + 48) = defaultColorTag;
  sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 48), (int64_t)defaultColorTag, v53, v54, v55, v56, v57, v58);
  v61 = sub_1C3B9B0(ScriptLineMessage_ProcAddLabel_TypeInfo);
  ScriptLineMessage_ProcAddLabel___ctor(
    (ScriptLineMessage_ProcAddLabel_o *)v61,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__,
    v62);
  v119 = (ScriptLineMessage_ProcAddLabel2_o *)sub_1C3B9B0(ScriptLineMessage_ProcAddLabel2_TypeInfo);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v119,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__,
    v63);
  if ( !txt )
    goto LABEL_89;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_87;
  v64 = 0;
  v65 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v64, 0LL) != 91 )
    {
      v81 = *v46;
      Chars = System_String__get_Chars(txt, v64, 0LL);
      if ( !v81 )
        goto LABEL_89;
      System_Text_StringBuilder__Append_62532092(v81, Chars, 0LL);
      v68 = v64;
      goto LABEL_42;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v66 = v64 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v64 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v46;
      if ( !*v46 )
        goto LABEL_89;
      Chars = (__int64)System_Text_StringBuilder__Append_62529764(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_16127/*"__field-group"*/,
                         0LL);
      goto LABEL_43;
    }
    v68 = BraceIndex;
    Chars = System_String__get_Chars(txt, v66, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v61 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
      v69 = System_String__Substring_63387616(txt, v64 + 2, v65 + v68 - 2, 0LL);
      v70 = System_Int32__Parse(v69, 0LL);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v70, 0LL);
      v72 = v70 == 1;
      v73 = String;
      if ( v72 && removeUserNameColorCode )
      {
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        TagSplitString = ScriptMessageLabel__RemoveColorTag(v73, 0LL);
      }
      else
      {
        TagSplitString = System_String__Concat_63368612(String, (System_String_o *)StringLiteral_16146/*"__max-thumb"*/, 0LL);
      }
LABEL_39:
      v85 = *(struct System_String_o **)(v30 + 48);
      v86 = TagSplitString;
      this->fields.defaultColorTag = v85;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
        (int64_t)v85,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      v88 = *(_BYTE *)(v30 + 32);
      v89 = *(UnityEngine_Font_o **)(v30 + 40);
      v90 = this;
      v91 = v86;
LABEL_40:
      ScriptLineMessage__UpdateLabels(v90, v91, v88, enforceColor, v89, 0, v87);
      v98 = this->fields.defaultColorTag;
      *(_QWORD *)(v30 + 48) = v98;
LABEL_41:
      sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 48), (int64_t)v98, v92, v93, v94, v95, v96, v97);
      goto LABEL_42;
    }
    Chars = System_String__get_Chars(txt, v66, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v61 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4C23AD0 )
      {
        sub_1C3B764(&ScriptReplaceString_TypeInfo, v82);
        byte_4C23AD0 = 1;
      }
      v83 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v83 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v83->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v64 + 2, playerGenderIndex, 0LL);
      goto LABEL_39;
    }
    Chars = System_String__get_Chars(txt, v66, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v61 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
      Chars = (__int64)System_String__Substring_63387616(txt, v64, v65 + v68 + 1, 0LL);
      goto LABEL_60;
    }
    if ( System_String__get_Chars(txt, v66, 0LL) != 61 )
      break;
LABEL_42:
    v66 = v68 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, System_Text_StringBuilder_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AfterParseEachChar.method)(
              this,
              *v46,
              v61,
              this->klass->vtable._6_PreProcSetRubyLabel.methodPtr);
LABEL_43:
    v65 = -v66;
    v64 = v66;
    if ( v66 >= txt->fields._stringLength )
      goto LABEL_87;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v66, 0LL);
  if ( !Chars )
    goto LABEL_89;
  v99 = (System_String_o *)Chars;
  Chars = System_String__Equals_63376928((System_String_o *)Chars, (System_String_o *)StringLiteral_20635/*"k_PKCS7Key"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v61 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
    v100 = v64 + 7;
    v101 = v65 + v68 - 7;
    goto LABEL_58;
  }
  Chars = System_String__Equals_63376928(v99, (System_String_o *)StringLiteral_20443/*"is"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v61 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
    v100 = v64 + 3;
    v101 = v65 + v68 - 3;
LABEL_58:
    v32 = System_String__Substring_63387616(txt, v100, v101, 0LL);
    v102 = (System_String_o *)StringLiteral_16283/*"a77d"*/;
    v103 = (System_String_o *)StringLiteral_16386/*"align-items"*/;
LABEL_59:
    Chars = (__int64)System_String__Concat_63379872(v102, v32, v103, 0LL);
LABEL_60:
    v104 = v119;
    if ( !v119 )
      goto LABEL_89;
    v105 = Chars;
LABEL_62:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v104->fields.m_target)(
      v104->fields.original_method_info,
      v105,
      *(_QWORD *)&v104->fields.extra_arg);
    goto LABEL_42;
  }
  Chars = System_String__Equals_63376928(v99, (System_String_o *)StringLiteral_23214/*"stay_no_dialog"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v61 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
    ScriptLineMessage__ReturnText(this, v106);
    if ( enforceColor )
    {
      *p_defaultColorTag = enforceColor;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
        (int64_t)enforceColor,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
    }
    v98 = *p_defaultColorTag;
    *(_QWORD *)(v30 + 48) = *p_defaultColorTag;
    goto LABEL_41;
  }
  Chars = System_String__Equals_63376928(v99, (System_String_o *)StringLiteral_23601/*"time_status_fes01"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v61 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
    v107 = System_String__Substring_63387616(txt, v64 + 12, v65 + v68 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v108 = ScriptMessageLabel__AnalysTagParam(v107, 0, 0LL);
    v109 = *(struct System_String_o **)(v30 + 48);
    v110 = v108;
    this->fields.defaultColorTag = v109;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
      (int64_t)v109,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
    v117 = ScriptMessageLabel__GetServantChangeName(v110, 0LL);
    v88 = *(_BYTE *)(v30 + 32);
    v89 = *(UnityEngine_Font_o **)(v30 + 40);
    v91 = v117;
    v90 = this;
    goto LABEL_40;
  }
  Chars = System_String__StartsWith(v99, (System_String_o *)StringLiteral_21534/*"mstSvt"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v61 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
    Chars = (__int64)System_String__Substring_63387616(txt, v64 + 5, v65 + v68 - 5, 0LL);
    if ( !Chars )
      goto LABEL_89;
    v32 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v102 = (System_String_o *)StringLiteral_16347/*"adjustedHorizontalAdvance"*/;
      v103 = (System_String_o *)StringLiteral_16386/*"align-items"*/;
      goto LABEL_59;
    }
    v104 = v119;
    if ( !v119 )
      goto LABEL_89;
    v105 = StringLiteral_16348/*"advActorHide"*/;
    goto LABEL_62;
  }
  if ( v68 < txt->fields._stringLength )
  {
    text = System_String__Substring_63387616(txt, v64, v65 + v68 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v30 + 48), &text, enforceColor, 0LL);
    Chars = (__int64)*v46;
    if ( !*v46 )
      goto LABEL_89;
    System_Text_StringBuilder__Append_62529764((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_42;
  }
  v118 = *v46;
  Chars = (__int64)System_String__Substring(txt, v64, 0LL);
  if ( !v118 )
    goto LABEL_89;
  Chars = (__int64)System_Text_StringBuilder__Append_62529764(v118, (System_String_o *)Chars, 0LL);
LABEL_87:
  if ( !v61 )
LABEL_89:
    sub_1C3B9C0(Chars, v32);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v61 + 24))(*(_QWORD *)(v61 + 64), *(_QWORD *)(v61 + 40));
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A7DB04;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7DAC4;
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C3B718(this, &v5, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall ScriptLineMessage_ProcAddLabel__Invoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLineMessage_ProcAddLabel2___ctor(
        ScriptLineMessage_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A7DB80;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A7DB60;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7DB18;
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel2__BeginInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = txt;
  return (System_IAsyncResult_o *)sub_1C3B718(this, &v6, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__Invoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    txt,
    *(_QWORD *)&this->fields.extra_arg);
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
  char *tmpTxt; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  ScriptLineMessage_o *_4__this; // x20
  const MethodInfo *v11; // x5
  struct ScriptLineMessage_o *v12; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  if ( System_Text_StringBuilder__get_Length((System_Text_StringBuilder_o *)tmpTxt, 0LL) < 1 )
    goto LABEL_8;
  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (char *)(*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)tmpTxt + 360LL))(
                           tmpTxt,
                           *(_QWORD *)(*(_QWORD *)tmpTxt + 368LL)),
        (v12 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptLineMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v12->fields.defaultColorTag,
          0,
          this->fields.font,
          v11),
        (tmpTxt = (char *)this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_1C3B9C0(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 17) = tmpColorTag;
  sub_1C3B708((PartyOrganizationUtility_o *)(tmpTxt + 136), (int64_t)tmpColorTag, v4, v5, v6, v7, v8, v9);
}


void __fastcall ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__1(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  MethodInfo *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
    sub_1C3B9C0(this, text);
  tmpColorTag = (struct ScriptLineMessage_o *)v8->fields.tmpColorTag;
  this[2].fields.__4__this = tmpColorTag;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this[2].fields.__4__this,
    (int64_t)tmpColorTag,
    (int64_t)method,
    v3,
    v4,
    (BattleSetupInfo_o *)v5,
    v6,
    v7);
}