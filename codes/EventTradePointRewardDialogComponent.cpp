void EventTradePointRewardDialogComponent___ctor(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0

  if ( (byte_4CE8FC8 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Color___TypeInfo);
    byte_4CE8FC8 = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1C7BB90(UnityEngine_Color___TypeInfo, 2);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1C7BA8C(&this->fields.viewChangeButtonLabelEffectColors, v3);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradePointRewardDialogComponent__EndClose(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  EventTradePointRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C7BA8C(&this->fields.closeCallbackFunc, 0);
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
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradePointRewardDialogComponent__OnClickCloseButton(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v8; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CE8FC5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_EventTradePointRewardDialogComponent_EndClose__);
    sub_1C7BAE8(&Method_EventTradePointRewardDialogComponent_OnClickCloseButton__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8FC5 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradePointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradePointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_EventTradePointRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1C7BD40(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_EventTradePointRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v8, 0);
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
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v17; // w20
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CE8FC6 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C7BAE8(&StringLiteral_24441/*"treasurechest_btn"*/);
    sub_1C7BAE8(&StringLiteral_24443/*"treasurechest_btn_on"*/);
    byte_4CE8FC6 = 1;
  }
  v3 = Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v8 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24441/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24443/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v8, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1C7BD40(viewChangeButton, v5);
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
    sub_1C7BD48(viewChangeButton);
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
                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
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
  int basePanelList_high; // w25
  int max_length; // w22
  Il2CppObject *Component_object; // x25
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x25
  System_Collections_Generic_List_object__o *v19; // x25
  Il2CppObject *v20; // x25
  EventEntity_o *v21; // x26
  EventTradePointRewardDialogComponent_o *v22; // x27
  bool IsEventPeriod; // w0
  UILabel_o *v24; // x26
  uint32_t cctor_finished; // w9
  __int64 *v26; // x8
  UILabel_o *titleLabel; // x24
  System_String_o *v28; // x0
  UILabel_o *titleNextItemLabel; // x24
  UILabel_o *titleAtLabel; // x24
  UISprite_o *eventPointBg; // x24
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *NextEventRewardEntity; // x23
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x3

  v12 = this;
  if ( (byte_4CE8FC2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____78814056);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventRewardMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_EventTradePointRewardDialogComponent__Open_b__24_0__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13535/*"TRADE_EVENT_POINT_NEXT_REWARD"*/);
    sub_1C7BAE8(&StringLiteral_13537/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/);
    sub_1C7BAE8(&StringLiteral_24441/*"treasurechest_btn"*/);
    sub_1C7BAE8(&StringLiteral_13536/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_24447/*"treasurechest_img_bg_reward"*/);
    sub_1C7BAE8(&StringLiteral_13534/*"TRADE_EVENT_POINT"*/);
    sub_1C7BAE8(&StringLiteral_13550/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_1C7BAE8(&StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    this = (EventTradePointRewardDialogComponent_o *)sub_1C7BAE8(&StringLiteral_13538/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/);
    byte_4CE8FC2 = 1;
  }
  v12->fields.state = 1;
  if ( !tradeRewards )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.listRoot;
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_49;
  v13 = this;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.scrollBar;
  if ( !this )
    goto LABEL_49;
  basePanelList_high = HIDWORD(v13->fields.basePanelList);
  max_length = tradeRewards->max_length;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 2 * basePanelList_high < max_length, 0);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButton;
  if ( !this )
    goto LABEL_49;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24441/*"treasurechest_btn"*/, 0);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButton;
  v12->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_49;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_24441/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = v12->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_49;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    sub_1C7BD48(this);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButtonLabel;
  if ( !this )
    goto LABEL_49;
  UILabel__set_effectColor((UILabel_o *)this, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  viewChangeButtonLabel = v12->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13550/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !viewChangeButtonLabel )
    goto LABEL_49;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v12->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v19;
  sub_1C7BA8C(&v12->fields.resultItemObjList, v19);
  v20 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_13534/*"TRADE_EVENT_POINT"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     eventId,
                                                     (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !v12->fields.closeButton )
    goto LABEL_49;
  v21 = (EventEntity_o *)this;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)v12->fields.closeButton,
                                                     0);
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     1,
                                                     (const MethodInfo_3167048 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78814056);
  if ( !v21 )
    goto LABEL_49;
  v22 = this;
  IsEventPeriod = EventEntity__IsEventPeriod(v21, 0, 0);
  v24 = IsEventPeriod ? (UILabel_o *)v22 : 0LL;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( !IsEventPeriod || isReceiveAll )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = &StringLiteral_13536/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/;
    v24 = (UILabel_o *)v22;
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = &StringLiteral_13537/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/;
  }
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)*v26, 0);
  if ( !v24 )
    goto LABEL_49;
  UILabel__set_text(v24, (System_String_o *)this, 0);
  titleLabel = v12->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13538/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/, 0);
  this = (EventTradePointRewardDialogComponent_o *)System_String__Format(v28, v20, 0);
  if ( !titleLabel )
    goto LABEL_49;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0);
  titleNextItemLabel = v12->fields.titleNextItemLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
  if ( !titleNextItemLabel )
    goto LABEL_49;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0);
  titleAtLabel = v12->fields.titleAtLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13535/*"TRADE_EVENT_POINT_NEXT_REWARD"*/, 0);
  if ( !titleAtLabel )
    goto LABEL_49;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.atNameLabel;
  if ( !this )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v20, 0);
  eventPointBg = v12->fields.eventPointBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_24447/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(v12->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24447/*"treasurechest_img_bg_reward"*/, 0);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventRewardMaster___);
  if ( !this
    || (NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                  (EventRewardMaster_o *)this,
                                  eventId,
                                  EventPointNoGroup,
                                  0),
        AtlasManager__SetItem(v12->fields.eventPointSprite, eventPointItemId, 0),
        EventTradePointRewardDialogComponent__SetNextItemLabel(v12, EventPointNoGroup, NextEventRewardEntity, v34),
        v12->fields.closeCallbackFunc = closeCallback,
        sub_1C7BA8C(&v12->fields.closeCallbackFunc, closeCallback),
        (this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)v12,
                                                            0)) == 0) )
  {
LABEL_49:
    sub_1C7BD40(this, *(_QWORD *)&eventPointItemId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v35 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v12, Method_EventTradePointRewardDialogComponent__Open_b__24_0__, 0);
  EventTradePointRewardDialogComponent__SetResultData(v12, tradeRewards, v35, v36);
}


void EventTradePointRewardDialogComponent__SetNextItemLabel(
        EventTradePointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  UILabel_o *v7; // x22
  System_String_o *v8; // x23
  Il2CppObject *v9; // x0
  System_String_o *isQp; // x0
  __int64 v11; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v13; // x1
  UILabel_o *atLabel; // x20
  int64_t v15; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CE8FC4 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_113/*" "*/);
    sub_1C7BAE8(&StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C7BAE8(&StringLiteral_2821/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C7BAE8(&StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    byte_4CE8FC4 = 1;
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
    sub_1C7BD40(isQp, v11);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0);
  v7 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v15 = eventRewardEnt->fields.point - userEventPoint;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
  isQp = System_String__Format(v8, v9, 0);
  if ( !v7 )
    goto LABEL_17;
  UILabel__set_text(v7, isQp, 0);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_64215176(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0);
    if ( !nextItemLabel )
      goto LABEL_17;
LABEL_14:
    v13 = isQp;
    goto LABEL_15;
  }
  if ( !nextItemLabel )
    goto LABEL_17;
  v13 = countText;
LABEL_15:
  UILabel__set_text(nextItemLabel, v13, 0);
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
  int32_t objectId; // w24
  int32_t type; // w25
  __int64 v11; // x10
  int v12; // w19
  UnityEngine_Transform_o *listRoot; // x23
  Il2CppObject *prefabResultItem; // x26
  EventTradePointRewardDialogComponent_o *v15; // x23
  EventTradePointRewardDialogComponent_o *v16; // x26
  int v17; // w8
  ItemIconComponent_o *v18; // x26
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v22; // x8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4CE8FC3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    this = (EventTradePointRewardDialogComponent_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8FC3 = 1;
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
          sub_1C7BD48(this);
        v8 = rewards->m_Items[v7];
        if ( !v8 )
          break;
        type = v8->fields.type;
        objectId = v8->fields.objectId;
        v11 = 44;
        if ( v8->fields.originalNum > 0 )
          v11 = 52;
        v12 = *(_DWORD *)((char *)&v8->klass + v11);
        listRoot = v5->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__52412380(
                                                           prefabResultItem,
                                                           listRoot,
                                                           (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
        if ( !this )
          break;
        v15 = this;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
        v16 = this;
        if ( !byte_4CE7E59 )
        {
          this = (EventTradePointRewardDialogComponent_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E59 = 1;
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
        v24.fields.x = v5->fields.iconScale;
        v24.fields.y = v24.fields.x;
        v24.fields.z = v24.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v24, 0);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v15,
                                                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v17 = v12 <= 1 ? -1 : v12;
        v18 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_41487788((ItemIconComponent_o *)this, type, objectId, v17, 0, 0);
        ItemIconComponent__CalcSetPossession(v18, type, objectId, 0);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v15, 1, 0);
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v20 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v15,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v22 + 32) = v15;
          sub_1C7BA8C(v22 + 32, v15);
        }
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
      sub_1C7BD40(this, rewards);
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

  if ( (byte_4CE8FC9 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventTradePointRewardDialogComponent__Open_b__24_1__);
    byte_4CE8FC9 = 1;
  }
  v3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CE8FC7 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8FC7 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C7BD40(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}