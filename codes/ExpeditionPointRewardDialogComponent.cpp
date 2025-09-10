void ExpeditionPointRewardDialogComponent___ctor(
        ExpeditionPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21621 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&UnityEngine_Color___TypeInfo);
    byte_4C21621 = 1;
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


void ExpeditionPointRewardDialogComponent__EndClose(
        ExpeditionPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4C2161D & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    byte_4C2161D = 1;
  }
  ExpeditionPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
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


void ExpeditionPointRewardDialogComponent__Init(ExpeditionPointRewardDialogComponent_o *this, const MethodInfo *method)
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


void ExpeditionPointRewardDialogComponent__OnClickCloseButton(
        ExpeditionPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *current; // x20
  System_Action_o *v7; // x20
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2161C & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_ExpeditionPointRewardDialogComponent_EndClose__);
    sub_1C2D490(&Method_ExpeditionPointRewardDialogComponent_OnClickCloseButton__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2161C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
    this->fields.state = 3;
    if ( !scrollView )
      goto LABEL_19;
    scrollView = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              scrollView,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !scrollView )
      goto LABEL_19;
    UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0);
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
    v4 = Method_ExpeditionPointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_ExpeditionPointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_ExpeditionPointRewardDialogComponent_OnClickCloseButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    scrollView = (UnityEngine_Component_o *)this->fields.resultItemObjList;
    if ( !scrollView )
LABEL_19:
      sub_1C2D6EC(scrollView, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v8.fields._current;
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
      &v8,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ExpeditionPointRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0);
  }
}


void ExpeditionPointRewardDialogComponent__OnClickSwitchShowMode(
        ExpeditionPointRewardDialogComponent_o *this,
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
  __int64 v12; // x3
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v19; // w20
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2161E & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_ExpeditionPointRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&StringLiteral_24180/*"treasurechest_btn"*/);
    sub_1C2D490(&StringLiteral_24182/*"treasurechest_btn_on"*/);
    byte_4C2161E = 1;
  }
  v3 = Method_ExpeditionPointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_ExpeditionPointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_ExpeditionPointRewardDialogComponent_OnClickSwitchShowMode__);
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
    sub_1C2D6F4(viewChangeButton, v5, v11, v12);
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
  v20.fields.a = *p_a;
  v20.fields.b = *p_b;
  v20.fields.g = *p_g;
  v20.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v20, 0);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v19 = 0;
  while ( v19 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v19,
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
        ++v19;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void ExpeditionPointRewardDialogComponent__Open(
        ExpeditionPointRewardDialogComponent_o *this,
        EventExpeditionEntity_o *eventExpeditionEntity,
        BattleDropItem_array *expeditionRewards,
        int32_t eventId,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  Il2CppObject *v13; // x23
  UnityEngine_Component_o *listRoot; // x0
  __int64 v15; // x1
  _DWORD *monitor; // x24
  UnityEngine_Component_o *v17; // x8
  int m_CachedPtr_high; // w25
  int v19; // w24
  Il2CppObject *Component_object; // x24
  __int64 v21; // x2
  __int64 v22; // x3
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v24; // x24
  Il2CppObject *v25; // x24
  UILabel_o *v26; // x25
  Il2CppObject *ComponentInChildren_object; // x26
  UILabel_o *titleLabel; // x25
  System_String_o *v29; // x0
  UILabel_o *titleNextItemLabel; // x25
  UILabel_o *titleAtLabel; // x25
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *v33; // x22
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_4C21619 & 1) == 0 )
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
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_ExpeditionPointRewardDialogComponent___c__DisplayClass27_0__Open_b__0__);
    sub_1C2D490(&ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5800/*"EXPEDITION_EVENT_POINT"*/);
    sub_1C2D490(&StringLiteral_5785/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_1C2D490(&StringLiteral_24180/*"treasurechest_btn"*/);
    sub_1C2D490(&StringLiteral_5806/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_1C2D490(&StringLiteral_24186/*"treasurechest_img_bg_reward"*/);
    sub_1C2D490(&StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_1C2D490(&StringLiteral_5798/*"EXPEDITION_DIALOG_CANCEL"*/);
    sub_1C2D490(&StringLiteral_5801/*"EXPEDITION_EVENT_POINT_REWARD"*/);
    byte_4C21619 = 1;
  }
  v13 = (Il2CppObject *)sub_1C2D6DC(ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_34;
  v13[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v13[1]);
  v13[1].monitor = expeditionRewards;
  sub_1C2D434(&v13[1].monitor);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  listRoot = (UnityEngine_Component_o *)sub_1C2D434(&this->fields.eventRootMaskSetActiveAction);
  monitor = v13[1].monitor;
  if ( !monitor )
    goto LABEL_34;
  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_34;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          listRoot,
                                          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !listRoot )
    goto LABEL_34;
  v17 = listRoot;
  listRoot = (UnityEngine_Component_o *)this->fields.scrollBar;
  if ( !listRoot )
    goto LABEL_34;
  m_CachedPtr_high = HIDWORD(v17[1].fields.m_CachedPtr);
  v19 = monitor[6];
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listRoot, 0);
  if ( !listRoot )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 2 * m_CachedPtr_high < v19, 0);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !listRoot )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       listRoot,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24180/*"treasurechest_btn"*/, 0);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !listRoot )
    goto LABEL_34;
  UIButton__set_normalSprite((UIButton_o *)listRoot, (System_String_o *)StringLiteral_24180/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_34;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    sub_1C2D6F4(listRoot, v15, v21, v22);
  listRoot = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !listRoot )
    goto LABEL_34;
  UILabel__set_effectColor((UILabel_o *)listRoot, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v24;
  sub_1C2D434(&this->fields.resultItemObjList);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5800/*"EXPEDITION_EVENT_POINT"*/, 0);
  if ( !this->fields.viewChangeButton )
    goto LABEL_34;
  v25 = (Il2CppObject *)listRoot;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                          0);
  if ( !listRoot )
    goto LABEL_34;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                          listRoot,
                                          1,
                                          (const MethodInfo_30C55A4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78016160);
  if ( !this->fields.closeButton )
    goto LABEL_34;
  v26 = (UILabel_o *)listRoot;
  listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)this->fields.closeButton,
                                          0);
  if ( !listRoot )
    goto LABEL_34;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 listRoot,
                                 1,
                                 (const MethodInfo_30C55A4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78016160);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5806/*"EXPEDITION_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !v26 )
    goto LABEL_34;
  UILabel__set_text(v26, (System_String_o *)listRoot, 0);
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5798/*"EXPEDITION_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)listRoot, 0);
  titleLabel = this->fields.titleLabel;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5785/*"EXPEDITION_BOX_EVENT_POINT_REWARD_TITLE"*/, 0);
  listRoot = (UnityEngine_Component_o *)System_String__Format(v29, v25, 0);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, (System_String_o *)listRoot, 0);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
  if ( !titleNextItemLabel )
    goto LABEL_34;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)listRoot, 0);
  titleAtLabel = this->fields.titleAtLabel;
  listRoot = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5801/*"EXPEDITION_EVENT_POINT_REWARD"*/, 0);
  if ( !titleAtLabel )
    goto LABEL_34;
  UILabel__set_text(titleAtLabel, (System_String_o *)listRoot, 0);
  listRoot = (UnityEngine_Component_o *)this->fields.atNameLabel;
  if ( !listRoot )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)listRoot, (System_String_o *)v25, 0);
  listRoot = (UnityEngine_Component_o *)this->fields.pointRewardRoot;
  if ( !listRoot )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24186/*"treasurechest_img_bg_reward"*/, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  listRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listRoot )
    goto LABEL_34;
  listRoot = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)listRoot,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                (EventRewardMaster_o *)listRoot,
                                                eventId,
                                                EventPointNoGroup,
                                                0),
        !eventExpeditionEntity)
    || (v33 = (EventRewardEntity_o *)listRoot,
        AtlasManager__SetItem(this->fields.eventPointSprite, eventExpeditionEntity->fields.eventPointItemId, 0),
        ExpeditionPointRewardDialogComponent__SetNextItemLabel(this, EventPointNoGroup, v33, v34),
        this->fields.closeCallbackFunc = closeCallback,
        sub_1C2D434(&this->fields.closeCallbackFunc),
        (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_34:
    sub_1C2D6EC(listRoot, v15);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0);
  v35 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v35, v13, Method_ExpeditionPointRewardDialogComponent___c__DisplayClass27_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0);
}


void ExpeditionPointRewardDialogComponent__SetNextItemLabel(
        ExpeditionPointRewardDialogComponent_o *this,
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

  if ( (byte_4C2161B & 1) == 0 )
  {
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C2D490(&StringLiteral_2821/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C2D490(&StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    byte_4C2161B = 1;
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
    isQp = System_String__Concat_63457864(nameText, countText, 0);
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


void ExpeditionPointRewardDialogComponent__SetPossession(
        ExpeditionPointRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2161F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2161F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                objectId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_16:
    sub_1C2D6EC(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0);
}


void ExpeditionPointRewardDialogComponent__SetResultData(
        ExpeditionPointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ExpeditionPointRewardDialogComponent_o *v5; // x20
  int max_length; // w8
  __int64 v7; // x26
  BattleDropItem_o *v8; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v11; // x10
  int v12; // w29
  Il2CppObject *prefabResultItem; // x22
  ExpeditionPointRewardDialogComponent_o *v14; // x22
  ExpeditionPointRewardDialogComponent_o *v15; // x25
  int v16; // w8
  ItemIconComponent_o *v17; // x25
  ExpeditionPointRewardDialogComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v23; // x8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4C2161A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ExpeditionPointRewardDialogComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2161A = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      do
      {
        if ( (unsigned int)v7 >= max_length )
          sub_1C2D6F4(this, rewards, method, v3);
        v8 = rewards->m_Items[v7];
        if ( !v8 )
          goto LABEL_31;
        type = v8->fields.type;
        objectId = v8->fields.objectId;
        v11 = 44;
        if ( v8->fields.originalNum > 0 )
          v11 = 52;
        v12 = *(_DWORD *)((char *)&v8->klass + v11);
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                           prefabResultItem,
                                                           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v14 = this;
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.listRoot, 0);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)v14,
                                                           0);
        v15 = this;
        if ( !byte_4C20DA1 )
        {
          this = (ExpeditionPointRewardDialogComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        if ( !v15 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v15,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)v14,
                                                           0);
        if ( !this )
          goto LABEL_31;
        v24.fields.x = v5->fields.iconScale;
        v24.fields.y = v24.fields.x;
        v24.fields.z = v24.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v24, 0);
        this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v14,
                                                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v16 = v12 <= 1 ? -1 : v12;
        v17 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)this, type, objectId, v16, 0, 0);
        ExpeditionPointRewardDialogComponent__SetPossession(v18, v17, objectId, v19);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v14, 1, 0);
        this = (ExpeditionPointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        m_CachedPtr = this->fields.m_CachedPtr;
        v21 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v14,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v14;
          sub_1C2D434(v23 + 32);
        }
        this = (ExpeditionPointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this
          || (this = (ExpeditionPointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
        {
LABEL_31:
          sub_1C2D6EC(this, rewards);
        }
        this = (ExpeditionPointRewardDialogComponent_o *)((__int64 (__fastcall *)(ExpeditionPointRewardDialogComponent_o *, const char *))this->klass[1]._1.name)(
                                                           this,
                                                           this->klass[1]._1.namespaze);
        max_length = rewards->max_length;
        ++v7;
      }
      while ( (int)v7 < max_length );
    }
  }
}


UnityEngine_GameObject_o *ExpeditionPointRewardDialogComponent__get_closeBtnObject(
        ExpeditionPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C21620 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21620 = 1;
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


void ExpeditionPointRewardDialogComponent___c__DisplayClass27_0___ctor(
        ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExpeditionPointRewardDialogComponent___c__DisplayClass27_0___Open_b__0(
        ExpeditionPointRewardDialogComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExpeditionPointRewardDialogComponent_o *_4__this; // x0
  struct ExpeditionPointRewardDialogComponent_o *v5; // x8

  if ( (byte_4C21622 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    byte_4C21622 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ExpeditionPointRewardDialogComponent__SetResultData(_4__this, this->fields.expeditionRewards, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
}