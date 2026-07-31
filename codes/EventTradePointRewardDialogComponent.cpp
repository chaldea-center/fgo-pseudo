void EventTradePointRewardDialogComponent___ctor(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct UnityEngine_Color_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_5932C75 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&UnityEngine_Color___TypeInfo);
    byte_5932C75 = 1;
  }
  v3 = UnityEngine_Color___TypeInfo;
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_21FFD10(v3, 2);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11, v12);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradePointRewardDialogComponent__EndClose(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  EventTradePointRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void EventTradePointRewardDialogComponent__Init(EventTradePointRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradePointRewardDialogComponent__OnClickCloseButton(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *current; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5932C72 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_EventTradePointRewardDialogComponent_EndClose__);
    sub_21FFC50(&Method_EventTradePointRewardDialogComponent_OnClickCloseButton__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C72 = 1;
  }
  state = this->fields.state;
  memset(&v14, 0, sizeof(v14));
  if ( state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventTradePointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradePointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_EventTradePointRewardDialogComponent_OnClickCloseButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_21FFECC(0, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v14.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventTradePointRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0);
  }
}


void EventTradePointRewardDialogComponent__OnClickSwitchShowMode(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v8; // x8
  UISprite_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v18; // w20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5932C73 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&StringLiteral_25463/*"treasurechest_btn"*/);
    sub_21FFC50(&StringLiteral_25465/*"treasurechest_btn_on"*/);
    byte_5932C73 = 1;
  }
  v3 = Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton
    || (isShowPossessionNum
      ? (v8 = (System_String_o **)&StringLiteral_25463/*"treasurechest_btn"*/)
      : (v8 = (System_String_o **)&StringLiteral_25465/*"treasurechest_btn_on"*/),
        (UIButton__set_normalSprite(viewChangeButton, *v8, 0), (viewChangeButton = this->fields.viewChangeButton) == 0)
     || (viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)viewChangeButton,
                                            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
         !this->fields.viewChangeButton)) )
  {
LABEL_27:
    sub_21FFECC(viewChangeButton, v5);
  }
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
  AtlasManager__SetEventUI(v9, normalSprite, 0);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !viewChangeButtonLabelEffectColors )
      goto LABEL_27;
    if ( LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !viewChangeButton )
        goto LABEL_27;
      goto LABEL_21;
    }
LABEL_29:
    sub_21FFED4(viewChangeButton);
  }
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_27;
  if ( (viewChangeButtonLabelEffectColors->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_29;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_27;
LABEL_21:
  v19.fields.a = *p_a;
  v19.fields.b = *p_b;
  v19.fields.g = *p_g;
  v19.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v19, 0);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_27;
  v18 = 0;
  while ( v18 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v18,
                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession((ItemIconComponent_o *)viewChangeButton, this->fields.isShowPossessionNum, 0);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v18;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTradePointRewardDialogComponent__Open(
        EventTradePointRewardDialogComponent_o *this,
        int32_t eventPointItemId,
        int32_t eventId,
        BattleDropItem_array *tradeRewards,
        bool isReceiveAll,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  EventTradePointRewardDialogComponent_o *v12; // x20
  EventTradePointRewardDialogComponent_o *v13; // x8
  int basePanelList_high; // w22
  int max_length; // w21
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Component_object; // x25
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *viewChangeButtonLabel; // x25
  System_Collections_Generic_List_object__o *v23; // x25
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *v32; // x25
  EventEntity_o *v33; // x27
  UILabel_o *v34; // x26
  __int64 v35; // x1
  __int64 v36; // x2
  bool v37; // w24
  System_String_o **v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  UILabel_o *titleLabel; // x24
  System_String_o *v42; // x0
  UILabel_o *titleNextItemLabel; // x24
  UILabel_o *titleAtLabel; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  UISprite_o *eventPointBg; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *NextEventRewardEntity; // x23
  const MethodInfo *v52; // x3
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Action_o *v59; // x21
  const MethodInfo *v60; // x3
  int32_t itemImageId; // [xsp+Ch] [xbp-64h]

  v12 = this;
  if ( (byte_5932C6F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventRewardMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&Method_EventTradePointRewardDialogComponent__Open_b__24_0__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_14005/*"TRADE_EVENT_POINT_NEXT_REWARD"*/);
    sub_21FFC50(&StringLiteral_14007/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/);
    sub_21FFC50(&StringLiteral_25463/*"treasurechest_btn"*/);
    sub_21FFC50(&StringLiteral_14006/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/);
    sub_21FFC50(&StringLiteral_25469/*"treasurechest_img_bg_reward"*/);
    sub_21FFC50(&StringLiteral_14004/*"TRADE_EVENT_POINT"*/);
    sub_21FFC50(&StringLiteral_14020/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_21FFC50(&StringLiteral_2933/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    this = (EventTradePointRewardDialogComponent_o *)sub_21FFC50(&StringLiteral_14008/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/);
    byte_5932C6F = 1;
  }
  v12->fields.state = 1;
  if ( !tradeRewards )
    goto LABEL_43;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.listRoot;
  if ( !this )
    goto LABEL_43;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_43;
  v13 = this;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.scrollBar;
  if ( !this )
    goto LABEL_43;
  basePanelList_high = HIDWORD(v13->fields.basePanelList);
  max_length = tradeRewards->max_length;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 2 * basePanelList_high < max_length, 0);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButton;
  if ( !this )
    goto LABEL_43;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16, v17);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_25463/*"treasurechest_btn"*/, 0);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButton;
  v12->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_43;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_25463/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = v12->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_43;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    sub_21FFED4(this);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButtonLabel;
  if ( !this )
    goto LABEL_43;
  itemImageId = eventPointItemId;
  UILabel__set_effectColor((UILabel_o *)this, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  viewChangeButtonLabel = v12->fields.viewChangeButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14020/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !viewChangeButtonLabel )
    goto LABEL_43;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0);
  v23 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v12->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v23;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.resultItemObjList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v32 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_14004/*"TRADE_EVENT_POINT"*/, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30, v31);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_43;
  this = (EventTradePointRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     eventId,
                                                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !v12->fields.closeButton )
    goto LABEL_43;
  v33 = (EventEntity_o *)this;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)v12->fields.closeButton,
                                                     0);
  if ( !this )
    goto LABEL_43;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     1,
                                                     (const MethodInfo_37EDB8C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____91505240);
  if ( !v33 )
    goto LABEL_43;
  v34 = (UILabel_o *)this;
  v37 = !EventEntity__IsEventPeriod(v33, 0, 0) || isReceiveAll;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
  v38 = (System_String_o **)(v37 ? &StringLiteral_14006/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/ : &StringLiteral_14007/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/);
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get(*v38, 0);
  if ( !v34 )
    goto LABEL_43;
  UILabel__set_text(v34, (System_String_o *)this, 0);
  titleLabel = v12->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_14008/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/, 0);
  this = (EventTradePointRewardDialogComponent_o *)System_String__Format(v42, v32, 0);
  if ( !titleLabel )
    goto LABEL_43;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0);
  titleNextItemLabel = v12->fields.titleNextItemLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2933/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
  if ( !titleNextItemLabel )
    goto LABEL_43;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0);
  titleAtLabel = v12->fields.titleAtLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14005/*"TRADE_EVENT_POINT_NEXT_REWARD"*/, 0);
  if ( !titleAtLabel )
    goto LABEL_43;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.atNameLabel;
  if ( !this )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v32, 0);
  eventPointBg = v12->fields.eventPointBg;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v45, v46);
  AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_25469/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(v12->fields.eventPointRewardBg, (System_String_o *)StringLiteral_25469/*"treasurechest_img_bg_reward"*/, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48, v49);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventRewardMaster___);
  if ( !this
    || (NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                  (EventRewardMaster_o *)this,
                                  eventId,
                                  EventPointNoGroup,
                                  0),
        AtlasManager__SetItem(v12->fields.eventPointSprite, itemImageId, 0),
        EventTradePointRewardDialogComponent__SetNextItemLabel(v12, EventPointNoGroup, NextEventRewardEntity, v52),
        v12->fields.closeCallbackFunc = closeCallback,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v12->fields.closeCallbackFunc,
          (int32_t)closeCallback,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58),
        (this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)v12,
                                                            0)) == 0) )
  {
LABEL_43:
    sub_21FFECC(this, *(_QWORD *)&eventPointItemId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v59 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)v12, Method_EventTradePointRewardDialogComponent__Open_b__24_0__, 0);
  EventTradePointRewardDialogComponent__SetResultData(v12, tradeRewards, v59, v60);
}


void EventTradePointRewardDialogComponent__SetNextItemLabel(
        EventTradePointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *v9; // x22
  System_String_o *v10; // x23
  Il2CppObject *v11; // x0
  System_String_o *isQp; // x0
  __int64 v13; // x1
  UILabel_o *v14; // x19
  System_String_o *v15; // x1
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x19
  int64_t v18; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932C71 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_21FFC50(&StringLiteral_2936/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_21FFC50(&StringLiteral_2934/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    byte_5932C71 = 1;
  }
  countText = 0;
  nameText = 0;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, userEventPoint, eventRewardEnt);
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2936/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2934/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, isQp, 0);
        return;
      }
    }
    goto LABEL_18;
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0);
  v9 = this->fields.atLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v18 = eventRewardEnt->fields.point - userEventPoint;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v18);
  isQp = System_String__Format(v10, v11, 0);
  if ( !v9 )
    goto LABEL_18;
  UILabel__set_text(v9, isQp, 0);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0);
  v14 = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_75481624(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0);
    if ( v14 )
    {
      v15 = isQp;
      goto LABEL_17;
    }
LABEL_18:
    sub_21FFECC(isQp, v13);
  }
  if ( !v14 )
    goto LABEL_18;
  v15 = countText;
LABEL_17:
  UILabel__set_text(v14, v15, 0);
}


void EventTradePointRewardDialogComponent__SetResultData(
        EventTradePointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  EventTradePointRewardDialogComponent_o *v5; // x21
  int max_length; // w8
  __int64 v7; // x27
  BattleDropItem_o *v8; // x8
  Il2CppObject *prefabResultItem; // x23
  UnityEngine_Transform_o *listRoot; // x26
  __int64 v11; // x9
  int32_t type; // w24
  int32_t objectId; // w25
  int v14; // w19
  EventTradePointRewardDialogComponent_o *v15; // x23
  EventTradePointRewardDialogComponent_o *v16; // x26
  int v17; // w8
  ItemIconComponent_o *v18; // x26
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v28; // x8
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_5932C70 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    this = (EventTradePointRewardDialogComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C70 = 1;
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
          sub_21FFED4(this);
        v8 = rewards->m_Items[v7];
        if ( !v8 )
          break;
        listRoot = v5->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        v11 = 44;
        if ( v8->fields.originalNum > 0 )
          v11 = 52;
        type = v8->fields.type;
        objectId = v8->fields.objectId;
        v14 = *(_DWORD *)((char *)&v8->klass + v11);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards, callBack);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__59506996(
                                                           prefabResultItem,
                                                           listRoot,
                                                           (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
        if ( !this )
          break;
        v15 = this;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
        v16 = this;
        if ( !byte_5931940 )
        {
          this = (EventTradePointRewardDialogComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        if ( !v16 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v16,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)v15,
                                                           0);
        if ( !this )
          break;
        v30.fields.x = v5->fields.iconScale;
        v30.fields.y = v30.fields.x;
        v30.fields.z = v30.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v30, 0);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v15,
                                                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v17 = v14 <= 1 ? -1 : v14;
        v18 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, type, objectId, v17, 0, 0);
        ItemIconComponent__CalcSetPossession(v18, type, objectId, 0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v15, 1, 0);
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v26 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v15,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v28 + 32) = v15;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v15, v19, v20, v21, v22, v23, v24);
        }
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !this )
          break;
        this = (EventTradePointRewardDialogComponent_o *)((__int64 (__fastcall *)(EventTradePointRewardDialogComponent_o *, const char *))this->klass[1]._1.name)(
                                                           this,
                                                           this->klass[1]._1.namespaze);
        max_length = rewards->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_29;
      }
LABEL_31:
      sub_21FFECC(this, rewards);
    }
  }
LABEL_29:
  this = (EventTradePointRewardDialogComponent_o *)v5->fields.scrollView;
  if ( !this )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
  ActionExtensions__Call(callBack, 0);
}


void EventTradePointRewardDialogComponent___Open_b__24_0(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_5932C76 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventTradePointRewardDialogComponent__Open_b__24_1__);
    byte_5932C76 = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventTradePointRewardDialogComponent__Open_b__24_1__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0, 0);
}


void EventTradePointRewardDialogComponent___Open_b__24_1(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *EventTradePointRewardDialogComponent__get_closeBtnObject(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5932C74 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C74 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}