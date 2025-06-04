void __fastcall MasterMissionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  int32_t v14; // w1
  int32_t v15; // w1
  struct MasterMissionComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct MasterMissionComponent_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct MasterMissionComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct MasterMissionComponent_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  struct MasterMissionComponent_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  struct MasterMissionComponent_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  struct MasterMissionComponent_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  struct MasterMissionComponent_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  MasterMissionComponent_c *v47; // x8
  struct MasterMissionComponent_StaticFields *v48; // x9

  if ( (byte_4B04AC1 & 1) == 0 )
  {
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_17421/*"btn_txt_off_limited"*/, v4);
    sub_1BC3008(&StringLiteral_17420/*"btn_txt_off_extra"*/, v5);
    sub_1BC3008(&StringLiteral_17427/*"btn_txt_on_limited"*/, v6);
    sub_1BC3008(&StringLiteral_18635/*"ef_btn_blink"*/, v7);
    sub_1BC3008(&StringLiteral_17419/*"btn_txt_off_daily"*/, v8);
    sub_1BC3008(&StringLiteral_17425/*"btn_txt_on_daily"*/, v9);
    sub_1BC3008(&StringLiteral_17428/*"btn_txt_on_weekly"*/, v10);
    sub_1BC3008(&StringLiteral_17422/*"btn_txt_off_weekly"*/, v11);
    sub_1BC3008(&StringLiteral_17426/*"btn_txt_on_extra"*/, v12);
    byte_4B04AC1 = 1;
  }
  static_fields = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_SVT_ID = 9000001LL;
  static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  v14 = StringLiteral_17425/*"btn_txt_on_daily"*/;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17425/*"btn_txt_on_daily"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v14, v2, v3);
  v15 = StringLiteral_17419/*"btn_txt_off_daily"*/;
  v16 = MasterMissionComponent_TypeInfo->static_fields;
  v16->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17419/*"btn_txt_off_daily"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->DAILY_OFF_SPRITE_LABEL, v15, v17, v18);
  v19 = StringLiteral_17428/*"btn_txt_on_weekly"*/;
  v20 = MasterMissionComponent_TypeInfo->static_fields;
  v20->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17428/*"btn_txt_on_weekly"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v20->WEEKLY_ON_SPRITE_LABEL, v19, v21, v22);
  v23 = StringLiteral_17422/*"btn_txt_off_weekly"*/;
  v24 = MasterMissionComponent_TypeInfo->static_fields;
  v24->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17422/*"btn_txt_off_weekly"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v24->WEEKLY_OFF_SPRITE_LABEL, v23, v25, v26);
  v27 = StringLiteral_17426/*"btn_txt_on_extra"*/;
  v28 = MasterMissionComponent_TypeInfo->static_fields;
  v28->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17426/*"btn_txt_on_extra"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v28->EXTRA_ON_SPRITE_LABEL, v27, v29, v30);
  v31 = StringLiteral_17420/*"btn_txt_off_extra"*/;
  v32 = MasterMissionComponent_TypeInfo->static_fields;
  v32->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17420/*"btn_txt_off_extra"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v32->EXTRA_OFF_SPRITE_LABEL, v31, v33, v34);
  v35 = StringLiteral_17427/*"btn_txt_on_limited"*/;
  v36 = MasterMissionComponent_TypeInfo->static_fields;
  v36->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17427/*"btn_txt_on_limited"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v36->LIMITED_ON_SPRITE_LABEL, v35, v37, v38);
  v39 = StringLiteral_17421/*"btn_txt_off_limited"*/;
  v40 = MasterMissionComponent_TypeInfo->static_fields;
  v40->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17421/*"btn_txt_off_limited"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v40->LIMITED_OFF_SPRITE_LABEL, v39, v41, v42);
  v43 = StringLiteral_18635/*"ef_btn_blink"*/;
  v44 = MasterMissionComponent_TypeInfo->static_fields;
  v44->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_18635/*"ef_btn_blink"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v44->STONE_EXCHENGE_BUTTON_EFFECT_NAME, v43, v45, v46);
  v47 = MasterMissionComponent_TypeInfo;
  v48 = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&v48->SLIDE_IN_TIME = 0x42B800003DCCCCCDLL;
  *(_OWORD *)&v48->NOTICE_NUMBER_BADGE_DEPTH = xmmword_BDDED0;
  v48->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v48->BLANK_EARTH_WINDOW_POS.fields.x = 0.0;
  v48->BLANK_EARTH_WINDOW_POS.fields.y = 0.0;
  v48->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
  v47->static_fields->HelpButtonDefaultPosition = (struct UnityEngine_Vector2_o)0xC31F0000C3E10000LL;
  v47->static_fields->HelpButtonItemInfoPosition = (struct UnityEngine_Vector2_o)0xC3070000C3DC0000LL;
  v47->static_fields->VoiceButtonDefaultPosition = (struct UnityEngine_Vector2_o)0xC3600000C3E60000LL;
  v47->static_fields->VoiceButtonItemInfoPosition = (struct UnityEngine_Vector2_o)0xC2B40000C3E60000LL;
  __asm { FMOV            V0.2S, #1.0 }
  v47->static_fields->VoiceButtonDefaultScale = _D0;
  v47->static_fields->VoiceButtonItemInfoScale = (struct UnityEngine_Vector2_o)vdup_n_s32(0x3F4CCCCDu).n64_u64[0];
}


void __fastcall MasterMissionComponent___ctor(MasterMissionComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionComponent__AcceptReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  System_Int32_array *receiveMissionIds; // x20
  MasterMissionListViewManager_o *v11; // x21
  System_Action_o *v12; // x22

  if ( (byte_4B04AAA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_MasterMissionComponent__AcceptReward_b__189_0__, v4);
    byte_4B04AAA = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BC326C(v5, v6, v7);
  receiveMissionIds = this->fields.receiveMissionIds;
  v11 = missionListViewManager->m_Items[nowType];
  v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__189_0__, 0LL);
  if ( !v11 )
LABEL_7:
    sub_1BC3264(v5, v6);
  MasterMissionListViewManager__AcceptReward(v11, receiveMissionIds, v12, 0LL);
}


void __fastcall MasterMissionComponent__Awake(MasterMissionComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__BulkReceive(
        MasterMissionComponent_o *this,
        bool isBulk,
        const MethodInfo *method)
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
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BC326C(this, isBulk, method);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1BC3264(this, isBulk);
  v6 = MasterMissionListViewManager__ReceiveMissionItems((MasterMissionListViewManager_o *)this, isBulk, 0LL);
  MasterMissionComponent__BulkReceiveConfirm(v5, v6, v7);
}


void __fastcall MasterMissionComponent__BulkReceiveConfirm(
        MasterMissionComponent_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *items,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v15; // x20
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v16; // x22

  if ( (byte_4B04AA6 & 1) == 0 )
  {
    sub_1BC3008(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo, items);
    sub_1BC3008(&Method_MasterMissionComponent___c__DisplayClass184_0__BulkReceiveConfirm_b__0__, v5);
    sub_1BC3008(&MasterMissionComponent___c__DisplayClass184_0_TypeInfo, v6);
    byte_4B04AA6 = 1;
  }
  v7 = sub_1BC3254(MasterMissionComponent___c__DisplayClass184_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass184_0___ctor((MasterMissionComponent___c__DisplayClass184_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = items;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)items, v12, v13);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v15 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v7 + 24);
  v16 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_1BC3254(MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_MasterMissionComponent___c__DisplayClass184_0__BulkReceiveConfirm_b__0__,
    0LL);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_1BC3264(v8, v9);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v15, v16, 0LL);
}


void __fastcall MasterMissionComponent__ChangeTabImage(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterMissionComponent_o *v3; // x19
  struct MasterMissionTab_array *missionTabList; // x8
  UISprite_o *dailyTabBtnBase; // x20
  UISprite_o *dailyTabSprite; // x20
  int32_t nowType; // w22
  __int64 v8; // x9
  struct MasterMissionTab_array *v9; // x8
  UISprite_o *weeklyTabBtnBase; // x20
  UISprite_o *weeklyTabSprite; // x20
  int32_t v12; // w22
  __int64 v13; // x9
  struct MasterMissionTab_array *v14; // x8
  UISprite_o *extraTabBtnBase; // x20
  UISprite_o *extraTabSprite; // x20
  int32_t v17; // w22
  __int64 v18; // x9
  struct MasterMissionTab_array *v19; // x8
  UISprite_o *limitedTabBtnBase; // x20
  UISprite_o *limitedTabSprite; // x20
  int32_t v22; // w22
  __int64 v23; // x9
  __int64 v24; // x1
  int32_t v25; // w19

  v3 = this;
  if ( (byte_4B04AA1 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BC3008(&MasterMissionComponent_TypeInfo, method);
    byte_4B04AA1 = 1;
  }
  missionTabList = v3->fields.missionTabList;
  if ( !missionTabList )
    goto LABEL_50;
  if ( !missionTabList->max_length )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)missionTabList->m_Items[0];
  if ( !this )
    goto LABEL_50;
  dailyTabBtnBase = v3->fields.dailyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 0,
                                       0LL);
  if ( !dailyTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(dailyTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  dailyTabSprite = v3->fields.dailyTabSprite;
  nowType = v3->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !dailyTabSprite )
    goto LABEL_50;
  v8 = 24LL;
  if ( !nowType )
    v8 = 16LL;
  UISprite__set_spriteName(
    dailyTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v8),
    0LL);
  this = (MasterMissionComponent_o *)v3->fields.dailySelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 0, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.dailyNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 0, 0LL);
  v9 = v3->fields.missionTabList;
  if ( !v9 )
    goto LABEL_50;
  if ( v9->max_length <= 1 )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)v9->m_Items[1];
  if ( !this )
    goto LABEL_50;
  weeklyTabBtnBase = v3->fields.weeklyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 1,
                                       0LL);
  if ( !weeklyTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(weeklyTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  weeklyTabSprite = v3->fields.weeklyTabSprite;
  v12 = v3->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !weeklyTabSprite )
    goto LABEL_50;
  v13 = 40LL;
  if ( v12 == 1 )
    v13 = 32LL;
  UISprite__set_spriteName(
    weeklyTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v13),
    0LL);
  this = (MasterMissionComponent_o *)v3->fields.weeklySelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 1, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.weeklyNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 1, 0LL);
  v14 = v3->fields.missionTabList;
  if ( !v14 )
    goto LABEL_50;
  if ( v14->max_length <= 2 )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)v14->m_Items[2];
  if ( !this )
    goto LABEL_50;
  extraTabBtnBase = v3->fields.extraTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 2,
                                       0LL);
  if ( !extraTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(extraTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  extraTabSprite = v3->fields.extraTabSprite;
  v17 = v3->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !extraTabSprite )
    goto LABEL_50;
  v18 = 56LL;
  if ( v17 == 2 )
    v18 = 48LL;
  UISprite__set_spriteName(
    extraTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v18),
    0LL);
  this = (MasterMissionComponent_o *)v3->fields.extraSelectedObj;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 2, 0LL),
        (this = (MasterMissionComponent_o *)v3->fields.extraNonSelectedObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 2, 0LL),
        (v19 = v3->fields.missionTabList) == 0LL) )
  {
LABEL_50:
    sub_1BC3264(this, method);
  }
  if ( v19->max_length <= 3 )
LABEL_51:
    sub_1BC326C(this, method, v2);
  this = (MasterMissionComponent_o *)v19->m_Items[3];
  if ( !this )
    goto LABEL_50;
  limitedTabBtnBase = v3->fields.limitedTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 3,
                                       0LL);
  if ( !limitedTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(limitedTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  limitedTabSprite = v3->fields.limitedTabSprite;
  v22 = v3->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !limitedTabSprite )
    goto LABEL_50;
  v23 = 72LL;
  if ( v22 == 3 )
    v23 = 64LL;
  UISprite__set_spriteName(
    limitedTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v23),
    0LL);
  this = (MasterMissionComponent_o *)v3->fields.limitedSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 3, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.limitedNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 3, 0LL);
  v25 = v3->fields.nowType;
  if ( !byte_4AFC639 )
  {
    sub_1BC3008(&EventRewardSaveData_TypeInfo, v24);
    byte_4AFC639 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = v25;
  EventRewardSaveData__SaveMstMissionIndex(0LL);
}


void __fastcall MasterMissionComponent__ChangeViewCompleteMissionLb(
        MasterMissionComponent_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *mstMissionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x22
  UILabel_o *completeMissionCountNumLb; // x21
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *completeMissionCountNumLb2; // x20
  UILabel_o *completeMissionCountMsgLb; // x20
  struct UILabel_o *completeMissionAlertNumLb; // x8
  struct UILabel_o *completeMissionAlertUnitLb; // x8
  char v21; // w20
  struct UILabel_o *completeMissionAlertMsgLb; // x19
  System_String_o *v23; // x1
  UILabel_o *completeMissionAlertTitleLb; // x20
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B04A84 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionInfo);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BC3008(&StringLiteral_8590/*"MISSION_ACHIVE_MSG"*/, v8);
    sub_1BC3008(&StringLiteral_3674/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, v9);
    sub_1BC3008(&StringLiteral_1/*""*/, v10);
    sub_1BC3008(&StringLiteral_13287/*"TIME_REST_ACHIVE"*/, v11);
    byte_4B04A84 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !mstMissionInfo )
    goto LABEL_36;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  completeMissionCountNumLb = this->fields.completeMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0LL);
  if ( !completeMissionCountNumLb )
    goto LABEL_36;
  UILabel__set_text(completeMissionCountNumLb, (System_String_o *)Instance, 0LL);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  completeMissionCountNumLb2 = this->fields.completeMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0LL);
  if ( !completeMissionCountNumLb2 )
    goto LABEL_36;
  UILabel__set_text(completeMissionCountNumLb2, (System_String_o *)Instance, 0LL);
  completeMissionCountMsgLb = this->fields.completeMissionCountMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8590/*"MISSION_ACHIVE_MSG"*/, 0LL);
  if ( !completeMissionCountMsgLb )
    goto LABEL_36;
  UILabel__set_text(completeMissionCountMsgLb, (System_String_o *)Instance, 0LL);
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_36;
  LocalizationManager__GetRestTimeWithSeparatedTimeStr(
    MstMissionEntity_k__BackingField->fields.endedAt,
    &this->fields.completeMissionTimeNumStr,
    &this->fields.completeMissionTimeCntStr,
    0LL);
  completeMissionAlertNumLb = this->fields.completeMissionAlertNumLb;
  if ( !completeMissionAlertNumLb )
    goto LABEL_36;
  Instance = (DataManager_o *)this->fields.completeMissionTimeNumStr;
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)System_String__Equals_62383952(
                                (System_String_o *)Instance,
                                completeMissionAlertNumLb->fields.mText,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    completeMissionAlertUnitLb = this->fields.completeMissionAlertUnitLb;
    if ( !completeMissionAlertUnitLb )
      goto LABEL_36;
    Instance = (DataManager_o *)this->fields.completeMissionTimeCntStr;
    if ( !Instance )
      goto LABEL_36;
    if ( System_String__Equals_62383952((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(this->fields.completeMissionTimeNumStr, 0LL);
  if ( !this->fields.completeMissionAlertTitleLb )
    goto LABEL_36;
  v21 = (char)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.completeMissionAlertTitleLb,
                                0LL);
  if ( !Instance )
    goto LABEL_36;
  if ( (v21 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    completeMissionAlertTitleLb = this->fields.completeMissionAlertTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3674/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0LL);
    if ( completeMissionAlertTitleLb )
    {
      UILabel__set_text(completeMissionAlertTitleLb, (System_String_o *)Instance, 0LL);
      Instance = (DataManager_o *)this->fields.completeMissionAlertNumLb;
      if ( Instance )
      {
        UILabel__set_text((UILabel_o *)Instance, this->fields.completeMissionTimeNumStr, 0LL);
        Instance = (DataManager_o *)this->fields.completeMissionAlertUnitLb;
        if ( Instance )
        {
          UILabel__set_text((UILabel_o *)Instance, this->fields.completeMissionTimeCntStr, 0LL);
          Instance = (DataManager_o *)this->fields.completeMissionAlertMsgLb;
          if ( Instance )
          {
            v23 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_34;
          }
        }
      }
    }
LABEL_36:
    sub_1BC3264(Instance, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.completeMissionAlertNumLb;
  if ( !Instance )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (DataManager_o *)this->fields.completeMissionAlertUnitLb;
  if ( !Instance )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  completeMissionAlertMsgLb = this->fields.completeMissionAlertMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13287/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !completeMissionAlertMsgLb )
    goto LABEL_36;
  v23 = (System_String_o *)Instance;
  Instance = (DataManager_o *)completeMissionAlertMsgLb;
LABEL_34:
  UILabel__set_text((UILabel_o *)Instance, v23, 0LL);
}


void __fastcall MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  int32_t BoardTouchMissionId; // w20
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4B04AA7 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_1BC3008(&StringLiteral_11038/*"REWARD_ACCEPTABLE"*/, v4);
    byte_4B04AA7 = 1;
  }
  missionListViewManager = v3->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_10;
  nowType = v3->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_11;
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this
    || (BoardTouchMissionId = MasterMissionListViewManager__GetBoardTouchMissionId(
                                (MasterMissionListViewManager_o *)this,
                                0LL),
        (this = (MasterMissionComponent_o *)sub_1BC30B0(int___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(this, method);
  }
  method = (const MethodInfo *)this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_11:
    sub_1BC326C(this, method, v2);
  LODWORD(this->fields.myFsm) = BoardTouchMissionId;
  v3->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.sendMissionIds, (int32_t)this, v2, v8);
  this = (MasterMissionComponent_o *)v3->fields.myFsm;
  v3->fields.isBoardTouch = 1;
  if ( !this )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11038/*"REWARD_ACCEPTABLE"*/, 0LL);
}


void __fastcall MasterMissionComponent__Close(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  struct MasterMissionListViewManager_array *v8; // x8
  struct MasterMissionListViewManager_array *v9; // x8
  struct MasterMissionListViewManager_array *v10; // x8
  MasterMissionComponent_o *v11; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4B04AB4 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    byte_4B04AB4 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    goto LABEL_22;
  EventSvtControl__stopVoice(svtVoiceCtr, 0LL);
  MasterMissionComponent__ReleaseSvtVoiceData(this, v5);
  svtVoiceCtr = (EventSvtControl_o *)this->fields.standFigureBack;
  if ( !svtVoiceCtr )
    goto LABEL_22;
  StandFigureBack__DestroyFigure((StandFigureBack_o *)svtVoiceCtr, 0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_22;
  if ( !missionListViewManager->max_length )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)missionListViewManager->m_Items[0];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_22;
  if ( v8->max_length <= 1 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v8->m_Items[1];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_22;
  if ( v9->max_length <= 2 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v9->m_Items[2];
  if ( !svtVoiceCtr
    || (MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL),
        (v10 = this->fields.missionListViewManager) == 0LL) )
  {
LABEL_22:
    sub_1BC3264(svtVoiceCtr, v3);
  }
  if ( v10->max_length <= 3 )
LABEL_23:
    sub_1BC326C(svtVoiceCtr, v3, v6);
  svtVoiceCtr = (EventSvtControl_o *)v10->m_Items[3];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL);
  EventRewardSaveData__SaveAllMissionData(0LL);
  svtVoiceCtr = (EventSvtControl_o *)this->fields.completeMissionIconSprite;
  if ( !svtVoiceCtr )
    goto LABEL_22;
  CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)svtVoiceCtr, 0LL);
  svtVoiceCtr = (EventSvtControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtVoiceCtr, 0, 0LL);
  MasterMissionComponent__UpdateEventInfos(v11, v12);
  MasterMissionComponent__RestoreTerminalTouchEnabledBeforeOpen(this, v13);
}


void __fastcall MasterMissionComponent__EndLoadVoiceAssets(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B04A92 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B04A92 = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(titleInfo, v3);
  }
  CommonUI__SetLoadMode((CommonUI_o *)titleInfo, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__ExitCompleteMission(
        MasterMissionComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x19
  MasterMissionComponent___c_c *v11; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__150_0; // x20
  Il2CppObject *v14; // x21
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B04A88 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BC3008(&Method_MasterMissionComponent___c__ExitCompleteMission_b__150_0__, v5);
    sub_1BC3008(&MasterMissionComponent___c_TypeInfo, v6);
    byte_4B04A88 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  v11 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v11 = MasterMissionComponent___c_TypeInfo;
  }
  _9__150_0 = v11->static_fields->__9__150_0;
  if ( !_9__150_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MasterMissionComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__150_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(_9__150_0, v14, Method_MasterMissionComponent___c__ExitCompleteMission_b__150_0__, 0LL);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__150_0 = _9__150_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__150_0, (int32_t)_9__150_0, v16, v17);
  }
  if ( !v10 )
    sub_1BC3264(v11, v8);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, _9__150_0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MasterMissionComponent__GetCompleteMissionClearCount(
        MasterMissionComponent_o *this,
        EventMissionEntity_array *eventMissionList,
        int32_t type,
        const MethodInfo *method)
{
  signed int max_length; // w8
  signed int v6; // w26
  int32_t v7; // w20
  Il2CppClass **v8; // x8
  EventMissionEntity_o *v9; // x21
  bool isNowMission; // w0
  int32_t missionTargetId; // w22
  int32_t id; // w23
  bool v13; // w24
  bool IsIgnoreStartCondition; // w25
  bool v15; // w24
  int32_t MissionProgressType_46079788; // w0

  if ( (byte_4B04A85 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BC3008(&MissionInfoMaker_TypeInfo, eventMissionList);
    byte_4B04A85 = 1;
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
        sub_1BC326C(this, eventMissionList, *(_QWORD *)&type);
      v8 = &eventMissionList->obj.klass + v6;
      v9 = (EventMissionEntity_o *)v8[4];
      if ( !v9 )
        break;
      isNowMission = EventMissionEntity__isNowMission((EventMissionEntity_o *)v8[4], 0LL);
      missionTargetId = v9->fields.missionTargetId;
      id = v9->fields.id;
      v13 = isNowMission;
      IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v9, 0LL);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      v15 = v13;
      MissionProgressType_46079788 = MissionInfoMaker__GetMissionProgressType_46079788(
                                       missionTargetId,
                                       id,
                                       v15,
                                       IsIgnoreStartCondition,
                                       0LL);
      this = (MasterMissionComponent_o *)MissionInfoMaker__GetProgStatus(
                                           v9->fields.missionTargetId,
                                           v9->fields.id,
                                           MissionProgressType_46079788,
                                           v15,
                                           0LL);
      max_length = eventMissionList->max_length;
      ++v6;
      if ( (_DWORD)this == 3 )
        ++v7;
      if ( v6 >= max_length )
        return v7;
    }
LABEL_16:
    sub_1BC3264(this, eventMissionList);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MasterMissionComponent__GetExchangeStoneCount(
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MasterMissionComponent__GetMissionClearCount(
        MasterMissionComponent_o *this,
        EventMissionEntity_array *eventMissionList,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v6; // x8
  int32_t v7; // w21
  unsigned __int64 v8; // x24
  EventMissionEntity_o *v9; // x23
  MasterMissionListViewItem_o *v10; // x22

  if ( (byte_4B04A94 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BC3008(&MasterMissionListViewItem_TypeInfo, eventMissionList);
    byte_4B04A94 = 1;
  }
  if ( !eventMissionList )
    goto LABEL_14;
  v6 = *(_QWORD *)&eventMissionList->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1BC326C(this, eventMissionList, *(_QWORD *)&type);
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_1BC3254(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v10, v9, type, 0LL);
      if ( !v10 )
        break;
      LODWORD(v6) = eventMissionList->max_length;
      ++v8;
      if ( v10->fields.progStatus == 3 )
        ++v7;
      if ( (__int64)v8 >= (int)v6 )
        return v7;
    }
LABEL_14:
    sub_1BC3264(this, eventMissionList);
  }
  return 0;
}


int32_t __fastcall MasterMissionComponent__GetMissionTypeByTabType(int32_t tabType, const MethodInfo *method)
{
  if ( (unsigned int)(tabType - 1) > 2 )
    return 3;
  else
    return dword_C18F8C[tabType - 1];
}


void __fastcall MasterMissionComponent__HideCompleteMissionIconLb(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *completeMissionIcon; // x0

  completeMissionIcon = this->fields.completeMissionIcon;
  if ( !completeMissionIcon
    || (UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0LL),
        (completeMissionIcon = (UnityEngine_GameObject_o *)this->fields.completeMissionIconSprite) == 0LL)
    || (CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)completeMissionIcon, 0LL),
        (completeMissionIcon = this->fields.completeMissionAlertRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0LL),
        (completeMissionIcon = this->fields.completeMissionCountRoot) == 0LL) )
  {
    sub_1BC3264(completeMissionIcon, method);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0LL);
}


void __fastcall MasterMissionComponent__InitCompleteMissionLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *currentCompleteMissionList; // x0
  Il2CppObject *Item; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B04A83 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v3);
    byte_4B04A83 = 1;
  }
  currentCompleteMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_1BC3264(0LL, method);
  if ( currentCompleteMissionList->fields._size < 1 )
  {
    MasterMissionComponent__HideCompleteMissionIconLb(this, method);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentCompleteMissionList,
             0,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    MasterMissionComponent__ChangeViewCompleteMissionLb(
      this,
      (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
      v6);
  }
}


bool __fastcall MasterMissionComponent__IsLimitedMissionEnableTime(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  int64_t NoneExpireTime; // x23
  int64_t Time; // x19
  MstMissionEntity_array *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  MstMissionEntity_array *v11; // x20
  int v12; // w25
  int v13; // w26
  __int64 v14; // x24
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x21
  __int64 v17; // x2
  int64_t data; // x9
  bool result; // w0
  BalanceConfig_c *v21; // x0

  if ( (byte_4B04A89 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_MstMissionMaster___, v2);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B04A89 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v5->static_fields->NoneExpireTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = (MstMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (MstMissionEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v10 = *(_QWORD *)&Instance->max_length;
  v11 = Instance;
  v12 = v10 - 1;
  if ( (int)v10 >= 1 )
  {
    v13 = 0;
    v14 = -1LL;
    while ( 1 )
    {
      v15 = &v11->obj.klass + v13;
      v16 = v15[4];
      if ( !v16 )
        break;
      Instance = (MstMissionEntity_array *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v15[4], 0LL);
      if ( (_DWORD)Instance == 5 )
      {
        data = (int64_t)v16->_1.this_arg.data;
        if ( (__int64)v16->_1.byval_arg.data > v14 )
          v14 = (__int64)v16->_1.byval_arg.data;
        if ( Time < data && NoneExpireTime > data )
          NoneExpireTime = (int64_t)v16->_1.this_arg.data;
      }
      if ( v12 == v13 )
        goto LABEL_25;
      if ( ++v13 >= v11->max_length )
        sub_1BC326C(Instance, v9, v17);
    }
LABEL_31:
    sub_1BC3264(Instance, v9);
  }
  v14 = -1LL;
LABEL_25:
  result = 0;
  if ( Time < NoneExpireTime && v14 <= Time )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    return NoneExpireTime < v21->static_fields->NoneExpireTime;
  }
  return result;
}


void __fastcall MasterMissionComponent__LoadNotificationEnd(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  _BOOL8 _39466584; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *v21; // x0
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_4B04A80 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_MstMissionMaster___, v4);
    sub_1BC3008(&Method_MasterMissionComponent__LoadNotificationEnd_b__140_0__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BC3008(&TutorialFlag_TypeInfo, v8);
    byte_4B04A80 = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = (struct MstMissionMaster_o *)MasterData_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mstMissionMst, (int32_t)MasterData_object, v12, v13);
  EventRewardSaveData__LoadAllMissionData(0LL);
  MasterMissionComponent__SetMissionDisp(this, v14);
  MasterMissionComponent__SetMissionClearNum(this, v15);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v16);
  Instance = (DataManager_o *)this->fields.rewardInfoController;
  if ( !Instance )
    goto LABEL_30;
  MissionRewardInfoController__SetupWindow((MissionRewardInfoController_o *)Instance, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39466584(126, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_30;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0LL);
    Instance = (DataManager_o *)this->fields.playBtnImg;
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v10);
    MasterMissionComponent__setGuideSvtVoice(this, v18);
    Instance = (DataManager_o *)this->fields.playBtnImg;
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_30;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  MasterMissionComponent__reDispMissionList(this, v17);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _39466584 = TutorialFlag__Get_39466584(207, 0LL);
  if ( !_39466584 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_39466584, v20);
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  v23 = (CommonUI_o *)v21;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__140_0__, 0LL);
  if ( !v23 )
LABEL_30:
    sub_1BC3264(Instance, v10);
  CommonUI__maskFadein(v23, DEFAULT_FADE_TIME, v25, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct MasterMissionComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v8; // x0
  QuestRewardItemAction_c *klass; // x8

  if ( (byte_4B04AB3 & 1) == 0 )
  {
    sub_1BC3008(&Method_MasterMissionComponent_OnClickBack__, method);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B04AB3 = 1;
  }
  v4 = Method_MasterMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_MasterMissionComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v6);
    byte_4AFC38D = 1;
  }
  v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v8->fields.friendPointBoostItemAction->klass;
  if ( !klass || (v8 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
    sub_1BC3264(v8, v6);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v8, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBulkReceive(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B04ABE & 1) == 0 )
  {
    sub_1BC3008(&Method_MasterMissionComponent_OnClickBulkReceive__, method);
    sub_1BC3008(&StringLiteral_2988/*"BULK_RECEIVE"*/, v3);
    byte_4B04ABE = 1;
  }
  v4 = Method_MasterMissionComponent_OnClickBulkReceive__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBulkReceive__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_MasterMissionComponent_OnClickBulkReceive__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BC3264(0LL, v6);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2988/*"BULK_RECEIVE"*/, 0LL);
}


void __fastcall MasterMissionComponent__OnClickCompleteMissionBtn(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  Il2CppObject *v18; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  System_String_o *v22; // x19
  long double inited; // q0
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  System_String_o *v28; // x19
  CommonUI_o *v29; // x20
  MasterMissionComponent___c_c *v30; // x8
  System_Action_o *_9__149_1; // x21
  Il2CppObject *v32; // x22
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4B04A87 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_System_Array_Empty_object___, v3);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v4);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__149_0__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v10);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v11);
    sub_1BC3008(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__149_1__, v12);
    sub_1BC3008(&MasterMissionComponent___c_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_3673/*"COMPLETE_MISSION_END"*/, v14);
    byte_4B04A87 = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4AFC38D )
      {
        sub_1BC3008(&TerminalSceneComponent_TypeInfo, v16);
        byte_4AFC38D = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v17 = **(_QWORD **)&Instance[1].fields._DispLog;
      if ( v17 )
      {
        Instance = *(DataManager_o **)(v17 + 264);
        if ( Instance )
        {
          ScrTerminalMap__DestroyEventActionEffect((ScrTerminalMap_o *)Instance, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__PlaySystemSE(0, 0LL);
          v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v19 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v19 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
          v21 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            v21,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__149_0__,
            0LL);
          if ( v18 )
          {
            CommonUI__maskFadeout((CommonUI_o *)v18, 1, DEFAULT_FADE_TIME, v21, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_1BC3264(Instance, v16);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3673/*"COMPLETE_MISSION_END"*/, 0LL);
    v24 = Method_System_Array_Empty_object___;
    v25 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v25 )
    {
      sub_1C134C8(Method_System_Array_Empty_object___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C1346C(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C1346C(inited);
    v28 = System_String__Format_62390076(v22, **(System_Object_array ***)(v27 + 184), 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (CommonUI_o *)Instance;
    v30 = MasterMissionComponent___c_TypeInfo;
    if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v30 = MasterMissionComponent___c_TypeInfo;
    }
    _9__149_1 = v30->static_fields->__9__149_1;
    if ( !_9__149_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = MasterMissionComponent___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__149_1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(_9__149_1, v32, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__149_1__, 0LL);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__149_1 = _9__149_1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__149_1, (int32_t)_9__149_1, v34, v35);
    }
    if ( !v29 )
      goto LABEL_40;
    CommonUI__OpenNotificationDialog(v29, 0LL, v28, _9__149_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0, 0LL);
  }
}


void __fastcall MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4B04AA2 & 1) == 0 )
  {
    sub_1BC3008(&Method_MasterMissionComponent_OnClickDailyTab__, method);
    byte_4B04AA2 = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_MasterMissionComponent_OnClickDailyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickDailyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_MasterMissionComponent_OnClickDailyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    this->fields.nowType = 0;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void __fastcall MasterMissionComponent__OnClickExtraTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4B04AA4 & 1) == 0 )
  {
    sub_1BC3008(&Method_MasterMissionComponent_OnClickExtraTab__, method);
    byte_4B04AA4 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_MasterMissionComponent_OnClickExtraTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickExtraTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_MasterMissionComponent_OnClickExtraTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    this->fields.nowType = 2;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void __fastcall MasterMissionComponent__OnClickHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  MasterMissionComponent_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B04ABC & 1) == 0 )
  {
    sub_1BC3008(&Method_MasterMissionComponent_OnClickHelp__, method);
    byte_4B04ABC = 1;
  }
  v2 = Method_MasterMissionComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1BC3020(Method_MasterMissionComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0LL);
  MasterMissionComponent__OpenHelp(v4, v5);
}


void __fastcall MasterMissionComponent__OnClickLimitedTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4B04AA5 & 1) == 0 )
  {
    sub_1BC3008(&Method_MasterMissionComponent_OnClickLimitedTab__, method);
    byte_4B04AA5 = 1;
  }
  if ( this->fields.nowType != 3 )
  {
    v3 = Method_MasterMissionComponent_OnClickLimitedTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickLimitedTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_MasterMissionComponent_OnClickLimitedTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    this->fields.nowType = 3;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void __fastcall MasterMissionComponent__OnClickShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x19
  MasterMissionComponent___c_c *v13; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__177_0; // x20
  Il2CppObject *v16; // x21
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B04AA0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v2);
    sub_1BC3008(&Method_MasterMissionComponent_OnClickShopBtn__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BC3008(&Method_MasterMissionComponent___c__OnClickShopBtn_b__177_0__, v5);
    sub_1BC3008(&MasterMissionComponent___c_TypeInfo, v6);
    byte_4B04AA0 = 1;
  }
  v7 = Method_MasterMissionComponent_OnClickShopBtn__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickShopBtn__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BC3020(Method_MasterMissionComponent_OnClickShopBtn__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  v13 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v13 = MasterMissionComponent___c_TypeInfo;
  }
  _9__177_0 = v13->static_fields->__9__177_0;
  if ( !_9__177_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = MasterMissionComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__177_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(_9__177_0, v16, Method_MasterMissionComponent___c__OnClickShopBtn_b__177_0__, 0LL);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__177_0 = _9__177_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__177_0, (int32_t)_9__177_0, v18, v19);
  }
  if ( !v12 )
    sub_1BC3264(v13, v10);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, _9__177_0, 0LL);
}


void __fastcall MasterMissionComponent__OnClickSvt(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.isVoicePlaying )
  {
    svtVoiceCtr = this->fields.svtVoiceCtr;
    if ( !svtVoiceCtr )
      sub_1BC3264(0LL, method);
    EventSvtControl__stopVoice(svtVoiceCtr, 0LL);
    MasterMissionComponent__setNormalFace(this, v4);
  }
  else
  {
    MasterMissionComponent__playSvtVoice(this, method);
  }
}


void __fastcall MasterMissionComponent__OnClickWeeklyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4B04AA3 & 1) == 0 )
  {
    sub_1BC3008(&Method_MasterMissionComponent_OnClickWeeklyTab__, method);
    byte_4B04AA3 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_MasterMissionComponent_OnClickWeeklyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickWeeklyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_MasterMissionComponent_OnClickWeeklyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    this->fields.nowType = 1;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
    if ( MasterMissionComponent__ShouldPlayedStoneButtonEffect(this, v8) )
      MasterMissionComponent__PlayStoneButtonEffect(this, v9);
  }
}


void __fastcall MasterMissionComponent__OnCompleteLoadVoiceAsset(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // zf

  v2 = this->fields.downLoadCnt - 1;
  v3 = this->fields.downLoadCnt == 1;
  this->fields.downLoadCnt = v2;
  if ( v2 < 0 || v3 )
    MasterMissionComponent__EndLoadVoiceAssets(this, method);
}


void __fastcall MasterMissionComponent__OnDestroy(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B04A7E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B04A7E = 1;
  }
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1BC3264(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.titleInfo, 0, v7, v8);
  }
  MasterMissionComponent__StopStoneButtonEffect(this, v5);
}


void __fastcall MasterMissionComponent__Open(
        MasterMissionComponent_o *this,
        MasterMissionComponent_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        int32_t typeIndex,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  CommonUI_o *Instance; // x0
  const MethodInfo *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_int__o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_object__o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v42; // w20
  bool v43; // w1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  TitleInfoControl_o *v50; // x21
  TitleInfoControl_o *v51; // x20
  System_Action_o *v52; // x21
  MasterMissionComponent_c *v53; // x0
  __int64 v54; // d0
  struct MstMissionEntity_array *Entitys; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v62; // x21
  ConnectMark_c *klass; // x8
  TitleInfoControl_o *v64; // x20
  System_Action_o *v65; // x20

  if ( (byte_4B04A7F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, callback);
    sub_1BC3008(&System_Action_TypeInfo, v9);
    sub_1BC3008(&AtlasManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_MstMissionMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__, v13);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v16);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BC3008(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v18);
    sub_1BC3008(&Method_MasterMissionComponent_LoadNotificationEnd__, v19);
    sub_1BC3008(&Method_MasterMissionComponent_OnClickBack__, v20);
    sub_1BC3008(&Method_MasterMissionComponent__Open_b__139_0__, v21);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v22);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v23);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v24);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v26);
    byte_4B04A7F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v29, v30);
  this->fields.reDispAction = redisp_act;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.reDispAction, (int32_t)redisp_act, v31, v32);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_52;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0LL);
  v33 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentEventIdList, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v36;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentMstMissionEntList, (int32_t)v36, v37, v38);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  if ( typeIndex == -1 )
  {
    if ( !byte_4AFC63A )
    {
      Instance = (CommonUI_o *)sub_1BC3008(&EventRewardSaveData_TypeInfo, v28);
      byte_4AFC63A = 1;
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
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= max_length )
        sub_1BC326C(Instance, v28, v39);
      Instance = (CommonUI_o *)missionTabList->m_Items[v42];
      if ( !Instance )
        break;
      MasterMissionTab__SetTabSize((MasterMissionTab_o *)Instance, 1, 0LL);
      max_length = missionTabList->max_length;
      if ( (int)++v42 >= max_length )
        goto LABEL_15;
    }
LABEL_52:
    sub_1BC3264(Instance, v28);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v28) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_52;
    v43 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_52;
    v43 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v43, 0LL);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__Instantiate_object_(
                               titlePrefab,
                               (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.titleInfo, (int32_t)Component_object, v48, v49);
    v50 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v50 )
      goto LABEL_52;
    TitleInfoControl__SetParent(v50, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setDepth((TitleInfoControl_o *)Instance, 37, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 38, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, 0LL, 85, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__changeTitleInfo_38910764((TitleInfoControl_o *)Instance, 1, 85, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v51 = this->fields.titleInfo;
    v52 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v52, (Il2CppObject *)this, (intptr_t)Method_MasterMissionComponent_OnClickBack__, 0LL);
    if ( !v51 )
      goto LABEL_52;
    TitleInfoControl__SetBackBtnAct(v51, v52, 0LL);
  }
  v53 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v53 = MasterMissionComponent_TypeInfo;
  }
  v54 = *(_QWORD *)v53->static_fields;
  this->fields.currentDispId = 0;
  *(_QWORD *)&this->fields.currentEventSvtId = v54;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entitys = (struct MstMissionEntity_array *)DataMasterBase_object__object__int___getEntitys(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                               (const MethodInfo_32AE2F4 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
  this->fields.mstMissionList = Entitys;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mstMissionList, (int32_t)Entitys, v56, v57);
  MasterMissionComponent__SetupShopBtn(this, v58);
  MasterMissionComponent__SetupCompleteBtn(this, v59);
  MasterMissionComponent__RefreshInfo(this, v60);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v62 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
  System_Action_int____ctor(v62, (Il2CppObject *)this, Method_MasterMissionComponent__Open_b__139_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v62, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v28);
    byte_4AFC38D = 1;
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
  v64 = *(TitleInfoControl_o **)&klass->_2.instance_size;
  if ( !v64 )
    goto LABEL_52;
  this->fields.isTerminalTouchEnabledBeforeOpen = TitleInfoControl__IsTouchEnable(
                                                    *(TitleInfoControl_o **)&klass->_2.instance_size,
                                                    0LL);
  TitleInfoControl__SetTouchEnable(v64, 1, 0LL);
  v65 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v65, 0LL);
}


void __fastcall MasterMissionComponent__OpenCompleteMission(
        MasterMissionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x19
  CompleteMissionComponent_ClickDelegate_o *v12; // x20
  __int64 v13; // x1
  MasterMissionComponent___c_c *mInstance; // x0
  System_Action_o *_9__148_0; // x21
  Il2CppObject *v16; // x22
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  TerminalSceneComponent_c *v20; // x0

  if ( (byte_4B04A86 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&CompleteMissionComponent_ClickDelegate_TypeInfo, v4);
    sub_1BC3008(&Method_MasterMissionComponent_ExitCompleteMission__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&SoundManager_TypeInfo, v7);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v8);
    sub_1BC3008(&Method_MasterMissionComponent___c__OpenCompleteMission_b__148_0__, v9);
    sub_1BC3008(&MasterMissionComponent___c_TypeInfo, v10);
    byte_4B04A86 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CompleteMissionComponent_ClickDelegate_o *)sub_1BC3254(CompleteMissionComponent_ClickDelegate_TypeInfo);
  CompleteMissionComponent_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ExitCompleteMission__,
    0LL);
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
    v16 = (Il2CppObject *)mInstance->static_fields->__9;
    _9__148_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(_9__148_0, v16, Method_MasterMissionComponent___c__OpenCompleteMission_b__148_0__, 0LL);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__148_0 = _9__148_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__148_0, (int32_t)_9__148_0, v18, v19);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v12, _9__148_0, 0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v13);
    byte_4AFC38D = 1;
  }
  v20 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v20 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v20->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_1BC3264(mInstance, v13);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0LL);
}


void __fastcall MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B04ABD & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B04ABD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  CommonUI__OpenTutorialImageDialog_30756884((CommonUI_o *)Instance, 42, 207, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall MasterMissionComponent__OpenPresentBox(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v9; // x21
  ScrTerminalListTop_o *v10; // x0
  __int64 v11; // x1
  QuestRewardItemAction_c *klass; // x8
  CommonUI_o *v13; // x19
  MasterMissionComponent_c *v14; // x8
  QuestRewardItemAction_c *v15; // x8

  if ( (byte_4B04AAD & 1) == 0 )
  {
    sub_1BC3008(&UserPresentBoxWindow_ClickDelegate_TypeInfo, method);
    sub_1BC3008(&Method_MasterMissionComponent__OpenPresentBox_b__192_0__, v3);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v7);
    byte_4B04AAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (UserPresentBoxWindow_ClickDelegate_o *)sub_1BC3254(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__192_0__,
    0LL);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v9, 0LL, 0LL);
  v10 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v10 )
    goto LABEL_28;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v10, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4AFC38D )
    {
      sub_1BC3008(&TerminalSceneComponent_TypeInfo, v11);
      byte_4AFC38D = 1;
    }
    v10 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.friendPointBoostItemAction->klass;
    if ( !klass )
      goto LABEL_28;
    v10 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
    if ( !v10 )
      goto LABEL_28;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth(v10, 0LL) )
    {
      v10 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = (CommonUI_o *)v10;
      v14 = MasterMissionComponent_TypeInfo;
      if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        v14 = MasterMissionComponent_TypeInfo;
      }
      if ( v13 )
      {
        CommonUI__SetUsrPresentListPos(v13, v14->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AFC38D )
        {
          sub_1BC3008(&TerminalSceneComponent_TypeInfo, v11);
          byte_4AFC38D = 1;
        }
        v10 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v10 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v15 = v10->fields.friendPointBoostItemAction->klass;
        if ( v15 )
        {
          v10 = *(ScrTerminalListTop_o **)&v15->_2.static_fields_size;
          if ( v10 )
          {
            ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v10, 0, 0LL);
            return;
          }
        }
      }
LABEL_28:
      sub_1BC3264(v10, v11);
    }
  }
}


void __fastcall MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B04ABA & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B04ABA = 1;
  }
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v5 = (Il2CppObject *)this->fields.btnEffectBasePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__Instantiate_object_(
           v5,
           (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = (struct UnityEngine_GameObject_o *)v6;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.btnEffectPrefab, (int32_t)v6, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0LL, 0LL) )
      GameObjectExtensions__SafeSetParent_35217712(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0LL);
  }
}


void __fastcall MasterMissionComponent__PresentBoxOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PresentBoxOverDialog_o *presentBoxOverDialog; // x20
  System_String_o *v8; // x21
  PresentBoxOverDialog_ClickDelegate_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B04AAC & 1) == 0 )
  {
    sub_1BC3008(&PresentBoxOverDialog_ClickDelegate_TypeInfo, method);
    sub_1BC3008(&LocalizationManager_TypeInfo, v3);
    sub_1BC3008(&Method_MasterMissionComponent__PresentBoxOver_b__191_0__, v4);
    sub_1BC3008(&StringLiteral_8476/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, v5);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4B04AAC = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8476/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0LL);
  v9 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1BC3254(PresentBoxOverDialog_ClickDelegate_TypeInfo);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__191_0__,
    0LL);
  if ( !presentBoxOverDialog )
    sub_1BC3264(v10, v11);
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1/*""*/, v8, v9, 26, 0LL);
}


void __fastcall MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_o *v13; // x22
  __int64 v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  struct System_Int32_array *receiveMissionIds; // x8
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v21; // x19
  System_Action_o *v22; // x21
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v24; // x19
  System_Action_o *v25; // x22

  if ( (byte_4B04AAB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v3);
    sub_1BC3008(&Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__0__, v4);
    sub_1BC3008(&Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__1__, v5);
    sub_1BC3008(&Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__2__, v6);
    sub_1BC3008(&MasterMissionComponent___c__DisplayClass190_0_TypeInfo, v7);
    byte_4B04AAB = 1;
  }
  v8 = sub_1BC3254(MasterMissionComponent___c__DisplayClass190_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass190_0___ctor((MasterMissionComponent___c__DisplayClass190_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_20;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v8,
    Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__0__,
    0LL);
  *(_QWORD *)(v8 + 24) = v13;
  v14 = v8 + 24;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 24), (int32_t)v13, v15, v16);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      AdManager__TrackEvent((AdManager_o *)Instance, 8, this->fields.nowType + 8, -1, -1, 0LL, 0LL);
    }
    if ( this->fields.isBoardTouch )
    {
      missionListViewManager = this->fields.missionListViewManager;
      if ( missionListViewManager )
      {
        nowType = this->fields.nowType;
        if ( (unsigned int)nowType >= missionListViewManager->max_length )
          sub_1BC326C(Instance, v10, v17);
        v21 = missionListViewManager->m_Items[nowType];
        v22 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(
          v22,
          (Il2CppObject *)v8,
          Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__1__,
          0LL);
        if ( v21 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v21, v22, 0LL);
          return;
        }
      }
LABEL_20:
      sub_1BC3264(Instance, v10);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v24 = this->fields.receiveMissionIds;
    v25 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v8,
      Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__2__,
      0LL);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v24, v25, 0LL);
  }
  else
  {
    if ( !*(_QWORD *)v14 )
      goto LABEL_20;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v14 + 64LL),
      *(_QWORD *)(*(_QWORD *)v14 + 40LL));
  }
}


void __fastcall MasterMissionComponent__RefreshInfo(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UILabel_o *stoneInfoLabel; // x21
  int32_t stone; // w20
  int32_t UserStoneFragmentNum; // w0
  UILabel_o *stoneFragmentsInfoLabel; // x21
  int32_t v14; // w20
  const MethodInfo *v15; // x2

  if ( (byte_4B04AB7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B04AB7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_13;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_13;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0LL),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v14 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0LL),
        !stoneFragmentsInfoLabel) )
  {
LABEL_13:
    sub_1BC3264(Instance, v9);
  }
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  MasterMissionComponent__UpdateStoneExchangeCount(this, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__RefreshMissionRewardItemInfo(
        MasterMissionComponent_o *this,
        bool isMissionRewardGet,
        const MethodInfo *method)
{
  MasterMissionComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionComponent_o *v11; // x21
  _BOOL4 v12; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x20
  MasterMissionComponent_c *v15; // x0
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  __int64 v17; // x9
  __int64 v18; // x10
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x19
  MasterMissionComponent_c *v22; // x0
  struct MasterMissionComponent_StaticFields *v23; // x8
  __int64 v24; // x9
  __int64 v25; // x10
  MasterMissionComponent_c *v26; // x0
  struct MasterMissionComponent_StaticFields *v27; // x8
  __int64 v28; // x9
  __int64 v29; // x10
  Il2CppObject *v30; // x19
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v33; // 0:s0.4,4:s1.4

  v4 = this;
  if ( (byte_4B04AC0 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__,
      isMissionRewardGet);
    sub_1BC3008(&FSUtility_TypeInfo, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_FSOffset___, v6);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v7);
    this = (MasterMissionComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4B04AC0 = 1;
  }
  missionListViewManager = v4->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_56;
  nowType = v4->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BC326C(this, isMissionRewardGet, method);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
    goto LABEL_56;
  this = (MasterMissionComponent_o *)MasterMissionListViewManager__GetRewardItemInfo(
                                       (MasterMissionListViewManager_o *)this,
                                       0LL);
  if ( !v4->fields.rewardInfoController )
    goto LABEL_56;
  v11 = this;
  MissionRewardInfoController__RefreshMissionRewardItemInfo(
    v4->fields.rewardInfoController,
    (System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *)this,
    isMissionRewardGet,
    0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__IsUnderVista(0LL);
  v12 = v11
     && System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)v11,
          (const MethodInfo_3308204 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__) > 0;
  this = (MasterMissionComponent_o *)v4->fields.helpBtn;
  if ( !this )
    goto LABEL_56;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (MasterMissionComponent_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !this )
    goto LABEL_56;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    v15 = MasterMissionComponent_TypeInfo;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v15 = MasterMissionComponent_TypeInfo;
    }
    static_fields = v15->static_fields;
    v17 = 140LL;
    if ( !v12 )
      v17 = 132LL;
    if ( v12 )
      v18 = 136LL;
    else
      v18 = 128LL;
    LODWORD(v31.fields.x) = *(int32_t *)((char *)&static_fields->DEFAULT_SVT_ID + v18);
    LODWORD(v31.fields.y) = *(int32_t *)((char *)&static_fields->DEFAULT_SVT_ID + v17);
    GameObjectExtensions__SetLocalPosition_35211816(v14, v31, 0LL);
    if ( !v14 )
      goto LABEL_56;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v14,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MasterMissionComponent_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_56;
      FSOffset__AddOffsetX((FSOffset_o *)Component_object, 0LL);
      FSOffset__AddBottomY((FSOffset_o *)Component_object, 0LL);
    }
  }
  this = (MasterMissionComponent_o *)v4->fields.playBtnImg;
  if ( !this )
    goto LABEL_56;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (MasterMissionComponent_o *)GameObjectExtensions__GetParent(v20, 0LL);
  if ( !this )
    goto LABEL_56;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL) )
  {
    v22 = MasterMissionComponent_TypeInfo;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v22 = MasterMissionComponent_TypeInfo;
    }
    v23 = v22->static_fields;
    v24 = 156LL;
    if ( !v12 )
      v24 = 148LL;
    if ( v12 )
      v25 = 152LL;
    else
      v25 = 144LL;
    LODWORD(v32.fields.x) = *(int32_t *)((char *)&v23->DEFAULT_SVT_ID + v25);
    LODWORD(v32.fields.y) = *(int32_t *)((char *)&v23->DEFAULT_SVT_ID + v24);
    GameObjectExtensions__SetLocalPosition_35211816(v21, v32, 0LL);
    v26 = MasterMissionComponent_TypeInfo;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v26 = MasterMissionComponent_TypeInfo;
    }
    v27 = v26->static_fields;
    v28 = 172LL;
    if ( !v12 )
      v28 = 164LL;
    if ( v12 )
      v29 = 168LL;
    else
      v29 = 160LL;
    LODWORD(v33.fields.x) = *(int32_t *)((char *)&v27->DEFAULT_SVT_ID + v29);
    LODWORD(v33.fields.y) = *(int32_t *)((char *)&v27->DEFAULT_SVT_ID + v28);
    GameObjectExtensions__SetLocalScale_35213824(v21, v33, 0LL);
    if ( !v21 )
      goto LABEL_56;
    v30 = UnityEngine_GameObject__GetComponent_object_(
            v21,
            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MasterMissionComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v30 )
      {
        FSOffset__AddOffsetX((FSOffset_o *)v30, 0LL);
        FSOffset__AddBottomY((FSOffset_o *)v30, 0LL);
        return;
      }
LABEL_56:
      sub_1BC3264(this, isMissionRewardGet);
    }
  }
}


void __fastcall MasterMissionComponent__ReleaseSvtVoiceData(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B04AB1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v6);
    sub_1BC3008(&SoundManager_TypeInfo, v7);
    byte_4B04AB1 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)currentVoiceDataList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v9 )
        break;
      if ( !v17.fields._current )
        sub_1BC3264(v9, v10);
      klass = v17.fields._current[1].klass;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__releaseAudioAssetStorage((System_String_o *)klass, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v14 = this->fields.currentVoiceDataList;
    if ( !v14 )
      sub_1BC3264(v12, v13);
    size = v14->fields._size;
    v16 = v14->fields._version + 1;
    v14->fields._size = 0;
    v14->fields._version = v16;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
  }
}


void __fastcall MasterMissionComponent__RequestMissionReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4B04AA8 & 1) == 0 )
  {
    sub_1BC3008(&Method_MasterMissionComponent_missionRewardCallback__, method);
    sub_1BC3008(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4B04AA8 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_object )
    sub_1BC3264(0LL, v8);
  EventMissionClearRewardRequest__beginRequest_43176300(
    (EventMissionClearRewardRequest_o *)Request_object,
    this->fields.sendMissionIds,
    0LL);
}


void __fastcall MasterMissionComponent__RestoreTerminalTouchEnabledBeforeOpen(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  UnityEngine_Object_c *klass; // x0
  _BOOL8 v7; // x1
  bool IsTouchEnable; // w0

  if ( (byte_4B04AB6 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B04AB6 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !mInstance
      || (klass = mInstance[10].klass) == 0LL
      || (IsTouchEnable = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)klass, 0LL),
          v7 = IsTouchEnable,
          this->fields.isTerminalTouchEnabledBeforeOpen = IsTouchEnable,
          (klass = mInstance[10].klass) == 0LL) )
    {
      sub_1BC3264(klass, v7);
    }
    TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)klass, v7, 0LL);
  }
}


void __fastcall MasterMissionComponent__ServantOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t overflowType; // w22
  UserPresentBoxErrorDialog_o *servantOverDialog; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  UserPresentBoxErrorDialog_o *v10; // x20
  System_Action_T__o *v11; // x21
  int32_t v12; // w1

  if ( (byte_4B04AAE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_SceneList_Type__TypeInfo, method);
    sub_1BC3008(&LocalizationManager_TypeInfo, v3);
    sub_1BC3008(&Method_MasterMissionComponent_ServantOverDialogClose__, v4);
    sub_1BC3008(&StringLiteral_8486/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, v5);
    byte_4B04AAE = 1;
  }
  overflowType = this->fields.overflowType;
  servantOverDialog = this->fields.servantOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8486/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0LL);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v8, 0LL),
        v10 = this->fields.servantOverDialog,
        v11 = (System_Action_T__o *)sub_1BC3254(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(
          v11,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          0LL),
        !v10)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v10, (System_Action_SceneList_Type__o *)v11, 0LL),
        (v8 = (System_String_o *)this->fields.servantOverDialog) == 0LL) )
  {
    sub_1BC3264(v8, v9);
  }
  if ( overflowType == 4 )
    v12 = 2;
  else
    v12 = overflowType == 2;
  UserPresentBoxErrorDialog__setJumpType((UserPresentBoxErrorDialog_o *)v8, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__ServantOverDialogClose(
        MasterMissionComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  System_Action_T__o *v9; // x22
  CommonUI_o *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B04AAF & 1) == 0 )
  {
    sub_1BC3008(&System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&type);
    sub_1BC3008(&Method_MasterMissionComponent_ServantOverDialogClose__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_3407/*"CLICK_CANCEL"*/, v7);
    byte_4B04AAF = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v9 = (System_Action_T__o *)sub_1BC3254(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v9, (Il2CppObject *)this, Method_MasterMissionComponent_ServantOverDialogClose__, 0LL);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v9, 0LL);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0LL);
      return;
    }
LABEL_9:
    sub_1BC3264(Instance, v11);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3407/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall MasterMissionComponent__SetAfterAction(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionComponent_o *v5; // x19
  const MethodInfo *v6; // x2

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  v5 = this;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BC326C(this, method, v2);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1BC3264(this, method);
  MasterMissionListViewManager__setAfterAction(
    (MasterMissionListViewManager_o *)this,
    v5->fields.receiveMissionIds,
    0LL);
  MasterMissionComponent__RefreshMissionRewardItemInfo(v5, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__SetBtnEnable(
        MasterMissionComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dailyTabObj; // x0
  bool v6; // w20

  if ( (byte_4B04AB2 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_4B04AB2 = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !dailyTabObj
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)dailyTabObj, isEnable, 0LL),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.shopBtn) == 0LL)
    || (dailyTabObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dailyTabObj, 0LL)) == 0LL
    || (dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    dailyTabObj,
                                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (v6 = isEnable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn) == 0LL) )
  {
LABEL_17:
    sub_1BC3264(dailyTabObj, isEnable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL);
}


void __fastcall MasterMissionComponent__SetDailyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *VaildDailyMissionData; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v8; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v9; // x21
  struct MasterMissionListViewManager_array *v10; // x8
  MissionListViewManager_o *v11; // x19

  if ( (byte_4B04A95 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v3);
    byte_4B04A95 = 1;
  }
  EventRewardSaveData__LoadDailyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( !missionListViewManager->max_length )
    goto LABEL_14;
  v8 = missionListViewManager->m_Items[0];
  VaildDailyMissionData = (System_Int32_array *)MasterMissionComponent__getVaildDailyMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v9 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildDailyMissionData;
  VaildDailyMissionData = System_Collections_Generic_List_int___ToArray(
                            this->fields.currentEventIdList,
                            (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v8, v9, VaildDailyMissionData, 0, this->fields.reDispAction, 0LL);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_13;
  if ( !v10->max_length )
LABEL_14:
    sub_1BC326C(VaildDailyMissionData, v5, v6);
  v11 = (MissionListViewManager_o *)v10->m_Items[0];
  VaildDailyMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v11 )
LABEL_13:
    sub_1BC3264(VaildDailyMissionData, v5);
  MissionListViewManager__SetMode_46121784(
    v11,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetExtraMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *ValidExtraMissionData; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v8; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v9; // x21
  struct MasterMissionListViewManager_array *v10; // x8
  MissionListViewManager_o *v11; // x19

  if ( (byte_4B04A97 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v3);
    byte_4B04A97 = 1;
  }
  EventRewardSaveData__LoadExtraMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( missionListViewManager->max_length <= 2 )
    goto LABEL_14;
  v8 = missionListViewManager->m_Items[2];
  ValidExtraMissionData = (System_Int32_array *)MasterMissionComponent__getValidExtraMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v9 = (System_Collections_Generic_List_EventMissionEntity__o *)ValidExtraMissionData;
  ValidExtraMissionData = System_Collections_Generic_List_int___ToArray(
                            this->fields.currentEventIdList,
                            (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v8, v9, ValidExtraMissionData, 2, this->fields.reDispAction, 0LL);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_13;
  if ( v10->max_length <= 2 )
LABEL_14:
    sub_1BC326C(ValidExtraMissionData, v5, v6);
  v11 = (MissionListViewManager_o *)v10->m_Items[2];
  ValidExtraMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v11 )
LABEL_13:
    sub_1BC3264(ValidExtraMissionData, v5);
  MissionListViewManager__SetMode_46121784(
    v11,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetLimitedMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *VaildLimitedMissionData; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v8; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v9; // x21
  struct MasterMissionListViewManager_array *v10; // x8
  MissionListViewManager_o *v11; // x19

  if ( (byte_4B04A98 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v3);
    byte_4B04A98 = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( missionListViewManager->max_length <= 3 )
    goto LABEL_14;
  v8 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = (System_Int32_array *)MasterMissionComponent__getVaildLimitedMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v9 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildLimitedMissionData;
  VaildLimitedMissionData = System_Collections_Generic_List_int___ToArray(
                              this->fields.currentEventIdList,
                              (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v8, v9, VaildLimitedMissionData, 3, this->fields.reDispAction, 0LL);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_13;
  if ( v10->max_length <= 3 )
LABEL_14:
    sub_1BC326C(VaildLimitedMissionData, v5, v6);
  v11 = (MissionListViewManager_o *)v10->m_Items[3];
  VaildLimitedMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v11 )
LABEL_13:
    sub_1BC3264(VaildLimitedMissionData, v5);
  MissionListViewManager__SetMode_46121784(
    v11,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetLimitedMissionRestTime(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *limitedMissionAnnouncementComponent; // x20
  __int64 v4; // x1
  LimitedMissionAnnouncementComponent_o *v5; // x0

  if ( (byte_4B04ABF & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B04ABF = 1;
  }
  limitedMissionAnnouncementComponent = (UnityEngine_Object_o *)this->fields.limitedMissionAnnouncementComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(limitedMissionAnnouncementComponent, 0LL, 0LL) )
  {
    v5 = this->fields.limitedMissionAnnouncementComponent;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
    LimitedMissionAnnouncementComponent__mfInitUserData(v5, 0LL);
  }
}


void __fastcall MasterMissionComponent__SetMissionClearNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  MstMissionEntity_array *EnableMissions; // x22
  __int64 v10; // x2
  int max_length; // w8
  EventMissionMaster_o *v12; // x24
  unsigned int v13; // w26
  int32_t v14; // w20
  int32_t v15; // w21
  int32_t v16; // w23
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x25
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3

  if ( (byte_4B04A93 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B04A93 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_34;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v12 = (EventMissionMaster_o *)Instance;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BC326C(Instance, v8, v10);
      v17 = &EnableMissions->obj.klass + (int)v13;
      v18 = v17[4];
      if ( !v18 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v17[4], 0LL);
      switch ( (_DWORD)Instance )
      {
        case 5:
          if ( !v12 )
            goto LABEL_34;
          ClearMasterMissionList = (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                          v12,
                                                                                          HIDWORD(v18->_1.name),
                                                                                          5,
                                                                                          0LL);
          Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_object_(
                                        ClearMasterMissionList,
                                        (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          3,
                                          v21);
            v14 += (int)Instance;
          }
          break;
        case 4:
          if ( !v12 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__GetExtraMissionList(v12, HIDWORD(v18->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          2,
                                          v22);
            v15 += (int)Instance;
          }
          break;
        case 2:
          if ( !v12 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__GetWeeklyMasterMissionList(v12, HIDWORD(v18->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          1,
                                          v19);
            v16 += (int)Instance;
          }
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_1BC3264(Instance, v8);
  }
  v16 = 0;
  v15 = 0;
  v14 = 0;
LABEL_30:
  Instance = (DataManager_o *)this->fields.weeklyClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v16, 0LL);
  Instance = (DataManager_o *)this->fields.extraClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v15, 0LL);
  Instance = (DataManager_o *)this->fields.limitedClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v14, 0LL);
}


void __fastcall MasterMissionComponent__SetMissionDisp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterMissionComponent_o *v3; // x19
  int32_t nowType; // w21
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  struct MasterMissionListViewManager_array *v6; // x8
  struct MasterMissionListViewManager_array *v7; // x8
  struct MasterMissionListViewManager_array *v8; // x8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  struct MasterMissionListViewManager_array *v11; // x8
  struct MasterMissionListViewManager_array *v12; // x8
  struct MasterMissionListViewManager_array *v13; // x8
  struct MasterMissionListViewManager_array *v14; // x8
  const MethodInfo *v15; // x1
  struct MasterMissionListViewManager_array *v16; // x8
  struct MasterMissionListViewManager_array *v17; // x8
  struct MasterMissionListViewManager_array *v18; // x8
  struct MasterMissionListViewManager_array *v19; // x8
  const MethodInfo *v20; // x1
  struct MasterMissionListViewManager_array *v21; // x8
  struct MasterMissionListViewManager_array *v22; // x8
  struct MasterMissionListViewManager_array *v23; // x8
  struct MasterMissionListViewManager_array *v24; // x8
  const MethodInfo *v25; // x1
  MissionRewardInfoController_o *rewardInfoController; // x20
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1

  v3 = this;
  if ( (byte_4B04A99 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BC3008(&MasterMissionComponent_TypeInfo, method);
    byte_4B04A99 = 1;
  }
  nowType = v3->fields.nowType;
  switch ( nowType )
  {
    case 0:
      missionListViewManager = v3->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_88;
      if ( !missionListViewManager->max_length )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)missionListViewManager->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v6 = v3->fields.missionListViewManager;
      if ( !v6 )
        goto LABEL_88;
      if ( v6->max_length <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v6->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v7 = v3->fields.missionListViewManager;
      if ( !v7 )
        goto LABEL_88;
      if ( v7->max_length <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v7->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v8 = v3->fields.missionListViewManager;
      if ( !v8 )
        goto LABEL_88;
      if ( v8->max_length <= 3 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v8->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, void *))this->klass[1]._1.namespaze)(
        this,
        0LL,
        this->klass[1]._1.byval_arg.data);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        3LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      MasterMissionComponent__SetDailyMissionList(v3, v9);
      break;
    case 1:
      v11 = v3->fields.missionListViewManager;
      if ( !v11 )
        goto LABEL_88;
      if ( !v11->max_length )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v11->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v12 = v3->fields.missionListViewManager;
      if ( !v12 )
        goto LABEL_88;
      if ( v12->max_length <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v12->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v13 = v3->fields.missionListViewManager;
      if ( !v13 )
        goto LABEL_88;
      if ( v13->max_length <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v13->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v14 = v3->fields.missionListViewManager;
      if ( !v14 )
        goto LABEL_88;
      if ( v14->max_length <= 3 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v14->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, void *))this->klass[1]._1.namespaze)(
        this,
        1LL,
        this->klass[1]._1.byval_arg.data);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        0LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      MasterMissionComponent__SetWeeklyMissionList(v3, v15);
      break;
    case 2:
      v16 = v3->fields.missionListViewManager;
      if ( !v16 )
        goto LABEL_88;
      if ( !v16->max_length )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v17 = v3->fields.missionListViewManager;
      if ( !v17 )
        goto LABEL_88;
      if ( v17->max_length <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v17->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v18 = v3->fields.missionListViewManager;
      if ( !v18 )
        goto LABEL_88;
      if ( v18->max_length <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v18->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v19 = v3->fields.missionListViewManager;
      if ( !v19 )
        goto LABEL_88;
      if ( v19->max_length <= 3 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v19->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, void *))this->klass[1]._1.namespaze)(
        this,
        0LL,
        this->klass[1]._1.byval_arg.data);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        3LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      MasterMissionComponent__SetExtraMissionList(v3, v20);
      break;
    case 3:
      v21 = v3->fields.missionListViewManager;
      if ( !v21 )
        goto LABEL_88;
      if ( !v21->max_length )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v21->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v22 = v3->fields.missionListViewManager;
      if ( !v22 )
        goto LABEL_88;
      if ( v22->max_length <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v22->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v23 = v3->fields.missionListViewManager;
      if ( !v23 )
        goto LABEL_88;
      if ( v23->max_length <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v23->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v24 = v3->fields.missionListViewManager;
      if ( !v24 )
        goto LABEL_88;
      if ( v24->max_length <= 3 )
LABEL_89:
        sub_1BC326C(this, method, v2);
      this = (MasterMissionComponent_o *)v24->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, void *))this->klass[1]._1.namespaze)(
        this,
        0LL,
        this->klass[1]._1.byval_arg.data);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        3LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      MasterMissionComponent__SetLimitedMissionList(v3, v25);
      break;
    default:
      goto LABEL_81;
  }
  MasterMissionComponent__checkIsOpen(v3, v10);
  nowType = v3->fields.nowType;
LABEL_81:
  rewardInfoController = v3->fields.rewardInfoController;
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( (unsigned int)(nowType - 1) > 2 )
    method = (const MethodInfo *)(&dword_0 + 3);
  else
    method = (const MethodInfo *)dword_C18F8C[nowType - 1];
  if ( !rewardInfoController )
LABEL_88:
    sub_1BC3264(this, method);
  MissionRewardInfoController__SetRewardItemTitle(rewardInfoController, (int32_t)method, 0LL);
  MasterMissionComponent__RefreshMissionRewardItemInfo(v3, 0, v27);
  MasterMissionComponent__setMissionCompleteNum(v3, v28);
}


void __fastcall MasterMissionComponent__SetWeeklyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *VaildWeeklyMissionData; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v8; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v9; // x21
  struct MasterMissionListViewManager_array *v10; // x8
  MissionListViewManager_o *v11; // x19

  if ( (byte_4B04A96 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v3);
    byte_4B04A96 = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( missionListViewManager->max_length <= 1 )
    goto LABEL_14;
  v8 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = (System_Int32_array *)MasterMissionComponent__getVaildWeeklyMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v9 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildWeeklyMissionData;
  VaildWeeklyMissionData = System_Collections_Generic_List_int___ToArray(
                             this->fields.currentEventIdList,
                             (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v8, v9, VaildWeeklyMissionData, 1, this->fields.reDispAction, 0LL);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_13;
  if ( v10->max_length <= 1 )
LABEL_14:
    sub_1BC326C(VaildWeeklyMissionData, v5, v6);
  v11 = (MissionListViewManager_o *)v10->m_Items[1];
  VaildWeeklyMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v11 )
LABEL_13:
    sub_1BC3264(VaildWeeklyMissionData, v5);
  MissionListViewManager__SetMode_46121784(
    v11,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetupCompleteBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentCompleteMissionList; // x21
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *MasterData_object; // x22
  MstMissionEntity_array *EnableMissions; // x23
  __int64 v26; // x2
  int max_length; // w8
  UserEventMissionMaster_o *v28; // x25
  unsigned int v29; // w28
  int32_t v30; // w20
  MstMissionEntity_o *v31; // x24
  const MethodInfo *v32; // x3
  DataManager_o *v33; // x27
  int32_t CompleteMissionClearCount; // w26
  int32_t m_CancellationTokenSource; // w25
  __int64 v36; // x8
  int32_t v37; // w23
  MasterMissionComponent_MasterMissionInfoItem_o *v38; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v44; // x8
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  Il2CppObject *cNoticeNumberPrefab; // x22
  Il2CppObject *v48; // x22
  Il2CppObject *Component_object; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UIWidget_o *v52; // x22
  struct NoticeNumberComponent_o *v53; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v55; // x1

  if ( (byte_4B04A82 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v9);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v10);
    sub_1BC3008(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v11);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B04A82 = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = &this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    size = currentCompleteMissionList->fields._size;
    v18 = currentCompleteMissionList->fields._version + 1;
    currentCompleteMissionList->fields._size = 0;
    currentCompleteMissionList->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentCompleteMissionList->fields._items, 0, size, 0LL);
  }
  else
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v19;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentCompleteMissionList, (int32_t)v19, v20, v21);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_48;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_48;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v30 = 0;
  }
  else
  {
    v28 = (UserEventMissionMaster_o *)Instance;
    v29 = 0;
    v30 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        goto LABEL_49;
      v31 = EnableMissions->m_Items[v29];
      if ( !v31 )
        goto LABEL_48;
      if ( !MasterData_object )
        goto LABEL_48;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    (EventMissionMaster_o *)MasterData_object,
                                    v31->fields.id,
                                    0LL);
      if ( !Instance )
        goto LABEL_48;
      v33 = Instance;
      if ( Instance->fields.m_CancellationTokenSource )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)Instance,
                                      (EventMissionEntity_array *)Instance,
                                      v26,
                                      v32);
        v30 += CompleteMissionClearCount;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v31, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_33;
    }
    if ( !v28 )
      goto LABEL_48;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v28, v31->fields.id, 0LL);
    m_CancellationTokenSource = (int32_t)v33->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
LABEL_49:
      sub_1BC326C(Instance, v23, v26);
    v36 = *(_QWORD *)&v33->fields._DispLog;
    if ( !v36 )
      goto LABEL_48;
    v37 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_48;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v36 + 28), 0LL);
    Instance = (DataManager_o *)this->fields.completeMissionIcon;
    if ( !Instance )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v38 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1BC3254(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    MasterMissionComponent_MasterMissionInfoItem___ctor(
      v38,
      v31,
      m_CancellationTokenSource,
      CompleteMissionClearCount,
      v37,
      0LL);
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_48;
    v41 = *(_QWORD *)&Instance->fields.m_CachedPtr;
    v42 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v41 )
      goto LABEL_48;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v41 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v38,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = v41 + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v44 + 32) = v38;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v38, v39, v40);
    }
  }
LABEL_33:
  mCompleteMissionNoticeNumber = (UnityEngine_Object_o *)this->fields.mCompleteMissionNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mCompleteMissionNoticeNumber = &this->fields.mCompleteMissionNoticeNumber;
  if ( UnityEngine_Object__op_Equality(mCompleteMissionNoticeNumber, 0LL, 0LL) )
  {
    cNoticeNumberPrefab = (Il2CppObject *)this->fields.cNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v48 = UnityEngine_Object__Instantiate_object_(
            cNoticeNumberPrefab,
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_35217712(
      (UnityEngine_GameObject_o *)v48,
      this->fields.completeMissionNoticeRoot,
      0LL);
    if ( v48 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v48,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
      sub_1BC2FAC(
        (CGThumbnailListItem_o *)&this->fields.mCompleteMissionNoticeNumber,
        (int32_t)Component_object,
        v50,
        v51);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
        v52 = (UIWidget_o *)Instance;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        if ( v52 )
        {
          UIWidget__set_depth(v52, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
          UIWidget__set_width(v52, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
          UIWidget__set_height(v52, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
          v53 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v53->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v53->fields.numberLabel,
                MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH + 1,
                0LL);
              UILabel__set_fontSize(
                numberLabel,
                MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE,
                0LL);
              UIWidget__set_width(
                (UIWidget_o *)numberLabel,
                MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_LABEL_WIDTH,
                0LL);
              goto LABEL_46;
            }
          }
        }
      }
    }
LABEL_48:
    sub_1BC3264(Instance, v23);
  }
LABEL_46:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_48;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v30, 0LL);
  MasterMissionComponent__InitCompleteMissionLb(this, v55);
}


void __fastcall MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  UISprite_o *shopBtnSp; // x20

  if ( (byte_4B04A81 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BC3008(&StringLiteral_17327/*"btn_event_3"*/, v5);
    byte_4B04A81 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v7);
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0LL);
  shopBtnSp = this->fields.shopBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_17327/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
}


bool __fastcall MasterMissionComponent__ShouldPlayedStoneButtonEffect(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  int32_t UserStoneFragmentNum; // w0
  const MethodInfo *v7; // x2
  int32_t ExchangeStoneCount; // w19

  if ( (byte_4B04AB9 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    byte_4B04AB9 = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v5);
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, UserStoneFragmentNum, v7);
  return ExchangeStoneCount >= StoneShopMaster__GetPayMultiTimePrice(0LL);
}


void __fastcall MasterMissionComponent__StopStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o **p_btnEffectPrefab; // x19
  UnityEngine_GameObject_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B04ABB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B04ABB = 1;
  }
  btnEffectPrefab = (UnityEngine_Object_o *)this->fields.btnEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(btnEffectPrefab, 0LL, 0LL) )
  {
    p_btnEffectPrefab = &this->fields.btnEffectPrefab;
    if ( !*p_btnEffectPrefab )
      sub_1BC3264(0LL, v4);
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0LL);
    v6 = *p_btnEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)v6, 0LL);
    *p_btnEffectPrefab = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_btnEffectPrefab, 0, v7, v8);
  }
}


void __fastcall MasterMissionComponent__UnAcceptableRewardDlg(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BC326C(this, method, v2);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1BC3264(this, method);
  MasterMissionListViewManager__unAcceptableDlg((MasterMissionListViewManager_o *)this, 0LL);
}


void __fastcall MasterMissionComponent__Update(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !this->fields.isOpenOverDlg )
  {
    MasterMissionComponent__reDispMissionList(this, method);
    MasterMissionComponent__InitCompleteMissionLb(this, v3);
  }
}


void __fastcall MasterMissionComponent__UpdateEventInfos(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B04AB5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v2);
    byte_4B04AB5 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
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
  v5 = UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( v5 )
  {
    if ( !mInstance )
      sub_1BC3264(v5, v6);
    TerminalSceneComponent__UpdateTitleEventInfo((TerminalSceneComponent_o *)mInstance, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__UpdateStoneExchangeCount(
        MasterMissionComponent_o *this,
        int32_t fragmentCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_o *stoneConvertLimit; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  int32_t ExchangeStoneCount; // w0
  int32_t v18; // w23
  MasterMissionComponent_c *v19; // x0
  UILabel_o *stoneConvertCount; // x22
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v22; // w1
  UnityEngine_Object_o *btnEffectBasePrefab; // x22
  const MethodInfo *v24; // x1
  AssetLoader_LoadEndDataHandler_o *v25; // x19
  int32_t v26; // w20
  const MethodInfo *v27; // x1
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B04AB8 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, *(_QWORD *)&fragmentCount);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&Method_MasterMissionComponent___c__DisplayClass207_0__UpdateStoneExchangeCount_b__0__, v8);
    sub_1BC3008(&MasterMissionComponent___c__DisplayClass207_0_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_5820/*"Effect/Common"*/, v10);
    byte_4B04AB8 = 1;
  }
  v28 = 0;
  v11 = sub_1BC3254(MasterMissionComponent___c__DisplayClass207_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass207_0___ctor((MasterMissionComponent___c__DisplayClass207_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_27;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v16);
  *(_DWORD *)(v11 + 24) = ExchangeStoneCount;
  v18 = ExchangeStoneCount;
  v19 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v19 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v19->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v18 > STONE_EXCHENGE_DISP_LIMIT )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
    }
    v28 = STONE_EXCHENGE_DISP_LIMIT;
    stoneConvertLimit = System_Int32__ToString((int32_t)&v28, 0LL);
    if ( stoneConvertCount )
    {
      UILabel__set_text(stoneConvertCount, stoneConvertLimit, 0LL);
      stoneConvertLimit = (System_String_o *)this->fields.stoneConvertLimit;
      if ( stoneConvertLimit )
      {
        stoneConvertLimit = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)stoneConvertLimit,
                                                 0LL);
        if ( stoneConvertLimit )
        {
          v22 = 1;
          goto LABEL_17;
        }
      }
    }
LABEL_27:
    sub_1BC3264(stoneConvertLimit, v13);
  }
  stoneConvertLimit = System_Int32__ToString((int)v11 + 24, 0LL);
  if ( !stoneConvertCount )
    goto LABEL_27;
  UILabel__set_text(stoneConvertCount, stoneConvertLimit, 0LL);
  stoneConvertLimit = (System_String_o *)this->fields.stoneConvertLimit;
  if ( !stoneConvertLimit )
    goto LABEL_27;
  stoneConvertLimit = (System_String_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)stoneConvertLimit,
                                           0LL);
  if ( !stoneConvertLimit )
    goto LABEL_27;
  v22 = 0;
LABEL_17:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneConvertLimit, v22, 0LL);
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v25,
      (Il2CppObject *)v11,
      Method_MasterMissionComponent___c__DisplayClass207_0__UpdateStoneExchangeCount_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5820/*"Effect/Common"*/, v25, 1, 0LL);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v24);
    if ( this->fields.nowType == 1 )
    {
      v26 = *(_DWORD *)(v11 + 24);
      if ( v26 >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v27);
    }
  }
}


void __fastcall MasterMissionComponent___AcceptReward_b__189_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MasterMissionComponent__SetBtnEnable(this, 1, v2);
}


void __fastcall MasterMissionComponent___LoadNotificationEnd_b__140_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  this->fields.endFadein = 1;
}


void __fastcall MasterMissionComponent___OnClickCompleteMissionBtn_b__149_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B04AC3 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B04AC3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  MasterMissionComponent__OpenCompleteMission(this, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___OpenPresentBox_b__192_0(
        MasterMissionComponent_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  ConnectMark_c *klass; // x8
  ConnectMark_c *v11; // x8
  __int64 *v12; // x8

  if ( (byte_4B04AC5 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, hasGetServant);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_11547/*"SERVANT_OVER"*/, v6);
    sub_1BC3008(&StringLiteral_3407/*"CLICK_CANCEL"*/, v7);
    byte_4B04AC5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_24;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v9);
    byte_4AFC38D = 1;
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
  Instance = *(CommonUI_o **)&klass->_2.static_fields_size;
  if ( !Instance )
    goto LABEL_29;
  if ( !ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)Instance, 0LL) )
    goto LABEL_24;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v9);
    byte_4AFC38D = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v11 = Instance->fields.connectMark->klass;
  if ( !v11 || (Instance = *(CommonUI_o **)&v11->_2.static_fields_size) == 0LL )
LABEL_29:
    sub_1BC3264(Instance, v9);
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0LL);
LABEL_24:
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_29;
  if ( this->fields.overflowType )
    v12 = &StringLiteral_11547/*"SERVANT_OVER"*/;
  else
    v12 = &StringLiteral_3407/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___Open_b__139_0(
        MasterMissionComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4B04AC2 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4B04AC2 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_1BC3264(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___PresentBoxOver_b__191_0(
        MasterMissionComponent_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  System_Action_o *v13; // x20

  if ( (byte_4B04AC4 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isPresentBoxOpen);
    sub_1BC3008(&Method_MasterMissionComponent___c__DisplayClass191_0__PresentBoxOver_b__1__, v5);
    sub_1BC3008(&MasterMissionComponent___c__DisplayClass191_0_TypeInfo, v6);
    byte_4B04AC4 = 1;
  }
  v7 = sub_1BC3254(MasterMissionComponent___c__DisplayClass191_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass191_0___ctor((MasterMissionComponent___c__DisplayClass191_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v7 + 16) = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v7,
          Method_MasterMissionComponent___c__DisplayClass191_0__PresentBoxOver_b__1__,
          0LL),
        !presentBoxOverDialog) )
  {
    sub_1BC3264(v8, v9);
  }
  PresentBoxOverDialog__Close_31531308(presentBoxOverDialog, v13, 0LL);
}


void __fastcall MasterMissionComponent___setRecieveModifyItem_b__195_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B04AC6 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_5392/*"END_DISP"*/, method);
    byte_4B04AC6 = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v3);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v4);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BC3264(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5392/*"END_DISP"*/, 0LL);
}


void __fastcall MasterMissionComponent__checkIsOpen(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  MstMissionDisplayInfoMaster_o *v14; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct MstMissionMaster_o *mstMissionMst; // x8
  _BOOL4 v19; // w22
  _BOOL4 v20; // w23
  int32_t v21; // w1
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 *v25; // x24
  __int64 *v26; // x8
  struct System_String_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_String_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4B04A8A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v3);
    sub_1BC3008(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__,
      v4);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_8734/*"MST_REMISSON_MSG"*/, v7);
    sub_1BC3008(&StringLiteral_8732/*"MST_REDISP_MSG"*/, v8);
    sub_1BC3008(&StringLiteral_1/*""*/, v9);
    sub_1BC3008(&StringLiteral_8735/*"MST_REMISSON_TITLE_TXT"*/, v10);
    sub_1BC3008(&StringLiteral_8733/*"MST_REDISP_TITLE_TXT"*/, v11);
    byte_4B04A8A = 1;
  }
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !Instance )
    goto LABEL_28;
  v14 = (MstMissionDisplayInfoMaster_o *)Instance;
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)v14->fields.list;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  mstMissionMst = this->fields.mstMissionMst;
  if ( !mstMissionMst )
    goto LABEL_28;
  this->fields.currentType = mstMissionMst->fields.currentType;
  if ( Instance && Instance->fields.m_CancellationTokenSource && !MstMissionMaster__IsOpenNow(mstMissionMst, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mstMissionMst;
    if ( Instance )
    {
      v19 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0LL);
      goto LABEL_11;
    }
LABEL_28:
    sub_1BC3264(Instance, v13);
  }
  LOBYTE(v19) = 0;
LABEL_11:
  if ( list
    && System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__) >= 1
    && !MstMissionDisplayInfoMaster__IsOpenNow(v14, 0LL) )
  {
    v20 = !MstMissionDisplayInfoMaster__IsBefOpenTime(v14, 0LL);
  }
  else
  {
    LOBYTE(v20) = 0;
  }
  v21 = (int)StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.titleTxt, v21, v16, v17);
  v22 = (int)StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.msgTxt, v22, v23, v24);
  if ( v19 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = &StringLiteral_8734/*"MST_REMISSON_MSG"*/;
    v26 = &StringLiteral_8735/*"MST_REMISSON_TITLE_TXT"*/;
LABEL_23:
    v27 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
    this->fields.titleTxt = v27;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.titleTxt, (int32_t)v27, v28, v29);
    v30 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
    this->fields.msgTxt = v30;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.msgTxt, (int32_t)v30, v31, v32);
    goto LABEL_24;
  }
  if ( v20 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = &StringLiteral_8732/*"MST_REDISP_MSG"*/;
    v26 = &StringLiteral_8733/*"MST_REDISP_TITLE_TXT"*/;
    goto LABEL_23;
  }
LABEL_24:
  this->fields.isNotNext = v19 || v20;
}


void __fastcall MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_1BC3264(0LL, method);
  StandFigureBack__DestroyFigure(standFigureBack, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildDailyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v23; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v26; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v28; // x20
  __int64 v29; // x2
  struct MstMissionEntity_array *mstMissionList; // x24
  int max_length; // w8
  unsigned int v32; // w25
  Il2CppClass **v33; // x8
  Il2CppClass *v34; // x23
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  __int64 v44; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  MstMissionDisplayInfoEntity_o *v54; // x0
  __int64 v55; // x1
  MstMissionDisplayInfoEntity_o *v56; // x24
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v63; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  int v72; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v74; // w21

  v3 = this;
  if ( (byte_4B04A8C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__,
      v7);
    sub_1BC3008(&System_IDisposable_TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v18);
    sub_1BC3008(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v19);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v20);
    this = (MasterMissionComponent_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B04A8C = 1;
  }
  currentEventIdList = v3->fields.currentEventIdList;
  v3->fields.currentIdx = 0;
  v3->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v23 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v23;
  currentMstMissionEntList = v3->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = currentMstMissionEntList->fields._size;
  v26 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v26;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v3->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, 0, size, v2);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v3->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
        sub_1BC326C(this, method, v29);
      v33 = &mstMissionList->obj.klass + (int)v32;
      v34 = v33[4];
      if ( !v34 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v33[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__GetDailyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v34->_1.name),
                                             0LL);
        if ( !this )
          break;
        method = (const MethodInfo *)this;
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v28 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v28,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v3->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v34->_1.name);
          v37 = *(_QWORD *)&this->fields.m_CachedPtr;
          v38 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v37 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v37 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v37 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          this = (MasterMissionComponent_o *)v3->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v40 = *(_QWORD *)&this->fields.m_CachedPtr;
          v41 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v40 )
            break;
          v42 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v34,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = v40 + 8 * v42;
            LODWORD(this->fields.m_CancellationTokenSource) = v42 + 1;
            *(_QWORD *)(v43 + 32) = v34;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v43 + 32), (int32_t)v34, v35, v36);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1BC3264(this, method);
  }
LABEL_29:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v44);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v47;
        p_offset += 4;
        if ( !v47 )
          goto LABEL_38;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_38:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v50 = Enumerator->klass;
    v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v52 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_45;
      }
      v53 = (__int64)&v50->vtable[*v52].method;
    }
    else
    {
LABEL_45:
      v53 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0LL);
    }
    v54 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                                             Enumerator,
                                             *(_QWORD *)(v53 + 8));
    v56 = v54;
    if ( !v54 )
      sub_1BC3264(0LL, v55);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v54, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v56->fields.guideImageId;
      if ( v56->fields.guideImageId <= 0 )
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
        sub_1BC3264(isOpenNow, v58);
      v3->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v56->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v63 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v63 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v63->static_fields->DEFAULT_LIMITCNT;
      }
      v3->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v56->fields.talkIds;
      v3->fields.voiceNameList = talkIds;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.voiceNameList, (int32_t)talkIds, v59, v60);
      id = v56->fields.id;
      v3->fields.currentMissionDispInfoEnt = v56;
      v3->fields.currentDispId = id;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, (int32_t)v56, v66, v67);
    }
  }
  v68 = Enumerator->klass;
  v69 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_63;
    }
    v71 = (__int64)&v68->vtable[*v70].method;
  }
  else
  {
LABEL_63:
    v71 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(Enumerator, *(_QWORD *)(v71 + 8));
  if ( v28 )
  {
    v72 = v28->fields._size;
    if ( v72 < 1 )
    {
      return 0LL;
    }
    else
    {
      v3->fields.totalMissionNum = v72;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v28,
                                           0,
                                           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      m_CachedPtr = this->fields.m_CachedPtr;
      if ( v28->fields._size >= 1 )
      {
        v74 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v28,
                                               v74,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v28,
                                                 v74,
                                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v74 < v28->fields._size );
      }
      v3->fields.currentMissionId = m_CachedPtr;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v28;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildLimitedMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v23; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v26; // w9
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v28; // x20
  System_Collections_Generic_List_object__o *v29; // x21
  __int64 v30; // x2
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v33; // w27
  Il2CppClass **v34; // x8
  Il2CppClass *v35; // x24
  int32_t name_high; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  __int64 v46; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  MstMissionDisplayInfoEntity_o *v56; // x0
  __int64 v57; // x1
  MstMissionDisplayInfoEntity_o *v58; // x25
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v65; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  int v74; // w8
  intptr_t m_CachedPtr; // w24
  int32_t v76; // w22

  v3 = this;
  if ( (byte_4B04A8F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__,
      v7);
    sub_1BC3008(&System_IDisposable_TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v18);
    sub_1BC3008(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v19);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v20);
    this = (MasterMissionComponent_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B04A8F = 1;
  }
  currentEventIdList = v3->fields.currentEventIdList;
  v3->fields.currentIdx = 0;
  v3->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_84;
  v23 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v23;
  currentMstMissionEntList = v3->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_84;
  size = currentMstMissionEntList->fields._size;
  v26 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v26;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v3->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, 0, size, v2);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v3->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_84;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
        sub_1BC326C(this, method, v30);
      v34 = &mstMissionList->obj.klass + (int)v33;
      v35 = v34[4];
      if ( !v35 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v34[4], 0LL);
      if ( !MasterData_object )
        break;
      name_high = HIDWORD(v35->_1.name);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__GetLimitedMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             name_high,
                                             0LL);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !v29 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v29,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v3->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)HIDWORD(v35->_1.name);
            v39 = *(_QWORD *)&this->fields.m_CachedPtr;
            v40 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v39 )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v39 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(v39 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v3->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v42 = *(_QWORD *)&this->fields.m_CachedPtr;
            v43 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v42 )
              break;
            v44 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v35,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = v42 + 8 * v44;
              LODWORD(this->fields.m_CancellationTokenSource) = v44 + 1;
              *(_QWORD *)(v45 + 32) = v35;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 32), (int32_t)v35, v37, v38);
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
                                             0LL);
        if ( !v28 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v28,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_32;
    }
LABEL_84:
    sub_1BC3264(this, method);
  }
LABEL_32:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_84;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_84;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v46);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        p_offset += 4;
        if ( !v49 )
          goto LABEL_41;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_41:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v52 = Enumerator->klass;
    v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v54 = &v52->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v54 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_48;
      }
      v55 = (__int64)&v52->vtable[*v54].method;
    }
    else
    {
LABEL_48:
      v55 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0LL);
    }
    v56 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                                             Enumerator,
                                             *(_QWORD *)(v55 + 8));
    v58 = v56;
    if ( !v56 )
      sub_1BC3264(0LL, v57);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v56, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v58->fields.guideImageId;
      if ( v58->fields.guideImageId <= 0 )
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
        sub_1BC3264(isOpenNow, v60);
      v3->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v58->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v65 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v65 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v65->static_fields->DEFAULT_LIMITCNT;
      }
      v3->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v58->fields.talkIds;
      v3->fields.voiceNameList = talkIds;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.voiceNameList, (int32_t)talkIds, v61, v62);
      id = v58->fields.id;
      v3->fields.currentMissionDispInfoEnt = v58;
      v3->fields.currentDispId = id;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, (int32_t)v58, v68, v69);
    }
  }
  v70 = Enumerator->klass;
  v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v72 = &v70->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_66;
    }
    v73 = (__int64)&v70->vtable[*v72].method;
  }
  else
  {
LABEL_66:
    v73 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(
                                       Enumerator,
                                       *(_QWORD *)(v73 + 8));
  if ( v29 && (v74 = v29->fields._size, v74 >= 1) )
  {
    v3->fields.totalMissionNum = v74;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v29,
                                         0,
                                         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_84;
    if ( v29->fields._size >= 1 )
    {
      m_CachedPtr = this->fields.m_CachedPtr;
      v76 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v29,
                                             v76,
                                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_84;
        if ( m_CachedPtr > this->fields.m_CachedPtr )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v29,
                                               v76,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_84;
          m_CachedPtr = this->fields.m_CachedPtr;
        }
      }
      while ( ++v76 < v29->fields._size );
    }
    v3->fields.currentMissionId = 0;
    if ( !v28 )
      goto LABEL_84;
    System_Collections_Generic_List_object___AddRange(
      v28,
      (System_Collections_Generic_IEnumerable_T__o *)v29,
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v28 )
      goto LABEL_84;
    if ( v28->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v28;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildWeeklyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v23; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v26; // w9
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v28; // x20
  System_Collections_Generic_List_object__o *v29; // x21
  __int64 v30; // x2
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v33; // w28
  Il2CppClass **v34; // x8
  Il2CppClass *v35; // x24
  int32_t name_high; // w1
  MasterMissionComponent_o *v37; // x25
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  __int64 v47; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v50; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  MstMissionDisplayInfoEntity_o *v57; // x0
  __int64 v58; // x1
  MstMissionDisplayInfoEntity_o *v59; // x25
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v66; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  __int64 v72; // x9
  int32_t *v73; // x10
  __int64 v74; // x0
  int v75; // w8
  intptr_t m_CachedPtr; // w24
  int32_t v77; // w22

  v3 = this;
  if ( (byte_4B04A8D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__,
      v7);
    sub_1BC3008(&System_IDisposable_TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v18);
    sub_1BC3008(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v19);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v20);
    this = (MasterMissionComponent_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B04A8D = 1;
  }
  currentEventIdList = v3->fields.currentEventIdList;
  v3->fields.currentIdx = 0;
  v3->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_83;
  v23 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v23;
  currentMstMissionEntList = v3->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_83;
  size = currentMstMissionEntList->fields._size;
  v26 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v26;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v3->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, 0, size, v2);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v3->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_83;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
        sub_1BC326C(this, method, v30);
      v34 = &mstMissionList->obj.klass + (int)v33;
      v35 = v34[4];
      if ( !v35 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v34[4], 0LL);
      if ( !MasterData_object )
        break;
      name_high = HIDWORD(v35->_1.name);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__GetWeeklyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             name_high,
                                             0LL);
        if ( !this )
          break;
        v37 = this;
        if ( this->fields.m_CancellationTokenSource )
        {
          this = (MasterMissionComponent_o *)v3->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v35->_1.name);
          v38 = *(_QWORD *)&this->fields.m_CachedPtr;
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v38 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v38 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v38 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          if ( !v29 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v29,
            (System_Collections_Generic_IEnumerable_T__o *)v37,
            (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v3->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v43 = *(_QWORD *)&this->fields.m_CachedPtr;
          v44 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v43 )
            break;
          v45 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v35,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = v43 + 8 * v45;
            LODWORD(this->fields.m_CancellationTokenSource) = v45 + 1;
            *(_QWORD *)(v46 + 32) = v35;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v46 + 32), (int32_t)v35, v41, v42);
          }
        }
      }
      else
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getClearMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             name_high,
                                             2,
                                             0LL);
        if ( !v28 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v28,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_31;
    }
LABEL_83:
    sub_1BC3264(this, method);
  }
LABEL_31:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_83;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v47);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v50;
        p_offset += 4;
        if ( !v50 )
          goto LABEL_40;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_40:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v53 = Enumerator->klass;
    v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v55 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_47;
      }
      v56 = (__int64)&v53->vtable[*v55].method;
    }
    else
    {
LABEL_47:
      v56 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0LL);
    }
    v57 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                             Enumerator,
                                             *(_QWORD *)(v56 + 8));
    v59 = v57;
    if ( !v57 )
      sub_1BC3264(0LL, v58);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v57, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v59->fields.guideImageId;
      if ( v59->fields.guideImageId <= 0 )
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
        sub_1BC3264(isOpenNow, v61);
      v3->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v59->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v66 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v66 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v66->static_fields->DEFAULT_LIMITCNT;
      }
      v3->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v59->fields.talkIds;
      v3->fields.voiceNameList = talkIds;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.voiceNameList, (int32_t)talkIds, v62, v63);
      id = v59->fields.id;
      v3->fields.currentMissionDispInfoEnt = v59;
      v3->fields.currentDispId = id;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, (int32_t)v59, v69, v70);
    }
  }
  v71 = Enumerator->klass;
  v72 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      --v72;
      v73 += 4;
      if ( !v72 )
        goto LABEL_65;
    }
    v74 = (__int64)&v71->vtable[*v73].method;
  }
  else
  {
LABEL_65:
    v74 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
                                       Enumerator,
                                       *(_QWORD *)(v74 + 8));
  if ( v29 && (v75 = v29->fields._size, v75 >= 1) )
  {
    v3->fields.totalMissionNum = v75;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v29,
                                         0,
                                         (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_83;
    m_CachedPtr = this->fields.m_CachedPtr;
    if ( v29->fields._size >= 1 )
    {
      v77 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v29,
                                             v77,
                                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_83;
        if ( m_CachedPtr > this->fields.m_CachedPtr )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v29,
                                               v77,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_83;
          m_CachedPtr = this->fields.m_CachedPtr;
        }
      }
      while ( ++v77 < v29->fields._size );
    }
    v3->fields.currentMissionId = m_CachedPtr;
    if ( !v28 )
      goto LABEL_83;
    System_Collections_Generic_List_object___AddRange(
      v28,
      (System_Collections_Generic_IEnumerable_T__o *)v29,
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v28 )
      goto LABEL_83;
    if ( v28->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v28;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getValidExtraMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v23; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v26; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v28; // x20
  __int64 v29; // x2
  struct MstMissionEntity_array *mstMissionList; // x24
  int max_length; // w8
  unsigned int v32; // w25
  Il2CppClass **v33; // x8
  Il2CppClass *v34; // x23
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  __int64 v44; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  MstMissionDisplayInfoEntity_o *v54; // x0
  __int64 v55; // x1
  MstMissionDisplayInfoEntity_o *v56; // x24
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v63; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  int v72; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v74; // w21

  v3 = this;
  if ( (byte_4B04A8E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(
      &Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__,
      v7);
    sub_1BC3008(&System_IDisposable_TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v18);
    sub_1BC3008(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v19);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v20);
    this = (MasterMissionComponent_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B04A8E = 1;
  }
  currentEventIdList = v3->fields.currentEventIdList;
  v3->fields.currentIdx = 0;
  v3->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v23 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v23;
  currentMstMissionEntList = v3->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = currentMstMissionEntList->fields._size;
  v26 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v26;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v3->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, 0, size, v2);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v3->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
        sub_1BC326C(this, method, v29);
      v33 = &mstMissionList->obj.klass + (int)v32;
      v34 = v33[4];
      if ( !v34 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v33[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__GetExtraMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v34->_1.name),
                                             0LL);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !v28 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v28,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v3->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)HIDWORD(v34->_1.name);
            v37 = *(_QWORD *)&this->fields.m_CachedPtr;
            v38 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v37 )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v37 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(v37 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v3->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v40 = *(_QWORD *)&this->fields.m_CachedPtr;
            v41 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v40 )
              break;
            v42 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v34,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = v40 + 8 * v42;
              LODWORD(this->fields.m_CancellationTokenSource) = v42 + 1;
              *(_QWORD *)(v43 + 32) = v34;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v43 + 32), (int32_t)v34, v35, v36);
            }
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1BC3264(this, method);
  }
LABEL_29:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v44);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v47;
        p_offset += 4;
        if ( !v47 )
          goto LABEL_38;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_38:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v50 = Enumerator->klass;
    v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v52 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_45;
      }
      v53 = (__int64)&v50->vtable[*v52].method;
    }
    else
    {
LABEL_45:
      v53 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0LL);
    }
    v54 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                                             Enumerator,
                                             *(_QWORD *)(v53 + 8));
    v56 = v54;
    if ( !v54 )
      sub_1BC3264(0LL, v55);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v54, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v56->fields.guideImageId;
      if ( v56->fields.guideImageId <= 0 )
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
        sub_1BC3264(isOpenNow, v58);
      v3->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v56->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v63 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v63 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v63->static_fields->DEFAULT_LIMITCNT;
      }
      v3->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v56->fields.talkIds;
      v3->fields.voiceNameList = talkIds;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.voiceNameList, (int32_t)talkIds, v59, v60);
      id = v56->fields.id;
      v3->fields.currentMissionDispInfoEnt = v56;
      v3->fields.currentDispId = id;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.currentMissionDispInfoEnt, (int32_t)v56, v66, v67);
    }
  }
  v68 = Enumerator->klass;
  v69 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_63;
    }
    v71 = (__int64)&v68->vtable[*v70].method;
  }
  else
  {
LABEL_63:
    v71 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(Enumerator, *(_QWORD *)(v71 + 8));
  if ( v28 )
  {
    v72 = v28->fields._size;
    if ( v72 < 1 )
    {
      return 0LL;
    }
    else
    {
      v3->fields.totalMissionNum = v72;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v28,
                                           0,
                                           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      if ( v28->fields._size >= 1 )
      {
        m_CachedPtr = this->fields.m_CachedPtr;
        v74 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v28,
                                               v74,
                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v28,
                                                 v74,
                                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v74 < v28->fields._size );
      }
      v3->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v28;
}


int32_t __fastcall MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4B04A7D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    byte_4B04A7D = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1BC3264(0LL, v6);
    result = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0LL);
    this->fields.stonePrice = result;
  }
  return result;
}


MasterMissionListViewManager_o *__fastcall MasterMissionComponent__get_listViewManager(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1BC3264(this, method);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BC326C(this, method, v2);
  return missionListViewManager->m_Items[nowType];
}


System_String_o *__fastcall MasterMissionComponent__get_settedAssetname(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.lastAssetName;
}


void __fastcall MasterMissionComponent__missionRewardCallback(
        MasterMissionComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MasterMissionComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *v12; // x20
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  MasterMissionComponent_o *v15; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Int32_array *v17; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct PlayMakerFSM_o *v20; // x10

  v4 = this;
  if ( (byte_4B04AA9 & 1) == 0 )
  {
    sub_1BC3008(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___, result);
    sub_1BC3008(&JsonManager_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_10976/*"REQUEST_OK"*/, v6);
    sub_1BC3008(&StringLiteral_10974/*"REQUEST_NG"*/, v7);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v8);
    sub_1BC3008(&StringLiteral_15658/*"["*/, v9);
    this = (MasterMissionComponent_o *)sub_1BC3008(&StringLiteral_15911/*"]"*/, v10);
    byte_4B04AA9 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( !System_String__Equals_62383952(result, (System_String_o *)StringLiteral_21997/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_62386896(
                            (System_String_o *)StringLiteral_15658/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15911/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                         v12,
                                         (const MethodInfo_306D91C *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( this )
    {
      v15 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_21;
      myFsm = this->fields.myFsm;
      if ( !myFsm )
        goto LABEL_20;
      v4->fields.isOverPresentBox = (bool)myFsm->fields.m_CancellationTokenSource;
      v4->fields.overflowType = HIDWORD(myFsm->fields.m_CancellationTokenSource);
      v17 = *(struct System_Int32_array **)&myFsm->fields.m_CachedPtr;
      v4->fields.receiveMissionIds = v17;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.receiveMissionIds, (int32_t)v17, v13, v14);
      missionListViewManager = v4->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_20;
      nowType = v4->fields.nowType;
      if ( (unsigned int)nowType >= missionListViewManager->max_length
        || !LODWORD(v15->fields.m_CancellationTokenSource) )
      {
LABEL_21:
        sub_1BC326C(this, result, v13);
      }
      v20 = v15->fields.myFsm;
      if ( v20 )
      {
        this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
        if ( this )
        {
          MasterMissionListViewManager__SetResultData(
            (MasterMissionListViewManager_o *)this,
            (GetSvts_array *)v20->fields.fsm,
            (GetCommandCodes_array *)v20->fields.fsmTemplate,
            0LL);
          this = (MasterMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v11 = &StringLiteral_10976/*"REQUEST_OK"*/;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_20:
    sub_1BC3264(this, result);
  }
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_20;
  v11 = &StringLiteral_10974/*"REQUEST_NG"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v11, 0LL);
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool _39466584; // w0
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B04A9D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, voiceIDs);
    sub_1BC3008(&Method_MasterMissionComponent_setNormalFace__, v5);
    sub_1BC3008(&TutorialFlag_TypeInfo, v6);
    byte_4B04A9D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _39466584 = TutorialFlag__Get_39466584(126, 0LL);
  if ( voiceIDs && !_39466584 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
    if ( !svtVoiceCtr )
      sub_1BC3264(v11, v12);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v10, 0LL);
  }
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice_45092364(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  bool _39466584; // w0
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v20; // x20

  if ( (byte_4B04A9E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, voiceIDs);
    sub_1BC3008(&TutorialFlag_TypeInfo, v7);
    sub_1BC3008(&Method_MasterMissionComponent___c__DisplayClass174_0__playEventMissionSvtVoice_b__0__, v8);
    sub_1BC3008(&MasterMissionComponent___c__DisplayClass174_0_TypeInfo, v9);
    byte_4B04A9E = 1;
  }
  v10 = sub_1BC3254(MasterMissionComponent___c__DisplayClass174_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass174_0___ctor((MasterMissionComponent___c__DisplayClass174_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 24), (int32_t)action, v15, v16);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _39466584 = TutorialFlag__Get_39466584(126, 0LL);
  if ( voiceIDs && !_39466584 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v20 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v10,
      Method_MasterMissionComponent___c__DisplayClass174_0__playEventMissionSvtVoice_b__0__,
      0LL);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v20, 0LL);
      return;
    }
LABEL_11:
    sub_1BC3264(v11, v12);
  }
}


void __fastcall MasterMissionComponent__playSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 voicePlayEffect; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x8
  UnityEngine_Transform_o *v12; // x20
  EventSvtControl_o *svtVoiceCtr; // x20
  System_Action_o *v14; // x21

  if ( (byte_4B04A9C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5);
    sub_1BC3008(&Method_MasterMissionComponent_setNormalFace__, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B04A9C = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  voicePlayEffect = UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)voicePlayEffect, 1, 0LL);
      voicePlayEffect = (__int64)this->fields.voicePlayEffect;
      if ( !voicePlayEffect )
        goto LABEL_20;
      voicePlayEffect = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)voicePlayEffect, 0LL);
      v12 = (UnityEngine_Transform_o *)voicePlayEffect;
      if ( !byte_4AFBDB6 )
      {
        voicePlayEffect = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v10);
        byte_4AFBDB6 = 1;
      }
      if ( !v12
        || (UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0 )
      {
LABEL_20:
        sub_1BC3264(voicePlayEffect, v10);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_20;
  EventSvtControl__playVoice(svtVoiceCtr, v14, 0LL);
}


void __fastcall MasterMissionComponent__reDispMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t Time; // x0
  __int64 v17; // x1
  struct MstMissionDisplayInfoEntity_o *currentMissionDispInfoEnt; // x8
  _BOOL4 isNotNext; // w9
  int64_t v20; // x20
  System_Collections_Generic_List_object__o *currentMstMissionEntList; // x0
  int size; // w8
  int v23; // w22
  int32_t v24; // w21
  struct System_Collections_Generic_List_MstMissionEntity__o *v25; // x8
  void *monitor; // x8
  int v27; // w21
  struct System_String_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct MstMissionDisplayInfoEntity_o *v34; // x8
  int v35; // w8
  __int64 *v36; // x8
  struct System_String_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 *v40; // x8
  struct System_String_o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  TerminalSceneComponent_c *v44; // x0
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v47; // x21
  MasterMissionComponent___c_c *v48; // x8
  System_Action_o *_9__153_0; // x22
  Il2CppObject *v50; // x23
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3

  if ( (byte_4B04A8B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__, v4);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v8);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v9);
    sub_1BC3008(&Method_MasterMissionComponent___c__reDispMissionList_b__153_0__, v10);
    sub_1BC3008(&MasterMissionComponent___c_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_8734/*"MST_REMISSON_MSG"*/, v12);
    sub_1BC3008(&StringLiteral_8732/*"MST_REDISP_MSG"*/, v13);
    sub_1BC3008(&StringLiteral_8735/*"MST_REMISSON_TITLE_TXT"*/, v14);
    sub_1BC3008(&StringLiteral_8733/*"MST_REDISP_TITLE_TXT"*/, v15);
    byte_4B04A8B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
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
      v20 = Time;
      currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
      if ( !currentMstMissionEntList )
        goto LABEL_59;
      size = currentMstMissionEntList->fields._size;
      v23 = size - 1;
      if ( size < 1 )
      {
LABEL_25:
        v27 = 0;
      }
      else
      {
        v24 = 0;
        while ( 1 )
        {
          currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                    currentMstMissionEntList,
                                                                                    v24,
                                                                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
          if ( currentMstMissionEntList )
          {
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
            if ( !currentMstMissionEntList )
              goto LABEL_59;
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                      currentMstMissionEntList,
                                                                                      v24,
                                                                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
            if ( !currentMstMissionEntList )
              goto LABEL_59;
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)MstMissionEntity__getMissionType(
                                                                                      (MstMissionEntity_o *)currentMstMissionEntList,
                                                                                      0LL);
            v25 = this->fields.currentMstMissionEntList;
            if ( (_DWORD)currentMstMissionEntList == 5 )
            {
              if ( !v25 )
                goto LABEL_59;
              currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                        (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList,
                                                                                        v24,
                                                                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
              if ( !currentMstMissionEntList )
                goto LABEL_59;
              monitor = currentMstMissionEntList[1].monitor;
            }
            else
            {
              if ( !v25 )
                goto LABEL_59;
              currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                        (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList,
                                                                                        v24,
                                                                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
              if ( !currentMstMissionEntList )
                goto LABEL_59;
              monitor = currentMstMissionEntList[1].klass;
            }
            if ( v20 >= (__int64)monitor )
              break;
          }
          if ( v23 == v24 )
            goto LABEL_25;
          currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
          ++v24;
          if ( !currentMstMissionEntList )
            goto LABEL_59;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8735/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
        this->fields.titleTxt = v28;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.titleTxt, (int32_t)v28, v29, v30);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8734/*"MST_REMISSON_MSG"*/, 0LL);
        this->fields.msgTxt = v31;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.msgTxt, (int32_t)v31, v32, v33);
        v27 = 1;
      }
      v34 = this->fields.currentMissionDispInfoEnt;
      if ( !v34 )
        goto LABEL_59;
      if ( v20 >= v34->fields.endedAt )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = &StringLiteral_8735/*"MST_REMISSON_TITLE_TXT"*/;
        if ( !v27 )
          v36 = &StringLiteral_8733/*"MST_REDISP_TITLE_TXT"*/;
        v37 = LocalizationManager__Get((System_String_o *)*v36, 0LL);
        this->fields.titleTxt = v37;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.titleTxt, (int32_t)v37, v38, v39);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v40 = &StringLiteral_8734/*"MST_REMISSON_MSG"*/;
        if ( !v27 )
          v40 = &StringLiteral_8732/*"MST_REDISP_MSG"*/;
        v41 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
        this->fields.msgTxt = v41;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.msgTxt, (int32_t)v41, v42, v43);
        v35 = 1;
      }
      else
      {
        v35 = 0;
      }
      isNotNext = this->fields.isNotNext;
      LODWORD(currentMissionDispInfoEnt) = v35 | v27;
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
    TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
    this->fields.isOpenOverDlg = 1;
    v44 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v44 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v44->static_fields->MASTER_MISSION_RESET_KEY, 0LL);
    currentMstMissionEntList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    titleTxt = this->fields.titleTxt;
    msgTxt = this->fields.msgTxt;
    v47 = (CommonUI_o *)currentMstMissionEntList;
    v48 = MasterMissionComponent___c_TypeInfo;
    if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v48 = MasterMissionComponent___c_TypeInfo;
    }
    _9__153_0 = v48->static_fields->__9__153_0;
    if ( !_9__153_0 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = MasterMissionComponent___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v48->static_fields->__9;
      _9__153_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(_9__153_0, v50, Method_MasterMissionComponent___c__reDispMissionList_b__153_0__, 0LL);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__153_0 = _9__153_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__153_0, (int32_t)_9__153_0, v52, v53);
    }
    if ( v47 )
    {
      CommonUI__OpenNotificationDialog(v47, titleTxt, msgTxt, _9__153_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0, 0LL);
      return;
    }
LABEL_59:
    sub_1BC3264(currentMstMissionEntList, v17);
  }
}


void __fastcall MasterMissionComponent__setCurrentSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *currentVoiceDataList; // x0
  EventSvtControl_o *svtVoiceCtr; // x20
  void *v6; // x8
  System_Collections_Generic_List_ServantVoiceData____o *v7; // x21
  void *v8; // x8
  System_Collections_Generic_List_ServantVoiceData____o *v9; // x22
  System_String_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct StandFigureBack_o *standFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4B04A9B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__, v3);
    byte_4B04A9B = 1;
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
                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
    if ( currentVoiceDataList )
    {
      v6 = currentVoiceDataList;
      currentVoiceDataList = this->fields.currentVoiceDataList;
      if ( currentVoiceDataList )
      {
        v7 = (System_Collections_Generic_List_ServantVoiceData____o *)*((_QWORD *)v6 + 3);
        currentVoiceDataList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)currentVoiceDataList,
                                 this->fields.currentIdx,
                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
        if ( currentVoiceDataList )
        {
          v8 = currentVoiceDataList;
          currentVoiceDataList = this->fields.currentVoiceDataList;
          if ( currentVoiceDataList )
          {
            v9 = (System_Collections_Generic_List_ServantVoiceData____o *)*((_QWORD *)v8 + 4);
            currentVoiceDataList = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)currentVoiceDataList,
                                     this->fields.currentIdx,
                                     (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
            if ( currentVoiceDataList )
            {
              v10 = (System_String_o *)*((_QWORD *)currentVoiceDataList + 2);
              currentVoiceDataList = (void *)ServantVoiceMaster__getSvtVoiceId(this->fields.currentEventSvtId, 0LL);
              if ( svtVoiceCtr )
              {
                EventSvtControl__setSvtVoice(svtVoiceCtr, v7, v9, 0LL, v10, (int32_t)currentVoiceDataList, 0LL);
                standFigureBack = this->fields.standFigureBack;
                if ( standFigureBack )
                {
                  currentVoiceDataList = this->fields.svtVoiceCtr;
                  if ( currentVoiceDataList )
                  {
                    standFigureCollectList = standFigureBack->fields.standFigureCollectList;
                    *((_QWORD *)currentVoiceDataList + 11) = standFigureCollectList;
                    sub_1BC2FAC(
                      (CGThumbnailListItem_o *)((char *)currentVoiceDataList + 88),
                      (int32_t)standFigureCollectList,
                      v11,
                      v12);
                    MasterMissionComponent__playSvtVoice(this, v15);
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
    sub_1BC3264(currentVoiceDataList, method);
  }
}


void __fastcall MasterMissionComponent__setGuideSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  void *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v23; // x22
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v33; // x22
  struct System_String_o *VoiceAssetName; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  struct System_String_array *voiceNameList; // x23
  __int64 v41; // x8
  unsigned __int64 v42; // x24
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_List_object__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  MasterMissionComponent_VoiceData_o *v54; // x22
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  int32_t v61; // w8
  Il2CppObject *current; // x21
  Il2CppObject *v63; // x0
  __int64 v64; // x1
  SoundManager_o *v65; // x20
  System_String_o *klass; // x21
  System_Action_o *v67; // x22
  __int64 v68; // x0
  __int64 v69; // x1
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+0h] [xbp-70h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B04A91 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, v13);
    sub_1BC3008(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v14);
    sub_1BC3008(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo, v15);
    sub_1BC3008(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v18);
    sub_1BC3008(&MasterMissionComponent_VoiceData_TypeInfo, v19);
    byte_4B04A91 = 1;
  }
  voicePrefix = 0LL;
  memset(&v70, 0, sizeof(v70));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v23 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.currentVoiceDataList, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v27;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voiceListRand, (int32_t)v27, v29, v30);
  currentEventSvtId = this->fields.currentEventSvtId;
  this->fields.downLoadCnt = 0;
  Instance = (void *)ServantVoiceMaster__getSvtVoiceId(currentEventSvtId, 0LL);
  if ( !MasterData_object )
    goto LABEL_37;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)MasterData_object,
    (int32_t *)&voicePrefix + 1,
    (int32_t *)&voicePrefix,
    (int32_t)Instance,
    this->fields.currentEventSvtLimitCnt,
    0LL);
  if ( !v23 )
    goto LABEL_37;
  Entity = ServantVoiceMaster__GetEntity((ServantVoiceMaster_o *)v23, SHIDWORD(voicePrefix), voicePrefix, 8, 0LL);
  if ( !Entity )
    goto LABEL_25;
  v33 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0LL);
  this->fields.lastAssetName = VoiceAssetName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.lastAssetName, (int32_t)VoiceAssetName, v35, v36);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    v41 = *(_QWORD *)&voiceNameList->max_length;
    if ( v41 )
    {
      if ( (int)v41 >= 1 )
      {
        v42 = 0LL;
        do
        {
          if ( v42 >= (unsigned int)v41 )
            sub_1BC326C(MstMissionVoiceListByName, v38, v39);
          MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                        v33,
                                        voiceNameList->m_Items[v42],
                                        0LL);
          if ( MstMissionVoiceListByName )
          {
            p_obj = &MstMissionVoiceListByName->obj;
            Instance = *p_voiceListRand;
            if ( !*p_voiceListRand )
              goto LABEL_37;
            v44 = *((_QWORD *)Instance + 2);
            v45 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++*((_DWORD *)Instance + 7);
            if ( !v44 )
              goto LABEL_37;
            v46 = *((int *)Instance + 6);
            if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                p_obj,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = v44 + 8 * v46;
              *((_DWORD *)Instance + 6) = v46 + 1;
              *(_QWORD *)(v47 + 32) = p_obj;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 32), (int32_t)p_obj, v39, v43);
            }
          }
          LODWORD(v41) = voiceNameList->max_length;
        }
        while ( (__int64)++v42 < (int)v41 );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v33, 0LL);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voiceListMission, (int32_t)MasterMissionActionVoiceList, v49, v50);
  currentVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v54 = (MasterMissionComponent_VoiceData_o *)sub_1BC3254(MasterMissionComponent_VoiceData_TypeInfo);
  MasterMissionComponent_VoiceData___ctor(v54, VoiceAssetName, voiceListRand, voiceListMission, 0LL);
  if ( !currentVoiceDataList
    || (items = currentVoiceDataList->fields._items,
        v58 = Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__,
        ++currentVoiceDataList->fields._version,
        !items) )
  {
LABEL_37:
    sub_1BC3264(Instance, p_obj);
  }
  size = currentVoiceDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      currentVoiceDataList,
      (Il2CppObject *)v54,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &items->obj.klass + size;
    currentVoiceDataList->fields._size = size + 1;
    v60[4] = (Il2CppClass *)v54;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v54, v55, v56);
  }
LABEL_25:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_37;
  v61 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v61;
  if ( v61 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, (const MethodInfo *)p_obj);
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v70,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v70,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v70.fields._current;
      v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_1BC3264(v63, v64);
      v65 = (SoundManager_o *)v63;
      klass = (System_String_o *)current[1].klass;
      v67 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v67, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0LL);
      if ( !v65 )
        sub_1BC3264(v68, v69);
      SoundManager__LoadAudioAssetStorage(v65, klass, v67, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v70,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
  }
}


void __fastcall MasterMissionComponent__setMissionCompleteNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w22
  int32_t compMissionNum; // w23
  UserEventMissionMaster_o *v15; // x20
  int32_t v16; // w21
  System_String_o *v17; // x20
  UILabel_o *eventMissionTxt2; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  UILabel_o *v27; // x19
  UILabel_o *eventMissionTxt; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x22
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B04A90 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1BC3008(&int_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&StringLiteral_8475/*"MASTER_MISSION_COMPLETE_NUM"*/, v9);
    byte_4B04A90 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_24;
  size = currentEventIdList->fields._size;
  if ( size >= 1 )
  {
    compMissionNum = this->fields.compMissionNum;
    v15 = (UserEventMissionMaster_o *)Instance;
    v16 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    currentEventIdList,
                                    v16,
                                    (const MethodInfo_3683B2C *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v15 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v15, (int32_t)Instance, 0LL);
      ++v16;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v16 )
        goto LABEL_11;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_24:
    sub_1BC3264(Instance, v11);
  }
LABEL_11:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8475/*"MASTER_MISSION_COMPLETE_NUM"*/, 0LL);
  if ( !this->fields.eventMissionInfo )
    goto LABEL_24;
  v17 = (System_String_o *)Instance;
  if ( this->fields.nowType )
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 0, 0LL);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    eventMissionTxt2 = this->fields.eventMissionTxt2;
    v38 = this->fields.compMissionNum;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v19, v20, v21);
    totalMissionNum = this->fields.totalMissionNum;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum, v23, v24, v25);
    Instance = (DataManager_o *)System_String__Format_62389940(v17, v22, v26, 0LL);
    if ( !eventMissionTxt2 )
      goto LABEL_24;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0LL);
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    v27 = this->fields.eventMissionTxt2;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    if ( !v27 )
      goto LABEL_24;
    UILabel__SetCondensedScale_48617464(
      v27,
      MasterMissionComponent_TypeInfo->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH,
      0.0,
      0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 1, 0LL);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    eventMissionTxt = this->fields.eventMissionTxt;
    v38 = this->fields.compMissionNum;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v29, v30, v31);
    totalMissionNum = this->fields.totalMissionNum;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum, v33, v34, v35);
    Instance = (DataManager_o *)System_String__Format_62389940(v17, v32, v36, 0LL);
    if ( !eventMissionTxt )
      goto LABEL_24;
    UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall MasterMissionComponent__setMySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_c *v3; // x0
  StandFigureBack_o *standFigureBack; // x19
  int32_t currentEventSvtId; // w20

  if ( (byte_4B04A9A & 1) == 0 )
  {
    sub_1BC3008(&MasterMissionComponent_TypeInfo, method);
    byte_4B04A9A = 1;
  }
  v3 = MasterMissionComponent_TypeInfo;
  standFigureBack = this->fields.standFigureBack;
  currentEventSvtId = this->fields.currentEventSvtId;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !standFigureBack )
    sub_1BC3264(v3, method);
  StandFigureBack__CreatedStandFigure(
    standFigureBack,
    currentEventSvtId,
    MasterMissionComponent_TypeInfo->static_fields->DEFAULT_LIMITCNT,
    5,
    0,
    0LL,
    0,
    0LL);
}


void __fastcall MasterMissionComponent__setNormalFace(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0

  if ( (byte_4B04A9F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B04A9F = 1;
  }
  this->fields.isVoicePlaying = 0;
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( !voicePlayEffect )
      goto LABEL_10;
    UnityEngine_GameObject__SetActive(voicePlayEffect, 0, 0LL);
  }
  voicePlayEffect = (UnityEngine_GameObject_o *)this->fields.standFigureBack;
  if ( !voicePlayEffect )
LABEL_10:
    sub_1BC3264(voicePlayEffect, v4);
  StandFigureBack__SetFaceType((StandFigureBack_o *)voicePlayEffect, 0, 0.0, 0, 0LL);
}


void __fastcall MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct MasterMissionListViewManager_array *v7; // x8
  __int64 v8; // x9
  MissionListViewManager_o *v9; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x1

  v3 = this;
  if ( (byte_4B04AB0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_1BC3008(&Method_MasterMissionComponent__setRecieveModifyItem_b__195_0__, v4);
    byte_4B04AB0 = 1;
  }
  missionListViewManager = v3->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_10;
  nowType = v3->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_11;
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this
    || (MasterMissionListViewManager__ModifyItem(
          (MasterMissionListViewManager_o *)this,
          v3->fields.receiveMissionIds,
          0LL),
        (v7 = v3->fields.missionListViewManager) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(this, method);
  }
  v8 = v3->fields.nowType;
  if ( (unsigned int)v8 >= v7->max_length )
LABEL_11:
    sub_1BC326C(this, method, v2);
  v9 = (MissionListViewManager_o *)v7->m_Items[v8];
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v3, Method_MasterMissionComponent__setRecieveModifyItem_b__195_0__, 0LL);
  if ( !v9 )
    goto LABEL_10;
  MissionListViewManager__SetMode(v9, 3, v10, 0LL);
  MasterMissionComponent__RefreshInfo(v3, v11);
}


void __fastcall MasterMissionComponent__stopSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    sub_1BC3264(0LL, method);
  EventSvtControl__stopVoice(svtVoiceCtr, 0LL);
  MasterMissionComponent__setNormalFace(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent_ClickDelegate___ctor(
        MasterMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A10D4C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A10D04;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MasterMissionComponent_ClickDelegate__BeginInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B05255 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isDecide);
    byte_4B05255 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall MasterMissionComponent_ClickDelegate__Invoke(
        MasterMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MasterMissionComponent_MasterMissionInfoItem___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._MstMissionEntity_k__BackingField = mstMission;
  v10 = (MasterMissionComponent_MasterMissionInfoItem_o *)((char *)v10 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)v10, (int32_t)mstMission, v11, v12);
  LODWORD(v10->monitor) = missionCnt;
  HIDWORD(v10->monitor) = clearCnt;
  LODWORD(v10->fields._MstMissionEntity_k__BackingField) = achiveCnt;
}


int32_t __fastcall MasterMissionComponent_MasterMissionInfoItem__get_MissionAchiveCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        const MethodInfo *method)
{
  return this->fields._MissionAchiveCount_k__BackingField;
}


int32_t __fastcall MasterMissionComponent_MasterMissionInfoItem__get_MissionClearCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        const MethodInfo *method)
{
  return this->fields._MissionClearCount_k__BackingField;
}


int32_t __fastcall MasterMissionComponent_MasterMissionInfoItem__get_MissionCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        const MethodInfo *method)
{
  return this->fields._MissionCount_k__BackingField;
}


MstMissionEntity_o *__fastcall MasterMissionComponent_MasterMissionInfoItem__get_MstMissionEntity(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        const MethodInfo *method)
{
  return this->fields._MstMissionEntity_k__BackingField;
}


void __fastcall MasterMissionComponent_MasterMissionInfoItem__set_MissionAchiveCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MissionAchiveCount_k__BackingField = value;
}


void __fastcall MasterMissionComponent_MasterMissionInfoItem__set_MissionClearCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MissionClearCount_k__BackingField = value;
}


void __fastcall MasterMissionComponent_MasterMissionInfoItem__set_MissionCount(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MissionCount_k__BackingField = value;
}


void __fastcall MasterMissionComponent_MasterMissionInfoItem__set_MstMissionEntity(
        MasterMissionComponent_MasterMissionInfoItem_o *this,
        MstMissionEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MstMissionEntity_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall MasterMissionComponent_VoiceData___ctor(
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

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.DataName = voiceDataName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)voiceDataName, v9, v10);
  this->fields.DataListRand = voiceDataListRand;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.DataListRand, (int32_t)voiceDataListRand, v11, v12);
  this->fields.DataListMission = voiceDataListMission;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.DataListMission, (int32_t)voiceDataListMission, v13, v14);
}


void __fastcall MasterMissionComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B05256 & 1) == 0 )
  {
    sub_1BC3008(&MasterMissionComponent___c_TypeInfo, v1);
    byte_4B05256 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(MasterMissionComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MasterMissionComponent___c_TypeInfo->static_fields->__9 = (struct MasterMissionComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)MasterMissionComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall MasterMissionComponent___c___ctor(MasterMissionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c___ExitCompleteMission_b__150_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x19
  TerminalSceneComponent_c *v7; // x0
  ConnectMark_c *klass; // x8

  if ( (byte_4B05258 & 1) == 0 )
  {
    sub_1BC3008(&AvalonSceneManager_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B05258 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    goto LABEL_21;
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v5);
    byte_4AFC38D = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v7->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_21;
  TerminalSceneComponent__playBgm_44257320((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v5);
    byte_4AFC38D = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.connectMark->klass;
  if ( !klass || (Instance = *(CommonUI_o **)&klass->_2.element_size) == 0LL )
LABEL_21:
    sub_1BC3264(Instance, v5);
  ScrPlayerStatus__OpenMasterMissionFromCompleteMission((ScrPlayerStatus_o *)Instance, 0LL);
}


void __fastcall MasterMissionComponent___c___OnClickCompleteMissionBtn_b__149_1(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterMissionComponent___c___OnClickShopBtn_b__177_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  SceneJumpInfo_o *v7; // x19

  if ( (byte_4B0525A & 1) == 0 )
  {
    sub_1BC3008(&SceneJumpInfo_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BC3008(&StringLiteral_12959/*"StoneFragments"*/, v4);
    byte_4B0525A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        v7 = (SceneJumpInfo_o *)sub_1BC3254(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_40500860(v7, (System_String_o *)StringLiteral_12959/*"StoneFragments"*/, 0LL),
        !v7)
    || (SceneJumpInfo__SetReturnNowScene(v7, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(Instance, v6);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v7, 0LL);
}


void __fastcall MasterMissionComponent___c___OpenCompleteMission_b__148_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_4B05257 & 1) == 0 )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4B05257 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance )
    sub_1BC3264(0LL, method);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0LL);
}


void __fastcall MasterMissionComponent___c___reDispMissionList_b__153_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B05259 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4B05259 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 1, 1, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass174_0___ctor(
        MasterMissionComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass174_0___playEventMissionSvtVoice_b__0(
        MasterMissionComponent___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent_o *_4__this; // x0
  struct System_Action_o *action; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (MasterMissionComponent__setNormalFace(_4__this, 0LL), (action = this->fields.action) == 0LL) )
    sub_1BC3264(_4__this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))action->fields.m_target)(
    action->fields.original_method_info,
    *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall MasterMissionComponent___c__DisplayClass184_0___ctor(
        MasterMissionComponent___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___c__DisplayClass184_0___BulkReceiveConfirm_b__0(
        MasterMissionComponent___c__DisplayClass184_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MasterMissionComponent___c__DisplayClass184_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct MasterMissionComponent_o *_4__this; // x8
  System_Collections_Generic_List_int__o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppClass *klass; // x8
  __int64 name_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  __int64 *v23; // x8
  struct MasterMissionComponent_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct MasterMissionComponent_o *v27; // x8
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4B0525B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__, isDecide);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BC3008(&StringLiteral_3414/*"CLICK_DECIDE"*/, v12);
    this = (MasterMissionComponent___c__DisplayClass184_0_o *)sub_1BC3008(&StringLiteral_3407/*"CLICK_CANCEL"*/, v13);
    byte_4B0525B = 1;
  }
  memset(&v29, 0, sizeof(v29));
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v15 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (MasterMissionComponent___c__DisplayClass184_0_o *)v4->fields.items;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v29 = v28;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v29,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__);
        if ( !v16 )
          break;
        if ( !v29.fields._current )
          sub_1BC3264(v16, v17);
        klass = v29.fields._current[7].klass;
        if ( !klass )
          sub_1BC3264(v16, v17);
        if ( !v15 )
          sub_1BC3264(v16, v17);
        name_low = LODWORD(klass->_1.name);
        items = v15->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !items )
          sub_1BC3264(v16, name_low);
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            name_low,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v15->fields._size = size + 1;
          items->m_Items[size + 1] = name_low;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v15 )
      {
        v24 = v4->fields.__4__this;
        this = (MasterMissionComponent___c__DisplayClass184_0_o *)System_Collections_Generic_List_int___ToArray(
                                                                    v15,
                                                                    (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v24 )
        {
          v24->fields.sendMissionIds = (struct System_Int32_array *)this;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v24->fields.sendMissionIds, (int32_t)this, v25, v26);
          v27 = v4->fields.__4__this;
          if ( v27 )
          {
            this = (MasterMissionComponent___c__DisplayClass184_0_o *)v27->fields.myFsm;
            if ( this )
            {
              v23 = &StringLiteral_3414/*"CLICK_DECIDE"*/;
              goto LABEL_22;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1BC3264(this, isDecide);
  }
  this = (MasterMissionComponent___c__DisplayClass184_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_27;
  v23 = &StringLiteral_3407/*"CLICK_CANCEL"*/;
LABEL_22:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v23, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass190_0___ctor(
        MasterMissionComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass190_0___ReceiveResultList_b__0(
        MasterMissionComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent___c__DisplayClass190_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v6; // x8

  v2 = this;
  if ( (byte_4B0525C & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_11547/*"SERVANT_OVER"*/, method);
    sub_1BC3008(&StringLiteral_10345/*"PRESENT_BOX_OVER"*/, v3);
    this = (MasterMissionComponent___c__DisplayClass190_0_o *)sub_1BC3008(&StringLiteral_3407/*"CLICK_CANCEL"*/, v4);
    byte_4B0525C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterMissionComponent___c__DisplayClass190_0_o *)_4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( this )
    {
      v6 = &StringLiteral_10345/*"PRESENT_BOX_OVER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_1BC3264(this, method);
  }
  if ( !this )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v6 = &StringLiteral_11547/*"SERVANT_OVER"*/;
  else
    v6 = &StringLiteral_3407/*"CLICK_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass190_0___ReceiveResultList_b__1(
        MasterMissionComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *nextAction; // x8

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_1BC3264(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))nextAction->fields.m_target)(
    nextAction->fields.original_method_info,
    *(_QWORD *)&nextAction->fields.extra_arg);
}


void __fastcall MasterMissionComponent___c__DisplayClass190_0___ReceiveResultList_b__2(
        MasterMissionComponent___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *nextAction; // x8

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_1BC3264(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))nextAction->fields.m_target)(
    nextAction->fields.original_method_info,
    *(_QWORD *)&nextAction->fields.extra_arg);
}


void __fastcall MasterMissionComponent___c__DisplayClass191_0___ctor(
        MasterMissionComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass191_0___PresentBoxOver_b__1(
        MasterMissionComponent___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct MasterMissionComponent_o *_4__this; // x0
  __int64 *v5; // x9

  if ( (byte_4B0525D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_11547/*"SERVANT_OVER"*/, method);
    sub_1BC3008(&StringLiteral_3407/*"CLICK_CANCEL"*/, v3);
    byte_4B0525D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  if ( this->fields.isPresentBoxOpen )
  {
    MasterMissionComponent__OpenPresentBox(_4__this, 0LL);
    return;
  }
  if ( !_4__this->fields.myFsm )
LABEL_11:
    sub_1BC3264(_4__this, method);
  if ( _4__this->fields.overflowType )
    v5 = &StringLiteral_11547/*"SERVANT_OVER"*/;
  else
    v5 = &StringLiteral_3407/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent(_4__this->fields.myFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass207_0___ctor(
        MasterMissionComponent___c__DisplayClass207_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass207_0___UpdateStoneExchangeCount_b__0(
        MasterMissionComponent___c__DisplayClass207_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MasterMissionComponent_o *Object_object__50213776; // x0
  struct MasterMissionComponent_o *_4__this; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MasterMissionComponent_o *v10; // x8
  int32_t exchangeCount; // w20

  if ( (byte_4B0525E & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, assetData);
    sub_1BC3008(&MasterMissionComponent_TypeInfo, v5);
    byte_4B0525E = 1;
  }
  Object_object__50213776 = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !assetData )
    goto LABEL_14;
  Object_object__50213776 = (MasterMissionComponent_o *)AssetData__GetObject_object__50213776(
                                                          assetData,
                                                          MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
                                                          (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_object__50213776;
  sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.btnEffectBasePrefab, (int32_t)Object_object__50213776, v8, v9);
  Object_object__50213776 = this->fields.__4__this;
  if ( !Object_object__50213776 )
    goto LABEL_14;
  MasterMissionComponent__StopStoneButtonEffect(Object_object__50213776, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_14;
  if ( v10->fields.nowType == 1 )
  {
    exchangeCount = this->fields.exchangeCount;
    if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
    {
      Object_object__50213776 = this->fields.__4__this;
      if ( Object_object__50213776 )
      {
        MasterMissionComponent__PlayStoneButtonEffect(Object_object__50213776, 0LL);
        return;
      }
LABEL_14:
      sub_1BC3264(Object_object__50213776, assetData);
    }
  }
}


void __fastcall MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}