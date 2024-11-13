void __fastcall ScriptLineMessage___ctor(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_object__int__o *v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  void *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4B17DED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_21604/*"medium"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_23624/*"small"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_21265/*"large"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_25034/*"x-large"*/, v23, v24);
    byte_4B17DED = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v25 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v25,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v25 )
    sub_1BCAA3C(v26, v27);
  System_Collections_Generic_Dictionary_object__int___Add(
    v25,
    (Il2CppObject *)StringLiteral_915/*"-"*/,
    30,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v25,
    (Il2CppObject *)StringLiteral_23624/*"small"*/,
    24,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v25,
    (Il2CppObject *)StringLiteral_21604/*"medium"*/,
    30,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v25,
    (Il2CppObject *)StringLiteral_21265/*"large"*/,
    48,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v25,
    (Il2CppObject *)StringLiteral_25034/*"x-large"*/,
    64,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontSizes, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ScriptMessageLabel__TypeInfo,
                                                       v41,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispLabelList, (int64_t)v44, v45, v46, v47, v48, v49, v50);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 Label; // x0
  const MethodInfo *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x19
  PartyOrganizationUtility_o *v25; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  UILabel_o *MainLabel; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1
  UILabel_o *RubyLabel; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_String_o *v43; // x23
  __int64 v44; // x23
  int v45; // w8
  int32_t fontSize; // w4
  System_String_o *v47; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v49; // x1
  UISprite_o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_String_o *v57; // x23
  int v58; // w8
  __int64 v59; // x24
  System_String_o *v60; // x23
  float v61; // s0
  int v62; // w8
  float v63; // s8
  UISprite_o *ImageSprite; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_String_o *v71; // x0
  int32_t v72; // w22
  int32_t v73; // w0
  UILabel_o *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  UnityEngine_Object_o *messageOffset; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x2
  UnityEngine_Transform_o *v89; // x21
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v91; // x21
  float v92; // s0
  __int64 v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  __int64 v96; // x8
  int v97; // w8
  __int64 v98; // x23
  UILabel_o *v99; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  System_String_o *v106; // x21
  __int64 v107; // x21
  int v108; // w24
  int32_t v109; // w0
  UnityEngine_Vector2_o v110; // 0:s1.4,4:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17DE6 & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, text, colorTag);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_21335/*"line"*/, v14, v15);
    byte_4B17DE6 = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_64;
  v24 = Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v25 = (PartyOrganizationUtility_o *)(Label + 112);
  v25->fields._SelectedInitPosition_k__BackingField = 0;
  sub_1BCA784(v25, (int64_t)colorTag, v18, v19, v20, v21, v22, v23);
  if ( !text )
    goto LABEL_64;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_26;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    MainLabel = ScriptLineMessage__FetchMainLabel(this, v27);
    *(_QWORD *)(v24 + 16) = MainLabel;
    sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)MainLabel, v29, v30, v31, v32, v33, v34);
    RubyLabel = ScriptLineMessage__FetchRubyLabel(this, v35);
    *(_QWORD *)(v24 + 24) = RubyLabel;
    sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)RubyLabel, v37, v38, v39, v40, v41, v42);
    v43 = System_String__Substring_62420224(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1BCA888(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v17 = (const MethodInfo *)Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v43 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_62423376(v43, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v44 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_PreProcSetRubyLabel.method)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._7_SetText.methodPtr);
        v45 = *(_DWORD *)(v44 + 24);
        if ( v45 )
        {
          fontSize = this->fields.fontSize;
          v47 = *(System_String_o **)(v44 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v45 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              (ScriptMessageLabel_o *)v24,
              (UILabel_o **)(v24 + 16),
              (UILabel_o **)(v24 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v47,
              font,
              0LL);
          else
            ScriptMessageLabel__UpdateRuby(
              (ScriptMessageLabel_o *)v24,
              (UILabel_o **)(v24 + 16),
              (UILabel_o **)(v24 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v47,
              *(System_String_o **)(v44 + 40),
              font,
              this->fields.isTalkName,
              0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_65:
    sub_1BCAA44(Label, v17);
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0LL) == 126 )
    {
      ImageSprite = ScriptLineMessage__FetchImageSprite(this, v26);
      *(_QWORD *)(v24 + 32) = ImageSprite;
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)ImageSprite, v65, v66, v67, v68, v69, v70);
      v71 = System_String__Substring_62420224(text, 2, text->fields._stringLength - 3, 0LL);
      v72 = this->fields.fontSize;
      v73 = System_Int32__Parse(v71, 0LL);
      ScriptMessageLabel__UpdateLine(
        (ScriptMessageLabel_o *)v24,
        (UISprite_o **)(v24 + 32),
        &this->fields.dispPosition,
        v72,
        v73,
        (System_String_o *)StringLiteral_21335/*"line"*/,
        0LL);
      goto LABEL_27;
    }
LABEL_26:
    v74 = ScriptLineMessage__FetchMainLabel(this, v26);
    *(_QWORD *)(v24 + 16) = v74;
    sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)v74, v75, v76, v77, v78, v79, v80);
    ScriptMessageLabel__UpdateLabel(
      (ScriptMessageLabel_o *)v24,
      (UILabel_o **)(v24 + 16),
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.fontSize,
      0,
      text,
      font,
      0LL);
    goto LABEL_27;
  }
  v50 = ScriptLineMessage__FetchImageSprite(this, v49);
  *(_QWORD *)(v24 + 32) = v50;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)v50, v51, v52, v53, v54, v55, v56);
  v57 = System_String__Substring_62420224(text, 2, text->fields._stringLength - 3, 0LL);
  Label = sub_1BCA888(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_64;
  v17 = (const MethodInfo *)Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_65;
  *(_WORD *)(Label + 32) = 32;
  if ( !v57 )
    goto LABEL_64;
  Label = (__int64)System_String__Split_62423376(v57, (System_Char_array *)Label, 0LL);
  if ( !Label )
    goto LABEL_64;
  v58 = *(_DWORD *)(Label + 24);
  v59 = Label;
  if ( !v58 )
    goto LABEL_65;
  v60 = *(System_String_o **)(Label + 32);
  if ( v58 <= 1 )
  {
    Label = sub_1BCA888(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v17 = (const MethodInfo *)Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_65;
    *(_WORD *)(Label + 32) = 58;
    if ( !v60 )
      goto LABEL_64;
    Label = (__int64)System_String__Split_62423376(v60, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_64;
    v97 = *(_DWORD *)(Label + 24);
    v98 = Label;
    if ( v97 <= 1 )
    {
      if ( !v97 )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImage(
        (ScriptMessageLabel_o *)v24,
        (UISprite_o **)(v24 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        0LL);
    }
    else
    {
      v99 = ScriptLineMessage__FetchRubyLabel(this, v17);
      *(_QWORD *)(v24 + 24) = v99;
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)v99, v100, v101, v102, v103, v104, v105);
      if ( *(_DWORD *)(v98 + 24) < 2u )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImageRuby(
        (ScriptMessageLabel_o *)v24,
        (UISprite_o **)(v24 + 32),
        (UILabel_o **)(v24 + 24),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(v98 + 32),
        *(System_String_o **)(v98 + 40),
        font,
        0,
        0LL);
    }
  }
  else
  {
    v61 = System_Single__Parse(*(System_String_o **)(Label + 40), 0LL);
    v62 = *(_DWORD *)(v59 + 24);
    v63 = v61;
    if ( v62 == 2 )
    {
      ScriptMessageLabel__UpdateImage_42446300(
        (ScriptMessageLabel_o *)v24,
        (UISprite_o **)(v24 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v61,
        v60,
        0,
        0LL);
    }
    else if ( v62 <= 3 )
    {
      if ( (unsigned int)v62 <= 2 )
        goto LABEL_65;
      v106 = *(System_String_o **)(v59 + 48);
      Label = sub_1BCA888(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_64;
      v17 = (const MethodInfo *)Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      *(_WORD *)(Label + 32) = 44;
      if ( !v106 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_62423376(v106, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v107 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v107 + 24) <= 1u )
        goto LABEL_65;
      v108 = Label;
      v109 = System_Int32__Parse(*(System_String_o **)(v107 + 40), 0LL);
      v110.fields.x = (float)v108;
      v110.fields.y = (float)v109;
      ScriptMessageLabel__UpdateImage_42446452(
        (ScriptMessageLabel_o *)v24,
        (UISprite_o **)(v24 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v63,
        v60,
        v110,
        0,
        0LL);
    }
  }
LABEL_27:
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
  {
    Label = (__int64)this->fields.messageOffset;
    if ( !Label )
      goto LABEL_64;
    v111.fields.z = 0.0;
    v111.fields.x = (float)(this->fields.startPosition.fields.x - this->fields.dispPosition.fields.x) * 0.5;
    v111.fields.y = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Label, v111, 0LL);
    Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v89 = (UnityEngine_Transform_o *)Label;
    if ( !byte_4B109C6 )
    {
      Label = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v17, v88);
      byte_4B109C6 = 1;
    }
    if ( !v89 )
      goto LABEL_64;
    UnityEngine_Transform__set_localScale(v89, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
          v91 = (UnityEngine_Transform_o *)Label;
          LODWORD(v92) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0LL);
          if ( v91 )
          {
            v112.fields.x = (float)condensedSize / fabsf(v92);
            v112.fields.y = 1.0;
            v112.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v91, v112, 0LL);
            goto LABEL_40;
          }
        }
LABEL_64:
        sub_1BCAA3C(Label, v17);
      }
    }
  }
LABEL_40:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_64;
  v93 = *(_QWORD *)(Label + 16);
  v94 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
  ++*(_DWORD *)(Label + 28);
  if ( !v93 )
    goto LABEL_64;
  v95 = *(int *)(Label + 24);
  if ( (unsigned int)v95 >= *(_DWORD *)(v93 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Label,
      (Il2CppObject *)v24,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
  }
  else
  {
    v96 = v93 + 8 * v95;
    *(_DWORD *)(Label + 24) = v95 + 1;
    *(_QWORD *)(v96 + 32) = v24;
    sub_1BCA784((PartyOrganizationUtility_o *)(v96 + 32), v24, v82, v83, v84, v85, v86, v87);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B17DE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v10, v11);
    byte_4B17DE0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ScriptLineMessage__Init(this, method);
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    dispLabelList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v18.fields._current, v14);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v15 = this->fields.dispLabelList;
  if ( !v15 )
LABEL_11:
    sub_1BCAA3C(dispLabelList, v12);
  size = v15->fields._size;
  v17 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
}


void __fastcall ScriptLineMessage__ClearText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct UnityEngine_Vector2_o startPosition; // x8
  float v6; // s0
  UnityEngine_Object_o *messageOffset; // x20
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  UnityEngine_Transform_o *v11; // x20

  if ( (byte_4B17DEB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B17DEB = 1;
  }
  ScriptLineMessage__ClearLabels(this, method);
  startPosition = this->fields.startPosition;
  v6 = startPosition.fields.y - this->fields.textOnlyLineHeight;
  this->fields.dispPosition = startPosition;
  this->fields.maxDispPosition.fields.x = startPosition.fields.x;
  this->fields.maxDispPosition.fields.y = v6;
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v8 = UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL);
  if ( (v8 & 1) != 0 )
  {
    v11 = this->fields.messageOffset;
    if ( !byte_4B109C1 )
    {
      v8 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v10);
      byte_4B109C1 = 1;
    }
    if ( !v11 )
      sub_1BCAA3C(v8, v9);
    UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  ScriptLineMessage__SetDefaultState(this, v9);
}


void __fastcall ScriptLineMessage__DeleteLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x20

  if ( (byte_4B17DDE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v14, v15);
    byte_4B17DDE = 1;
  }
  ScriptLineMessage__Init(this, method);
  ScriptLineMessage__ClearLabels(this, v16);
  if ( this->fields.isRecycle )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
    if ( !labelStock )
      goto LABEL_28;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
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
                                                              (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( labelStock )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)labelStock,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
                                                              (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_28;
      v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      UnityEngine_Object__Destroy_70154244(v22, 0LL);
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_28:
      sub_1BCAA3C(labelStock, v17);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
        UnityEngine_Object__Destroy_70154244(v24, 0LL);
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
    sub_1BCAA3C(messageRoot, method);
  }
}


UISprite_o *__fastcall ScriptLineMessage__FetchImageSprite(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Stack_T__o *imageStock; // x0
  __int64 Component_object; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x19
  Il2CppObject *imagePrefab; // x19
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x22
  int v21; // w8
  __int64 v22; // x21
  unsigned int v23; // w22
  __int64 v24; // x2
  UnityEngine_Transform_o *v25; // x20
  __int64 v26; // x2
  UnityEngine_Transform_o *v27; // x20

  if ( (byte_4B17DE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v12, v13);
    byte_4B17DE3 = 1;
  }
  imageStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !imageStock || imageStock->fields._size < 1 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  imagePrefab,
                                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v19 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_object )
      {
        v17 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v17, 0LL);
          if ( this->fields.messageRoot )
          {
            v20 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v20 )
              {
                UnityEngine_GameObject__set_layer(v20, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                              v19,
                                              (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v21 = *(_DWORD *)(Component_object + 24);
                  v22 = Component_object;
                  if ( v21 < 1 )
                    goto LABEL_20;
                  v23 = 0;
                  while ( 1 )
                  {
                    if ( v23 >= v21 )
                      sub_1BCAA44(Component_object, v16);
                    Component_object = *(_QWORD *)(v22 + 8LL * (int)v23 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
                    v21 = *(_DWORD *)(v22 + 24);
                    if ( (int)++v23 >= v21 )
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
    sub_1BCAA3C(Component_object, v16);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                imageStock,
                                (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v17 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v17 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v17, 0LL);
  v25 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v24);
    byte_4B109C1 = 1;
  }
  if ( !v25 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v17, 0LL);
  v27 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v26);
    byte_4B109C6 = 1;
  }
  if ( !v27 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UISprite_o *)v17;
}


ScriptMessageLabel_o *__fastcall ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v11; // x19

  if ( (byte_4B17DE4 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v7, v8);
    byte_4B17DE4 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v11 = (ScriptMessageLabel_o *)sub_1BCAA2C(ScriptMessageLabel_TypeInfo, method, v2, v3);
  ScriptMessageLabel___ctor(v11, 0LL);
  return v11;
}


UILabel_o *__fastcall ScriptLineMessage__FetchMainLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Stack_T__o *mainStock; // x0
  __int64 Component_object; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x19
  Il2CppObject *mainPrefab; // x19
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x22
  int v21; // w8
  __int64 v22; // x21
  unsigned int v23; // w22
  __int64 v24; // x2
  UnityEngine_Transform_o *v25; // x20
  __int64 v26; // x2
  UnityEngine_Transform_o *v27; // x20

  if ( (byte_4B17DE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v12, v13);
    byte_4B17DE1 = 1;
  }
  mainStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
  if ( !mainStock || mainStock->fields._size < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  mainPrefab,
                                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v19 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v17 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v17, 0LL);
          if ( this->fields.messageRoot )
          {
            v20 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v20 )
              {
                UnityEngine_GameObject__set_layer(v20, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                              v19,
                                              (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v21 = *(_DWORD *)(Component_object + 24);
                  v22 = Component_object;
                  if ( v21 < 1 )
                    goto LABEL_20;
                  v23 = 0;
                  while ( 1 )
                  {
                    if ( v23 >= v21 )
                      sub_1BCAA44(Component_object, v16);
                    Component_object = *(_QWORD *)(v22 + 8LL * (int)v23 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
                    v21 = *(_DWORD *)(v22 + 24);
                    if ( (int)++v23 >= v21 )
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
    sub_1BCAA3C(Component_object, v16);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                mainStock,
                                (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v17 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v17 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v17, 0LL);
  v25 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v24);
    byte_4B109C1 = 1;
  }
  if ( !v25 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v17, 0LL);
  v27 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v26);
    byte_4B109C6 = 1;
  }
  if ( !v27 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UILabel_o *)v17;
}


UILabel_o *__fastcall ScriptLineMessage__FetchRubyLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Stack_T__o *rubyStock; // x0
  __int64 Component_object; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x20
  Il2CppObject *rubyPrefab; // x20
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x22
  int v21; // w8
  __int64 v22; // x21
  unsigned int v23; // w22
  __int64 v24; // x2
  UnityEngine_Transform_o *v25; // x21
  __int64 v26; // x2
  UnityEngine_Transform_o *v27; // x21

  if ( (byte_4B17DE2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v12, v13);
    byte_4B17DE2 = 1;
  }
  rubyStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
  if ( !rubyStock || rubyStock->fields._size < 1 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  rubyPrefab,
                                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v19 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v17 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v17, 0LL);
          if ( this->fields.messageRoot )
          {
            v20 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v20 )
              {
                UnityEngine_GameObject__set_layer(v20, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                              v19,
                                              (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v21 = *(_DWORD *)(Component_object + 24);
                  v22 = Component_object;
                  if ( v21 < 1 )
                    goto LABEL_20;
                  v23 = 0;
                  while ( 1 )
                  {
                    if ( v23 >= v21 )
                      sub_1BCAA44(Component_object, v16);
                    Component_object = *(_QWORD *)(v22 + 8LL * (int)v23 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
                    v21 = *(_DWORD *)(v22 + 24);
                    if ( (int)++v23 >= v21 )
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
    sub_1BCAA3C(Component_object, v16);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                rubyStock,
                                (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v17 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v17 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v17, 0LL);
  v25 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C1 )
  {
    Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v24);
    byte_4B109C1 = 1;
  }
  if ( !v25 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v17, 0LL);
  v27 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4B109C6 )
  {
    Component_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v26);
    byte_4B109C6 = 1;
  }
  if ( !v27 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UILabel__set_fontSize((UILabel_o *)v17, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v17;
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
  __int64 v2; // x2
  System_Collections_Generic_List_object__o *dispLabelList; // x0

  if ( (byte_4B17DDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__, method, v2);
    byte_4B17DDF = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_1BCAA3C(0LL, method);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_object___ToArray(
                                       dispLabelList,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B17DEC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16211/*"\\[#[^:]+:[^:]+\\]"*/, v4, v5);
    byte_4B17DEC = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, method);
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_16211/*"\\[#[^:]+:[^:]+\\]"*/, 0LL);
}


void __fastcall ScriptLineMessage__Init(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  _BOOL4 isRecycle; // w8
  System_Collections_Generic_Stack_T__o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_Stack_T__o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_Stack_T__o *v50; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_Stack_T__o *v60; // x20
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  Il2CppObject *mainPrefab; // x20
  __int64 fontSizes; // x0
  __int64 v69; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v71; // x0
  int defaultFontSize; // w2
  UILabel_o *v73; // x20
  float v74; // s0
  int32_t rubyFontSize; // w8
  float v76; // s1
  float v77; // s0
  float v78; // s0
  float v79; // s1
  __int64 v80; // x1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v82; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v84; // s0
  __int64 v85; // x2
  UnityEngine_Transform_o *v86; // x20

  if ( (byte_4B17DDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_Stack_UILabel__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_Stack_UISprite__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_25507/*"■"*/, v27, v28);
    byte_4B17DDD = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v30 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
      System_Collections_Generic_Stack_object____ctor(
        v30,
        (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v30;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainStock, (int64_t)v30, v31, v32, v33, v34, v35, v36);
      v40 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
      System_Collections_Generic_Stack_object____ctor(
        v40,
        (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v40;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rubyStock, (int64_t)v40, v41, v42, v43, v44, v45, v46);
      v50 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_Stack_UISprite__TypeInfo,
                                                       v47,
                                                       v48,
                                                       v49);
      System_Collections_Generic_Stack_object____ctor(
        v50,
        (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v50;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.imageStock, (int64_t)v50, v51, v52, v53, v54, v55, v56);
      v60 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo,
                                                       v57,
                                                       v58,
                                                       v59);
      System_Collections_Generic_Stack_object____ctor(
        v60,
        (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v60;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.labelStock, (int64_t)v60, v61, v62, v63, v64, v65, v66);
    }
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)fontSizes,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.rubyPrefab,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v71 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)fontSizes,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v73 = (UILabel_o *)v71;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (__int64)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
        (Il2CppObject *)StringLiteral_915/*"-"*/,
        defaultFontSize,
        (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (__int64)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
                         (Il2CppObject *)StringLiteral_915/*"-"*/,
                         (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v74 = this->fields.fontScale * (float)(int)fontSizes,
           v74 != INFINITY)
        ? (v69 = (unsigned int)(int)v74)
        : (v69 = 0x80000000LL),
          this->fields.defaultFontSize = v69,
          !Component_object) )
    {
LABEL_37:
      sub_1BCAA3C(fontSizes, v69);
    }
    UILabel__set_fontSize((UILabel_o *)Component_object, v69, 0LL);
    UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_25507/*"■"*/, 0LL);
    fontSizes = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[22].method)(
                  Component_object,
                  Component_object->klass->vtable[23].methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v76;
    if ( rubyFontSize <= 0 )
    {
      if ( !v73 )
        goto LABEL_37;
      v78 = this->fields.fontScale * (float)v73->fields.mFontSize;
      if ( v78 == INFINITY )
        LODWORD(v69) = 0x80000000;
      else
        LODWORD(v69) = (int)v78;
      this->fields.rubyFontSize = v69;
    }
    else
    {
      v77 = this->fields.fontScale * (float)rubyFontSize;
      if ( v77 == INFINITY )
        v69 = 0x80000000LL;
      else
        v69 = (unsigned int)(int)v77;
      this->fields.rubyFontSize = v69;
      if ( !v73 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v73, v69, 0LL);
    UILabel__set_text(v73, (System_String_o *)StringLiteral_25507/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v73->klass->vtable._22_get_localSize.method)(
      v73,
      v73->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v79;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_object,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    v82 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v73, 0LL);
    UnityEngine_Object__Destroy_70154244(v82, 0LL);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v84 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v84;
    fontSizes = UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL);
    if ( (fontSizes & 1) != 0 )
    {
      v86 = this->fields.messageOffset;
      if ( !byte_4B109C1 )
      {
        fontSizes = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v69, v85);
        byte_4B109C1 = 1;
      }
      if ( !v86 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v86, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, (const MethodInfo *)v69);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ScriptLineMessage_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x22
  ScriptLineMessage_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x22
  ScriptLineMessage_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  UnityEngine_Object_o *v42; // x22
  System_Collections_Generic_Stack_T__o *labelStock; // x0

  v3 = label;
  v4 = this;
  if ( (byte_4B17DE5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UILabel__Push__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_UISprite__Push__, v9, v10);
    this = (ScriptLineMessage_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B17DE5 = 1;
  }
  if ( !v3 )
    goto LABEL_40;
  p_fields = (ScriptLineMessage_o **)&v3->fields;
  main = (UnityEngine_Object_o *)v3->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
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
        (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_40;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)*p_fields,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    }
    *p_fields = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields, 0LL, v15, v16, v17, v18, v19, v20);
  }
  p_ruby = (ScriptLineMessage_o **)&v3->fields.ruby;
  ruby = (UnityEngine_Object_o *)v3->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
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
        (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_40;
      v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
      UnityEngine_Object__Destroy_70154244(v32, 0LL);
    }
    *p_ruby = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.ruby, 0LL, v25, v26, v27, v28, v29, v30);
  }
  p_image = (ScriptLineMessage_o **)&v3->fields.image;
  image = (UnityEngine_Object_o *)v3->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
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
          (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_36:
        *p_image = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.image, 0LL, v35, v36, v37, v38, v39, v40);
        goto LABEL_37;
      }
      if ( label )
      {
        v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
        UnityEngine_Object__Destroy_70154244(v42, 0LL);
        goto LABEL_36;
      }
    }
LABEL_40:
    sub_1BCAA3C(this, label);
  }
LABEL_37:
  ScriptMessageLabel__Release(v3, 0LL);
  labelStock = (System_Collections_Generic_Stack_T__o *)v4->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_object___Push(
      labelStock,
      (Il2CppObject *)v3,
      (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
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

  if ( (byte_4B17DE9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17DE9 = 1;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v14, v2, v3, v4, v5, v6, v7);
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
      sub_1BCAA3C(0LL, method);
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

  if ( (byte_4B17DE8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17DE8 = 1;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v12, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B17DEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, sizeName, method);
    byte_4B17DEA = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_1BCAA3C(0LL, sizeName);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x23
  __int64 Chars; // x0
  System_String_o *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Text_StringBuilder_o *v66; // x20
  System_Text_StringBuilder_o **v67; // x24
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x26
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x25
  const MethodInfo *v86; // x3
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  const MethodInfo *v90; // x3
  int32_t v91; // w29
  int v92; // w21
  __int64 v93; // x1
  int32_t v94; // w20
  int32_t BraceIndex; // w0
  int32_t v96; // w28
  System_String_o *v97; // x0
  __int64 v98; // x1
  int32_t v99; // w20
  System_String_o *String; // x0
  __int64 v101; // x1
  bool v102; // zf
  System_String_o *v103; // x20
  System_String_o *TagSplitString; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  System_Text_StringBuilder_o *v111; // x20
  __int64 v112; // x1
  __int64 v113; // x2
  ScriptReplaceString_c *v114; // x0
  int32_t playerGenderIndex; // w20
  struct System_String_o *v116; // x1
  System_String_o *v117; // x20
  const MethodInfo *v118; // x6
  char v119; // w2
  UnityEngine_Font_o *v120; // x4
  ScriptLineMessage_o *v121; // x0
  System_String_o *v122; // x1
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  struct System_String_o *v129; // x1
  __int64 v130; // x1
  System_String_o *v131; // x20
  int32_t v132; // w1
  int32_t v133; // w2
  System_String_o *v134; // x0
  System_String_o *v135; // x2
  ScriptLineMessage_ProcAddLabel2_o *v136; // x9
  __int64 v137; // x1
  const MethodInfo *v138; // x1
  __int64 v139; // x1
  System_String_o *v140; // x20
  System_String_array *v141; // x0
  struct System_String_o *v142; // x1
  System_String_array *v143; // x20
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  System_String_o *v150; // x0
  __int64 v151; // x1
  System_Text_StringBuilder_o *v152; // x20
  ScriptLineMessage_ProcAddLabel2_o *v153; // [xsp+0h] [xbp-80h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B17DE7 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptLineMessage_ProcAddLabel2_TypeInfo, txt, isFoward);
    sub_1BCA7E0(&ScriptLineMessage_ProcAddLabel_TypeInfo, v12, v13);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v14, v15);
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__, v20, v21);
    sub_1BCA7E0(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__, v22, v23);
    sub_1BCA7E0(&ScriptLineMessage___c__DisplayClass55_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_23358/*"servantName"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_15997/*"[-]"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_20256/*"i"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_16199/*"[~1]"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_16134/*"[^"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_22986/*"r"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_21335/*"line"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_20447/*"image"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_16198/*"[~"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v46, v47);
    byte_4B17DE7 = 1;
  }
  text = 0LL;
  v48 = sub_1BCAA2C(ScriptLineMessage___c__DisplayClass55_0_TypeInfo, txt, isFoward, enforceColor);
  System_Object___ctor((Il2CppObject *)v48, 0LL);
  if ( !v48 )
    goto LABEL_89;
  *(_QWORD *)(v48 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 24), (int64_t)this, v51, v52, v53, v54, v55, v56);
  *(_BYTE *)(v48 + 32) = isFoward;
  *(_QWORD *)(v48 + 40) = font;
  sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 40), (int64_t)font, v57, v58, v59, v60, v61, v62);
  v66 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v63, v64, v65);
  System_Text_StringBuilder___ctor(v66, 0LL);
  *(_QWORD *)(v48 + 16) = v66;
  v67 = (System_Text_StringBuilder_o **)(v48 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 16), (int64_t)v66, v68, v69, v70, v71, v72, v73);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
      (int64_t)enforceColor,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v48 + 48) = defaultColorTag;
  sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 48), (int64_t)defaultColorTag, v74, v75, v76, v77, v78, v79);
  v85 = sub_1BCAA2C(ScriptLineMessage_ProcAddLabel_TypeInfo, v82, v83, v84);
  ScriptLineMessage_ProcAddLabel___ctor(
    (ScriptLineMessage_ProcAddLabel_o *)v85,
    (Il2CppObject *)v48,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__,
    v86);
  v153 = (ScriptLineMessage_ProcAddLabel2_o *)sub_1BCAA2C(ScriptLineMessage_ProcAddLabel2_TypeInfo, v87, v88, v89);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v153,
    (Il2CppObject *)v48,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__,
    v90);
  if ( !txt )
    goto LABEL_89;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_87;
  v91 = 0;
  v92 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v91, 0LL) != 91 )
    {
      v111 = *v67;
      Chars = System_String__get_Chars(txt, v91, 0LL);
      if ( !v111 )
        goto LABEL_89;
      System_Text_StringBuilder__Append_61565444(v111, Chars, 0LL);
      v96 = v91;
      goto LABEL_42;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v93);
    v94 = v91 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v91 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v67;
      if ( !*v67 )
        goto LABEL_89;
      Chars = (__int64)System_Text_StringBuilder__Append_61563116(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15978/*"["*/,
                         0LL);
      goto LABEL_43;
    }
    v96 = BraceIndex;
    Chars = System_String__get_Chars(txt, v94, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v85 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 24))(*(_QWORD *)(v85 + 64), *(_QWORD *)(v85 + 40));
      v97 = System_String__Substring_62420224(txt, v91 + 2, v92 + v96 - 2, 0LL);
      v99 = System_Int32__Parse(v97, 0LL);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v98);
      String = ScriptReplaceString__GetString(v99, 0LL);
      v102 = v99 == 1;
      v103 = String;
      if ( v102 && removeUserNameColorCode )
      {
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v101);
        TagSplitString = ScriptMessageLabel__RemoveColorTag(v103, 0LL);
      }
      else
      {
        TagSplitString = System_String__Concat_62401220(String, (System_String_o *)StringLiteral_15997/*"[-]"*/, 0LL);
      }
LABEL_39:
      v116 = *(struct System_String_o **)(v48 + 48);
      v117 = TagSplitString;
      this->fields.defaultColorTag = v116;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
        (int64_t)v116,
        v105,
        v106,
        v107,
        v108,
        v109,
        v110);
      v119 = *(_BYTE *)(v48 + 32);
      v120 = *(UnityEngine_Font_o **)(v48 + 40);
      v121 = this;
      v122 = v117;
LABEL_40:
      ScriptLineMessage__UpdateLabels(v121, v122, v119, enforceColor, v120, 0, v118);
      v129 = this->fields.defaultColorTag;
      *(_QWORD *)(v48 + 48) = v129;
LABEL_41:
      sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 48), (int64_t)v129, v123, v124, v125, v126, v127, v128);
      goto LABEL_42;
    }
    Chars = System_String__get_Chars(txt, v94, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v85 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 24))(*(_QWORD *)(v85 + 64), *(_QWORD *)(v85 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v112);
      if ( !byte_4B17C7E )
      {
        sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v112, v113);
        byte_4B17C7E = 1;
      }
      v114 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v112);
        v114 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v114->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v112);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v91 + 2, playerGenderIndex, 0LL);
      goto LABEL_39;
    }
    Chars = System_String__get_Chars(txt, v94, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v85 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 24))(*(_QWORD *)(v85 + 64), *(_QWORD *)(v85 + 40));
      Chars = (__int64)System_String__Substring_62420224(txt, v91, v92 + v96 + 1, 0LL);
      goto LABEL_60;
    }
    if ( System_String__get_Chars(txt, v94, 0LL) != 61 )
      break;
LABEL_42:
    v94 = v96 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, System_Text_StringBuilder_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AfterParseEachChar.method)(
              this,
              *v67,
              v85,
              this->klass->vtable._6_PreProcSetRubyLabel.methodPtr);
LABEL_43:
    v92 = -v94;
    v91 = v94;
    if ( v94 >= txt->fields._stringLength )
      goto LABEL_87;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v130);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v94, 0LL);
  if ( !Chars )
    goto LABEL_89;
  v131 = (System_String_o *)Chars;
  Chars = System_String__Equals_62409536((System_String_o *)Chars, (System_String_o *)StringLiteral_20447/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v85 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 24))(*(_QWORD *)(v85 + 64), *(_QWORD *)(v85 + 40));
    v132 = v91 + 7;
    v133 = v92 + v96 - 7;
    goto LABEL_58;
  }
  Chars = System_String__Equals_62409536(v131, (System_String_o *)StringLiteral_20256/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v85 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 24))(*(_QWORD *)(v85 + 64), *(_QWORD *)(v85 + 40));
    v132 = v91 + 3;
    v133 = v92 + v96 - 3;
LABEL_58:
    v50 = System_String__Substring_62420224(txt, v132, v133, 0LL);
    v134 = (System_String_o *)StringLiteral_16134/*"[^"*/;
    v135 = (System_String_o *)StringLiteral_16236/*"]"*/;
LABEL_59:
    Chars = (__int64)System_String__Concat_62412480(v134, v50, v135, 0LL);
LABEL_60:
    v136 = v153;
    if ( !v153 )
      goto LABEL_89;
    v137 = Chars;
LABEL_62:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v136->fields.m_target)(
      v136->fields.original_method_info,
      v137,
      *(_QWORD *)&v136->fields.extra_arg);
    goto LABEL_42;
  }
  Chars = System_String__Equals_62409536(v131, (System_String_o *)StringLiteral_22986/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v85 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 24))(*(_QWORD *)(v85 + 64), *(_QWORD *)(v85 + 40));
    ScriptLineMessage__ReturnText(this, v138);
    if ( enforceColor )
    {
      *p_defaultColorTag = enforceColor;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
        (int64_t)enforceColor,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
    }
    v129 = *p_defaultColorTag;
    *(_QWORD *)(v48 + 48) = *p_defaultColorTag;
    goto LABEL_41;
  }
  Chars = System_String__Equals_62409536(v131, (System_String_o *)StringLiteral_23358/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v85 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 24))(*(_QWORD *)(v85 + 64), *(_QWORD *)(v85 + 40));
    v140 = System_String__Substring_62420224(txt, v91 + 12, v92 + v96 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v139);
    v141 = ScriptMessageLabel__AnalysTagParam(v140, 0, 0LL);
    v142 = *(struct System_String_o **)(v48 + 48);
    v143 = v141;
    this->fields.defaultColorTag = v142;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
      (int64_t)v142,
      v144,
      v145,
      v146,
      v147,
      v148,
      v149);
    v150 = ScriptMessageLabel__GetServantChangeName(v143, 0LL);
    v119 = *(_BYTE *)(v48 + 32);
    v120 = *(UnityEngine_Font_o **)(v48 + 40);
    v122 = v150;
    v121 = this;
    goto LABEL_40;
  }
  Chars = System_String__StartsWith(v131, (System_String_o *)StringLiteral_21335/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v85 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 24))(*(_QWORD *)(v85 + 64), *(_QWORD *)(v85 + 40));
    Chars = (__int64)System_String__Substring_62420224(txt, v91 + 5, v92 + v96 - 5, 0LL);
    if ( !Chars )
      goto LABEL_89;
    v50 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v134 = (System_String_o *)StringLiteral_16198/*"[~"*/;
      v135 = (System_String_o *)StringLiteral_16236/*"]"*/;
      goto LABEL_59;
    }
    v136 = v153;
    if ( !v153 )
      goto LABEL_89;
    v137 = StringLiteral_16199/*"[~1]"*/;
    goto LABEL_62;
  }
  if ( v96 < txt->fields._stringLength )
  {
    text = System_String__Substring_62420224(txt, v91, v92 + v96 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v151);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v48 + 48), &text, enforceColor, 0LL);
    Chars = (__int64)*v67;
    if ( !*v67 )
      goto LABEL_89;
    System_Text_StringBuilder__Append_61563116((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_42;
  }
  v152 = *v67;
  Chars = (__int64)System_String__Substring(txt, v91, 0LL);
  if ( !v152 )
    goto LABEL_89;
  Chars = (__int64)System_Text_StringBuilder__Append_61563116(v152, (System_String_o *)Chars, 0LL);
LABEL_87:
  if ( !v85 )
LABEL_89:
    sub_1BCAA3C(Chars, v50);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v85 + 24))(*(_QWORD *)(v85 + 64), *(_QWORD *)(v85 + 40));
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0E1BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E17C;
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0E238;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A0E218;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E1D0;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
    sub_1BCAA3C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 17) = tmpColorTag;
  sub_1BCA784((PartyOrganizationUtility_o *)(tmpTxt + 136), (int64_t)tmpColorTag, v4, v5, v6, v7, v8, v9);
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
    sub_1BCAA3C(this, text);
  tmpColorTag = (struct ScriptLineMessage_o *)v8->fields.tmpColorTag;
  this[2].fields.__4__this = tmpColorTag;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this[2].fields.__4__this,
    (int64_t)tmpColorTag,
    (int64_t)method,
    v3,
    v4,
    (BattleSetupInfo_o *)v5,
    v6,
    v7);
}