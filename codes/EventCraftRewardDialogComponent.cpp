void EventCraftRewardDialogComponent___ctor(EventCraftRewardDialogComponent_o *this, const MethodInfo *method)
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
  BaseDialog_c *v13; // x0

  if ( (byte_596A550 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    byte_596A550 = 1;
  }
  v3 = UnityEngine_Color___TypeInfo;
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_2213B20(v3, 2);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v13 = BaseDialog_TypeInfo;
  this->fields.maxItemDrawNum = 18;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, v11, v12);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCraftRewardDialogComponent__Init(EventCraftRewardDialogComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventCraftRewardDialogComponent__OnClickCloseButton(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *eventRootMaskSetActiveAction; // x0
  const MethodInfo_36FFD8C *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  EventCraftRewardDialogComponent___c_c *v9; // x0
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  struct EventCraftRewardDialogComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__21_0; // x21
  Il2CppObject *v13; // x22
  struct EventCraftRewardDialogComponent___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Action_o *v21; // x20

  if ( (byte_596A54C & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    sub_2213A60(&System_Action_ItemIconComponent__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventCraftRewardDialogComponent_OnClickCloseButton__);
    sub_2213A60(&Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    sub_2213A60(&Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__);
    sub_2213A60(&EventCraftRewardDialogComponent___c_TypeInfo);
    byte_596A54C = 1;
  }
  if ( this->fields.state == 2 )
  {
    eventRootMaskSetActiveAction = (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction;
    v4 = (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___;
    this->fields.state = 3;
    ActionExtensions__Call_bool_(eventRootMaskSetActiveAction, 1, v4);
    v5 = Method_EventCraftRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_EventCraftRewardDialogComponent_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    v9 = EventCraftRewardDialogComponent___c_TypeInfo;
    resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
    if ( !*(&EventCraftRewardDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventCraftRewardDialogComponent___c_TypeInfo, v7, v8);
      v9 = EventCraftRewardDialogComponent___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__21_0 = (System_Action_object__o *)static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, v7, v8);
        static_fields = EventCraftRewardDialogComponent___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__21_0 = (System_Action_object__o *)sub_2213CCC(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(
        _9__21_0,
        v13,
        Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__,
        0);
      v14 = EventCraftRewardDialogComponent___c_TypeInfo->static_fields;
      v14->__9__21_0 = (struct System_Action_ItemIconComponent__o *)_9__21_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__21_0, (int32_t)_9__21_0, v15, v16, v17, v18, v19, v20);
    }
    if ( !resultItemObjList )
      sub_2213CDC(v9, v7);
    System_Collections_Generic_List_object___ForEach(
      resultItemObjList,
      (System_Action_T__o *)_9__21_0,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)this,
      Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v21, 0);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  System_Action_object__o *v20; // x21
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A54D & 1) == 0 )
  {
    sub_2213A60(&System_Action_ItemIconComponent__TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__);
    sub_2213A60(&Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    sub_2213A60(&StringLiteral_25511/*"treasurechest_btn"*/);
    sub_2213A60(&StringLiteral_25513/*"treasurechest_btn_on"*/);
    byte_596A54D = 1;
  }
  v3 = Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton
    || (isShowPossessionNum
      ? (v8 = (System_String_o **)&StringLiteral_25511/*"treasurechest_btn"*/)
      : (v8 = (System_String_o **)&StringLiteral_25513/*"treasurechest_btn_on"*/),
        (UIButton__set_normalSprite(viewChangeButton, *v8, 0), (viewChangeButton = this->fields.viewChangeButton) == 0)
     || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0),
         viewChangeButton = (UIButton_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___),
         !this->fields.viewChangeButton)) )
  {
LABEL_23:
    sub_2213CDC(viewChangeButton, v5);
  }
  v10 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
  AtlasManager__SetEventUI(v10, normalSprite, 0);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( !viewChangeButtonLabelEffectColors )
      goto LABEL_23;
    if ( LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !viewChangeButton )
        goto LABEL_23;
      goto LABEL_21;
    }
LABEL_24:
    sub_2213CE4(viewChangeButton);
  }
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_23;
  if ( (viewChangeButtonLabelEffectColors->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_24;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_23;
LABEL_21:
  v21.fields.a = *p_a;
  v21.fields.b = *p_b;
  v21.fields.g = *p_g;
  v21.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v21, 0);
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  v20 = (System_Action_object__o *)sub_2213CCC(System_Action_ItemIconComponent__TypeInfo);
  System_Action_object____ctor(
    v20,
    (Il2CppObject *)this,
    Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__,
    0);
  if ( !resultItemObjList )
    goto LABEL_23;
  System_Collections_Generic_List_object___ForEach(
    resultItemObjList,
    (System_Action_T__o *)v20,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x23
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_List_object__o *v43; // x25
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x1
  __int64 v51; // x2
  UILabel_o *titleLabel; // x25
  System_String_o *v53; // x0
  Il2CppObject *name; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v56; // x1
  __int64 v57; // x2
  UILabel_o *viewChangeButtonLabel; // x25
  __int64 v59; // x1
  __int64 v60; // x2
  Il2CppObject *Component_object; // x25
  __int64 v62; // x1
  __int64 v63; // x2
  Il2CppObject *Master_object; // x25
  __int64 v65; // x2
  int v66; // w8
  void *v67; // x24
  bool v68; // w29
  int v69; // w27
  __int64 v70; // x28
  __int64 v71; // x1
  __int64 v72; // x2
  bool IsEventPeriod; // w8
  UILabel_o *closeButtonLabel; // x20
  bool v75; // w21
  System_String_o **v76; // x8
  System_Action_o *v77; // x20
  bool v78; // [xsp+0h] [xbp-70h]
  int32_t key; // [xsp+4h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596A54A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ItemIconComponent__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__);
    sub_2213A60(&EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo);
    sub_2213A60(&StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    sub_2213A60(&StringLiteral_25511/*"treasurechest_btn"*/);
    sub_2213A60(&StringLiteral_14096/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/);
    sub_2213A60(&StringLiteral_3850/*"COMMON_VIEW_CHANGE"*/);
    sub_2213A60(&StringLiteral_4051/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/);
    byte_596A54A = 1;
  }
  entity = 0;
  v15 = sub_2213CCC(EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  if ( !v15 )
    goto LABEL_57;
  *(_QWORD *)(v15 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = rewardItems;
  v24 = v15 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 24), (int32_t)rewardItems, v25, v26, v27, v28, v29, v30);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v15 + 24), 0) )
    return;
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventRootMaskSetActiveAction,
    (int32_t)setMaskMethod,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.closeCallbackFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeCallback,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.isShowPossessionNum = 0;
  v43 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v43;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultItemObjList,
    (int32_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50, v51);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_4051/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/, 0);
  if ( !eventTradeGoodsEntity || (name = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0 )
    name = **(Il2CppObject ***)(qword_5984390 + 184);
  viewChangeButton = System_String__Format(v53, name, 0);
  if ( !titleLabel )
    goto LABEL_57;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_25511/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_57;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    goto LABEL_58;
  viewChangeButton = this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_57;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_3850/*"COMMON_VIEW_CHANGE"*/, 0);
  if ( !viewChangeButtonLabel )
    goto LABEL_57;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_57;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v59, v60);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_25511/*"treasurechest_btn"*/, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62, v63);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( eventTradeGoodsEntity )
  {
    commonConsumeId = (unsigned int)eventTradeGoodsEntity->fields.commonConsumeId;
    if ( !viewChangeButton )
      goto LABEL_57;
  }
  else
  {
    commonConsumeId = 0xFFFFFFFFLL;
    if ( !viewChangeButton )
      goto LABEL_57;
  }
  v78 = isReceiveAll;
  key = eventId;
  viewChangeButton = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)viewChangeButton,
                       commonConsumeId,
                       0);
  if ( !viewChangeButton )
    goto LABEL_57;
  v66 = *((_DWORD *)viewChangeButton + 6);
  v67 = viewChangeButton;
  v68 = v66 > 0;
  if ( v66 >= 1 )
  {
    v69 = 0;
    while ( v69 < (unsigned int)v66 )
    {
      v70 = *((_QWORD *)v67 + v69 + 4);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, commonConsumeId, v65);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      viewChangeButton = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, commonConsumeId, v65);
        viewChangeButton = NetworkManager_TypeInfo;
      }
      if ( !v70 || !Master_object )
        goto LABEL_57;
      viewChangeButton = (void *)UserItemMaster__TryGetEntity(
                                   (UserItemMaster_o *)Master_object,
                                   &entity,
                                   *(_QWORD *)(*((_QWORD *)viewChangeButton + 23) + 64LL),
                                   *(_DWORD *)(v70 + 28),
                                   0);
      if ( ((unsigned __int8)viewChangeButton & 1) == 0 )
        goto LABEL_43;
      if ( !entity )
        goto LABEL_57;
      if ( *(_DWORD *)(v70 + 32) <= entity->fields.num )
      {
        v66 = *((_DWORD *)v67 + 6);
        v68 = ++v69 < v66;
        if ( v69 < v66 )
          continue;
      }
      goto LABEL_43;
    }
LABEL_58:
    sub_2213CE4(viewChangeButton);
  }
LABEL_43:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, commonConsumeId, v65);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_57;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       key,
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_57;
  IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0, 0);
  closeButtonLabel = this->fields.closeButtonLabel;
  v75 = v68 || v78 || !IsEventPeriod;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71, v72);
  v76 = (System_String_o **)&StringLiteral_14096/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( !v75 )
    v76 = (System_String_o **)&StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = LocalizationManager__Get(*v76, 0);
  if ( !closeButtonLabel
    || (UILabel__set_text(closeButtonLabel, (System_String_o *)viewChangeButton, 0),
        (viewChangeButton = this->fields.scrollBar) == 0)
    || (viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0),
        !*(_QWORD *)v24)
    || !viewChangeButton )
  {
LABEL_57:
    sub_2213CDC(viewChangeButton, commonConsumeId);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxItemDrawNum < *(_DWORD *)(*(_QWORD *)v24 + 24LL),
    0);
  v77 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v77,
    (Il2CppObject *)v15,
    Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftRewardDialogComponent__SetPossessionNum(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int v6; // w8
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v10; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596A54E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596A54E = 1;
  }
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, *(_QWORD *)&objectId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_17;
  v10 = (NetworkManager_c *)UserItemMaster__TryGetEntity(
                              (UserItemMaster_o *)Master_object,
                              &entity,
                              v10->static_fields->userIdNumber,
                              objectId,
                              0);
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_17:
    sub_2213CDC(v10, v7);
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
  Il2CppObject *prefabResultItem; // x22
  UnityEngine_Transform_o *listRoot; // x24
  __int64 v10; // x8
  int32_t objectId; // w23
  int v12; // w29
  UnityEngine_Component_o *v13; // x22
  EventCraftRewardDialogComponent_o *v14; // x24
  int v15; // w8
  EventCraftRewardDialogComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596A54B & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_2213A60(&Method_System_Collections_Generic_List_ItemIconComponent__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_ItemIconComponent___);
    this = (EventCraftRewardDialogComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A54B = 1;
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
        sub_2213CE4(this);
      v7 = rewards->m_Items[v6];
      if ( !v7 )
        break;
      listRoot = v4->fields.listRoot;
      prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
      v10 = 44;
      objectId = v7->fields.objectId;
      if ( v7->fields.originalNum > 0 )
        v10 = 52;
      v12 = *(_DWORD *)((char *)&v7->klass + v10);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards, method);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__59717116(
                                                    prefabResultItem,
                                                    listRoot,
                                                    (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_ItemIconComponent___);
      if ( !this )
        break;
      v13 = (UnityEngine_Component_o *)this;
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      v14 = this;
      if ( !byte_5969AE0 )
      {
        this = (EventCraftRewardDialogComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
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
      v29.fields.x = v4->fields.iconScale;
      v29.fields.y = v29.fields.x;
      v29.fields.z = v29.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v29, 0);
      v15 = v12 <= 1 ? -1 : v12;
      ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)v13, v7->fields.type, objectId, v15, 0, 0);
      EventCraftRewardDialogComponent__SetPossessionNum(v16, (ItemIconComponent_o *)v13, objectId, v17);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(v13, 0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (EventCraftRewardDialogComponent_o *)v4->fields.resultItemObjList;
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      v25 = Method_System_Collections_Generic_List_ItemIconComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v13,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v27 + 32) = v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 32), (int32_t)v13, v18, v19, v20, v21, v22, v23);
      }
      max_length = rewards->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_27;
    }
LABEL_31:
    sub_2213CDC(this, rewards);
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
                                                (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
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
  if ( (byte_596A551 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596A551 = 1;
  }
  this->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0);
}


void EventCraftRewardDialogComponent___OnClickSwitchShowMode_b__22_0(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_2213CDC(this, 0);
  ItemIconComponent__ShowPossession(item, this->fields.isShowPossessionNum, 0);
}


UnityEngine_GameObject_o *EventCraftRewardDialogComponent__get_closeBtnObject(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A54F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A54F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void EventCraftRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A552 & 1) == 0 )
  {
    sub_2213A60(&EventCraftRewardDialogComponent___c_TypeInfo);
    byte_596A552 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventCraftRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftRewardDialogComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventCraftRewardDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *v9; // x19

  if ( (byte_596A553 & 1) == 0 )
  {
    this = (EventCraftRewardDialogComponent___c_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A553 = 1;
  }
  if ( !obj )
    sub_2213CDC(this, obj);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83459800(v9, 0);
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
  System_Action_T__o *eventRootMaskSetActiveAction; // x0
  const MethodInfo_36FFD8C *v7; // x2

  if ( (byte_596A554 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596A554 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventCraftRewardDialogComponent__SetResultData(_4__this, this->fields.rewardItems, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  eventRootMaskSetActiveAction = (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction;
  v7 = (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___;
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(eventRootMaskSetActiveAction, 0, v7);
}