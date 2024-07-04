void __fastcall RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Color_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_48E6697 & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Color___TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B00CCC(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_48E6697 = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1B00D74(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.teaEffectObjList, (int32_t)v9, v10, v11);
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v7; // x0
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v9; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48E6692 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_GameObject__TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1B00CCC(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__, v4);
    sub_1B00CCC(&RecipeRewardDialogComponent___c_TypeInfo, v5);
    byte_48E6692 = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v7 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo);
      v7 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    _9__46_0 = (System_Action_object__o *)v7->static_fields->__9__46_0;
    if ( !_9__46_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = RecipeRewardDialogComponent___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__46_0 = (System_Action_object__o *)sub_1B00F18(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__46_0, v9, Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__, 0LL);
      static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_0 = (struct System_Action_GameObject__o *)_9__46_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__46_0, (int32_t)_9__46_0, v11, v12);
    }
    if ( !teaEffectObjList )
      sub_1B00F28(v7, method);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)teaEffectObjList,
      (System_Action_T__o *)_9__46_0,
      (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
}


void __fastcall RecipeRewardDialogComponent__EndClose(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_48E6694 & 1) == 0 )
  {
    sub_1B00CCC(&Method_ActionExtensions_Call_bool___, method);
    byte_48E6694 = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2CBB36C *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
    sub_1B00F28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecipeRewardDialogComponent__OnClickCloseButton(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v16; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E6693 & 1) == 0 )
  {
    sub_1B00CCC(&Method_ActionExtensions_Call_bool___, method);
    sub_1B00CCC(&System_Action_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B00CCC(&Method_RecipeRewardDialogComponent_EndClose__, v9);
    sub_1B00CCC(&Method_RecipeRewardDialogComponent_OnClickCloseButton__, v10);
    byte_48E6693 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2CBB36C *)Method_ActionExtensions_Call_bool___);
    v11 = Method_RecipeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B00CE4(Method_RecipeRewardDialogComponent_OnClickCloseButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1B00F28(0LL, v13);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_68077656((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v16 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
  }
}


void __fastcall RecipeRewardDialogComponent__OnClickSwitchShowMode(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v15; // x8
  UISprite_o *v16; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v24; // w20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E6695 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B00CCC(&Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__, v7);
    sub_1B00CCC(&StringLiteral_23710/*"treasurechest_btn"*/, v8);
    sub_1B00CCC(&StringLiteral_23712/*"treasurechest_btn_on"*/, v9);
    byte_48E6695 = 1;
  }
  v10 = Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B00CE4(Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23710/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23712/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v16 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v16, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1B00F28(viewChangeButton, v12);
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
    sub_1B00F30(viewChangeButton, v12);
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
  v25.fields.a = *p_r;
  v25.fields.b = *p_a;
  v25.fields.g = *p_b;
  v25.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v25, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v24 = 0;
  while ( v24 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v24,
                                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v24;
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x23
  int *viewChangeButton; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *Component_object; // x27
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_List_object__o *v52; // x26
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_List_object__o *v55; // x26
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x8
  int32_t size; // w2
  int v60; // w9
  UILabel_o *titleLabel; // x26
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v68; // x27
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v76; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v78; // x27
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  System_Collections_Generic_List_object__o *v83; // x25
  void **v84; // x26
  int32_t v85; // w2
  int32_t v86; // w3
  GiftEntity_o *v87; // x25
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  System_Action_int__o *v94; // x25
  __int64 v95; // x8
  __int64 *v96; // x24
  UILabel_o *v97; // x22
  int32_t v98; // w2
  int32_t v99; // w3
  System_Collections_Generic_List_GiftEntity__o *v100; // x21
  System_Action_o *v101; // x22
  const MethodInfo *v102; // x4
  __int64 v104; // [xsp+10h] [xbp-70h] BYREF
  int v105; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_48E668E & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_int__TypeInfo, giftIds);
    sub_1B00CCC(&System_Action_TypeInfo, v14);
    sub_1B00CCC(&AtlasManager_TypeInfo, v15);
    sub_1B00CCC(&Method_BasicHelper_ForEach_int___, v16);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v17);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UISprite___, v18);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____74599744, v19);
    sub_1B00CCC(&GiftEntity_TypeInfo, v20);
    sub_1B00CCC(&int_TypeInfo, v21);
    sub_1B00CCC(&long_TypeInfo, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GiftEntity__Add__, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__Clear__, v24);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v25);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject___ctor__, v26);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v27);
    sub_1B00CCC(&System_Collections_Generic_List_GameObject__TypeInfo, v28);
    sub_1B00CCC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v29);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v30);
    sub_1B00CCC(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__, v31);
    sub_1B00CCC(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__, v32);
    sub_1B00CCC(&RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo, v33);
    sub_1B00CCC(&StringLiteral_13225/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v34);
    sub_1B00CCC(&StringLiteral_10847/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, v35);
    sub_1B00CCC(&StringLiteral_10851/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, v36);
    sub_1B00CCC(&StringLiteral_857/*"+"*/, v37);
    sub_1B00CCC(&StringLiteral_10845/*"RECIPE_EVENT_GET_POINT_NUM"*/, v38);
    sub_1B00CCC(&StringLiteral_23710/*"treasurechest_btn"*/, v39);
    sub_1B00CCC(&StringLiteral_13224/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v40);
    sub_1B00CCC(&StringLiteral_2917/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v41);
    sub_1B00CCC(&StringLiteral_23716/*"treasurechest_img_bg_reward"*/, v42);
    sub_1B00CCC(&StringLiteral_10852/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v43);
    byte_48E668E = 1;
  }
  v44 = sub_1B00F18(RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_53;
  *(_QWORD *)(v44 + 24) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v44 + 24), (int32_t)this, v47, v48);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_53;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23710/*"treasurechest_btn"*/, 0LL);
  this->fields.getEffect = getEffect;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.getEffect, (int32_t)getEffect, v50, v51);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v52 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v52;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.resultItemObjList, (int32_t)v52, v53, v54);
  v55 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v55;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.resultIconHideObjList, (int32_t)v55, v56, v57);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
  {
    size = teaEffectObjList->fields._size;
    v60 = teaEffectObjList->fields._version + 1;
    teaEffectObjList->fields._size = 0;
    teaEffectObjList->fields._version = v60;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10847/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0LL);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventRecipeEntity->fields.eventPointItemId, 0LL);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23716/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23716/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_53;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23710/*"treasurechest_btn"*/, 0LL);
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
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10852/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_53;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10845/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_53;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_2917/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v105 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105, v69, v70, v71);
  v73 = System_String__Format(v68, v72, 0LL);
  viewChangeButton = (int *)System_String__Concat_60325748((System_String_o *)StringLiteral_857/*"+"*/, v73, 0LL);
  if ( !getNumLabel )
    goto LABEL_53;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !eventRecipeGiftEntity )
    goto LABEL_53;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v76 = EventPointNoGroup;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10851/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_53;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_2917/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v104 = v76;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v104, v79, v80, v81);
  viewChangeButton = (int *)System_String__Format(v78, v82, 0LL);
  if ( !totalNumLabel )
    goto LABEL_53;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v83 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v44 + 16) = v83;
  v84 = (void **)(v44 + 16);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v44 + 16), (int32_t)v83, v85, v86);
  v87 = (GiftEntity_o *)sub_1B00F18(GiftEntity_TypeInfo);
  GiftEntity___ctor(v87, 0LL);
  if ( !v87 )
    goto LABEL_53;
  v87->fields.type = 2;
  v87->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v87->fields.num = eventRecipeEntity->fields.eventPointNum * giftIds->max_length;
  viewChangeButton = (int *)*v84;
  if ( !*v84 )
    goto LABEL_53;
  v90 = *((_QWORD *)viewChangeButton + 2);
  v91 = Method_System_Collections_Generic_List_GiftEntity__Add__;
  ++viewChangeButton[7];
  if ( !v90 )
    goto LABEL_53;
  v92 = viewChangeButton[6];
  if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)viewChangeButton,
      (Il2CppObject *)v87,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = v90 + 8 * v92;
    viewChangeButton[6] = v92 + 1;
    *(_QWORD *)(v93 + 32) = v87;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v93 + 32), (int32_t)v87, v88, v89);
  }
  v94 = (System_Action_int__o *)sub_1B00F18(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v94,
    (Il2CppObject *)v44,
    Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v94,
    (const MethodInfo_2D4FB4C *)Method_BasicHelper_ForEach_int___);
  v95 = *(_QWORD *)(v44 + 16);
  if ( !v95 )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v95 + 24);
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
  v96 = &StringLiteral_13224/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( pointRewards && pointRewards->max_length )
    v96 = &StringLiteral_13225/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = (int *)this->fields.closeButton;
  if ( !viewChangeButton
    || (viewChangeButton = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL)) == 0LL
    || (viewChangeButton = (int *)UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)viewChangeButton,
                                    1,
                                    (const MethodInfo_2D5A1A0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____74599744)) == 0LL )
  {
LABEL_53:
    sub_1B00F28(viewChangeButton, v46);
  }
  if ( !viewChangeButton[6] )
LABEL_54:
    sub_1B00F30(viewChangeButton, v46);
  v97 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)*v96, 0LL);
  if ( !v97 )
    goto LABEL_53;
  UILabel__set_text(v97, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v98, v99);
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v100 = *(System_Collections_Generic_List_GiftEntity__o **)(v44 + 16);
  v101 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v101,
    (Il2CppObject *)v44,
    Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__,
    0LL);
  RecipeRewardDialogComponent__SetResultData(this, v100, eventRecipeEntity, v101, v102);
}


void __fastcall RecipeRewardDialogComponent__SetResultData(
        RecipeRewardDialogComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftList,
        EventRecipeEntity_o *eventRecipeEntity,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  UnityEngine_Component_o *scrollView; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  System_Action_object__o *v21; // x22

  if ( (byte_48E668F & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_GiftEntity__TypeInfo, giftList);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIGrid___, v9);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GiftEntity__ForEach__, v11);
    sub_1B00CCC(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__, v12);
    sub_1B00CCC(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, v13);
    byte_48E668F = 1;
  }
  v14 = sub_1B00F18(RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = eventRecipeEntity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)eventRecipeEntity, v19, v20);
  v21 = (System_Action_object__o *)sub_1B00F18(System_Action_GiftEntity__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__,
    0LL);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Action_T__o *)v21,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0LL
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
          scrollView,
          scrollView->klass[1]._1.declaringType),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_1B00F28(scrollView, v16);
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
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E6690 & 1) == 0 )
  {
    sub_1B00CCC(&RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo, method);
    byte_48E6690 = 1;
  }
  v3 = sub_1B00F18(RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall RecipeRewardDialogComponent__StartRewardAction(
        RecipeRewardDialogComponent_o *this,
        RecipeRewardDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E6691 & 1) == 0 )
  {
    sub_1B00CCC(&RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo, rewardAction);
    byte_48E6691 = 1;
  }
  v5 = sub_1B00F18(RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)rewardAction, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_48E6696 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E6696 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B00F28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecipeRewardDialogComponent_GetEffect___ctor(
        RecipeRewardDialogComponent_GetEffect_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1950330;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1B00D84(v6);
        v12 = sub_1B01240(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_195042C;
          else
            v9 = (Il2CppObject *)sub_19503F0;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_195036C;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1950340;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1950310;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19502C0;
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
  return (System_IAsyncResult_o *)sub_1B00C80(this, &v6, callback, object);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_1B00C84(result, 0LL, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  RecipeRewardDialogComponent__StartDisp_d__44_o *v4; // x19
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  bool result; // w0
  int listRewardAction_5__2_high; // w8
  int32_t maxPlayCnt; // w9
  int v27; // w21
  UIProgressBar_o *v28; // x20
  float value; // s0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  int v33; // w8
  System_Collections_Generic_List_object__o *v34; // x22
  RecipeRewardDialogComponent__StartDisp_d__44_o **p_listRewardAction_5__2; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  int v38; // w23
  __int64 v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 _2__current_low; // x10
  __int64 v45; // x8
  int _2__current; // w9
  int32_t v47; // w22
  RecipeRewardDialogComponent__StartDisp_d__44_o *v48; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v50; // x2
  System_Collections_IEnumerator_o *started; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t playCnt; // w8
  int32_t v55; // w21
  int32_t v56; // w19
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_48E669E & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15);
    sub_1B00CCC(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo, v16);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v17);
    sub_1B00CCC(&RecipeRewardDialogComponent_RewardAction_TypeInfo, v18);
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)sub_1B00CCC(&UnityEngine_WaitForSeconds_TypeInfo, v19);
    byte_48E669E = 1;
  }
  memset(&v62, 0, sizeof(v62));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v21 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v21, 0.3, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v21;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v21, v22, v23);
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_19;
    case 2:
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v4->fields._listRewardAction_5__2;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_59;
      goto LABEL_37;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_59;
      listRewardAction_5__2_high = HIDWORD(this->fields._listRewardAction_5__2);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.scrollBar;
      v27 = maxPlayCnt % listRewardAction_5__2_high
          ? maxPlayCnt / listRewardAction_5__2_high + 1
          : maxPlayCnt / listRewardAction_5__2_high;
      if ( !this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v28 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v28, (float)(1.0 / (float)((float)((float)v27 * 0.5) + -1.0)) + value, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B00C70(p__2__current, 0, v31, v32);
      v33 = 4;
      goto LABEL_76;
    case 4:
      v4->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v4->fields._listRewardAction_5__2 = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields._listRewardAction_5__2, 0, v2, v3);
LABEL_19:
    v34 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    v4->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__o *)v34;
    p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__44_o **)&v4->fields._listRewardAction_5__2;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields._listRewardAction_5__2, (int32_t)v34, v36, v37);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v38 = 0;
      do
      {
        if ( v38 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v39 = sub_1B00F18(RecipeRewardDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v39, 0LL);
        if ( !v39 )
          goto LABEL_59;
        *(_DWORD *)(v39 + 16) = v38;
        *(_DWORD *)(v39 + 20) = v38 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v42 = *(_QWORD *)&this->fields.__1__state;
        v43 = Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v42 )
          goto LABEL_59;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v42 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v39,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = v42 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v45 + 32) = v39;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v45 + 32), v39, v40, v41);
        }
        ++v38;
      }
      while ( v38 < _4__this->fields.maxItemDrawNum );
    }
    this = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_59;
    _2__current = (int)this->fields.__2__current;
    _4__this->fields.playCnt += _2__current;
    if ( _2__current >= 1 )
    {
      v47 = 0;
      do
      {
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   v47,
                                                                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v48 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v47,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        started = RecipeRewardDialogComponent__StartRewardAction(
                    _4__this,
                    (RecipeRewardDialogComponent_RewardAction_o *)Item,
                    v50);
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_MonoBehaviour__StartCoroutine_68062928(
                                                                   (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                   started,
                                                                   0LL);
        if ( !v48 )
          goto LABEL_59;
        v48->fields.__4__this = (struct RecipeRewardDialogComponent_o *)this;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v48->fields.__4__this, (int32_t)this, v52, v53);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v47 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)this,
                                                               LODWORD(this->fields.__2__current) - 1,
                                                               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
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
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v4->fields._listRewardAction_5__2;
      if ( this )
      {
        v55 = 0;
        while ( v55 < SLODWORD(this->fields.__2__current) )
        {
          this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v55,
                                                                     (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_68063548(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0LL);
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v4->fields._listRewardAction_5__2;
            ++v55;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v56 = 0;
          while ( v56 < SLODWORD(this->fields.__2__current) )
          {
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v56,
                                                                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
              ++v56;
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
                                                                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
                    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v62,
                            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v62.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
                    {
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      UnityEngine_Object__Destroy_68077656((UnityEngine_Object_o *)current, 0LL);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v62,
                    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1B00F28(this, method);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v59 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v59, scrollWait, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v59;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B00C70(p__2__current, (int32_t)v59, v60, v61);
      v33 = 3;
      goto LABEL_76;
    }
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B00C70(p__2__current, 0, v2, v3);
  v33 = 2;
LABEL_76:
  *(_DWORD *)&p__2__current[-1].fields.isMine = v33;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_RecipeRewardDialogComponent__StartDisp_d__44_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v8; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v9; // x8
  bool result; // w0
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *v12; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v14; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  struct RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  Il2CppObject *Item; // x0
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v20; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v21; // x8
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v22; // x21
  int v23; // s0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 _2__current_low; // x10
  __int64 v31; // x8
  float v32; // s8
  UnityEngine_WaitForSeconds_o *v33; // x20
  ServantStatusBattleListViewItem_o *v34; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_48E669F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)sub_1B00CCC(
                                                                       &UnityEngine_WaitForSeconds_TypeInfo,
                                                                       v4);
    byte_48E669F = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_40;
    if ( !_4__this->fields.isSkip )
    {
      _4__this->fields.canSkip = 1;
      rewardAction = v2->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_40;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_40;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this,
                                                                         rewardAction->fields.playCnt,
                                                                         (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v8 = v2->fields.rewardAction;
    if ( v8 )
    {
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           v8->fields.playCnt,
                                                                           (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v9 = v2->fields.rewardAction;
          if ( v9 )
          {
            result = 0;
            v9->fields.isEnd = 1;
            return result;
          }
        }
      }
    }
LABEL_40:
    sub_1B00F28(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v2->fields._i_5__2;
    v2->fields.__1__state = -1;
    _1__state = i_5__2 + 1;
    v2->fields._i_5__2 = _1__state;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v2->fields._i_5__2 = 0;
  }
  v12 = v2->fields.rewardAction;
  if ( !v12 || !_4__this )
    goto LABEL_40;
  if ( _1__state < v12->fields.index )
  {
    itemDispWaitTime = _4__this->fields.itemDispWaitTime;
    v14 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v14, itemDispWaitTime, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v14;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
    sub_1B00C70(p__2__current, (int32_t)v14, v16, v17);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_40;
  getEffect = _4__this->fields.getEffect;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this,
           v12->fields.playCnt,
           (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
  v20 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL);
  v21 = v2->fields.rewardAction;
  if ( !v21 )
    goto LABEL_40;
  v22 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v21->fields.playCnt,
                                                                     (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v22 )
    goto LABEL_40;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)v20,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  v37.fields.x = 1.25;
  v37.fields.y = 1.25;
  v37.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v37, 0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.teaEffectObjList;
  if ( !this )
    goto LABEL_40;
  v28 = *(_QWORD *)&this->fields.__1__state;
  v29 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v28 )
    goto LABEL_40;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v28 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v20,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = v28 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v31 + 32) = v20;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v20, v26, v27);
  }
  v32 = _4__this->fields.itemDispWaitTime;
  v33 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v33, v32, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v33;
  v34 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B00C70(v34, (int32_t)v33, v35, v36);
  *(_DWORD *)&v34[-1].fields.isMine = 2;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_RecipeRewardDialogComponent__StartRewardAction_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E6698 & 1) == 0 )
  {
    sub_1B00CCC(&RecipeRewardDialogComponent___c_TypeInfo, v1);
    byte_48E6698 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(RecipeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecipeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct RecipeRewardDialogComponent___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)RecipeRewardDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  if ( (byte_48E6699 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, x);
    byte_48E6699 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68077656((UnityEngine_Object_o *)x, 0LL);
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
  __int64 v6; // x1
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x20
  GiftEntity_array *Instance; // x0
  __int64 v9; // x1

  if ( (byte_48E669A & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&id);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_48E669A = 1;
  }
  giftList = this->fields.giftList;
  Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (GiftEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL
    || (Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0LL), !giftList) )
  {
    sub_1B00F28(Instance, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent___c__DisplayClass42_0_o *v2; // x19
  __int64 v3; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  int32_t v6; // w2
  int32_t v7; // w3

  v2 = this;
  if ( (byte_48E669B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)sub_1B00CCC(
                                                                    &Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__,
                                                                    v3);
    byte_48E669B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(this, method);
  _4__this->fields.state = 2;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  BaseDialog__Open((BaseDialog_o *)_4__this, _9__2, 0, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_48E669C & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_12740/*"StartDisp"*/, method);
    byte_48E669C = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(0LL, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_12740/*"StartDisp"*/, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  Il2CppObject *prefabResultItem; // x20
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v14; // x20
  struct RecipeRewardDialogComponent_o *v15; // x8
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v16; // x22
  struct RecipeRewardDialogComponent_o *v17; // x8
  ItemIconComponent_o *v18; // x22
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  struct RecipeRewardDialogComponent_o *v22; // x8
  struct RecipeRewardDialogComponent_o *v23; // x8
  _QWORD *v24; // x9
  __int64 eventRecipeEntity_low; // x10
  RecipeRewardDialogComponent_c **v26; // x8
  struct RecipeRewardDialogComponent_o *v27; // x8
  Il2CppObject *prefabTeaItem; // x21
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v29; // x21
  struct RecipeRewardDialogComponent_o *v30; // x8
  UnityEngine_Transform_o *transform; // x22
  int v32; // s0
  struct RecipeRewardDialogComponent_o *v35; // x8
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UISprite_o *v40; // x20
  int32_t eventId; // w22
  Il2CppObject *v42; // x0
  System_String_o *v43; // x23
  int32_t v44; // w2
  int32_t v45; // w3
  struct RecipeRewardDialogComponent_o *v46; // x8
  struct RecipeRewardDialogComponent_o *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  RecipeRewardDialogComponent_c **v50; // x8
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_48E669D & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, gift);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1B00CCC(&int_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v10);
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1B00CCC(&StringLiteral_19924/*"icon_{0}"*/, v11);
    byte_48E669D = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  prefabResultItem = (Il2CppObject *)_4__this->fields.prefabResultItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabResultItem,
                                                                  (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v14 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 || !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v15->fields.listRoot, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  0LL);
  v16 = this;
  if ( !byte_48DD9F1 )
  {
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, gift);
    byte_48DD9F1 = 1;
  }
  if ( !v16 )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  0LL);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v52.fields.x = v17->fields.iconScale;
  v52.fields.y = v52.fields.x;
  v52.fields.z = v52.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v52, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_45;
  v18 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_45;
  v19 = gift->fields.num <= 1 ? -1 : gift->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, gift->fields.type, gift->fields.objectId, v19, 0, 0LL);
  ItemIconComponent__CalcSetPossession(v18, gift->fields.type, gift->fields.objectId, 0LL);
  v22 = v4->fields.__4__this;
  if ( !v22 )
    goto LABEL_45;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v22->fields.resultItemObjList;
  if ( !this )
    goto LABEL_45;
  v23 = this->fields.__4__this;
  v24 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.eventRecipeEntity);
  if ( !v23 )
    goto LABEL_45;
  eventRecipeEntity_low = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)eventRecipeEntity_low >= LODWORD(v23->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v14,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->klass + eventRecipeEntity_low;
    LODWORD(this->fields.eventRecipeEntity) = eventRecipeEntity_low + 1;
    v26[4] = (RecipeRewardDialogComponent_c *)v14;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v14, v20, v21);
  }
  v27 = v4->fields.__4__this;
  if ( !v27 )
    goto LABEL_45;
  prefabTeaItem = (Il2CppObject *)v27->fields.prefabTeaItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v29 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v30 = v4->fields.__4__this;
  if ( !v30 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v30->fields.iconListRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  0LL);
  if ( !this )
    goto LABEL_45;
  *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v29,
                                                                  0LL);
  v35 = v4->fields.__4__this;
  if ( !v35 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v53.fields.x = v35->fields.iconScale;
  v53.fields.y = v53.fields.x;
  v53.fields.z = v53.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v53, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v29,
                                                                  (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v4->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_45;
  v40 = (UISprite_o *)this;
  eventId = eventRecipeEntity->fields.eventId;
  iconId = eventRecipeEntity->fields.iconId;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v36, v37, v38);
  v43 = System_String__Format((System_String_o *)StringLiteral_19924/*"icon_{0}"*/, v42, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_36656832(eventId, v40, v43, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v29, 1, 0LL);
  v46 = v4->fields.__4__this;
  if ( !v46
    || (this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v46->fields.resultIconHideObjList) == 0LL
    || (v47 = this->fields.__4__this,
        v48 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.eventRecipeEntity),
        !v47) )
  {
LABEL_45:
    sub_1B00F28(this, gift);
  }
  v49 = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)v49 >= LODWORD(v47->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v29,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &v47->klass + v49;
    LODWORD(this->fields.eventRecipeEntity) = v49 + 1;
    v50[4] = (RecipeRewardDialogComponent_c *)v29;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v29, v44, v45);
  }
}