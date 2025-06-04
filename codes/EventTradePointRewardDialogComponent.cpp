void __fastcall EventTradePointRewardDialogComponent___ctor(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4AFCAE4 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Color___TypeInfo, v3);
    byte_4AFCAE4 = 1;
  }
  this->fields.iconScale = 0.85;
  this->fields.viewChangeButtonLabelEffectColors = (struct UnityEngine_Color_array *)sub_1BC30B0(
                                                                                       UnityEngine_Color___TypeInfo,
                                                                                       2LL);
  sub_1BC2FAC(&this->fields.viewChangeButtonLabelEffectColors);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent__EndClose(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  EventTradePointRewardDialogComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BC2FAC(&this->fields.closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall EventTradePointRewardDialogComponent__Init(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent__OnClickCloseButton(
        EventTradePointRewardDialogComponent_o *this,
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
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v15; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4AFCAE1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1BC3008(&Method_EventTradePointRewardDialogComponent_EndClose__, v6);
    sub_1BC3008(&Method_EventTradePointRewardDialogComponent_OnClickCloseButton__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4AFCAE1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v10 = Method_EventTradePointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventTradePointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BC3020(Method_EventTradePointRewardDialogComponent_OnClickCloseButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1BC3264(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v16.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_EventTradePointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
  }
}


void __fastcall EventTradePointRewardDialogComponent__OnClickSwitchShowMode(
        EventTradePointRewardDialogComponent_o *this,
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
  __int64 v18; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v25; // w20
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4AFCAE2 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1BC3008(&Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1BC3008(&StringLiteral_23964/*"treasurechest_btn"*/, v8);
    sub_1BC3008(&StringLiteral_23966/*"treasurechest_btn_on"*/, v9);
    byte_4AFCAE2 = 1;
  }
  v10 = Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BC3020(Method_EventTradePointRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23964/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23966/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1BC3264(viewChangeButton, v12);
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
    sub_1BC326C(viewChangeButton, v12, v18);
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
  v26.fields.a = *p_r;
  v26.fields.b = *p_a;
  v26.fields.g = *p_b;
  v26.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v26, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v25 = 0;
  while ( v25 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v25,
                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v25;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradePointRewardDialogComponent__Open(
        EventTradePointRewardDialogComponent_o *this,
        int32_t eventPointItemId,
        int32_t eventId,
        BattleDropItem_array *tradeRewards,
        bool isReceiveAll,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  EventTradePointRewardDialogComponent_o *v12; // x20
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  EventTradePointRewardDialogComponent_o *v34; // x8
  int basePanelList_high; // w25
  signed int max_length; // w22
  Il2CppObject *Component_object; // x25
  __int64 v38; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x25
  System_Collections_Generic_List_object__o *v41; // x25
  Il2CppObject *v42; // x25
  EventEntity_o *v43; // x26
  EventTradePointRewardDialogComponent_o *v44; // x27
  bool IsEventPeriod; // w0
  UILabel_o *v46; // x26
  uint32_t cctor_finished; // w9
  __int64 *v48; // x8
  UILabel_o *titleLabel; // x24
  System_String_o *v50; // x0
  UILabel_o *titleNextItemLabel; // x24
  UILabel_o *titleAtLabel; // x24
  UISprite_o *eventPointBg; // x24
  int64_t EventPointNoGroup; // x24
  EventRewardEntity_o *NextEventRewardEntity; // x23
  const MethodInfo *v56; // x3
  System_Action_o *v57; // x21
  const MethodInfo *v58; // x3

  v12 = this;
  if ( (byte_4AFCADE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&eventPointItemId);
    sub_1BC3008(&AtlasManager_TypeInfo, v13);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76831424, v14);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIGrid___, v15);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v17);
    sub_1BC3008(&Method_DataManager_GetMaster_EventRewardMaster___, v18);
    sub_1BC3008(&DataManager_TypeInfo, v19);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v20);
    sub_1BC3008(&Method_EventTradePointRewardDialogComponent__Open_b__24_0__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v22);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v23);
    sub_1BC3008(&LocalizationManager_TypeInfo, v24);
    sub_1BC3008(&StringLiteral_13350/*"TRADE_EVENT_POINT_NEXT_REWARD"*/, v25);
    sub_1BC3008(&StringLiteral_13352/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/, v26);
    sub_1BC3008(&StringLiteral_23964/*"treasurechest_btn"*/, v27);
    sub_1BC3008(&StringLiteral_13351/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/, v28);
    sub_1BC3008(&StringLiteral_23970/*"treasurechest_img_bg_reward"*/, v29);
    sub_1BC3008(&StringLiteral_13349/*"TRADE_EVENT_POINT"*/, v30);
    sub_1BC3008(&StringLiteral_13365/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, v31);
    sub_1BC3008(&StringLiteral_2803/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, v32);
    this = (EventTradePointRewardDialogComponent_o *)sub_1BC3008(&StringLiteral_13353/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/, v33);
    byte_4AFCADE = 1;
  }
  v12->fields.state = 1;
  if ( !tradeRewards )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.listRoot;
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
  if ( !this )
    goto LABEL_49;
  v34 = this;
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.scrollBar;
  if ( !this )
    goto LABEL_49;
  basePanelList_high = HIDWORD(v34->fields.basePanelList);
  max_length = tradeRewards->max_length;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 2 * basePanelList_high < max_length, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButton;
  if ( !this )
    goto LABEL_49;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23964/*"treasurechest_btn"*/, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButton;
  v12->fields.isShowPossessionNum = 0;
  if ( !this )
    goto LABEL_49;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_23964/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = v12->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_49;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    sub_1BC326C(this, *(_QWORD *)&eventPointItemId, v38);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.viewChangeButtonLabel;
  if ( !this )
    goto LABEL_49;
  UILabel__set_effectColor(
    (UILabel_o *)this,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = v12->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13365/*"TRADE_EVENT_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_49;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)this, 0LL);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v12->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v41;
  sub_1BC2FAC(&v12->fields.resultItemObjList);
  v42 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_13349/*"TRADE_EVENT_POINT"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                     eventId,
                                                     (const MethodInfo_32AF070 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !v12->fields.closeButton )
    goto LABEL_49;
  v43 = (EventEntity_o *)this;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)v12->fields.closeButton,
                                                     0LL);
  if ( !this )
    goto LABEL_49;
  this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                     (UnityEngine_Component_o *)this,
                                                     1,
                                                     (const MethodInfo_2FF8AB8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76831424);
  if ( !v43 )
    goto LABEL_49;
  v44 = this;
  IsEventPeriod = EventEntity__IsEventPeriod(v43, 0LL, 0LL);
  v46 = IsEventPeriod ? (UILabel_o *)v44 : 0LL;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( !IsEventPeriod || isReceiveAll )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = &StringLiteral_13351/*"TRADE_EVENT_POINT_REWARD_DIALOG_CANCEL"*/;
    v46 = (UILabel_o *)v44;
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = &StringLiteral_13352/*"TRADE_EVENT_POINT_REWARD_DIALOG_NEXT"*/;
  }
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
  if ( !v46 )
    goto LABEL_49;
  UILabel__set_text(v46, (System_String_o *)this, 0LL);
  titleLabel = v12->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13353/*"TRADE_EVENT_POINT_REWARD_DIALOG_TITLE"*/, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)System_String__Format(v50, v42, 0LL);
  if ( !titleLabel )
    goto LABEL_49;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  titleNextItemLabel = v12->fields.titleNextItemLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2803/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_49;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)this, 0LL);
  titleAtLabel = v12->fields.titleAtLabel;
  this = (EventTradePointRewardDialogComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13350/*"TRADE_EVENT_POINT_NEXT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_49;
  UILabel__set_text(titleAtLabel, (System_String_o *)this, 0LL);
  this = (EventTradePointRewardDialogComponent_o *)v12->fields.atNameLabel;
  if ( !this )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v42, 0LL);
  eventPointBg = v12->fields.eventPointBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(eventPointBg, (System_String_o *)StringLiteral_23970/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(v12->fields.eventPointRewardBg, (System_String_o *)StringLiteral_23970/*"treasurechest_img_bg_reward"*/, 0LL);
  EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradePointRewardDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventRewardMaster___);
  if ( !this
    || (NextEventRewardEntity = EventRewardMaster__GetNextEventRewardEntity(
                                  (EventRewardMaster_o *)this,
                                  eventId,
                                  EventPointNoGroup,
                                  0LL),
        AtlasManager__SetItem(v12->fields.eventPointSprite, eventPointItemId, 0LL),
        EventTradePointRewardDialogComponent__SetNextItemLabel(v12, EventPointNoGroup, NextEventRewardEntity, v56),
        v12->fields.closeCallbackFunc = closeCallback,
        sub_1BC2FAC(&v12->fields.closeCallbackFunc),
        (this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)v12,
                                                            0LL)) == 0LL) )
  {
LABEL_49:
    sub_1BC3264(this, *(_QWORD *)&eventPointItemId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v57 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)v12, Method_EventTradePointRewardDialogComponent__Open_b__24_0__, 0LL);
  EventTradePointRewardDialogComponent__SetResultData(v12, tradeRewards, v57, v58);
}


void __fastcall EventTradePointRewardDialogComponent__SetNextItemLabel(
        EventTradePointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *v12; // x22
  System_String_o *v13; // x23
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *isQp; // x0
  __int64 v19; // x1
  UILabel_o *nextItemLabel; // x19
  System_String_o *v21; // x1
  UILabel_o *atLabel; // x20
  int64_t v23; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4AFCAE0 & 1) == 0 )
  {
    sub_1BC3008(&long_TypeInfo, userEventPoint);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_113/*" "*/, v8);
    sub_1BC3008(&StringLiteral_2808/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, v9);
    sub_1BC3008(&StringLiteral_2806/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, v10);
    sub_1BC3008(&StringLiteral_2804/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, v11);
    byte_4AFCAE0 = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2806/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, isQp, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      isQp = LocalizationManager__Get((System_String_o *)StringLiteral_2804/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
        goto LABEL_14;
    }
LABEL_17:
    sub_1BC3264(isQp, v19);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v12 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2808/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v23 = eventRewardEnt->fields.point - userEventPoint;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v14, v15, v16);
  isQp = System_String__Format(v13, v17, 0LL);
  if ( !v12 )
    goto LABEL_17;
  UILabel__set_text(v12, isQp, 0LL);
  isQp = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  nextItemLabel = this->fields.nextItemLabel;
  if ( ((unsigned __int8)isQp & 1) == 0 )
  {
    isQp = System_String__Concat_62386896(nameText, (System_String_o *)StringLiteral_113/*" "*/, countText, 0LL);
    if ( !nextItemLabel )
      goto LABEL_17;
LABEL_14:
    v21 = isQp;
    goto LABEL_15;
  }
  if ( !nextItemLabel )
    goto LABEL_17;
  v21 = countText;
LABEL_15:
  UILabel__set_text(nextItemLabel, v21, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent__SetResultData(
        EventTradePointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  EventTradePointRewardDialogComponent_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  signed int max_length; // w8
  __int64 v11; // x27
  BattleDropItem_o *v12; // x8
  int32_t objectId; // w24
  int32_t type; // w25
  __int64 v15; // x10
  int v16; // w19
  UnityEngine_Transform_o *listRoot; // x23
  Il2CppObject *prefabResultItem; // x26
  EventTradePointRewardDialogComponent_o *v19; // x23
  EventTradePointRewardDialogComponent_o *v20; // x26
  int32_t v21; // w3
  ItemIconComponent_o *v22; // x26
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4AFCADF & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UIGrid___, rewards);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v8);
    this = (EventTradePointRewardDialogComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4AFCADF = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1BC326C(this, rewards, callBack);
        v12 = rewards->m_Items[v11];
        if ( !v12 )
          break;
        type = v12->fields.type;
        objectId = v12->fields.objectId;
        v15 = 44LL;
        if ( v12->fields.originalNum > 0 )
          v15 = 52LL;
        v16 = *(_DWORD *)((char *)&v12->klass + v15);
        listRoot = v5->fields.listRoot;
        prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__50900816(
                                                           prefabResultItem,
                                                           listRoot,
                                                           (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
        if ( !this )
          break;
        v19 = this;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0LL);
        v20 = this;
        if ( !byte_4AFBDB1 )
        {
          this = (EventTradePointRewardDialogComponent_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, rewards);
          byte_4AFBDB1 = 1;
        }
        if ( !v20 )
          break;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v20,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)v19,
                                                           0LL);
        if ( !this )
          break;
        v28.fields.x = v5->fields.iconScale;
        v28.fields.y = v28.fields.x;
        v28.fields.z = v28.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v28, 0LL);
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v19,
                                                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          break;
        v21 = v16 <= 1 ? -1 : v16;
        v22 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_39952716((ItemIconComponent_o *)this, type, objectId, v21, 0, 0LL);
        ItemIconComponent__CalcSetPossession(v22, type, objectId, 0LL);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v19, 1, 0LL);
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.resultItemObjList;
        if ( !this )
          break;
        v23 = *(_QWORD *)&this->fields.m_CachedPtr;
        v24 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v23 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v19,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = v23 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v26 + 32) = v19;
          sub_1BC2FAC(v26 + 32);
        }
        this = (EventTradePointRewardDialogComponent_o *)v5->fields.listRoot;
        if ( !this )
          break;
        this = (EventTradePointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
        if ( !this )
          break;
        this = (EventTradePointRewardDialogComponent_o *)((__int64 (__fastcall *)(EventTradePointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                           this,
                                                           this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_29;
      }
LABEL_31:
      sub_1BC3264(this, rewards);
    }
  }
LABEL_29:
  this = (EventTradePointRewardDialogComponent_o *)v5->fields.scrollView;
  if ( !this )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent___Open_b__24_0(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4AFCAE5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventTradePointRewardDialogComponent__Open_b__24_1__, v3);
    byte_4AFCAE5 = 1;
  }
  v4 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventTradePointRewardDialogComponent__Open_b__24_1__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
}


void __fastcall EventTradePointRewardDialogComponent___Open_b__24_1(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall EventTradePointRewardDialogComponent__get_closeBtnObject(
        EventTradePointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4AFCAE3 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFCAE3 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}