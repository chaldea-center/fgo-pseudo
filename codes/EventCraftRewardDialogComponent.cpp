void __fastcall EventCraftRewardDialogComponent___ctor(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_Color_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1

  if ( (byte_4B1A010 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v4, v5);
    byte_4B1A010 = 1;
  }
  this->fields.iconScale = 0.85;
  v6 = (struct UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v6;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.viewChangeButtonLabelEffectColors,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.maxItemDrawNum = 18;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  EventCraftRewardDialogComponent___c_c *v24; // x0
  System_Action_object__o *_9__21_0; // x21
  Il2CppObject *v26; // x22
  struct EventCraftRewardDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x20

  if ( (byte_4B1A00C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    sub_1BCA7E0(&System_Action_ItemIconComponent__TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventCraftRewardDialogComponent_OnClickCloseButton__, v8, v9);
    sub_1BCA7E0(&Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__, v12, v13);
    sub_1BCA7E0(&Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__, v14, v15);
    sub_1BCA7E0(&EventCraftRewardDialogComponent___c_TypeInfo, v16, v17);
    byte_4B1A00C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
    v18 = Method_EventCraftRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1BCA7F8(Method_EventCraftRewardDialogComponent_OnClickCloseButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
    resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
    v24 = EventCraftRewardDialogComponent___c_TypeInfo;
    if ( !EventCraftRewardDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftRewardDialogComponent___c_TypeInfo, v20);
      v24 = EventCraftRewardDialogComponent___c_TypeInfo;
    }
    _9__21_0 = (System_Action_object__o *)v24->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24, v20);
        v24 = EventCraftRewardDialogComponent___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__21_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ItemIconComponent__TypeInfo, v20, v21, v22);
      System_Action_object____ctor(
        _9__21_0,
        v26,
        Method_EventCraftRewardDialogComponent___c__OnClickCloseButton_b__21_0__,
        0LL);
      static_fields = EventCraftRewardDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = (struct System_Action_ItemIconComponent__o *)_9__21_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
        (int64_t)_9__21_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    if ( !resultItemObjList )
      sub_1BCAA3C(v24, v20);
    System_Collections_Generic_List_object___ForEach(
      resultItemObjList,
      (System_Action_T__o *)_9__21_0,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
    v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
    System_Action___ctor(
      v37,
      (Il2CppObject *)this,
      Method_EventCraftRewardDialogComponent__OnClickCloseButton_b__21_1__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v37, 0LL);
  }
}


void __fastcall EventCraftRewardDialogComponent__OnClickSwitchShowMode(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v23; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v25; // x20
  __int64 v26; // x1
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x10
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x9
  float *p_a; // x11
  float *p_r; // x10
  System_Collections_Generic_List_object__o *resultItemObjList; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_object__o *v38; // x21
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1A00D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ItemIconComponent__TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__, v6, v7);
    sub_1BCA7E0(&Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__, v8, v9);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemIconComponent__ForEach__, v12, v13);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24319/*"treasurechest_btn_on"*/, v16, v17);
    byte_4B1A00D = 1;
  }
  v18 = Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_EventCraftRewardDialogComponent_OnClickSwitchShowMode__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_22;
  v23 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24317/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24319/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v23, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)viewChangeButton, 0LL);
  viewChangeButton = (UIButton_o *)GameObjectExtensions__SafeGetComponent_object_(
                                     gameObject,
                                     (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_22;
  v25 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v25, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_22:
    sub_1BCAA3C(viewChangeButton, v20);
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
    sub_1BCAA44(viewChangeButton, v20);
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
  v39.fields.a = *p_r;
  v39.fields.b = *p_a;
  v39.fields.g = *p_b;
  v39.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v39, 0LL);
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  v38 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ItemIconComponent__TypeInfo, v35, v36, v37);
  System_Action_object____ctor(
    v38,
    (Il2CppObject *)this,
    Method_EventCraftRewardDialogComponent__OnClickSwitchShowMode_b__22_0__,
    0LL);
  if ( !resultItemObjList )
    goto LABEL_22;
  System_Collections_Generic_List_object___ForEach(
    resultItemObjList,
    (System_Action_T__o *)v38,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_ItemIconComponent__ForEach__);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x22
  int64_t viewChangeButton; // x0
  __int64 commonConsumeId; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x23
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  System_Collections_Generic_List_object__o *v84; // x25
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x1
  UILabel_o *titleLabel; // x25
  System_String_o *v93; // x0
  Il2CppObject *Empty; // x1
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  __int64 v96; // x1
  UILabel_o *viewChangeButtonLabel; // x25
  __int64 v98; // x1
  Il2CppObject *Component_object; // x25
  __int64 v100; // x1
  Il2CppObject *Master_object; // x25
  int v102; // w8
  int64_t v103; // x24
  unsigned int v104; // w28
  __int64 v105; // x27
  char v106; // w24
  __int64 v107; // x1
  bool IsEventPeriod; // w8
  UILabel_o *closeButtonLabel; // x21
  char v110; // w20
  __int64 *v111; // x8
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  System_Action_o *v115; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1A00A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, rewardItems);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v23, v24);
    sub_1BCA7E0(&DataManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemIconComponent__TypeInfo, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&string_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__, v39, v40);
    sub_1BCA7E0(&EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_24317/*"treasurechest_btn"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_13609/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_3808/*"COMMON_VIEW_CHANGE"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_3986/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/, v51, v52);
    byte_4B1A00A = 1;
  }
  entity = 0LL;
  v53 = sub_1BCAA2C(
          EventCraftRewardDialogComponent___c__DisplayClass19_0_TypeInfo,
          *(_QWORD *)&eventId,
          rewardItems,
          eventTradeGoodsEntity);
  System_Object___ctor((Il2CppObject *)v53, 0LL);
  if ( !v53 )
    goto LABEL_56;
  *(_QWORD *)(v53 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 16), (int64_t)this, v56, v57, v58, v59, v60, v61);
  *(_QWORD *)(v53 + 24) = rewardItems;
  v62 = v53 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 24), (int64_t)rewardItems, v63, v64, v65, v66, v67, v68);
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v53 + 24), 0LL) )
    return;
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventRootMaskSetActiveAction,
    (int64_t)setMaskMethod,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.closeCallbackFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeCallback,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.isShowPossessionNum = 0;
  v84 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemIconComponent__TypeInfo,
                                                       v81,
                                                       v82,
                                                       v83);
  System_Collections_Generic_List_object____ctor(
    v84,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v84;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resultItemObjList, (int64_t)v84, v85, v86, v87, v88, v89, v90);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_3986/*"CRAFT_EVENT_REWARD_DIALOG_TITLE"*/, 0LL);
  if ( !eventTradeGoodsEntity || (Empty = (Il2CppObject *)eventTradeGoodsEntity->fields.name) == 0LL )
    Empty = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  viewChangeButton = (int64_t)System_String__Format(v93, Empty, 0LL);
  if ( !titleLabel )
    goto LABEL_56;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (int64_t)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_56;
  if ( !viewChangeButtonLabelEffectColors->max_length )
LABEL_57:
    sub_1BCAA44(viewChangeButton, commonConsumeId);
  viewChangeButton = (int64_t)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_56;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  viewChangeButtonLabel = this->fields.viewChangeButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v96);
  viewChangeButton = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3808/*"COMMON_VIEW_CHANGE"*/, 0LL);
  if ( !viewChangeButtonLabel )
    goto LABEL_56;
  UILabel__set_text(viewChangeButtonLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (int64_t)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_56;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)viewChangeButton,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v98);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24317/*"treasurechest_btn"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v100);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  viewChangeButton = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( eventTradeGoodsEntity )
  {
    commonConsumeId = (unsigned int)eventTradeGoodsEntity->fields.commonConsumeId;
    if ( !viewChangeButton )
      goto LABEL_56;
  }
  else
  {
    commonConsumeId = 0xFFFFFFFFLL;
    if ( !viewChangeButton )
      goto LABEL_56;
  }
  viewChangeButton = (int64_t)CommonConsumeMaster__GetSortedEntityList(
                                (CommonConsumeMaster_o *)viewChangeButton,
                                commonConsumeId,
                                0LL);
  if ( !viewChangeButton )
    goto LABEL_56;
  v102 = *(_DWORD *)(viewChangeButton + 24);
  v103 = viewChangeButton;
  if ( v102 < 1 )
  {
    v106 = 0;
  }
  else
  {
    v104 = 0;
    while ( 1 )
    {
      if ( v104 >= v102 )
        goto LABEL_57;
      v105 = *(_QWORD *)(v103 + 8LL * (int)v104 + 32);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, commonConsumeId);
      viewChangeButton = NetworkManager__get_UserId(0LL);
      if ( !v105 || !Master_object )
        goto LABEL_56;
      viewChangeButton = UserItemMaster__TryGetEntity(
                           (UserItemMaster_o *)Master_object,
                           &entity,
                           viewChangeButton,
                           *(_DWORD *)(v105 + 28),
                           0LL);
      if ( (viewChangeButton & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_56;
      if ( *(_DWORD *)(v105 + 32) > entity->fields.num )
        break;
      v102 = *(_DWORD *)(v103 + 24);
      if ( (int)++v104 >= v102 )
      {
        v106 = 0;
        goto LABEL_42;
      }
    }
    v106 = 1;
  }
LABEL_42:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, commonConsumeId);
  viewChangeButton = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !viewChangeButton )
    goto LABEL_56;
  viewChangeButton = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
                                eventId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !viewChangeButton )
    goto LABEL_56;
  IsEventPeriod = EventEntity__IsEventPeriod((EventEntity_o *)viewChangeButton, 0LL, 0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  v110 = v106 | (!IsEventPeriod || isReceiveAll);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v107);
  v111 = &StringLiteral_13609/*"TUTORIAL_IMAGE_DIALOG_CLOSE"*/;
  if ( (v110 & 1) == 0 )
    v111 = &StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/;
  viewChangeButton = (int64_t)LocalizationManager__Get((System_String_o *)*v111, 0LL);
  if ( !closeButtonLabel
    || (UILabel__set_text(closeButtonLabel, (System_String_o *)viewChangeButton, 0LL),
        (viewChangeButton = (int64_t)this->fields.scrollBar) == 0)
    || (viewChangeButton = (int64_t)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)viewChangeButton,
                                      0LL),
        !*(_QWORD *)v62)
    || !viewChangeButton )
  {
LABEL_56:
    sub_1BCAA3C(viewChangeButton, commonConsumeId);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)viewChangeButton,
    this->fields.maxItemDrawNum < *(_DWORD *)(*(_QWORD *)v62 + 24LL),
    0LL);
  v115 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v112, v113, v114);
  System_Action___ctor(
    v115,
    (Il2CppObject *)v53,
    Method_EventCraftRewardDialogComponent___c__DisplayClass19_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v115, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftRewardDialogComponent__SetPossessionNum(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v13; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1A00E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, item, *(_QWORD *)&objectId);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B1A00E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_13;
  UserId = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &entity, UserId, objectId, 0LL);
  if ( (UserId & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_13:
    sub_1BCAA3C(UserId, v13);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall EventCraftRewardDialogComponent__SetResultData(
        EventCraftRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  EventCraftRewardDialogComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  signed int max_length; // w8
  unsigned int v12; // w25
  BattleDropItem_o *v13; // x28
  int32_t objectId; // w23
  UnityEngine_Transform_o *listRoot; // x22
  Il2CppObject *prefabResultItem; // x24
  __int64 v17; // x9
  int v18; // w29
  UnityEngine_Component_o *v19; // x22
  __int64 v20; // x2
  EventCraftRewardDialogComponent_o *v21; // x24
  int32_t v22; // w3
  EventCraftRewardDialogComponent_o *v23; // x0
  const MethodInfo *v24; // x3
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v34; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1A00B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___, rewards, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemIconComponent__Add__, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_ItemIconComponent___, v7, v8);
    this = (EventCraftRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B1A00B = 1;
  }
  if ( !rewards )
    goto LABEL_31;
  max_length = rewards->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BCAA44(this, rewards);
      v13 = rewards->m_Items[v12];
      if ( !v13 )
        break;
      objectId = v13->fields.objectId;
      listRoot = v4->fields.listRoot;
      prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
      v17 = 44LL;
      if ( v13->fields.originalNum > 0 )
        v17 = 52LL;
      v18 = *(_DWORD *)((char *)&v13->klass + v17);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rewards);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                    prefabResultItem,
                                                    listRoot,
                                                    (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_ItemIconComponent___);
      if ( !this )
        break;
      v19 = (UnityEngine_Component_o *)this;
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      v21 = this;
      if ( !byte_4B109C1 )
      {
        this = (EventCraftRewardDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, rewards, v20);
        byte_4B109C1 = 1;
      }
      if ( !v21 )
        break;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v21,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_transform(v19, 0LL);
      if ( !this )
        break;
      v36.fields.x = v4->fields.iconScale;
      v36.fields.y = v36.fields.x;
      v36.fields.z = v36.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v36, 0LL);
      v22 = v18 <= 1 ? -1 : v18;
      ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)v19, v13->fields.type, objectId, v22, 0, 0LL);
      EventCraftRewardDialogComponent__SetPossessionNum(v23, (ItemIconComponent_o *)v19, objectId, v24);
      this = (EventCraftRewardDialogComponent_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (EventCraftRewardDialogComponent_o *)v4->fields.resultItemObjList;
      if ( !this )
        break;
      v31 = *(_QWORD *)&this->fields.m_CachedPtr;
      v32 = Method_System_Collections_Generic_List_ItemIconComponent__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v31 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v31 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v19,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = v31 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v34 + 32) = v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v19, v25, v26, v27, v28, v29, v30);
      }
      max_length = rewards->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_27;
    }
LABEL_31:
    sub_1BCAA3C(this, rewards);
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
                                                (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
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
  __int64 v2; // x2

  if ( (byte_4B1A011 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B1A011 = 1;
  }
  this->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___OnClickSwitchShowMode_b__22_0(
        EventCraftRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCAA3C(this, 0LL);
  ItemIconComponent__ShowPossession(item, this->fields.isShowPossessionNum, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventCraftRewardDialogComponent__get_closeBtnObject(
        EventCraftRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A00F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A00F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall EventCraftRewardDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A012 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftRewardDialogComponent___c_TypeInfo, v1, v2);
    byte_4B1A012 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventCraftRewardDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventCraftRewardDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftRewardDialogComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventCraftRewardDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4B1A013 & 1) == 0 )
  {
    this = (EventCraftRewardDialogComponent___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, method);
    byte_4B1A013 = 1;
  }
  if ( !obj )
    sub_1BCAA3C(this, obj);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_70154244(v7, 0LL);
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

  if ( (byte_4B1A014 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B1A014 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventCraftRewardDialogComponent__SetResultData(_4__this, this->fields.rewardItems, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
}