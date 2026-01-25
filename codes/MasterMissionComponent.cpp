void MasterMissionComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct MasterMissionComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  struct MasterMissionComponent_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  struct MasterMissionComponent_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  struct MasterMissionComponent_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  struct MasterMissionComponent_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w1
  struct MasterMissionComponent_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int32_t v57; // w1
  struct MasterMissionComponent_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w1
  struct MasterMissionComponent_StaticFields *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  MasterMissionComponent_c *v73; // x8
  struct MasterMissionComponent_StaticFields *v74; // x9

  if ( (byte_4CF17D4 & 1) == 0 )
  {
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17667/*"btn_txt_off_limited"*/);
    sub_1C7BAE8(&StringLiteral_17666/*"btn_txt_off_extra"*/);
    sub_1C7BAE8(&StringLiteral_17673/*"btn_txt_on_limited"*/);
    sub_1C7BAE8(&StringLiteral_18933/*"ef_btn_blink"*/);
    sub_1C7BAE8(&StringLiteral_17665/*"btn_txt_off_daily"*/);
    sub_1C7BAE8(&StringLiteral_17671/*"btn_txt_on_daily"*/);
    sub_1C7BAE8(&StringLiteral_17674/*"btn_txt_on_weekly"*/);
    sub_1C7BAE8(&StringLiteral_17668/*"btn_txt_off_weekly"*/);
    sub_1C7BAE8(&StringLiteral_17672/*"btn_txt_on_extra"*/);
    byte_4CF17D4 = 1;
  }
  static_fields = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_SVT_ID = 9000001;
  static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  v8 = StringLiteral_17671/*"btn_txt_on_daily"*/;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17671/*"btn_txt_on_daily"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_17665/*"btn_txt_off_daily"*/;
  v10 = MasterMissionComponent_TypeInfo->static_fields;
  v10->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17665/*"btn_txt_off_daily"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10->DAILY_OFF_SPRITE_LABEL, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_17674/*"btn_txt_on_weekly"*/;
  v18 = MasterMissionComponent_TypeInfo->static_fields;
  v18->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17674/*"btn_txt_on_weekly"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v18->WEEKLY_ON_SPRITE_LABEL, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_17668/*"btn_txt_off_weekly"*/;
  v26 = MasterMissionComponent_TypeInfo->static_fields;
  v26->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17668/*"btn_txt_off_weekly"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26->WEEKLY_OFF_SPRITE_LABEL, v25, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_17672/*"btn_txt_on_extra"*/;
  v34 = MasterMissionComponent_TypeInfo->static_fields;
  v34->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17672/*"btn_txt_on_extra"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v34->EXTRA_ON_SPRITE_LABEL, v33, v35, v36, v37, v38, v39, v40);
  v41 = StringLiteral_17666/*"btn_txt_off_extra"*/;
  v42 = MasterMissionComponent_TypeInfo->static_fields;
  v42->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17666/*"btn_txt_off_extra"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v42->EXTRA_OFF_SPRITE_LABEL, v41, v43, v44, v45, v46, v47, v48);
  v49 = StringLiteral_17673/*"btn_txt_on_limited"*/;
  v50 = MasterMissionComponent_TypeInfo->static_fields;
  v50->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17673/*"btn_txt_on_limited"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v50->LIMITED_ON_SPRITE_LABEL, v49, v51, v52, v53, v54, v55, v56);
  v57 = StringLiteral_17667/*"btn_txt_off_limited"*/;
  v58 = MasterMissionComponent_TypeInfo->static_fields;
  v58->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17667/*"btn_txt_off_limited"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v58->LIMITED_OFF_SPRITE_LABEL, v57, v59, v60, v61, v62, v63, v64);
  v65 = StringLiteral_18933/*"ef_btn_blink"*/;
  v66 = MasterMissionComponent_TypeInfo->static_fields;
  v66->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_18933/*"ef_btn_blink"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v66->STONE_EXCHENGE_BUTTON_EFFECT_NAME, v65, v67, v68, v69, v70, v71, v72);
  v73 = MasterMissionComponent_TypeInfo;
  v74 = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&v74->SLIDE_IN_TIME = 0x42B800003DCCCCCDLL;
  *(_OWORD *)&v74->NOTICE_NUMBER_BADGE_DEPTH = xmmword_CF5270;
  v74->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v74->BLANK_EARTH_WINDOW_POS.fields.x = 0.0;
  v74->BLANK_EARTH_WINDOW_POS.fields.y = 0.0;
  v74->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
  v73->static_fields->HelpButtonDefaultPosition = (struct UnityEngine_Vector2_o)0xC31F0000C3E10000LL;
  v73->static_fields->HelpButtonItemInfoPosition = (struct UnityEngine_Vector2_o)0xC3070000C3DC0000LL;
  v73->static_fields->VoiceButtonDefaultPosition = (struct UnityEngine_Vector2_o)0xC3600000C3E60000LL;
  v73->static_fields->VoiceButtonItemInfoPosition = (struct UnityEngine_Vector2_o)0xC2B40000C3E60000LL;
  __asm { FMOV            V0.2S, #1.0 }
  v73->static_fields->VoiceButtonDefaultScale = _D0;
  v73->static_fields->VoiceButtonItemInfoScale = (struct UnityEngine_Vector2_o)vdup_n_s32(0x3F4CCCCDu).n64_u64[0];
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
  const MethodInfo *v11; // x3

  if ( (byte_4CF17BD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent__AcceptReward_b__189_0__);
    byte_4CF17BD = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C7BD48(v4);
  receiveMissionIds = this->fields.receiveMissionIds;
  v9 = missionListViewManager->m_Items[nowType];
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__189_0__, 0);
  if ( !v9 )
LABEL_7:
    sub_1C7BD40(v4, v5);
  MasterMissionListViewManager__AcceptReward(v9, receiveMissionIds, v10, v11);
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
    sub_1C7BD48(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1C7BD40(this, isBulk);
  v6 = MasterMissionListViewManager__ReceiveMissionItems((MasterMissionListViewManager_o *)this, isBulk, method);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v21; // x20
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v22; // x22
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3

  if ( (byte_4CF17B9 & 1) == 0 )
  {
    sub_1C7BAE8(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__DisplayClass184_0__BulkReceiveConfirm_b__0__);
    sub_1C7BAE8(&MasterMissionComponent___c__DisplayClass184_0_TypeInfo);
    byte_4CF17B9 = 1;
  }
  v5 = sub_1C7BD34(MasterMissionComponent___c__DisplayClass184_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = items;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)items, v14, v15, v16, v17, v18, v19);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v21 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v5 + 24);
  v22 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_1C7BD34(MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_MasterMissionComponent___c__DisplayClass184_0__BulkReceiveConfirm_b__0__,
    v23);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_1C7BD40(v6, v7);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v21, v22, v24);
}


void MasterMissionComponent__ChangeTabImage(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MasterMissionComponent_o *v3; // x19
  struct MasterMissionTab_array *missionTabList; // x8
  UISprite_o *dailyTabBtnBase; // x20
  UISprite_o *dailyTabSprite; // x20
  int32_t nowType; // w22
  __int64 v8; // x9
  const MethodInfo *v9; // x2
  struct MasterMissionTab_array *v10; // x8
  UISprite_o *weeklyTabBtnBase; // x20
  UISprite_o *weeklyTabSprite; // x20
  int32_t v13; // w22
  __int64 v14; // x9
  const MethodInfo *v15; // x2
  struct MasterMissionTab_array *v16; // x8
  UISprite_o *extraTabBtnBase; // x20
  UISprite_o *extraTabSprite; // x20
  int32_t v19; // w22
  __int64 v20; // x9
  const MethodInfo *v21; // x2
  struct MasterMissionTab_array *v22; // x8
  UISprite_o *limitedTabBtnBase; // x20
  UISprite_o *limitedTabSprite; // x20
  int32_t v25; // w22
  __int64 v26; // x9
  int32_t v27; // w19

  v3 = this;
  if ( (byte_4CF17B4 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    byte_4CF17B4 = 1;
  }
  missionTabList = v3->fields.missionTabList;
  if ( !missionTabList )
    goto LABEL_50;
  if ( !LODWORD(missionTabList->max_length) )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)missionTabList->m_Items[0];
  if ( !this )
    goto LABEL_50;
  dailyTabBtnBase = v3->fields.dailyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 0,
                                       v2);
  if ( !dailyTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(dailyTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  dailyTabSprite = v3->fields.dailyTabSprite;
  nowType = v3->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !dailyTabSprite )
    goto LABEL_50;
  v8 = 24;
  if ( !nowType )
    v8 = 16;
  UISprite__set_spriteName(
    dailyTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v8),
    0);
  this = (MasterMissionComponent_o *)v3->fields.dailySelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 0, 0);
  this = (MasterMissionComponent_o *)v3->fields.dailyNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 0, 0);
  v10 = v3->fields.missionTabList;
  if ( !v10 )
    goto LABEL_50;
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)v10->m_Items[1];
  if ( !this )
    goto LABEL_50;
  weeklyTabBtnBase = v3->fields.weeklyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 1,
                                       v9);
  if ( !weeklyTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(weeklyTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  weeklyTabSprite = v3->fields.weeklyTabSprite;
  v13 = v3->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !weeklyTabSprite )
    goto LABEL_50;
  v14 = 40;
  if ( v13 == 1 )
    v14 = 32;
  UISprite__set_spriteName(
    weeklyTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v14),
    0);
  this = (MasterMissionComponent_o *)v3->fields.weeklySelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 1, 0);
  this = (MasterMissionComponent_o *)v3->fields.weeklyNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 1, 0);
  v16 = v3->fields.missionTabList;
  if ( !v16 )
    goto LABEL_50;
  if ( LODWORD(v16->max_length) <= 2 )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)v16->m_Items[2];
  if ( !this )
    goto LABEL_50;
  extraTabBtnBase = v3->fields.extraTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 2,
                                       v15);
  if ( !extraTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(extraTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  extraTabSprite = v3->fields.extraTabSprite;
  v19 = v3->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !extraTabSprite )
    goto LABEL_50;
  v20 = 56;
  if ( v19 == 2 )
    v20 = 48;
  UISprite__set_spriteName(
    extraTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v20),
    0);
  this = (MasterMissionComponent_o *)v3->fields.extraSelectedObj;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 2, 0),
        (this = (MasterMissionComponent_o *)v3->fields.extraNonSelectedObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 2, 0),
        (v22 = v3->fields.missionTabList) == 0) )
  {
LABEL_50:
    sub_1C7BD40(this, method);
  }
  if ( LODWORD(v22->max_length) <= 3 )
LABEL_51:
    sub_1C7BD48(this);
  this = (MasterMissionComponent_o *)v22->m_Items[3];
  if ( !this )
    goto LABEL_50;
  limitedTabBtnBase = v3->fields.limitedTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 3,
                                       v21);
  if ( !limitedTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(limitedTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  limitedTabSprite = v3->fields.limitedTabSprite;
  v25 = v3->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !limitedTabSprite )
    goto LABEL_50;
  v26 = 72;
  if ( v25 == 3 )
    v26 = 64;
  UISprite__set_spriteName(
    limitedTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v26),
    0);
  this = (MasterMissionComponent_o *)v3->fields.limitedSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 3, 0);
  this = (MasterMissionComponent_o *)v3->fields.limitedNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 3, 0);
  v27 = v3->fields.nowType;
  if ( !byte_4CE8A2C )
  {
    sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
    byte_4CE8A2C = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = v27;
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

  if ( (byte_4CF1797 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_8695/*"MISSION_ACHIVE_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3717/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_13472/*"TIME_REST_ACHIVE"*/);
    byte_4CF1797 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8695/*"MISSION_ACHIVE_MSG"*/, 0);
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
  Instance = (DataManager_o *)System_String__Equals_64212232(
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
    if ( System_String__Equals_64212232((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0) )
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0);
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
    sub_1C7BD40(Instance, v6);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13472/*"TIME_REST_ACHIVE"*/, 0);
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
  MasterMissionListViewManager_o *v5; // x8
  int32_t MissionId; // w20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v2 = this;
  if ( (byte_4CF17BA & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&StringLiteral_11200/*"REWARD_ACCEPTABLE"*/);
    byte_4CF17BA = 1;
  }
  missionListViewManager = v2->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_11;
  nowType = v2->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    goto LABEL_12;
  v5 = missionListViewManager->m_Items[nowType];
  if ( !v5
    || (this = (MasterMissionComponent_o *)v5->fields.receiveItem) == 0
    || (MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)this, 0),
        (this = (MasterMissionComponent_o *)sub_1C7BB90(int___TypeInfo, 1)) == 0) )
  {
LABEL_11:
    sub_1C7BD40(this, method);
  }
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_12:
    sub_1C7BD48(this);
  LODWORD(this->fields.myFsm) = MissionId;
  v2->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.sendMissionIds, (int32_t)this, v7, v8, v9, v10, v11, v12);
  this = (MasterMissionComponent_o *)v2->fields.myFsm;
  v2->fields.isBoardTouch = 1;
  if ( !this )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11200/*"REWARD_ACCEPTABLE"*/, 0);
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

  if ( (byte_4CF17C7 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    byte_4CF17C7 = 1;
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
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0);
  v7 = this->fields.missionListViewManager;
  if ( !v7 )
    goto LABEL_22;
  if ( LODWORD(v7->max_length) <= 1 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v7->m_Items[1];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_22;
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v8->m_Items[2];
  if ( !svtVoiceCtr
    || (ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0),
        (v9 = this->fields.missionListViewManager) == 0) )
  {
LABEL_22:
    sub_1C7BD40(svtVoiceCtr, v3);
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_23:
    sub_1C7BD48(svtVoiceCtr);
  svtVoiceCtr = (EventSvtControl_o *)v9->m_Items[3];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0);
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

  if ( (byte_4CF17A5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF17A5 = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C7BD40(titleInfo, v3);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CF179B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__ExitCompleteMission_b__150_0__);
    sub_1C7BAE8(&MasterMissionComponent___c_TypeInfo);
    byte_4CF179B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__150_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__150_0, v10, Method_MasterMissionComponent___c__ExitCompleteMission_b__150_0__, 0);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__150_0 = _9__150_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__150_0,
      (int32_t)_9__150_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v6 )
    sub_1C7BD40(v7, v4);
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
  const MethodInfo *v14; // x4
  bool IsIgnoreStartCondition; // w25
  bool v16; // w24
  int32_t MissionProgressType_47441908; // w0
  const MethodInfo *v18; // x4

  if ( (byte_4CF1798 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&MissionInfoMaker_TypeInfo);
    byte_4CF1798 = 1;
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
        sub_1C7BD48(this);
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
      v16 = v13;
      MissionProgressType_47441908 = MissionInfoMaker__GetMissionProgressType_47441908(
                                       missionTargetId,
                                       id,
                                       v16,
                                       IsIgnoreStartCondition,
                                       v14);
      this = (MasterMissionComponent_o *)MissionInfoMaker__GetProgStatus(
                                           v9->fields.missionTargetId,
                                           v9->fields.id,
                                           MissionProgressType_47441908,
                                           v16,
                                           v18);
      max_length = eventMissionList->max_length;
      ++v6;
      if ( (_DWORD)this == 3 )
        ++v7;
      if ( v6 >= max_length )
        return v7;
    }
LABEL_16:
    sub_1C7BD40(this, eventMissionList);
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
  const MethodInfo *v11; // x3

  if ( (byte_4CF17A7 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    byte_4CF17A7 = 1;
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
        sub_1C7BD48(this);
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_1C7BD34(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v10, v9, type, v11);
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
    sub_1C7BD40(this, eventMissionList);
  }
  return 0;
}


int32_t MasterMissionComponent__GetMissionTypeByTabType(int32_t tabType, const MethodInfo *method)
{
  if ( (unsigned int)(tabType - 1) > 2 )
    return 3;
  else
    return dword_D2AED0[tabType - 1];
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
    sub_1C7BD40(completeMissionIcon, method);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0);
}


void MasterMissionComponent__InitCompleteMissionLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *currentCompleteMissionList; // x0
  Il2CppObject *Item; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CF1796 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    byte_4CF1796 = 1;
  }
  currentCompleteMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_1C7BD40(0, method);
  if ( currentCompleteMissionList->fields._size < 1 )
  {
    MasterMissionComponent__HideCompleteMissionIconLb(this, method);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentCompleteMissionList,
             0,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
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

  if ( (byte_4CF179C & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF179C = 1;
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
  Instance = (MstMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (MstMissionEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_MstMissionMaster___);
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
        sub_1C7BD48(Instance);
    }
LABEL_31:
    sub_1C7BD40(Instance, v6);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  _BOOL8 _40989036; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x0
  AvalonSceneManager_c *v20; // x8
  CommonUI_o *v21; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_4CF1793 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C7BAE8(&Method_MasterMissionComponent__LoadNotificationEnd_b__140_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CF1793 = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = (struct MstMissionMaster_o *)MasterData_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mstMissionMst,
    (int32_t)MasterData_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  EventRewardSaveData__LoadAllMissionData(0);
  MasterMissionComponent__SetMissionDisp(this, v12);
  MasterMissionComponent__SetMissionClearNum(this, v13);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v14);
  Instance = (DataManager_o *)this->fields.rewardInfoController;
  if ( !Instance )
    goto LABEL_30;
  MissionRewardInfoController__SetupWindow((MissionRewardInfoController_o *)Instance, v4);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40989036(126, 0) )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v4);
    MasterMissionComponent__setGuideSvtVoice(this, v16);
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
  MasterMissionComponent__reDispMissionList(this, v15);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40989036 = TutorialFlag__Get_40989036(207, 0);
  if ( !_40989036 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_40989036, v18);
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  v21 = (CommonUI_o *)v19;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__140_0__, 0);
  if ( !v21 )
LABEL_30:
    sub_1C7BD40(Instance, v4);
  CommonUI__maskFadein(v21, DEFAULT_FADE_TIME, v23, 0);
}


void MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct MasterMissionComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v7; // x0
  QuestRewardItemAction_c *klass; // x8

  if ( (byte_4CF17C6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionComponent_OnClickBack__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CF17C6 = 1;
  }
  v3 = Method_MasterMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_MasterMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      callbackFunc->fields.method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v7->fields.friendPointBoostItemAction->klass;
  if ( !klass || (v7 = *(ScrTerminalListTop_o **)&klass->_2.element_size) == 0 )
    sub_1C7BD40(v7, v5);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v7, 0);
}


void MasterMissionComponent__OnClickBulkReceive(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CF17D1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionComponent_OnClickBulkReceive__);
    sub_1C7BAE8(&StringLiteral_3010/*"BULK_RECEIVE"*/);
    byte_4CF17D1 = 1;
  }
  v3 = Method_MasterMissionComponent_OnClickBulkReceive__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBulkReceive__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_MasterMissionComponent_OnClickBulkReceive__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C7BD40(0, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3010/*"BULK_RECEIVE"*/, 0);
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4CF179A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Array_Empty_object___);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__149_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__149_1__);
    sub_1C7BAE8(&MasterMissionComponent___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3716/*"COMPLETE_MISSION_END"*/);
    byte_4CF179A = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4CE840E )
      {
        sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
        byte_4CE840E = 1;
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
          v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v7 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v7 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
          v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
      sub_1C7BD40(Instance, v4);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMPLETE_MISSION_END"*/, 0);
    v12 = Method_System_Array_Empty_object___;
    v13 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v13 )
    {
      sub_1C51BD8(Method_System_Array_Empty_object___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C51B7C(inited);
    v16 = System_String__Format_64218356(v10, **(System_Object_array ***)(v15 + 184), 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__149_1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(_9__149_1, v20, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__149_1__, 0);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__149_1 = _9__149_1;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__149_1,
        (int32_t)_9__149_1,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
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

  if ( (byte_4CF17B5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionComponent_OnClickDailyTab__);
    byte_4CF17B5 = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_MasterMissionComponent_OnClickDailyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickDailyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_MasterMissionComponent_OnClickDailyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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

  if ( (byte_4CF17B7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionComponent_OnClickExtraTab__);
    byte_4CF17B7 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_MasterMissionComponent_OnClickExtraTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickExtraTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_MasterMissionComponent_OnClickExtraTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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

  if ( (byte_4CF17CF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionComponent_OnClickHelp__);
    byte_4CF17CF = 1;
  }
  v2 = Method_MasterMissionComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C7BB00(Method_MasterMissionComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v2, v2[4]);
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

  if ( (byte_4CF17B8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionComponent_OnClickLimitedTab__);
    byte_4CF17B8 = 1;
  }
  if ( this->fields.nowType != 3 )
  {
    v3 = Method_MasterMissionComponent_OnClickLimitedTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickLimitedTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_MasterMissionComponent_OnClickLimitedTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CF17B3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent_OnClickShopBtn__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__OnClickShopBtn_b__177_0__);
    sub_1C7BAE8(&MasterMissionComponent___c_TypeInfo);
    byte_4CF17B3 = 1;
  }
  v2 = Method_MasterMissionComponent_OnClickShopBtn__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickShopBtn__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C7BB00(Method_MasterMissionComponent_OnClickShopBtn__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__177_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__177_0, v11, Method_MasterMissionComponent___c__OnClickShopBtn_b__177_0__, 0);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__177_0 = _9__177_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__177_0,
      (int32_t)_9__177_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v7 )
    sub_1C7BD40(v8, v5);
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
      sub_1C7BD40(0, method);
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

  if ( (byte_4CF17B6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionComponent_OnClickWeeklyTab__);
    byte_4CF17B6 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_MasterMissionComponent_OnClickWeeklyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickWeeklyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_MasterMissionComponent_OnClickWeeklyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CF1791 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1791 = 1;
  }
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_1C7BD40(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
    *p_titleInfo = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.titleInfo, 0, v7, v8, v9, v10, v11, v12);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_int__o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v39; // w20
  bool v40; // w1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  TitleInfoControl_o *v51; // x21
  TitleInfoControl_o *v52; // x20
  System_Action_o *v53; // x21
  MasterMissionComponent_c *v54; // x0
  __int64 v55; // d0
  struct MstMissionEntity_array *Entitys; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v67; // x21
  ErrorDialog_c *klass; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  System_Action_o *v70; // x20

  if ( (byte_4CF1792 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_int__TypeInfo);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_MstMissionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_MstMissionEntity__TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent_LoadNotificationEnd__);
    sub_1C7BAE8(&Method_MasterMissionComponent_OnClickBack__);
    sub_1C7BAE8(&Method_MasterMissionComponent__Open_b__139_0__);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CF1792 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  CommonUI__SetLoadMode(Instance, 1, 0);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.reDispAction = redisp_act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.reDispAction,
    (int32_t)redisp_act,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_52;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0);
  v23 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v23;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentEventIdList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v30;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentMstMissionEntList,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  EventRewardSaveData__LoadMstMissionIndex(0);
  if ( typeIndex == -1 )
  {
    if ( !byte_4CE8A2D )
    {
      Instance = (CommonUI_o *)sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
      byte_4CE8A2D = 1;
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
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= max_length )
        sub_1C7BD48(Instance);
      Instance = (CommonUI_o *)missionTabList->m_Items[v39];
      if ( !Instance )
        break;
      MasterMissionTab__SetSmallTab((MasterMissionTab_o *)Instance, v10);
      max_length = missionTabList->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_15;
    }
LABEL_52:
    sub_1C7BD40(Instance, v10);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v10) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_52;
    v40 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_52;
    v40 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v40, 0);
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
                               (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_52;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.titleInfo,
      (int32_t)Component_object,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v51 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v51 )
      goto LABEL_52;
    TitleInfoControl__SetParent(v51, (UnityEngine_Transform_o *)Instance, 0);
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
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, 0, 86, 0, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__changeTitleInfo_40477940((TitleInfoControl_o *)Instance, 1, 86, 0, 0, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_52;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
    v52 = this->fields.titleInfo;
    v53 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, (intptr_t)Method_MasterMissionComponent_OnClickBack__, 0);
    if ( !v52 )
      goto LABEL_52;
    TitleInfoControl__SetBackBtnAct(v52, v53, 0);
  }
  v54 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v54 = MasterMissionComponent_TypeInfo;
  }
  v55 = *(_QWORD *)v54->static_fields;
  this->fields.currentDispId = 0;
  *(_QWORD *)&this->fields.currentEventSvtId = v55;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entitys = (struct MstMissionEntity_array *)DataMasterBase_object__object__int___getEntitys(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                               (const MethodInfo_342D580 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
  this->fields.mstMissionList = Entitys;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mstMissionList,
    (int32_t)Entitys,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  MasterMissionComponent__SetupShopBtn(this, v63);
  MasterMissionComponent__SetupCompleteBtn(this, v64);
  MasterMissionComponent__RefreshInfo(this, v65);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v67 = (System_Action_int__o *)sub_1C7BD34(System_Action_int__TypeInfo);
  System_Action_int____ctor(v67, (Il2CppObject *)this, Method_MasterMissionComponent__Open_b__139_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v67, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass )
    goto LABEL_52;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_52;
  this->fields.isTerminalTouchEnabledBeforeOpen = TitleInfoControl__IsTouchEnable(
                                                    (TitleInfoControl_o *)klass->_2.genericContainerHandle,
                                                    0);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0);
  v70 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v70, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  TerminalSceneComponent_c *v17; // x0

  if ( (byte_4CF1799 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&CompleteMissionComponent_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent_ExitCompleteMission__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__OpenCompleteMission_b__148_0__);
    sub_1C7BAE8(&MasterMissionComponent___c_TypeInfo);
    byte_4CF1799 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CompleteMissionComponent_ClickDelegate_o *)sub_1C7BD34(CompleteMissionComponent_ClickDelegate_TypeInfo);
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
    _9__148_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__148_0, v9, Method_MasterMissionComponent___c__OpenCompleteMission_b__148_0__, 0);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__148_0 = _9__148_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__148_0,
      (int32_t)_9__148_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v5, _9__148_0, 0, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v17 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v17->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_1C7BD40(mInstance, v6);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0);
}


void MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CF17D0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF17D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v3);
  CommonUI__OpenTutorialImageDialog_31505924((CommonUI_o *)Instance, 42, 207, 0, 0, 0, 0);
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

  if ( (byte_4CF17C0 & 1) == 0 )
  {
    sub_1C7BAE8(&UserPresentBoxWindow_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent__OpenPresentBox_b__192_0__);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CF17C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (UserPresentBoxWindow_ClickDelegate_o *)sub_1C7BD34(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__192_0__,
    0);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v4, 0, 0);
  v5 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v5 )
    goto LABEL_28;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v5, 34, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
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
    if ( ScrTerminalListTop__get_IsActiveAnyEarth(v5, 0) )
    {
      v5 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        if ( !byte_4CE840E )
        {
          sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
          byte_4CE840E = 1;
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
      sub_1C7BD40(v5, v6);
    }
  }
}


void MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  Il2CppObject *v4; // x20
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF17CD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17CD = 1;
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
           (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = (struct UnityEngine_GameObject_o *)v5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.btnEffectPrefab, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0, 0) )
      GameObjectExtensions__SafeSetParent_36529116(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0);
  }
}


void MasterMissionComponent__PresentBoxOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  PresentBoxOverDialog_o *presentBoxOverDialog; // x20
  System_String_o *v4; // x21
  PresentBoxOverDialog_ClickDelegate_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CF17BF & 1) == 0 )
  {
    sub_1C7BAE8(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent__PresentBoxOver_b__191_0__);
    sub_1C7BAE8(&StringLiteral_8581/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF17BF = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8581/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0);
  v5 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1C7BD34(PresentBoxOverDialog_ClickDelegate_TypeInfo);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__191_0__,
    0);
  if ( !presentBoxOverDialog )
    sub_1C7BD40(v6, v7);
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1/*""*/, v4, v5, 26, 0);
}


void MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_o *v12; // x22
  __int64 v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Int32_array *receiveMissionIds; // x8
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v23; // x19
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x2
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v27; // x19
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x3

  if ( (byte_4CF17BE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__0__);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__1__);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__2__);
    sub_1C7BAE8(&MasterMissionComponent___c__DisplayClass190_0_TypeInfo);
    byte_4CF17BE = 1;
  }
  v3 = sub_1C7BD34(MasterMissionComponent___c__DisplayClass190_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v3,
    Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__0__,
    0);
  *(_QWORD *)(v3 + 24) = v12;
  v13 = v3 + 24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v12, v14, v15, v16, v17, v18, v19);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
          sub_1C7BD48(Instance);
        v23 = missionListViewManager->m_Items[nowType];
        v24 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(
          v24,
          (Il2CppObject *)v3,
          Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__1__,
          0);
        if ( v23 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v23, v24, v25);
          return;
        }
      }
LABEL_20:
      sub_1C7BD40(Instance, v5);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v27 = this->fields.receiveMissionIds;
    v28 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v3,
      Method_MasterMissionComponent___c__DisplayClass190_0__ReceiveResultList_b__2__,
      0);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v27, v28, v29);
  }
  else
  {
    if ( !*(_QWORD *)v13 )
      goto LABEL_20;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v13 + 64LL),
      *(_QWORD *)(*(_QWORD *)v13 + 40LL));
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

  if ( (byte_4CF17CA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF17CA = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v10 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0),
        !stoneFragmentsInfoLabel) )
  {
LABEL_13:
    sub_1C7BD40(Instance, v5);
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
  const MethodInfo *v7; // x3
  MasterMissionComponent_o *v8; // x21
  _BOOL4 v9; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x20
  MasterMissionComponent_c *v12; // x0
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  __int64 v14; // x9
  __int64 v15; // x10
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x19
  MasterMissionComponent_c *v19; // x0
  struct MasterMissionComponent_StaticFields *v20; // x8
  __int64 v21; // x9
  __int64 v22; // x10
  MasterMissionComponent_c *v23; // x0
  struct MasterMissionComponent_StaticFields *v24; // x8
  __int64 v25; // x9
  __int64 v26; // x10
  Il2CppObject *v27; // x19
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4

  v4 = this;
  if ( (byte_4CF17D3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
    sub_1C7BAE8(&FSUtility_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17D3 = 1;
  }
  missionListViewManager = v4->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_50;
  nowType = v4->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C7BD48(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
    goto LABEL_50;
  this = (MasterMissionComponent_o *)MasterMissionListViewManager__GetRewardItemInfo(
                                       (MasterMissionListViewManager_o *)this,
                                       (const MethodInfo *)isMissionRewardGet);
  if ( !v4->fields.rewardInfoController )
    goto LABEL_50;
  v8 = this;
  MissionRewardInfoController__RefreshMissionRewardItemInfo(
    v4->fields.rewardInfoController,
    (System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *)this,
    isMissionRewardGet,
    v7);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__IsUnderVista(0);
  v9 = v8
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)v8,
         (const MethodInfo_34873C0 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__) > 0;
  this = (MasterMissionComponent_o *)v4->fields.helpBtn;
  if ( !this )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (MasterMissionComponent_o *)GameObjectExtensions__GetParent(gameObject, 0);
  if ( !this )
    goto LABEL_50;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
  {
    v12 = MasterMissionComponent_TypeInfo;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v12 = MasterMissionComponent_TypeInfo;
    }
    static_fields = v12->static_fields;
    v14 = 140;
    if ( v9 )
    {
      v15 = 136;
    }
    else
    {
      v14 = 132;
      v15 = 128;
    }
    LODWORD(v28.fields.x) = *(int32_t *)((char *)&static_fields->DEFAULT_SVT_ID + v15);
    LODWORD(v28.fields.y) = *(int32_t *)((char *)&static_fields->DEFAULT_SVT_ID + v14);
    GameObjectExtensions__SetLocalPosition_36523220(v11, v28, 0);
    if ( !v11 )
      goto LABEL_50;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v11,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
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
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (MasterMissionComponent_o *)GameObjectExtensions__GetParent(v17, 0);
  if ( !this )
    goto LABEL_50;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0) )
  {
    v19 = MasterMissionComponent_TypeInfo;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v19 = MasterMissionComponent_TypeInfo;
    }
    v20 = v19->static_fields;
    v21 = 156;
    if ( v9 )
    {
      v22 = 152;
    }
    else
    {
      v21 = 148;
      v22 = 144;
    }
    LODWORD(v29.fields.x) = *(int32_t *)((char *)&v20->DEFAULT_SVT_ID + v22);
    LODWORD(v29.fields.y) = *(int32_t *)((char *)&v20->DEFAULT_SVT_ID + v21);
    GameObjectExtensions__SetLocalPosition_36523220(v18, v29, 0);
    v23 = MasterMissionComponent_TypeInfo;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v23 = MasterMissionComponent_TypeInfo;
    }
    v24 = v23->static_fields;
    v25 = 172;
    if ( v9 )
    {
      v26 = 168;
    }
    else
    {
      v25 = 164;
      v26 = 160;
    }
    LODWORD(v30.fields.x) = *(int32_t *)((char *)&v24->DEFAULT_SVT_ID + v26);
    LODWORD(v30.fields.y) = *(int32_t *)((char *)&v24->DEFAULT_SVT_ID + v25);
    GameObjectExtensions__SetLocalScale_36525228(v18, v30, 0);
    if ( !v18 )
      goto LABEL_50;
    v27 = UnityEngine_GameObject__GetComponent_object_(
            v18,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MasterMissionComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v27 )
      {
        FSOffset__AddOffsetX((FSOffset_o *)v27, 0);
        FSOffset__AddBottomY((FSOffset_o *)v27, 0);
        return;
      }
LABEL_50:
      sub_1C7BD40(this, isMissionRewardGet);
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

  if ( (byte_4CF17C4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CF17C4 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)currentVoiceDataList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v12.fields._current )
        sub_1C7BD40(v4, v5);
      v6 = *(System_String_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&word_10);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__releaseAudioAssetStorage(v6, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v9 = this->fields.currentVoiceDataList;
    if ( !v9 )
      sub_1C7BD40(v7, v8);
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

  if ( (byte_4CF17BB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionComponent_missionRewardCallback__);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CF17BB = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_object )
    sub_1C7BD40(0, v5);
  EventMissionClearRewardRequest__beginRequest_44739000(
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

  if ( (byte_4CF17C9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CF17C9 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
      sub_1C7BD40(klass, v6);
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

  if ( (byte_4CF17C1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_SceneList_Type__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent_ServantOverDialogClose__);
    sub_1C7BAE8(&StringLiteral_8591/*"MASTER_MISSION_SERVANT_OVER_MSG"*/);
    byte_4CF17C1 = 1;
  }
  overflowType = this->fields.overflowType;
  servantOverDialog = this->fields.servantOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8591/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v5, 0),
        v7 = this->fields.servantOverDialog,
        v8 = (System_Action_T__o *)sub_1C7BD34(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(
          v8,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          0),
        !v7)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v7, (System_Action_SceneList_Type__o *)v8, 0),
        (v5 = (System_String_o *)this->fields.servantOverDialog) == 0) )
  {
    sub_1C7BD40(v5, v6);
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

  if ( (byte_4CF17C2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_SceneList_Type__TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent_ServantOverDialogClose__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_3446/*"CLICK_CANCEL"*/);
    byte_4CF17C2 = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v6 = (System_Action_T__o *)sub_1C7BD34(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v6, (Il2CppObject *)this, Method_MasterMissionComponent_ServantOverDialogClose__, 0);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v6, 0);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0);
      return;
    }
LABEL_9:
    sub_1C7BD40(Instance, v8);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3446/*"CLICK_CANCEL"*/, 0);
}


void MasterMissionComponent__SetAfterAction(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionComponent_o *v5; // x19
  const MethodInfo *v6; // x2

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  v5 = this;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C7BD48(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1C7BD40(this, method);
  MasterMissionListViewManager__setAfterAction((MasterMissionListViewManager_o *)this, v5->fields.receiveMissionIds, v2);
  MasterMissionComponent__RefreshMissionRewardItemInfo(v5, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionComponent__SetBtnEnable(MasterMissionComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dailyTabObj; // x0
  bool v6; // w20

  if ( (byte_4CF17C5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4CF17C5 = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0
    || (v6 = isEnable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn) == 0) )
  {
LABEL_17:
    sub_1C7BD40(dailyTabObj, isEnable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0);
}


void MasterMissionComponent__SetDailyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionEntity__o *VaildDailyMissionData; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v6; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v7; // x21
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x5
  struct MasterMissionListViewManager_array *v10; // x8
  MissionListViewManager_o *v11; // x19

  if ( (byte_4CF17A8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    byte_4CF17A8 = 1;
  }
  EventRewardSaveData__LoadDailyMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( !LODWORD(missionListViewManager->max_length) )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[0];
  VaildDailyMissionData = MasterMissionComponent__getVaildDailyMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = VaildDailyMissionData;
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, v8, 0, this->fields.reDispAction, v9);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_13;
  if ( !LODWORD(v10->max_length) )
LABEL_14:
    sub_1C7BD48(VaildDailyMissionData);
  v11 = (MissionListViewManager_o *)v10->m_Items[0];
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v11 )
LABEL_13:
    sub_1C7BD40(VaildDailyMissionData, v4);
  MissionListViewManager__SetMode_48411936(v11, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetExtraMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionEntity__o *ValidExtraMissionData; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v6; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v7; // x21
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x5
  struct MasterMissionListViewManager_array *v10; // x8
  MissionListViewManager_o *v11; // x19

  if ( (byte_4CF17AA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    byte_4CF17AA = 1;
  }
  EventRewardSaveData__LoadExtraMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( LODWORD(missionListViewManager->max_length) <= 2 )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[2];
  ValidExtraMissionData = MasterMissionComponent__getValidExtraMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = ValidExtraMissionData;
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, v8, 2, this->fields.reDispAction, v9);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_13;
  if ( LODWORD(v10->max_length) <= 2 )
LABEL_14:
    sub_1C7BD48(ValidExtraMissionData);
  v11 = (MissionListViewManager_o *)v10->m_Items[2];
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v11 )
LABEL_13:
    sub_1C7BD40(ValidExtraMissionData, v4);
  MissionListViewManager__SetMode_48411936(v11, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetLimitedMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionEntity__o *VaildLimitedMissionData; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v6; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v7; // x21
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x5
  struct MasterMissionListViewManager_array *v10; // x8
  MissionListViewManager_o *v11; // x19

  if ( (byte_4CF17AB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    byte_4CF17AB = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( LODWORD(missionListViewManager->max_length) <= 3 )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = MasterMissionComponent__getVaildLimitedMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = VaildLimitedMissionData;
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       this->fields.currentEventIdList,
                                                                                       (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, v8, 3, this->fields.reDispAction, v9);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_13;
  if ( LODWORD(v10->max_length) <= 3 )
LABEL_14:
    sub_1C7BD48(VaildLimitedMissionData);
  v11 = (MissionListViewManager_o *)v10->m_Items[3];
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v11 )
LABEL_13:
    sub_1C7BD40(VaildLimitedMissionData, v4);
  MissionListViewManager__SetMode_48411936(v11, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetLimitedMissionRestTime(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *limitedMissionAnnouncementComponent; // x20
  __int64 v4; // x1
  LimitedMissionAnnouncementComponent_o *v5; // x0

  if ( (byte_4CF17D2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17D2 = 1;
  }
  limitedMissionAnnouncementComponent = (UnityEngine_Object_o *)this->fields.limitedMissionAnnouncementComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(limitedMissionAnnouncementComponent, 0, 0) )
  {
    v5 = this->fields.limitedMissionAnnouncementComponent;
    if ( !v5 )
      sub_1C7BD40(0, v4);
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

  if ( (byte_4CF17A6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF17A6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
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
        sub_1C7BD48(Instance);
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
                                        (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
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
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
    sub_1C7BD40(Instance, v4);
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
  const MethodInfo *v2; // x2
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
  if ( (byte_4CF17AC & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    byte_4CF17AC = 1;
  }
  nowType = v3->fields.nowType;
  switch ( nowType )
  {
    case 0:
      missionListViewManager = v3->fields.missionListViewManager;
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
      v6 = v3->fields.missionListViewManager;
      if ( !v6 )
        goto LABEL_88;
      if ( LODWORD(v6->max_length) <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v6->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v7 = v3->fields.missionListViewManager;
      if ( !v7 )
        goto LABEL_88;
      if ( LODWORD(v7->max_length) <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v7->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v8 = v3->fields.missionListViewManager;
      if ( !v8 )
        goto LABEL_88;
      if ( LODWORD(v8->max_length) <= 3 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v8->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, const char *))this->klass[1]._1.name)(
        this,
        0,
        this->klass[1]._1.namespaze);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        3,
        1,
        this->klass[1]._1.implementedInterfaces);
      MasterMissionComponent__SetDailyMissionList(v3, v9);
      break;
    case 1:
      v11 = v3->fields.missionListViewManager;
      if ( !v11 )
        goto LABEL_88;
      if ( !LODWORD(v11->max_length) )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v11->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v12 = v3->fields.missionListViewManager;
      if ( !v12 )
        goto LABEL_88;
      if ( LODWORD(v12->max_length) <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v12->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v13 = v3->fields.missionListViewManager;
      if ( !v13 )
        goto LABEL_88;
      if ( LODWORD(v13->max_length) <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v13->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v14 = v3->fields.missionListViewManager;
      if ( !v14 )
        goto LABEL_88;
      if ( LODWORD(v14->max_length) <= 3 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v14->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, const char *))this->klass[1]._1.name)(
        this,
        1,
        this->klass[1]._1.namespaze);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        0,
        1,
        this->klass[1]._1.implementedInterfaces);
      MasterMissionComponent__SetWeeklyMissionList(v3, v15);
      break;
    case 2:
      v16 = v3->fields.missionListViewManager;
      if ( !v16 )
        goto LABEL_88;
      if ( !LODWORD(v16->max_length) )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v16->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v17 = v3->fields.missionListViewManager;
      if ( !v17 )
        goto LABEL_88;
      if ( LODWORD(v17->max_length) <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v17->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v18 = v3->fields.missionListViewManager;
      if ( !v18 )
        goto LABEL_88;
      if ( LODWORD(v18->max_length) <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v18->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v19 = v3->fields.missionListViewManager;
      if ( !v19 )
        goto LABEL_88;
      if ( LODWORD(v19->max_length) <= 3 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v19->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, const char *))this->klass[1]._1.name)(
        this,
        0,
        this->klass[1]._1.namespaze);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        3,
        1,
        this->klass[1]._1.implementedInterfaces);
      MasterMissionComponent__SetExtraMissionList(v3, v20);
      break;
    case 3:
      v21 = v3->fields.missionListViewManager;
      if ( !v21 )
        goto LABEL_88;
      if ( !LODWORD(v21->max_length) )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v21->m_Items[0];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v22 = v3->fields.missionListViewManager;
      if ( !v22 )
        goto LABEL_88;
      if ( LODWORD(v22->max_length) <= 1 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v22->m_Items[1];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v23 = v3->fields.missionListViewManager;
      if ( !v23 )
        goto LABEL_88;
      if ( LODWORD(v23->max_length) <= 2 )
        goto LABEL_89;
      this = (MasterMissionComponent_o *)v23->m_Items[2];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v24 = v3->fields.missionListViewManager;
      if ( !v24 )
        goto LABEL_88;
      if ( LODWORD(v24->max_length) <= 3 )
LABEL_89:
        sub_1C7BD48(this);
      this = (MasterMissionComponent_o *)v24->m_Items[3];
      if ( !this )
        goto LABEL_88;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, const char *))this->klass[1]._1.name)(
        this,
        0,
        this->klass[1]._1.namespaze);
      this = (MasterMissionComponent_o *)v3->fields.shopBtn;
      if ( !this )
        goto LABEL_88;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
        this,
        3,
        1,
        this->klass[1]._1.implementedInterfaces);
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
    method = (const MethodInfo *)dword_D2AED0[nowType - 1];
  if ( !rewardInfoController )
LABEL_88:
    sub_1C7BD40(this, method);
  MissionRewardInfoController__SetRewardItemTitle(rewardInfoController, (int32_t)method, v2);
  MasterMissionComponent__RefreshMissionRewardItemInfo(v3, 0, v27);
  MasterMissionComponent__setMissionCompleteNum(v3, v28);
}


void MasterMissionComponent__SetWeeklyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionEntity__o *VaildWeeklyMissionData; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v6; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v7; // x21
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x5
  struct MasterMissionListViewManager_array *v10; // x8
  MissionListViewManager_o *v11; // x19

  if ( (byte_4CF17A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    byte_4CF17A9 = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( LODWORD(missionListViewManager->max_length) <= 1 )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = MasterMissionComponent__getVaildWeeklyMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = VaildWeeklyMissionData;
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                      this->fields.currentEventIdList,
                                                                                      (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, v8, 1, this->fields.reDispAction, v9);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_13;
  if ( LODWORD(v10->max_length) <= 1 )
LABEL_14:
    sub_1C7BD48(VaildWeeklyMissionData);
  v11 = (MissionListViewManager_o *)v10->m_Items[1];
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v11 )
LABEL_13:
    sub_1C7BD40(VaildWeeklyMissionData, v4);
  MissionListViewManager__SetMode_48411936(v11, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetupCompleteBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentCompleteMissionList; // x21
  int32_t size; // w2
  int v6; // w9
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x22
  MstMissionEntity_array *EnableMissions; // x24
  int max_length; // w8
  UserEventMissionMaster_o *v19; // x25
  unsigned int v20; // w28
  int32_t v21; // w20
  MstMissionEntity_o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  DataManager_o *v25; // x27
  int32_t CompleteMissionClearCount; // w26
  int m_CancellationTokenSource; // w25
  __int64 v28; // x8
  int v29; // w22
  __int64 v30; // x24
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v44; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v46; // x8
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  Il2CppObject *cNoticeNumberPrefab; // x22
  Il2CppObject *v50; // x22
  Il2CppObject *Component_object; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  UIWidget_o *v58; // x22
  struct NoticeNumberComponent_o *v59; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v61; // x1

  if ( (byte_4CF1795 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    sub_1C7BAE8(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1795 = 1;
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
    v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v7;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.currentCompleteMissionList,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_48;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_48;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v21 = 0;
  }
  else
  {
    v19 = (UserEventMissionMaster_o *)Instance;
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        goto LABEL_49;
      v22 = EnableMissions->m_Items[v20];
      if ( !v22 )
        goto LABEL_48;
      if ( !MasterData_object )
        goto LABEL_48;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    (EventMissionMaster_o *)MasterData_object,
                                    v22->fields.id,
                                    0);
      if ( !Instance )
        goto LABEL_48;
      v25 = Instance;
      if ( Instance->fields.m_CancellationTokenSource )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)Instance,
                                      (EventMissionEntity_array *)Instance,
                                      v23,
                                      v24);
        v21 += CompleteMissionClearCount;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v22, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_33;
    }
    if ( !v19 )
      goto LABEL_48;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v19, v22->fields.id, 0);
    m_CancellationTokenSource = (int)v25->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
LABEL_49:
      sub_1C7BD48(Instance);
    v28 = *(_QWORD *)&v25->fields._DispLog;
    if ( !v28 )
      goto LABEL_48;
    v29 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_48;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v28 + 28), 0);
    Instance = (DataManager_o *)this->fields.completeMissionIcon;
    if ( !Instance )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    v30 = sub_1C7BD34(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    System_Object___ctor((Il2CppObject *)v30, 0);
    *(_QWORD *)(v30 + 16) = v22;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 16), (int32_t)v22, v31, v32, v33, v34, v35, v36);
    *(_DWORD *)(v30 + 24) = m_CancellationTokenSource;
    *(_DWORD *)(v30 + 28) = CompleteMissionClearCount;
    *(_DWORD *)(v30 + 32) = v29;
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_48;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    v44 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_48;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v30,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v46 + 32) = v30;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v46 + 32), v30, v37, v38, v39, v40, v41, v42);
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
    v50 = UnityEngine_Object__Instantiate_object_(
            cNoticeNumberPrefab,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_36529116(
      (UnityEngine_GameObject_o *)v50,
      this->fields.completeMissionNoticeRoot,
      0);
    if ( v50 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v50,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.mCompleteMissionNoticeNumber,
        (int32_t)Component_object,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0);
        v58 = (UIWidget_o *)Instance;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        if ( v58 )
        {
          UIWidget__set_depth(v58, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0);
          UIWidget__set_width(v58, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0);
          UIWidget__set_height(v58, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0);
          v59 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v59->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v59->fields.numberLabel,
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
    sub_1C7BD40(Instance, v15);
  }
LABEL_46:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_48;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v21, 0);
  MasterMissionComponent__InitCompleteMissionLb(this, v61);
}


void MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  UISprite_o *shopBtnSp; // x20

  if ( (byte_4CF1794 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_17570/*"btn_event_3"*/);
    byte_4CF1794 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0);
  shopBtnSp = this->fields.shopBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_17570/*"btn_event_3"*/, 0);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0);
}


bool MasterMissionComponent__ShouldPlayedStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t UserStoneFragmentNum; // w0
  const MethodInfo *v6; // x2
  int32_t ExchangeStoneCount; // w19

  if ( (byte_4CF17CC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CF17CC = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v4);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CF17CE & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17CE = 1;
  }
  btnEffectPrefab = (UnityEngine_Object_o *)this->fields.btnEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(btnEffectPrefab, 0, 0) )
  {
    p_btnEffectPrefab = &this->fields.btnEffectPrefab;
    if ( !*p_btnEffectPrefab )
      sub_1C7BD40(0, v4);
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0);
    v6 = *p_btnEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)v6, 0);
    *p_btnEffectPrefab = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_btnEffectPrefab, 0, v7, v8, v9, v10, v11, v12);
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
    sub_1C7BD48(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1C7BD40(this, method);
  MasterMissionListViewManager__unAcceptableDlg((MasterMissionListViewManager_o *)this, method);
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

  if ( (byte_4CF17C8 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CF17C8 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
      sub_1C7BD40(v4, v5);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  int32_t ExchangeStoneCount; // w0
  int32_t v16; // w23
  MasterMissionComponent_c *v17; // x0
  UILabel_o *stoneConvertCount; // x22
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v20; // w1
  UnityEngine_Object_o *btnEffectBasePrefab; // x22
  const MethodInfo *v22; // x1
  AssetLoader_LoadEndDataHandler_o *v23; // x19
  int32_t v24; // w20
  const MethodInfo *v25; // x1
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CF17CB & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__DisplayClass207_0__UpdateStoneExchangeCount_b__0__);
    sub_1C7BAE8(&MasterMissionComponent___c__DisplayClass207_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5883/*"Effect/Common"*/);
    byte_4CF17CB = 1;
  }
  v26 = 0;
  v5 = sub_1C7BD34(MasterMissionComponent___c__DisplayClass207_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_27;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v14);
  *(_DWORD *)(v5 + 24) = ExchangeStoneCount;
  v16 = ExchangeStoneCount;
  v17 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v17 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v17->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v16 > STONE_EXCHENGE_DISP_LIMIT )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
    }
    v26 = STONE_EXCHENGE_DISP_LIMIT;
    stoneConvertLimit = System_Int32__ToString((int32_t)&v26, 0);
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
          v20 = 1;
          goto LABEL_17;
        }
      }
    }
LABEL_27:
    sub_1C7BD40(stoneConvertLimit, v7);
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
  v20 = 0;
LABEL_17:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneConvertLimit, v20, 0);
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0, 0) )
  {
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      (Il2CppObject *)v5,
      Method_MasterMissionComponent___c__DisplayClass207_0__UpdateStoneExchangeCount_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5883/*"Effect/Common"*/, v23, 1, 0);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v22);
    if ( this->fields.nowType == 1 )
    {
      v24 = *(_DWORD *)(v5 + 24);
      if ( v24 >= StoneShopMaster__GetPayMultiTimePrice(0) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v25);
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

  if ( (byte_4CF17D6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF17D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
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
  ErrorDialog_c *klass; // x8
  ErrorDialog_c *v7; // x8
  __int64 *v8; // x8

  if ( (byte_4CF17D8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11713/*"SERVANT_OVER"*/);
    sub_1C7BAE8(&StringLiteral_3446/*"CLICK_CANCEL"*/);
    byte_4CF17D8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  CommonUI__CloseUsrPresentList(Instance, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
    goto LABEL_24;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass )
    goto LABEL_29;
  Instance = *(CommonUI_o **)&klass->_2.element_size;
  if ( !Instance )
    goto LABEL_29;
  if ( !ScrTerminalListTop__get_IsActiveAnyEarth((ScrTerminalListTop_o *)Instance, 0) )
    goto LABEL_24;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = Instance->fields.errorDialog->klass;
  if ( !v7 || (Instance = *(CommonUI_o **)&v7->_2.element_size) == 0 )
LABEL_29:
    sub_1C7BD40(Instance, v5);
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0);
LABEL_24:
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_29;
  if ( this->fields.overflowType )
    v8 = &StringLiteral_11713/*"SERVANT_OVER"*/;
  else
    v8 = &StringLiteral_3446/*"CLICK_CANCEL"*/;
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

  if ( (byte_4CF17D5 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CF17D5 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !stoneInfoLabel )
    sub_1C7BD40(NumberFormat, v7);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  System_Action_o *v15; // x20

  if ( (byte_4CF17D7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__DisplayClass191_0__PresentBoxOver_b__1__);
    sub_1C7BAE8(&MasterMissionComponent___c__DisplayClass191_0_TypeInfo);
    byte_4CF17D7 = 1;
  }
  v5 = sub_1C7BD34(MasterMissionComponent___c__DisplayClass191_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_MasterMissionComponent___c__DisplayClass191_0__PresentBoxOver_b__1__,
          0),
        !presentBoxOverDialog) )
  {
    sub_1C7BD40(v6, v7);
  }
  PresentBoxOverDialog__Close_32875040(presentBoxOverDialog, v15, 0);
}


void MasterMissionComponent___setRecieveModifyItem_b__195_0(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CF17D9 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5447/*"END_DISP"*/);
    byte_4CF17D9 = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v3);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v4);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C7BD40(0, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5447/*"END_DISP"*/, 0);
}


void MasterMissionComponent__checkIsOpen(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  MstMissionDisplayInfoMaster_o *v5; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct MstMissionMaster_o *mstMissionMst; // x8
  bool v14; // w22
  bool v15; // w23
  int32_t v16; // w1
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 *v24; // x24
  __int64 *v25; // x8
  struct System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  if ( (byte_4CF179D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_8840/*"MST_REMISSON_MSG"*/);
    sub_1C7BAE8(&StringLiteral_8838/*"MST_REDISP_MSG"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_8841/*"MST_REMISSON_TITLE_TXT"*/);
    sub_1C7BAE8(&StringLiteral_8839/*"MST_REDISP_TITLE_TXT"*/);
    byte_4CF179D = 1;
  }
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
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
      v14 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0);
      goto LABEL_11;
    }
LABEL_28:
    sub_1C7BD40(Instance, v4);
  }
  v14 = 0;
LABEL_11:
  v15 = list
     && System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__) >= 1
     && !MstMissionDisplayInfoMaster__IsOpenNow(v5, 0)
     && !MstMissionDisplayInfoMaster__IsBefOpenTime(v5, 0);
  v16 = StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.titleTxt, v16, v7, v8, v9, v10, v11, v12);
  v17 = StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.msgTxt, v17, v18, v19, v20, v21, v22, v23);
  if ( v14 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = &StringLiteral_8840/*"MST_REMISSON_MSG"*/;
    v25 = &StringLiteral_8841/*"MST_REMISSON_TITLE_TXT"*/;
LABEL_23:
    v26 = LocalizationManager__Get((System_String_o *)*v25, 0);
    this->fields.titleTxt = v26;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.titleTxt, (int32_t)v26, v27, v28, v29, v30, v31, v32);
    v33 = LocalizationManager__Get((System_String_o *)*v24, 0);
    this->fields.msgTxt = v33;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.msgTxt, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    goto LABEL_24;
  }
  if ( v15 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = &StringLiteral_8838/*"MST_REDISP_MSG"*/;
    v25 = &StringLiteral_8839/*"MST_REDISP_TITLE_TXT"*/;
    goto LABEL_23;
  }
LABEL_24:
  this->fields.isNotNext = v14 || v15;
}


void MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_1C7BD40(0, method);
  StandFigureBack__DestroyFigure(standFigureBack, 0);
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getVaildDailyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  MasterMissionComponent_o *v7; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v9; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v12; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  struct MstMissionEntity_array *mstMissionList; // x24
  int max_length; // w8
  unsigned int v17; // w25
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  intptr_t v32; // x8
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  MstMissionDisplayInfoEntity_o *v43; // x0
  __int64 v44; // x1
  MstMissionDisplayInfoEntity_o *v45; // x24
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v56; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  int v69; // w8
  int32_t v70; // w23
  int32_t v71; // w21

  v7 = this;
  if ( (byte_4CF179F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF179F = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v9 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v9;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = currentMstMissionEntList->fields._size;
  v12 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0);
  v7->fields.currentMissionDispInfoEnt = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v7->fields.currentMissionDispInfoEnt, 0, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C7BD48(this);
      v18 = &mstMissionList->obj.klass + (int)v17;
      v19 = v18[4];
      if ( !v19 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v18[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__GetDailyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v19->_1.name),
                                             0);
        if ( !this )
          break;
        method = (const MethodInfo *)this;
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v14,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v19->_1.name);
          m_CachedPtr = this->fields.m_CachedPtr;
          v27 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          this = (MasterMissionComponent_o *)v7->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v29 = this->fields.m_CachedPtr;
          v30 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v29 )
            break;
          v31 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v19,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * v31;
            LODWORD(this->fields.m_CancellationTokenSource) = v31 + 1;
            *(_QWORD *)(v32 + 32) = v19;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)v19, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1C7BD40(this, method);
  }
LABEL_29:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
          goto LABEL_38;
      }
      v38 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_38:
      v38 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
            Enumerator,
            *(_QWORD *)(v38 + 8))
        & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    v40 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v41 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_45;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_45:
      v42 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v43 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                             Enumerator,
                                             *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( !v43 )
      sub_1C7BD40(0, v44);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v43, 0);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v45->fields.guideImageId;
      if ( v45->fields.guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = isOpenNow->static_fields;
      }
      if ( !v7 )
        sub_1C7BD40(isOpenNow, v47);
      v7->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v45->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v56 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v56 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v56->static_fields->DEFAULT_LIMITCNT;
      }
      v7->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v45->fields.talkIds;
      v7->fields.voiceNameList = talkIds;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v7->fields.voiceNameList,
        (int32_t)talkIds,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      id = v45->fields.id;
      v7->fields.currentMissionDispInfoEnt = v45;
      v7->fields.currentDispId = id;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v7->fields.currentMissionDispInfoEnt,
        (int32_t)v45,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
  }
  v65 = Enumerator->klass;
  v66 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_63;
    }
    v68 = (__int64)&v65->vtable[*v67];
  }
  else
  {
LABEL_63:
    v68 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(Enumerator, *(_QWORD *)(v68 + 8));
  if ( v14 )
  {
    v69 = v14->fields._size;
    if ( v69 < 1 )
    {
      return 0;
    }
    else
    {
      v7->fields.totalMissionNum = v69;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v14,
                                           0,
                                           (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      v70 = this->fields.m_CachedPtr;
      if ( v14->fields._size >= 1 )
      {
        v71 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v14,
                                               v71,
                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( v70 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v14,
                                                 v71,
                                                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            v70 = this->fields.m_CachedPtr;
          }
        }
        while ( ++v71 < v14->fields._size );
      }
      v7->fields.currentMissionId = v70;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v14;
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getVaildLimitedMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  MasterMissionComponent_o *v7; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v9; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v12; // w9
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v14; // x20
  System_Collections_Generic_List_object__o *v15; // x21
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v18; // w27
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x24
  int32_t name_high; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  intptr_t v34; // x8
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  MstMissionDisplayInfoEntity_o *v45; // x0
  __int64 v46; // x1
  MstMissionDisplayInfoEntity_o *v47; // x25
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v58; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  int v71; // w8
  int v72; // w24
  int32_t v73; // w22

  v7 = this;
  if ( (byte_4CF17A2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF17A2 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_84;
  v9 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v9;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_84;
  size = currentMstMissionEntList->fields._size;
  v12 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0);
  v7->fields.currentMissionDispInfoEnt = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v7->fields.currentMissionDispInfoEnt, 0, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_84;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_1C7BD48(this);
      v19 = &mstMissionList->obj.klass + (int)v18;
      v20 = v19[4];
      if ( !v20 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v19[4], 0);
      if ( !MasterData_object )
        break;
      name_high = HIDWORD(v20->_1.name);
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
            if ( !v15 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v15,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)HIDWORD(v20->_1.name);
            m_CachedPtr = this->fields.m_CachedPtr;
            v29 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v7->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v31 = this->fields.m_CachedPtr;
            v32 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v31 )
              break;
            v33 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v20,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = v31 + 8 * v33;
              LODWORD(this->fields.m_CancellationTokenSource) = v33 + 1;
              *(_QWORD *)(v34 + 32) = v20;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v34 + 32), (int32_t)v20, v22, v23, v24, v25, v26, v27);
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
        if ( !v14 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v14,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_32;
    }
LABEL_84:
    sub_1C7BD40(this, method);
  }
LABEL_32:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_84;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_84;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_41;
      }
      v40 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_41:
      v40 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8))
        & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    v42 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v43 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_48;
      }
      v44 = (__int64)&v41->vtable[*v43];
    }
    else
    {
LABEL_48:
      v44 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v45 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                             Enumerator,
                                             *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      sub_1C7BD40(0, v46);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v45, 0);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v47->fields.guideImageId;
      if ( v47->fields.guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = isOpenNow->static_fields;
      }
      if ( !v7 )
        sub_1C7BD40(isOpenNow, v49);
      v7->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v47->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v58 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v58 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v58->static_fields->DEFAULT_LIMITCNT;
      }
      v7->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v47->fields.talkIds;
      v7->fields.voiceNameList = talkIds;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v7->fields.voiceNameList,
        (int32_t)talkIds,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      id = v47->fields.id;
      v7->fields.currentMissionDispInfoEnt = v47;
      v7->fields.currentDispId = id;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v7->fields.currentMissionDispInfoEnt,
        (int32_t)v47,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
  }
  v67 = Enumerator->klass;
  v68 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v69 = &v67->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      --v68;
      v69 += 4;
      if ( !v68 )
        goto LABEL_66;
    }
    v70 = (__int64)&v67->vtable[*v69];
  }
  else
  {
LABEL_66:
    v70 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
                                       Enumerator,
                                       *(_QWORD *)(v70 + 8));
  if ( v15 && (v71 = v15->fields._size, v71 >= 1) )
  {
    v7->fields.totalMissionNum = v71;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v15,
                                         0,
                                         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_84;
    if ( v15->fields._size >= 1 )
    {
      v72 = this->fields.m_CachedPtr;
      v73 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v15,
                                             v73,
                                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_84;
        if ( v72 > SLODWORD(this->fields.m_CachedPtr) )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v15,
                                               v73,
                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_84;
          v72 = this->fields.m_CachedPtr;
        }
      }
      while ( ++v73 < v15->fields._size );
    }
    v7->fields.currentMissionId = 0;
    if ( !v14 )
      goto LABEL_84;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)v15,
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v14 )
      goto LABEL_84;
    if ( v14->fields._size <= 0 )
      return 0;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v14;
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getVaildWeeklyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  MasterMissionComponent_o *v7; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v9; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v12; // w9
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v14; // x20
  System_Collections_Generic_List_object__o *v15; // x21
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v18; // w28
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x24
  int32_t name_high; // w1
  MasterMissionComponent_o *v22; // x25
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  intptr_t v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  intptr_t v35; // x8
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  MstMissionDisplayInfoEntity_o *v46; // x0
  __int64 v47; // x1
  MstMissionDisplayInfoEntity_o *v48; // x25
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v59; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  System_Collections_Generic_IEnumerator_T__c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  int v72; // w8
  int32_t v73; // w24
  int32_t v74; // w22

  v7 = this;
  if ( (byte_4CF17A0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF17A0 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_83;
  v9 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v9;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_83;
  size = currentMstMissionEntList->fields._size;
  v12 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0);
  v7->fields.currentMissionDispInfoEnt = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v7->fields.currentMissionDispInfoEnt, 0, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_83;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_1C7BD48(this);
      v19 = &mstMissionList->obj.klass + (int)v18;
      v20 = v19[4];
      if ( !v20 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v19[4], 0);
      if ( !MasterData_object )
        break;
      name_high = HIDWORD(v20->_1.name);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__GetWeeklyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             name_high,
                                             0);
        if ( !this )
          break;
        v22 = this;
        if ( this->fields.m_CancellationTokenSource )
        {
          this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)HIDWORD(v20->_1.name);
          m_CachedPtr = this->fields.m_CachedPtr;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          if ( !v15 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v15,
            (System_Collections_Generic_IEnumerable_T__o *)v22,
            (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v7->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v32 = this->fields.m_CachedPtr;
          v33 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v32 )
            break;
          v34 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v20,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = v32 + 8 * v34;
            LODWORD(this->fields.m_CancellationTokenSource) = v34 + 1;
            *(_QWORD *)(v35 + 32) = v20;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 32), (int32_t)v20, v26, v27, v28, v29, v30, v31);
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
        if ( !v14 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v14,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_31;
    }
LABEL_83:
    sub_1C7BD40(this, method);
  }
LABEL_31:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_83;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v36);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        p_offset += 4;
        if ( !v39 )
          goto LABEL_40;
      }
      v41 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_40:
      v41 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
            Enumerator,
            *(_QWORD *)(v41 + 8))
        & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    v43 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v44 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_47;
      }
      v45 = (__int64)&v42->vtable[*v44];
    }
    else
    {
LABEL_47:
      v45 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v46 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                             Enumerator,
                                             *(_QWORD *)(v45 + 8));
    v48 = v46;
    if ( !v46 )
      sub_1C7BD40(0, v47);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v46, 0);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v48->fields.guideImageId;
      if ( v48->fields.guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = isOpenNow->static_fields;
      }
      if ( !v7 )
        sub_1C7BD40(isOpenNow, v50);
      v7->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v48->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v59 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v59 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v59->static_fields->DEFAULT_LIMITCNT;
      }
      v7->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v48->fields.talkIds;
      v7->fields.voiceNameList = talkIds;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v7->fields.voiceNameList,
        (int32_t)talkIds,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      id = v48->fields.id;
      v7->fields.currentMissionDispInfoEnt = v48;
      v7->fields.currentDispId = id;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v7->fields.currentMissionDispInfoEnt,
        (int32_t)v48,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
    }
  }
  v68 = Enumerator->klass;
  v69 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_65;
    }
    v71 = (__int64)&v68->vtable[*v70];
  }
  else
  {
LABEL_65:
    v71 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v71)(
                                       Enumerator,
                                       *(_QWORD *)(v71 + 8));
  if ( v15 && (v72 = v15->fields._size, v72 >= 1) )
  {
    v7->fields.totalMissionNum = v72;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v15,
                                         0,
                                         (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_83;
    v73 = this->fields.m_CachedPtr;
    if ( v15->fields._size >= 1 )
    {
      v74 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v15,
                                             v74,
                                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_83;
        if ( v73 > SLODWORD(this->fields.m_CachedPtr) )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v15,
                                               v74,
                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_83;
          v73 = this->fields.m_CachedPtr;
        }
      }
      while ( ++v74 < v15->fields._size );
    }
    v7->fields.currentMissionId = v73;
    if ( !v14 )
      goto LABEL_83;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)v15,
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v14 )
      goto LABEL_83;
    if ( v14->fields._size <= 0 )
      return 0;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v14;
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getValidExtraMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  MasterMissionComponent_o *v7; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v9; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int32_t size; // w2
  int v12; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  struct MstMissionEntity_array *mstMissionList; // x24
  int max_length; // w8
  unsigned int v17; // w25
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  intptr_t v32; // x8
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  MstMissionDisplayInfoEntity_o *v43; // x0
  __int64 v44; // x1
  MstMissionDisplayInfoEntity_o *v45; // x24
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct MasterMissionComponent_StaticFields *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v56; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  int v69; // w8
  int v70; // w23
  int32_t v71; // w21

  v7 = this;
  if ( (byte_4CF17A1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF17A1 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v9 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v9;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = currentMstMissionEntList->fields._size;
  v12 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0);
  v7->fields.currentMissionDispInfoEnt = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v7->fields.currentMissionDispInfoEnt, 0, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C7BD48(this);
      v18 = &mstMissionList->obj.klass + (int)v17;
      v19 = v18[4];
      if ( !v19 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v18[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__GetExtraMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v19->_1.name),
                                             0);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !v14 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v14,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)HIDWORD(v19->_1.name);
            m_CachedPtr = this->fields.m_CachedPtr;
            v27 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v7->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v29 = this->fields.m_CachedPtr;
            v30 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v29 )
              break;
            v31 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v19,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = v29 + 8 * v31;
              LODWORD(this->fields.m_CancellationTokenSource) = v31 + 1;
              *(_QWORD *)(v32 + 32) = v19;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)v19, v20, v21, v22, v23, v24, v25);
            }
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1C7BD40(this, method);
  }
LABEL_29:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
          goto LABEL_38;
      }
      v38 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_38:
      v38 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
            Enumerator,
            *(_QWORD *)(v38 + 8))
        & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    v40 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v41 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_45;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_45:
      v42 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v43 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                             Enumerator,
                                             *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( !v43 )
      sub_1C7BD40(0, v44);
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v43, 0);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      p_guideImageId = (struct MasterMissionComponent_StaticFields *)&v45->fields.guideImageId;
      if ( v45->fields.guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = isOpenNow->static_fields;
      }
      if ( !v7 )
        sub_1C7BD40(isOpenNow, v47);
      v7->fields.currentEventSvtId = p_guideImageId->DEFAULT_SVT_ID;
      guideLimitCount = v45->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v56 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v56 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v56->static_fields->DEFAULT_LIMITCNT;
      }
      v7->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v45->fields.talkIds;
      v7->fields.voiceNameList = talkIds;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v7->fields.voiceNameList,
        (int32_t)talkIds,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      id = v45->fields.id;
      v7->fields.currentMissionDispInfoEnt = v45;
      v7->fields.currentDispId = id;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v7->fields.currentMissionDispInfoEnt,
        (int32_t)v45,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
  }
  v65 = Enumerator->klass;
  v66 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_63;
    }
    v68 = (__int64)&v65->vtable[*v67];
  }
  else
  {
LABEL_63:
    v68 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(Enumerator, *(_QWORD *)(v68 + 8));
  if ( v14 )
  {
    v69 = v14->fields._size;
    if ( v69 < 1 )
    {
      return 0;
    }
    else
    {
      v7->fields.totalMissionNum = v69;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v14,
                                           0,
                                           (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      if ( v14->fields._size >= 1 )
      {
        v70 = this->fields.m_CachedPtr;
        v71 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v14,
                                               v71,
                                               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( v70 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v14,
                                                 v71,
                                                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            v70 = this->fields.m_CachedPtr;
          }
        }
        while ( ++v71 < v14->fields._size );
      }
      v7->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v14;
}


int32_t MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4CF1790 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CF1790 = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1C7BD40(0, v5);
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
    sub_1C7BD40(this, method);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_1C7BD48(this);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  MasterMissionComponent_o *v13; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  struct System_Int32_array *m_CachedPtr; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct PlayMakerFSM_o *v24; // x10
  MasterMissionListViewManager_o *v25; // x21
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x1
  struct FsmTemplate_o *fsmTemplate; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  v4 = this;
  if ( (byte_4CF17BC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11127/*"REQUEST_OK"*/);
    sub_1C7BAE8(&StringLiteral_11125/*"REQUEST_NG"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CF17BC = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( !System_String__Equals_64212232(result, (System_String_o *)StringLiteral_22419/*"ng"*/, 0) )
  {
    v6 = (Il2CppObject *)System_String__Concat_64215176(
                           (System_String_o *)StringLiteral_15862/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16114/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                         v6,
                                         (const MethodInfo_31DEFB4 *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( this )
    {
      v13 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_21;
      myFsm = this->fields.myFsm;
      if ( !myFsm )
        goto LABEL_20;
      v4->fields.isOverPresentBox = (bool)myFsm->fields.m_CancellationTokenSource;
      v4->fields.overflowType = HIDWORD(myFsm->fields.m_CancellationTokenSource);
      m_CachedPtr = (struct System_Int32_array *)myFsm->fields.m_CachedPtr;
      v4->fields.receiveMissionIds = m_CachedPtr;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v4->fields.receiveMissionIds,
        (int32_t)m_CachedPtr,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      missionListViewManager = v4->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_20;
      nowType = v4->fields.nowType;
      if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length)
        || !LODWORD(v13->fields.m_CancellationTokenSource) )
      {
LABEL_21:
        sub_1C7BD48(this);
      }
      v24 = v13->fields.myFsm;
      if ( v24 )
      {
        v25 = missionListViewManager->m_Items[nowType];
        if ( v25 )
        {
          fsm = v24->fields.fsm;
          fsmTemplate = v24->fields.fsmTemplate;
          v25->fields.getSvtList = (struct GetSvts_array *)fsm;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v25->fields.getSvtList,
            (int32_t)fsm,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          v25->fields.getCommandCodeList = (struct GetCommandCodes_array *)fsmTemplate;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v25->fields.getCommandCodeList,
            (int32_t)fsmTemplate,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          this = (MasterMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v5 = &StringLiteral_11127/*"REQUEST_OK"*/;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_20:
    sub_1C7BD40(this, result);
  }
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_20;
  v5 = &StringLiteral_11125/*"REQUEST_NG"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void MasterMissionComponent__playEventMissionSvtVoice(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        const MethodInfo *method)
{
  bool _40989036; // w0
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CF17B0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent_setNormalFace__);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CF17B0 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40989036 = TutorialFlag__Get_40989036(126, 0);
  if ( voiceIDs && !_40989036 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0);
    if ( !svtVoiceCtr )
      sub_1C7BD40(v9, v10);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v8, 0);
  }
}


void MasterMissionComponent__playEventMissionSvtVoice_47459804(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  bool _40989036; // w0
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v25; // x20

  if ( (byte_4CF17B1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__DisplayClass174_0__playEventMissionSvtVoice_b__0__);
    sub_1C7BAE8(&MasterMissionComponent___c__DisplayClass174_0_TypeInfo);
    byte_4CF17B1 = 1;
  }
  v7 = sub_1C7BD34(MasterMissionComponent___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = action;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)action, v16, v17, v18, v19, v20, v21);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40989036 = TutorialFlag__Get_40989036(126, 0);
  if ( voiceIDs && !_40989036 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v25 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v7,
      Method_MasterMissionComponent___c__DisplayClass174_0__playEventMissionSvtVoice_b__0__,
      0);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v25, 0);
      return;
    }
LABEL_11:
    sub_1C7BD40(v8, v9);
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

  if ( (byte_4CF17AF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C7BAE8(&Method_MasterMissionComponent_setNormalFace__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17AF = 1;
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
      if ( !byte_4CE7E5E )
      {
        voicePlayEffect = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E5E = 1;
      }
      if ( !v7
        || (UnityEngine_Transform__set_localScale(v7, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0 )
      {
LABEL_20:
        sub_1C7BD40(voicePlayEffect, v5);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct MstMissionDisplayInfoEntity_o *v29; // x8
  int v30; // w8
  __int64 *v31; // x8
  struct System_String_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 *v39; // x8
  struct System_String_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  TerminalSceneComponent_c *v47; // x0
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v50; // x21
  MasterMissionComponent___c_c *v51; // x8
  System_Action_o *_9__153_0; // x22
  Il2CppObject *v53; // x23
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7

  if ( (byte_4CF179E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent___c__reDispMissionList_b__153_0__);
    sub_1C7BAE8(&MasterMissionComponent___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8840/*"MST_REMISSON_MSG"*/);
    sub_1C7BAE8(&StringLiteral_8838/*"MST_REDISP_MSG"*/);
    sub_1C7BAE8(&StringLiteral_8841/*"MST_REMISSON_TITLE_TXT"*/);
    sub_1C7BAE8(&StringLiteral_8839/*"MST_REDISP_TITLE_TXT"*/);
    byte_4CF179E = 1;
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
                                                                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
          if ( currentMstMissionEntList )
          {
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
            if ( !currentMstMissionEntList )
              goto LABEL_59;
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                      currentMstMissionEntList,
                                                                                      v11,
                                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
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
                                                                                        (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
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
                                                                                        (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
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
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8841/*"MST_REMISSON_TITLE_TXT"*/, 0);
        this->fields.titleTxt = v15;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.titleTxt, (int32_t)v15, v16, v17, v18, v19, v20, v21);
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"MST_REMISSON_MSG"*/, 0);
        this->fields.msgTxt = v22;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.msgTxt, (int32_t)v22, v23, v24, v25, v26, v27, v28);
        v14 = 1;
      }
      v29 = this->fields.currentMissionDispInfoEnt;
      if ( !v29 )
        goto LABEL_59;
      if ( v7 >= v29->fields.endedAt )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v31 = &StringLiteral_8841/*"MST_REMISSON_TITLE_TXT"*/;
        if ( !v14 )
          v31 = &StringLiteral_8839/*"MST_REDISP_TITLE_TXT"*/;
        v32 = LocalizationManager__Get((System_String_o *)*v31, 0);
        this->fields.titleTxt = v32;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.titleTxt, (int32_t)v32, v33, v34, v35, v36, v37, v38);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v39 = &StringLiteral_8840/*"MST_REMISSON_MSG"*/;
        if ( !v14 )
          v39 = &StringLiteral_8838/*"MST_REDISP_MSG"*/;
        v40 = LocalizationManager__Get((System_String_o *)*v39, 0);
        this->fields.msgTxt = v40;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.msgTxt, (int32_t)v40, v41, v42, v43, v44, v45, v46);
        v30 = 1;
      }
      else
      {
        v30 = 0;
      }
      isNotNext = this->fields.isNotNext;
      LODWORD(currentMissionDispInfoEnt) = v30 | v14;
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
    v47 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v47 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v47->static_fields->MASTER_MISSION_RESET_KEY, 0);
    currentMstMissionEntList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    titleTxt = this->fields.titleTxt;
    msgTxt = this->fields.msgTxt;
    v50 = (CommonUI_o *)currentMstMissionEntList;
    v51 = MasterMissionComponent___c_TypeInfo;
    if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v51 = MasterMissionComponent___c_TypeInfo;
    }
    _9__153_0 = v51->static_fields->__9__153_0;
    if ( !_9__153_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = MasterMissionComponent___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v51->static_fields->__9;
      _9__153_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(_9__153_0, v53, Method_MasterMissionComponent___c__reDispMissionList_b__153_0__, 0);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__153_0 = _9__153_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__153_0,
        (int32_t)_9__153_0,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    if ( v50 )
    {
      CommonUI__OpenNotificationDialog(v50, titleTxt, msgTxt, _9__153_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_59:
    sub_1C7BD40(currentMstMissionEntList, v4);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct StandFigureBack_o *standFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  const MethodInfo *v18; // x1

  if ( (byte_4CF17AE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
    byte_4CF17AE = 1;
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
                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
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
                                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
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
                                     (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
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
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)((char *)currentVoiceDataList + 88),
                      (int32_t)standFigureCollectList,
                      v10,
                      v11,
                      v12,
                      v13,
                      v14,
                      v15);
                    MasterMissionComponent__playSvtVoice(this, v18);
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
    sub_1C7BD40(currentVoiceDataList, method);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v24; // x22
  struct System_String_o *VoiceAssetName; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  struct System_String_array *voiceNameList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v35; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Collections_Generic_List_object__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  MasterMissionComponent_VoiceData_o *v56; // x22
  const MethodInfo *v57; // x4
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  int32_t v68; // w8
  Il2CppObject *current; // x21
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  SoundManager_o *v72; // x20
  System_String_o *klass; // x21
  System_Action_o *v74; // x22
  __int64 v75; // x0
  __int64 v76; // x1
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+0h] [xbp-70h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CF17A4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&MasterMissionComponent_VoiceData_TypeInfo);
    byte_4CF17A4 = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  memset(&v77, 0, sizeof(v77));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v6 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v7;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentVoiceDataList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v14;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.voiceListRand, (int32_t)v14, v16, v17, v18, v19, v20, v21);
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
  v24 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0);
  this->fields.lastAssetName = VoiceAssetName;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.lastAssetName,
    (int32_t)VoiceAssetName,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    max_length = voiceNameList->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v35 = 0;
        do
        {
          if ( v35 >= (unsigned int)max_length )
            sub_1C7BD48(MstMissionVoiceListByName);
          MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                        v24,
                                        voiceNameList->m_Items[v35],
                                        0);
          if ( MstMissionVoiceListByName )
          {
            p_obj = &MstMissionVoiceListByName->obj;
            Instance = *p_voiceListRand;
            if ( !*p_voiceListRand )
              goto LABEL_37;
            v42 = *((_QWORD *)Instance + 2);
            v43 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++*((_DWORD *)Instance + 7);
            if ( !v42 )
              goto LABEL_37;
            v44 = *((int *)Instance + 6);
            if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                p_obj,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = v42 + 8 * v44;
              *((_DWORD *)Instance + 6) = v44 + 1;
              *(_QWORD *)(v45 + 32) = p_obj;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v45 + 32), (int32_t)p_obj, v36, v37, v38, v39, v40, v41);
            }
          }
          LODWORD(max_length) = voiceNameList->max_length;
        }
        while ( (__int64)++v35 < (int)max_length );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v24, 0);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.voiceListMission,
    (int32_t)MasterMissionActionVoiceList,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  currentVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v56 = (MasterMissionComponent_VoiceData_o *)sub_1C7BD34(MasterMissionComponent_VoiceData_TypeInfo);
  MasterMissionComponent_VoiceData___ctor(v56, VoiceAssetName, voiceListRand, voiceListMission, v57);
  if ( !currentVoiceDataList
    || (items = currentVoiceDataList->fields._items,
        v65 = Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__,
        ++currentVoiceDataList->fields._version,
        !items) )
  {
LABEL_37:
    sub_1C7BD40(Instance, p_obj);
  }
  size = currentVoiceDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      currentVoiceDataList,
      (Il2CppObject *)v56,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = &items->obj.klass + size;
    currentVoiceDataList->fields._size = size + 1;
    v67[4] = (Il2CppClass *)v56;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v67 + 4), (int32_t)v56, v58, v59, v60, v61, v62, v63);
  }
LABEL_25:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_37;
  v68 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v68;
  if ( v68 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, (const MethodInfo *)p_obj);
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v77,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v77.fields._current;
      v70 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_1C7BD40(v70, v71);
      v72 = (SoundManager_o *)v70;
      klass = (System_String_o *)current[1].klass;
      v74 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v74, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0);
      if ( !v72 )
        sub_1C7BD40(v75, v76);
      SoundManager__LoadAudioAssetStorage(v72, klass, v74, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v77,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
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

  if ( (byte_4CF17A3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_8580/*"MASTER_MISSION_COMPLETE_NUM"*/);
    byte_4CF17A3 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
                                    (const MethodInfo_3821AE8 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1C7BD40(Instance, v4);
  }
LABEL_11:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8580/*"MASTER_MISSION_COMPLETE_NUM"*/, 0);
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
    Instance = (DataManager_o *)System_String__Format_64218220(v10, v12, v13, 0);
    if ( !eventMissionTxt2 )
      goto LABEL_24;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0);
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    v14 = this->fields.eventMissionTxt2;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    if ( !v14 )
      goto LABEL_24;
    UILabel__SetCondensedScale_50047964(
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
    Instance = (DataManager_o *)System_String__Format_64218220(v10, v16, v17, 0);
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

  if ( (byte_4CF17AD & 1) == 0 )
  {
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    byte_4CF17AD = 1;
  }
  v3 = MasterMissionComponent_TypeInfo;
  standFigureBack = this->fields.standFigureBack;
  currentEventSvtId = this->fields.currentEventSvtId;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !standFigureBack )
    sub_1C7BD40(v3, method);
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

  if ( (byte_4CF17B2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17B2 = 1;
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
    sub_1C7BD40(voicePlayEffect, v4);
  StandFigureBack__SetFaceType((StandFigureBack_o *)voicePlayEffect, 0, 0.0, 0, 0);
}


void MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MasterMissionComponent_o *v3; // x19
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct MasterMissionListViewManager_array *v6; // x8
  __int64 v7; // x9
  MissionListViewManager_o *v8; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x1

  v3 = this;
  if ( (byte_4CF17C3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (MasterMissionComponent_o *)sub_1C7BAE8(&Method_MasterMissionComponent__setRecieveModifyItem_b__195_0__);
    byte_4CF17C3 = 1;
  }
  missionListViewManager = v3->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_10;
  nowType = v3->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    goto LABEL_11;
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this
    || (MasterMissionListViewManager__ModifyItem(
          (MasterMissionListViewManager_o *)this,
          v3->fields.receiveMissionIds,
          v2),
        (v6 = v3->fields.missionListViewManager) == 0) )
  {
LABEL_10:
    sub_1C7BD40(this, method);
  }
  v7 = v3->fields.nowType;
  if ( (unsigned int)v7 >= LODWORD(v6->max_length) )
LABEL_11:
    sub_1C7BD48(this);
  v8 = (MissionListViewManager_o *)v6->m_Items[v7];
  v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v3, Method_MasterMissionComponent__setRecieveModifyItem_b__195_0__, 0);
  if ( !v8 )
    goto LABEL_10;
  MissionListViewManager__SetMode(v8, 3, v9, 0);
  MasterMissionComponent__RefreshInfo(v3, v10);
}


void MasterMissionComponent__stopSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    sub_1C7BD40(0, method);
  EventSvtControl__stopVoice(svtVoiceCtr, 0);
  MasterMissionComponent__setNormalFace(this, v4);
}


void MasterMissionComponent_ClickDelegate___ctor(
        MasterMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB4F2C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB4EE4;
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
  if ( (byte_4CF17DA & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CF17DA = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._MstMissionEntity_k__BackingField = mstMission;
  v10 = (MasterMissionComponent_MasterMissionInfoItem_o *)((char *)v10 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v10, (int32_t)mstMission, v11, v12, v13, v14, v15, v16);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MstMissionEntity_k__BackingField = value;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void MasterMissionComponent_VoiceData___ctor(
        MasterMissionComponent_VoiceData_o *this,
        System_String_o *voiceDataName,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListRand,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListMission,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.DataName = voiceDataName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)voiceDataName, v9, v10, v11, v12, v13, v14);
  this->fields.DataListRand = voiceDataListRand;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.DataListRand,
    (int32_t)voiceDataListRand,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.DataListMission = voiceDataListMission;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.DataListMission,
    (int32_t)voiceDataListMission,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void MasterMissionComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF17DB & 1) == 0 )
  {
    sub_1C7BAE8(&MasterMissionComponent___c_TypeInfo);
    byte_4CF17DB = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(MasterMissionComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterMissionComponent___c_TypeInfo->static_fields->__9 = (struct MasterMissionComponent___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)MasterMissionComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  ErrorDialog_c *klass; // x8

  if ( (byte_4CF17DD & 1) == 0 )
  {
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CF17DD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseCompleteMission(Instance, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    goto LABEL_21;
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
  TerminalSceneComponent__playBgm_45868472((TerminalSceneComponent_o *)Instance, 0);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass || (Instance = *(CommonUI_o **)&klass->_2.instance_size) == 0 )
LABEL_21:
    sub_1C7BD40(Instance, v3);
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

  if ( (byte_4CF17DF & 1) == 0 )
  {
    sub_1C7BAE8(&SceneJumpInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_13141/*"StoneFragments"*/);
    byte_4CF17DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        v4 = (SceneJumpInfo_o *)sub_1C7BD34(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_42057500(v4, (System_String_o *)StringLiteral_13141/*"StoneFragments"*/, 0),
        !v4)
    || (SceneJumpInfo__SetReturnNowScene(v4, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C7BD40(Instance, v3);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
}


void MasterMissionComponent___c___OpenCompleteMission_b__148_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_4CF17DC & 1) == 0 )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CF17DC = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance )
    sub_1C7BD40(0, method);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0);
}


void MasterMissionComponent___c___reDispMissionList_b__153_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CF17DE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CF17DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v3);
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
  if ( !_4__this || (MasterMissionComponent__setNormalFace(_4__this, method), (action = this->fields.action) == 0) )
    sub_1C7BD40(_4__this, method);
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
  __int64 v7; // x1
  __int64 MissionId; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  __int64 *v12; // x8
  struct MasterMissionComponent_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct MasterMissionComponent_o *v20; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4CF17E0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&StringLiteral_3453/*"CLICK_DECIDE"*/);
    this = (MasterMissionComponent___c__DisplayClass184_0_o *)sub_1C7BAE8(&StringLiteral_3446/*"CLICK_CANCEL"*/);
    byte_4CF17E0 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v6 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (MasterMissionComponent___c__DisplayClass184_0_o *)v4->fields.items;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v22 = v21;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__) )
      {
        if ( !v22.fields._current )
          sub_1C7BD40(0, v7);
        MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v22.fields._current, 0);
        if ( !v6 )
          sub_1C7BD40(MissionId, (unsigned int)MissionId);
        items = v6->fields._items;
        v10 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          sub_1C7BD40(MissionId, (unsigned int)MissionId);
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            MissionId,
            *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = MissionId;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v6 )
      {
        v13 = v4->fields.__4__this;
        this = (MasterMissionComponent___c__DisplayClass184_0_o *)System_Collections_Generic_List_int___ToArray(
                                                                    v6,
                                                                    (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v13 )
        {
          v13->fields.sendMissionIds = (struct System_Int32_array *)this;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v13->fields.sendMissionIds,
            (int32_t)this,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
          v20 = v4->fields.__4__this;
          if ( v20 )
          {
            this = (MasterMissionComponent___c__DisplayClass184_0_o *)v20->fields.myFsm;
            if ( this )
            {
              v12 = &StringLiteral_3453/*"CLICK_DECIDE"*/;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C7BD40(this, isDecide);
  }
  this = (MasterMissionComponent___c__DisplayClass184_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_25;
  v12 = &StringLiteral_3446/*"CLICK_CANCEL"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v12, 0);
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
  if ( (byte_4CF17E1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_11713/*"SERVANT_OVER"*/);
    sub_1C7BAE8(&StringLiteral_10473/*"PRESENT_BOX_OVER"*/);
    this = (MasterMissionComponent___c__DisplayClass190_0_o *)sub_1C7BAE8(&StringLiteral_3446/*"CLICK_CANCEL"*/);
    byte_4CF17E1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterMissionComponent___c__DisplayClass190_0_o *)_4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( this )
    {
      v4 = (__int64 *)&StringLiteral_10473/*"PRESENT_BOX_OVER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C7BD40(this, method);
  }
  if ( !this )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v4 = &StringLiteral_11713/*"SERVANT_OVER"*/;
  else
    v4 = &StringLiteral_3446/*"CLICK_CANCEL"*/;
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
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
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
  MasterMissionComponent___c__DisplayClass191_0_o *v2; // x19
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4CF17E2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_11713/*"SERVANT_OVER"*/);
    this = (MasterMissionComponent___c__DisplayClass191_0_o *)sub_1C7BAE8(&StringLiteral_3446/*"CLICK_CANCEL"*/);
    byte_4CF17E2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  if ( v2->fields.isPresentBoxOpen )
  {
    MasterMissionComponent__OpenPresentBox(_4__this, method);
    return;
  }
  this = (MasterMissionComponent___c__DisplayClass191_0_o *)_4__this->fields.myFsm;
  if ( !this )
LABEL_11:
    sub_1C7BD40(this, method);
  if ( _4__this->fields.overflowType )
    v4 = &StringLiteral_11713/*"SERVANT_OVER"*/;
  else
    v4 = &StringLiteral_3446/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v4, 0);
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
  MasterMissionComponent_o *Object_object__51713432; // x0
  struct MasterMissionComponent_o *_4__this; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct MasterMissionComponent_o *v13; // x8
  int32_t exchangeCount; // w20

  if ( (byte_4CF17E3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    byte_4CF17E3 = 1;
  }
  Object_object__51713432 = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !assetData )
    goto LABEL_14;
  Object_object__51713432 = (MasterMissionComponent_o *)AssetData__GetObject_object__51713432(
                                                          assetData,
                                                          MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
                                                          (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_object__51713432;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.btnEffectBasePrefab,
    (int32_t)Object_object__51713432,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Object_object__51713432 = this->fields.__4__this;
  if ( !Object_object__51713432 )
    goto LABEL_14;
  MasterMissionComponent__StopStoneButtonEffect(Object_object__51713432, (const MethodInfo *)assetData);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_14;
  if ( v13->fields.nowType == 1 )
  {
    exchangeCount = this->fields.exchangeCount;
    if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0) )
    {
      Object_object__51713432 = this->fields.__4__this;
      if ( Object_object__51713432 )
      {
        MasterMissionComponent__PlayStoneButtonEffect(Object_object__51713432, (const MethodInfo *)assetData);
        return;
      }
LABEL_14:
      sub_1C7BD40(Object_object__51713432, assetData);
    }
  }
}


void MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}