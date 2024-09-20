void __fastcall ScriptLineMessage___ctor(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5CD26 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_21372/*"medium"*/);
    sub_1B885B0(&StringLiteral_23376/*"small"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_21039/*"large"*/);
    sub_1B885B0(&StringLiteral_24780/*"x-large"*/);
    byte_4A5CD26 = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_919/*"-"*/,
    30,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_23376/*"small"*/,
    24,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_21372/*"medium"*/,
    30,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_21039/*"large"*/,
    48,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_24780/*"x-large"*/,
    64,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontSizes, (int32_t)v3, v6, v7);
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispLabelList, (int32_t)v11, v12, v13);
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
  __int64 Label; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x19
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UILabel_o *MainLabel; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  UILabel_o *RubyLabel; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x23
  __int64 v26; // x23
  int v27; // w8
  int32_t fontSize; // w4
  System_String_o *v29; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v31; // x1
  UISprite_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x23
  int v36; // w8
  __int64 v37; // x24
  System_String_o *v38; // x23
  const MethodInfo *v39; // x6
  float v40; // s0
  int v41; // w8
  float v42; // s8
  UISprite_o *ImageSprite; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x0
  int32_t v47; // w22
  int32_t v48; // w0
  const MethodInfo *v49; // x6
  UILabel_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  UnityEngine_Object_o *messageOffset; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  UnityEngine_Transform_o *v56; // x21
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v58; // x21
  float v59; // s0
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  const MethodInfo *v64; // x6
  int v65; // w8
  __int64 v66; // x23
  UILabel_o *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x21
  __int64 v71; // x21
  int v72; // w24
  int32_t v73; // w0
  const MethodInfo *v74; // x6
  System_String_o *rubyStr; // [xsp+0h] [xbp-70h]
  const MethodInfo *v76; // [xsp+8h] [xbp-68h]
  const MethodInfo *v77; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector2_o v78; // 0:s1.4,4:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5CD1F & 1) == 0 )
  {
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_21109/*"line"*/);
    byte_4A5CD1F = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_64;
  v14 = Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v15 = Label + 112;
  *(_DWORD *)(v15 + 52) = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v15, (int32_t)colorTag, v12, v13);
  if ( !text )
    goto LABEL_64;
  if ( System_String__get_Chars(text, 0, 0LL) != 91 )
    goto LABEL_26;
  if ( System_String__get_Chars(text, 1, 0LL) == 35 )
  {
    MainLabel = ScriptLineMessage__FetchMainLabel(this, v17);
    *(_QWORD *)(v14 + 16) = MainLabel;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)MainLabel, v19, v20);
    RubyLabel = ScriptLineMessage__FetchRubyLabel(this, v21);
    *(_QWORD *)(v14 + 24) = RubyLabel;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)RubyLabel, v23, v24);
    v25 = System_String__Substring_61726036(text, 2, text->fields._stringLength - 3, 0LL);
    Label = sub_1B88658(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v11 = (const MethodInfo *)Label;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v25 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_61729188(v25, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v26 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_PreProcSetRubyLabel.method)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._7_SetText.methodPtr);
        v27 = *(_DWORD *)(v26 + 24);
        if ( v27 )
        {
          fontSize = this->fields.fontSize;
          v29 = *(System_String_o **)(v26 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v27 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              (ScriptMessageLabel_o *)v14,
              (UILabel_o **)(v14 + 16),
              (UILabel_o **)(v14 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v29,
              font,
              v76);
          else
            ScriptMessageLabel__UpdateRuby(
              (ScriptMessageLabel_o *)v14,
              (UILabel_o **)(v14 + 16),
              (UILabel_o **)(v14 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v29,
              *(System_String_o **)(v26 + 40),
              font,
              this->fields.isTalkName,
              v77);
          goto LABEL_27;
        }
      }
    }
LABEL_65:
    sub_1B88814(Label, v11);
  }
  if ( System_String__get_Chars(text, 1, 0LL) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0LL) == 126 )
    {
      ImageSprite = ScriptLineMessage__FetchImageSprite(this, v16);
      *(_QWORD *)(v14 + 32) = ImageSprite;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)ImageSprite, v44, v45);
      v46 = System_String__Substring_61726036(text, 2, text->fields._stringLength - 3, 0LL);
      v47 = this->fields.fontSize;
      v48 = System_Int32__Parse(v46, 0LL);
      ScriptMessageLabel__UpdateLine(
        (ScriptMessageLabel_o *)v14,
        (UISprite_o **)(v14 + 32),
        &this->fields.dispPosition,
        v47,
        v48,
        (System_String_o *)StringLiteral_21109/*"line"*/,
        v49);
      goto LABEL_27;
    }
LABEL_26:
    v50 = ScriptLineMessage__FetchMainLabel(this, v16);
    *(_QWORD *)(v14 + 16) = v50;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v50, v51, v52);
    ScriptMessageLabel__UpdateLabel(
      (ScriptMessageLabel_o *)v14,
      (UILabel_o **)(v14 + 16),
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.fontSize,
      0,
      text,
      font,
      (const MethodInfo *)rubyStr);
    goto LABEL_27;
  }
  v32 = ScriptLineMessage__FetchImageSprite(this, v31);
  *(_QWORD *)(v14 + 32) = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)v32, v33, v34);
  v35 = System_String__Substring_61726036(text, 2, text->fields._stringLength - 3, 0LL);
  Label = sub_1B88658(char___TypeInfo, 1LL);
  if ( !Label )
    goto LABEL_64;
  v11 = (const MethodInfo *)Label;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_65;
  *(_WORD *)(Label + 32) = 32;
  if ( !v35 )
    goto LABEL_64;
  Label = (__int64)System_String__Split_61729188(v35, (System_Char_array *)Label, 0LL);
  if ( !Label )
    goto LABEL_64;
  v36 = *(_DWORD *)(Label + 24);
  v37 = Label;
  if ( !v36 )
    goto LABEL_65;
  v38 = *(System_String_o **)(Label + 32);
  if ( v36 <= 1 )
  {
    Label = sub_1B88658(char___TypeInfo, 1LL);
    if ( !Label )
      goto LABEL_64;
    v11 = (const MethodInfo *)Label;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_65;
    *(_WORD *)(Label + 32) = 58;
    if ( !v38 )
      goto LABEL_64;
    Label = (__int64)System_String__Split_61729188(v38, (System_Char_array *)Label, 0LL);
    if ( !Label )
      goto LABEL_64;
    v65 = *(_DWORD *)(Label + 24);
    v66 = Label;
    if ( v65 <= 1 )
    {
      if ( !v65 )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImage(
        (ScriptMessageLabel_o *)v14,
        (UISprite_o **)(v14 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        v64);
    }
    else
    {
      v67 = ScriptLineMessage__FetchRubyLabel(this, v11);
      *(_QWORD *)(v14 + 24) = v67;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)v67, v68, v69);
      if ( *(_DWORD *)(v66 + 24) < 2u )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImageRuby(
        (ScriptMessageLabel_o *)v14,
        (UISprite_o **)(v14 + 32),
        (UILabel_o **)(v14 + 24),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(v66 + 32),
        *(System_String_o **)(v66 + 40),
        font,
        0,
        v76);
    }
  }
  else
  {
    v40 = System_Single__Parse(*(System_String_o **)(Label + 40), 0LL);
    v41 = *(_DWORD *)(v37 + 24);
    v42 = v40;
    if ( v41 == 2 )
    {
      ScriptMessageLabel__UpdateImage_41641416(
        (ScriptMessageLabel_o *)v14,
        (UISprite_o **)(v14 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v40,
        v38,
        0,
        v39);
    }
    else if ( v41 <= 3 )
    {
      if ( (unsigned int)v41 <= 2 )
        goto LABEL_65;
      v70 = *(System_String_o **)(v37 + 48);
      Label = sub_1B88658(char___TypeInfo, 1LL);
      if ( !Label )
        goto LABEL_64;
      v11 = (const MethodInfo *)Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      *(_WORD *)(Label + 32) = 44;
      if ( !v70 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_61729188(v70, (System_Char_array *)Label, 0LL);
      if ( !Label )
        goto LABEL_64;
      v71 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0LL);
      if ( *(_DWORD *)(v71 + 24) <= 1u )
        goto LABEL_65;
      v72 = Label;
      v73 = System_Int32__Parse(*(System_String_o **)(v71 + 40), 0LL);
      v78.fields.x = (float)v72;
      v78.fields.y = (float)v73;
      ScriptMessageLabel__UpdateImage_41641568(
        (ScriptMessageLabel_o *)v14,
        (UISprite_o **)(v14 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v42,
        v38,
        v78,
        0,
        v74);
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
    v79.fields.z = 0.0;
    v79.fields.x = (float)(this->fields.startPosition.fields.x - this->fields.dispPosition.fields.x) * 0.5;
    v79.fields.y = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Label, v79, 0LL);
    Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v56 = (UnityEngine_Transform_o *)Label;
    if ( !byte_4A55CE6 )
    {
      Label = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v56 )
      goto LABEL_64;
    UnityEngine_Transform__set_localScale(v56, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
          v58 = (UnityEngine_Transform_o *)Label;
          LODWORD(v59) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0LL);
          if ( v58 )
          {
            v80.fields.x = (float)condensedSize / fabsf(v59);
            v80.fields.y = 1.0;
            v80.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v58, v80, 0LL);
            goto LABEL_40;
          }
        }
LABEL_64:
        sub_1B8880C(Label, v11);
      }
    }
  }
LABEL_40:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_64;
  v60 = *(_QWORD *)(Label + 16);
  v61 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
  ++*(_DWORD *)(Label + 28);
  if ( !v60 )
    goto LABEL_64;
  v62 = *(int *)(Label + 24);
  if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Label,
      (Il2CppObject *)v14,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = v60 + 8 * v62;
    *(_DWORD *)(Label + 24) = v62 + 1;
    *(_QWORD *)(v63 + 32) = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 32), v14, v54, v55);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainPrefab, (int32_t)prefab, (int32_t)method, v3);
}


void __fastcall ScriptLineMessage__ChangeMessageRoot(
        ScriptLineMessage_o *this,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.messageRoot = root;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.messageRoot, (int32_t)root, (int32_t)method, v3);
}


void __fastcall ScriptLineMessage__ChangeRubyPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.rubyPrefab = prefab;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyPrefab, (int32_t)prefab, (int32_t)method, v3);
}


void __fastcall ScriptLineMessage__ClearLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5CD19 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
    byte_4A5CD19 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ScriptLineMessage__Init(this, method);
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    dispLabelList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v9.fields._current, v5);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v6 = this->fields.dispLabelList;
  if ( !v6 )
LABEL_11:
    sub_1B8880C(dispLabelList, v3);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
}


void __fastcall ScriptLineMessage__ClearText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o startPosition; // x8
  float v4; // s0
  UnityEngine_Object_o *messageOffset; // x20
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *v8; // x20

  if ( (byte_4A5CD24 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5CD24 = 1;
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
    if ( !byte_4A55CE1 )
    {
      v6 = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v8 )
      sub_1B8880C(v6, v7);
    UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  ScriptLineMessage__SetDefaultState(this, v7);
}


void __fastcall ScriptLineMessage__DeleteLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20

  if ( (byte_4A5CD17 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_4A5CD17 = 1;
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
                                                              (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
      if ( labelStock )
      {
        ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, v4);
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
                                                              (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( labelStock )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)labelStock,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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
                                                              (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_28;
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v7, 0LL);
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_28:
      sub_1B8880C(labelStock, v4);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v8, 0LL);
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
    sub_1B8880C(messageRoot, method);
  }
}


UISprite_o *__fastcall ScriptLineMessage__FetchImageSprite(ScriptLineMessage_o *this, const MethodInfo *method)
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

  if ( (byte_4A5CD1C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_4A5CD1C = 1;
  }
  imageStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !imageStock || imageStock->fields._size < 1 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  imagePrefab,
                                  (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v8 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_object )
      {
        v6 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v6, 0LL);
          if ( this->fields.messageRoot )
          {
            v9 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v9 )
              {
                UnityEngine_GameObject__set_layer(v9, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                              v8,
                                              (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
                      sub_1B88814(Component_object, v5);
                    Component_object = *(_QWORD *)(v11 + 8LL * (int)v12 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
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
    sub_1B8880C(Component_object, v5);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                imageStock,
                                (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v6 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v6 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0LL);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0LL);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v14 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UISprite_o *)v6;
}


ScriptMessageLabel_o *__fastcall ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_4A5CD1D & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    byte_4A5CD1D = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v5 = (ScriptMessageLabel_o *)sub_1B887FC(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v5, v6);
  return v5;
}


UILabel_o *__fastcall ScriptLineMessage__FetchMainLabel(ScriptLineMessage_o *this, const MethodInfo *method)
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

  if ( (byte_4A5CD1A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4A5CD1A = 1;
  }
  mainStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
  if ( !mainStock || mainStock->fields._size < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  mainPrefab,
                                  (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v8 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v6 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v6, 0LL);
          if ( this->fields.messageRoot )
          {
            v9 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v9 )
              {
                UnityEngine_GameObject__set_layer(v9, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                              v8,
                                              (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
                      sub_1B88814(Component_object, v5);
                    Component_object = *(_QWORD *)(v11 + 8LL * (int)v12 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
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
    sub_1B8880C(Component_object, v5);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                mainStock,
                                (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v6 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v6 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0LL);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0LL);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v14 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return (UILabel_o *)v6;
}


UILabel_o *__fastcall ScriptLineMessage__FetchRubyLabel(ScriptLineMessage_o *this, const MethodInfo *method)
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

  if ( (byte_4A5CD1B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4A5CD1B = 1;
  }
  rubyStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
  if ( !rubyStock || rubyStock->fields._size < 1 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  rubyPrefab,
                                  (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v8 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v6 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0LL);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v6, 0LL);
          if ( this->fields.messageRoot )
          {
            v9 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0LL);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0LL);
              if ( v9 )
              {
                UnityEngine_GameObject__set_layer(v9, Component_object, 0LL);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                              v8,
                                              (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
                      sub_1B88814(Component_object, v5);
                    Component_object = *(_QWORD *)(v11 + 8LL * (int)v12 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0LL);
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
    sub_1B8880C(Component_object, v5);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                rubyStock,
                                (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v6 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v6 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0LL);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE1 )
  {
    Component_object = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Component_object = (__int64)UnityEngine_Component__get_transform(v6, 0LL);
  v14 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4A55CE6 )
  {
    Component_object = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v14 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UILabel__set_fontSize((UILabel_o *)v6, this->fields.rubyFontSize, 0LL);
  return (UILabel_o *)v6;
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

  if ( (byte_4A5CD18 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
    byte_4A5CD18 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_1B8880C(0LL, method);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_object___ToArray(
                                       dispLabelList,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
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
  if ( (byte_4A5CD25 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1B885B0(&StringLiteral_16044/*"\\[#[^:]+:[^:]+\\]"*/);
    byte_4A5CD25 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_16044/*"\\[#[^:]+:[^:]+\\]"*/, 0LL);
}


void __fastcall ScriptLineMessage__Init(ScriptLineMessage_o *this, const MethodInfo *method)
{
  _BOOL4 isRecycle; // w8
  System_Collections_Generic_Stack_T__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_Stack_T__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_Stack_T__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_Stack_T__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *mainPrefab; // x20
  __int64 fontSizes; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v20; // x0
  int defaultFontSize; // w2
  UILabel_o *v22; // x20
  float v23; // s0
  int32_t rubyFontSize; // w8
  float v25; // s1
  float v26; // s0
  float v27; // s0
  float v28; // s1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v30; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v32; // s0
  UnityEngine_Transform_o *v33; // x20

  if ( (byte_4A5CD16 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UILabel___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UISprite___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
    sub_1B885B0(&System_Collections_Generic_Stack_UILabel__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Stack_UISprite__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_25252/*"■"*/);
    byte_4A5CD16 = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v4 = (System_Collections_Generic_Stack_T__o *)sub_1B887FC(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v4,
        (const MethodInfo_3752A70 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v4;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainStock, (int32_t)v4, v5, v6);
      v7 = (System_Collections_Generic_Stack_T__o *)sub_1B887FC(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v7,
        (const MethodInfo_3752A70 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rubyStock, (int32_t)v7, v8, v9);
      v10 = (System_Collections_Generic_Stack_T__o *)sub_1B887FC(System_Collections_Generic_Stack_UISprite__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v10,
        (const MethodInfo_3752A70 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageStock, (int32_t)v10, v11, v12);
      v13 = (System_Collections_Generic_Stack_T__o *)sub_1B887FC(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v13,
        (const MethodInfo_3752A70 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.labelStock, (int32_t)v13, v14, v15);
    }
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)fontSizes,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.rubyPrefab,
                           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v20 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)fontSizes,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v22 = (UILabel_o *)v20;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (__int64)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
        (Il2CppObject *)StringLiteral_919/*"-"*/,
        defaultFontSize,
        (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (__int64)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
                         (Il2CppObject *)StringLiteral_919/*"-"*/,
                         (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v23 = this->fields.fontScale * (float)(int)fontSizes,
           v23 != INFINITY)
        ? (v18 = (unsigned int)(int)v23)
        : (v18 = 0x80000000LL),
          this->fields.defaultFontSize = v18,
          !Component_object) )
    {
LABEL_37:
      sub_1B8880C(fontSizes, v18);
    }
    UILabel__set_fontSize((UILabel_o *)Component_object, v18, 0LL);
    UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_25252/*"■"*/, 0LL);
    fontSizes = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[22].method)(
                  Component_object,
                  Component_object->klass->vtable[23].methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v25;
    if ( rubyFontSize <= 0 )
    {
      if ( !v22 )
        goto LABEL_37;
      v27 = this->fields.fontScale * (float)v22->fields.mFontSize;
      if ( v27 == INFINITY )
        LODWORD(v18) = 0x80000000;
      else
        LODWORD(v18) = (int)v27;
      this->fields.rubyFontSize = v18;
    }
    else
    {
      v26 = this->fields.fontScale * (float)rubyFontSize;
      if ( v26 == INFINITY )
        v18 = 0x80000000LL;
      else
        v18 = (unsigned int)(int)v26;
      this->fields.rubyFontSize = v18;
      if ( !v22 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v22, v18, 0LL);
    UILabel__set_text(v22, (System_String_o *)StringLiteral_25252/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v22->klass->vtable._22_get_localSize.method)(
      v22,
      v22->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v28;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_object,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
    UnityEngine_Object__Destroy_69459380(v30, 0LL);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v32 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v32;
    fontSizes = UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL);
    if ( (fontSizes & 1) != 0 )
    {
      v33 = this->fields.messageOffset;
      if ( !byte_4A55CE1 )
      {
        fontSizes = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v33 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v33, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, (const MethodInfo *)v18);
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
  ScriptLineMessage_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Object_o *gameObject; // x22
  ScriptLineMessage_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *v14; // x22
  ScriptLineMessage_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Object_o *v19; // x22
  System_Collections_Generic_Stack_T__o *labelStock; // x0

  v3 = label;
  v4 = this;
  if ( (byte_4A5CD1E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UILabel__Push__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_UISprite__Push__);
    this = (ScriptLineMessage_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD1E = 1;
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
        (const MethodInfo_3753098 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
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
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    }
    *p_fields = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields, 0, v7, v8);
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
        (const MethodInfo_3753098 *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !label )
        goto LABEL_40;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v14, 0LL);
    }
    *p_ruby = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.ruby, 0, v12, v13);
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
          (const MethodInfo_3753098 *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_36:
        *p_image = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.image, 0, v17, v18);
        goto LABEL_37;
      }
      if ( label )
      {
        v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v19, 0LL);
        goto LABEL_36;
      }
    }
LABEL_40:
    sub_1B8880C(this, label);
  }
LABEL_37:
  ScriptMessageLabel__Release(v3, (const MethodInfo *)label);
  labelStock = (System_Collections_Generic_Stack_T__o *)v4->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_object___Push(
      labelStock,
      (Il2CppObject *)v3,
      (const MethodInfo_3753098 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
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

  if ( (byte_4A5CD22 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD22 = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v10, v2, v3);
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
      sub_1B8880C(0LL, method);
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

  if ( (byte_4A5CD21 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CD21 = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v8, v2, v3);
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

  if ( (byte_4A5CD23 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4A5CD23 = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_1B8880C(0LL, sizeName);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
  __int64 v12; // x23
  __int64 Chars; // x0
  System_String_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  System_Text_StringBuilder_o *v19; // x20
  System_Text_StringBuilder_o **v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x26
  __int64 v27; // x25
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  int32_t v30; // w29
  int v31; // w21
  const MethodInfo *v32; // x2
  int32_t v33; // w20
  int32_t BraceIndex; // w0
  int32_t v35; // w28
  System_String_o *v36; // x0
  int32_t v37; // w20
  System_String_o *String; // x0
  const MethodInfo *v39; // x1
  bool v40; // zf
  System_String_o *v41; // x20
  System_String_o *TagSplitString; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Text_StringBuilder_o *v45; // x20
  const MethodInfo *v46; // x3
  ScriptReplaceString_c *v47; // x0
  int32_t playerGenderIndex; // w20
  struct System_String_o *v49; // x1
  System_String_o *v50; // x20
  const MethodInfo *v51; // x6
  char v52; // w2
  UnityEngine_Font_o *v53; // x4
  ScriptLineMessage_o *v54; // x0
  System_String_o *v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_String_o *v58; // x1
  const MethodInfo *v59; // x2
  System_String_o *v60; // x20
  int32_t v61; // w1
  int32_t v62; // w2
  System_String_o *v63; // x0
  System_String_o *v64; // x2
  ScriptLineMessage_ProcAddLabel2_o *v65; // x9
  __int64 v66; // x1
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x2
  System_String_o *v69; // x20
  System_String_array *v70; // x0
  struct System_String_o *v71; // x1
  System_String_array *v72; // x20
  int32_t v73; // w2
  int32_t v74; // w3
  const MethodInfo *v75; // x1
  System_String_o *v76; // x0
  const MethodInfo *v77; // x3
  System_Text_StringBuilder_o *v78; // x20
  ScriptLineMessage_ProcAddLabel2_o *v79; // [xsp+0h] [xbp-80h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5CD20 & 1) == 0 )
  {
    sub_1B885B0(&ScriptLineMessage_ProcAddLabel2_TypeInfo);
    sub_1B885B0(&ScriptLineMessage_ProcAddLabel_TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&ScriptReplaceString_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__);
    sub_1B885B0(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__);
    sub_1B885B0(&ScriptLineMessage___c__DisplayClass55_0_TypeInfo);
    sub_1B885B0(&StringLiteral_23114/*"servantName"*/);
    sub_1B885B0(&StringLiteral_15831/*"[-]"*/);
    sub_1B885B0(&StringLiteral_20048/*"i"*/);
    sub_1B885B0(&StringLiteral_16032/*"[~1]"*/);
    sub_1B885B0(&StringLiteral_15967/*"[^"*/);
    sub_1B885B0(&StringLiteral_22742/*"r"*/);
    sub_1B885B0(&StringLiteral_21109/*"line"*/);
    sub_1B885B0(&StringLiteral_20233/*"image"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16031/*"[~"*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5CD20 = 1;
  }
  text = 0LL;
  v12 = sub_1B887FC(ScriptLineMessage___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_89;
  *(_QWORD *)(v12 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v15, v16);
  *(_BYTE *)(v12 + 32) = isFoward;
  *(_QWORD *)(v12 + 40) = font;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 40), (int32_t)font, v17, v18);
  v19 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v19, 0LL);
  *(_QWORD *)(v12 + 16) = v19;
  v20 = (System_Text_StringBuilder_o **)(v12 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v19, v21, v22);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v23, v24);
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v12 + 48) = defaultColorTag;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 48), (int32_t)defaultColorTag, v23, v24);
  v27 = sub_1B887FC(ScriptLineMessage_ProcAddLabel_TypeInfo);
  ScriptLineMessage_ProcAddLabel___ctor(
    (ScriptLineMessage_ProcAddLabel_o *)v27,
    (Il2CppObject *)v12,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__,
    v28);
  v79 = (ScriptLineMessage_ProcAddLabel2_o *)sub_1B887FC(ScriptLineMessage_ProcAddLabel2_TypeInfo);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v79,
    (Il2CppObject *)v12,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__,
    v29);
  if ( !txt )
    goto LABEL_89;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_87;
  v30 = 0;
  v31 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v30, 0LL) != 91 )
    {
      v45 = *v20;
      Chars = System_String__get_Chars(txt, v30, 0LL);
      if ( !v45 )
        goto LABEL_89;
      System_Text_StringBuilder__Append_60871256(v45, Chars, 0LL);
      v35 = v30;
      goto LABEL_42;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v33 = v30 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v30 + 1, v32);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v20;
      if ( !*v20 )
        goto LABEL_89;
      Chars = (__int64)System_Text_StringBuilder__Append_60868928(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15812/*"["*/,
                         0LL);
      goto LABEL_43;
    }
    v35 = BraceIndex;
    Chars = System_String__get_Chars(txt, v33, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v27 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
      v36 = System_String__Substring_61726036(txt, v30 + 2, v31 + v35 - 2, 0LL);
      v37 = System_Int32__Parse(v36, 0LL);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v37, 0LL);
      v40 = v37 == 1;
      v41 = String;
      if ( v40 && removeUserNameColorCode )
      {
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        TagSplitString = ScriptMessageLabel__RemoveColorTag(v41, v39);
      }
      else
      {
        TagSplitString = System_String__Concat_61707032(String, (System_String_o *)StringLiteral_15831/*"[-]"*/, 0LL);
      }
LABEL_39:
      v49 = *(struct System_String_o **)(v12 + 48);
      v50 = TagSplitString;
      this->fields.defaultColorTag = v49;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)v49, v43, v44);
      v52 = *(_BYTE *)(v12 + 32);
      v53 = *(UnityEngine_Font_o **)(v12 + 40);
      v54 = this;
      v55 = v50;
LABEL_40:
      ScriptLineMessage__UpdateLabels(v54, v55, v52, enforceColor, v53, 0, v51);
      v58 = this->fields.defaultColorTag;
      *(_QWORD *)(v12 + 48) = v58;
LABEL_41:
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 48), (int32_t)v58, v56, v57);
      goto LABEL_42;
    }
    Chars = System_String__get_Chars(txt, v33, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v27 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4A5CBEA )
      {
        sub_1B885B0(&ScriptReplaceString_TypeInfo);
        byte_4A5CBEA = 1;
      }
      v47 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v47 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v47->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v30 + 2, playerGenderIndex, v46);
      goto LABEL_39;
    }
    Chars = System_String__get_Chars(txt, v33, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v27 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
      Chars = (__int64)System_String__Substring_61726036(txt, v30, v31 + v35 + 1, 0LL);
      goto LABEL_60;
    }
    if ( System_String__get_Chars(txt, v33, 0LL) != 61 )
      break;
LABEL_42:
    v33 = v35 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, System_Text_StringBuilder_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AfterParseEachChar.method)(
              this,
              *v20,
              v27,
              this->klass->vtable._6_PreProcSetRubyLabel.methodPtr);
LABEL_43:
    v31 = -v33;
    v30 = v33;
    if ( v33 >= txt->fields._stringLength )
      goto LABEL_87;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v33, v59);
  if ( !Chars )
    goto LABEL_89;
  v60 = (System_String_o *)Chars;
  Chars = System_String__Equals_61715348((System_String_o *)Chars, (System_String_o *)StringLiteral_20233/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
    v61 = v30 + 7;
    v62 = v31 + v35 - 7;
    goto LABEL_58;
  }
  Chars = System_String__Equals_61715348(v60, (System_String_o *)StringLiteral_20048/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
    v61 = v30 + 3;
    v62 = v31 + v35 - 3;
LABEL_58:
    v14 = System_String__Substring_61726036(txt, v61, v62, 0LL);
    v63 = (System_String_o *)StringLiteral_15967/*"[^"*/;
    v64 = (System_String_o *)StringLiteral_16069/*"]"*/;
LABEL_59:
    Chars = (__int64)System_String__Concat_61718292(v63, v14, v64, 0LL);
LABEL_60:
    v65 = v79;
    if ( !v79 )
      goto LABEL_89;
    v66 = Chars;
LABEL_62:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v65->fields.m_target)(
      v65->fields.original_method_info,
      v66,
      *(_QWORD *)&v65->fields.extra_arg);
    goto LABEL_42;
  }
  Chars = System_String__Equals_61715348(v60, (System_String_o *)StringLiteral_22742/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
    ScriptLineMessage__ReturnText(this, v67);
    if ( enforceColor )
    {
      *p_defaultColorTag = enforceColor;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v56, v57);
    }
    v58 = *p_defaultColorTag;
    *(_QWORD *)(v12 + 48) = *p_defaultColorTag;
    goto LABEL_41;
  }
  Chars = System_String__Equals_61715348(v60, (System_String_o *)StringLiteral_23114/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
    v69 = System_String__Substring_61726036(txt, v30 + 12, v31 + v35 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v70 = ScriptMessageLabel__AnalysTagParam(v69, 0, v68);
    v71 = *(struct System_String_o **)(v12 + 48);
    v72 = v70;
    this->fields.defaultColorTag = v71;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)v71, v73, v74);
    v76 = ScriptMessageLabel__GetServantChangeName(v72, v75);
    v52 = *(_BYTE *)(v12 + 32);
    v53 = *(UnityEngine_Font_o **)(v12 + 40);
    v55 = v76;
    v54 = this;
    goto LABEL_40;
  }
  Chars = System_String__StartsWith(v60, (System_String_o *)StringLiteral_21109/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
    Chars = (__int64)System_String__Substring_61726036(txt, v30 + 5, v31 + v35 - 5, 0LL);
    if ( !Chars )
      goto LABEL_89;
    v14 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v63 = (System_String_o *)StringLiteral_16031/*"[~"*/;
      v64 = (System_String_o *)StringLiteral_16069/*"]"*/;
      goto LABEL_59;
    }
    v65 = v79;
    if ( !v79 )
      goto LABEL_89;
    v66 = StringLiteral_16032/*"[~1]"*/;
    goto LABEL_62;
  }
  if ( v35 < txt->fields._stringLength )
  {
    text = System_String__Substring_61726036(txt, v30, v31 + v35 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v12 + 48), &text, enforceColor, v77);
    Chars = (__int64)*v20;
    if ( !*v20 )
      goto LABEL_89;
    System_Text_StringBuilder__Append_60868928((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_42;
  }
  v78 = *v20;
  Chars = (__int64)System_String__Substring(txt, v30, 0LL);
  if ( !v78 )
    goto LABEL_89;
  Chars = (__int64)System_Text_StringBuilder__Append_60868928(v78, (System_String_o *)Chars, 0LL);
LABEL_87:
  if ( !v27 )
LABEL_89:
    sub_1B8880C(Chars, v14);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CFC54;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CFC14;
}


System_IAsyncResult_o *__fastcall ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CFCD0;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19CFCB0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CFC68;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
    sub_1B8880C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 17) = tmpColorTag;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(tmpTxt + 136), (int32_t)tmpColorTag, v4, v5);
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
    sub_1B8880C(this, text);
  tmpColorTag = (struct ScriptLineMessage_o *)v5->fields.tmpColorTag;
  this[2].fields.__4__this = tmpColorTag;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this[2].fields.__4__this, (int32_t)tmpColorTag, (int32_t)method, v3);
}