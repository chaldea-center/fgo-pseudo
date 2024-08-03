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
  System_Collections_Generic_Dictionary_object__int__o *v14; // x20
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_49FDF9A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo, v7);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v8);
    sub_1B640C8(&StringLiteral_21290/*"medium"*/, v9);
    sub_1B640C8(&StringLiteral_23278/*"small"*/, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    sub_1B640C8(&StringLiteral_20957/*"large"*/, v12);
    sub_1B640C8(&StringLiteral_24681/*"x-large"*/, v13);
    byte_49FDF9A = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v14 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v14,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v14 )
    sub_1B64324(v15);
  System_Collections_Generic_Dictionary_object__int___Add(
    v14,
    (Il2CppObject *)StringLiteral_920/*"-"*/,
    30,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v14,
    (Il2CppObject *)StringLiteral_23278/*"small"*/,
    24,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v14,
    (Il2CppObject *)StringLiteral_21290/*"medium"*/,
    30,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v14,
    (Il2CppObject *)StringLiteral_20957/*"large"*/,
    48,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v14,
    (Il2CppObject *)StringLiteral_24681/*"x-large"*/,
    64,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fontSizes, (int32_t)v14, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v18, v19, v20);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ScriptMessageLabel__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dispLabelList, (int32_t)v23, v24, v25);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x19
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UILabel_o *MainLabel; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  UILabel_o *RubyLabel; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x23
  const MethodInfo *v28; // x1
  __int64 v29; // x23
  int v30; // w8
  int32_t fontSize; // w4
  System_String_o *v32; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v34; // x1
  UISprite_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x23
  int v39; // w8
  __int64 v40; // x24
  System_String_o *v41; // x23
  float v42; // s0
  int v43; // w8
  float v44; // s8
  UISprite_o *ImageSprite; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x0
  int32_t v49; // w22
  int32_t v50; // w0
  UILabel_o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  UnityEngine_Object_o *messageOffset; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x1
  UnityEngine_Transform_o *v58; // x21
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v60; // x21
  float v61; // s0
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8
  int v66; // w8
  __int64 v67; // x23
  UILabel_o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x21
  __int64 v72; // x21
  int v73; // w24
  int32_t v74; // w0
  UnityEngine_Vector2_o v75; // 0:s1.4,4:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FDF93 & 1) == 0 )
  {
    sub_1B640C8(&char___TypeInfo, text);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_21027/*"line"*/, v12);
    byte_49FDF93 = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_64;
  v16 = Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v17 = Label + 112;
  *(_DWORD *)(v17 + 52) = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v17, (int32_t)colorTag, v14, v15);
  if ( !text )
    goto LABEL_64;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_26;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    MainLabel = ScriptLineMessage__FetchMainLabel(this, v19);
    *(_QWORD *)(v16 + 16) = MainLabel;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)MainLabel, v21, v22);
    RubyLabel = ScriptLineMessage__FetchRubyLabel(this, v23);
    *(_QWORD *)(v16 + 24) = RubyLabel;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)RubyLabel, v25, v26);
    v27 = System_String__Substring_61394392(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1B64170(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v28 = (const MethodInfo *)Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v27 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_61397544(v27, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v29 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_PreProcSetRubyLabel.method)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._7_SetText.methodPtr);
        v30 = *(_DWORD *)(v29 + 24);
        if ( v30 )
        {
          fontSize = this->fields.fontSize;
          v32 = *(System_String_o **)(v29 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v30 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              (ScriptMessageLabel_o *)v16,
              (UILabel_o **)(v16 + 16),
              (UILabel_o **)(v16 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v32,
              font,
              0LL);
          else
            ScriptMessageLabel__UpdateRuby(
              (ScriptMessageLabel_o *)v16,
              (UILabel_o **)(v16 + 16),
              (UILabel_o **)(v16 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v32,
              *(System_String_o **)(v29 + 40),
              font,
              this->fields.isTalkName,
              0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_65:
    sub_1B6432C(Label, v28);
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0LL) == 126 )
    {
      ImageSprite = ScriptLineMessage__FetchImageSprite(this, v18);
      *(_QWORD *)(v16 + 32) = ImageSprite;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)ImageSprite, v46, v47);
      v48 = System_String__Substring_61394392(text, 2, text->fields._stringLength - 3, 0LL);
      v49 = this->fields.fontSize;
      v50 = System_Int32__Parse(v48, 0LL);
      ScriptMessageLabel__UpdateLine(
        (ScriptMessageLabel_o *)v16,
        (UISprite_o **)(v16 + 32),
        &this->fields.dispPosition,
        v49,
        v50,
        (System_String_o *)StringLiteral_21027/*"line"*/,
        0LL);
      goto LABEL_27;
    }
LABEL_26:
    v51 = ScriptLineMessage__FetchMainLabel(this, v18);
    *(_QWORD *)(v16 + 16) = v51;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)v51, v52, v53);
    ScriptMessageLabel__UpdateLabel(
      (ScriptMessageLabel_o *)v16,
      (UILabel_o **)(v16 + 16),
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.fontSize,
      0,
      text,
      font,
      0LL);
    goto LABEL_27;
  }
  v35 = ScriptLineMessage__FetchImageSprite(this, v34);
  *(_QWORD *)(v16 + 32) = v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)v35, v36, v37);
  v38 = System_String__Substring_61394392(text, 2, text->fields._stringLength - 3, 0LL);
  Label = sub_1B64170(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_64;
  v28 = (const MethodInfo *)Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_65;
  *(_WORD *)(Label + 32) = 32;
  if ( !v38 )
    goto LABEL_64;
  Label = (__int64)System_String__Split_61397544(v38, (System_Char_array *)Label, 0LL);
  if ( !Label )
    goto LABEL_64;
  v39 = *(_DWORD *)(Label + 24);
  v40 = Label;
  if ( !v39 )
    goto LABEL_65;
  v41 = *(System_String_o **)(Label + 32);
  if ( v39 <= 1 )
  {
    Label = sub_1B64170(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v28 = (const MethodInfo *)Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_65;
    *(_WORD *)(Label + 32) = 58;
    if ( !v41 )
      goto LABEL_64;
    Label = (__int64)System_String__Split_61397544(v41, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_64;
    v66 = *(_DWORD *)(Label + 24);
    v67 = Label;
    if ( v66 <= 1 )
    {
      if ( !v66 )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImage(
        (ScriptMessageLabel_o *)v16,
        (UISprite_o **)(v16 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        0LL);
    }
    else
    {
      v68 = ScriptLineMessage__FetchRubyLabel(this, v28);
      *(_QWORD *)(v16 + 24) = v68;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v68, v69, v70);
      if ( *(_DWORD *)(v67 + 24) < 2u )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImageRuby(
        (ScriptMessageLabel_o *)v16,
        (UISprite_o **)(v16 + 32),
        (UILabel_o **)(v16 + 24),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(v67 + 32),
        *(System_String_o **)(v67 + 40),
        font,
        0,
        0LL);
    }
  }
  else
  {
    v42 = System_Single__Parse(*(System_String_o **)(Label + 40), 0LL);
    v43 = *(_DWORD *)(v40 + 24);
    v44 = v42;
    if ( v43 == 2 )
    {
      ScriptMessageLabel__UpdateImage_41361868(
        (ScriptMessageLabel_o *)v16,
        (UISprite_o **)(v16 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v42,
        v41,
        0,
        0LL);
    }
    else if ( v43 <= 3 )
    {
      if ( (unsigned int)v43 <= 2 )
        goto LABEL_65;
      v71 = *(System_String_o **)(v40 + 48);
      Label = sub_1B64170(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_64;
      v28 = (const MethodInfo *)Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      *(_WORD *)(Label + 32) = 44;
      if ( !v71 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_61397544(v71, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v72 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v72 + 24) <= 1u )
        goto LABEL_65;
      v73 = Label;
      v74 = System_Int32__Parse(*(System_String_o **)(v72 + 40), 0LL);
      v75.fields.x = (float)v73;
      v75.fields.y = (float)v74;
      ScriptMessageLabel__UpdateImage_41362020(
        (ScriptMessageLabel_o *)v16,
        (UISprite_o **)(v16 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v44,
        v41,
        v75,
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
    v76.fields.z = 0.0;
    v76.fields.x = (float)(this->fields.startPosition.fields.x - this->fields.dispPosition.fields.x) * 0.5;
    v76.fields.y = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Label, v76, 0LL);
    Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v58 = (UnityEngine_Transform_o *)Label;
    if ( !byte_49F7116 )
    {
      Label = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v57);
      byte_49F7116 = 1;
    }
    if ( !v58 )
      goto LABEL_64;
    UnityEngine_Transform__set_localScale(v58, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
          v60 = (UnityEngine_Transform_o *)Label;
          LODWORD(v61) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0LL);
          if ( v60 )
          {
            v77.fields.x = (float)condensedSize / fabsf(v61);
            v77.fields.y = 1.0;
            v77.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v60, v77, 0LL);
            goto LABEL_40;
          }
        }
LABEL_64:
        sub_1B64324(Label);
      }
    }
  }
LABEL_40:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_64;
  v62 = *(_QWORD *)(Label + 16);
  v63 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
  ++*(_DWORD *)(Label + 28);
  if ( !v62 )
    goto LABEL_64;
  v64 = *(int *)(Label + 24);
  if ( (unsigned int)v64 >= *(_DWORD *)(v62 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Label,
      (Il2CppObject *)v16,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = v62 + 8 * v64;
    *(_DWORD *)(Label + 24) = v64 + 1;
    *(_QWORD *)(v65 + 32) = v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 32), v16, v55, v56);
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

  this->fields.mainPrefab = prefab;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainPrefab, (int32_t)prefab, (int32_t)method, v3);
}


void __fastcall ScriptLineMessage__ChangeMessageRoot(
        ScriptLineMessage_o *this,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.messageRoot = root;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.messageRoot, (int32_t)root, (int32_t)method, v3);
}


void __fastcall ScriptLineMessage__ChangeRubyPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.rubyPrefab = prefab;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyPrefab, (int32_t)prefab, (int32_t)method, v3);
}


void __fastcall ScriptLineMessage__ClearLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FDF8D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__, v6);
    byte_49FDF8D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ScriptLineMessage__Init(this, method);
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    dispLabelList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v12.fields._current, v8);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v9 = this->fields.dispLabelList;
  if ( !v9 )
LABEL_11:
    sub_1B64324(dispLabelList);
  size = v9->fields._size;
  v11 = v9->fields._version + 1;
  v9->fields._size = 0;
  v9->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0LL);
}


void __fastcall ScriptLineMessage__ClearText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o startPosition; // x8
  float v4; // s0
  UnityEngine_Object_o *messageOffset; // x20
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *v8; // x20

  if ( (byte_49FDF98 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FDF98 = 1;
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
    if ( !byte_49F7111 )
    {
      v6 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v7);
      byte_49F7111 = 1;
    }
    if ( !v8 )
      sub_1B64324(v6);
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
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *v13; // x20

  if ( (byte_49FDF8B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v8);
    byte_49FDF8B = 1;
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
                                                              (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
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
                                                              (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( labelStock )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)labelStock,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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
                                                              (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_28;
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v12, 0LL);
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_28:
      sub_1B64324(labelStock);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(v13, 0LL);
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
    sub_1B64324(messageRoot);
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
  UnityEngine_Component_o *v10; // x19
  Il2CppObject *imagePrefab; // x19
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x22
  __int64 v14; // x1
  int v15; // w8
  __int64 v16; // x21
  unsigned int v17; // w22
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x20
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x20

  if ( (byte_49FDF90 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UISprite__Pop__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UISprite__get_Count__, v7);
    byte_49FDF90 = 1;
  }
  imageStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !imageStock || imageStock->fields._size < 1 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  imagePrefab,
                                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v12 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_object )
      {
        v10 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v10, 0LL);
          if ( this->fields.messageRoot )
          {
            v13 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v13 )
              {
                UnityEngine_GameObject__set_layer(v13, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                              v12,
                                              (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
                      sub_1B6432C(Component_object, v14);
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
    sub_1B64324(Component_object);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                imageStock,
                                (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v10 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v10 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v10, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F7111 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v10, 0LL);
  v21 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v20);
    byte_49F7116 = 1;
  }
  if ( !v21 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UISprite_o *)v10;
}


ScriptMessageLabel_o *__fastcall ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v8; // x19

  if ( (byte_49FDF91 & 1) == 0 )
  {
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__, v5);
    byte_49FDF91 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v8 = (ScriptMessageLabel_o *)sub_1B64314(ScriptMessageLabel_TypeInfo, method, v2);
  ScriptMessageLabel___ctor(v8, 0LL);
  return v8;
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
  UnityEngine_Component_o *v10; // x19
  Il2CppObject *mainPrefab; // x19
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x22
  __int64 v14; // x1
  int v15; // w8
  __int64 v16; // x21
  unsigned int v17; // w22
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x20
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x20

  if ( (byte_49FDF8E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_49FDF8E = 1;
  }
  mainStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
  if ( !mainStock || mainStock->fields._size < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  mainPrefab,
                                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v12 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v10 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v10, 0LL);
          if ( this->fields.messageRoot )
          {
            v13 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v13 )
              {
                UnityEngine_GameObject__set_layer(v13, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                              v12,
                                              (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
                      sub_1B6432C(Component_object, v14);
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
    sub_1B64324(Component_object);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                mainStock,
                                (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v10 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v10 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v10, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F7111 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v10, 0LL);
  v21 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v20);
    byte_49F7116 = 1;
  }
  if ( !v21 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UILabel_o *)v10;
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
  UnityEngine_Component_o *v10; // x20
  Il2CppObject *rubyPrefab; // x20
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x22
  __int64 v14; // x1
  int v15; // w8
  __int64 v16; // x21
  unsigned int v17; // w22
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x21
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x21

  if ( (byte_49FDF8F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UILabel__Pop__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UILabel__get_Count__, v7);
    byte_49FDF8F = 1;
  }
  rubyStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
  if ( !rubyStock || rubyStock->fields._size < 1 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  rubyPrefab,
                                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v12 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v10 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v10, 0LL);
          if ( this->fields.messageRoot )
          {
            v13 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v13 )
              {
                UnityEngine_GameObject__set_layer(v13, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                              v12,
                                              (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
                      sub_1B6432C(Component_object, v14);
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
    sub_1B64324(Component_object);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                rubyStock,
                                (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v10 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v10 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v10, 0LL);
  v19 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7111 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F7111 = 1;
  }
  if ( !v19 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v10, 0LL);
  v21 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_49F7116 )
  {
    Component_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v20);
    byte_49F7116 = 1;
  }
  if ( !v21 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  System_Collections_Generic_List_object__o *dispLabelList; // x0

  if ( (byte_49FDF8C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__, method);
    byte_49FDF8C = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_1B64324(0LL);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_object___ToArray(
                                       dispLabelList,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
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

  if ( (byte_49FDF99 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_1B640C8(&StringLiteral_15976/*"\\[#[^:]+:[^:]+\\]"*/, v3);
    byte_49FDF99 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_15976/*"\\[#[^:]+:[^:]+\\]"*/, 0LL);
}


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
  System_Collections_Generic_Stack_T__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Stack_T__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Stack_T__o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_Stack_T__o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *mainPrefab; // x20
  __int64 fontSizes; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v38; // x0
  int defaultFontSize; // w2
  UILabel_o *v40; // x20
  float v41; // s0
  int32_t v42; // w1
  int32_t rubyFontSize; // w8
  float v44; // s1
  float v45; // s0
  int32_t v46; // w1
  float v47; // s0
  float v48; // s1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v50; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v52; // s0
  const MethodInfo *v53; // x1
  UnityEngine_Transform_o *v54; // x20

  if ( (byte_49FDF8A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UILabel___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UISprite___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_Stack_UILabel__TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_Stack_UISprite__TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo, v13);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v14);
    sub_1B640C8(&StringLiteral_25150/*"■"*/, v15);
    byte_49FDF8A = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v17 = (System_Collections_Generic_Stack_T__o *)sub_1B64314(
                                                       System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                       method,
                                                       v2);
      System_Collections_Generic_Stack_object____ctor(
        v17,
        (const MethodInfo_3704C34 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v17;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainStock, (int32_t)v17, v18, v19);
      v22 = (System_Collections_Generic_Stack_T__o *)sub_1B64314(
                                                       System_Collections_Generic_Stack_UILabel__TypeInfo,
                                                       v20,
                                                       v21);
      System_Collections_Generic_Stack_object____ctor(
        v22,
        (const MethodInfo_3704C34 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v22;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rubyStock, (int32_t)v22, v23, v24);
      v27 = (System_Collections_Generic_Stack_T__o *)sub_1B64314(
                                                       System_Collections_Generic_Stack_UISprite__TypeInfo,
                                                       v25,
                                                       v26);
      System_Collections_Generic_Stack_object____ctor(
        v27,
        (const MethodInfo_3704C34 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v27;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.imageStock, (int32_t)v27, v28, v29);
      v32 = (System_Collections_Generic_Stack_T__o *)sub_1B64314(
                                                       System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo,
                                                       v30,
                                                       v31);
      System_Collections_Generic_Stack_object____ctor(
        v32,
        (const MethodInfo_3704C34 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v32;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.labelStock, (int32_t)v32, v33, v34);
    }
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)fontSizes,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.rubyPrefab,
                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v38 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)fontSizes,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v40 = (UILabel_o *)v38;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (__int64)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
        (Il2CppObject *)StringLiteral_920/*"-"*/,
        defaultFontSize,
        (const MethodInfo_317069C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (__int64)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
                         (Il2CppObject *)StringLiteral_920/*"-"*/,
                         (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v41 = this->fields.fontScale * (float)(int)fontSizes,
           v41 != INFINITY)
        ? (v42 = (int)v41)
        : (v42 = 0x80000000),
          this->fields.defaultFontSize = v42,
          !Component_object) )
    {
LABEL_37:
      sub_1B64324(fontSizes);
    }
    UILabel__set_fontSize((UILabel_o *)Component_object, v42, 0LL);
    UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_25150/*"■"*/, 0LL);
    fontSizes = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[22].method)(
                  Component_object,
                  Component_object->klass->vtable[23].methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v44;
    if ( rubyFontSize <= 0 )
    {
      if ( !v40 )
        goto LABEL_37;
      v47 = this->fields.fontScale * (float)v40->fields.mFontSize;
      if ( v47 == INFINITY )
        v46 = 0x80000000;
      else
        v46 = (int)v47;
      this->fields.rubyFontSize = v46;
    }
    else
    {
      v45 = this->fields.fontScale * (float)rubyFontSize;
      if ( v45 == INFINITY )
        v46 = 0x80000000;
      else
        v46 = (int)v45;
      this->fields.rubyFontSize = v46;
      if ( !v40 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v40, v46, 0LL);
    UILabel__set_text(v40, (System_String_o *)StringLiteral_25150/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v40->klass->vtable._22_get_localSize.method)(
      v40,
      v40->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v48;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_object,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
    UnityEngine_Object__Destroy_69127736(v50, 0LL);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v52 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v52;
    fontSizes = UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL);
    if ( (fontSizes & 1) != 0 )
    {
      v54 = this->fields.messageOffset;
      if ( !byte_49F7111 )
      {
        fontSizes = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v53);
        byte_49F7111 = 1;
      }
      if ( !v54 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v54, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, v53);
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
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *gameObject; // x22
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  ScriptLineMessage_o *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Object_o *v20; // x22
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  ScriptLineMessage_o *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Object_o *v26; // x22
  System_Collections_Generic_Stack_T__o *labelStock; // x0

  v4 = this;
  if ( (byte_49FDF92 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UILabel__Push__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_UISprite__Push__, v7);
    this = (ScriptLineMessage_o *)sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FDF92 = 1;
  }
  if ( !label )
    goto LABEL_40;
  p_fields = (ScriptLineMessage_o **)&label->fields;
  main = (UnityEngine_Object_o *)label->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0LL, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (ScriptLineMessage_o *)v4->fields.mainStock;
    v11 = *p_fields;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)v11,
        (const MethodInfo_370525C *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !v11 )
        goto LABEL_40;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)*p_fields,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    }
    *p_fields = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&label->fields, 0, v12, v13);
  }
  p_ruby = &label->fields.ruby;
  ruby = (UnityEngine_Object_o *)label->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0LL, 0LL) )
  {
    this = (ScriptLineMessage_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (ScriptLineMessage_o *)v4->fields.rubyStock;
    v17 = (ScriptLineMessage_o *)*p_ruby;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)v17,
        (const MethodInfo_370525C *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !v17 )
        goto LABEL_40;
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v20, 0LL);
    }
    *p_ruby = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&label->fields.ruby, 0, v18, v19);
  }
  p_image = &label->fields.image;
  image = (UnityEngine_Object_o *)label->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v23 = (ScriptLineMessage_o *)*p_image;
      if ( this )
      {
        System_Collections_Generic_Stack_object___Push(
          (System_Collections_Generic_Stack_T__o *)this,
          (Il2CppObject *)v23,
          (const MethodInfo_370525C *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_36:
        *p_image = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&label->fields.image, 0, v24, v25);
        goto LABEL_37;
      }
      if ( v23 )
      {
        v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(v26, 0LL);
        goto LABEL_36;
      }
    }
LABEL_40:
    sub_1B64324(this);
  }
LABEL_37:
  ScriptMessageLabel__Release(label, 0LL);
  labelStock = (System_Collections_Generic_Stack_T__o *)v4->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_object___Push(
      labelStock,
      (Il2CppObject *)label,
      (const MethodInfo_370525C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
}


void __fastcall ScriptLineMessage__ReturnText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  float x; // s0
  float defaultTextOnlyLineHeight; // s4
  float v7; // s1
  float v8; // s2
  float v9; // s0
  int32_t v10; // w1

  if ( (byte_49FDF96 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FDF96 = 1;
  }
  x = this->fields.dispPosition.fields.x;
  if ( this->fields.maxDispPosition.fields.x < x )
    this->fields.maxDispPosition.fields.x = x;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  v7 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v8 = this->fields.startPosition.fields.x;
  v9 = this->fields.dispPosition.fields.y - (float)(v7 + this->fields.betweenLineHeight);
  this->fields.fontSize = this->fields.defaultFontSize;
  this->fields.dispPosition.fields.x = v8;
  this->fields.dispPosition.fields.y = v9;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v7;
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v10, v2, v3);
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
      sub_1B64324(0LL);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void __fastcall ScriptLineMessage__SetDefaultState(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  float rubyLineHeight; // s2
  float defaultTextOnlyLineHeight; // s1
  int32_t defaultFontSize; // w8
  int32_t v8; // w1

  if ( (byte_49FDF95 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FDF95 = 1;
  }
  rubyLineHeight = this->fields.rubyLineHeight;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  defaultFontSize = this->fields.defaultFontSize;
  this->fields.betweenLineHeight = this->fields.defaultBetweenLineHeight;
  this->fields.fontSize = defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v8, v2, v3);
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

  if ( (byte_49FDF97 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, sizeName);
    byte_49FDF97 = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_1B64324(0LL);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  __int64 v37; // x2
  System_Text_StringBuilder_o *v38; // x20
  System_Text_StringBuilder_o **v39; // x24
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x26
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x25
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  __int64 v51; // x2
  const MethodInfo *v52; // x3
  int32_t v53; // w29
  int v54; // w21
  int32_t v55; // w20
  int32_t BraceIndex; // w0
  int32_t v57; // w28
  System_String_o *v58; // x0
  int32_t v59; // w20
  System_String_o *String; // x0
  bool v61; // zf
  System_String_o *v62; // x20
  System_String_o *TagSplitString; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_Text_StringBuilder_o *v66; // x20
  __int64 v67; // x1
  ScriptReplaceString_c *v68; // x0
  int32_t playerGenderIndex; // w20
  struct System_String_o *v70; // x1
  System_String_o *v71; // x20
  const MethodInfo *v72; // x6
  char v73; // w2
  UnityEngine_Font_o *v74; // x4
  ScriptLineMessage_o *v75; // x0
  System_String_o *v76; // x1
  int32_t v77; // w2
  int32_t v78; // w3
  struct System_String_o *v79; // x1
  System_String_o *v80; // x20
  int32_t v81; // w1
  int32_t v82; // w2
  System_String_o *v83; // x1
  System_String_o *v84; // x0
  System_String_o *v85; // x2
  ScriptLineMessage_ProcAddLabel2_o *v86; // x9
  __int64 v87; // x1
  const MethodInfo *v88; // x1
  System_String_o *v89; // x20
  System_String_array *v90; // x0
  struct System_String_o *v91; // x1
  System_String_array *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x0
  System_Text_StringBuilder_o *v96; // x20
  ScriptLineMessage_ProcAddLabel2_o *v97; // [xsp+0h] [xbp-80h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49FDF94 & 1) == 0 )
  {
    sub_1B640C8(&ScriptLineMessage_ProcAddLabel2_TypeInfo, txt);
    sub_1B640C8(&ScriptLineMessage_ProcAddLabel_TypeInfo, v12);
    sub_1B640C8(&ScriptMessageLabel_TypeInfo, v13);
    sub_1B640C8(&ScriptReplaceString_TypeInfo, v14);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v15);
    sub_1B640C8(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__, v16);
    sub_1B640C8(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__, v17);
    sub_1B640C8(&ScriptLineMessage___c__DisplayClass55_0_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_23018/*"servantName"*/, v19);
    sub_1B640C8(&StringLiteral_15763/*"[-]"*/, v20);
    sub_1B640C8(&StringLiteral_19969/*"i"*/, v21);
    sub_1B640C8(&StringLiteral_15964/*"[~1]"*/, v22);
    sub_1B640C8(&StringLiteral_15899/*"[^"*/, v23);
    sub_1B640C8(&StringLiteral_22649/*"r"*/, v24);
    sub_1B640C8(&StringLiteral_21027/*"line"*/, v25);
    sub_1B640C8(&StringLiteral_20153/*"image"*/, v26);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v27);
    sub_1B640C8(&StringLiteral_15963/*"[~"*/, v28);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v29);
    byte_49FDF94 = 1;
  }
  text = 0LL;
  v30 = sub_1B64314(ScriptLineMessage___c__DisplayClass55_0_TypeInfo, txt, isFoward);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_89;
  *(_QWORD *)(v30 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)this, v32, v33);
  *(_BYTE *)(v30 + 32) = isFoward;
  *(_QWORD *)(v30 + 40) = font;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 40), (int32_t)font, v34, v35);
  v38 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v36, v37);
  System_Text_StringBuilder___ctor(v38, 0LL);
  *(_QWORD *)(v30 + 16) = v38;
  v39 = (System_Text_StringBuilder_o **)(v30 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 16), (int32_t)v38, v40, v41);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v42, v43);
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v30 + 48) = defaultColorTag;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 48), (int32_t)defaultColorTag, v42, v43);
  v48 = sub_1B64314(ScriptLineMessage_ProcAddLabel_TypeInfo, v46, v47);
  ScriptLineMessage_ProcAddLabel___ctor(
    (ScriptLineMessage_ProcAddLabel_o *)v48,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__,
    v49);
  v97 = (ScriptLineMessage_ProcAddLabel2_o *)sub_1B64314(ScriptLineMessage_ProcAddLabel2_TypeInfo, v50, v51);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v97,
    (Il2CppObject *)v30,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__,
    v52);
  if ( !txt )
    goto LABEL_89;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_87;
  v53 = 0;
  v54 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v53, 0LL) != 91 )
    {
      v66 = *v39;
      Chars = System_String__get_Chars(txt, v53, 0LL);
      if ( !v66 )
        goto LABEL_89;
      System_Text_StringBuilder__Append_60538876(v66, Chars, 0LL);
      v57 = v53;
      goto LABEL_42;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v55 = v53 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v53 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v39;
      if ( !*v39 )
        goto LABEL_89;
      Chars = (__int64)System_Text_StringBuilder__Append_60536548(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15744/*"["*/,
                         0LL);
      goto LABEL_43;
    }
    v57 = BraceIndex;
    Chars = System_String__get_Chars(txt, v55, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v48 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
      v58 = System_String__Substring_61394392(txt, v53 + 2, v54 + v57 - 2, 0LL);
      v59 = System_Int32__Parse(v58, 0LL);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v59, 0LL);
      v61 = v59 == 1;
      v62 = String;
      if ( v61 && removeUserNameColorCode )
      {
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        TagSplitString = ScriptMessageLabel__RemoveColorTag(v62, 0LL);
      }
      else
      {
        TagSplitString = System_String__Concat_61375396(String, (System_String_o *)StringLiteral_15763/*"[-]"*/, 0LL);
      }
LABEL_39:
      v70 = *(struct System_String_o **)(v30 + 48);
      v71 = TagSplitString;
      this->fields.defaultColorTag = v70;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)v70, v64, v65);
      v73 = *(_BYTE *)(v30 + 32);
      v74 = *(UnityEngine_Font_o **)(v30 + 40);
      v75 = this;
      v76 = v71;
LABEL_40:
      ScriptLineMessage__UpdateLabels(v75, v76, v73, enforceColor, v74, 0, v72);
      v79 = this->fields.defaultColorTag;
      *(_QWORD *)(v30 + 48) = v79;
LABEL_41:
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 48), (int32_t)v79, v77, v78);
      goto LABEL_42;
    }
    Chars = System_String__get_Chars(txt, v55, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v48 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_49FDE06 )
      {
        sub_1B640C8(&ScriptReplaceString_TypeInfo, v67);
        byte_49FDE06 = 1;
      }
      v68 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v68 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v68->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v53 + 2, playerGenderIndex, 0LL);
      goto LABEL_39;
    }
    Chars = System_String__get_Chars(txt, v55, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v48 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
      Chars = (__int64)System_String__Substring_61394392(txt, v53, v54 + v57 + 1, 0LL);
      goto LABEL_60;
    }
    if ( System_String__get_Chars(txt, v55, 0LL) != 61 )
      break;
LABEL_42:
    v55 = v57 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, System_Text_StringBuilder_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AfterParseEachChar.method)(
              this,
              *v39,
              v48,
              this->klass->vtable._6_PreProcSetRubyLabel.methodPtr);
LABEL_43:
    v54 = -v55;
    v53 = v55;
    if ( v55 >= txt->fields._stringLength )
      goto LABEL_87;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v55, 0LL);
  if ( !Chars )
    goto LABEL_89;
  v80 = (System_String_o *)Chars;
  Chars = System_String__Equals_61383712((System_String_o *)Chars, (System_String_o *)StringLiteral_20153/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
    v81 = v53 + 7;
    v82 = v54 + v57 - 7;
    goto LABEL_58;
  }
  Chars = System_String__Equals_61383712(v80, (System_String_o *)StringLiteral_19969/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
    v81 = v53 + 3;
    v82 = v54 + v57 - 3;
LABEL_58:
    v83 = System_String__Substring_61394392(txt, v81, v82, 0LL);
    v84 = (System_String_o *)StringLiteral_15899/*"[^"*/;
    v85 = (System_String_o *)StringLiteral_16000/*"]"*/;
LABEL_59:
    Chars = (__int64)System_String__Concat_61386656(v84, v83, v85, 0LL);
LABEL_60:
    v86 = v97;
    if ( !v97 )
      goto LABEL_89;
    v87 = Chars;
LABEL_62:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v86->fields.m_target)(
      v86->fields.original_method_info,
      v87,
      *(_QWORD *)&v86->fields.extra_arg);
    goto LABEL_42;
  }
  Chars = System_String__Equals_61383712(v80, (System_String_o *)StringLiteral_22649/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
    ScriptLineMessage__ReturnText(this, v88);
    if ( enforceColor )
    {
      *p_defaultColorTag = enforceColor;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v77, v78);
    }
    v79 = *p_defaultColorTag;
    *(_QWORD *)(v30 + 48) = *p_defaultColorTag;
    goto LABEL_41;
  }
  Chars = System_String__Equals_61383712(v80, (System_String_o *)StringLiteral_23018/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
    v89 = System_String__Substring_61394392(txt, v53 + 12, v54 + v57 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v90 = ScriptMessageLabel__AnalysTagParam(v89, 0, 0LL);
    v91 = *(struct System_String_o **)(v30 + 48);
    v92 = v90;
    this->fields.defaultColorTag = v91;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)v91, v93, v94);
    v95 = ScriptMessageLabel__GetServantChangeName(v92, 0LL);
    v73 = *(_BYTE *)(v30 + 32);
    v74 = *(UnityEngine_Font_o **)(v30 + 40);
    v76 = v95;
    v75 = this;
    goto LABEL_40;
  }
  Chars = System_String__StartsWith(v80, (System_String_o *)StringLiteral_21027/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
    Chars = (__int64)System_String__Substring_61394392(txt, v53 + 5, v54 + v57 - 5, 0LL);
    if ( !Chars )
      goto LABEL_89;
    v83 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v84 = (System_String_o *)StringLiteral_15963/*"[~"*/;
      v85 = (System_String_o *)StringLiteral_16000/*"]"*/;
      goto LABEL_59;
    }
    v86 = v97;
    if ( !v97 )
      goto LABEL_89;
    v87 = StringLiteral_15964/*"[~1]"*/;
    goto LABEL_62;
  }
  if ( v57 < txt->fields._stringLength )
  {
    text = System_String__Substring_61394392(txt, v53, v54 + v57 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v30 + 48), &text, enforceColor, 0LL);
    Chars = (__int64)*v39;
    if ( !*v39 )
      goto LABEL_89;
    System_Text_StringBuilder__Append_60536548((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_42;
  }
  v96 = *v39;
  Chars = (__int64)System_String__Substring(txt, v53, 0LL);
  if ( !v96 )
    goto LABEL_89;
  Chars = (__int64)System_Text_StringBuilder__Append_60536548(v96, (System_String_o *)Chars, 0LL);
LABEL_87:
  if ( !v48 )
LABEL_89:
    sub_1B64324(Chars);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AD460;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AD420;
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AD4DC;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19AD4BC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AD474;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  int32_t v4; // w2
  int32_t v5; // w3
  ScriptLineMessage_o *_4__this; // x20
  const MethodInfo *v7; // x5
  struct ScriptLineMessage_o *v8; // x8
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
        (v8 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptLineMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v8->fields.defaultColorTag,
          0,
          this->fields.font,
          v7),
        (tmpTxt = (char *)this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_1B64324(tmpTxt);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 17) = tmpColorTag;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(tmpTxt + 136), (int32_t)tmpColorTag, v4, v5);
}


void __fastcall ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__1(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v4; // x5
  ScriptLineMessage___c__DisplayClass55_0_o *v5; // x19
  struct ScriptLineMessage_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v5 = this;
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
      v5->fields.font,
      v4);
  }
  this = (ScriptLineMessage___c__DisplayClass55_0_o *)v5->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_1B64324(this);
  tmpColorTag = (struct ScriptLineMessage_o *)v5->fields.tmpColorTag;
  this[2].fields.__4__this = tmpColorTag;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this[2].fields.__4__this, (int32_t)tmpColorTag, (int32_t)method, v3);
}