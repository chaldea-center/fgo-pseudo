void __fastcall EventCraftRewardDialogComponent___ctor(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B48C92 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Color___TypeInfo, v3);
    byte_4B48C92 = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_1BDB920(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v4, v5, v6);
  this->fields.maxItemDrawNum = 18;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftRewardDialogComponent__Init(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftRewardDialogComponent__OnClickCloseButton(
        EventCraftRewardDialogComponent_o *this,
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
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  EventCraftRewardDialogComponent___c_c *v14; // x0
  System_Action_object__o *_9__21_0; // x21
  Il2CppObject *v16; // x22
  struct EventCraftRewardDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x20

  if ( (byte_4B48C8E & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_bool___, method);
    sub_1BDB878(&System_Action_ItemIconComponent__TypeInfo, v3);
    sub_1BDB878(&System_Action_TypeInfo, v4);
    sub_1BDB878(&Method_EventCraftRewardDialogComponent_OnClickCloseButton__, v5);
    sub_1BDB878(&Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__, v7);
    sub_1BDB878(&Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__, v8);
    sub_1BDB878(&EventCraftRewardDialogComponent___c_TypeInfo, v9);
    byte_4B48C8E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2F82EDC *)Method_ActionExtensions_Call_bool___);
    v10 = Method_EventCraftRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BDB890(Method_EventCraftRewardDialogComponent_OnClickCloseButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
    resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
    v14 = EventCraftRewardDialogComponent___c_TypeInfo;
    if ( !EventCraftRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftRewardDialogComponent___c_TypeInfo);
      v14 = EventCraftRewardDialogComponent___c_TypeInfo;
    }
    _9__21_0 = (System_Action_object__o *)v14->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = EventCraftRewardDialogComponent___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__21_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(
        _9__21_0,
        v16,
        Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__,
        0LL);
      static_fields = EventCraftRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = (struct System_Action_ItemIconComponent__o *)_9__21_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v18, v19);
    }
    if ( !resultItemObjList )
      sub_1BDBAD4(v14, v12);
    System_Collections_Generic_List_object___ForEach(
      resultItemObjList,
      (System_Action_T__o *)_9__21_0,
      (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    v20 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v20, 0LL);
  }
}


void __fastcall EventCraftRewardDialogComponent__OnClickSwitchShowMode(
        EventCraftRewardDialogComponent_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v17; // x20
  System_String_o *normalSprite; // x21
  __int64 v19; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x10
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x9
  float *p_a; // x11
  float *p_r; // x10
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  System_Action_object__o *v27; // x21
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B48C8F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_ItemIconComponent__TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1BDB878(&Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__, v5);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__, v7);
    sub_1BDB878(&StringLiteral_24255/*"treasurechest_btn"*/, v8);
    sub_1BDB878(&StringLiteral_24257/*"treasurechest_btn_on"*/, v9);
    byte_4B48C8F = 1;
  }
  v10 = Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BDB890(Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_22;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24255/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24257/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  viewChangeButton = (UIButton_o *)GameObjectExtensions__SafeGetComponent_object_(
                                     gameObject,
                                     (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_22;
  v17 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v17, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_22:
    sub_1BDBAD4(viewChangeButton, v12);
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
        goto LABEL_22;
      goto LABEL_20;
    }
LABEL_23:
    sub_1BDBADC(viewChangeButton, v12, v19);
  }
  if ( max_length <= 1 )
    goto LABEL_23;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_22;
LABEL_20:
  v28.fields.a = *p_r;
  v28.fields.b = *p_a;
  v28.fields.g = *p_b;
  v28.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v28, 0LL);
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  v27 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ItemIconComponent__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)this,
    Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__,
    0LL);
  if ( !resultItemObjList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    resultItemObjList,
    (System_Action_T__o *)v27,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftRewardDialogComponent__Open(
        EventCraftRewardDialogComponent_o *this,
        int32_t eventId,
        BattleDropItem_array *rewardItems,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        bool isReceiveAll,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v13; // w21
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
  __int64 v34; // x22
  void *viewChangeButton; // x0
  __int64 commonConsumeId; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x23
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_List_object__o *v46; // x25
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  UILabel_o *titleLabel; // x25
  System_String_o *v50; // x0
  Il2CppObject *Empty; // x1
  __int64 v52; // x2
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x25
  Il2CppObject *Component_object; // x25
  Il2CppObject *Master_object; // x25
  int v57; // w8
  void *v58; // x24
  unsigned int v59; // w29
  __int64 v60; // x21
  char v61; // w20
  bool IsEventPeriod; // w8
  UILabel_o *closeButtonLabel; // x21
  char v64; // w20
  __int64 *v65; // x8
  System_Action_o *v66; // x20
  int32_t v67; // [xsp+4h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v13 = eventId;
  if ( (byte_4B48C8C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&AtlasManager_TypeInfo, v15);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_1BDB878(&Method_DataManager_GetMaster_CommonConsumeMaster___, v17);
    sub_1BDB878(&Method_DataManager_GetMaster_EventMaster___, v18);
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, v19);
    sub_1BDB878(&DataManager_TypeInfo, v20);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v21);
    sub_1BDB878(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__, v22);
    sub_1BDB878(&System_Collections_Generic_List_ItemIconComponent__TypeInfo, v23);
    sub_1BDB878(&LocalizationManager_TypeInfo, v24);
    sub_1BDB878(&NetworkManager_TypeInfo, v25);
    sub_1BDB878(&string_TypeInfo, v26);
    sub_1BDB878(&Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__, v27);
    sub_1BDB878(&EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo, v28);
    sub_1BDB878(&StringLiteral_13512/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v29);
    sub_1BDB878(&StringLiteral_24255/*"treasurechest_btn"*/, v30);
    sub_1BDB878(&StringLiteral_13511/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v31);
    sub_1BDB878(&StringLiteral_3739/*"COMMON_VIEW_CHANGE"*/, v32);
    sub_1BDB878(&StringLiteral_3936/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/, v33);
    byte_4B48C8C = 1;
  }
  entity = 0LL;
  v34 = sub_1BDBAC4(EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_61;
  *(_QWORD *)(v34 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v34 + 16), (int32_t)this, v37, v38);
  *(_QWORD *)(v34 + 24) = rewardItems;
  v39 = v34 + 24;
  sub_1BDB81C((CGThumbnailListItem_o *)(v34 + 24), (int32_t)rewardItems, v40, v41);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v34 + 24), 0LL) )
    return;
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventRootMaskSetActiveAction, (int32_t)setMaskMethod, v42, v43);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallback, v44, v45);
  this->fields.isShowPossessionNum = 0;
  v46 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v46;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.resultItemObjList, (int32_t)v46, v47, v48);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3936/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !eventTradeGoodsEntity || (Empty = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0LL )
    Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  viewChangeButton = System_String__Format(v50, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_61;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24255/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_61;
  if ( !viewChangeButtonLabelEffectColors->max_length )
LABEL_62:
    sub_1BDBADC(viewChangeButton, commonConsumeId, v52);
  viewChangeButton = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_61;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"COMMON_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_61;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_61;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24255/*"treasurechest_btn"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( eventTradeGoodsEntity )
  {
    commonConsumeId = (unsigned int)eventTradeGoodsEntity->fields.commonConsumeId;
    if ( !viewChangeButton )
      goto LABEL_61;
  }
  else
  {
    commonConsumeId = 0xFFFFFFFFLL;
    if ( !viewChangeButton )
      goto LABEL_61;
  }
  viewChangeButton = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)viewChangeButton,
                       commonConsumeId,
                       0LL);
  if ( !viewChangeButton )
    goto LABEL_61;
  v57 = *((_DWORD *)viewChangeButton + 6);
  v58 = viewChangeButton;
  if ( v57 < 1 )
  {
    v61 = 0;
  }
  else
  {
    v67 = v13;
    v59 = 0;
    while ( 1 )
    {
      if ( v59 >= v57 )
        goto LABEL_62;
      v60 = *((_QWORD *)v58 + (int)v59 + 4);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, commonConsumeId);
        byte_4B3ED56 = 1;
      }
      viewChangeButton = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        viewChangeButton = NetworkManager_TypeInfo;
      }
      if ( !v60 || !Master_object )
        goto LABEL_61;
      viewChangeButton = (void *)UserItemMaster__TryGetEntity(
                                   (UserItemMaster_o *)Master_object,
                                   &entity,
                                   *(_QWORD *)(*((_QWORD *)viewChangeButton + 23) + 64LL),
                                   *(_DWORD *)(v60 + 28),
                                   0LL);
      if ( ((unsigned __int8)viewChangeButton & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_61;
      if ( *(_DWORD *)(v60 + 32) > entity->fields.num )
        break;
      v57 = *((_DWORD *)v58 + 6);
      if ( (int)++v59 >= v57 )
      {
        v61 = 0;
        goto LABEL_45;
      }
    }
    v61 = 1;
LABEL_45:
    v13 = v67;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_61;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       v13,
                       (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_61;
  IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0LL, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  v64 = v61 | (!IsEventPeriod || isReceiveAll);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v65 = &StringLiteral_13511/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( (v64 & 1) == 0 )
    v65 = &StringLiteral_13512/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v65, 0LL);
  if ( !closeButtonLabel
    || (UILabel__set_text(closeButtonLabel, (System_String_o *)viewChangeButton, 0LL),
        (viewChangeButton = this->fields.scrollBar) == 0LL)
    || (viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL),
        !*(_QWORD *)v39)
    || !viewChangeButton )
  {
LABEL_61:
    sub_1BDBAD4(viewChangeButton, commonConsumeId);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxItemDrawNum < *(_DWORD *)(*(_QWORD *)v39 + 24LL),
    0LL);
  v66 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v66,
    (Il2CppObject *)v34,
    Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
}


void __fastcall EventCraftRewardDialogComponent__SetPossessionNum(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v10; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B48C90 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, item);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&NetworkManager_TypeInfo, v7);
    byte_4B48C90 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v8);
    byte_4B3ED56 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_17;
  v10 = (NetworkManager_c *)UserItemMaster__TryGetEntity(
                              (UserItemMaster_o *)Master_object,
                              &entity,
                              v10->static_fields->userIdNumber,
                              objectId,
                              0LL);
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_17:
    sub_1BDBAD4(v10, v8);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall EventCraftRewardDialogComponent__SetResultData(
        EventCraftRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  EventCraftRewardDialogComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  signed int max_length; // w8
  unsigned int v9; // w25
  BattleDropItem_o *v10; // x28
  int32_t objectId; // w23
  UnityEngine_Transform_o *listRoot; // x22
  Il2CppObject *prefabResultItem; // x24
  __int64 v14; // x9
  int v15; // w29
  UnityEngine_Component_o *v16; // x22
  EventCraftRewardDialogComponent_o *v17; // x24
  int32_t v18; // w3
  EventCraftRewardDialogComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B48C8D & 1) == 0 )
  {
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___, rewards);
    sub_1BDB878(&Method_System_Collections_Generic_List_ItemIconComponent__Add__, v5);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_ItemIconComponent___, v6);
    this = (EventCraftRewardDialogComponent_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B48C8D = 1;
  }
  if ( !rewards )
    goto LABEL_31;
  max_length = rewards->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1BDBADC(this, rewards, method);
      v10 = rewards->m_Items[v9];
      if ( !v10 )
        break;
      objectId = v10->fields.objectId;
      listRoot = v4->fields.listRoot;
      prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
      v14 = 44LL;
      if ( v10->fields.originalNum > 0 )
        v14 = 52LL;
      v15 = *(_DWORD *)((char *)&v10->klass + v14);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__51108816(
                                                    prefabResultItem,
                                                    listRoot,
                                                    (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_ItemIconComponent___);
      if ( !this )
        break;
      v16 = (UnityEngine_Component_o *)this;
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v17 = this;
      if ( !byte_4B3E911 )
      {
        this = (EventCraftRewardDialogComponent_o *)sub_1BDB878(&UnityEngine_Vector3_TypeInfo, rewards);
        byte_4B3E911 = 1;
      }
      if ( !v17 )
        break;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v17,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(v16, 0LL);
      if ( !this )
        break;
      v28.fields.x = v4->fields.iconScale;
      v28.fields.y = v28.fields.x;
      v28.fields.z = v28.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v28, 0LL);
      v18 = v15 <= 1 ? -1 : v15;
      ItemIconComponent__SetGift_39935088((ItemIconComponent_o *)v16, v10->fields.type, objectId, v18, 0, 0LL);
      EventCraftRewardDialogComponent__SetPossessionNum(v19, (ItemIconComponent_o *)v16, objectId, v20);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (EventCraftRewardDialogComponent_o *)v4->fields.resultItemObjList;
      if ( !this )
        break;
      v23 = *(_QWORD *)&this->fields.m_CachedPtr;
      v24 = Method_System_Collections_Generic_List_ItemIconComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v23 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v16,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v26 + 32) = v16;
        sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v16, v21, v22);
      }
      max_length = rewards->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_27;
    }
LABEL_31:
    sub_1BDBAD4(this, rewards);
  }
LABEL_27:
  this = (EventCraftRewardDialogComponent_o *)v4->fields.scrollView;
  if ( !this )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
  this = (EventCraftRewardDialogComponent_o *)v4->fields.listRoot;
  if ( !this )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (EventCraftRewardDialogComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                gameObject,
                                                (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
  if ( !this )
    goto LABEL_31;
  ((void (__fastcall *)(EventCraftRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
}


void __fastcall EventCraftRewardDialogComponent___OnClickCloseButton_b__21_1(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48C93 & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_bool___, method);
    byte_4B48C93 = 1;
  }
  this->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F82EDC *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___OnClickSwitchShowMode_b__22_0(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BDBAD4(this, 0LL);
  ItemIconComponent__ShowPossession(item, this->fields.isShowPossessionNum, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventCraftRewardDialogComponent__get_closeBtnObject(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B48C91 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48C91 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B48C94 & 1) == 0 )
  {
    sub_1BDB878(&EventCraftRewardDialogComponent___c_TypeInfo, v1);
    byte_4B48C94 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventCraftRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftRewardDialogComponent___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EventCraftRewardDialogComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventCraftRewardDialogComponent___c___ctor(
        EventCraftRewardDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___c___OnClickCloseButton_b__21_0(
        EventCraftRewardDialogComponent___c_o *this,
        ItemIconComponent_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4B48C95 & 1) == 0 )
  {
    this = (EventCraftRewardDialogComponent___c_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, obj);
    byte_4B48C95 = 1;
  }
  if ( !obj )
    sub_1BDBAD4(this, obj);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v5, 0LL);
  }
}


void __fastcall EventCraftRewardDialogComponent___c__DisplayClass19_0___ctor(
        EventCraftRewardDialogComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___c__DisplayClass19_0___Open_b__0(
        EventCraftRewardDialogComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventCraftRewardDialogComponent_o *_4__this; // x0
  struct EventCraftRewardDialogComponent_o *v5; // x8

  if ( (byte_4B48C96 & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_bool___, method);
    byte_4B48C96 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventCraftRewardDialogComponent__SetResultData(_4__this, this->fields.rewardItems, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F82EDC *)Method_ActionExtensions_Call_bool___);
}