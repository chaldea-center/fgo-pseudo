void RecipeRewardDialogComponent___ctor(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x21

  if ( (byte_4CB08B1 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    sub_1C6BA08(&UnityEngine_Color___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CB08B1 = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1C6BAB0(UnityEngine_Color___TypeInfo, 2);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1C6B9AC(&this->fields.viewChangeButtonLabelEffectColors, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.teaEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C6B9AC(&this->fields.teaEffectObjList, v4);
  this->fields.maxItemDrawNum = 12;
  *(_QWORD *)&this->fields.scrollWait = 0x3D8F5C293EB33333LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecipeRewardDialogComponent__CheckIsSerializeFieldNotNull(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void RecipeRewardDialogComponent__ClickSkip(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x19
  RecipeRewardDialogComponent___c_c *v4; // x0
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v6; // x21
  struct RecipeRewardDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4CB08AC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_GameObject__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C6BA08(&Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__);
    sub_1C6BA08(&RecipeRewardDialogComponent___c_TypeInfo);
    byte_4CB08AC = 1;
  }
  if ( !this->fields.isSkip && this->fields.canSkip )
  {
    this->fields.isSkip = 1;
    teaEffectObjList = this->fields.teaEffectObjList;
    v4 = RecipeRewardDialogComponent___c_TypeInfo;
    if ( !RecipeRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecipeRewardDialogComponent___c_TypeInfo);
      v4 = RecipeRewardDialogComponent___c_TypeInfo;
    }
    _9__46_0 = (System_Action_object__o *)v4->static_fields->__9__46_0;
    if ( !_9__46_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = RecipeRewardDialogComponent___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__46_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__46_0, v6, Method_RecipeRewardDialogComponent___c__ClickSkip_b__46_0__, 0);
      static_fields = RecipeRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_0 = (struct System_Action_GameObject__o *)_9__46_0;
      v4 = (RecipeRewardDialogComponent___c_c *)sub_1C6B9AC(&static_fields->__9__46_0, _9__46_0);
    }
    if ( !teaEffectObjList )
      sub_1C6BC60(v4, method);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)teaEffectObjList,
      (System_Action_T__o *)_9__46_0,
      (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
}


void RecipeRewardDialogComponent__EndClose(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4CB08AE & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_bool___);
    byte_4CB08AE = 1;
  }
  RecipeRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_3085E74 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C6B9AC(&this->fields.closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void RecipeRewardDialogComponent__Init(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecipeRewardDialogComponent__OnClickCloseButton(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v8; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB08AD & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_bool___);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_RecipeRewardDialogComponent_EndClose__);
    sub_1C6BA08(&Method_RecipeRewardDialogComponent_OnClickCloseButton__);
    byte_4CB08AD = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_3085E74 *)Method_ActionExtensions_Call_bool___);
    v3 = Method_RecipeRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_RecipeRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1C6BC60(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecipeRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v8, 0);
  }
}


void RecipeRewardDialogComponent__OnClickSwitchShowMode(RecipeRewardDialogComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v8; // x8
  UISprite_o *v9; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v17; // w20
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB08AF & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1C6BA08(&StringLiteral_24302/*"treasurechest_btn"*/);
    sub_1C6BA08(&StringLiteral_24304/*"treasurechest_btn_on"*/);
    byte_4CB08AF = 1;
  }
  v3 = Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_RecipeRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v8 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24302/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24304/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v8, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v9, normalSprite, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1C6BC60(viewChangeButton, v5);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !viewChangeButton )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1C6BC68(viewChangeButton);
  }
  if ( max_length <= 1 )
    goto LABEL_28;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_26;
LABEL_20:
  v18.fields.a = *p_a;
  v18.fields.b = *p_b;
  v18.fields.g = *p_g;
  v18.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v18, 0);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v17 = 0;
  while ( v17 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v17,
                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession((ItemIconComponent_o *)viewChangeButton, this->fields.isShowPossessionNum, 0);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v17;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void RecipeRewardDialogComponent__Open(
        RecipeRewardDialogComponent_o *this,
        System_Int32_array *giftIds,
        BattleDropItem_array *pointRewards,
        EventRecipeEntity_o *eventRecipeEntity,
        EventRecipeGiftEntity_o *eventRecipeGiftEntity,
        System_Action_o *closeCallback,
        RecipeRewardDialogComponent_GetEffect_o *getEffect,
        const MethodInfo *method)
{
  Il2CppObject *v14; // x23
  int *viewChangeButton; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x27
  System_Collections_Generic_List_object__o *v18; // x26
  System_Collections_Generic_List_object__o *v19; // x26
  struct System_Collections_Generic_List_GameObject__o *teaEffectObjList; // x8
  int32_t size; // w2
  int v22; // w9
  UILabel_o *titleLabel; // x26
  UISprite_o *totalEventPointIcon; // x26
  int32_t eventPointItemId; // w27
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x26
  UILabel_o *getTitleLabel; // x26
  UILabel_o *getNumLabel; // x26
  System_String_o *v30; // x27
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  int64_t EventPointNoGroup; // x0
  UILabel_o *totalTitleLabel; // x25
  int64_t v35; // x26
  UILabel_o *totalNumLabel; // x25
  System_String_o *v37; // x27
  Il2CppObject *v38; // x0
  System_Collections_Generic_List_object__o *v39; // x25
  void **p_klass; // x26
  GiftEntity_o *v41; // x25
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  System_Action_int__o *v46; // x25
  Il2CppClass *klass; // x8
  System_String_o **v48; // x24
  UILabel_o *v49; // x22
  System_Collections_Generic_List_GiftEntity__o *v50; // x21
  System_Action_o *v51; // x22
  const MethodInfo *v52; // x4
  int64_t v54; // [xsp+10h] [xbp-70h] BYREF
  int v55; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CB08A8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_int___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78590920);
    sub_1C6BA08(&GiftEntity_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__);
    sub_1C6BA08(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__);
    sub_1C6BA08(&RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_13543/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_1C6BA08(&StringLiteral_10989/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_10993/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/);
    sub_1C6BA08(&StringLiteral_800/*"+"*/);
    sub_1C6BA08(&StringLiteral_10987/*"RECIPE_EVENT_GET_POINT_NUM"*/);
    sub_1C6BA08(&StringLiteral_24302/*"treasurechest_btn"*/);
    sub_1C6BA08(&StringLiteral_13542/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C6BA08(&StringLiteral_24308/*"treasurechest_img_bg_reward"*/);
    sub_1C6BA08(&StringLiteral_10994/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/);
    byte_4CB08A8 = 1;
  }
  v14 = (Il2CppObject *)sub_1C6BC54(RecipeRewardDialogComponent___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor(v14, 0);
  if ( !v14 )
    goto LABEL_53;
  v14[1].monitor = this;
  sub_1C6B9AC(&v14[1].monitor, this);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  this->fields.state = 1;
  if ( !viewChangeButton )
    goto LABEL_53;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24302/*"treasurechest_btn"*/, 0);
  this->fields.getEffect = getEffect;
  sub_1C6B9AC(&this->fields.getEffect, getEffect);
  this->fields.isShowPossessionNum = 0;
  this->fields.playCnt = 0;
  *(_WORD *)&this->fields.isSkip = 0;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v18;
  sub_1C6B9AC(&this->fields.resultItemObjList, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultIconHideObjList = (struct System_Collections_Generic_List_GameObject__o *)v19;
  sub_1C6B9AC(&this->fields.resultIconHideObjList, v19);
  teaEffectObjList = this->fields.teaEffectObjList;
  if ( teaEffectObjList )
  {
    size = teaEffectObjList->fields._size;
    v22 = teaEffectObjList->fields._version + 1;
    teaEffectObjList->fields._size = 0;
    teaEffectObjList->fields._version = v22;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)teaEffectObjList->fields._items, 0, size, 0);
  }
  viewChangeButton = (int *)this->fields.skipCollider;
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)viewChangeButton, 1, 0);
  if ( !giftIds )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.getPointRoot;
  this->fields.maxPlayCnt = giftIds->max_length;
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10989/*"RECIPE_EVENT_ITEM_GET_DIALOG_TITLE"*/, 0);
  if ( !eventRecipeEntity )
    goto LABEL_53;
  viewChangeButton = (int *)System_String__Format(
                              (System_String_o *)viewChangeButton,
                              (Il2CppObject *)eventRecipeEntity->fields.name,
                              0);
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  totalEventPointIcon = this->fields.totalEventPointIcon;
  eventPointItemId = eventRecipeEntity->fields.eventPointItemId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(totalEventPointIcon, eventPointItemId, 0);
  AtlasManager__SetItem(this->fields.getEventPointIcon, eventRecipeEntity->fields.eventPointItemId, 0);
  AtlasManager__SetEventUI(this->fields.totalEventPointBg, (System_String_o *)StringLiteral_24308/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.getEventPointBg, (System_String_o *)StringLiteral_24308/*"treasurechest_img_bg_reward"*/, 0);
  viewChangeButton = (int *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_53;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24302/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_53;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    goto LABEL_54;
  viewChangeButton = (int *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_53;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10994/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !viewChangeButtonLabel )
    goto LABEL_53;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0);
  getTitleLabel = this->fields.getTitleLabel;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10987/*"RECIPE_EVENT_GET_POINT_NUM"*/, 0);
  if ( !getTitleLabel )
    goto LABEL_53;
  UILabel__set_text(getTitleLabel, (System_String_o *)viewChangeButton, 0);
  getNumLabel = this->fields.getNumLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v55 = this->fields.maxPlayCnt * eventRecipeEntity->fields.eventPointNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  v32 = System_String__Format(v30, v31, 0);
  viewChangeButton = (int *)System_String__Concat_63966792((System_String_o *)StringLiteral_800/*"+"*/, v32, 0);
  if ( !getNumLabel )
    goto LABEL_53;
  UILabel__set_text(getNumLabel, (System_String_o *)viewChangeButton, 0);
  if ( !eventRecipeGiftEntity )
    goto LABEL_53;
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventRecipeGiftEntity->fields.eventId, 0);
  totalTitleLabel = this->fields.totalTitleLabel;
  v35 = EventPointNoGroup;
  viewChangeButton = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_10993/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0);
  if ( !totalTitleLabel )
    goto LABEL_53;
  UILabel__set_text(totalTitleLabel, (System_String_o *)viewChangeButton, 0);
  totalNumLabel = this->fields.totalNumLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v54 = v35;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v54);
  viewChangeButton = (int *)System_String__Format(v37, v38, 0);
  if ( !totalNumLabel )
    goto LABEL_53;
  UILabel__set_text(totalNumLabel, (System_String_o *)viewChangeButton, 0);
  v39 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v14[1].klass = (Il2CppClass *)v39;
  p_klass = (void **)&v14[1].klass;
  sub_1C6B9AC(&v14[1], v39);
  v41 = (GiftEntity_o *)sub_1C6BC54(GiftEntity_TypeInfo);
  GiftEntity___ctor(v41, 0);
  if ( !v41 )
    goto LABEL_53;
  v41->fields.type = 2;
  v41->fields.objectId = eventRecipeEntity->fields.eventPointItemId;
  v41->fields.num = eventRecipeEntity->fields.eventPointNum * LODWORD(giftIds->max_length);
  viewChangeButton = (int *)*p_klass;
  if ( !*p_klass )
    goto LABEL_53;
  v42 = *((_QWORD *)viewChangeButton + 2);
  v43 = Method_System_Collections_Generic_List_GiftEntity__Add__;
  ++viewChangeButton[7];
  if ( !v42 )
    goto LABEL_53;
  v44 = viewChangeButton[6];
  if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)viewChangeButton,
      (Il2CppObject *)v41,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = v42 + 8 * v44;
    viewChangeButton[6] = v44 + 1;
    *(_QWORD *)(v45 + 32) = v41;
    sub_1C6B9AC(v45 + 32, v41);
  }
  v46 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
  System_Action_int____ctor(v46, v14, Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__0__, 0);
  BasicHelper__ForEach_int_(
    (System_Collections_Generic_IEnumerable_T__o *)giftIds,
    (System_Action_T__o *)v46,
    (const MethodInfo_3126420 *)Method_BasicHelper_ForEach_int___);
  klass = v14[1].klass;
  if ( !klass )
    goto LABEL_53;
  viewChangeButton = (int *)this->fields.scrollBar;
  this->fields.maxPlayCnt = (int32_t)klass->_1.namespaze;
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)viewChangeButton,
                              (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
  if ( !viewChangeButton )
    goto LABEL_53;
  UIProgressBar__set_value((UIProgressBar_o *)viewChangeButton, 0.0, 0);
  viewChangeButton = (int *)this->fields.scrollBar;
  if ( !viewChangeButton )
    goto LABEL_53;
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxPlayCnt > this->fields.maxItemDrawNum,
    0);
  v48 = (System_String_o **)&StringLiteral_13542/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( pointRewards && LODWORD(pointRewards->max_length) )
    v48 = (System_String_o **)&StringLiteral_13543/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = (int *)this->fields.closeButton;
  if ( !viewChangeButton
    || (viewChangeButton = (int *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)viewChangeButton, 0)) == 0
    || (viewChangeButton = (int *)UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)viewChangeButton,
                                    1,
                                    (const MethodInfo_313285C *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78590920)) == 0 )
  {
LABEL_53:
    sub_1C6BC60(viewChangeButton, v16);
  }
  if ( !viewChangeButton[6] )
LABEL_54:
    sub_1C6BC68(viewChangeButton);
  v49 = (UILabel_o *)*((_QWORD *)viewChangeButton + 4);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (int *)LocalizationManager__Get(*v48, 0);
  if ( !v49 )
    goto LABEL_53;
  UILabel__set_text(v49, (System_String_o *)viewChangeButton, 0);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C6B9AC(&this->fields.closeCallbackFunc, closeCallback);
  viewChangeButton = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !viewChangeButton )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v50 = (System_Collections_Generic_List_GiftEntity__o *)v14[1].klass;
  v51 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v51, v14, Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__1__, 0);
  RecipeRewardDialogComponent__SetResultData(this, v50, eventRecipeEntity, v51, v52);
}


void RecipeRewardDialogComponent__SetResultData(
        RecipeRewardDialogComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftList,
        EventRecipeEntity_o *eventRecipeEntity,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x23
  UnityEngine_Component_o *scrollView; // x0
  __int64 v11; // x1
  System_Action_object__o *v12; // x22

  if ( (byte_4CB08A9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_GiftEntity__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__ForEach__);
    sub_1C6BA08(&Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__);
    sub_1C6BA08(&RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo);
    byte_4CB08A9 = 1;
  }
  v9 = (Il2CppObject *)sub_1C6BC54(RecipeRewardDialogComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_12;
  v9[1].klass = (Il2CppClass *)this;
  sub_1C6B9AC(&v9[1], this);
  v9[1].monitor = eventRecipeEntity;
  sub_1C6B9AC(&v9[1].monitor, eventRecipeEntity);
  v12 = (System_Action_object__o *)sub_1C6BC54(System_Action_GiftEntity__TypeInfo);
  System_Action_object____ctor(
    v12,
    v9,
    Method_RecipeRewardDialogComponent___c__DisplayClass43_0__SetResultData_b__0__,
    0);
  if ( !giftList )
    goto LABEL_12;
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Action_T__o *)v12,
    (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_GiftEntity__ForEach__);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIScrollView___)) == 0
    || (UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.listRoot) == 0)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.element_class)(
          scrollView,
          scrollView->klass[1]._1.castClass),
        (scrollView = (UnityEngine_Component_o *)this->fields.iconListRoot) == 0)
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                  scrollView,
                                                  (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
  {
LABEL_12:
    sub_1C6BC60(scrollView, v11);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))scrollView->klass[1]._1.element_class)(
    scrollView,
    scrollView->klass[1]._1.castClass);
  ActionExtensions__Call(callBack, 0);
}


System_Collections_IEnumerator_o *RecipeRewardDialogComponent__StartDisp(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4CB08AA & 1) == 0 )
  {
    sub_1C6BA08(&RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo);
    byte_4CB08AA = 1;
  }
  v3 = sub_1C6BC54(RecipeRewardDialogComponent__StartDisp_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *RecipeRewardDialogComponent__StartRewardAction(
        RecipeRewardDialogComponent_o *this,
        RecipeRewardDialogComponent_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4CB08AB & 1) == 0 )
  {
    sub_1C6BA08(&RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo);
    byte_4CB08AB = 1;
  }
  v5 = sub_1C6BC54(RecipeRewardDialogComponent__StartRewardAction_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C6B9AC(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1C6B9AC(v5 + 40, rewardAction);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *RecipeRewardDialogComponent__get_closeBtnObject(
        RecipeRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CB08B0 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB08B0 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C6BC60(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void RecipeRewardDialogComponent_GetEffect___ctor(
        RecipeRewardDialogComponent_GetEffect_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A98F80;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C6BAC0(method);
        v12 = sub_1C6C054(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A9907C;
          else
            v9 = sub_1A99040;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A98FBC;
        }
        else
        {
          v9 = sub_1A98F90;
        }
      }
      else
      {
        v9 = sub_1A98F60;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A98F10;
}


System_IAsyncResult_o *RecipeRewardDialogComponent_GetEffect__BeginInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = parenTransform;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v6, callback, object);
}


UnityEngine_GameObject_o *RecipeRewardDialogComponent_GetEffect__EndInvoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)sub_1C6B9C0(result, 0, method);
}


UnityEngine_GameObject_o *RecipeRewardDialogComponent_GetEffect__Invoke(
        RecipeRewardDialogComponent_GetEffect_o *this,
        UnityEngine_Transform_o *parenTransform,
        const MethodInfo *method)
{
  return (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(intptr_t, UnityEngine_Transform_o *, intptr_t))this->fields.invoke_impl)(
                                       this->fields.method_code,
                                       parenTransform,
                                       this->fields.method);
}


void RecipeRewardDialogComponent_RewardAction___ctor(
        RecipeRewardDialogComponent_RewardAction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeRewardDialogComponent__StartDisp_d__44___ctor(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool RecipeRewardDialogComponent__StartDisp_d__44__MoveNext(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent__StartDisp_d__44_o *v2; // x19
  struct RecipeRewardDialogComponent_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v4; // x20
  bool result; // w0
  int listRewardAction_5__2_high; // w8
  int32_t maxPlayCnt; // w9
  int v8; // w21
  UIProgressBar_o *v9; // x20
  float value; // s0
  Il2CppObject **p__2__current; // x19
  int v12; // w8
  System_Collections_Generic_List_object__o *v13; // x22
  RecipeRewardDialogComponent__StartDisp_d__44_o **p_listRewardAction_5__2; // x21
  int v15; // w23
  __int64 v16; // x22
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 _2__current_low; // x10
  __int64 v20; // x8
  int _2__current; // w9
  int32_t v22; // w22
  RecipeRewardDialogComponent__StartDisp_d__44_o *v23; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v25; // x2
  System_Collections_IEnumerator_o *started; // x0
  int32_t playCnt; // w8
  int32_t v28; // w21
  int32_t v29; // w19
  Il2CppObject *current; // x19
  float scrollWait; // s8
  UnityEngine_WaitForSeconds_o *v32; // x20
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4CB08B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIScrollBar___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&RecipeRewardDialogComponent_RewardAction_TypeInfo);
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CB08B8 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v4, 0.3, 0);
      v2->fields.__2__current = (Il2CppObject *)v4;
      sub_1C6B9AC(&v2->fields.__2__current, v4);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_19;
    case 2:
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v2->fields._listRewardAction_5__2;
      v2->fields.__1__state = -1;
      if ( !this )
        goto LABEL_59;
      goto LABEL_37;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.iconListRoot;
      if ( !this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !this )
        goto LABEL_59;
      listRewardAction_5__2_high = HIDWORD(this->fields._listRewardAction_5__2);
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.scrollBar;
      v8 = maxPlayCnt % listRewardAction_5__2_high
         ? maxPlayCnt / listRewardAction_5__2_high + 1
         : maxPlayCnt / listRewardAction_5__2_high;
      if ( !this )
        goto LABEL_59;
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
      if ( !this )
        goto LABEL_59;
      v9 = (UIProgressBar_o *)this;
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
      UIProgressBar__set_value(v9, (float)(1.0 / (float)((float)((float)v8 * 0.5) + -1.0)) + value, 0);
      v2->fields.__2__current = 0;
      p__2__current = &v2->fields.__2__current;
      sub_1C6B9AC(p__2__current, 0);
      v12 = 4;
      goto LABEL_76;
    case 4:
      v2->fields.__1__state = -1;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v2->fields._listRewardAction_5__2 = 0;
    sub_1C6B9AC(&v2->fields._listRewardAction_5__2, 0);
LABEL_19:
    v13 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction___ctor__);
    v2->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__o *)v13;
    p_listRewardAction_5__2 = (RecipeRewardDialogComponent__StartDisp_d__44_o **)&v2->fields._listRewardAction_5__2;
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)sub_1C6B9AC(&v2->fields._listRewardAction_5__2, v13);
    if ( !_4__this )
      goto LABEL_59;
    if ( _4__this->fields.maxItemDrawNum >= 1 )
    {
      v15 = 0;
      do
      {
        if ( v15 + _4__this->fields.playCnt >= _4__this->fields.maxPlayCnt )
          break;
        v16 = sub_1C6BC54(RecipeRewardDialogComponent_RewardAction_TypeInfo);
        System_Object___ctor((Il2CppObject *)v16, 0);
        if ( !v16 )
          goto LABEL_59;
        *(_DWORD *)(v16 + 16) = v15;
        *(_DWORD *)(v16 + 20) = v15 + _4__this->fields.playCnt;
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v17 = *(_QWORD *)&this->fields.__1__state;
        v18 = Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v17 )
          goto LABEL_59;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v17 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v16,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = v17 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v20 + 32) = v16;
          sub_1C6B9AC(v20 + 32, v16);
        }
        ++v15;
      }
      while ( v15 < _4__this->fields.maxItemDrawNum );
    }
    this = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_59;
    _2__current = (int)this->fields.__2__current;
    _4__this->fields.playCnt += _2__current;
    if ( _2__current >= 1 )
    {
      v22 = 0;
      do
      {
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   v22,
                                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
        v23 = this;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)*p_listRewardAction_5__2,
                 v22,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
        started = RecipeRewardDialogComponent__StartRewardAction(
                    _4__this,
                    (RecipeRewardDialogComponent_RewardAction_o *)Item,
                    v25);
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                                                                   (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                   started,
                                                                   0);
        if ( !v23 )
          goto LABEL_59;
        v23->fields.__4__this = (struct RecipeRewardDialogComponent_o *)this;
        sub_1C6B9AC(&v23->fields.__4__this, this);
        this = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_59;
      }
      while ( ++v22 < SLODWORD(this->fields.__2__current) );
    }
LABEL_37:
    this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)this,
                                                               LODWORD(this->fields.__2__current) - 1,
                                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
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
      this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v2->fields._listRewardAction_5__2;
      if ( this )
      {
        v28 = 0;
        while ( v28 < SLODWORD(this->fields.__2__current) )
        {
          this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v28,
                                                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_RecipeRewardDialogComponent_RewardAction__get_Item__);
          if ( this )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_71645488(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)this->fields.__4__this,
              0);
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)v2->fields._listRewardAction_5__2;
            ++v28;
            if ( this )
              continue;
          }
          goto LABEL_59;
        }
        this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
        if ( this )
        {
          v29 = 0;
          while ( v29 < SLODWORD(this->fields.__2__current) )
          {
            this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v29,
                                                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultItemObjList;
              ++v29;
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
                                                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIScrollBar___);
            if ( this )
            {
              UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
LABEL_63:
              this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.skipCollider;
              if ( this )
              {
                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
                this = (RecipeRewardDialogComponent__StartDisp_d__44_o *)_4__this->fields.resultIconHideObjList;
                if ( this )
                {
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v33,
                            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
                  {
                    current = v33.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
                    {
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)current, 0);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v33,
                    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
                  return 0;
                }
              }
            }
          }
        }
      }
LABEL_59:
      sub_1C6BC60(this, method);
    }
    playCnt = _4__this->fields.playCnt;
    if ( playCnt >= _4__this->fields.maxPlayCnt )
      goto LABEL_63;
    if ( playCnt != 1 && !(playCnt % _4__this->fields.maxItemDrawNum) )
    {
      scrollWait = _4__this->fields.scrollWait;
      v32 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v32, scrollWait, 0);
      v2->fields.__2__current = (Il2CppObject *)v32;
      p__2__current = &v2->fields.__2__current;
      sub_1C6B9AC(p__2__current, v32);
      v12 = 3;
      goto LABEL_76;
    }
  }
  v2->fields.__2__current = 0;
  p__2__current = &v2->fields.__2__current;
  sub_1C6B9AC(p__2__current, 0);
  v12 = 2;
LABEL_76:
  *((_DWORD *)p__2__current - 2) = v12;
  return 1;
}


Il2CppObject *RecipeRewardDialogComponent__StartDisp_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RecipeRewardDialogComponent__StartDisp_d__44__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_RecipeRewardDialogComponent__StartDisp_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *RecipeRewardDialogComponent__StartDisp_d__44__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void RecipeRewardDialogComponent__StartDisp_d__44__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartDisp_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void RecipeRewardDialogComponent__StartRewardAction_d__45___ctor(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool RecipeRewardDialogComponent__StartRewardAction_d__45__MoveNext(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v2; // x19
  int32_t _1__state; // w8
  struct RecipeRewardDialogComponent_o *_4__this; // x22
  struct RecipeRewardDialogComponent_RewardAction_o *rewardAction; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v6; // x8
  struct RecipeRewardDialogComponent_RewardAction_o *v7; // x8
  bool result; // w0
  int32_t i_5__2; // w8
  struct RecipeRewardDialogComponent_RewardAction_o *v10; // x9
  float itemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  struct RecipeRewardDialogComponent_GetEffect_o *getEffect; // x20
  Il2CppObject *Item; // x0
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v16; // x20
  struct RecipeRewardDialogComponent_RewardAction_o *v17; // x8
  RecipeRewardDialogComponent__StartRewardAction_d__45_o *v18; // x21
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 _2__current_low; // x10
  __int64 v22; // x8
  float v23; // s8
  UnityEngine_WaitForSeconds_o *v24; // x20
  Il2CppObject **v25; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4CB08B9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CB08B9 = 1;
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
                                                                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    v6 = v2->fields.rewardAction;
    if ( v6 )
    {
      this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
      if ( this )
      {
        this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                           (System_Collections_Generic_List_object__o *)this,
                                                                           v6->fields.playCnt,
                                                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v7 = v2->fields.rewardAction;
          if ( v7 )
          {
            result = 0;
            v7->fields.isEnd = 1;
            return result;
          }
        }
      }
    }
LABEL_40:
    sub_1C6BC60(this, method);
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
  v10 = v2->fields.rewardAction;
  if ( !v10 || !_4__this )
    goto LABEL_40;
  if ( _1__state < v10->fields.index )
  {
    itemDispWaitTime = _4__this->fields.itemDispWaitTime;
    v12 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v12, itemDispWaitTime, 0);
    v2->fields.__2__current = (Il2CppObject *)v12;
    p__2__current = &v2->fields.__2__current;
    sub_1C6B9AC(p__2__current, v12);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_40;
  getEffect = _4__this->fields.getEffect;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this,
           v10->fields.playCnt,
           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)GameObjectExtensions__GetParent(
                                                                     (UnityEngine_GameObject_o *)Item,
                                                                     0);
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  if ( !getEffect )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)((__int64 (__fastcall *)(intptr_t, RecipeRewardDialogComponent__StartRewardAction_d__45_o *, intptr_t))getEffect->fields.invoke_impl)(
                                                                     getEffect->fields.method_code,
                                                                     this,
                                                                     getEffect->fields.method);
  if ( !this )
    goto LABEL_40;
  v16 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0);
  v17 = v2->fields.rewardAction;
  if ( !v17 )
    goto LABEL_40;
  v18 = this;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.resultItemObjList;
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     v17->fields.playCnt,
                                                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this )
    goto LABEL_40;
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0);
  if ( !this )
    goto LABEL_40;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  if ( !v18 )
    goto LABEL_40;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v18, localPosition, 0);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)v16,
                                                                     0);
  if ( !this )
    goto LABEL_40;
  v27.fields.x = 1.25;
  v27.fields.y = 1.25;
  v27.fields.z = 1.25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v27, 0);
  this = (RecipeRewardDialogComponent__StartRewardAction_d__45_o *)_4__this->fields.teaEffectObjList;
  if ( !this )
    goto LABEL_40;
  v19 = *(_QWORD *)&this->fields.__1__state;
  v20 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v19 )
    goto LABEL_40;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v19 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v16,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = v19 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v22 + 32) = v16;
    sub_1C6B9AC(v22 + 32, v16);
  }
  v23 = _4__this->fields.itemDispWaitTime;
  v24 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v24, v23, 0);
  v2->fields.__2__current = (Il2CppObject *)v24;
  v25 = &v2->fields.__2__current;
  sub_1C6B9AC(v25, v24);
  *((_DWORD *)v25 - 2) = 2;
  return 1;
}


Il2CppObject *RecipeRewardDialogComponent__StartRewardAction_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RecipeRewardDialogComponent__StartRewardAction_d__45__System_Collections_IEnumerator_Reset(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_RecipeRewardDialogComponent__StartRewardAction_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *RecipeRewardDialogComponent__StartRewardAction_d__45__System_Collections_IEnumerator_get_Current(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void RecipeRewardDialogComponent__StartRewardAction_d__45__System_IDisposable_Dispose(
        RecipeRewardDialogComponent__StartRewardAction_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void RecipeRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CB08B2 & 1) == 0 )
  {
    sub_1C6BA08(&RecipeRewardDialogComponent___c_TypeInfo);
    byte_4CB08B2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(RecipeRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecipeRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct RecipeRewardDialogComponent___c_o *)v1;
  sub_1C6B9AC(RecipeRewardDialogComponent___c_TypeInfo->static_fields, v1);
}


void RecipeRewardDialogComponent___c___ctor(RecipeRewardDialogComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeRewardDialogComponent___c___ClickSkip_b__46_0(
        RecipeRewardDialogComponent___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4CB08B3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB08B3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)x, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass42_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__0(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x20
  GiftEntity_array *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4CB08B4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB08B4 = 1;
  }
  giftList = this->fields.giftList;
  Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (GiftEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0
    || (Instance = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, id, 0), !giftList) )
  {
    sub_1C6BC60(Instance, v7);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)giftList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
}


void RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__1(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  BaseDialog_o *monitor; // x20
  System_Action_o *klass; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4CB08B5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (RecipeRewardDialogComponent___c__DisplayClass42_0_o *)sub_1C6BA08(&Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__);
    byte_4CB08B5 = 1;
  }
  monitor = (BaseDialog_o *)v2[1].monitor;
  if ( !monitor )
    sub_1C6BC60(this, method);
  HIDWORD(monitor[3].fields.basePanelList) = 2;
  klass = (System_Action_o *)v2[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(klass, v2, Method_RecipeRewardDialogComponent___c__DisplayClass42_0__Open_b__2__, 0);
    v2[2].klass = (Il2CppClass *)klass;
    sub_1C6B9AC(&v2[2], klass);
  }
  BaseDialog__Open(monitor, klass, 0, 0, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass42_0___Open_b__2(
        RecipeRewardDialogComponent___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *_4__this; // x0

  if ( (byte_4CB08B6 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_13055/*"StartDisp"*/);
    byte_4CB08B6 = 1;
  }
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
  UnityEngine_MonoBehaviour__StartCoroutine(_4__this, (System_String_o *)StringLiteral_13055/*"StartDisp"*/, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass43_0___ctor(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecipeRewardDialogComponent___c__DisplayClass43_0___SetResultData_b__0(
        RecipeRewardDialogComponent___c__DisplayClass43_0_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v4; // x19
  struct RecipeRewardDialogComponent_o *_4__this; // x8
  Il2CppObject *prefabResultItem; // x20
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v7; // x20
  struct RecipeRewardDialogComponent_o *v8; // x8
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v9; // x22
  struct RecipeRewardDialogComponent_o *v10; // x8
  ItemIconComponent_o *v11; // x22
  int64_t v12; // x3
  struct RecipeRewardDialogComponent_o *v13; // x8
  struct RecipeRewardDialogComponent_o *v14; // x8
  _QWORD *v15; // x9
  __int64 eventRecipeEntity_low; // x10
  RecipeRewardDialogComponent_c **v17; // x8
  struct RecipeRewardDialogComponent_o *v18; // x8
  Il2CppObject *prefabTeaItem; // x21
  RecipeRewardDialogComponent___c__DisplayClass43_0_o *v20; // x21
  struct RecipeRewardDialogComponent_o *v21; // x8
  UnityEngine_Transform_o *transform; // x22
  struct RecipeRewardDialogComponent_o *v23; // x8
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  UISprite_o *v25; // x20
  int32_t eventId; // w22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x23
  struct RecipeRewardDialogComponent_o *v29; // x8
  struct RecipeRewardDialogComponent_o *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  RecipeRewardDialogComponent_c **v33; // x8
  int32_t iconId; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CB08B7 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1C6BA08(&StringLiteral_20316/*"icon_{0}"*/);
    byte_4CB08B7 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  prefabResultItem = (Il2CppObject *)_4__this->fields.prefabResultItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabResultItem,
                                                                  (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v7 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0);
  v8 = v4->fields.__4__this;
  if ( !v8 || !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v8->fields.listRoot, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v7,
                                                                  0);
  v9 = this;
  if ( !byte_4CAFC09 )
  {
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v9 )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v7,
                                                                  0);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v35.fields.x = v10->fields.iconScale;
  v35.fields.y = v35.fields.x;
  v35.fields.z = v35.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v35, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v7,
                                                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
  if ( !gift )
    goto LABEL_45;
  v11 = (ItemIconComponent_o *)this;
  if ( !this )
    goto LABEL_45;
  v12 = gift->fields.num <= 1 ? -1LL : (unsigned int)gift->fields.num;
  ItemIconComponent__SetGift_41153640((ItemIconComponent_o *)this, gift->fields.type, gift->fields.objectId, v12, 0, 0);
  ItemIconComponent__CalcSetPossession(v11, gift->fields.type, gift->fields.objectId, 0);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_45;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v13->fields.resultItemObjList;
  if ( !this )
    goto LABEL_45;
  v14 = this->fields.__4__this;
  v15 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(this->fields.eventRecipeEntity);
  if ( !v14 )
    goto LABEL_45;
  eventRecipeEntity_low = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)eventRecipeEntity_low >= LODWORD(v14->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v7,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->klass + eventRecipeEntity_low;
    LODWORD(this->fields.eventRecipeEntity) = eventRecipeEntity_low + 1;
    v17[4] = (RecipeRewardDialogComponent_c *)v7;
    this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)sub_1C6B9AC(v17 + 4, v7);
  }
  v18 = v4->fields.__4__this;
  if ( !v18 )
    goto LABEL_45;
  prefabTeaItem = (Il2CppObject *)v18->fields.prefabTeaItem;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                  prefabTeaItem,
                                                                  (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_45;
  v20 = this;
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  0);
  v21 = v4->fields.__4__this;
  if ( !v21 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v21->fields.iconListRoot, 0);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v7,
                                                                  0);
  if ( !this )
    goto LABEL_45;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  if ( !transform )
    goto LABEL_45;
  UnityEngine_Transform__set_localPosition(transform, localPosition, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)v20,
                                                                  0);
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_45;
  if ( !this )
    goto LABEL_45;
  v37.fields.x = v23->fields.iconScale;
  v37.fields.y = v37.fields.x;
  v37.fields.z = v37.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v37, 0);
  this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v20,
                                                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  eventRecipeEntity = v4->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_45;
  v25 = (UISprite_o *)this;
  eventId = eventRecipeEntity->fields.eventId;
  iconId = eventRecipeEntity->fields.iconId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v28 = System_String__Format((System_String_o *)StringLiteral_20316/*"icon_{0}"*/, v27, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40837804(eventId, v25, v28, 0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0);
  v29 = v4->fields.__4__this;
  if ( !v29
    || (this = (RecipeRewardDialogComponent___c__DisplayClass43_0_o *)v29->fields.resultIconHideObjList) == 0
    || (v30 = this->fields.__4__this,
        v31 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.eventRecipeEntity),
        !v30) )
  {
LABEL_45:
    sub_1C6BC60(this, gift);
  }
  v32 = SLODWORD(this->fields.eventRecipeEntity);
  if ( (unsigned int)v32 >= LODWORD(v30->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v20,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &v30->klass + v32;
    LODWORD(this->fields.eventRecipeEntity) = v32 + 1;
    v33[4] = (RecipeRewardDialogComponent_c *)v20;
    sub_1C6B9AC(v33 + 4, v20);
  }
}