void __fastcall RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_Color_array *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_object__o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1

  if ( (byte_4B1A37C & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v8, v9);
    byte_4B1A37C = 1;
  }
  this->fields.iconScale = 0.85;
  v10 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v10;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v17,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.teaEffectObjList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v27);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__CheckIsSerializeFieldNotNull(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent__ClickSkip(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v12; // x0
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v14; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1A377 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameObject__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__, v7, v8);
    sub_1BCA7E0(&RecipeRewardDialogComponent___c_TypeInfo, v9, v10);
    byte_4B1A377 = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v12 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo, method);
      v12 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    _9__46_0 = (System_Action_object__o *)v12->static_fields->__9__46_0;
    if ( !_9__46_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12, method);
        v12 = RecipeRewardDialogComponent___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__46_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, method, v2, v3);
      System_Action_object____ctor(_9__46_0, v14, Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__, 0LL);
      static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_0 = (struct System_Action_GameObject__o *)_9__46_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__46_0,
        (int64_t)_9__46_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( !teaEffectObjList )
      sub_1BCAA3C(v12, method);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)teaEffectObjList,
      (System_Action_T__o *)_9__46_0,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
}


void __fastcall RecipeRewardDialogComponent__EndClose(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4B1A379 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B1A379 = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall RecipeRewardDialogComponent__Init(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__OnClickCloseButton(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x20
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1A378 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_RecipeRewardDialogComponent_EndClose__, v16, v17);
    sub_1BCA7E0(&Method_RecipeRewardDialogComponent_OnClickCloseButton__, v18, v19);
    byte_4B1A378 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
    v20 = Method_RecipeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1BCA7F8(Method_RecipeRewardDialogComponent_OnClickCloseButton__);
    v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1BCAA3C(0LL, v22);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v31.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
        UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v30, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__OnClickSwitchShowMode(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v23; // x8
  UISprite_o *v24; // x20
  __int64 v25; // x1
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v33; // w20
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1A37A & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__, v12, v13);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24319/*"treasurechest_btn_on"*/, v16, v17);
    byte_4B1A37A = 1;
  }
  v18 = Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v23 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24317/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24319/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v23, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v24 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v24, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1BCAA3C(viewChangeButton, v20);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButton )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1BCAA44(viewChangeButton, v20);
  }
  if ( max_length <= 1 )
    goto LABEL_28;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_26;
LABEL_20:
  v34.fields.a = *p_r;
  v34.fields.b = *p_a;
  v34.fields.g = *p_b;
  v34.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v34, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v33 = 0;
  while ( v33 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v33,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v33;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void __fastcall RecipeRewardDialogComponent__Open(
        RecipeRewardDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_o *eventRecipeGiftEntity,
        System_Action_o *closeCallback,
        RecipeRewardDialogComponent_GetEffect_o *getEffect,
        const MethodInfo *method)
{
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
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x23
  int *viewChangeButton; // x0
  __int64 v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x1
  Il2CppObject *Component_object; // x27
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Collections_Generic_List_object__o *v94; // x26
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  System_Collections_Generic_List_object__o *v104; // x26
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x8
  int32_t size; // w2
  int v113; // w9
  __int64 v114; // x1
  UILabel_o *titleLabel; // x26
  __int64 v116; // x1
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v123; // x27
  Il2CppObject *v124; // x0
  System_String_o *v125; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v128; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v130; // x27
  Il2CppObject *v131; // x0
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  System_Collections_Generic_List_object__o *v135; // x25
  void **v136; // x26
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x3
  GiftEntity_o *v146; // x25
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  __int64 v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  __int64 v156; // x8
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  System_Action_int__o *v160; // x25
  __int64 v161; // x8
  __int64 *v162; // x24
  UILabel_o *v163; // x22
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  System_Collections_Generic_List_GiftEntity__o *v170; // x21
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x3
  System_Action_o *v174; // x22
  const MethodInfo *v175; // x4
  __int64 v177; // [xsp+10h] [xbp-70h] BYREF
  int v178; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B1A373 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, giftIds, pointRewards);
    sub_1BCA7E0(&System_Action_TypeInfo, v14, v15);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_int___, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144, v24, v25);
    sub_1BCA7E0(&GiftEntity_TypeInfo, v26, v27);
    sub_1BCA7E0(&int_TypeInfo, v28, v29);
    sub_1BCA7E0(&long_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Add__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v40, v41);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v42, v43);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v44, v45);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v46, v47);
    sub_1BCA7E0(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__, v48, v49);
    sub_1BCA7E0(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__, v50, v51);
    sub_1BCA7E0(&RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo, v52, v53);
    sub_1BCA7E0(&StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_11119/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_11123/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_11117/*"RECIPE_EVENT_GET_POINT_NUM"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_13609/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v68, v69);
    sub_1BCA7E0(&StringLiteral_24323/*"treasurechest_img_bg_reward"*/, v70, v71);
    sub_1BCA7E0(&StringLiteral_11124/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v72, v73);
    byte_4B1A373 = 1;
  }
  v74 = sub_1BCAA2C(
          RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo,
          giftIds,
          pointRewards,
          eventRecipeEntity);
  System_Object___ctor((Il2CppObject *)v74, 0LL);
  if ( !v74 )
    goto LABEL_53;
  *(_QWORD *)(v74 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 24), (int64_t)this, v77, v78, v79, v80, v81, v82);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_53;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v83);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  this->fields.getEffect = getEffect;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.getEffect, (int64_t)getEffect, v85, v86, v87, v88, v89, v90);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v94 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v91,
                                                       v92,
                                                       v93);
  System_Collections_Generic_List_object____ctor(
    v94,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v94;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultItemObjList,
    (int64_t)v94,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  v104 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_GameObject__TypeInfo,
                                                        v101,
                                                        v102,
                                                        v103);
  System_Collections_Generic_List_object____ctor(
    v104,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v104;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultIconHideObjList,
    (int64_t)v104,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
  {
    size = teaEffectObjList->fields._size;
    v113 = teaEffectObjList->fields._version + 1;
    teaEffectObjList->fields._size = 0;
    teaEffectObjList->fields._version = v113;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)teaEffectObjList->fields._items, 0, size, 0LL);
  }
  viewChangeButton = (int *)this->fields.skipCollider;
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)viewChangeButton, 1, 0LL);
  if ( !giftIds )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.getPointRoot;
  this->fields.maxPlayCnt = *(_QWORD *)&giftIds->max_length;
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v114);
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11119/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
  if ( !eventRecipeEntity )
    goto LABEL_53;
  viewChangeButton = (int *)System_String__Format(
                              (System_String_o *)viewChangeButton,
                              (Il2CppObject *)eventRecipeEntity->fields.name,
                              0LL);
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  eventPointItemId = eventRecipeEntity->fields.eventPointItemId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v116);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24323/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_53;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_53;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    goto LABEL_54;
  viewChangeButton = (int *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_53;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11124/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_53;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11117/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_53;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v123 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v178 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178);
  v125 = System_String__Format(v123, v124, 0LL);
  viewChangeButton = (int *)System_String__Concat_62401220((System_String_o *)StringLiteral_855/*"+"*/, v125, 0LL);
  if ( !getNumLabel )
    goto LABEL_53;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !eventRecipeGiftEntity )
    goto LABEL_53;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v128 = EventPointNoGroup;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11123/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_53;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v130 = LocalizationManager__Get((System_String_o *)StringLiteral_2964/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v177 = v128;
  v131 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v177);
  viewChangeButton = (int *)System_String__Format(v130, v131, 0LL);
  if ( !totalNumLabel )
    goto LABEL_53;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v135 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                        v132,
                                                        v133,
                                                        v134);
  System_Collections_Generic_List_object____ctor(
    v135,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v74 + 16) = v135;
  v136 = (void **)(v74 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 16), (int64_t)v135, v137, v138, v139, v140, v141, v142);
  v146 = (GiftEntity_o *)sub_1BCAA2C(GiftEntity_TypeInfo, v143, v144, v145);
  GiftEntity___ctor(v146, 0LL);
  if ( !v146 )
    goto LABEL_53;
  v146->fields.type = 2;
  v146->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v146->fields.num = eventRecipeEntity->fields.eventPointNum * giftIds->max_length;
  viewChangeButton = (int *)*v136;
  if ( !*v136 )
    goto LABEL_53;
  v153 = *((_QWORD *)viewChangeButton + 2);
  v154 = Method_System_Collections_Generic_List_GiftEntity__Add__;
  ++viewChangeButton[7];
  if ( !v153 )
    goto LABEL_53;
  v155 = viewChangeButton[6];
  if ( (unsigned int)v155 >= *(_DWORD *)(v153 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)viewChangeButton,
      (Il2CppObject *)v146,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
  }
  else
  {
    v156 = v153 + 8 * v155;
    viewChangeButton[6] = v155 + 1;
    *(_QWORD *)(v156 + 32) = v146;
    sub_1BCA784((PartyOrganizationUtility_o *)(v156 + 32), (int64_t)v146, v147, v148, v149, v150, v151, v152);
  }
  v160 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v157, v158, v159);
  System_Action_int____ctor(
    v160,
    (Il2CppObject *)v74,
    Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v160,
    (const MethodInfo_2EFF36C *)Method_BasicHelper_ForEach_int___);
  v161 = *(_QWORD *)(v74 + 16);
  if ( !v161 )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v161 + 24);
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !viewChangeButton )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)viewChangeButton, 0.0, 0LL);
  viewChangeButton = (int *)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxPlayCnt > this->fields.maxItemDrawNum,
    0LL);
  v162 = &StringLiteral_13609/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( pointRewards && pointRewards->max_length )
    v162 = &StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = (int *)this->fields.closeButton;
  if ( !viewChangeButton
    || (viewChangeButton = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL)) == 0LL
    || (viewChangeButton = (int *)UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)viewChangeButton,
                                    1,
                                    (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144)) == 0LL )
  {
LABEL_53:
    sub_1BCAA3C(viewChangeButton, v76);
  }
  if ( !viewChangeButton[6] )
LABEL_54:
    sub_1BCAA44(viewChangeButton, v76);
  v163 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)*v162, 0LL);
  if ( !v163 )
    goto LABEL_53;
  UILabel__set_text(v163, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v164,
    v165,
    v166,
    v167,
    v168,
    v169);
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v170 = *(System_Collections_Generic_List_GiftEntity__o **)(v74 + 16);
  v174 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v171, v172, v173);
  System_Action___ctor(
    v174,
    (Il2CppObject *)v74,
    Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__,
    0LL);
  RecipeRewardDialogComponent__SetResultData(this, v170, eventRecipeEntity, v174, v175);
}


void __fastcall RecipeRewardDialogComponent__SetResultData(
        RecipeRewardDialogComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftList,
        EventRecipeEntity_o *eventRecipeEntity,
        System_Action_o *callBack,
        const MethodInfo *method)
{
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
  __int64 v19; // x23
  UnityEngine_Component_o *scrollView; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_object__o *v37; // x22

  if ( (byte_4B1A374 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GiftEntity__TypeInfo, giftList, eventRecipeEntity);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__ForEach__, v13, v14);
    sub_1BCA7E0(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__, v15, v16);
    sub_1BCA7E0(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, v17, v18);
    byte_4B1A374 = 1;
  }
  v19 = sub_1BCAA2C(RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, giftList, eventRecipeEntity, callBack);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_12;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = eventRecipeEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)eventRecipeEntity, v28, v29, v30, v31, v32, v33);
  v37 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GiftEntity__TypeInfo, v34, v35, v36);
  System_Action_object____ctor(
    v37,
    (Il2CppObject *)v19,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__,
    0LL);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Action_T__o *)v37,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0LL
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
          scrollView,
          scrollView->klass[1]._1.declaringType),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(scrollView, v21);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
    scrollView,
    scrollView->klass[1]._1.declaringType);
  ActionExtensions__Call(callBack, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartDisp(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1A375 & 1) == 0 )
  {
    sub_1BCA7E0(&RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo, method, v2);
    byte_4B1A375 = 1;
  }
  v5 = sub_1BCAA2C(RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartRewardAction(
        RecipeRewardDialogComponent_o *this,
        RecipeRewardDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1A376 & 1) == 0 )
  {
    sub_1BCA7E0(&RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo, rewardAction, method);
    byte_4B1A376 = 1;
  }
  v6 = sub_1BCAA2C(RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo, rewardAction, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = rewardAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)rewardAction, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A37B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A37B = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent_GetEffect___ctor(
        RecipeRewardDialogComponent_GetEffect_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

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
      v13 = (Il2CppObject *)sub_1A12094;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A12190;
          else
            v13 = (Il2CppObject *)sub_1A12154;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A120D0;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A120A4;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A12074;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A12024;
}


System_IAsyncResult_o *__fastcall RecipeRewardDialogComponent_GetEffect__BeginInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = parenTransform;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_1BCA798(result, 0LL, method);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__Invoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_Transform_o *, _QWORD))this->fields.m_target)(
                                       this->fields.original_method_info,
                                       parenTransform,
                                       *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall RecipeRewardDialogComponent_RewardAction___ctor(
        RecipeRewardDialogComponent_RewardAction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__StartDisp_d__44___ctor(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall RecipeRewardDialogComponent__StartDisp_d__44__MoveNext(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  RecipeRewardDialogComponent__StartDisp_d__44_o *v8; // x19
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
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  bool result; // w0
  int listRewardAction_5__2_high; // w8
  int32_t maxPlayCnt; // w9
  int v50; // w21
  UIProgressBar_o *v51; // x20
  float value; // s0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int v60; // w8
  System_Collections_Generic_List_object__o *v61; // x22
  RecipeRewardDialogComponent__StartDisp_d__44_o **p_listRewardAction_5__2; // x21
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x2
  __int64 v70; // x3
  int v71; // w23
  int64_t v72; // x22
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 _2__current_low; // x10
  __int64 v82; // x8
  int _2__current; // w9
  int32_t v84; // w22
  RecipeRewardDialogComponent__StartDisp_d__44_o *v85; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v87; // x2
  System_Collections_IEnumerator_o *started; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int32_t playCnt; // w8
  int32_t v96; // w21
  int32_t v97; // w19
  __int64 v98; // x1
  Il2CppObject *current; // x19
  __int64 v100; // x1
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v102; // x20
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+8h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4B1A383 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&RecipeRewardDialogComponent_RewardAction_TypeInfo, v35, v36);
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v37, v38);
    byte_4B1A383 = 1;
  }
  memset(&v109, 0, sizeof(v109));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v40 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v40, 0.3, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v40;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__2__current, (int64_t)v40, v41, v42, v43, v44, v45, v46);
      result = 1;
      v8->fields.__1__state = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_19;
    case 2:
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v8->fields._listRewardAction_5__2;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_59;
      goto LABEL_37;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_59;
      listRewardAction_5__2_high = HIDWORD(this->fields._listRewardAction_5__2);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.scrollBar;
      v50 = maxPlayCnt % listRewardAction_5__2_high
          ? maxPlayCnt / listRewardAction_5__2_high + 1
          : maxPlayCnt / listRewardAction_5__2_high;
      if ( !this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v51 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v51, (float)(1.0 / (float)((float)((float)v50 * 0.5) + -1.0)) + value, 0LL);
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v54, v55, v56, v57, v58, v59);
      v60 = 4;
      goto LABEL_76;
    case 4:
      v8->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v8->fields._listRewardAction_5__2 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._listRewardAction_5__2, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_19:
    v61 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v61,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    v8->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__o *)v61;
    p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__44_o **)&v8->fields._listRewardAction_5__2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v8->fields._listRewardAction_5__2,
      (int64_t)v61,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v71 = 0;
      do
      {
        if ( v71 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v72 = sub_1BCAA2C(RecipeRewardDialogComponent_RewardAction_TypeInfo, method, v69, v70);
        System_Object___ctor((Il2CppObject *)v72, 0LL);
        if ( !v72 )
          goto LABEL_59;
        *(_DWORD *)(v72 + 16) = v71;
        *(_DWORD *)(v72 + 20) = v71 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v79 = *(_QWORD *)&this->fields.__1__state;
        v80 = Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v79 )
          goto LABEL_59;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v79 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v72,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = v79 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v82 + 32) = v72;
          sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 32), v72, v73, v74, v75, v76, v77, v78);
        }
        ++v71;
      }
      while ( v71 < _4__this->fields.maxItemDrawNum );
    }
    this = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_59;
    _2__current = (int)this->fields.__2__current;
    _4__this->fields.playCnt += _2__current;
    if ( _2__current >= 1 )
    {
      v84 = 0;
      do
      {
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   v84,
                                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v85 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v84,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        started = RecipeRewardDialogComponent__StartRewardAction(
                    _4__this,
                    (RecipeRewardDialogComponent_RewardAction_o *)Item,
                    v87);
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                                   (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                   started,
                                                                   0LL);
        if ( !v85 )
          goto LABEL_59;
        v85->fields.__4__this = (struct RecipeRewardDialogComponent_o *)this;
        sub_1BCA784((PartyOrganizationUtility_o *)&v85->fields.__4__this, (int64_t)this, v89, v90, v91, v92, v93, v94);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v84 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)this,
                                                               LODWORD(this->fields.__2__current) - 1,
                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
    if ( !this )
      goto LABEL_59;
    if ( LOBYTE(this->fields.__2__current) )
    {
      if ( !_4__this )
        goto LABEL_59;
      goto LABEL_43;
    }
    if ( !_4__this )
      goto LABEL_59;
    if ( !_4__this->fields.isSkip )
      break;
LABEL_43:
    if ( _4__this->fields.isSkip )
    {
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v8->fields._listRewardAction_5__2;
      if ( this )
      {
        v96 = 0;
        while ( v96 < SLODWORD(this->fields.__2__current) )
        {
          this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v96,
                                                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_70140136(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0LL);
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v8->fields._listRewardAction_5__2;
            ++v96;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v97 = 0;
          while ( v97 < SLODWORD(this->fields.__2__current) )
          {
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v97,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
              ++v97;
              if ( this )
                continue;
            }
            goto LABEL_59;
          }
          this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.scrollBar;
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          if ( this )
          {
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)this,
                                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
            if ( this )
            {
              UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
LABEL_63:
              this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.skipCollider;
              if ( this )
              {
                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
                this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultIconHideObjList;
                if ( this )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v109,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v109,
                            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v109.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v98);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
                    {
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100);
                      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v109,
                    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1BCAA3C(this, method);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v102 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v102, scrollWait, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v102;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v102, v103, v104, v105, v106, v107, v108);
      v60 = 3;
      goto LABEL_76;
    }
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  v60 = 2;
LABEL_76:
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v60;
  return 1;
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartDisp_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RecipeRewardDialogComponent__StartDisp_d__44__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_RecipeRewardDialogComponent__StartDisp_d__44_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartDisp_d__44__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RecipeRewardDialogComponent__StartDisp_d__44__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent__StartRewardAction_d__45___ctor(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecipeRewardDialogComponent__StartRewardAction_d__45__MoveNext(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v12; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v13; // x8
  bool result; // w0
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *v16; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v18; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  Il2CppObject *Item; // x0
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v28; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v29; // x8
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v30; // x21
  int v31; // s0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 _2__current_low; // x10
  __int64 v43; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  float v47; // s8
  UnityEngine_WaitForSeconds_o *v48; // x20
  PartyOrganizationUtility_o *v49; // x19
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1A384 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)sub_1BCA7E0(
                                                                       &UnityEngine_WaitForSeconds_TypeInfo,
                                                                       v7,
                                                                       v8);
    byte_4B1A384 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_40;
    if ( !_4__this->fields.isSkip )
    {
      _4__this->fields.canSkip = 1;
      rewardAction = v4->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_40;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_40;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this,
                                                                         rewardAction->fields.playCnt,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v12 = v4->fields.rewardAction;
    if ( v12 )
    {
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           v12->fields.playCnt,
                                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v13 = v4->fields.rewardAction;
          if ( v13 )
          {
            result = 0;
            v13->fields.isEnd = 1;
            return result;
          }
        }
      }
    }
LABEL_40:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v4->fields._i_5__2;
    v4->fields.__1__state = -1;
    _1__state = i_5__2 + 1;
    v4->fields._i_5__2 = _1__state;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v4->fields._i_5__2 = 0;
  }
  v16 = v4->fields.rewardAction;
  if ( !v16 || !_4__this )
    goto LABEL_40;
  if ( _1__state < v16->fields.index )
  {
    itemDispWaitTime = _4__this->fields.itemDispWaitTime;
    v18 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v18, itemDispWaitTime, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v18;
    p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
    sub_1BCA784(p__2__current, (int64_t)v18, v20, v21, v22, v23, v24, v25);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_40;
  getEffect = _4__this->fields.getEffect;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this,
           v16->fields.playCnt,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)GameObjectExtensions__GetParent(
                                                                     (UnityEngine_GameObject_o *)Item,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
  if ( !getEffect )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, RecipeRewardDialogComponent__StartRewardAction_d__45_o *, _QWORD))getEffect->fields.m_target)(
                                                                     getEffect->fields.original_method_info,
                                                                     this,
                                                                     *(_QWORD *)&getEffect->fields.extra_arg);
  if ( !this )
    goto LABEL_40;
  v28 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL);
  v29 = v4->fields.rewardAction;
  if ( !v29 )
    goto LABEL_40;
  v30 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v29->fields.playCnt,
                                                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_40;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)v28,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  v56.fields.x = 1.25;
  v56.fields.y = 1.25;
  v56.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v56, 0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.teaEffectObjList;
  if ( !this )
    goto LABEL_40;
  v40 = *(_QWORD *)&this->fields.__1__state;
  v41 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v40 )
    goto LABEL_40;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v40 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v28,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = v40 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v43 + 32) = v28;
    sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)v28, v34, v35, v36, v37, v38, v39);
  }
  v47 = _4__this->fields.itemDispWaitTime;
  v48 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v44, v45, v46);
  UnityEngine_WaitForSeconds___ctor(v48, v47, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v48;
  v49 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(v49, (int64_t)v48, v50, v51, v52, v53, v54, v55);
  *(_DWORD *)&v49[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
  return 1;
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartRewardAction_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RecipeRewardDialogComponent__StartRewardAction_d__45__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_RecipeRewardDialogComponent__StartRewardAction_d__45_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall RecipeRewardDialogComponent__StartRewardAction_d__45__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RecipeRewardDialogComponent__StartRewardAction_d__45__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecipeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A37D & 1) == 0 )
  {
    sub_1BCA7E0(&RecipeRewardDialogComponent___c_TypeInfo, v1, v2);
    byte_4B1A37D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecipeRewardDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecipeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct RecipeRewardDialogComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecipeRewardDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall RecipeRewardDialogComponent___c___ctor(
        RecipeRewardDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c___ClickSkip_b__46_0(
        RecipeRewardDialogComponent___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B1A37E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B1A37E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)x, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__0(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x20
  GiftEntity_array *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B1A37F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1A37F = 1;
  }
  giftList = this->fields.giftList;
  Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (GiftEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL
    || (Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0LL), !giftList) )
  {
    sub_1BCAA3C(Instance, v11);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  RecipeRewardDialogComponent___c__DisplayClass42_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B1A380 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)sub_1BCA7E0(
                                                                    &Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__,
                                                                    v5,
                                                                    v6);
    byte_4B1A380 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  _4__this->fields.state = 2;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__2, (int64_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  BaseDialog__Open((BaseDialog_o *)_4__this, _9__2, 0, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4B1A381 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13116/*"StartDisp"*/, method, v2);
    byte_4B1A381 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13116/*"StartDisp"*/, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent___c__DisplayClass43_0___SetResultData_b__0(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v4; // x19
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
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  Il2CppObject *prefabResultItem; // x20
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v21; // x20
  struct RecipeRewardDialogComponent_o *v22; // x8
  __int64 v23; // x2
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v24; // x22
  struct RecipeRewardDialogComponent_o *v25; // x8
  ItemIconComponent_o *v26; // x22
  int32_t v27; // w3
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct RecipeRewardDialogComponent_o *v34; // x8
  struct RecipeRewardDialogComponent_o *v35; // x8
  _QWORD *v36; // x9
  __int64 eventRecipeEntity_low; // x10
  RecipeRewardDialogComponent_c **v38; // x8
  struct RecipeRewardDialogComponent_o *v39; // x8
  Il2CppObject *prefabTeaItem; // x21
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v41; // x21
  struct RecipeRewardDialogComponent_o *v42; // x8
  UnityEngine_Transform_o *transform; // x22
  int v44; // s0
  struct RecipeRewardDialogComponent_o *v47; // x8
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UISprite_o *v49; // x20
  int32_t eventId; // w22
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  System_String_o *v53; // x23
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct RecipeRewardDialogComponent_o *v60; // x8
  struct RecipeRewardDialogComponent_o *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  RecipeRewardDialogComponent_c **v64; // x8
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1A382 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, gift, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1BCA7E0(&StringLiteral_20412/*"icon_{0}"*/, v17, v18);
    byte_4B1A382 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  prefabResultItem = (Il2CppObject *)_4__this->fields.prefabResultItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gift);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabResultItem,
                                                                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v21 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v22 = v4->fields.__4__this;
  if ( !v22 || !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v22->fields.listRoot, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v21,
                                                                  0LL);
  v24 = this;
  if ( !byte_4B109C1 )
  {
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, gift, v23);
    byte_4B109C1 = 1;
  }
  if ( !v24 )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v24,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v21,
                                                                  0LL);
  v25 = v4->fields.__4__this;
  if ( !v25 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v66.fields.x = v25->fields.iconScale;
  v66.fields.y = v66.fields.x;
  v66.fields.z = v66.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v66, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v21,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_45;
  v26 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_45;
  v27 = gift->fields.num <= 1 ? -1 : gift->fields.num;
  ItemIconComponent__SetGift_38855180(
    (ItemIconComponent_o *)this,
    gift->fields.type,
    gift->fields.objectId,
    v27,
    0,
    0LL);
  ItemIconComponent__CalcSetPossession(v26, gift->fields.type, gift->fields.objectId, 0LL);
  v34 = v4->fields.__4__this;
  if ( !v34 )
    goto LABEL_45;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v34->fields.resultItemObjList;
  if ( !this )
    goto LABEL_45;
  v35 = this->fields.__4__this;
  v36 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.eventRecipeEntity);
  if ( !v35 )
    goto LABEL_45;
  eventRecipeEntity_low = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)eventRecipeEntity_low >= LODWORD(v35->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v21,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &v35->klass + eventRecipeEntity_low;
    LODWORD(this->fields.eventRecipeEntity) = eventRecipeEntity_low + 1;
    v38[4] = (RecipeRewardDialogComponent_c *)v21;
    sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v21, v28, v29, v30, v31, v32, v33);
  }
  v39 = v4->fields.__4__this;
  if ( !v39 )
    goto LABEL_45;
  prefabTeaItem = (Il2CppObject *)v39->fields.prefabTeaItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, gift);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v41 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v42 = v4->fields.__4__this;
  if ( !v42 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v42->fields.iconListRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v21,
                                                                  0LL);
  if ( !this )
    goto LABEL_45;
  *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v44, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v41,
                                                                  0LL);
  v47 = v4->fields.__4__this;
  if ( !v47 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v67.fields.x = v47->fields.iconScale;
  v67.fields.y = v67.fields.x;
  v67.fields.z = v67.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v67, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v41,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v4->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_45;
  v49 = (UISprite_o *)this;
  eventId = eventRecipeEntity->fields.eventId;
  iconId = eventRecipeEntity->fields.iconId;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v53 = System_String__Format((System_String_o *)StringLiteral_20412/*"icon_{0}"*/, v51, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v52);
  AtlasManager__SetEventUI_38574572(eventId, v49, v53, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v41, 1, 0LL);
  v60 = v4->fields.__4__this;
  if ( !v60
    || (this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v60->fields.resultIconHideObjList) == 0LL
    || (v61 = this->fields.__4__this,
        v62 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.eventRecipeEntity),
        !v61) )
  {
LABEL_45:
    sub_1BCAA3C(this, gift);
  }
  v63 = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v41,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = &v61->klass + v63;
    LODWORD(this->fields.eventRecipeEntity) = v63 + 1;
    v64[4] = (RecipeRewardDialogComponent_c *)v41;
    sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v41, v54, v55, v56, v57, v58, v59);
  }
}