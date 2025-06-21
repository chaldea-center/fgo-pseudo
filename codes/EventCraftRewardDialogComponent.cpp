void __fastcall EventCraftRewardDialogComponent___ctor(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B16879 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Color___TypeInfo, v3);
    byte_4B16879 = 1;
  }
  this->fields.iconScale = 0.85;
  this->fields.viewChangeButtonLabelEffectColors = (struct UnityEngine_Color_array *)sub_1BCB0A0(
                                                                                       UnityEngine_Color___TypeInfo,
                                                                                       2LL);
  sub_1BCAF9C(&this->fields.viewChangeButtonLabelEffectColors);
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
  System_Action_o *v18; // x20

  if ( (byte_4B16875 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    sub_1BCAFF8(&System_Action_ItemIconComponent__TypeInfo, v3);
    sub_1BCAFF8(&System_Action_TypeInfo, v4);
    sub_1BCAFF8(&Method_EventCraftRewardDialogComponent_OnClickCloseButton__, v5);
    sub_1BCAFF8(&Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__, v7);
    sub_1BCAFF8(&Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__, v8);
    sub_1BCAFF8(&EventCraftRewardDialogComponent___c_TypeInfo, v9);
    byte_4B16875 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
    v10 = Method_EventCraftRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCB010(Method_EventCraftRewardDialogComponent_OnClickCloseButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
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
      _9__21_0 = (System_Action_object__o *)sub_1BCB244(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(
        _9__21_0,
        v16,
        Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__,
        0LL);
      static_fields = EventCraftRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = (struct System_Action_ItemIconComponent__o *)_9__21_0;
      v14 = (EventCraftRewardDialogComponent___c_c *)sub_1BCAF9C(&static_fields->__9__21_0);
    }
    if ( !resultItemObjList )
      sub_1BCB254(v14, v12);
    System_Collections_Generic_List_object___ForEach(
      resultItemObjList,
      (System_Action_T__o *)_9__21_0,
      (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
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
  __int64 v20; // x3
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x10
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x9
  float *p_a; // x11
  float *p_r; // x10
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  System_Action_object__o *v28; // x21
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B16876 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_ItemIconComponent__TypeInfo, method);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1BCAFF8(&Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__, v5);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__, v7);
    sub_1BCAFF8(&StringLiteral_23986/*"treasurechest_btn"*/, v8);
    sub_1BCAFF8(&StringLiteral_23988/*"treasurechest_btn_on"*/, v9);
    byte_4B16876 = 1;
  }
  v10 = Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCB010(Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_22;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_23986/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_23988/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  viewChangeButton = (UIButton_o *)GameObjectExtensions__SafeGetComponent_object_(
                                     gameObject,
                                     (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
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
    sub_1BCB254(viewChangeButton, v12);
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
    sub_1BCB25C(viewChangeButton, v12, v19, v20);
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
  v29.fields.a = *p_r;
  v29.fields.b = *p_a;
  v29.fields.g = *p_b;
  v29.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v29, 0LL);
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  v28 = (System_Action_object__o *)sub_1BCB244(System_Action_ItemIconComponent__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)this,
    Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__,
    0LL);
  if ( !resultItemObjList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    resultItemObjList,
    (System_Action_T__o *)v28,
    (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
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
  __int64 v37; // x23
  System_Collections_Generic_List_object__o *v38; // x25
  UILabel_o *titleLabel; // x25
  System_String_o *v40; // x0
  Il2CppObject *Empty; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x25
  Il2CppObject *Component_object; // x25
  Il2CppObject *Master_object; // x25
  int v48; // w8
  void *v49; // x24
  unsigned int v50; // w29
  __int64 v51; // x21
  char v52; // w20
  bool IsEventPeriod; // w8
  UILabel_o *closeButtonLabel; // x21
  char v55; // w20
  __int64 *v56; // x8
  System_Action_o *v57; // x20
  int32_t v58; // [xsp+4h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v13 = eventId;
  if ( (byte_4B16873 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonConsumeMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v18);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, v19);
    sub_1BCAFF8(&DataManager_TypeInfo, v20);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_ItemIconComponent__TypeInfo, v23);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v24);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v25);
    sub_1BCAFF8(&string_TypeInfo, v26);
    sub_1BCAFF8(&Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__, v27);
    sub_1BCAFF8(&EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo, v28);
    sub_1BCAFF8(&StringLiteral_13425/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v29);
    sub_1BCAFF8(&StringLiteral_23986/*"treasurechest_btn"*/, v30);
    sub_1BCAFF8(&StringLiteral_13424/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v31);
    sub_1BCAFF8(&StringLiteral_3672/*"COMMON_VIEW_CHANGE"*/, v32);
    sub_1BCAFF8(&StringLiteral_3870/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/, v33);
    byte_4B16873 = 1;
  }
  entity = 0LL;
  v34 = sub_1BCB244(EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_61;
  *(_QWORD *)(v34 + 16) = this;
  sub_1BCAF9C(v34 + 16);
  *(_QWORD *)(v34 + 24) = rewardItems;
  v37 = v34 + 24;
  sub_1BCAF9C(v34 + 24);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v34 + 24), 0LL) )
    return;
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1BCAF9C(&this->fields.eventRootMaskSetActiveAction);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCAF9C(&this->fields.closeCallbackFunc);
  this->fields.isShowPossessionNum = 0;
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v38;
  sub_1BCAF9C(&this->fields.resultItemObjList);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3870/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !eventTradeGoodsEntity || (Empty = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0LL )
    Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  viewChangeButton = System_String__Format(v40, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_61;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_23986/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_61;
  if ( !viewChangeButtonLabelEffectColors->max_length )
LABEL_62:
    sub_1BCB25C(viewChangeButton, commonConsumeId, v42, v43);
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
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMMON_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_61;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_61;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23986/*"treasurechest_btn"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
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
  v48 = *((_DWORD *)viewChangeButton + 6);
  v49 = viewChangeButton;
  if ( v48 < 1 )
  {
    v52 = 0;
  }
  else
  {
    v58 = v13;
    v50 = 0;
    while ( 1 )
    {
      if ( v50 >= v48 )
        goto LABEL_62;
      v51 = *((_QWORD *)v49 + (int)v50 + 4);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, commonConsumeId);
        byte_4B165D1 = 1;
      }
      viewChangeButton = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        viewChangeButton = NetworkManager_TypeInfo;
      }
      if ( !v51 || !Master_object )
        goto LABEL_61;
      viewChangeButton = (void *)UserItemMaster__TryGetEntity(
                                   (UserItemMaster_o *)Master_object,
                                   &entity,
                                   *(_QWORD *)(*((_QWORD *)viewChangeButton + 23) + 64LL),
                                   *(_DWORD *)(v51 + 28),
                                   0LL);
      if ( ((unsigned __int8)viewChangeButton & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_61;
      if ( *(_DWORD *)(v51 + 32) > entity->fields.num )
        break;
      v48 = *((_DWORD *)v49 + 6);
      if ( (int)++v50 >= v48 )
      {
        v52 = 0;
        goto LABEL_45;
      }
    }
    v52 = 1;
LABEL_45:
    v13 = v58;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_61;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       v13,
                       (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_61;
  IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0LL, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  v55 = v52 | (!IsEventPeriod || isReceiveAll);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v56 = &StringLiteral_13424/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( (v55 & 1) == 0 )
    v56 = &StringLiteral_13425/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v56, 0LL);
  if ( !closeButtonLabel
    || (UILabel__set_text(closeButtonLabel, (System_String_o *)viewChangeButton, 0LL),
        (viewChangeButton = this->fields.scrollBar) == 0LL)
    || (viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL),
        !*(_QWORD *)v37)
    || !viewChangeButton )
  {
LABEL_61:
    sub_1BCB254(viewChangeButton, commonConsumeId);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxItemDrawNum < *(_DWORD *)(*(_QWORD *)v37 + 24LL),
    0LL);
  v57 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v34,
    Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
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

  if ( (byte_4B16877 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, item);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B16877 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
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
    sub_1BCB254(v10, v8);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall EventCraftRewardDialogComponent__SetResultData(
        EventCraftRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventCraftRewardDialogComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  signed int max_length; // w8
  unsigned int v10; // w25
  BattleDropItem_o *v11; // x28
  int32_t objectId; // w23
  UnityEngine_Transform_o *listRoot; // x22
  Il2CppObject *prefabResultItem; // x24
  __int64 v15; // x9
  int v16; // w29
  UnityEngine_Component_o *v17; // x22
  EventCraftRewardDialogComponent_o *v18; // x24
  int32_t v19; // w3
  EventCraftRewardDialogComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v25; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_4B16874 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___, rewards);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemIconComponent__Add__, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_ItemIconComponent___, v7);
    this = (EventCraftRewardDialogComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B16874 = 1;
  }
  if ( !rewards )
    goto LABEL_31;
  max_length = rewards->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1BCB25C(this, rewards, method, v3);
      v11 = rewards->m_Items[v10];
      if ( !v11 )
        break;
      objectId = v11->fields.objectId;
      listRoot = v5->fields.listRoot;
      prefabResultItem = (Il2CppObject *)v5->fields.prefabResultItem;
      v15 = 44LL;
      if ( v11->fields.originalNum > 0 )
        v15 = 52LL;
      v16 = *(_DWORD *)((char *)&v11->klass + v15);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                    prefabResultItem,
                                                    listRoot,
                                                    (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_ItemIconComponent___);
      if ( !this )
        break;
      v17 = (UnityEngine_Component_o *)this;
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v18 = this;
      if ( !byte_4B16191 )
      {
        this = (EventCraftRewardDialogComponent_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, rewards);
        byte_4B16191 = 1;
      }
      if ( !v18 )
        break;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v18,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(v17, 0LL);
      if ( !this )
        break;
      v27.fields.x = v5->fields.iconScale;
      v27.fields.y = v27.fields.x;
      v27.fields.z = v27.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v27, 0LL);
      v19 = v16 <= 1 ? -1 : v16;
      ItemIconComponent__SetGift_40107980((ItemIconComponent_o *)v17, v11->fields.type, objectId, v19, 0, 0LL);
      EventCraftRewardDialogComponent__SetPossessionNum(v20, (ItemIconComponent_o *)v17, objectId, v21);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (EventCraftRewardDialogComponent_o *)v5->fields.resultItemObjList;
      if ( !this )
        break;
      v22 = *(_QWORD *)&this->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_ItemIconComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v22 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v17,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = v22 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = v17;
        this = (EventCraftRewardDialogComponent_o *)sub_1BCAF9C(v25 + 32);
      }
      max_length = rewards->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_27;
    }
LABEL_31:
    sub_1BCB254(this, rewards);
  }
LABEL_27:
  this = (EventCraftRewardDialogComponent_o *)v5->fields.scrollView;
  if ( !this )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
  this = (EventCraftRewardDialogComponent_o *)v5->fields.listRoot;
  if ( !this )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (EventCraftRewardDialogComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                gameObject,
                                                (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
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
  if ( (byte_4B1687A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    byte_4B1687A = 1;
  }
  this->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___OnClickSwitchShowMode_b__22_0(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCB254(this, 0LL);
  ItemIconComponent__ShowPossession(item, this->fields.isShowPossessionNum, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventCraftRewardDialogComponent__get_closeBtnObject(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B16878 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B16878 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B1687B & 1) == 0 )
  {
    sub_1BCAFF8(&EventCraftRewardDialogComponent___c_TypeInfo, v1);
    byte_4B1687B = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventCraftRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftRewardDialogComponent___c_o *)v2;
  sub_1BCAF9C(EventCraftRewardDialogComponent___c_TypeInfo->static_fields);
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

  if ( (byte_4B1687C & 1) == 0 )
  {
    this = (EventCraftRewardDialogComponent___c_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, obj);
    byte_4B1687C = 1;
  }
  if ( !obj )
    sub_1BCB254(this, obj);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v5, 0LL);
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

  if ( (byte_4B1687D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, method);
    byte_4B1687D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventCraftRewardDialogComponent__SetResultData(_4__this, this->fields.rewardItems, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
}