void MasterMissionComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct MasterMissionComponent_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct MasterMissionComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct MasterMissionComponent_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct MasterMissionComponent_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct MasterMissionComponent_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct MasterMissionComponent_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  struct MasterMissionComponent_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  struct MasterMissionComponent_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  MasterMissionComponent_c *v37; // x8
  struct MasterMissionComponent_StaticFields *v38; // x9

  if ( (byte_4CB8C25 & 1) == 0 )
  {
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_17592/*"btn_txt_off_limited"*/);
    sub_1C6BA08(&StringLiteral_17591/*"btn_txt_off_extra"*/);
    sub_1C6BA08(&StringLiteral_17598/*"btn_txt_on_limited"*/);
    sub_1C6BA08(&StringLiteral_18847/*"ef_btn_blink"*/);
    sub_1C6BA08(&StringLiteral_17590/*"btn_txt_off_daily"*/);
    sub_1C6BA08(&StringLiteral_17596/*"btn_txt_on_daily"*/);
    sub_1C6BA08(&StringLiteral_17599/*"btn_txt_on_weekly"*/);
    sub_1C6BA08(&StringLiteral_17593/*"btn_txt_off_weekly"*/);
    sub_1C6BA08(&StringLiteral_17597/*"btn_txt_on_extra"*/);
    byte_4CB8C25 = 1;
  }
  static_fields = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_SVT_ID = 9000001;
  static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  v4 = StringLiteral_17596/*"btn_txt_on_daily"*/;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17596/*"btn_txt_on_daily"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v4, v1, v2);
  v5 = StringLiteral_17590/*"btn_txt_off_daily"*/;
  v6 = MasterMissionComponent_TypeInfo->static_fields;
  v6->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17590/*"btn_txt_off_daily"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->DAILY_OFF_SPRITE_LABEL, v5, v7, v8);
  v9 = StringLiteral_17599/*"btn_txt_on_weekly"*/;
  v10 = MasterMissionComponent_TypeInfo->static_fields;
  v10->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17599/*"btn_txt_on_weekly"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->WEEKLY_ON_SPRITE_LABEL, v9, v11, v12);
  v13 = StringLiteral_17593/*"btn_txt_off_weekly"*/;
  v14 = MasterMissionComponent_TypeInfo->static_fields;
  v14->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17593/*"btn_txt_off_weekly"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14->WEEKLY_OFF_SPRITE_LABEL, v13, v15, v16);
  v17 = StringLiteral_17597/*"btn_txt_on_extra"*/;
  v18 = MasterMissionComponent_TypeInfo->static_fields;
  v18->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17597/*"btn_txt_on_extra"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18->EXTRA_ON_SPRITE_LABEL, v17, v19, v20);
  v21 = StringLiteral_17591/*"btn_txt_off_extra"*/;
  v22 = MasterMissionComponent_TypeInfo->static_fields;
  v22->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17591/*"btn_txt_off_extra"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v22->EXTRA_OFF_SPRITE_LABEL, v21, v23, v24);
  v25 = StringLiteral_17598/*"btn_txt_on_limited"*/;
  v26 = MasterMissionComponent_TypeInfo->static_fields;
  v26->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17598/*"btn_txt_on_limited"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v26->LIMITED_ON_SPRITE_LABEL, v25, v27, v28);
  v29 = StringLiteral_17592/*"btn_txt_off_limited"*/;
  v30 = MasterMissionComponent_TypeInfo->static_fields;
  v30->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17592/*"btn_txt_off_limited"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v30->LIMITED_OFF_SPRITE_LABEL, v29, v31, v32);
  v33 = StringLiteral_18847/*"ef_btn_blink"*/;
  v34 = MasterMissionComponent_TypeInfo->static_fields;
  v34->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_18847/*"ef_btn_blink"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v34->STONE_EXCHENGE_BUTTON_EFFECT_NAME, v33, v35, v36);
  v37 = MasterMissionComponent_TypeInfo;
  v38 = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&v38->SLIDE_IN_TIME = 0x42B800003DCCCCCDLL;
  *(_OWORD *)&v38->NOTICE_NUMBER_BADGE_DEPTH = xmmword_CEBC60;
  v38->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v38->BLANK_EARTH_WINDOW_POS.fields.x = 0.0;
  v38->BLANK_EARTH_WINDOW_POS.fields.y = 0.0;
  v38->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
  v37->static_fields->HelpButtonDefaultPosition = (struct UnityEngine_Vector2_o)0xC31F0000C3E10000LL;
  v37->static_fields->HelpButtonItemInfoPosition = (struct UnityEngine_Vector2_o)0xC3070000C3DC0000LL;
  v37->static_fields->VoiceButtonDefaultPosition = (struct UnityEngine_Vector2_o)0xC3600000C3E60000LL;
  v37->static_fields->VoiceButtonItemInfoPosition = (struct UnityEngine_Vector2_o)0xC2B40000C3E60000LL;
  __asm { FMOV            V0.2S, #1.0 }
  v37->static_fields->VoiceButtonDefaultScale = _D0;
  v37->static_fields->VoiceButtonItemInfoScale = (struct UnityEngine_Vector2_o)vdup_n_s32(0x3F4CCCCDu).n64_u64[0];
}


void MasterMissionComponent___ctor(MasterMissionComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MasterMissionComponent__AcceptReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  System_Int32_array *receiveMissionIds; // x20
  MasterMissionListViewManager_o *v9; // x21
  System_Action_o *v10; // x22

  if ( (byte_4CB8C0E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent__AcceptReward_b__189_0__);
    byte_4CB8C0E = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C6BC68(v4);
  receiveMissionIds = this->fields.receiveMissionIds;
  v9 = missionListViewManager->m_Items[nowType];
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__189_0__, 0);
  if ( !v9 )
LABEL_7:
    sub_1C6BC60(v4, v5);
  MasterMissionListViewManager__AcceptReward(v9, receiveMissionIds, v10, 0);
}


void MasterMissionComponent__Awake(MasterMissionComponent_o *this, const MethodInfo *method)
{
  ;
}


void MasterMissionComponent__BulkReceive(MasterMissionComponent_o *this, bool isBulk, const MethodInfo *method)
{
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionComponent_o *v5; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v6; // x1
  const MethodInfo *v7; // x2

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  v5 = this;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, isBulk);
  v6 = MasterMissionListViewManager__ReceiveMissionItems((MasterMissionListViewManager_o *)this, isBulk, 0);
  MasterMissionComponent__BulkReceiveConfirm(v5, v6, v7);
}


void MasterMissionComponent__BulkReceiveConfirm(
        MasterMissionComponent_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *items,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v13; // x20
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v14; // x22

  if ( (byte_4CB8C0A & 1) == 0 )
  {
    sub_1C6BA08(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent___c__DisplayClass184_0__BulkReceiveConfirm_b__0__);
    sub_1C6BA08(&MasterMissionComponent___c__DisplayClass184_0_TypeInfo);
    byte_4CB8C0A = 1;
  }
  v5 = sub_1C6BC54(MasterMissionComponent___c__DisplayClass184_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass184_0___ctor((MasterMissionComponent___c__DisplayClass184_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = items;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)items, v10, v11);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v13 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v5 + 24);
  v14 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_1C6BC54(MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_MasterMissionComponent___c__DisplayClass184_0__BulkReceiveConfirm_b__0__,
    0);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_1C6BC60(v6, v7);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v13, v14, 0);
}


void MasterMissionComponent__ChangeTabImage(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  struct MasterMissionTab_array *missionTabList; // x8
  UISprite_o *dailyTabBtnBase; // x20
  UISprite_o *dailyTabSprite; // x20
  int32_t nowType; // w22
  __int64 v7; // x9
  struct MasterMissionTab_array *v8; // x8
  UISprite_o *weeklyTabBtnBase; // x20
  UISprite_o *weeklyTabSprite; // x20
  int32_t v11; // w22
  __int64 v12; // x9
  struct MasterMissionTab_array *v13; // x8
  UISprite_o *extraTabBtnBase; // x20
  UISprite_o *extraTabSprite; // x20
  int32_t v16; // w22
  __int64 v17; // x9
  struct MasterMissionTab_array *v18; // x8
  UISprite_o *limitedTabBtnBase; // x20
  UISprite_o *limitedTabSprite; // x20
  int32_t v21; // w22
  __int64 v22; // x9
  int32_t v23; // w19

  v2 = this;
  if ( (byte_4CB8C05 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    byte_4CB8C05 = 1;
  }
  missionTabList = v2->fields.missionTabList;
  if ( !missionTabList )
    goto LABEL_50;
  if ( !LODWORD(missionTabList->max_length) )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)missionTabList->m_Items[0];
  if ( !this )
    goto LABEL_50;
  dailyTabBtnBase = v2->fields.dailyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 0,
                                       0);
  if ( !dailyTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(dailyTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  dailyTabSprite = v2->fields.dailyTabSprite;
  nowType = v2->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !dailyTabSprite )
    goto LABEL_50;
  v7 = 24;
  if ( !nowType )
    v7 = 16;
  UISprite__set_spriteName(
    dailyTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v7),
    0);
  this = (MasterMissionComponent_o *)v2->fields.dailySelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 0, 0);
  this = (MasterMissionComponent_o *)v2->fields.dailyNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 0, 0);
  v8 = v2->fields.missionTabList;
  if ( !v8 )
    goto LABEL_50;
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)v8->m_Items[1];
  if ( !this )
    goto LABEL_50;
  weeklyTabBtnBase = v2->fields.weeklyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 1,
                                       0);
  if ( !weeklyTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(weeklyTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  weeklyTabSprite = v2->fields.weeklyTabSprite;
  v11 = v2->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !weeklyTabSprite )
    goto LABEL_50;
  v12 = 40;
  if ( v11 == 1 )
    v12 = 32;
  UISprite__set_spriteName(
    weeklyTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v12),
    0);
  this = (MasterMissionComponent_o *)v2->fields.weeklySelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 1, 0);
  this = (MasterMissionComponent_o *)v2->fields.weeklyNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 1, 0);
  v13 = v2->fields.missionTabList;
  if ( !v13 )
    goto LABEL_50;
  if ( LODWORD(v13->max_length) <= 2 )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)v13->m_Items[2];
  if ( !this )
    goto LABEL_50;
  extraTabBtnBase = v2->fields.extraTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 2,
                                       0);
  if ( !extraTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(extraTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  extraTabSprite = v2->fields.extraTabSprite;
  v16 = v2->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !extraTabSprite )
    goto LABEL_50;
  v17 = 56;
  if ( v16 == 2 )
    v17 = 48;
  UISprite__set_spriteName(
    extraTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v17),
    0);
  this = (MasterMissionComponent_o *)v2->fields.extraSelectedObj;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 2, 0),
        (this = (MasterMissionComponent_o *)v2->fields.extraNonSelectedObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 2, 0),
        (v18 = v2->fields.missionTabList) == 0) )
  {
LABEL_50:
    sub_1C6BC60(this, method);
  }
  if ( LODWORD(v18->max_length) <= 3 )
LABEL_51:
    sub_1C6BC68(this);
  this = (MasterMissionComponent_o *)v18->m_Items[3];
  if ( !this )
    goto LABEL_50;
  limitedTabBtnBase = v2->fields.limitedTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 3,
                                       0);
  if ( !limitedTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(limitedTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  limitedTabSprite = v2->fields.limitedTabSprite;
  v21 = v2->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !limitedTabSprite )
    goto LABEL_50;
  v22 = 72;
  if ( v21 == 3 )
    v22 = 64;
  UISprite__set_spriteName(
    limitedTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v22),
    0);
  this = (MasterMissionComponent_o *)v2->fields.limitedSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 3, 0);
  this = (MasterMissionComponent_o *)v2->fields.limitedNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 3, 0);
  v23 = v2->fields.nowType;
  if ( !byte_4CB0775 )
  {
    sub_1C6BA08(&EventRewardSaveData_TypeInfo);
    byte_4CB0775 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = v23;
  EventRewardSaveData__SaveMstMissionIndex(0);
}


void MasterMissionComponent__ChangeViewCompleteMissionLb(
        MasterMissionComponent_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *mstMissionInfo,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x22
  UILabel_o *completeMissionCountNumLb; // x21
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *completeMissionCountNumLb2; // x20
  UILabel_o *completeMissionCountMsgLb; // x20
  struct UILabel_o *completeMissionAlertNumLb; // x8
  struct UILabel_o *completeMissionAlertUnitLb; // x8
  char v14; // w20
  struct UILabel_o *completeMissionAlertMsgLb; // x19
  System_String_o *v16; // x1
  UILabel_o *completeMissionAlertTitleLb; // x20
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB8BE8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_8668/*"MISSION_ACHIVE_MSG"*/);
    sub_1C6BA08(&StringLiteral_3703/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_13418/*"TIME_REST_ACHIVE"*/);
    byte_4CB8BE8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !mstMissionInfo )
    goto LABEL_36;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  completeMissionCountNumLb = this->fields.completeMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0);
  if ( !completeMissionCountNumLb )
    goto LABEL_36;
  UILabel__set_text(completeMissionCountNumLb, (System_String_o *)Instance, 0);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  completeMissionCountNumLb2 = this->fields.completeMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0);
  if ( !completeMissionCountNumLb2 )
    goto LABEL_36;
  UILabel__set_text(completeMissionCountNumLb2, (System_String_o *)Instance, 0);
  completeMissionCountMsgLb = this->fields.completeMissionCountMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8668/*"MISSION_ACHIVE_MSG"*/, 0);
  if ( !completeMissionCountMsgLb )
    goto LABEL_36;
  UILabel__set_text(completeMissionCountMsgLb, (System_String_o *)Instance, 0);
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_36;
  LocalizationManager__GetRestTimeWithSeparatedTimeStr(
    MstMissionEntity_k__BackingField->fields.endedAt,
    &this->fields.completeMissionTimeNumStr,
    &this->fields.completeMissionTimeCntStr,
    0);
  completeMissionAlertNumLb = this->fields.completeMissionAlertNumLb;
  if ( !completeMissionAlertNumLb )
    goto LABEL_36;
  Instance = (DataManager_o *)this->fields.completeMissionTimeNumStr;
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)System_String__Equals_64002112(
                                (System_String_o *)Instance,
                                completeMissionAlertNumLb->fields.mText,
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    completeMissionAlertUnitLb = this->fields.completeMissionAlertUnitLb;
    if ( !completeMissionAlertUnitLb )
      goto LABEL_36;
    Instance = (DataManager_o *)this->fields.completeMissionTimeCntStr;
    if ( !Instance )
      goto LABEL_36;
    if ( System_String__Equals_64002112((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0) )
      return;
  }
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(this->fields.completeMissionTimeNumStr, 0);
  if ( !this->fields.completeMissionAlertTitleLb )
    goto LABEL_36;
  v14 = (char)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.completeMissionAlertTitleLb,
                                0);
  if ( !Instance )
    goto LABEL_36;
  if ( (v14 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    completeMissionAlertTitleLb = this->fields.completeMissionAlertTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3703/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0);
    if ( completeMissionAlertTitleLb )
    {
      UILabel__set_text(completeMissionAlertTitleLb, (System_String_o *)Instance, 0);
      Instance = (DataManager_o *)this->fields.completeMissionAlertNumLb;
      if ( Instance )
      {
        UILabel__set_text((UILabel_o *)Instance, this->fields.completeMissionTimeNumStr, 0);
        Instance = (DataManager_o *)this->fields.completeMissionAlertUnitLb;
        if ( Instance )
        {
          UILabel__set_text((UILabel_o *)Instance, this->fields.completeMissionTimeCntStr, 0);
          Instance = (DataManager_o *)this->fields.completeMissionAlertMsgLb;
          if ( Instance )
          {
            v16 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_34;
          }
        }
      }
    }
LABEL_36:
    sub_1C6BC60(Instance, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.completeMissionAlertNumLb;
  if ( !Instance )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  Instance = (DataManager_o *)this->fields.completeMissionAlertUnitLb;
  if ( !Instance )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
  completeMissionAlertMsgLb = this->fields.completeMissionAlertMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13418/*"TIME_REST_ACHIVE"*/, 0);
  if ( !completeMissionAlertMsgLb )
    goto LABEL_36;
  v16 = (System_String_o *)Instance;
  Instance = (DataManager_o *)completeMissionAlertMsgLb;
LABEL_34:
  UILabel__set_text((UILabel_o *)Instance, v16, 0);
}


void MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  int32_t BoardTouchMissionId; // w20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4CB8C0B & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C6BA08(&StringLiteral_11151/*"REWARD_ACCEPTABLE"*/);
    byte_4CB8C0B = 1;
  }
  missionListViewManager = v2->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_10;
  nowType = v2->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    goto LABEL_11;
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this
    || (BoardTouchMissionId = MasterMissionListViewManager__GetBoardTouchMissionId(
                                (MasterMissionListViewManager_o *)this,
                                0),
        (this = (MasterMissionComponent_o *)sub_1C6BAB0(int___TypeInfo, 1)) == 0) )
  {
LABEL_10:
    sub_1C6BC60(this, method);
  }
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_11:
    sub_1C6BC68(this);
  LODWORD(this->fields.myFsm) = BoardTouchMissionId;
  v2->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.sendMissionIds, (int32_t)this, v6, v7);
  this = (MasterMissionComponent_o *)v2->fields.myFsm;
  v2->fields.isBoardTouch = 1;
  if ( !this )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11151/*"REWARD_ACCEPTABLE"*/, 0);
}


void MasterMissionComponent__Close(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v5; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  struct MasterMissionListViewManager_array *v7; // x8
  struct MasterMissionListViewManager_array *v8; // x8
  struct MasterMissionListViewManager_array *v9; // x8
  MasterMissionComponent_o *v10; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4CB8C18 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    byte_4CB8C18 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0);
  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    goto LABEL_22;
  EventSvtControl__stopVoice(svtVoiceCtr, 0);
  MasterMissionComponent__ReleaseSvtVoiceData(this, v5);
  svtVoiceCtr = (EventSvtControl_o *)this->fields.standFigureBack;
  if ( !svtVoiceCtr )
    goto LABEL_22;
  StandFigureBack__DestroyFigure((StandFigureBack_o *)svtVoiceCtr, 0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_22;
  if ( !LODWORD(missionListViewManager->max_length) )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)missionListViewManager->m_Items[0];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0);
  v7 = this->fields.missionListViewManager;
  if ( !v7 )
    goto LABEL_22;
  if ( LODWORD(v7->max_length) <= 1 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v7->m_Items[1];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_22;
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v8->m_Items[2];
  if ( !svtVoiceCtr
    || (MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0),
        (v9 = this->fields.missionListViewManager) == 0) )
  {
LABEL_22:
    sub_1C6BC60(svtVoiceCtr, v3);
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_23:
    sub_1C6BC68(svtVoiceCtr);
  svtVoiceCtr = (EventSvtControl_o *)v9->m_Items[3];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0);
  EventRewardSaveData__SaveAllMissionData(0);
  svtVoiceCtr = (EventSvtControl_o *)this->fields.completeMissionIconSprite;
  if ( !svtVoiceCtr )
    goto LABEL_22;
  CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)svtVoiceCtr, 0);
  svtVoiceCtr = (EventSvtControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !svtVoiceCtr )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtVoiceCtr, 0, 0);
  MasterMissionComponent__UpdateEventInfos(v10, v11);
  MasterMissionComponent__RestoreTerminalTouchEnabledBeforeOpen(this, v12);
}


void MasterMissionComponent__EndLoadVoiceAssets(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4CB8BF6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB8BF6 = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C6BC60(titleInfo, v3);
  }
  CommonUI__SetLoadMode((CommonUI_o *)titleInfo, 0, 0);
}


void MasterMissionComponent__ExitCompleteMission(
        MasterMissionComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x19
  MasterMissionComponent___c_c *v7; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__150_0; // x20
  Il2CppObject *v10; // x21
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB8BEC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_MasterMissionComponent___c__ExitCompleteMission_b__150_0__);
    sub_1C6BA08(&MasterMissionComponent___c_TypeInfo);
    byte_4CB8BEC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  v7 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v7 = MasterMissionComponent___c_TypeInfo;
  }
  _9__150_0 = v7->static_fields->__9__150_0;
  if ( !_9__150_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = MasterMissionComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__150_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__150_0, v10, Method_MasterMissionComponent___c__ExitCompleteMission_b__150_0__, 0);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__150_0 = _9__150_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__150_0, (int32_t)_9__150_0, v12, v13);
  }
  if ( !v6 )
    sub_1C6BC60(v7, v4);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__150_0, 0);
}


int32_t MasterMissionComponent__GetCompleteMissionClearCount(
        MasterMissionComponent_o *this,
        EventMissionEntity_array *eventMissionList,
        int32_t type,
        const MethodInfo *method)
{
  int max_length; // w8
  int v6; // w26
  int32_t v7; // w20
  Il2CppClass **v8; // x8
  EventMissionEntity_o *v9; // x21
  bool isNowMission; // w0
  int32_t missionTargetId; // w22
  int32_t id; // w23
  bool v13; // w24
  bool IsIgnoreStartCondition; // w25
  bool v15; // w24
  int32_t MissionProgressType_47253704; // w0

  if ( (byte_4CB8BE9 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1C6BA08(&MissionInfoMaker_TypeInfo);
    byte_4CB8BE9 = 1;
  }
  if ( !eventMissionList )
    goto LABEL_16;
  max_length = eventMissionList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C6BC68(this);
      v8 = &eventMissionList->obj.klass + v6;
      v9 = (EventMissionEntity_o *)v8[4];
      if ( !v9 )
        break;
      isNowMission = EventMissionEntity__isNowMission((EventMissionEntity_o *)v8[4], 0);
      missionTargetId = v9->fields.missionTargetId;
      id = v9->fields.id;
      v13 = isNowMission;
      IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v9, 0);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      v15 = v13;
      MissionProgressType_47253704 = MissionInfoMaker__GetMissionProgressType_47253704(
                                       missionTargetId,
                                       id,
                                       v15,
                                       IsIgnoreStartCondition,
                                       0);
      this = (MasterMissionComponent_o *)MissionInfoMaker__GetProgStatus(
                                           v9->fields.missionTargetId,
                                           v9->fields.id,
                                           MissionProgressType_47253704,
                                           v15,
                                           0);
      max_length = eventMissionList->max_length;
      ++v6;
      if ( (_DWORD)this == 3 )
        ++v7;
      if ( v6 >= max_length )
        return v7;
    }
LABEL_16:
    sub_1C6BC60(this, eventMissionList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t MasterMissionComponent__GetExchangeStoneCount(
        MasterMissionComponent_o *this,
        int32_t fragmentCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( fragmentCount < 1 || MasterMissionComponent__get_StonePrice(this, *(const MethodInfo **)&fragmentCount) < 1 )
    return 0;
  else
    return fragmentCount / MasterMissionComponent__get_StonePrice(this, v5);
}


int32_t MasterMissionComponent__GetMissionClearCount(
        MasterMissionComponent_o *this,
        EventMissionEntity_array *eventMissionList,
        int32_t type,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  int32_t v7; // w21
  unsigned __int64 v8; // x24
  EventMissionEntity_o *v9; // x23
  MasterMissionListViewItem_o *v10; // x22

  if ( (byte_4CB8BF8 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1C6BA08(&MasterMissionListViewItem_TypeInfo);
    byte_4CB8BF8 = 1;
  }
  if ( !eventMissionList )
    goto LABEL_14;
  max_length = eventMissionList->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C6BC68(this);
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_1C6BC54(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v10, v9, type, 0);
      if ( !v10 )
        break;
      LODWORD(max_length) = eventMissionList->max_length;
      ++v8;
      if ( v10->fields.progStatus == 3 )
        ++v7;
      if ( (__int64)v8 >= (int)max_length )
        return v7;
    }
LABEL_14:
    sub_1C6BC60(this, eventMissionList);
  }
  return 0;
}


int32_t MasterMissionComponent__GetMissionTypeByTabType(int32_t tabType, const MethodInfo *method)
{
  if ( (unsigned int)(tabType - 1) > 2 )
    return 3;
  else
    return dword_D216CC[tabType - 1];
}


void MasterMissionComponent__HideCompleteMissionIconLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *completeMissionIcon; // x0

  completeMissionIcon = this->fields.completeMissionIcon;
  if ( !completeMissionIcon
    || (UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0),
        (completeMissionIcon = (UnityEngine_GameObject_o *)this->fields.completeMissionIconSprite) == 0)
    || (CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)completeMissionIcon, 0),
        (completeMissionIcon = this->fields.completeMissionAlertRoot) == 0)
    || (UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0),
        (completeMissionIcon = this->fields.completeMissionCountRoot) == 0) )
  {
    sub_1C6BC60(completeMissionIcon, method);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0);
}


void MasterMissionComponent__InitCompleteMissionLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *currentCompleteMissionList; // x0
  Il2CppObject *Item; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CB8BE7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    byte_4CB8BE7 = 1;
  }
  currentCompleteMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_1C6BC60(0, method);
  if ( currentCompleteMissionList->fields._size < 1 )
  {
    MasterMissionComponent__HideCompleteMissionIconLb(this, method);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentCompleteMissionList,
             0,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    MasterMissionComponent__ChangeViewCompleteMissionLb(
      this,
      (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
      v5);
  }
}


bool MasterMissionComponent__IsLimitedMissionEnableTime(MasterMissionComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0
  int64_t NoneExpireTime; // x23
  int64_t Time; // x19
  MstMissionEntity_array *Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  MstMissionEntity_array *v8; // x20
  int v9; // w25
  int v10; // w26
  __int64 v11; // x24
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x21
  int64_t data; // x9
  bool result; // w0
  BalanceConfig_c *v17; // x0

  if ( (byte_4CB8BED & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB8BED = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v2->static_fields->NoneExpireTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = (MstMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (MstMissionEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_31;
  max_length = Instance->max_length;
  v8 = Instance;
  v9 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    v11 = -1;
    while ( 1 )
    {
      v12 = &v8->obj.klass + v10;
      v13 = v12[4];
      if ( !v13 )
        break;
      Instance = (MstMissionEntity_array *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v12[4], 0);
      if ( (_DWORD)Instance == 5 )
      {
        data = (int64_t)v13->_1.this_arg.data;
        if ( (__int64)v13->_1.byval_arg.data > v11 )
          v11 = (__int64)v13->_1.byval_arg.data;
        if ( Time < data && NoneExpireTime > data )
          NoneExpireTime = (int64_t)v13->_1.this_arg.data;
      }
      if ( v9 == v10 )
        goto LABEL_25;
      if ( (unsigned int)++v10 >= LODWORD(v8->max_length) )
        sub_1C6BC68(Instance);
    }
LABEL_31:
    sub_1C6BC60(Instance, v6);
  }
  v11 = -1;
LABEL_25:
  result = 0;
  if ( Time < NoneExpireTime && v11 <= Time )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    return NoneExpireTime < v17->static_fields->NoneExpireTime;
  }
  return result;
}


void MasterMissionComponent__LoadNotificationEnd(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  _BOOL8 _40657328; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *v15; // x0
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4CB8BE4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C6BA08(&Method_MasterMissionComponent__LoadNotificationEnd_b__140_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB8BE4 = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = (struct MstMissionMaster_o *)MasterData_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mstMissionMst, (int32_t)MasterData_object, v6, v7);
  EventRewardSaveData__LoadAllMissionData(0);
  MasterMissionComponent__SetMissionDisp(this, v8);
  MasterMissionComponent__SetMissionClearNum(this, v9);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v10);
  Instance = (DataManager_o *)this->fields.rewardInfoController;
  if ( !Instance )
    goto LABEL_30;
  MissionRewardInfoController__SetupWindow((MissionRewardInfoController_o *)Instance, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40657328(126, 0) )
  {
    Instance = (DataManager_o *)this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_30;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0);
    Instance = (DataManager_o *)this->fields.playBtnImg;
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v4);
    MasterMissionComponent__setGuideSvtVoice(this, v12);
    Instance = (DataManager_o *)this->fields.playBtnImg;
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  }
  MasterMissionComponent__reDispMissionList(this, v11);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40657328 = TutorialFlag__Get_40657328(207, 0);
  if ( !_40657328 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_40657328, v14);
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)v15;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__140_0__, 0);
  if ( !v17 )
LABEL_30:
    sub_1C6BC60(Instance, v4);
  CommonUI__maskFadein(v17, DEFAULT_FADE_TIME, v19, 0);
}


void MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct MasterMissionComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v7; // x0
  QuestRewardItemAction_c *klass; // x8

  if ( (byte_4CB8C17 & 1) == 0 )
  {
    sub_1C6BA08(&Method_MasterMissionComponent_OnClickBack__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB8C17 = 1;
  }
  v3 = Method_MasterMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_MasterMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      callbackFunc->fields.method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v7->fields.friendPointBoostItemAction->klass;
  if ( !klass || (v7 = *(ScrTerminalListTop_o **)&klass->_2.element_size) == 0 )
    sub_1C6BC60(v7, v5);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v7, 0);
}


void MasterMissionComponent__OnClickBulkReceive(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB8C22 & 1) == 0 )
  {
    sub_1C6BA08(&Method_MasterMissionComponent_OnClickBulkReceive__);
    sub_1C6BA08(&StringLiteral_3001/*"BULK_RECEIVE"*/);
    byte_4CB8C22 = 1;
  }
  v3 = Method_MasterMissionComponent_OnClickBulkReceive__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBulkReceive__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_MasterMissionComponent_OnClickBulkReceive__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3001/*"BULK_RECEIVE"*/, 0);
}


void MasterMissionComponent__OnClickCompleteMissionBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  Il2CppObject *v6; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  System_String_o *v10; // x19
  long double inited; // q0
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  System_String_o *v16; // x19
  CommonUI_o *v17; // x20
  MasterMissionComponent___c_c *v18; // x8
  System_Action_o *_9__149_1; // x21
  Il2CppObject *v20; // x22
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4CB8BEB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Array_Empty_object___);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__149_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__149_1__);
    sub_1C6BA08(&MasterMissionComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_3702/*"COMPLETE_MISSION_END"*/);
    byte_4CB8BEB = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4CB01CE )
      {
        sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
        byte_4CB01CE = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v5 = **(_QWORD **)&Instance[1].fields._DispLog;
      if ( v5 )
      {
        Instance = *(DataManager_o **)(v5 + 264);
        if ( Instance )
        {
          ScrTerminalMap__DestroyEventActionEffect((ScrTerminalMap_o *)Instance, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__PlaySystemSE(0, 0);
          v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v7 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v7 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
          v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(
            v9,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__149_0__,
            0);
          if ( v6 )
          {
            CommonUI__maskFadeout((CommonUI_o *)v6, 1, DEFAULT_FADE_TIME, v9, 0);
            return;
          }
        }
      }
LABEL_40:
      sub_1C6BC60(Instance, v4);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3702/*"COMPLETE_MISSION_END"*/, 0);
    v12 = Method_System_Array_Empty_object___;
    v13 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v13 )
    {
      sub_1C41AF8(Method_System_Array_Empty_object___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C41A9C(inited);
    v16 = System_String__Format_64008236(v10, **(System_Object_array ***)(v15 + 184), 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (CommonUI_o *)Instance;
    v18 = MasterMissionComponent___c_TypeInfo;
    if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v18 = MasterMissionComponent___c_TypeInfo;
    }
    _9__149_1 = v18->static_fields->__9__149_1;
    if ( !_9__149_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = MasterMissionComponent___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__149_1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(_9__149_1, v20, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__149_1__, 0);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__149_1 = _9__149_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__149_1, (int32_t)_9__149_1, v22, v23);
    }
    if ( !v17 )
      goto LABEL_40;
    CommonUI__OpenNotificationDialog(v17, 0, v16, _9__149_1, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
  }
}


void MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4CB8C06 & 1) == 0 )
  {
    sub_1C6BA08(&Method_MasterMissionComponent_OnClickDailyTab__);
    byte_4CB8C06 = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_MasterMissionComponent_OnClickDailyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickDailyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_MasterMissionComponent_OnClickDailyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.nowType = 0;
    EventRewardSaveData__SaveAllMissionData(0);
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void MasterMissionComponent__OnClickExtraTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4CB8C08 & 1) == 0 )
  {
    sub_1C6BA08(&Method_MasterMissionComponent_OnClickExtraTab__);
    byte_4CB8C08 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_MasterMissionComponent_OnClickExtraTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickExtraTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_MasterMissionComponent_OnClickExtraTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.nowType = 2;
    EventRewardSaveData__SaveAllMissionData(0);
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void MasterMissionComponent__OnClickHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  MasterMissionComponent_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CB8C20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_MasterMissionComponent_OnClickHelp__);
    byte_4CB8C20 = 1;
  }
  v2 = Method_MasterMissionComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C6BA20(Method_MasterMissionComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  MasterMissionComponent__OpenHelp(v4, v5);
}


void MasterMissionComponent__OnClickLimitedTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4CB8C09 & 1) == 0 )
  {
    sub_1C6BA08(&Method_MasterMissionComponent_OnClickLimitedTab__);
    byte_4CB8C09 = 1;
  }
  if ( this->fields.nowType != 3 )
  {
    v3 = Method_MasterMissionComponent_OnClickLimitedTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickLimitedTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_MasterMissionComponent_OnClickLimitedTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.nowType = 3;
    EventRewardSaveData__SaveAllMissionData(0);
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void MasterMissionComponent__OnClickShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x19
  MasterMissionComponent___c_c *v8; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__177_0; // x20
  Il2CppObject *v11; // x21
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB8C04 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent_OnClickShopBtn__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_MasterMissionComponent___c__OnClickShopBtn_b__177_0__);
    sub_1C6BA08(&MasterMissionComponent___c_TypeInfo);
    byte_4CB8C04 = 1;
  }
  v2 = Method_MasterMissionComponent_OnClickShopBtn__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickShopBtn__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C6BA20(Method_MasterMissionComponent_OnClickShopBtn__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  v8 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v8 = MasterMissionComponent___c_TypeInfo;
  }
  _9__177_0 = v8->static_fields->__9__177_0;
  if ( !_9__177_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MasterMissionComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__177_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__177_0, v11, Method_MasterMissionComponent___c__OnClickShopBtn_b__177_0__, 0);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__177_0 = _9__177_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__177_0, (int32_t)_9__177_0, v13, v14);
  }
  if ( !v7 )
    sub_1C6BC60(v8, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__177_0, 0);
}


void MasterMissionComponent__OnClickSvt(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.isVoicePlaying )
  {
    svtVoiceCtr = this->fields.svtVoiceCtr;
    if ( !svtVoiceCtr )
      sub_1C6BC60(0, method);
    EventSvtControl__stopVoice(svtVoiceCtr, 0);
    MasterMissionComponent__setNormalFace(this, v4);
  }
  else
  {
    MasterMissionComponent__playSvtVoice(this, method);
  }
}


void MasterMissionComponent__OnClickWeeklyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4CB8C07 & 1) == 0 )
  {
    sub_1C6BA08(&Method_MasterMissionComponent_OnClickWeeklyTab__);
    byte_4CB8C07 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_MasterMissionComponent_OnClickWeeklyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickWeeklyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_MasterMissionComponent_OnClickWeeklyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.nowType = 1;
    EventRewardSaveData__SaveAllMissionData(0);
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
    if ( MasterMissionComponent__ShouldPlayedStoneButtonEffect(this, v8) )
      MasterMissionComponent__PlayStoneButtonEffect(this, v9);
  }
}


void MasterMissionComponent__OnCompleteLoadVoiceAsset(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // zf

  v2 = this->fields.downLoadCnt - 1;
  v3 = this->fields.downLoadCnt == 1;
  this->fields.downLoadCnt = v2;
  if ( v2 < 0 || v3 )
    MasterMissionComponent__EndLoadVoiceAssets(this, method);
}


void MasterMissionComponent__OnDestroy(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB8BE2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8BE2 = 1;
  }
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_1C6BC60(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
    *p_titleInfo = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.titleInfo, 0, v7, v8);
  }
  MasterMissionComponent__StopStoneButtonEffect(this, v5);
}


void MasterMissionComponent__Open(
        MasterMissionComponent_o *this,
        MasterMissionComponent_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        int32_t typeIndex,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v23; // w20
  bool v24; // w1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  TitleInfoControl_o *v31; // x21
  TitleInfoControl_o *v32; // x20
  System_Action_o *v33; // x21
  MasterMissionComponent_c *v34; // x0
  __int64 v35; // d0
  struct MstMissionEntity_array *Entitys; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v43; // x21
  ConnectMark_c *klass; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  System_Action_o *v46; // x20

  if ( (byte_4CB8BE3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_MstMissionMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_MstMissionEntity__TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent_LoadNotificationEnd__);
    sub_1C6BA08(&Method_MasterMissionComponent_OnClickBack__);
    sub_1C6BA08(&Method_MasterMissionComponent__Open_b__139_0__);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB8BE3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  CommonUI__SetLoadMode(Instance, 1, 0);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  this->fields.reDispAction = redisp_act;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.reDispAction, (int32_t)redisp_act, v13, v14);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_52;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentEventIdList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentMstMissionEntList, (int32_t)v18, v19, v20);
  EventRewardSaveData__LoadMstMissionIndex(0);
  if ( typeIndex == -1 )
  {
    if ( !byte_4CB0776 )
    {
      Instance = (CommonUI_o *)sub_1C6BA08(&EventRewardSaveData_TypeInfo);
      byte_4CB0776 = 1;
    }
    typeIndex = EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
  }
  missionTabList = this->fields.missionTabList;
  this->fields.nowType = typeIndex;
  if ( !missionTabList )
    goto LABEL_52;
  max_length = missionTabList->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
        sub_1C6BC68(Instance);
      Instance = (CommonUI_o *)missionTabList->m_Items[v23];
      if ( !Instance )
        break;
      MasterMissionTab__SetTabSize((MasterMissionTab_o *)Instance, 1, 0);
      max_length = missionTabList->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_15;
    }
LABEL_52:
    sub_1C6BC60(Instance, v10);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v10) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_52;
    v24 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_52;
    v24 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v24, 0);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0, 0) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__Instantiate_object_(
                               titlePrefab,
                               (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v29, v30);
    v31 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v31 )
      goto LABEL_52;
    TitleInfoControl__SetParent(v31, (UnityEngine_Transform_o *)Instance, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setDepth((TitleInfoControl_o *)Instance, 37, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 38, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, 0, 85, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__changeTitleInfo_40073532((TitleInfoControl_o *)Instance, 1, 85, 0, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
    v32 = this->fields.titleInfo;
    v33 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, (intptr_t)Method_MasterMissionComponent_OnClickBack__, 0);
    if ( !v32 )
      goto LABEL_52;
    TitleInfoControl__SetBackBtnAct(v32, v33, 0);
  }
  v34 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v34 = MasterMissionComponent_TypeInfo;
  }
  v35 = *(_QWORD *)v34->static_fields;
  this->fields.currentDispId = 0;
  *(_QWORD *)&this->fields.currentEventSvtId = v35;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entitys = (struct MstMissionEntity_array *)DataMasterBase_object__object__int___getEntitys(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                               (const MethodInfo_33F8360 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
  this->fields.mstMissionList = Entitys;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mstMissionList, (int32_t)Entitys, v37, v38);
  MasterMissionComponent__SetupShopBtn(this, v39);
  MasterMissionComponent__SetupCompleteBtn(this, v40);
  MasterMissionComponent__RefreshInfo(this, v41);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v43 = (System_Action_int__o *)sub_1C6BC54(System_Action_int__TypeInfo);
  System_Action_int____ctor(v43, (Il2CppObject *)this, Method_MasterMissionComponent__Open_b__139_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v43, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.connectMark->klass;
  if ( !klass )
    goto LABEL_52;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_52;
  this->fields.isTerminalTouchEnabledBeforeOpen = TitleInfoControl__IsTouchEnable(
                                                    (TitleInfoControl_o *)klass->_2.genericContainerHandle,
                                                    0);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0);
  v46 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v46, 0);
}


void MasterMissionComponent__OpenCompleteMission(
        MasterMissionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  CompleteMissionComponent_ClickDelegate_o *v5; // x20
  __int64 v6; // x1
  MasterMissionComponent___c_c *mInstance; // x0
  System_Action_o *_9__148_0; // x21
  Il2CppObject *v9; // x22
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  TerminalSceneComponent_c *v13; // x0

  if ( (byte_4CB8BEA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&CompleteMissionComponent_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent_ExitCompleteMission__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent___c__OpenCompleteMission_b__148_0__);
    sub_1C6BA08(&MasterMissionComponent___c_TypeInfo);
    byte_4CB8BEA = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CompleteMissionComponent_ClickDelegate_o *)sub_1C6BC54(CompleteMissionComponent_ClickDelegate_TypeInfo);
  CompleteMissionComponent_ClickDelegate___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ExitCompleteMission__,
    0);
  mInstance = MasterMissionComponent___c_TypeInfo;
  if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    mInstance = MasterMissionComponent___c_TypeInfo;
  }
  _9__148_0 = mInstance->static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( !mInstance->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mInstance);
      mInstance = MasterMissionComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)mInstance->static_fields->__9;
    _9__148_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__148_0, v9, Method_MasterMissionComponent___c__OpenCompleteMission_b__148_0__, 0);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__148_0 = _9__148_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__148_0, (int32_t)_9__148_0, v11, v12);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v5, _9__148_0, 0, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v13->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_1C6BC60(mInstance, v6);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0);
}


void MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CB8C21 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB8C21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v3);
  CommonUI__OpenTutorialImageDialog_31443552((CommonUI_o *)Instance, 42, 207, 0, 0, 0, 0);
}


void MasterMissionComponent__OpenPresentBox(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v4; // x21
  ScrTerminalListTop_o *v5; // x0
  __int64 v6; // x1
  QuestRewardItemAction_c *klass; // x8
  CommonUI_o *v8; // x19
  MasterMissionComponent_c *v9; // x8
  QuestRewardItemAction_c *v10; // x8

  if ( (byte_4CB8C11 & 1) == 0 )
  {
    sub_1C6BA08(&UserPresentBoxWindow_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent__OpenPresentBox_b__192_0__);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB8C11 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (UserPresentBoxWindow_ClickDelegate_o *)sub_1C6BC54(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__192_0__,
    0);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v4, 0, 0);
  v5 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v5 )
    goto LABEL_28;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v5, 34, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CB01CE )
    {
      sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
      byte_4CB01CE = 1;
    }
    v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v5->fields.friendPointBoostItemAction->klass;
    if ( !klass )
      goto LABEL_28;
    v5 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
    if ( !v5 )
      goto LABEL_28;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth(v5, 0) )
    {
      v5 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (CommonUI_o *)v5;
      v9 = MasterMissionComponent_TypeInfo;
      if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        v9 = MasterMissionComponent_TypeInfo;
      }
      if ( v8 )
      {
        CommonUI__SetUsrPresentListPos(v8, v9->static_fields->BLANK_EARTH_WINDOW_POS, 0);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CB01CE )
        {
          sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
          byte_4CB01CE = 1;
        }
        v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v10 = v5->fields.friendPointBoostItemAction->klass;
        if ( v10 )
        {
          v5 = *(ScrTerminalListTop_o **)&v10->_2.element_size;
          if ( v5 )
          {
            ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v5, 0, 0);
            return;
          }
        }
      }
LABEL_28:
      sub_1C6BC60(v5, v6);
    }
  }
}


void MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  Il2CppObject *v4; // x20
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB8C1E & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8C1E = 1;
  }
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0, 0) )
  {
    v4 = (Il2CppObject *)this->fields.btnEffectBasePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__Instantiate_object_(
           v4,
           (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = (struct UnityEngine_GameObject_o *)v5;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.btnEffectPrefab, (int32_t)v5, v6, v7);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0, 0) )
      GameObjectExtensions__SafeSetParent_36361932(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0);
  }
}


void MasterMissionComponent__PresentBoxOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  PresentBoxOverDialog_o *presentBoxOverDialog; // x20
  System_String_o *v4; // x21
  PresentBoxOverDialog_ClickDelegate_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CB8C10 & 1) == 0 )
  {
    sub_1C6BA08(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent__PresentBoxOver_b__191_0__);
    sub_1C6BA08(&StringLiteral_8554/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB8C10 = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8554/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0);
  v5 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1C6BC54(PresentBoxOverDialog_ClickDelegate_TypeInfo);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__191_0__,
    0);
  if ( !presentBoxOverDialog )
    sub_1C6BC60(v6, v7);
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1/*""*/, v4, v5, 26, 0);
}


void MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x22
  __int64 v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Int32_array *receiveMissionIds; // x8
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v15; // x19
  System_Action_o *v16; // x21
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v18; // x19
  System_Action_o *v19; // x22

  if ( (byte_4CB8C0F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C6BA08(&Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__0__);
    sub_1C6BA08(&Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__1__);
    sub_1C6BA08(&Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__2__);
    sub_1C6BA08(&MasterMissionComponent___c__DisplayClass190_0_TypeInfo);
    byte_4CB8C0F = 1;
  }
  v3 = sub_1C6BC54(MasterMissionComponent___c__DisplayClass190_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass190_0___ctor((MasterMissionComponent___c__DisplayClass190_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v3,
    Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__0__,
    0);
  *(_QWORD *)(v3 + 24) = v8;
  v9 = v3 + 24;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v8, v10, v11);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      AdManager__TrackEvent((AdManager_o *)Instance, 8, this->fields.nowType + 8, -1, -1, 0, 0);
    }
    if ( this->fields.isBoardTouch )
    {
      missionListViewManager = this->fields.missionListViewManager;
      if ( missionListViewManager )
      {
        nowType = this->fields.nowType;
        if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
          sub_1C6BC68(Instance);
        v15 = missionListViewManager->m_Items[nowType];
        v16 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(
          v16,
          (Il2CppObject *)v3,
          Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__1__,
          0);
        if ( v15 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v15, v16, 0);
          return;
        }
      }
LABEL_20:
      sub_1C6BC60(Instance, v5);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v18 = this->fields.receiveMissionIds;
    v19 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v3,
      Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__2__,
      0);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v18, v19, 0);
  }
  else
  {
    if ( !*(_QWORD *)v9 )
      goto LABEL_20;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v9 + 64LL),
      *(_QWORD *)(*(_QWORD *)v9 + 40LL));
  }
}


void MasterMissionComponent__RefreshInfo(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UILabel_o *stoneInfoLabel; // x21
  int32_t stone; // w20
  int32_t UserStoneFragmentNum; // w0
  UILabel_o *stoneFragmentsInfoLabel; // x21
  int32_t v10; // w20
  const MethodInfo *v11; // x2

  if ( (byte_4CB8C1B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB8C1B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_13;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(stone, 0);
  if ( !stoneInfoLabel )
    goto LABEL_13;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v10 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0),
        !stoneFragmentsInfoLabel) )
  {
LABEL_13:
    sub_1C6BC60(Instance, v5);
  }
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0);
  MasterMissionComponent__UpdateStoneExchangeCount(this, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionComponent__RefreshMissionRewardItemInfo(
        MasterMissionComponent_o *this,
        bool isMissionRewardGet,
        const MethodInfo *method)
{
  MasterMissionComponent_o *v4; // x19
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionComponent_o *v7; // x21
  _BOOL4 v8; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x20
  MasterMissionComponent_c *v11; // x0
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  __int64 v13; // x9
  __int64 v14; // x10
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x19
  MasterMissionComponent_c *v18; // x0
  struct MasterMissionComponent_StaticFields *v19; // x8
  __int64 v20; // x9
  __int64 v21; // x10
  MasterMissionComponent_c *v22; // x0
  struct MasterMissionComponent_StaticFields *v23; // x8
  __int64 v24; // x9
  __int64 v25; // x10
  Il2CppObject *v26; // x19
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4

  v4 = this;
  if ( (byte_4CB8C24 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
    sub_1C6BA08(&FSUtility_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8C24 = 1;
  }
  missionListViewManager = v4->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_50;
  nowType = v4->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
    goto LABEL_50;
  this = (MasterMissionComponent_o *)MasterMissionListViewManager__GetRewardItemInfo(
                                       (MasterMissionListViewManager_o *)this,
                                       0);
  if ( !v4->fields.rewardInfoController )
    goto LABEL_50;
  v7 = this;
  MissionRewardInfoController__RefreshMissionRewardItemInfo(
    v4->fields.rewardInfoController,
    (System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *)this,
    isMissionRewardGet,
    0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__IsUnderVista(0);
  v8 = v7
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)v7,
         (const MethodInfo_34521A0 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__) > 0;
  this = (MasterMissionComponent_o *)v4->fields.helpBtn;
  if ( !this )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (MasterMissionComponent_o *)GameObjectExtensions__GetParent(gameObject, 0);
  if ( !this )
    goto LABEL_50;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0) )
  {
    v11 = MasterMissionComponent_TypeInfo;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v11 = MasterMissionComponent_TypeInfo;
    }
    static_fields = v11->static_fields;
    v13 = 140;
    if ( v8 )
    {
      v14 = 136;
    }
    else
    {
      v13 = 132;
      v14 = 128;
    }
    LODWORD(v27.fields.x) = *(int32_t *)((char *)&static_fields->DEFAULT_SVT_ID + v14);
    LODWORD(v27.fields.y) = *(int32_t *)((char *)&static_fields->DEFAULT_SVT_ID + v13);
    GameObjectExtensions__SetLocalPosition_36356036(v10, v27, 0);
    if ( !v10 )
      goto LABEL_50;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v10,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MasterMissionComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_50;
      FSOffset__AddOffsetX((FSOffset_o *)Component_object, 0);
      FSOffset__AddBottomY((FSOffset_o *)Component_object, 0);
    }
  }
  this = (MasterMissionComponent_o *)v4->fields.playBtnImg;
  if ( !this )
    goto LABEL_50;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (MasterMissionComponent_o *)GameObjectExtensions__GetParent(v16, 0);
  if ( !this )
    goto LABEL_50;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0) )
  {
    v18 = MasterMissionComponent_TypeInfo;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v18 = MasterMissionComponent_TypeInfo;
    }
    v19 = v18->static_fields;
    v20 = 156;
    if ( v8 )
    {
      v21 = 152;
    }
    else
    {
      v20 = 148;
      v21 = 144;
    }
    LODWORD(v28.fields.x) = *(int32_t *)((char *)&v19->DEFAULT_SVT_ID + v21);
    LODWORD(v28.fields.y) = *(int32_t *)((char *)&v19->DEFAULT_SVT_ID + v20);
    GameObjectExtensions__SetLocalPosition_36356036(v17, v28, 0);
    v22 = MasterMissionComponent_TypeInfo;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v22 = MasterMissionComponent_TypeInfo;
    }
    v23 = v22->static_fields;
    v24 = 172;
    if ( v8 )
    {
      v25 = 168;
    }
    else
    {
      v24 = 164;
      v25 = 160;
    }
    LODWORD(v29.fields.x) = *(int32_t *)((char *)&v23->DEFAULT_SVT_ID + v25);
    LODWORD(v29.fields.y) = *(int32_t *)((char *)&v23->DEFAULT_SVT_ID + v24);
    GameObjectExtensions__SetLocalScale_36358044(v17, v29, 0);
    if ( !v17 )
      goto LABEL_50;
    v26 = UnityEngine_GameObject__GetComponent_object_(
            v17,
            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MasterMissionComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v26 )
      {
        FSOffset__AddOffsetX((FSOffset_o *)v26, 0);
        FSOffset__AddBottomY((FSOffset_o *)v26, 0);
        return;
      }
LABEL_50:
      sub_1C6BC60(this, isMissionRewardGet);
    }
  }
}


void MasterMissionComponent__ReleaseSvtVoiceData(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB8C15 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB8C15 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)currentVoiceDataList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v12.fields._current )
        sub_1C6BC60(v4, v5);
      v6 = *(System_String_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&word_10);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__releaseAudioAssetStorage(v6, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v9 = this->fields.currentVoiceDataList;
    if ( !v9 )
      sub_1C6BC60(v7, v8);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  }
}


void MasterMissionComponent__RequestMissionReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4CB8C0C & 1) == 0 )
  {
    sub_1C6BA08(&Method_MasterMissionComponent_missionRewardCallback__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB8C0C = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_object )
    sub_1C6BC60(0, v5);
  EventMissionClearRewardRequest__beginRequest_44462380(
    (EventMissionClearRewardRequest_o *)Request_object,
    this->fields.sendMissionIds,
    0);
}


void MasterMissionComponent__RestoreTerminalTouchEnabledBeforeOpen(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  UnityEngine_Object_c *klass; // x0
  _BOOL8 v6; // x1
  bool IsTouchEnable; // w0

  if ( (byte_4CB8C1A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB8C1A = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !mInstance
      || (klass = mInstance[10].klass) == 0
      || (IsTouchEnable = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)klass, 0),
          v6 = IsTouchEnable,
          this->fields.isTerminalTouchEnabledBeforeOpen = IsTouchEnable,
          (klass = mInstance[10].klass) == 0) )
    {
      sub_1C6BC60(klass, v6);
    }
    TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)klass, v6, 0);
  }
}


void MasterMissionComponent__ServantOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int32_t overflowType; // w22
  UserPresentBoxErrorDialog_o *servantOverDialog; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UserPresentBoxErrorDialog_o *v7; // x20
  System_Action_T__o *v8; // x21
  int32_t v9; // w1

  if ( (byte_4CB8C12 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_SceneList_Type__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent_ServantOverDialogClose__);
    sub_1C6BA08(&StringLiteral_8564/*"MASTER_MISSION_SERVANT_OVER_MSG"*/);
    byte_4CB8C12 = 1;
  }
  overflowType = this->fields.overflowType;
  servantOverDialog = this->fields.servantOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8564/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v5, 0),
        v7 = this->fields.servantOverDialog,
        v8 = (System_Action_T__o *)sub_1C6BC54(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(
          v8,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          0),
        !v7)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v7, (System_Action_SceneList_Type__o *)v8, 0),
        (v5 = (System_String_o *)this->fields.servantOverDialog) == 0) )
  {
    sub_1C6BC60(v5, v6);
  }
  if ( overflowType == 4 )
    v9 = 2;
  else
    v9 = overflowType == 2;
  UserPresentBoxErrorDialog__setJumpType((UserPresentBoxErrorDialog_o *)v5, v9, 0);
}


void MasterMissionComponent__ServantOverDialogClose(
        MasterMissionComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  System_Action_T__o *v6; // x22
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4CB8C13 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_SceneList_Type__TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent_ServantOverDialogClose__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_3434/*"CLICK_CANCEL"*/);
    byte_4CB8C13 = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v6 = (System_Action_T__o *)sub_1C6BC54(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v6, (Il2CppObject *)this, Method_MasterMissionComponent_ServantOverDialogClose__, 0);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v6, 0);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0);
      return;
    }
LABEL_9:
    sub_1C6BC60(Instance, v8);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3434/*"CLICK_CANCEL"*/, 0);
}


void MasterMissionComponent__SetAfterAction(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionComponent_o *v4; // x19
  const MethodInfo *v5; // x2

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  v4 = this;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, method);
  MasterMissionListViewManager__setAfterAction((MasterMissionListViewManager_o *)this, v4->fields.receiveMissionIds, 0);
  MasterMissionComponent__RefreshMissionRewardItemInfo(v4, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionComponent__SetBtnEnable(MasterMissionComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dailyTabObj; // x0
  bool v6; // w20

  if ( (byte_4CB8C16 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4CB8C16 = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !dailyTabObj
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)dailyTabObj, isEnable, 0),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.shopBtn) == 0)
    || (dailyTabObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dailyTabObj, 0)) == 0
    || (dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    dailyTabObj,
                                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0
    || (v6 = isEnable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn) == 0) )
  {
LABEL_17:
    sub_1C6BC60(dailyTabObj, isEnable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0);
}


void MasterMissionComponent__SetDailyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Int32_array *VaildDailyMissionData; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v6; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v7; // x21
  struct MasterMissionListViewManager_array *v8; // x8
  MissionListViewManager_o *v9; // x19

  if ( (byte_4CB8BF9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    byte_4CB8BF9 = 1;
  }
  EventRewardSaveData__LoadDailyMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( !LODWORD(missionListViewManager->max_length) )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[0];
  VaildDailyMissionData = (System_Int32_array *)MasterMissionComponent__getVaildDailyMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildDailyMissionData;
  VaildDailyMissionData = System_Collections_Generic_List_int___ToArray(
                            this->fields.currentEventIdList,
                            (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, VaildDailyMissionData, 0, this->fields.reDispAction, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_13;
  if ( !LODWORD(v8->max_length) )
LABEL_14:
    sub_1C6BC68(VaildDailyMissionData);
  v9 = (MissionListViewManager_o *)v8->m_Items[0];
  VaildDailyMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v9 )
LABEL_13:
    sub_1C6BC60(VaildDailyMissionData, v4);
  MissionListViewManager__SetMode_47295720(v9, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetExtraMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Int32_array *ValidExtraMissionData; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v6; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v7; // x21
  struct MasterMissionListViewManager_array *v8; // x8
  MissionListViewManager_o *v9; // x19

  if ( (byte_4CB8BFB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    byte_4CB8BFB = 1;
  }
  EventRewardSaveData__LoadExtraMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( LODWORD(missionListViewManager->max_length) <= 2 )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[2];
  ValidExtraMissionData = (System_Int32_array *)MasterMissionComponent__getValidExtraMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = (System_Collections_Generic_List_EventMissionEntity__o *)ValidExtraMissionData;
  ValidExtraMissionData = System_Collections_Generic_List_int___ToArray(
                            this->fields.currentEventIdList,
                            (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, ValidExtraMissionData, 2, this->fields.reDispAction, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_13;
  if ( LODWORD(v8->max_length) <= 2 )
LABEL_14:
    sub_1C6BC68(ValidExtraMissionData);
  v9 = (MissionListViewManager_o *)v8->m_Items[2];
  ValidExtraMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v9 )
LABEL_13:
    sub_1C6BC60(ValidExtraMissionData, v4);
  MissionListViewManager__SetMode_47295720(v9, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetLimitedMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Int32_array *VaildLimitedMissionData; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v6; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v7; // x21
  struct MasterMissionListViewManager_array *v8; // x8
  MissionListViewManager_o *v9; // x19

  if ( (byte_4CB8BFC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    byte_4CB8BFC = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( LODWORD(missionListViewManager->max_length) <= 3 )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = (System_Int32_array *)MasterMissionComponent__getVaildLimitedMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildLimitedMissionData;
  VaildLimitedMissionData = System_Collections_Generic_List_int___ToArray(
                              this->fields.currentEventIdList,
                              (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, VaildLimitedMissionData, 3, this->fields.reDispAction, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_13;
  if ( LODWORD(v8->max_length) <= 3 )
LABEL_14:
    sub_1C6BC68(VaildLimitedMissionData);
  v9 = (MissionListViewManager_o *)v8->m_Items[3];
  VaildLimitedMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v9 )
LABEL_13:
    sub_1C6BC60(VaildLimitedMissionData, v4);
  MissionListViewManager__SetMode_47295720(v9, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetLimitedMissionRestTime(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *limitedMissionAnnouncementComponent; // x20
  __int64 v4; // x1
  LimitedMissionAnnouncementComponent_o *v5; // x0

  if ( (byte_4CB8C23 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8C23 = 1;
  }
  limitedMissionAnnouncementComponent = (UnityEngine_Object_o *)this->fields.limitedMissionAnnouncementComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(limitedMissionAnnouncementComponent, 0, 0) )
  {
    v5 = this->fields.limitedMissionAnnouncementComponent;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    LimitedMissionAnnouncementComponent__mfInitUserData(v5, 0);
  }
}


void MasterMissionComponent__SetMissionClearNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  MstMissionEntity_array *EnableMissions; // x22
  int max_length; // w8
  EventMissionMaster_o *v7; // x24
  unsigned int v8; // w26
  int32_t v9; // w20
  int32_t v10; // w21
  int32_t v11; // w23
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x25
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  if ( (byte_4CB8BF7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB8BF7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_34;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v7 = (EventMissionMaster_o *)Instance;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C6BC68(Instance);
      v12 = &EnableMissions->obj.klass + (int)v8;
      v13 = v12[4];
      if ( !v13 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v12[4], 0);
      switch ( (_DWORD)Instance )
      {
        case 5:
          if ( !v7 )
            goto LABEL_34;
          ClearMasterMissionList = (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                          v7,
                                                                                          HIDWORD(v13->_1.name),
                                                                                          5,
                                                                                          0);
          Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_object_(
                                        ClearMasterMissionList,
                                        (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          3,
                                          v16);
            v9 += (int)Instance;
          }
          break;
        case 4:
          if ( !v7 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__GetExtraMissionList(v7, HIDWORD(v13->_1.name), 0);
          if ( !Instance )
            goto LABEL_34;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          2,
                                          v17);
            v10 += (int)Instance;
          }
          break;
        case 2:
          if ( !v7 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__GetWeeklyMasterMissionList(v7, HIDWORD(v13->_1.name), 0);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          1,
                                          v14);
            v11 += (int)Instance;
          }
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_1C6BC60(Instance, v4);
  }
  v11 = 0;
  v10 = 0;
  v9 = 0;
LABEL_30:
  Instance = (DataManager_o *)this->fields.weeklyClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v11, 0);
  Instance = (DataManager_o *)this->fields.extraClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v10, 0);
  Instance = (DataManager_o *)this->fields.limitedClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v9, 0);
}


void MasterMissionComponent__SetMissionDisp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  int32_t nowType; // w21
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  struct MasterMissionListViewManager_array *v5; // x8
  struct MasterMissionListViewManager_array *v6; // x8
  struct MasterMissionListViewManager_array *v7; // x8
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  struct MasterMissionListViewManager_array *v10; // x8
  struct MasterMissionListViewManager_array *v11; // x8
  struct MasterMissionListViewManager_array *v12; // x8
  struct MasterMissionListViewManager_array *v13; // x8
  const MethodInfo *v14; // x1
  struct MasterMissionListViewManager_array *v15; // x8
  struct MasterMissionListViewManager_array *v16; // x8
  struct MasterMissionListViewManager_array *v17; // x8
  struct MasterMissionListViewManager_array *v18; // x8
  const MethodInfo *v19; // x1
  struct MasterMissionListViewManager_array *v20; // x8
  struct MasterMissionListViewManager_array *v21; // x8
  struct MasterMissionListViewManager_array *v22; // x8
  struct MasterMissionListViewManager_array *v23; // x8
  const MethodInfo *v24; // x1
  MissionRewardInfoController_o *rewardInfoController; // x20
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1

  v2 = this;
  if ( (byte_4CB8BFD & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    byte_4CB8BFD = 1;
  }
  nowType = v2->fields.nowType;
  switch ( nowType )
  {
    case 0:
      missionListViewManager = v2->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_88;
      if ( !LODWORD(missionListViewManager->max_length) )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)missionListViewManager->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v5 = v2->fields.missionListViewManager;
      if ( !v5 )
        goto LABEL_88;
      if ( LODWORD(v5->max_length) <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v5->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v6 = v2->fields.missionListViewManager;
      if ( !v6 )
        goto LABEL_88;
      if ( LODWORD(v6->max_length) <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v6->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v7 = v2->fields.missionListViewManager;
      if ( !v7 )
        goto LABEL_88;
      if ( LODWORD(v7->max_length) <= 3 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v7->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, const char *))this->klass[1]._1.name)(
        this,
        0,
        this->klass[1]._1.namespaze);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        3,
        1,
        this->klass[1]._1.implementedInterfaces);
      MasterMissionComponent__SetDailyMissionList(v2, v8);
      break;
    case 1:
      v10 = v2->fields.missionListViewManager;
      if ( !v10 )
        goto LABEL_88;
      if ( !LODWORD(v10->max_length) )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v10->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v11 = v2->fields.missionListViewManager;
      if ( !v11 )
        goto LABEL_88;
      if ( LODWORD(v11->max_length) <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v11->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v12 = v2->fields.missionListViewManager;
      if ( !v12 )
        goto LABEL_88;
      if ( LODWORD(v12->max_length) <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v12->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v13 = v2->fields.missionListViewManager;
      if ( !v13 )
        goto LABEL_88;
      if ( LODWORD(v13->max_length) <= 3 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v13->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, const char *))this->klass[1]._1.name)(
        this,
        1,
        this->klass[1]._1.namespaze);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
      MasterMissionComponent__SetWeeklyMissionList(v2, v14);
      break;
    case 2:
      v15 = v2->fields.missionListViewManager;
      if ( !v15 )
        goto LABEL_88;
      if ( !LODWORD(v15->max_length) )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v15->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v16 = v2->fields.missionListViewManager;
      if ( !v16 )
        goto LABEL_88;
      if ( LODWORD(v16->max_length) <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v16->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v17 = v2->fields.missionListViewManager;
      if ( !v17 )
        goto LABEL_88;
      if ( LODWORD(v17->max_length) <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v17->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v18 = v2->fields.missionListViewManager;
      if ( !v18 )
        goto LABEL_88;
      if ( LODWORD(v18->max_length) <= 3 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v18->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, const char *))this->klass[1]._1.name)(
        this,
        0,
        this->klass[1]._1.namespaze);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        3,
        1,
        this->klass[1]._1.implementedInterfaces);
      MasterMissionComponent__SetExtraMissionList(v2, v19);
      break;
    case 3:
      v20 = v2->fields.missionListViewManager;
      if ( !v20 )
        goto LABEL_88;
      if ( !LODWORD(v20->max_length) )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v20->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v21 = v2->fields.missionListViewManager;
      if ( !v21 )
        goto LABEL_88;
      if ( LODWORD(v21->max_length) <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v21->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v22 = v2->fields.missionListViewManager;
      if ( !v22 )
        goto LABEL_88;
      if ( LODWORD(v22->max_length) <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v22->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v23 = v2->fields.missionListViewManager;
      if ( !v23 )
        goto LABEL_88;
      if ( LODWORD(v23->max_length) <= 3 )
LABEL_89:
        sub_1C6BC68(this);
      this = (MasterMissionComponent_o *)v23->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, const char *))this->klass[1]._1.name)(
        this,
        0,
        this->klass[1]._1.namespaze);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        3,
        1,
        this->klass[1]._1.implementedInterfaces);
      MasterMissionComponent__SetLimitedMissionList(v2, v24);
      break;
    default:
      goto LABEL_81;
  }
  MasterMissionComponent__checkIsOpen(v2, v9);
  nowType = v2->fields.nowType;
LABEL_81:
  rewardInfoController = v2->fields.rewardInfoController;
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( (unsigned int)(nowType - 1) > 2 )
    method = (const MethodInfo *)(&dword_0 + 3);
  else
    method = (const MethodInfo *)dword_D216CC[nowType - 1];
  if ( !rewardInfoController )
LABEL_88:
    sub_1C6BC60(this, method);
  MissionRewardInfoController__SetRewardItemTitle(rewardInfoController, (int32_t)method, 0);
  MasterMissionComponent__RefreshMissionRewardItemInfo(v2, 0, v26);
  MasterMissionComponent__setMissionCompleteNum(v2, v27);
}


void MasterMissionComponent__SetWeeklyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Int32_array *VaildWeeklyMissionData; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v6; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v7; // x21
  struct MasterMissionListViewManager_array *v8; // x8
  MissionListViewManager_o *v9; // x19

  if ( (byte_4CB8BFA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    byte_4CB8BFA = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( LODWORD(missionListViewManager->max_length) <= 1 )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = (System_Int32_array *)MasterMissionComponent__getVaildWeeklyMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildWeeklyMissionData;
  VaildWeeklyMissionData = System_Collections_Generic_List_int___ToArray(
                             this->fields.currentEventIdList,
                             (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, VaildWeeklyMissionData, 1, this->fields.reDispAction, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_13;
  if ( LODWORD(v8->max_length) <= 1 )
LABEL_14:
    sub_1C6BC68(VaildWeeklyMissionData);
  v9 = (MissionListViewManager_o *)v8->m_Items[1];
  VaildWeeklyMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v9 )
LABEL_13:
    sub_1C6BC60(VaildWeeklyMissionData, v4);
  MissionListViewManager__SetMode_47295720(v9, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetupCompleteBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentCompleteMissionList; // x21
  int32_t size; // w2
  int v6; // w9
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x22
  MstMissionEntity_array *EnableMissions; // x23
  int max_length; // w8
  UserEventMissionMaster_o *v15; // x25
  unsigned int v16; // w28
  int32_t v17; // w20
  MstMissionEntity_o *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  DataManager_o *v21; // x27
  int32_t CompleteMissionClearCount; // w26
  int32_t m_CancellationTokenSource; // w25
  __int64 v24; // x8
  int32_t v25; // w23
  MasterMissionComponent_MasterMissionInfoItem_o *v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v32; // x8
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  Il2CppObject *cNoticeNumberPrefab; // x22
  Il2CppObject *v36; // x22
  Il2CppObject *Component_object; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UIWidget_o *v40; // x22
  struct NoticeNumberComponent_o *v41; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v43; // x1

  if ( (byte_4CB8BE6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    sub_1C6BA08(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB8BE6 = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = &this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    size = currentCompleteMissionList->fields._size;
    v6 = currentCompleteMissionList->fields._version + 1;
    currentCompleteMissionList->fields._size = 0;
    currentCompleteMissionList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentCompleteMissionList->fields._items, 0, size, 0);
  }
  else
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentCompleteMissionList, (int32_t)v7, v8, v9);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_48;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_48;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v17 = 0;
  }
  else
  {
    v15 = (UserEventMissionMaster_o *)Instance;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        goto LABEL_49;
      v18 = EnableMissions->m_Items[v16];
      if ( !v18 )
        goto LABEL_48;
      if ( !MasterData_object )
        goto LABEL_48;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    (EventMissionMaster_o *)MasterData_object,
                                    v18->fields.id,
                                    0);
      if ( !Instance )
        goto LABEL_48;
      v21 = Instance;
      if ( Instance->fields.m_CancellationTokenSource )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)Instance,
                                      (EventMissionEntity_array *)Instance,
                                      v19,
                                      v20);
        v17 += CompleteMissionClearCount;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v18, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_33;
    }
    if ( !v15 )
      goto LABEL_48;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v15, v18->fields.id, 0);
    m_CancellationTokenSource = (int32_t)v21->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
LABEL_49:
      sub_1C6BC68(Instance);
    v24 = *(_QWORD *)&v21->fields._DispLog;
    if ( !v24 )
      goto LABEL_48;
    v25 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_48;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v24 + 28), 0);
    Instance = (DataManager_o *)this->fields.completeMissionIcon;
    if ( !Instance )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    v26 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C6BC54(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    MasterMissionComponent_MasterMissionInfoItem___ctor(
      v26,
      v18,
      m_CancellationTokenSource,
      CompleteMissionClearCount,
      v25,
      0);
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_48;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    v30 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_48;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v26,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v32 + 32) = v26;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v26, v27, v28);
    }
  }
LABEL_33:
  mCompleteMissionNoticeNumber = (UnityEngine_Object_o *)this->fields.mCompleteMissionNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mCompleteMissionNoticeNumber = &this->fields.mCompleteMissionNoticeNumber;
  if ( UnityEngine_Object__op_Equality(mCompleteMissionNoticeNumber, 0, 0) )
  {
    cNoticeNumberPrefab = (Il2CppObject *)this->fields.cNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v36 = UnityEngine_Object__Instantiate_object_(
            cNoticeNumberPrefab,
            (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_36361932(
      (UnityEngine_GameObject_o *)v36,
      this->fields.completeMissionNoticeRoot,
      0);
    if ( v36 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v36,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
      sub_1C6B9AC(
        (CGThumbnailListItem_o *)&this->fields.mCompleteMissionNoticeNumber,
        (int32_t)Component_object,
        v38,
        v39);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0);
        v40 = (UIWidget_o *)Instance;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        if ( v40 )
        {
          UIWidget__set_depth(v40, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0);
          UIWidget__set_width(v40, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0);
          UIWidget__set_height(v40, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0);
          v41 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v41->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v41->fields.numberLabel,
                MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH + 1,
                0);
              UILabel__set_fontSize(
                numberLabel,
                MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE,
                0);
              UIWidget__set_width(
                (UIWidget_o *)numberLabel,
                MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_LABEL_WIDTH,
                0);
              goto LABEL_46;
            }
          }
        }
      }
    }
LABEL_48:
    sub_1C6BC60(Instance, v11);
  }
LABEL_46:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_48;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v17, 0);
  MasterMissionComponent__InitCompleteMissionLb(this, v43);
}


void MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  UISprite_o *shopBtnSp; // x20

  if ( (byte_4CB8BE5 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_17497/*"btn_event_3"*/);
    byte_4CB8BE5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v4);
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0);
  shopBtnSp = this->fields.shopBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_17497/*"btn_event_3"*/, 0);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0);
}


bool MasterMissionComponent__ShouldPlayedStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t UserStoneFragmentNum; // w0
  const MethodInfo *v6; // x2
  int32_t ExchangeStoneCount; // w19

  if ( (byte_4CB8C1D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB8C1D = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v4);
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, UserStoneFragmentNum, v6);
  return ExchangeStoneCount >= StoneShopMaster__GetPayMultiTimePrice(0);
}


void MasterMissionComponent__StopStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o **p_btnEffectPrefab; // x19
  UnityEngine_GameObject_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB8C1F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8C1F = 1;
  }
  btnEffectPrefab = (UnityEngine_Object_o *)this->fields.btnEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(btnEffectPrefab, 0, 0) )
  {
    p_btnEffectPrefab = &this->fields.btnEffectPrefab;
    if ( !*p_btnEffectPrefab )
      sub_1C6BC60(0, v4);
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0);
    v6 = *p_btnEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)v6, 0);
    *p_btnEffectPrefab = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_btnEffectPrefab, 0, v7, v8);
  }
}


void MasterMissionComponent__UnAcceptableRewardDlg(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C6BC68(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1C6BC60(this, method);
  MasterMissionListViewManager__unAcceptableDlg((MasterMissionListViewManager_o *)this, 0);
}


void MasterMissionComponent__Update(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !this->fields.isOpenOverDlg )
  {
    MasterMissionComponent__reDispMissionList(this, method);
    MasterMissionComponent__InitCompleteMissionLb(this, v3);
  }
}


void MasterMissionComponent__UpdateEventInfos(MasterMissionComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CB8C19 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB8C19 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( v4 )
  {
    if ( !mInstance )
      sub_1C6BC60(v4, v5);
    TerminalSceneComponent__UpdateTitleEventInfo((TerminalSceneComponent_o *)mInstance, 0);
  }
}


void MasterMissionComponent__UpdateStoneExchangeCount(
        MasterMissionComponent_o *this,
        int32_t fragmentCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *stoneConvertLimit; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  int32_t ExchangeStoneCount; // w0
  int32_t v12; // w23
  MasterMissionComponent_c *v13; // x0
  UILabel_o *stoneConvertCount; // x22
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v16; // w1
  UnityEngine_Object_o *btnEffectBasePrefab; // x22
  const MethodInfo *v18; // x1
  AssetLoader_LoadEndDataHandler_o *v19; // x19
  int32_t v20; // w20
  const MethodInfo *v21; // x1
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB8C1C & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent___c__DisplayClass207_0__UpdateStoneExchangeCount_b__0__);
    sub_1C6BA08(&MasterMissionComponent___c__DisplayClass207_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_5864/*"Effect/Common"*/);
    byte_4CB8C1C = 1;
  }
  v22 = 0;
  v5 = sub_1C6BC54(MasterMissionComponent___c__DisplayClass207_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass207_0___ctor((MasterMissionComponent___c__DisplayClass207_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_27;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v10);
  *(_DWORD *)(v5 + 24) = ExchangeStoneCount;
  v12 = ExchangeStoneCount;
  v13 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v13 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v13->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v12 > STONE_EXCHENGE_DISP_LIMIT )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
    }
    v22 = STONE_EXCHENGE_DISP_LIMIT;
    stoneConvertLimit = System_Int32__ToString((int32_t)&v22, 0);
    if ( stoneConvertCount )
    {
      UILabel__set_text(stoneConvertCount, stoneConvertLimit, 0);
      stoneConvertLimit = (System_String_o *)this->fields.stoneConvertLimit;
      if ( stoneConvertLimit )
      {
        stoneConvertLimit = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)stoneConvertLimit,
                                                 0);
        if ( stoneConvertLimit )
        {
          v16 = 1;
          goto LABEL_17;
        }
      }
    }
LABEL_27:
    sub_1C6BC60(stoneConvertLimit, v7);
  }
  stoneConvertLimit = System_Int32__ToString((int)v5 + 24, 0);
  if ( !stoneConvertCount )
    goto LABEL_27;
  UILabel__set_text(stoneConvertCount, stoneConvertLimit, 0);
  stoneConvertLimit = (System_String_o *)this->fields.stoneConvertLimit;
  if ( !stoneConvertLimit )
    goto LABEL_27;
  stoneConvertLimit = (System_String_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)stoneConvertLimit,
                                           0);
  if ( !stoneConvertLimit )
    goto LABEL_27;
  v16 = 0;
LABEL_17:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneConvertLimit, v16, 0);
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0, 0) )
  {
    v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_MasterMissionComponent___c__DisplayClass207_0__UpdateStoneExchangeCount_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5864/*"Effect/Common"*/, v19, 1, 0);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v18);
    if ( this->fields.nowType == 1 )
    {
      v20 = *(_DWORD *)(v5 + 24);
      if ( v20 >= StoneShopMaster__GetPayMultiTimePrice(0) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v21);
    }
  }
}


void MasterMissionComponent___AcceptReward_b__189_0(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MasterMissionComponent__SetBtnEnable(this, 1, v2);
}


void MasterMissionComponent___LoadNotificationEnd_b__140_0(MasterMissionComponent_o *this, const MethodInfo *method)
{
  this->fields.endFadein = 1;
}


void MasterMissionComponent___OnClickCompleteMissionBtn_b__149_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB8C27 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB8C27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0);
  MasterMissionComponent__OpenCompleteMission(this, v5, v6);
}


void MasterMissionComponent___OpenPresentBox_b__192_0(
        MasterMissionComponent_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ConnectMark_c *klass; // x8
  ConnectMark_c *v7; // x8
  __int64 *v8; // x8

  if ( (byte_4CB8C29 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_11662/*"SERVANT_OVER"*/);
    sub_1C6BA08(&StringLiteral_3434/*"CLICK_CANCEL"*/);
    byte_4CB8C29 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  CommonUI__CloseUsrPresentList(Instance, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
    goto LABEL_24;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.connectMark->klass;
  if ( !klass )
    goto LABEL_29;
  Instance = *(CommonUI_o **)&klass->_2.element_size;
  if ( !Instance )
    goto LABEL_29;
  if ( !ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)Instance, 0) )
    goto LABEL_24;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = Instance->fields.connectMark->klass;
  if ( !v7 || (Instance = *(CommonUI_o **)&v7->_2.element_size) == 0 )
LABEL_29:
    sub_1C6BC60(Instance, v5);
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0);
LABEL_24:
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_29;
  if ( this->fields.overflowType )
    v8 = &StringLiteral_11662/*"SERVANT_OVER"*/;
  else
    v8 = &StringLiteral_3434/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v8, 0);
}


void MasterMissionComponent___Open_b__139_0(
        MasterMissionComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4CB8C26 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB8C26 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !stoneInfoLabel )
    sub_1C6BC60(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0);
}


void MasterMissionComponent___PresentBoxOver_b__191_0(
        MasterMissionComponent_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  System_Action_o *v11; // x20

  if ( (byte_4CB8C28 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent___c__DisplayClass191_0__PresentBoxOver_b__1__);
    sub_1C6BA08(&MasterMissionComponent___c__DisplayClass191_0_TypeInfo);
    byte_4CB8C28 = 1;
  }
  v5 = sub_1C6BC54(MasterMissionComponent___c__DisplayClass191_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass191_0___ctor((MasterMissionComponent___c__DisplayClass191_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_MasterMissionComponent___c__DisplayClass191_0__PresentBoxOver_b__1__,
          0),
        !presentBoxOverDialog) )
  {
    sub_1C6BC60(v6, v7);
  }
  PresentBoxOverDialog__Close_32572392(presentBoxOverDialog, v11, 0);
}


void MasterMissionComponent___setRecieveModifyItem_b__195_0(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CB8C2A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5430/*"END_DISP"*/);
    byte_4CB8C2A = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v3);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v4);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C6BC60(0, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5430/*"END_DISP"*/, 0);
}


void MasterMissionComponent__checkIsOpen(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  MstMissionDisplayInfoMaster_o *v5; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct MstMissionMaster_o *mstMissionMst; // x8
  bool v10; // w22
  bool v11; // w23
  int32_t v12; // w1
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 *v16; // x24
  __int64 *v17; // x8
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_String_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4CB8BEE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_1C6BA08(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_8813/*"MST_REMISSON_MSG"*/);
    sub_1C6BA08(&StringLiteral_8811/*"MST_REDISP_MSG"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_8814/*"MST_REMISSON_TITLE_TXT"*/);
    sub_1C6BA08(&StringLiteral_8812/*"MST_REDISP_TITLE_TXT"*/);
    byte_4CB8BEE = 1;
  }
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !Instance )
    goto LABEL_28;
  v5 = (MstMissionDisplayInfoMaster_o *)Instance;
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)v5->fields.list;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  mstMissionMst = this->fields.mstMissionMst;
  if ( !mstMissionMst )
    goto LABEL_28;
  this->fields.currentType = mstMissionMst->fields.currentType;
  if ( Instance && Instance->fields.m_CancellationTokenSource && !MstMissionMaster__IsOpenNow(mstMissionMst, 0) )
  {
    Instance = (DataManager_o *)this->fields.mstMissionMst;
    if ( Instance )
    {
      v10 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0);
      goto LABEL_11;
    }
LABEL_28:
    sub_1C6BC60(Instance, v4);
  }
  v10 = 0;
LABEL_11:
  v11 = list
     && System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__) >= 1
     && !MstMissionDisplayInfoMaster__IsOpenNow(v5, 0)
     && !MstMissionDisplayInfoMaster__IsBefOpenTime(v5, 0);
  v12 = StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.titleTxt, v12, v7, v8);
  v13 = StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.msgTxt, v13, v14, v15);
  if ( v10 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_8813/*"MST_REMISSON_MSG"*/;
    v17 = &StringLiteral_8814/*"MST_REMISSON_TITLE_TXT"*/;
LABEL_23:
    v18 = LocalizationManager__Get((System_String_o *)*v17, 0);
    this->fields.titleTxt = v18;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.titleTxt, (int32_t)v18, v19, v20);
    v21 = LocalizationManager__Get((System_String_o *)*v16, 0);
    this->fields.msgTxt = v21;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.msgTxt, (int32_t)v21, v22, v23);
    goto LABEL_24;
  }
  if ( v11 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = &StringLiteral_8811/*"MST_REDISP_MSG"*/;
    v17 = &StringLiteral_8812/*"MST_REDISP_TITLE_TXT"*/;
    goto LABEL_23;
  }
LABEL_24:
  this->fields.isNotNext = v10 || v11;
}


void MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_1C6BC60(0, method);
  StandFigureBack__DestroyFigure(standFigureBack, 0);
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getVaildDailyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MasterMissionComponent_o *v3; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v5; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v8; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  struct MstMissionEntity_array *mstMissionList; // x24
  int max_length; // w8
  unsigned int v13; // w25
  Il2CppClass **v14; // x8
  Il2CppClass *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  intptr_t v24; // x8
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  MstMissionDisplayInfoEntity_o *v35; // x0
  __int64 v36; // x1
  MstMissionDisplayInfoEntity_o *v37; // x24
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v44; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  int v53; // w8
  int32_t v54; // w23
  int32_t v55; // w21

  v3 = this;
  if ( (byte_4CB8BF0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB8BF0 = 1;
  }
  currentEventIdList = v3->fields.currentEventIdList;
  v3->fields.currentIdx = 0;
  v3->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v5 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v5;
  currentMstMissionEntList = v3->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = currentMstMissionEntList->fields._size;
  v8 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0);
  v3->fields.currentMissionDispInfoEnt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, 0, size, v2);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v3->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C6BC68(this);
      v14 = &mstMissionList->obj.klass + (int)v13;
      v15 = v14[4];
      if ( !v15 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v14[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__GetDailyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v15->_1.name),
                                             0);
        if ( !this )
          break;
        method = (const MethodInfo *)this;
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v10 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v3->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v15->_1.name);
          m_CachedPtr = this->fields.m_CachedPtr;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          this = (MasterMissionComponent_o *)v3->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v21 = this->fields.m_CachedPtr;
          v22 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v21 )
            break;
          v23 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v15,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = v21 + 8 * v23;
            LODWORD(this->fields.m_CancellationTokenSource) = v23 + 1;
            *(_QWORD *)(v24 + 32) = v15;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v15, v16, v17);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1C6BC60(this, method);
  }
LABEL_29:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_38;
      }
      v30 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_38:
      v30 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8))
        & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_45;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_45:
      v34 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v35 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                             Enumerator,
                                             *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_1C6BC60(0, v36);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v35, 0);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v37->fields.guideImageId;
      if ( v37->fields.guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = isOpenNow->static_fields;
      }
      if ( !v3 )
        sub_1C6BC60(isOpenNow, v39);
      v3->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v37->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v44 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v44 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v44->static_fields->DEFAULT_LIMITCNT;
      }
      v3->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v37->fields.talkIds;
      v3->fields.voiceNameList = talkIds;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.voiceNameList, (int32_t)talkIds, v40, v41);
      id = v37->fields.id;
      v3->fields.currentMissionDispInfoEnt = v37;
      v3->fields.currentDispId = id;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, (int32_t)v37, v47, v48);
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_63;
    }
    v52 = (__int64)&v49->vtable[*v51];
  }
  else
  {
LABEL_63:
    v52 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  if ( v10 )
  {
    v53 = v10->fields._size;
    if ( v53 < 1 )
    {
      return 0;
    }
    else
    {
      v3->fields.totalMissionNum = v53;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v10,
                                           0,
                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      v54 = this->fields.m_CachedPtr;
      if ( v10->fields._size >= 1 )
      {
        v55 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v10,
                                               v55,
                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( v54 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v10,
                                                 v55,
                                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            v54 = this->fields.m_CachedPtr;
          }
        }
        while ( ++v55 < v10->fields._size );
      }
      v3->fields.currentMissionId = v54;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v10;
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getVaildLimitedMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MasterMissionComponent_o *v3; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v5; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v8; // w9
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *v11; // x21
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v14; // w27
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x24
  int32_t name_high; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  intptr_t v26; // x8
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  MstMissionDisplayInfoEntity_o *v37; // x0
  __int64 v38; // x1
  MstMissionDisplayInfoEntity_o *v39; // x25
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v46; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  int v55; // w8
  int v56; // w24
  int32_t v57; // w22

  v3 = this;
  if ( (byte_4CB8BF3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB8BF3 = 1;
  }
  currentEventIdList = v3->fields.currentEventIdList;
  v3->fields.currentIdx = 0;
  v3->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_84;
  v5 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v5;
  currentMstMissionEntList = v3->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_84;
  size = currentMstMissionEntList->fields._size;
  v8 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0);
  v3->fields.currentMissionDispInfoEnt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, 0, size, v2);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v3->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_84;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C6BC68(this);
      v15 = &mstMissionList->obj.klass + (int)v14;
      v16 = v15[4];
      if ( !v16 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v15[4], 0);
      if ( !MasterData_object )
        break;
      name_high = HIDWORD(v16->_1.name);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__GetLimitedMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             name_high,
                                             0);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !v11 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v3->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)HIDWORD(v16->_1.name);
            m_CachedPtr = this->fields.m_CachedPtr;
            v21 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v3->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v23 = this->fields.m_CachedPtr;
            v24 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v23 )
              break;
            v25 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v16,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = v23 + 8 * v25;
              LODWORD(this->fields.m_CancellationTokenSource) = v25 + 1;
              *(_QWORD *)(v26 + 32) = v16;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v16, v18, v19);
            }
          }
        }
      }
      else
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getClearMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             name_high,
                                             5,
                                             0);
        if ( !v10 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v10,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_32;
    }
LABEL_84:
    sub_1C6BC60(this, method);
  }
LABEL_32:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_84;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_84;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_41;
      }
      v32 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_41:
      v32 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8))
        & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v35 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_48;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_48:
      v36 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v37 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                             Enumerator,
                                             *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( !v37 )
      sub_1C6BC60(0, v38);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v37, 0);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v39->fields.guideImageId;
      if ( v39->fields.guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = isOpenNow->static_fields;
      }
      if ( !v3 )
        sub_1C6BC60(isOpenNow, v41);
      v3->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v39->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v46 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v46 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v46->static_fields->DEFAULT_LIMITCNT;
      }
      v3->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v39->fields.talkIds;
      v3->fields.voiceNameList = talkIds;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.voiceNameList, (int32_t)talkIds, v42, v43);
      id = v39->fields.id;
      v3->fields.currentMissionDispInfoEnt = v39;
      v3->fields.currentDispId = id;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, (int32_t)v39, v49, v50);
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_66;
    }
    v54 = (__int64)&v51->vtable[*v53];
  }
  else
  {
LABEL_66:
    v54 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                       Enumerator,
                                       *(_QWORD *)(v54 + 8));
  if ( v11 && (v55 = v11->fields._size, v55 >= 1) )
  {
    v3->fields.totalMissionNum = v55;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v11,
                                         0,
                                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_84;
    if ( v11->fields._size >= 1 )
    {
      v56 = this->fields.m_CachedPtr;
      v57 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v11,
                                             v57,
                                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_84;
        if ( v56 > SLODWORD(this->fields.m_CachedPtr) )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v11,
                                               v57,
                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_84;
          v56 = this->fields.m_CachedPtr;
        }
      }
      while ( ++v57 < v11->fields._size );
    }
    v3->fields.currentMissionId = 0;
    if ( !v10 )
      goto LABEL_84;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)v11,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v10 )
      goto LABEL_84;
    if ( v10->fields._size <= 0 )
      return 0;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v10;
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getVaildWeeklyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MasterMissionComponent_o *v3; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v5; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v8; // w9
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v10; // x20
  System_Collections_Generic_List_object__o *v11; // x21
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v14; // w28
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x24
  int32_t name_high; // w1
  MasterMissionComponent_o *v18; // x25
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  intptr_t v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  intptr_t v27; // x8
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  MstMissionDisplayInfoEntity_o *v38; // x0
  __int64 v39; // x1
  MstMissionDisplayInfoEntity_o *v40; // x25
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v47; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  int v56; // w8
  int32_t v57; // w24
  int32_t v58; // w22

  v3 = this;
  if ( (byte_4CB8BF1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB8BF1 = 1;
  }
  currentEventIdList = v3->fields.currentEventIdList;
  v3->fields.currentIdx = 0;
  v3->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_83;
  v5 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v5;
  currentMstMissionEntList = v3->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_83;
  size = currentMstMissionEntList->fields._size;
  v8 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0);
  v3->fields.currentMissionDispInfoEnt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, 0, size, v2);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v3->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_83;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C6BC68(this);
      v15 = &mstMissionList->obj.klass + (int)v14;
      v16 = v15[4];
      if ( !v16 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v15[4], 0);
      if ( !MasterData_object )
        break;
      name_high = HIDWORD(v16->_1.name);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__GetWeeklyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             name_high,
                                             0);
        if ( !this )
          break;
        v18 = this;
        if ( this->fields.m_CancellationTokenSource )
        {
          this = (MasterMissionComponent_o *)v3->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v16->_1.name);
          m_CachedPtr = this->fields.m_CachedPtr;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          if ( !v11 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v11,
            (System_Collections_Generic_IEnumerable_T__o *)v18,
            (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v3->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v24 = this->fields.m_CachedPtr;
          v25 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v24 )
            break;
          v26 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v16,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = v24 + 8 * v26;
            LODWORD(this->fields.m_CancellationTokenSource) = v26 + 1;
            *(_QWORD *)(v27 + 32) = v16;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v16, v22, v23);
          }
        }
      }
      else
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getClearMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             name_high,
                                             2,
                                             0);
        if ( !v10 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v10,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_31;
    }
LABEL_83:
    sub_1C6BC60(this, method);
  }
LABEL_31:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_83;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        p_offset += 4;
        if ( !v31 )
          goto LABEL_40;
      }
      v33 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_40:
      v33 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
            Enumerator,
            *(_QWORD *)(v33 + 8))
        & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v36 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_47;
      }
      v37 = (__int64)&v34->vtable[*v36];
    }
    else
    {
LABEL_47:
      v37 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v38 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                             Enumerator,
                                             *(_QWORD *)(v37 + 8));
    v40 = v38;
    if ( !v38 )
      sub_1C6BC60(0, v39);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v38, 0);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v40->fields.guideImageId;
      if ( v40->fields.guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = isOpenNow->static_fields;
      }
      if ( !v3 )
        sub_1C6BC60(isOpenNow, v42);
      v3->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v40->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v47 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v47 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v47->static_fields->DEFAULT_LIMITCNT;
      }
      v3->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v40->fields.talkIds;
      v3->fields.voiceNameList = talkIds;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.voiceNameList, (int32_t)talkIds, v43, v44);
      id = v40->fields.id;
      v3->fields.currentMissionDispInfoEnt = v40;
      v3->fields.currentDispId = id;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, (int32_t)v40, v50, v51);
    }
  }
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_65;
    }
    v55 = (__int64)&v52->vtable[*v54];
  }
  else
  {
LABEL_65:
    v55 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                                       Enumerator,
                                       *(_QWORD *)(v55 + 8));
  if ( v11 && (v56 = v11->fields._size, v56 >= 1) )
  {
    v3->fields.totalMissionNum = v56;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v11,
                                         0,
                                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_83;
    v57 = this->fields.m_CachedPtr;
    if ( v11->fields._size >= 1 )
    {
      v58 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v11,
                                             v58,
                                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_83;
        if ( v57 > SLODWORD(this->fields.m_CachedPtr) )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v11,
                                               v58,
                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_83;
          v57 = this->fields.m_CachedPtr;
        }
      }
      while ( ++v58 < v11->fields._size );
    }
    v3->fields.currentMissionId = v57;
    if ( !v10 )
      goto LABEL_83;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)v11,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v10 )
      goto LABEL_83;
    if ( v10->fields._size <= 0 )
      return 0;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v10;
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getValidExtraMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MasterMissionComponent_o *v3; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v5; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v8; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  struct MstMissionEntity_array *mstMissionList; // x24
  int max_length; // w8
  unsigned int v13; // w25
  Il2CppClass **v14; // x8
  Il2CppClass *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  intptr_t v24; // x8
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  MstMissionDisplayInfoEntity_o *v35; // x0
  __int64 v36; // x1
  MstMissionDisplayInfoEntity_o *v37; // x24
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v44; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  int v53; // w8
  int v54; // w23
  int32_t v55; // w21

  v3 = this;
  if ( (byte_4CB8BF2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB8BF2 = 1;
  }
  currentEventIdList = v3->fields.currentEventIdList;
  v3->fields.currentIdx = 0;
  v3->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v5 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v5;
  currentMstMissionEntList = v3->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = currentMstMissionEntList->fields._size;
  v8 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0);
  v3->fields.currentMissionDispInfoEnt = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, 0, size, v2);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v3->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C6BC68(this);
      v14 = &mstMissionList->obj.klass + (int)v13;
      v15 = v14[4];
      if ( !v15 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v14[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__GetExtraMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v15->_1.name),
                                             0);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !v10 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v10,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v3->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)HIDWORD(v15->_1.name);
            m_CachedPtr = this->fields.m_CachedPtr;
            v19 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v3->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v21 = this->fields.m_CachedPtr;
            v22 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v21 )
              break;
            v23 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v15,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = v21 + 8 * v23;
              LODWORD(this->fields.m_CancellationTokenSource) = v23 + 1;
              *(_QWORD *)(v24 + 32) = v15;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v15, v16, v17);
            }
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1C6BC60(this, method);
  }
LABEL_29:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_38;
      }
      v30 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_38:
      v30 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8))
        & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_45;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_45:
      v34 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v35 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                             Enumerator,
                                             *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_1C6BC60(0, v36);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v35, 0);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v37->fields.guideImageId;
      if ( v37->fields.guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = isOpenNow->static_fields;
      }
      if ( !v3 )
        sub_1C6BC60(isOpenNow, v39);
      v3->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v37->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v44 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v44 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v44->static_fields->DEFAULT_LIMITCNT;
      }
      v3->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v37->fields.talkIds;
      v3->fields.voiceNameList = talkIds;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.voiceNameList, (int32_t)talkIds, v40, v41);
      id = v37->fields.id;
      v3->fields.currentMissionDispInfoEnt = v37;
      v3->fields.currentDispId = id;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, (int32_t)v37, v47, v48);
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_63;
    }
    v52 = (__int64)&v49->vtable[*v51];
  }
  else
  {
LABEL_63:
    v52 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  if ( v10 )
  {
    v53 = v10->fields._size;
    if ( v53 < 1 )
    {
      return 0;
    }
    else
    {
      v3->fields.totalMissionNum = v53;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v10,
                                           0,
                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      if ( v10->fields._size >= 1 )
      {
        v54 = this->fields.m_CachedPtr;
        v55 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v10,
                                               v55,
                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( v54 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v10,
                                                 v55,
                                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            v54 = this->fields.m_CachedPtr;
          }
        }
        while ( ++v55 < v10->fields._size );
      }
      v3->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v10;
}


int32_t MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4CB8BE1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB8BE1 = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1C6BC60(0, v5);
    result = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0);
    this->fields.stonePrice = result;
  }
  return result;
}


MasterMissionListViewManager_o *MasterMissionComponent__get_listViewManager(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1C6BC60(this, method);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C6BC68(this);
  return missionListViewManager->m_Items[nowType];
}


System_String_o *MasterMissionComponent__get_settedAssetname(MasterMissionComponent_o *this, const MethodInfo *method)
{
  return this->fields.lastAssetName;
}


void MasterMissionComponent__missionRewardCallback(
        MasterMissionComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MasterMissionComponent_o *v4; // x19
  __int64 *v5; // x8
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  MasterMissionComponent_o *v9; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Int32_array *m_CachedPtr; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct PlayMakerFSM_o *v14; // x10

  v4 = this;
  if ( (byte_4CB8C0D & 1) == 0 )
  {
    sub_1C6BA08(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11082/*"REQUEST_OK"*/);
    sub_1C6BA08(&StringLiteral_11080/*"REQUEST_NG"*/);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    this = (MasterMissionComponent_o *)sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB8C0D = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( !System_String__Equals_64002112(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
  {
    v6 = (Il2CppObject *)System_String__Concat_64005056(
                           (System_String_o *)StringLiteral_15801/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16051/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                         v6,
                                         (const MethodInfo_31AB018 *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( this )
    {
      v9 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_21;
      myFsm = this->fields.myFsm;
      if ( !myFsm )
        goto LABEL_20;
      v4->fields.isOverPresentBox = (bool)myFsm->fields.m_CancellationTokenSource;
      v4->fields.overflowType = HIDWORD(myFsm->fields.m_CancellationTokenSource);
      m_CachedPtr = (struct System_Int32_array *)myFsm->fields.m_CachedPtr;
      v4->fields.receiveMissionIds = m_CachedPtr;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.receiveMissionIds, (int32_t)m_CachedPtr, v7, v8);
      missionListViewManager = v4->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_20;
      nowType = v4->fields.nowType;
      if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length)
        || !LODWORD(v9->fields.m_CancellationTokenSource) )
      {
LABEL_21:
        sub_1C6BC68(this);
      }
      v14 = v9->fields.myFsm;
      if ( v14 )
      {
        this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
        if ( this )
        {
          MasterMissionListViewManager__SetResultData(
            (MasterMissionListViewManager_o *)this,
            (GetSvts_array *)v14->fields.fsm,
            (GetCommandCodes_array *)v14->fields.fsmTemplate,
            0);
          this = (MasterMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v5 = &StringLiteral_11082/*"REQUEST_OK"*/;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_20:
    sub_1C6BC60(this, result);
  }
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_20;
  v5 = &StringLiteral_11080/*"REQUEST_NG"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void MasterMissionComponent__playEventMissionSvtVoice(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        const MethodInfo *method)
{
  bool _40657328; // w0
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CB8C01 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent_setNormalFace__);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB8C01 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40657328 = TutorialFlag__Get_40657328(126, 0);
  if ( voiceIDs && !_40657328 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0);
    if ( !svtVoiceCtr )
      sub_1C6BC60(v9, v10);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v8, 0);
  }
}


void MasterMissionComponent__playEventMissionSvtVoice_46185432(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool _40657328; // w0
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v17; // x20

  if ( (byte_4CB8C02 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent___c__DisplayClass174_0__playEventMissionSvtVoice_b__0__);
    sub_1C6BA08(&MasterMissionComponent___c__DisplayClass174_0_TypeInfo);
    byte_4CB8C02 = 1;
  }
  v7 = sub_1C6BC54(MasterMissionComponent___c__DisplayClass174_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass174_0___ctor((MasterMissionComponent___c__DisplayClass174_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = action;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)action, v12, v13);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40657328 = TutorialFlag__Get_40657328(126, 0);
  if ( voiceIDs && !_40657328 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v17 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v7,
      Method_MasterMissionComponent___c__DisplayClass174_0__playEventMissionSvtVoice_b__0__,
      0);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v17, 0);
      return;
    }
LABEL_11:
    sub_1C6BC60(v8, v9);
  }
}


void MasterMissionComponent__playSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 voicePlayEffect; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x8
  UnityEngine_Transform_o *v7; // x20
  EventSvtControl_o *svtVoiceCtr; // x20
  System_Action_o *v9; // x21

  if ( (byte_4CB8C00 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C6BA08(&Method_MasterMissionComponent_setNormalFace__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8C00 = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  voicePlayEffect = UnityEngine_Object__op_Inequality(playBtnImg, 0, 0);
  if ( (voicePlayEffect & 1) != 0 )
  {
    voiceListRand = this->fields.voiceListRand;
    if ( !voiceListRand )
      goto LABEL_20;
    if ( voiceListRand->fields._size >= 1 )
    {
      voicePlayEffect = (__int64)this->fields.voicePlayEffect;
      if ( !voicePlayEffect )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)voicePlayEffect, 1, 0);
      voicePlayEffect = (__int64)this->fields.voicePlayEffect;
      if ( !voicePlayEffect )
        goto LABEL_20;
      voicePlayEffect = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)voicePlayEffect, 0);
      v7 = (UnityEngine_Transform_o *)voicePlayEffect;
      if ( !byte_4CAFC0E )
      {
        voicePlayEffect = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC0E = 1;
      }
      if ( !v7
        || (UnityEngine_Transform__set_localScale(v7, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0 )
      {
LABEL_20:
        sub_1C6BC60(voicePlayEffect, v5);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0);
  if ( !svtVoiceCtr )
    goto LABEL_20;
  EventSvtControl__playVoice(svtVoiceCtr, v9, 0);
}


void MasterMissionComponent__reDispMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  struct MstMissionDisplayInfoEntity_o *currentMissionDispInfoEnt; // x8
  _BOOL4 isNotNext; // w9
  int64_t v7; // x20
  System_Collections_Generic_List_object__o *currentMstMissionEntList; // x0
  int size; // w8
  int v10; // w22
  int32_t v11; // w21
  struct System_Collections_Generic_List_MstMissionEntity__o *v12; // x8
  void *monitor; // x8
  int v14; // w21
  struct System_String_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct MstMissionDisplayInfoEntity_o *v21; // x8
  int v22; // w8
  __int64 *v23; // x8
  struct System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 *v27; // x8
  struct System_String_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  TerminalSceneComponent_c *v31; // x0
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v34; // x21
  MasterMissionComponent___c_c *v35; // x8
  System_Action_o *_9__153_0; // x22
  Il2CppObject *v37; // x23
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4CB8BEF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent___c__reDispMissionList_b__153_0__);
    sub_1C6BA08(&MasterMissionComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_8813/*"MST_REMISSON_MSG"*/);
    sub_1C6BA08(&StringLiteral_8811/*"MST_REDISP_MSG"*/);
    sub_1C6BA08(&StringLiteral_8814/*"MST_REMISSON_TITLE_TXT"*/);
    sub_1C6BA08(&StringLiteral_8812/*"MST_REDISP_TITLE_TXT"*/);
    byte_4CB8BEF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( this->fields.isNotNext )
  {
    LODWORD(currentMissionDispInfoEnt) = 0;
    isNotNext = 1;
  }
  else
  {
    currentMissionDispInfoEnt = this->fields.currentMissionDispInfoEnt;
    if ( currentMissionDispInfoEnt )
    {
      v7 = Time;
      currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
      if ( !currentMstMissionEntList )
        goto LABEL_59;
      size = currentMstMissionEntList->fields._size;
      v10 = size - 1;
      if ( size < 1 )
      {
LABEL_25:
        v14 = 0;
      }
      else
      {
        v11 = 0;
        while ( 1 )
        {
          currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                    currentMstMissionEntList,
                                                                                    v11,
                                                                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
          if ( currentMstMissionEntList )
          {
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
            if ( !currentMstMissionEntList )
              goto LABEL_59;
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                      currentMstMissionEntList,
                                                                                      v11,
                                                                                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
            if ( !currentMstMissionEntList )
              goto LABEL_59;
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)MstMissionEntity__getMissionType(
                                                                                      (MstMissionEntity_o *)currentMstMissionEntList,
                                                                                      0);
            v12 = this->fields.currentMstMissionEntList;
            if ( (_DWORD)currentMstMissionEntList == 5 )
            {
              if ( !v12 )
                goto LABEL_59;
              currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                        (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList,
                                                                                        v11,
                                                                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
              if ( !currentMstMissionEntList )
                goto LABEL_59;
              monitor = currentMstMissionEntList[1].monitor;
            }
            else
            {
              if ( !v12 )
                goto LABEL_59;
              currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                        (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList,
                                                                                        v11,
                                                                                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
              if ( !currentMstMissionEntList )
                goto LABEL_59;
              monitor = currentMstMissionEntList[1].klass;
            }
            if ( v7 >= (__int64)monitor )
              break;
          }
          if ( v10 == v11 )
            goto LABEL_25;
          currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
          ++v11;
          if ( !currentMstMissionEntList )
            goto LABEL_59;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8814/*"MST_REMISSON_TITLE_TXT"*/, 0);
        this->fields.titleTxt = v15;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.titleTxt, (int32_t)v15, v16, v17);
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8813/*"MST_REMISSON_MSG"*/, 0);
        this->fields.msgTxt = v18;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.msgTxt, (int32_t)v18, v19, v20);
        v14 = 1;
      }
      v21 = this->fields.currentMissionDispInfoEnt;
      if ( !v21 )
        goto LABEL_59;
      if ( v7 >= v21->fields.endedAt )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = &StringLiteral_8814/*"MST_REMISSON_TITLE_TXT"*/;
        if ( !v14 )
          v23 = &StringLiteral_8812/*"MST_REDISP_TITLE_TXT"*/;
        v24 = LocalizationManager__Get((System_String_o *)*v23, 0);
        this->fields.titleTxt = v24;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.titleTxt, (int32_t)v24, v25, v26);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = &StringLiteral_8813/*"MST_REMISSON_MSG"*/;
        if ( !v14 )
          v27 = &StringLiteral_8811/*"MST_REDISP_MSG"*/;
        v28 = LocalizationManager__Get((System_String_o *)*v27, 0);
        this->fields.msgTxt = v28;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.msgTxt, (int32_t)v28, v29, v30);
        v22 = 1;
      }
      else
      {
        v22 = 0;
      }
      isNotNext = this->fields.isNotNext;
      LODWORD(currentMissionDispInfoEnt) = v22 | v14;
    }
    else
    {
      isNotNext = 0;
    }
  }
  if ( (unsigned int)currentMissionDispInfoEnt | isNotNext
    && !this->fields.isOpenOverDlg
    && this->fields.currentType != 2 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0);
    this->fields.isOpenOverDlg = 1;
    v31 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v31 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v31->static_fields->MASTER_MISSION_RESET_KEY, 0);
    currentMstMissionEntList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    titleTxt = this->fields.titleTxt;
    msgTxt = this->fields.msgTxt;
    v34 = (CommonUI_o *)currentMstMissionEntList;
    v35 = MasterMissionComponent___c_TypeInfo;
    if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v35 = MasterMissionComponent___c_TypeInfo;
    }
    _9__153_0 = v35->static_fields->__9__153_0;
    if ( !_9__153_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = MasterMissionComponent___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v35->static_fields->__9;
      _9__153_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(_9__153_0, v37, Method_MasterMissionComponent___c__reDispMissionList_b__153_0__, 0);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__153_0 = _9__153_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__153_0, (int32_t)_9__153_0, v39, v40);
    }
    if ( v34 )
    {
      CommonUI__OpenNotificationDialog(v34, titleTxt, msgTxt, _9__153_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_59:
    sub_1C6BC60(currentMstMissionEntList, v4);
  }
}


void MasterMissionComponent__setCurrentSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  void *currentVoiceDataList; // x0
  EventSvtControl_o *svtVoiceCtr; // x20
  void *v5; // x8
  System_Collections_Generic_List_ServantVoiceData____o *v6; // x21
  void *v7; // x8
  System_Collections_Generic_List_ServantVoiceData____o *v8; // x22
  System_String_o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct StandFigureBack_o *standFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4CB8BFF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
    byte_4CB8BFF = 1;
  }
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( !currentVoiceDataList )
    goto LABEL_15;
  if ( *((_DWORD *)currentVoiceDataList + 6) )
  {
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentVoiceDataList = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)currentVoiceDataList,
                             this->fields.currentIdx,
                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
    if ( currentVoiceDataList )
    {
      v5 = currentVoiceDataList;
      currentVoiceDataList = this->fields.currentVoiceDataList;
      if ( currentVoiceDataList )
      {
        v6 = (System_Collections_Generic_List_ServantVoiceData____o *)*((_QWORD *)v5 + 3);
        currentVoiceDataList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)currentVoiceDataList,
                                 this->fields.currentIdx,
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
        if ( currentVoiceDataList )
        {
          v7 = currentVoiceDataList;
          currentVoiceDataList = this->fields.currentVoiceDataList;
          if ( currentVoiceDataList )
          {
            v8 = (System_Collections_Generic_List_ServantVoiceData____o *)*((_QWORD *)v7 + 4);
            currentVoiceDataList = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)currentVoiceDataList,
                                     this->fields.currentIdx,
                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
            if ( currentVoiceDataList )
            {
              v9 = (System_String_o *)*((_QWORD *)currentVoiceDataList + 2);
              currentVoiceDataList = (void *)ServantVoiceMaster__getSvtVoiceId(this->fields.currentEventSvtId, 0);
              if ( svtVoiceCtr )
              {
                EventSvtControl__setSvtVoice(svtVoiceCtr, v6, v8, 0, v9, (int32_t)currentVoiceDataList, 0);
                standFigureBack = this->fields.standFigureBack;
                if ( standFigureBack )
                {
                  currentVoiceDataList = this->fields.svtVoiceCtr;
                  if ( currentVoiceDataList )
                  {
                    standFigureCollectList = standFigureBack->fields.standFigureCollectList;
                    *((_QWORD *)currentVoiceDataList + 11) = standFigureCollectList;
                    sub_1C6B9AC(
                      (CGThumbnailListItem_o *)((char *)currentVoiceDataList + 88),
                      (int32_t)standFigureCollectList,
                      v10,
                      v11);
                    MasterMissionComponent__playSvtVoice(this, v14);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_15:
    sub_1C6BC60(currentVoiceDataList, method);
  }
}


void MasterMissionComponent__setGuideSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v6; // x22
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v16; // x22
  struct System_String_o *VoiceAssetName; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  struct System_String_array *voiceNameList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v23; // x24
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  MasterMissionComponent_VoiceData_o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w8
  Il2CppObject *current; // x21
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  SoundManager_o *v47; // x20
  System_String_o *klass; // x21
  System_Action_o *v49; // x22
  __int64 v50; // x0
  __int64 v51; // x1
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+0h] [xbp-70h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CB8BF5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
    sub_1C6BA08(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&MasterMissionComponent_VoiceData_TypeInfo);
    byte_4CB8BF5 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  memset(&v52, 0, sizeof(v52));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v6 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentVoiceDataList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.voiceListRand, (int32_t)v10, v12, v13);
  currentEventSvtId = this->fields.currentEventSvtId;
  this->fields.downLoadCnt = 0;
  Instance = (void *)ServantVoiceMaster__getSvtVoiceId(currentEventSvtId, 0);
  if ( !MasterData_object )
    goto LABEL_37;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)MasterData_object,
    &voicePrefix[1],
    voicePrefix,
    (int32_t)Instance,
    this->fields.currentEventSvtLimitCnt,
    0);
  if ( !v6 )
    goto LABEL_37;
  Entity = ServantVoiceMaster__GetEntity((ServantVoiceMaster_o *)v6, voicePrefix[1], voicePrefix[0], 8, 0);
  if ( !Entity )
    goto LABEL_25;
  v16 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0);
  this->fields.lastAssetName = VoiceAssetName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.lastAssetName, (int32_t)VoiceAssetName, v18, v19);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    max_length = voiceNameList->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v23 = 0;
        do
        {
          if ( v23 >= (unsigned int)max_length )
            sub_1C6BC68(MstMissionVoiceListByName);
          MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                        v16,
                                        voiceNameList->m_Items[v23],
                                        0);
          if ( MstMissionVoiceListByName )
          {
            p_obj = &MstMissionVoiceListByName->obj;
            Instance = *p_voiceListRand;
            if ( !*p_voiceListRand )
              goto LABEL_37;
            v26 = *((_QWORD *)Instance + 2);
            v27 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++*((_DWORD *)Instance + 7);
            if ( !v26 )
              goto LABEL_37;
            v28 = *((int *)Instance + 6);
            if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                p_obj,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = v26 + 8 * v28;
              *((_DWORD *)Instance + 6) = v28 + 1;
              *(_QWORD *)(v29 + 32) = p_obj;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 32), (int32_t)p_obj, v24, v25);
            }
          }
          LODWORD(max_length) = voiceNameList->max_length;
        }
        while ( (__int64)++v23 < (int)max_length );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v16, 0);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.voiceListMission, (int32_t)MasterMissionActionVoiceList, v31, v32);
  currentVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v36 = (MasterMissionComponent_VoiceData_o *)sub_1C6BC54(MasterMissionComponent_VoiceData_TypeInfo);
  MasterMissionComponent_VoiceData___ctor(v36, VoiceAssetName, voiceListRand, voiceListMission, 0);
  if ( !currentVoiceDataList
    || (items = currentVoiceDataList->fields._items,
        v40 = Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__,
        ++currentVoiceDataList->fields._version,
        !items) )
  {
LABEL_37:
    sub_1C6BC60(Instance, p_obj);
  }
  size = currentVoiceDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      currentVoiceDataList,
      (Il2CppObject *)v36,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    currentVoiceDataList->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v36;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v36, v37, v38);
  }
LABEL_25:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_37;
  v43 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v43;
  if ( v43 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, (const MethodInfo *)p_obj);
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v52,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v52.fields._current;
      v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_1C6BC60(v45, v46);
      v47 = (SoundManager_o *)v45;
      klass = (System_String_o *)current[1].klass;
      v49 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v49, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0);
      if ( !v47 )
        sub_1C6BC60(v50, v51);
      SoundManager__LoadAudioAssetStorage(v47, klass, v49, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
  }
}


void MasterMissionComponent__setMissionCompleteNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w22
  int32_t compMissionNum; // w23
  UserEventMissionMaster_o *v8; // x20
  int32_t v9; // w21
  System_String_o *v10; // x20
  UILabel_o *eventMissionTxt2; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x0
  UILabel_o *v14; // x19
  UILabel_o *eventMissionTxt; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB8BF4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_8553/*"MASTER_MISSION_COMPLETE_NUM"*/);
    byte_4CB8BF4 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_24;
  size = currentEventIdList->fields._size;
  if ( size >= 1 )
  {
    compMissionNum = this->fields.compMissionNum;
    v8 = (UserEventMissionMaster_o *)Instance;
    v9 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    currentEventIdList,
                                    v9,
                                    (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v8 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v8, (int32_t)Instance, 0);
      ++v9;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v9 )
        goto LABEL_11;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_24:
    sub_1C6BC60(Instance, v4);
  }
LABEL_11:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8553/*"MASTER_MISSION_COMPLETE_NUM"*/, 0);
  if ( !this->fields.eventMissionInfo )
    goto LABEL_24;
  v10 = (System_String_o *)Instance;
  if ( this->fields.nowType )
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 0, 0);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    eventMissionTxt2 = this->fields.eventMissionTxt2;
    v19 = this->fields.compMissionNum;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    totalMissionNum = this->fields.totalMissionNum;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_64008100(v10, v12, v13, 0);
    if ( !eventMissionTxt2 )
      goto LABEL_24;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0);
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    v14 = this->fields.eventMissionTxt2;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    if ( !v14 )
      goto LABEL_24;
    UILabel__SetCondensedScale_49828120(
      v14,
      MasterMissionComponent_TypeInfo->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH,
      0.0,
      0);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 1, 0);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    eventMissionTxt = this->fields.eventMissionTxt;
    v19 = this->fields.compMissionNum;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    totalMissionNum = this->fields.totalMissionNum;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_64008100(v10, v16, v17, 0);
    if ( !eventMissionTxt )
      goto LABEL_24;
    UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0);
  }
}


void MasterMissionComponent__setMySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_c *v3; // x0
  StandFigureBack_o *standFigureBack; // x19
  int32_t currentEventSvtId; // w20

  if ( (byte_4CB8BFE & 1) == 0 )
  {
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    byte_4CB8BFE = 1;
  }
  v3 = MasterMissionComponent_TypeInfo;
  standFigureBack = this->fields.standFigureBack;
  currentEventSvtId = this->fields.currentEventSvtId;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !standFigureBack )
    sub_1C6BC60(v3, method);
  StandFigureBack__CreatedStandFigure(
    standFigureBack,
    currentEventSvtId,
    MasterMissionComponent_TypeInfo->static_fields->DEFAULT_LIMITCNT,
    5,
    0,
    0,
    0,
    0);
}


void MasterMissionComponent__setNormalFace(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0

  if ( (byte_4CB8C03 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8C03 = 1;
  }
  this->fields.isVoicePlaying = 0;
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0, 0) )
  {
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( !voicePlayEffect )
      goto LABEL_10;
    UnityEngine_GameObject__SetActive(voicePlayEffect, 0, 0);
  }
  voicePlayEffect = (UnityEngine_GameObject_o *)this->fields.standFigureBack;
  if ( !voicePlayEffect )
LABEL_10:
    sub_1C6BC60(voicePlayEffect, v4);
  StandFigureBack__SetFaceType((StandFigureBack_o *)voicePlayEffect, 0, 0.0, 0, 0);
}


void MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct MasterMissionListViewManager_array *v5; // x8
  __int64 v6; // x9
  MissionListViewManager_o *v7; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x1

  v2 = this;
  if ( (byte_4CB8C14 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C6BA08(&Method_MasterMissionComponent__setRecieveModifyItem_b__195_0__);
    byte_4CB8C14 = 1;
  }
  missionListViewManager = v2->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_10;
  nowType = v2->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    goto LABEL_11;
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this
    || (MasterMissionListViewManager__ModifyItem(
          (MasterMissionListViewManager_o *)this,
          v2->fields.receiveMissionIds,
          0),
        (v5 = v2->fields.missionListViewManager) == 0) )
  {
LABEL_10:
    sub_1C6BC60(this, method);
  }
  v6 = v2->fields.nowType;
  if ( (unsigned int)v6 >= LODWORD(v5->max_length) )
LABEL_11:
    sub_1C6BC68(this);
  v7 = (MissionListViewManager_o *)v5->m_Items[v6];
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)v2, Method_MasterMissionComponent__setRecieveModifyItem_b__195_0__, 0);
  if ( !v7 )
    goto LABEL_10;
  MissionListViewManager__SetMode(v7, 3, v8, 0);
  MasterMissionComponent__RefreshInfo(v2, v9);
}


void MasterMissionComponent__stopSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    sub_1C6BC60(0, method);
  EventSvtControl__stopVoice(svtVoiceCtr, 0);
  MasterMissionComponent__setNormalFace(this, v4);
}


void MasterMissionComponent_ClickDelegate___ctor(
        MasterMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA5188;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA5140;
}


System_IAsyncResult_o *MasterMissionComponent_ClickDelegate__BeginInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CB9490 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB9490 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void MasterMissionComponent_ClickDelegate__Invoke(
        MasterMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void MasterMissionComponent_MasterMissionInfoItem___ctor(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        MstMissionEntity_o *mstMission,
        int32_t missionCnt,
        int32_t clearCnt,
        int32_t achiveCnt,
        const MethodInfo *method)
{
  MasterMissionComponent_MasterMissionInfoItem_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._MstMissionEntity_k__BackingField = mstMission;
  v10 = (MasterMissionComponent_MasterMissionInfoItem_o *)((char *)v10 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)v10, (int32_t)mstMission, v11, v12);
  LODWORD(v10->monitor) = missionCnt;
  HIDWORD(v10->monitor) = clearCnt;
  LODWORD(v10->fields._MstMissionEntity_k__BackingField) = achiveCnt;
}


int32_t MasterMissionComponent_MasterMissionInfoItem__get_MissionAchiveCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        const MethodInfo *method)
{
  return this->fields._MissionAchiveCount_k__BackingField;
}


int32_t MasterMissionComponent_MasterMissionInfoItem__get_MissionClearCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        const MethodInfo *method)
{
  return this->fields._MissionClearCount_k__BackingField;
}


int32_t MasterMissionComponent_MasterMissionInfoItem__get_MissionCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        const MethodInfo *method)
{
  return this->fields._MissionCount_k__BackingField;
}


MstMissionEntity_o *MasterMissionComponent_MasterMissionInfoItem__get_MstMissionEntity(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        const MethodInfo *method)
{
  return this->fields._MstMissionEntity_k__BackingField;
}


void MasterMissionComponent_MasterMissionInfoItem__set_MissionAchiveCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MissionAchiveCount_k__BackingField = value;
}


void MasterMissionComponent_MasterMissionInfoItem__set_MissionClearCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MissionClearCount_k__BackingField = value;
}


void MasterMissionComponent_MasterMissionInfoItem__set_MissionCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MissionCount_k__BackingField = value;
}


void MasterMissionComponent_MasterMissionInfoItem__set_MstMissionEntity(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        MstMissionEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MstMissionEntity_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void MasterMissionComponent_VoiceData___ctor(
        MasterMissionComponent_VoiceData_o *this,
        System_String_o *voiceDataName,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListRand,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListMission,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.DataName = voiceDataName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)voiceDataName, v9, v10);
  this->fields.DataListRand = voiceDataListRand;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.DataListRand, (int32_t)voiceDataListRand, v11, v12);
  this->fields.DataListMission = voiceDataListMission;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.DataListMission, (int32_t)voiceDataListMission, v13, v14);
}


void MasterMissionComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB9491 & 1) == 0 )
  {
    sub_1C6BA08(&MasterMissionComponent___c_TypeInfo);
    byte_4CB9491 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(MasterMissionComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterMissionComponent___c_TypeInfo->static_fields->__9 = (struct MasterMissionComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)MasterMissionComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MasterMissionComponent___c___ctor(MasterMissionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionComponent___c___ExitCompleteMission_b__150_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19
  TerminalSceneComponent_c *v5; // x0
  ConnectMark_c *klass; // x8

  if ( (byte_4CB9493 & 1) == 0 )
  {
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB9493 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseCompleteMission(Instance, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    goto LABEL_21;
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v5->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_21;
  TerminalSceneComponent__playBgm_45573452((TerminalSceneComponent_o *)Instance, 0);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.connectMark->klass;
  if ( !klass || (Instance = *(CommonUI_o **)&klass->_2.instance_size) == 0 )
LABEL_21:
    sub_1C6BC60(Instance, v3);
  ScrPlayerStatus__OpenMasterMissionFromCompleteMission((ScrPlayerStatus_o *)Instance, 0);
}


void MasterMissionComponent___c___OnClickCompleteMissionBtn_b__149_1(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void MasterMissionComponent___c___OnClickShopBtn_b__177_0(MasterMissionComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  SceneJumpInfo_o *v4; // x19

  if ( (byte_4CB9495 & 1) == 0 )
  {
    sub_1C6BA08(&SceneJumpInfo_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_13088/*"StoneFragments"*/);
    byte_4CB9495 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        v4 = (SceneJumpInfo_o *)sub_1C6BC54(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_41712980(v4, (System_String_o *)StringLiteral_13088/*"StoneFragments"*/, 0),
        !v4)
    || (SceneJumpInfo__SetReturnNowScene(v4, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C6BC60(Instance, v3);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
}


void MasterMissionComponent___c___OpenCompleteMission_b__148_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_4CB9492 & 1) == 0 )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB9492 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance )
    sub_1C6BC60(0, method);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0);
}


void MasterMissionComponent___c___reDispMissionList_b__153_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CB9494 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CB9494 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 1, 1, 0);
}


void MasterMissionComponent___c__DisplayClass174_0___ctor(
        MasterMissionComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionComponent___c__DisplayClass174_0___playEventMissionSvtVoice_b__0(
        MasterMissionComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent_o *_4__this; // x0
  struct System_Action_o *action; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (MasterMissionComponent__setNormalFace(_4__this, 0), (action = this->fields.action) == 0) )
    sub_1C6BC60(_4__this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
    action->fields.method_code,
    action->fields.method);
}


void MasterMissionComponent___c__DisplayClass184_0___ctor(
        MasterMissionComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionComponent___c__DisplayClass184_0___BulkReceiveConfirm_b__0(
        MasterMissionComponent___c__DisplayClass184_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MasterMissionComponent___c__DisplayClass184_0_o *v4; // x19
  struct MasterMissionComponent_o *_4__this; // x8
  System_Collections_Generic_List_int__o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  unsigned int *monitor; // x8
  __int64 v10; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  __int64 *v14; // x8
  struct MasterMissionComponent_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct MasterMissionComponent_o *v18; // x8
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4CB9496 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&StringLiteral_3441/*"CLICK_DECIDE"*/);
    this = (MasterMissionComponent___c__DisplayClass184_0_o *)sub_1C6BA08(&StringLiteral_3434/*"CLICK_CANCEL"*/);
    byte_4CB9496 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v6 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    this = (MasterMissionComponent___c__DisplayClass184_0_o *)v4->fields.items;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v20 = v19;
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v20,
               (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__);
        if ( !v7 )
          break;
        if ( !v20.fields._current )
          sub_1C6BC60(v7, v8);
        monitor = (unsigned int *)v20.fields._current[7].monitor;
        if ( !monitor )
          sub_1C6BC60(v7, v8);
        if ( !v6 )
          sub_1C6BC60(v7, v8);
        v10 = monitor[4];
        items = v6->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          sub_1C6BC60(v7, v10);
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v10,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = v10;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v6 )
      {
        v15 = v4->fields.__4__this;
        this = (MasterMissionComponent___c__DisplayClass184_0_o *)System_Collections_Generic_List_int___ToArray(
                                                                    v6,
                                                                    (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v15 )
        {
          v15->fields.sendMissionIds = (struct System_Int32_array *)this;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v15->fields.sendMissionIds, (int32_t)this, v16, v17);
          v18 = v4->fields.__4__this;
          if ( v18 )
          {
            this = (MasterMissionComponent___c__DisplayClass184_0_o *)v18->fields.myFsm;
            if ( this )
            {
              v14 = &StringLiteral_3441/*"CLICK_DECIDE"*/;
              goto LABEL_22;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C6BC60(this, isDecide);
  }
  this = (MasterMissionComponent___c__DisplayClass184_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_27;
  v14 = &StringLiteral_3434/*"CLICK_CANCEL"*/;
LABEL_22:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v14, 0);
}


void MasterMissionComponent___c__DisplayClass190_0___ctor(
        MasterMissionComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionComponent___c__DisplayClass190_0___ReceiveResultList_b__0(
        MasterMissionComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent___c__DisplayClass190_0_o *v2; // x19
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4CB9497 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_11662/*"SERVANT_OVER"*/);
    sub_1C6BA08(&StringLiteral_10435/*"PRESENT_BOX_OVER"*/);
    this = (MasterMissionComponent___c__DisplayClass190_0_o *)sub_1C6BA08(&StringLiteral_3434/*"CLICK_CANCEL"*/);
    byte_4CB9497 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterMissionComponent___c__DisplayClass190_0_o *)_4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( this )
    {
      v4 = (__int64 *)&StringLiteral_10435/*"PRESENT_BOX_OVER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C6BC60(this, method);
  }
  if ( !this )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v4 = &StringLiteral_11662/*"SERVANT_OVER"*/;
  else
    v4 = &StringLiteral_3434/*"CLICK_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v4, 0);
}


void MasterMissionComponent___c__DisplayClass190_0___ReceiveResultList_b__1(
        MasterMissionComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *nextAction; // x8

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))nextAction->fields.invoke_impl)(
    nextAction->fields.method_code,
    nextAction->fields.method);
}


void MasterMissionComponent___c__DisplayClass190_0___ReceiveResultList_b__2(
        MasterMissionComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *nextAction; // x8

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))nextAction->fields.invoke_impl)(
    nextAction->fields.method_code,
    nextAction->fields.method);
}


void MasterMissionComponent___c__DisplayClass191_0___ctor(
        MasterMissionComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionComponent___c__DisplayClass191_0___PresentBoxOver_b__1(
        MasterMissionComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  struct MasterMissionComponent_o *_4__this; // x0
  __int64 *v4; // x9

  if ( (byte_4CB9498 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_11662/*"SERVANT_OVER"*/);
    sub_1C6BA08(&StringLiteral_3434/*"CLICK_CANCEL"*/);
    byte_4CB9498 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  if ( this->fields.isPresentBoxOpen )
  {
    MasterMissionComponent__OpenPresentBox(_4__this, 0);
    return;
  }
  if ( !_4__this->fields.myFsm )
LABEL_11:
    sub_1C6BC60(_4__this, method);
  if ( _4__this->fields.overflowType )
    v4 = &StringLiteral_11662/*"SERVANT_OVER"*/;
  else
    v4 = &StringLiteral_3434/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent(_4__this->fields.myFsm, (System_String_o *)*v4, 0);
}


void MasterMissionComponent___c__DisplayClass207_0___ctor(
        MasterMissionComponent___c__DisplayClass207_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionComponent___c__DisplayClass207_0___UpdateStoneExchangeCount_b__0(
        MasterMissionComponent___c__DisplayClass207_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MasterMissionComponent_o *Object_object__51495936; // x0
  struct MasterMissionComponent_o *_4__this; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct MasterMissionComponent_o *v9; // x8
  int32_t exchangeCount; // w20

  if ( (byte_4CB9499 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&MasterMissionComponent_TypeInfo);
    byte_4CB9499 = 1;
  }
  Object_object__51495936 = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !assetData )
    goto LABEL_14;
  Object_object__51495936 = (MasterMissionComponent_o *)AssetData__GetObject_object__51495936(
                                                          assetData,
                                                          MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
                                                          (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_object__51495936;
  sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.btnEffectBasePrefab, (int32_t)Object_object__51495936, v7, v8);
  Object_object__51495936 = this->fields.__4__this;
  if ( !Object_object__51495936 )
    goto LABEL_14;
  MasterMissionComponent__StopStoneButtonEffect(Object_object__51495936, 0);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_14;
  if ( v9->fields.nowType == 1 )
  {
    exchangeCount = this->fields.exchangeCount;
    if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0) )
    {
      Object_object__51495936 = this->fields.__4__this;
      if ( Object_object__51495936 )
      {
        MasterMissionComponent__PlayStoneButtonEffect(Object_object__51495936, 0);
        return;
      }
LABEL_14:
      sub_1C6BC60(Object_object__51495936, assetData);
    }
  }
}


void MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}