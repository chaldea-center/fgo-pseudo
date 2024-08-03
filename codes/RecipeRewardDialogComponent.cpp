void __fastcall RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_Color_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0039E & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Color___TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4A0039E = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1B64170(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v6, v7, v8);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.teaEffectObjList, (int32_t)v11, v12, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v8; // x0
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v10; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A00399 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ForEach__, v4);
    sub_1B640C8(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__, v5);
    sub_1B640C8(&RecipeRewardDialogComponent___c_TypeInfo, v6);
    byte_4A00399 = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v8 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo);
      v8 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    _9__46_0 = (System_Action_object__o *)v8->static_fields->__9__46_0;
    if ( !_9__46_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = RecipeRewardDialogComponent___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__46_0 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, method, v2);
      System_Action_object____ctor(_9__46_0, v10, Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__, 0LL);
      static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_0 = (struct System_Action_GameObject__o *)_9__46_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__46_0, (int32_t)_9__46_0, v12, v13);
    }
    if ( !teaEffectObjList )
      sub_1B64324(v8);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)teaEffectObjList,
      (System_Action_T__o *)_9__46_0,
      (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
}


void __fastcall RecipeRewardDialogComponent__EndClose(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4A0039B & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    byte_4A0039B = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall RecipeRewardDialogComponent__Init(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A0039A & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_RecipeRewardDialogComponent_EndClose__, v9);
    sub_1B640C8(&Method_RecipeRewardDialogComponent_OnClickCloseButton__, v10);
    byte_4A0039A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
    v11 = Method_RecipeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B640E0(Method_RecipeRewardDialogComponent_OnClickCloseButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v18.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v14; // x8
  UISprite_o *v15; // x20
  System_String_o *normalSprite; // x21
  __int64 v17; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v24; // w20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0039C & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B640C8(&Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__, v7);
    sub_1B640C8(&StringLiteral_23966/*"treasurechest_btn"*/, v8);
    sub_1B640C8(&StringLiteral_23968/*"treasurechest_btn_on"*/, v9);
    byte_4A0039C = 1;
  }
  v10 = Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B640E0(Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v14 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23966/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23968/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v14, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v15 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v15, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1B64324(viewChangeButton);
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
    sub_1B6432C(viewChangeButton, v17);
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
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *Component_object; // x27
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_object__o *v53; // x26
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_List_object__o *v58; // x26
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x8
  int32_t size; // w2
  int v63; // w9
  UILabel_o *titleLabel; // x26
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  __int64 v67; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v72; // x27
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  __int64 v77; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v79; // x27
  Il2CppObject *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  System_Collections_Generic_List_object__o *v83; // x25
  void **v84; // x26
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x1
  __int64 v88; // x2
  GiftEntity_o *v89; // x25
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  __int64 v96; // x1
  __int64 v97; // x2
  System_Action_int__o *v98; // x25
  __int64 v99; // x8
  __int64 *v100; // x24
  UILabel_o *v101; // x22
  int32_t v102; // w2
  int32_t v103; // w3
  System_Collections_Generic_List_GiftEntity__o *v104; // x21
  __int64 v105; // x1
  __int64 v106; // x2
  System_Action_o *v107; // x22
  const MethodInfo *v108; // x4
  __int64 v110; // [xsp+10h] [xbp-70h] BYREF
  int v111; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A00395 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, giftIds);
    sub_1B640C8(&System_Action_TypeInfo, v14);
    sub_1B640C8(&AtlasManager_TypeInfo, v15);
    sub_1B640C8(&Method_BasicHelper_ForEach_int___, v16);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v17);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v18);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75728136, v19);
    sub_1B640C8(&GiftEntity_TypeInfo, v20);
    sub_1B640C8(&int_TypeInfo, v21);
    sub_1B640C8(&long_TypeInfo, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v27);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v28);
    sub_1B640C8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v29);
    sub_1B640C8(&LocalizationManager_TypeInfo, v30);
    sub_1B640C8(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__, v31);
    sub_1B640C8(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__, v32);
    sub_1B640C8(&RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo, v33);
    sub_1B640C8(&StringLiteral_13378/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v34);
    sub_1B640C8(&StringLiteral_10931/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, v35);
    sub_1B640C8(&StringLiteral_10935/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, v36);
    sub_1B640C8(&StringLiteral_861/*"+"*/, v37);
    sub_1B640C8(&StringLiteral_10929/*"RECIPE_EVENT_GET_POINT_NUM"*/, v38);
    sub_1B640C8(&StringLiteral_23966/*"treasurechest_btn"*/, v39);
    sub_1B640C8(&StringLiteral_13377/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v40);
    sub_1B640C8(&StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v41);
    sub_1B640C8(&StringLiteral_23972/*"treasurechest_img_bg_reward"*/, v42);
    sub_1B640C8(&StringLiteral_10936/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, v43);
    byte_4A00395 = 1;
  }
  v44 = sub_1B64314(RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo, giftIds, pointRewards);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_53;
  *(_QWORD *)(v44 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 24), (int32_t)this, v46, v47);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_53;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23966/*"treasurechest_btn"*/, 0LL);
  this->fields.getEffect = getEffect;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.getEffect, (int32_t)getEffect, v49, v50);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v53 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v51,
                                                       v52);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v53;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultItemObjList, (int32_t)v53, v54, v55);
  v58 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultIconHideObjList, (int32_t)v58, v59, v60);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
  {
    size = teaEffectObjList->fields._size;
    v63 = teaEffectObjList->fields._version + 1;
    teaEffectObjList->fields._size = 0;
    teaEffectObjList->fields._version = v63;
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
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10931/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0LL);
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
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_23972/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_53;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23966/*"treasurechest_btn"*/, 0LL);
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
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10936/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_53;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10929/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0LL);
  if ( !getTitleLabel )
    goto LABEL_53;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  getNumLabel = this->fields.getNumLabel;
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v111 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v111);
  v74 = System_String__Format(v72, v73, 0LL);
  viewChangeButton = (int *)System_String__Concat_61375396((System_String_o *)StringLiteral_861/*"+"*/, v74, 0LL);
  if ( !getNumLabel )
    goto LABEL_53;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0LL);
  if ( !eventRecipeGiftEntity )
    goto LABEL_53;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0LL);
  totalTitleLabel = this->fields.totalTitleLabel;
  v77 = EventPointNoGroup;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10935/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  if ( !totalTitleLabel )
    goto LABEL_53;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0LL);
  totalNumLabel = this->fields.totalNumLabel;
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v110 = v77;
  v80 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v110);
  viewChangeButton = (int *)System_String__Format(v79, v80, 0LL);
  if ( !totalNumLabel )
    goto LABEL_53;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0LL);
  v83 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                       v81,
                                                       v82);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  *(_QWORD *)(v44 + 16) = v83;
  v84 = (void **)(v44 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 16), (int32_t)v83, v85, v86);
  v89 = (GiftEntity_o *)sub_1B64314(GiftEntity_TypeInfo, v87, v88);
  GiftEntity___ctor(v89, 0LL);
  if ( !v89 )
    goto LABEL_53;
  v89->fields.type = 2;
  v89->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v89->fields.num = eventRecipeEntity->fields.eventPointNum * giftIds->max_length;
  viewChangeButton = (int *)*v84;
  if ( !*v84 )
    goto LABEL_53;
  v92 = *((_QWORD *)viewChangeButton + 2);
  v93 = Method_System_Collections_Generic_List_GiftEntity__Add__;
  ++viewChangeButton[7];
  if ( !v92 )
    goto LABEL_53;
  v94 = viewChangeButton[6];
  if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)viewChangeButton,
      (Il2CppObject *)v89,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v95 = v92 + 8 * v94;
    viewChangeButton[6] = v94 + 1;
    *(_QWORD *)(v95 + 32) = v89;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v95 + 32), (int32_t)v89, v90, v91);
  }
  v98 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v96, v97);
  System_Action_int____ctor(
    v98,
    (Il2CppObject *)v44,
    Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__,
    0LL);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v98,
    (const MethodInfo_2E25F48 *)Method_BasicHelper_ForEach_int___);
  v99 = *(_QWORD *)(v44 + 16);
  if ( !v99 )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.scrollBar;
  this->fields.maxPlayCnt = *(_DWORD *)(v99 + 24);
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
  v100 = &StringLiteral_13377/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( pointRewards && pointRewards->max_length )
    v100 = &StringLiteral_13378/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = (int *)this->fields.closeButton;
  if ( !viewChangeButton
    || (viewChangeButton = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0LL)) == 0LL
    || (viewChangeButton = (int *)UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)viewChangeButton,
                                    1,
                                    (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75728136)) == 0LL )
  {
LABEL_53:
    sub_1B64324(viewChangeButton);
  }
  if ( !viewChangeButton[6] )
LABEL_54:
    sub_1B6432C(viewChangeButton, v67);
  v101 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)*v100, 0LL);
  if ( !v101 )
    goto LABEL_53;
  UILabel__set_text(v101, (System_String_o *)viewChangeButton, 0LL);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v102, v103);
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v104 = *(System_Collections_Generic_List_GiftEntity__o **)(v44 + 16);
  v107 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v105, v106);
  System_Action___ctor(
    v107,
    (Il2CppObject *)v44,
    Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__,
    0LL);
  RecipeRewardDialogComponent__SetResultData(this, v104, eventRecipeEntity, v107, v108);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_object__o *v22; // x22

  if ( (byte_4A00396 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GiftEntity__TypeInfo, giftList);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, v9);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIScrollView___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__ForEach__, v11);
    sub_1B640C8(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__, v12);
    sub_1B640C8(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, v13);
    byte_4A00396 = 1;
  }
  v14 = sub_1B64314(RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo, giftList, eventRecipeEntity);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v14 + 24) = eventRecipeEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)eventRecipeEntity, v18, v19);
  v22 = (System_Action_object__o *)sub_1B64314(System_Action_GiftEntity__TypeInfo, v20, v21);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__,
    0LL);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Action_T__o *)v22,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0LL
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.castClass)(
          scrollView,
          scrollView->klass[1]._1.declaringType),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0LL)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
  {
LABEL_12:
    sub_1B64324(scrollView);
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
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A00397 & 1) == 0 )
  {
    sub_1B640C8(&RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo, method);
    byte_4A00397 = 1;
  }
  v4 = sub_1B64314(RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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

  if ( (byte_4A00398 & 1) == 0 )
  {
    sub_1B640C8(&RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo, rewardAction);
    byte_4A00398 = 1;
  }
  v5 = sub_1B64314(RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo, rewardAction, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)rewardAction, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4A0039D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A0039D = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19B1274;
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
        v11 = sub_1B64180(v6);
        v12 = sub_1B6463C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19B1370;
          else
            v9 = (Il2CppObject *)sub_19B1334;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19B12B0;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19B1284;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19B1254;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B1204;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


UnityEngine_GameObject_o *__fastcall RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
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
  __int64 v38; // x1
  __int64 v39; // x2
  int v40; // w23
  __int64 v41; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 _2__current_low; // x10
  __int64 v47; // x8
  int _2__current; // w9
  int32_t v49; // w22
  RecipeRewardDialogComponent__StartDisp_d__44_o *v50; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v52; // x2
  System_Collections_IEnumerator_o *started; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  int32_t playCnt; // w8
  int32_t v58; // w21
  int32_t v59; // w19
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v62; // x20
  int32_t v63; // w2
  int32_t v64; // w3
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4A003A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIScrollBar___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15);
    sub_1B640C8(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&RecipeRewardDialogComponent_RewardAction_TypeInfo, v18);
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v19);
    byte_4A003A5 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v21 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v21, 0.3, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v21, v22, v23);
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
                                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
                                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v28 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      UIProgressBar__set_value(v28, (float)(1.0 / (float)((float)((float)v27 * 0.5) + -1.0)) + value, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, 0, v31, v32);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._listRewardAction_5__2, 0, v2, v3);
LABEL_19:
    v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    v4->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__o *)v34;
    p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__44_o **)&v4->fields._listRewardAction_5__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._listRewardAction_5__2, (int32_t)v34, v36, v37);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v40 = 0;
      do
      {
        if ( v40 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v41 = sub_1B64314(RecipeRewardDialogComponent_RewardAction_TypeInfo, v38, v39);
        System_Object___ctor((Il2CppObject *)v41, 0LL);
        if ( !v41 )
          goto LABEL_59;
        *(_DWORD *)(v41 + 16) = v40;
        *(_DWORD *)(v41 + 20) = v40 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v44 = *(_QWORD *)&this->fields.__1__state;
        v45 = Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v44 )
          goto LABEL_59;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v44 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v41,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = v44 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v47 + 32) = v41;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 32), v41, v42, v43);
        }
        ++v40;
      }
      while ( v40 < _4__this->fields.maxItemDrawNum );
    }
    this = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_59;
    _2__current = (int)this->fields.__2__current;
    _4__this->fields.playCnt += _2__current;
    if ( _2__current >= 1 )
    {
      v49 = 0;
      do
      {
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   v49,
                                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v50 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v49,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        started = RecipeRewardDialogComponent__StartRewardAction(
                    _4__this,
                    (RecipeRewardDialogComponent_RewardAction_o *)Item,
                    v52);
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                                   (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                   started,
                                                                   0LL);
        if ( !v50 )
          goto LABEL_59;
        v50->fields.__4__this = (struct RecipeRewardDialogComponent_o *)this;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->fields.__4__this, (int32_t)this, v54, v55);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v49 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)this,
                                                               LODWORD(this->fields.__2__current) - 1,
                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
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
        v58 = 0;
        while ( v58 < SLODWORD(this->fields.__2__current) )
        {
          this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v58,
                                                                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_69113628(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0LL);
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v4->fields._listRewardAction_5__2;
            ++v58;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v59 = 0;
          while ( v59 < SLODWORD(this->fields.__2__current) )
          {
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v59,
                                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
              ++v59;
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
                                                                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
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
                    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v65,
                            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v65.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
                    {
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v65,
                    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1B64324(this);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v62 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v56, v2);
      UnityEngine_WaitForSeconds___ctor(v62, scrollWait, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v62;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v62, v63, v64);
      v33 = 3;
      goto LABEL_76;
    }
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(p__2__current, 0, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_RecipeRewardDialogComponent__StartDisp_d__44_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v9; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v10; // x8
  bool result; // w0
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *v13; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  struct RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  Il2CppObject *Item; // x0
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v21; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v22; // x8
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v23; // x21
  int v24; // s0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 _2__current_low; // x10
  __int64 v32; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  float v35; // s8
  UnityEngine_WaitForSeconds_o *v36; // x20
  ServantStatusBattleListViewItem_o *v37; // x19
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4A003A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)sub_1B640C8(
                                                                       &UnityEngine_WaitForSeconds_TypeInfo,
                                                                       v5);
    byte_4A003A6 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_40;
    if ( !_4__this->fields.isSkip )
    {
      _4__this->fields.canSkip = 1;
      rewardAction = v3->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_40;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultIconHideObjList;
      if ( !this )
        goto LABEL_40;
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this,
                                                                         rewardAction->fields.playCnt,
                                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    v9 = v3->fields.rewardAction;
    if ( v9 )
    {
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           v9->fields.playCnt,
                                                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v10 = v3->fields.rewardAction;
          if ( v10 )
          {
            result = 0;
            v10->fields.isEnd = 1;
            return result;
          }
        }
      }
    }
LABEL_40:
    sub_1B64324(this);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v3->fields._i_5__2;
    v3->fields.__1__state = -1;
    _1__state = i_5__2 + 1;
    v3->fields._i_5__2 = _1__state;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    v3->fields._i_5__2 = 0;
  }
  v13 = v3->fields.rewardAction;
  if ( !v13 || !_4__this )
    goto LABEL_40;
  if ( _1__state < v13->fields.index )
  {
    itemDispWaitTime = _4__this->fields.itemDispWaitTime;
    v15 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v15, itemDispWaitTime, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v15;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
    sub_1B6406C(p__2__current, (int32_t)v15, v17, v18);
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
           v13->fields.playCnt,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
  v21 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL);
  v22 = v3->fields.rewardAction;
  if ( !v22 )
    goto LABEL_40;
  v23 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v22->fields.playCnt,
                                                                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v23 )
    goto LABEL_40;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)v21,
                                                                     0LL);
  if ( !this )
    goto LABEL_40;
  v40.fields.x = 1.25;
  v40.fields.y = 1.25;
  v40.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v40, 0LL);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.teaEffectObjList;
  if ( !this )
    goto LABEL_40;
  v29 = *(_QWORD *)&this->fields.__1__state;
  v30 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v29 )
    goto LABEL_40;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v29 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v21,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = v29 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v32 + 32) = v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v21, v27, v28);
  }
  v35 = _4__this->fields.itemDispWaitTime;
  v36 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v33, v34);
  UnityEngine_WaitForSeconds___ctor(v36, v35, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v36;
  v37 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(v37, (int32_t)v36, v38, v39);
  *(_DWORD *)&v37[-1].fields.isMine = 2;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_RecipeRewardDialogComponent__StartRewardAction_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A0039F & 1) == 0 )
  {
    sub_1B640C8(&RecipeRewardDialogComponent___c_TypeInfo, v1);
    byte_4A0039F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RecipeRewardDialogComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RecipeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct RecipeRewardDialogComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RecipeRewardDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  if ( (byte_4A003A0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_4A003A0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)x, 0LL);
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

  if ( (byte_4A003A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A003A1 = 1;
  }
  giftList = this->fields.giftList;
  Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (GiftEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL
    || (Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0LL), !giftList) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RecipeRewardDialogComponent___c__DisplayClass42_0_o *v3; // x19
  __int64 v4; // x1
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_4A003A2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)sub_1B640C8(
                                                                    &Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__,
                                                                    v4);
    byte_4A003A2 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  _4__this->fields.state = 2;
  _9__2 = v3->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8);
  }
  BaseDialog__Open((BaseDialog_o *)_4__this, _9__2, 0, 0LL);
}


void __fastcall RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4A003A3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12892/*"StartDisp"*/, method);
    byte_4A003A3 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_12892/*"StartDisp"*/, 0LL);
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
  __int64 v16; // x1
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v17; // x22
  struct RecipeRewardDialogComponent_o *v18; // x8
  ItemIconComponent_o *v19; // x22
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct RecipeRewardDialogComponent_o *v23; // x8
  struct RecipeRewardDialogComponent_o *v24; // x8
  _QWORD *v25; // x9
  __int64 eventRecipeEntity_low; // x10
  RecipeRewardDialogComponent_c **v27; // x8
  struct RecipeRewardDialogComponent_o *v28; // x8
  Il2CppObject *prefabTeaItem; // x21
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v30; // x21
  struct RecipeRewardDialogComponent_o *v31; // x8
  UnityEngine_Transform_o *transform; // x22
  int v33; // s0
  struct RecipeRewardDialogComponent_o *v36; // x8
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UISprite_o *v38; // x20
  int32_t eventId; // w22
  Il2CppObject *v40; // x0
  System_String_o *v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  struct RecipeRewardDialogComponent_o *v44; // x8
  struct RecipeRewardDialogComponent_o *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  RecipeRewardDialogComponent_c **v48; // x8
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A003A4 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, gift);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1B640C8(&StringLiteral_20118/*"icon_{0}"*/, v11);
    byte_4A003A4 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  prefabResultItem = (Il2CppObject *)_4__this->fields.prefabResultItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabResultItem,
                                                                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  v17 = this;
  if ( !byte_49F7111 )
  {
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
    byte_49F7111 = 1;
  }
  if ( !v17 )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  0LL);
  v18 = v4->fields.__4__this;
  if ( !v18 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v50.fields.x = v18->fields.iconScale;
  v50.fields.y = v50.fields.x;
  v50.fields.z = v50.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v50, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_45;
  v19 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_45;
  v20 = gift->fields.num <= 1 ? -1 : gift->fields.num;
  ItemIconComponent__SetGift_37829292(
    (ItemIconComponent_o *)this,
    gift->fields.type,
    gift->fields.objectId,
    v20,
    0,
    0LL);
  ItemIconComponent__CalcSetPossession(v19, gift->fields.type, gift->fields.objectId, 0LL);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_45;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v23->fields.resultItemObjList;
  if ( !this )
    goto LABEL_45;
  v24 = this->fields.__4__this;
  v25 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.eventRecipeEntity);
  if ( !v24 )
    goto LABEL_45;
  eventRecipeEntity_low = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)eventRecipeEntity_low >= LODWORD(v24->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v14,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->klass + eventRecipeEntity_low;
    LODWORD(this->fields.eventRecipeEntity) = eventRecipeEntity_low + 1;
    v27[4] = (RecipeRewardDialogComponent_c *)v14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v14, v21, v22);
  }
  v28 = v4->fields.__4__this;
  if ( !v28 )
    goto LABEL_45;
  prefabTeaItem = (Il2CppObject *)v28->fields.prefabTeaItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v30 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0LL);
  v31 = v4->fields.__4__this;
  if ( !v31 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v31->fields.iconListRoot, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v14,
                                                                  0LL);
  if ( !this )
    goto LABEL_45;
  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v30,
                                                                  0LL);
  v36 = v4->fields.__4__this;
  if ( !v36 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v51.fields.x = v36->fields.iconScale;
  v51.fields.y = v51.fields.x;
  v51.fields.z = v51.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v51, 0LL);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v30,
                                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v4->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_45;
  v38 = (UISprite_o *)this;
  eventId = eventRecipeEntity->fields.eventId;
  iconId = eventRecipeEntity->fields.iconId;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v41 = System_String__Format((System_String_o *)StringLiteral_20118/*"icon_{0}"*/, v40, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37544692(eventId, v38, v41, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v30, 1, 0LL);
  v44 = v4->fields.__4__this;
  if ( !v44
    || (this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v44->fields.resultIconHideObjList) == 0LL
    || (v45 = this->fields.__4__this,
        v46 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.eventRecipeEntity),
        !v45) )
  {
LABEL_45:
    sub_1B64324(this);
  }
  v47 = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v30,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->klass + v47;
    LODWORD(this->fields.eventRecipeEntity) = v47 + 1;
    v48[4] = (RecipeRewardDialogComponent_c *)v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v30, v42, v43);
  }
}