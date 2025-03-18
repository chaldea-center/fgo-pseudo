void __fastcall EventCraftRewardDialogComponent___ctor(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Color_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C25F2D & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Color___TypeInfo, v3);
    byte_4C25F2D = 1;
  }
  this->fields.iconScale = 0.85;
  v4 = (struct UnityEngine_Color_array *)sub_1C3B80C(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v4;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Action_o *v24; // x20

  if ( (byte_4C25F29 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_bool___, method);
    sub_1C3B764(&System_Action_ItemIconComponent__TypeInfo, v3);
    sub_1C3B764(&System_Action_TypeInfo, v4);
    sub_1C3B764(&Method_EventCraftRewardDialogComponent_OnClickCloseButton__, v5);
    sub_1C3B764(&Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__, v7);
    sub_1C3B764(&Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__, v8);
    sub_1C3B764(&EventCraftRewardDialogComponent___c_TypeInfo, v9);
    byte_4C25F29 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2F42210 *)Method_ActionExtensions_Call_bool___);
    v10 = Method_EventCraftRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C3B77C(Method_EventCraftRewardDialogComponent_OnClickCloseButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C3B748(v10, v10[4]);
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
      _9__21_0 = (System_Action_object__o *)sub_1C3B9B0(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(
        _9__21_0,
        v16,
        Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__,
        0LL);
      static_fields = EventCraftRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = (struct System_Action_ItemIconComponent__o *)_9__21_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
        (int64_t)_9__21_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    if ( !resultItemObjList )
      sub_1C3B9C0(v14, v12);
    System_Collections_Generic_List_object___ForEach(
      resultItemObjList,
      (System_Action_T__o *)_9__21_0,
      (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    v24 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)this,
      Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v24, 0LL);
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
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x10
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x9
  float *p_a; // x11
  float *p_r; // x10
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  System_Action_object__o *v26; // x21
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C25F2A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_ItemIconComponent__TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__, v4);
    sub_1C3B764(&Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__, v5);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__, v7);
    sub_1C3B764(&StringLiteral_24567/*"zh-cht"*/, v8);
    sub_1C3B764(&StringLiteral_24569/*"zh-hant"*/, v9);
    byte_4C25F2A = 1;
  }
  v10 = Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C3B77C(Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C3B748(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_22;
  v15 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24567/*"zh-cht"*/ : (System_String_o **)&StringLiteral_24569/*"zh-hant"*/;
  UIButton__set_normalSprite(viewChangeButton, *v15, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  viewChangeButton = (UIButton_o *)GameObjectExtensions__SafeGetComponent_object_(
                                     gameObject,
                                     (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
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
    sub_1C3B9C0(viewChangeButton, v12);
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
    sub_1C3B9C8(viewChangeButton, v12);
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
  v27.fields.a = *p_r;
  v27.fields.b = *p_a;
  v27.fields.g = *p_b;
  v27.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v27, 0LL);
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  v26 = (System_Action_object__o *)sub_1C3B9B0(System_Action_ItemIconComponent__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)this,
    Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__,
    0LL);
  if ( !resultItemObjList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    resultItemObjList,
    (System_Action_T__o *)v26,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_List_object__o *v62; // x25
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  UILabel_o *titleLabel; // x25
  System_String_o *v70; // x0
  Il2CppObject *Empty; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  UILabel_o *viewChangeButtonLabel; // x25
  Il2CppObject *Component_object; // x25
  Il2CppObject *Master_object; // x25
  int v76; // w8
  void *v77; // x24
  unsigned int v78; // w29
  __int64 v79; // x21
  char v80; // w20
  bool IsEventPeriod; // w8
  UILabel_o *closeButtonLabel; // x21
  char v83; // w20
  __int64 *v84; // x8
  System_Action_o *v85; // x20
  int32_t v86; // [xsp+4h] [xbp-6Ch]
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v13 = eventId;
  if ( (byte_4C25F27 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&AtlasManager_TypeInfo, v15);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UISprite___, v16);
    sub_1C3B764(&Method_DataManager_GetMaster_CommonConsumeMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMaster_UserItemMaster___, v19);
    sub_1C3B764(&DataManager_TypeInfo, v20);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__, v22);
    sub_1C3B764(&System_Collections_Generic_List_ItemIconComponent__TypeInfo, v23);
    sub_1C3B764(&LocalizationManager_TypeInfo, v24);
    sub_1C3B764(&NetworkManager_TypeInfo, v25);
    sub_1C3B764(&string_TypeInfo, v26);
    sub_1C3B764(&Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__, v27);
    sub_1C3B764(&EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo, v28);
    sub_1C3B764(&StringLiteral_13741/*"The length constraining facet is prohibited for '{0}'."*/, v29);
    sub_1C3B764(&StringLiteral_24567/*"zh-cht"*/, v30);
    sub_1C3B764(&StringLiteral_13740/*"The length cannot be greater than the capacity."*/, v31);
    sub_1C3B764(&StringLiteral_3820/*"CP273"*/, v32);
    sub_1C3B764(&StringLiteral_4000/*"Cannot add a relation to this table's ParentRelation collection where this table isn't the child table."*/, v33);
    byte_4C25F27 = 1;
  }
  entity = 0LL;
  v34 = sub_1C3B9B0(EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_61;
  *(_QWORD *)(v34 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 16), (int64_t)this, v37, v38, v39, v40, v41, v42);
  *(_QWORD *)(v34 + 24) = rewardItems;
  v43 = v34 + 24;
  sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 24), (int64_t)rewardItems, v44, v45, v46, v47, v48, v49);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v34 + 24), 0LL) )
    return;
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventRootMaskSetActiveAction,
    (int64_t)setMaskMethod,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.isShowPossessionNum = 0;
  v62 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v62;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.resultItemObjList, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_4000/*"Cannot add a relation to this table's ParentRelation collection where this table isn't the child table."*/, 0LL);
  if ( !eventTradeGoodsEntity || (Empty = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0LL )
    Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  viewChangeButton = System_String__Format(v70, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_61;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24567/*"zh-cht"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_61;
  if ( !viewChangeButtonLabelEffectColors->max_length )
LABEL_62:
    sub_1C3B9C8(viewChangeButton, commonConsumeId);
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
  viewChangeButton = LocalizationManager__Get((System_String_o *)StringLiteral_3820/*"CP273"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_61;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_61;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24567/*"zh-cht"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserItemMaster___);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
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
  v76 = *((_DWORD *)viewChangeButton + 6);
  v77 = viewChangeButton;
  if ( v76 < 1 )
  {
    v80 = 0;
  }
  else
  {
    v86 = v13;
    v78 = 0;
    while ( 1 )
    {
      if ( v78 >= v76 )
        goto LABEL_62;
      v79 = *((_QWORD *)v77 + (int)v78 + 4);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, commonConsumeId);
        byte_4C1C955 = 1;
      }
      viewChangeButton = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        viewChangeButton = NetworkManager_TypeInfo;
      }
      if ( !v79 || !Master_object )
        goto LABEL_61;
      viewChangeButton = (void *)UserItemMaster__TryGetEntity(
                                   (UserItemMaster_o *)Master_object,
                                   &entity,
                                   *(_QWORD *)(*((_QWORD *)viewChangeButton + 23) + 64LL),
                                   *(_DWORD *)(v79 + 28),
                                   0LL);
      if ( ((unsigned __int8)viewChangeButton & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_61;
      if ( *(_DWORD *)(v79 + 32) > entity->fields.num )
        break;
      v76 = *((_DWORD *)v77 + 6);
      if ( (int)++v78 >= v76 )
      {
        v80 = 0;
        goto LABEL_45;
      }
    }
    v80 = 1;
LABEL_45:
    v13 = v86;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  viewChangeButton = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_61;
  viewChangeButton = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                       v13,
                       (const MethodInfo_329AE48 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_61;
  IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0LL, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  v83 = v80 | (!IsEventPeriod || isReceiveAll);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v84 = &StringLiteral_13740/*"The length cannot be greater than the capacity."*/;
  if ( (v83 & 1) == 0 )
    v84 = &StringLiteral_13741/*"The length constraining facet is prohibited for '{0}'."*/;
  viewChangeButton = LocalizationManager__Get((System_String_o *)*v84, 0LL);
  if ( !closeButtonLabel
    || (UILabel__set_text(closeButtonLabel, (System_String_o *)viewChangeButton, 0LL),
        (viewChangeButton = this->fields.scrollBar) == 0LL)
    || (viewChangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL),
        !*(_QWORD *)v43)
    || !viewChangeButton )
  {
LABEL_61:
    sub_1C3B9C0(viewChangeButton, commonConsumeId);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxItemDrawNum < *(_DWORD *)(*(_QWORD *)v43 + 24LL),
    0LL);
  v85 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v85,
    (Il2CppObject *)v34,
    Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v85, 0, 0LL);
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

  if ( (byte_4C25F2B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserItemMaster___, item);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    byte_4C25F2B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
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
    sub_1C3B9C0(v10, v8);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v30; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C25F28 & 1) == 0 )
  {
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___, rewards);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemIconComponent__Add__, v5);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_ItemIconComponent___, v6);
    this = (EventCraftRewardDialogComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C25F28 = 1;
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
        sub_1C3B9C8(this, rewards);
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
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                    prefabResultItem,
                                                    listRoot,
                                                    (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_ItemIconComponent___);
      if ( !this )
        break;
      v16 = (UnityEngine_Component_o *)this;
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v17 = this;
      if ( !byte_4C1C511 )
      {
        this = (EventCraftRewardDialogComponent_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, rewards);
        byte_4C1C511 = 1;
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
      v32.fields.x = v4->fields.iconScale;
      v32.fields.y = v32.fields.x;
      v32.fields.z = v32.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v32, 0LL);
      v18 = v15 <= 1 ? -1 : v15;
      ItemIconComponent__SetGift_39566180((ItemIconComponent_o *)v16, v10->fields.type, objectId, v18, 0, 0LL);
      EventCraftRewardDialogComponent__SetPossessionNum(v19, (ItemIconComponent_o *)v16, objectId, v20);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (EventCraftRewardDialogComponent_o *)v4->fields.resultItemObjList;
      if ( !this )
        break;
      v27 = *(_QWORD *)&this->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_ItemIconComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v27 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v16,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v30 + 32) = v16;
        sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)v16, v21, v22, v23, v24, v25, v26);
      }
      max_length = rewards->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_27;
    }
LABEL_31:
    sub_1C3B9C0(this, rewards);
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
                                                (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
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
  if ( (byte_4C25F2E & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_bool___, method);
    byte_4C25F2E = 1;
  }
  this->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F42210 *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___OnClickSwitchShowMode_b__22_0(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C3B9C0(this, 0LL);
  ItemIconComponent__ShowPossession(item, this->fields.isShowPossessionNum, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventCraftRewardDialogComponent__get_closeBtnObject(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C25F2C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C25F2C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C3B9C0(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C25F2F & 1) == 0 )
  {
    sub_1C3B764(&EventCraftRewardDialogComponent___c_TypeInfo, v1);
    byte_4C25F2F = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventCraftRewardDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftRewardDialogComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventCraftRewardDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4C25F30 & 1) == 0 )
  {
    this = (EventCraftRewardDialogComponent___c_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, obj);
    byte_4C25F30 = 1;
  }
  if ( !obj )
    sub_1C3B9C0(this, obj);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v5, 0LL);
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

  if ( (byte_4C25F31 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_bool___, method);
    byte_4C25F31 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventCraftRewardDialogComponent__SetResultData(_4__this, this->fields.rewardItems, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1C3B9C0(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2F42210 *)Method_ActionExtensions_Call_bool___);
}