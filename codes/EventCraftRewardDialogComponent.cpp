void EventCraftRewardDialogComponent___ctor(EventCraftRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0

  if ( (byte_4D2AA85 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&UnityEngine_Color___TypeInfo);
    byte_4D2AA85 = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1C93B7C(UnityEngine_Color___TypeInfo, 2);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1C93A78(&this->fields.viewChangeButtonLabelEffectColors, v3);
  this->fields.maxItemDrawNum = 18;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCraftRewardDialogComponent__Init(EventCraftRewardDialogComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventCraftRewardDialogComponent__OnClickCloseButton(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  EventCraftRewardDialogComponent___c_c *v7; // x0
  System_Action_object__o *_9__21_0; // x21
  Il2CppObject *v9; // x22
  struct EventCraftRewardDialogComponent___c_StaticFields *static_fields; // x0
  System_Action_o *v11; // x20

  if ( (byte_4D2AA81 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool___);
    sub_1C93AD4(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventCraftRewardDialogComponent_OnClickCloseButton__);
    sub_1C93AD4(&Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    sub_1C93AD4(&Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__);
    sub_1C93AD4(&EventCraftRewardDialogComponent___c_TypeInfo);
    byte_4D2AA81 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_30EBB64 *)Method_ActionExtensions_Call_bool___);
    v3 = Method_EventCraftRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventCraftRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
    v7 = EventCraftRewardDialogComponent___c_TypeInfo;
    if ( !EventCraftRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftRewardDialogComponent___c_TypeInfo);
      v7 = EventCraftRewardDialogComponent___c_TypeInfo;
    }
    _9__21_0 = (System_Action_object__o *)v7->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = EventCraftRewardDialogComponent___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__21_0 = (System_Action_object__o *)sub_1C93D20(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(
        _9__21_0,
        v9,
        Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__,
        0);
      static_fields = EventCraftRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = (struct System_Action_ItemIconComponent__o *)_9__21_0;
      v7 = (EventCraftRewardDialogComponent___c_c *)sub_1C93A78(&static_fields->__9__21_0, _9__21_0);
    }
    if ( !resultItemObjList )
      sub_1C93D2C(v7, v5);
    System_Collections_Generic_List_object___ForEach(
      resultItemObjList,
      (System_Action_T__o *)_9__21_0,
      (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0);
  }
}


void EventCraftRewardDialogComponent__OnClickSwitchShowMode(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v8; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v10; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x10
  unsigned int max_length; // w8
  float *p_r; // x8
  float *p_g; // x9
  float *p_b; // x11
  float *p_a; // x10
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  System_Action_object__o *v19; // x21
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2AA82 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1C93AD4(&Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    sub_1C93AD4(&StringLiteral_24509/*"treasurechest_btn"*/);
    sub_1C93AD4(&StringLiteral_24511/*"treasurechest_btn_on"*/);
    byte_4D2AA82 = 1;
  }
  v3 = Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_22;
  v8 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24509/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24511/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v8, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0);
  viewChangeButton = (UIButton_o *)GameObjectExtensions__SafeGetComponent_object_(
                                     gameObject,
                                     (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_22;
  v10 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v10, normalSprite, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_22:
    sub_1C93D2C(viewChangeButton, v5);
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
        goto LABEL_22;
      goto LABEL_20;
    }
LABEL_23:
    sub_1C93D34(viewChangeButton);
  }
  if ( max_length <= 1 )
    goto LABEL_23;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_22;
LABEL_20:
  v20.fields.a = *p_a;
  v20.fields.b = *p_b;
  v20.fields.g = *p_g;
  v20.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v20, 0);
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  v19 = (System_Action_object__o *)sub_1C93D20(System_Action_ItemIconComponent__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__,
    0);
  if ( !resultItemObjList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    resultItemObjList,
    (System_Action_T__o *)v19,
    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
}


void EventCraftRewardDialogComponent__Open(
        EventCraftRewardDialogComponent_o *this,
        int32_t eventId,
        BattleDropItem_array *rewardItems,
        EventTradeGoodsEntity_o *eventTradeGoodsEntity,
        bool isReceiveAll,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v15; // x22
  void *viewChangeButton; // x0
  __int64 commonConsumeId; // x1
  __int64 v18; // x23
  System_Collections_Generic_List_object__o *v19; // x25
  UILabel_o *titleLabel; // x25
  System_String_o *v21; // x0
  Il2CppObject *Empty; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x25
  Il2CppObject *Component_object; // x25
  Il2CppObject *Master_object; // x25
  int v27; // w8
  void *v28; // x24
  unsigned int v29; // w29
  __int64 v30; // x21
  char v31; // w20
  bool IsEventPeriod; // w8
  UILabel_o *closeButtonLabel; // x21
  char v34; // w20
  System_String_o **v35; // x8
  System_Action_o *v36; // x20
  int32_t v37; // [xsp+4h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2AA7F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ItemIconComponent__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__);
    sub_1C93AD4(&EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_13638/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_1C93AD4(&StringLiteral_24509/*"treasurechest_btn"*/);
    sub_1C93AD4(&StringLiteral_13637/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_3729/*"COMMON_VIEW_CHANGE"*/);
    sub_1C93AD4(&StringLiteral_3929/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/);
    byte_4D2AA7F = 1;
  }
  entity = 0;
  v15 = sub_1C93D20(EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_61;
  *(_QWORD *)(v15 + 16) = this;
  sub_1C93A78(v15 + 16, this);
  *(_QWORD *)(v15 + 24) = rewardItems;
  v18 = v15 + 24;
  sub_1C93A78(v15 + 24, rewardItems);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v15 + 24), 0) )
    return;
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1C93A78(&this->fields.eventRootMaskSetActiveAction, setMaskMethod);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C93A78(&this->fields.closeCallbackFunc, closeCallback);
  this->fields.isShowPossessionNum = 0;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v19;
  sub_1C93A78(&this->fields.resultItemObjList, v19);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3929/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/, 0);
  if ( !eventTradeGoodsEntity || (Empty = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0 )
    Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  viewChangeButton = System_String__Format(v21, Empty, 0);
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_61;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24509/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_61;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
LABEL_62:
    sub_1C93D34(viewChangeButton);
  viewChangeButton = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_61;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_3729/*"COMMON_VIEW_CHANGE"*/, 0);
  if ( !viewChangeButtonLabel )
    goto LABEL_61;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_61;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24509/*"treasurechest_btn"*/, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
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
                       0);
  if ( !viewChangeButton )
    goto LABEL_61;
  v27 = *((_DWORD *)viewChangeButton + 6);
  v28 = viewChangeButton;
  if ( v27 < 1 )
  {
    v31 = 0;
  }
  else
  {
    v37 = eventId;
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= v27 )
        goto LABEL_62;
      v30 = *((_QWORD *)v28 + (int)v29 + 4);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      viewChangeButton = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        viewChangeButton = NetworkManager_TypeInfo;
      }
      if ( !v30 || !Master_object )
        goto LABEL_61;
      viewChangeButton = (void *)UserItemMaster__TryGetEntity(
                                   (UserItemMaster_o *)Master_object,
                                   &entity,
                                   *(_QWORD *)(*((_QWORD *)viewChangeButton + 23) + 64LL),
                                   *(_DWORD *)(v30 + 28),
                                   0);
      if ( ((unsigned __int8)viewChangeButton & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_61;
      if ( *(_DWORD *)(v30 + 32) > entity->fields.num )
        break;
      v27 = *((_DWORD *)v28 + 6);
      if ( (int)++v29 >= v27 )
      {
        v31 = 0;
        goto LABEL_45;
      }
    }
    v31 = 1;
LABEL_45:
    eventId = v37;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_61;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       eventId,
                       (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_61;
  IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  v34 = v31 | (!IsEventPeriod || isReceiveAll);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = (System_String_o **)&StringLiteral_13637/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( (v34 & 1) == 0 )
    v35 = (System_String_o **)&StringLiteral_13638/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = LocalizationManager__Get(*v35, 0);
  if ( !closeButtonLabel
    || (UILabel__set_text(closeButtonLabel, (System_String_o *)viewChangeButton, 0),
        (viewChangeButton = this->fields.scrollBar) == 0)
    || (viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0),
        !*(_QWORD *)v18)
    || !viewChangeButton )
  {
LABEL_61:
    sub_1C93D2C(viewChangeButton, commonConsumeId);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxItemDrawNum < *(_DWORD *)(*(_QWORD *)v18 + 24LL),
    0);
  v36 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v15,
    Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0, 0);
}


void EventCraftRewardDialogComponent__SetPossessionNum(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v8; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2AA83 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2AA83 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_17;
  v8 = (NetworkManager_c *)UserItemMaster__TryGetEntity(
                             (UserItemMaster_o *)Master_object,
                             &entity,
                             v8->static_fields->userIdNumber,
                             objectId,
                             0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_17:
    sub_1C93D2C(v8, v6);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0);
}


void EventCraftRewardDialogComponent__SetResultData(
        EventCraftRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  EventCraftRewardDialogComponent_o *v4; // x19
  int max_length; // w8
  unsigned int v6; // w25
  BattleDropItem_o *v7; // x28
  int32_t objectId; // w23
  UnityEngine_Transform_o *listRoot; // x22
  Il2CppObject *prefabResultItem; // x24
  __int64 v11; // x9
  int v12; // w29
  UnityEngine_Component_o *v13; // x22
  EventCraftRewardDialogComponent_o *v14; // x24
  int v15; // w8
  EventCraftRewardDialogComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4D2AA80 & 1) == 0 )
  {
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ItemIconComponent__Add__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_ItemIconComponent___);
    this = (EventCraftRewardDialogComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AA80 = 1;
  }
  if ( !rewards )
    goto LABEL_31;
  max_length = rewards->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C93D34(this);
      v7 = rewards->m_Items[v6];
      if ( !v7 )
        break;
      objectId = v7->fields.objectId;
      listRoot = v4->fields.listRoot;
      prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
      v11 = 44;
      if ( v7->fields.originalNum > 0 )
        v11 = 52;
      v12 = *(_DWORD *)((char *)&v7->klass + v11);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__52629400(
                                                    prefabResultItem,
                                                    listRoot,
                                                    (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_ItemIconComponent___);
      if ( !this )
        break;
      v13 = (UnityEngine_Component_o *)this;
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      v14 = this;
      if ( !byte_4D2A139 )
      {
        this = (EventCraftRewardDialogComponent_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      if ( !v14 )
        break;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v14,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(v13, 0);
      if ( !this )
        break;
      v23.fields.x = v4->fields.iconScale;
      v23.fields.y = v23.fields.x;
      v23.fields.z = v23.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v23, 0);
      v15 = v12 <= 1 ? -1 : v12;
      ItemIconComponent__SetGift_41640856((ItemIconComponent_o *)v13, v7->fields.type, objectId, v15, 0, 0);
      EventCraftRewardDialogComponent__SetPossessionNum(v16, (ItemIconComponent_o *)v13, objectId, v17);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(v13, 0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (EventCraftRewardDialogComponent_o *)v4->fields.resultItemObjList;
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      v19 = Method_System_Collections_Generic_List_ItemIconComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v13,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v21 + 32) = v13;
        this = (EventCraftRewardDialogComponent_o *)sub_1C93A78(v21 + 32, v13);
      }
      max_length = rewards->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_27;
    }
LABEL_31:
    sub_1C93D2C(this, rewards);
  }
LABEL_27:
  this = (EventCraftRewardDialogComponent_o *)v4->fields.scrollView;
  if ( !this )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
  this = (EventCraftRewardDialogComponent_o *)v4->fields.listRoot;
  if ( !this )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (EventCraftRewardDialogComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                gameObject,
                                                (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
  if ( !this )
    goto LABEL_31;
  ((void (__fastcall *)(EventCraftRewardDialogComponent_o *, const char *))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze);
}


void EventCraftRewardDialogComponent___OnClickCloseButton_b__21_1(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2AA86 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool___);
    byte_4D2AA86 = 1;
  }
  this->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_30EBB64 *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0);
}


void EventCraftRewardDialogComponent___OnClickSwitchShowMode_b__22_0(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C93D2C(this, 0);
  ItemIconComponent__ShowPossession(item, this->fields.isShowPossessionNum, 0);
}


UnityEngine_GameObject_o *EventCraftRewardDialogComponent__get_closeBtnObject(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2AA84 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AA84 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventCraftRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D2AA87 & 1) == 0 )
  {
    sub_1C93AD4(&EventCraftRewardDialogComponent___c_TypeInfo);
    byte_4D2AA87 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventCraftRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftRewardDialogComponent___c_o *)v1;
  sub_1C93A78(EventCraftRewardDialogComponent___c_TypeInfo->static_fields, v1);
}


void EventCraftRewardDialogComponent___c___ctor(EventCraftRewardDialogComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftRewardDialogComponent___c___OnClickCloseButton_b__21_0(
        EventCraftRewardDialogComponent___c_o *this,
        ItemIconComponent_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4D2AA88 & 1) == 0 )
  {
    this = (EventCraftRewardDialogComponent___c_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AA88 = 1;
  }
  if ( !obj )
    sub_1C93D2C(this, obj);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v5, 0);
  }
}


void EventCraftRewardDialogComponent___c__DisplayClass19_0___ctor(
        EventCraftRewardDialogComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftRewardDialogComponent___c__DisplayClass19_0___Open_b__0(
        EventCraftRewardDialogComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventCraftRewardDialogComponent_o *_4__this; // x0
  struct EventCraftRewardDialogComponent_o *v5; // x8

  if ( (byte_4D2AA89 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool___);
    byte_4D2AA89 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventCraftRewardDialogComponent__SetResultData(_4__this, this->fields.rewardItems, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_30EBB64 *)Method_ActionExtensions_Call_bool___);
}