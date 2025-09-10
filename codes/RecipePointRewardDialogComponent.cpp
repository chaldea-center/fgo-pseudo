void RecipePointRewardDialogComponent___ctor(RecipePointRewardDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C21925 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&UnityEngine_Color___TypeInfo);
    byte_4C21925 = 1;
  }
  this->fields.iconScale = 0.85;
  this->fields.viewChangeButtonLabelEffectColors = (struct UnityEngine_Color_array *)sub_1C2D538(
                                                                                       UnityEngine_Color___TypeInfo,
                                                                                       2);
  sub_1C2D434(&this->fields.viewChangeButtonLabelEffectColors);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecipePointRewardDialogComponent__CheckIsSerializeFieldNotNull(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void RecipePointRewardDialogComponent__EndClose(RecipePointRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecipePointRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C2D434(p_closeCallbackFunc);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void RecipePointRewardDialogComponent__Init(RecipePointRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecipePointRewardDialogComponent__OnClickCloseButton(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v8; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C21922 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_RecipePointRewardDialogComponent_EndClose__);
    sub_1C2D490(&Method_RecipePointRewardDialogComponent_OnClickCloseButton__);
    byte_4C21922 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecipePointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_RecipePointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RecipePointRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1C2D6EC(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecipePointRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v8, 0);
  }
}


void RecipePointRewardDialogComponent__OnClickSwitchShowMode(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v8; // x8
  UISprite_o *v9; // x20
  System_String_o *normalSprite; // x21
  __int64 v11; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v18; // w20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C21923 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1C2D490(&StringLiteral_24180/*"treasurechest_btn"*/);
    sub_1C2D490(&StringLiteral_24182/*"treasurechest_btn_on"*/);
    byte_4C21923 = 1;
  }
  v3 = Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_RecipePointRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v8 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24180/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24182/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v8, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1C2D6EC(viewChangeButton, v5);
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
    sub_1C2D6F4(viewChangeButton, v5, v11);
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
  v19.fields.a = *p_a;
  v19.fields.b = *p_b;
  v19.fields.g = *p_g;
  v19.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v19, 0);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v18 = 0;
  while ( v18 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v18,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession((ItemIconComponent_o *)viewChangeButton, this->fields.isShowPossessionNum, 0);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v18;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void RecipePointRewardDialogComponent__Open(
        RecipePointRewardDialogComponent_o *this,
        EventRecipeEntity_o *eventRecipeEntity,
        BattleDropItem_array *RecipeRewards,
        int32_t eventId,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  RecipePointRewardDialogComponent_o *v10; // x20
  RecipePointRewardDialogComponent_o *v11; // x8
  int basePanelList_high; // w25
  int max_length; // w24
  Il2CppObject *Component_object; // x24
  __int64 v15; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x24
  System_Collections_Generic_List_object__o *v18; // x24
  Il2CppObject *v19; // x24
  UILabel_o *v20; // x25
  Il2CppObject *ComponentInChildren_object; // x26
  UILabel_o *titleLabel; // x25
  System_String_o *v23; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *v27; // x23
  const MethodInfo *v28; // x3
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x3

  v10 = this;
  if ( (byte_4C2191F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____78016160);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_RecipePointRewardDialogComponent__Open_b__26_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_24180/*"treasurechest_btn"*/);
    sub_1C2D490(&StringLiteral_24186/*"treasurechest_img_bg_reward"*/);
    sub_1C2D490(&StringLiteral_10979/*"RECIPE_DIALOG_CANCEL"*/);
    sub_1C2D490(&StringLiteral_10989/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_1C2D490(&StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_1C2D490(&StringLiteral_10968/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_1C2D490(&StringLiteral_10985/*"RECIPE_EVENT_POINT"*/);
    this = (RecipePointRewardDialogComponent_o *)sub_1C2D490(&StringLiteral_10986/*"RECIPE_EVENT_POINT_REWARD"*/);
    byte_4C2191F = 1;
  }
  v10->fields.state = 1;
  if ( !RecipeRewards )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.listRoot;
  if ( !this )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_34;
  v11 = this;
  this = (RecipePointRewardDialogComponent_o *)v10->fields.scrollBar;
  if ( !this )
    goto LABEL_34;
  basePanelList_high = HIDWORD(v11->fields.basePanelList);
  max_length = RecipeRewards->max_length;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 2 * basePanelList_high < max_length, 0);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButton;
  if ( !this )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24180/*"treasurechest_btn"*/, 0);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButton;
  v10->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_34;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_24180/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = v10->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_34;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    sub_1C2D6F4(this, eventRecipeEntity, v15);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.viewChangeButtonLabel;
  if ( !this )
    goto LABEL_34;
  UILabel__set_effectColor((UILabel_o *)this, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  viewChangeButtonLabel = v10->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10989/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !viewChangeButtonLabel )
    goto LABEL_34;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v10->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v18;
  sub_1C2D434(&v10->fields.resultItemObjList);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10985/*"RECIPE_EVENT_POINT"*/, 0);
  if ( !v10->fields.viewChangeButton )
    goto LABEL_34;
  v19 = (Il2CppObject *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.viewChangeButton,
                                                 0);
  if ( !this )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 1,
                                                 (const MethodInfo_30C55A4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78016160);
  if ( !v10->fields.closeButton )
    goto LABEL_34;
  v20 = (UILabel_o *)this;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)v10->fields.closeButton,
                                                 0);
  if ( !this )
    goto LABEL_34;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 (UnityEngine_Component_o *)this,
                                 1,
                                 (const MethodInfo_30C55A4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78016160);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10989/*"RECIPE_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !v20 )
    goto LABEL_34;
  UILabel__set_text(v20, (System_String_o *)this, 0);
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"RECIPE_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)this, 0);
  titleLabel = v10->fields.titleLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10968/*"RECIPE_BOX_EVENT_POINT_REWARD_TITLE"*/, 0);
  this = (RecipePointRewardDialogComponent_o *)System_String__Format(v23, v19, 0);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0);
  titleNextItemLabel = v10->fields.titleNextItemLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
  if ( !titleNextItemLabel )
    goto LABEL_34;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0);
  titleAtLabel = v10->fields.titleAtLabel;
  this = (RecipePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10986/*"RECIPE_EVENT_POINT_REWARD"*/, 0);
  if ( !titleAtLabel )
    goto LABEL_34;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.atNameLabel;
  if ( !this )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v19, 0);
  this = (RecipePointRewardDialogComponent_o *)v10->fields.pointRewardRoot;
  if ( !this )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  AtlasManager__SetEventUI(v10->fields.eventPointBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(v10->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  this = (RecipePointRewardDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  this = (RecipePointRewardDialogComponent_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  if ( !this
    || (this = (RecipePointRewardDialogComponent_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                       (EventRewardMaster_o *)this,
                                                       eventId,
                                                       EventPointNoGroup,
                                                       0),
        !eventRecipeEntity)
    || (v27 = (EventRewardEntity_o *)this,
        AtlasManager__SetItem(v10->fields.eventPointSprite, eventRecipeEntity->fields.eventPointItemId, 0),
        RecipePointRewardDialogComponent__SetNextItemLabel(v10, EventPointNoGroup, v27, v28),
        v10->fields.closeCallbackFunc = closeCallback,
        sub_1C2D434(&v10->fields.closeCallbackFunc),
        (this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)v10,
                                                        0)) == 0) )
  {
LABEL_34:
    sub_1C2D6EC(this, eventRecipeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v29 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v10, Method_RecipePointRewardDialogComponent__Open_b__26_0__, 0);
  RecipePointRewardDialogComponent__SetResultData(v10, RecipeRewards, v29, v30);
}


void RecipePointRewardDialogComponent__SetNextItemLabel(
        RecipePointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  UILabel_o *v7; // x22
  System_String_o *v8; // x23
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *isQp; // x0
  __int64 v14; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v16; // x1
  UILabel_o *atLabel; // x20
  int64_t v18; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C21921 & 1) == 0 )
  {
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C2D490(&StringLiteral_2821/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C2D490(&StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    byte_4C21921 = 1;
  }
  nameText = 0;
  countText = 0;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2821/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
      if ( nextItemLabel )
        goto LABEL_14;
    }
LABEL_17:
    sub_1C2D6EC(isQp, v14);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0);
  v7 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v18 = eventRewardEnt->fields.point - userEventPoint;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18, v9, v10, v11);
  isQp = System_String__Format(v8, v12, 0);
  if ( !v7 )
    goto LABEL_17;
  UILabel__set_text(v7, isQp, 0);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_63496112(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0);
    if ( !nextItemLabel )
      goto LABEL_17;
LABEL_14:
    v16 = isQp;
    goto LABEL_15;
  }
  if ( !nextItemLabel )
    goto LABEL_17;
  v16 = countText;
LABEL_15:
  UILabel__set_text(nextItemLabel, v16, 0);
}


void RecipePointRewardDialogComponent__SetResultData(
        RecipePointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  RecipePointRewardDialogComponent_o *v5; // x21
  int max_length; // w8
  __int64 v7; // x27
  BattleDropItem_o *v8; // x8
  int32_t objectId; // w24
  int32_t type; // w25
  __int64 v11; // x10
  int v12; // w19
  Il2CppObject *prefabResultItem; // x23
  RecipePointRewardDialogComponent_o *v14; // x23
  RecipePointRewardDialogComponent_o *v15; // x26
  int v16; // w8
  ItemIconComponent_o *v17; // x26
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4C21920 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (RecipePointRewardDialogComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21920 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= max_length )
          sub_1C2D6F4(this, rewards, callBack);
        v8 = rewards->m_Items[v7];
        if ( !v8 )
          break;
        type = v8->fields.type;
        objectId = v8->fields.objectId;
        v11 = 44;
        if ( v8->fields.originalNum > 0 )
          v11 = 52;
        v12 = *(_DWORD *)((char *)&v8->klass + v11);
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                       prefabResultItem,
                                                       (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          break;
        v14 = this;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0);
        if ( !this )
          break;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)v14,
                                                       0);
        v15 = this;
        if ( !byte_4C20DA1 )
        {
          this = (RecipePointRewardDialogComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        if ( !v15 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v15,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)v14,
                                                       0);
        if ( !this )
          break;
        v23.fields.x = v5->fields.iconScale;
        v23.fields.y = v23.fields.x;
        v23.fields.z = v23.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v23, 0);
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v14,
                                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v16 = v12 <= 1 ? -1 : v12;
        v17 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)this, type, objectId, v16, 0, 0);
        ItemIconComponent__CalcSetPossession(v17, type, objectId, 0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v14, 1, 0);
        this = (RecipePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v19 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v14,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v21 + 32) = v14;
          sub_1C2D434(v21 + 32);
        }
        this = (RecipePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !this )
          break;
        this = (RecipePointRewardDialogComponent_o *)((__int64 (__fastcall *)(RecipePointRewardDialogComponent_o *, const char *))this->klass[1]._1.name)(
                                                       this,
                                                       this->klass[1]._1.namespaze);
        max_length = rewards->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_30;
      }
LABEL_33:
      sub_1C2D6EC(this, rewards);
    }
  }
LABEL_30:
  this = (RecipePointRewardDialogComponent_o *)v5->fields.scrollView;
  if ( !this )
    goto LABEL_33;
  this = (RecipePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  if ( !this )
    goto LABEL_33;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
  ActionExtensions__Call(callBack, 0);
}


void RecipePointRewardDialogComponent___Open_b__26_0(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C21926 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_RecipePointRewardDialogComponent__Open_b__26_1__);
    byte_4C21926 = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_RecipePointRewardDialogComponent__Open_b__26_1__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0);
}


void RecipePointRewardDialogComponent___Open_b__26_1(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *RecipePointRewardDialogComponent__get_closeBtnObject(
        RecipePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C21924 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21924 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}