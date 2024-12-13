void __fastcall MasterMissionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  int64_t v18; // x1
  int64_t v19; // x1
  struct MasterMissionComponent_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  struct MasterMissionComponent_StaticFields *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct MasterMissionComponent_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  struct MasterMissionComponent_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  struct MasterMissionComponent_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  struct MasterMissionComponent_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x1
  struct MasterMissionComponent_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  struct MasterMissionComponent_StaticFields *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct MasterMissionComponent_StaticFields *v83; // x8

  if ( (byte_4B39B91 & 1) == 0 )
  {
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_17792/*"btn_txt_off_limited"*/, v8);
    sub_1BD3458(&StringLiteral_17791/*"btn_txt_off_extra"*/, v9);
    sub_1BD3458(&StringLiteral_17798/*"btn_txt_on_limited"*/, v10);
    sub_1BD3458(&StringLiteral_19036/*"ef_btn_blink"*/, v11);
    sub_1BD3458(&StringLiteral_17790/*"btn_txt_off_daily"*/, v12);
    sub_1BD3458(&StringLiteral_17796/*"btn_txt_on_daily"*/, v13);
    sub_1BD3458(&StringLiteral_17799/*"btn_txt_on_weekly"*/, v14);
    sub_1BD3458(&StringLiteral_17793/*"btn_txt_off_weekly"*/, v15);
    sub_1BD3458(&StringLiteral_17797/*"btn_txt_on_extra"*/, v16);
    byte_4B39B91 = 1;
  }
  static_fields = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_SVT_ID = 9000001LL;
  static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  v18 = StringLiteral_17796/*"btn_txt_on_daily"*/;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17796/*"btn_txt_on_daily"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v18, v2, v3, v4, v5, v6, v7);
  v19 = StringLiteral_17790/*"btn_txt_off_daily"*/;
  v20 = MasterMissionComponent_TypeInfo->static_fields;
  v20->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17790/*"btn_txt_off_daily"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v20->DAILY_OFF_SPRITE_LABEL, v19, v21, v22, v23, v24, v25, v26);
  v27 = StringLiteral_17799/*"btn_txt_on_weekly"*/;
  v28 = MasterMissionComponent_TypeInfo->static_fields;
  v28->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17799/*"btn_txt_on_weekly"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v28->WEEKLY_ON_SPRITE_LABEL, v27, v29, v30, v31, v32, v33, v34);
  v35 = StringLiteral_17793/*"btn_txt_off_weekly"*/;
  v36 = MasterMissionComponent_TypeInfo->static_fields;
  v36->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17793/*"btn_txt_off_weekly"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v36->WEEKLY_OFF_SPRITE_LABEL, v35, v37, v38, v39, v40, v41, v42);
  v43 = StringLiteral_17797/*"btn_txt_on_extra"*/;
  v44 = MasterMissionComponent_TypeInfo->static_fields;
  v44->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17797/*"btn_txt_on_extra"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v44->EXTRA_ON_SPRITE_LABEL, v43, v45, v46, v47, v48, v49, v50);
  v51 = StringLiteral_17791/*"btn_txt_off_extra"*/;
  v52 = MasterMissionComponent_TypeInfo->static_fields;
  v52->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17791/*"btn_txt_off_extra"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v52->EXTRA_OFF_SPRITE_LABEL, v51, v53, v54, v55, v56, v57, v58);
  v59 = StringLiteral_17798/*"btn_txt_on_limited"*/;
  v60 = MasterMissionComponent_TypeInfo->static_fields;
  v60->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17798/*"btn_txt_on_limited"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v60->LIMITED_ON_SPRITE_LABEL, v59, v61, v62, v63, v64, v65, v66);
  v67 = StringLiteral_17792/*"btn_txt_off_limited"*/;
  v68 = MasterMissionComponent_TypeInfo->static_fields;
  v68->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17792/*"btn_txt_off_limited"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v68->LIMITED_OFF_SPRITE_LABEL, v67, v69, v70, v71, v72, v73, v74);
  v75 = StringLiteral_19036/*"ef_btn_blink"*/;
  v76 = MasterMissionComponent_TypeInfo->static_fields;
  v76->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_19036/*"ef_btn_blink"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v76->STONE_EXCHENGE_BUTTON_EFFECT_NAME, v75, v77, v78, v79, v80, v81, v82);
  v83 = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&v83->SLIDE_IN_TIME = 0x42B800003DCCCCCDLL;
  *(_OWORD *)&v83->NOTICE_NUMBER_BADGE_DEPTH = xmmword_BD7640;
  *(_QWORD *)&v83->NOTICE_NUMBER_LABEL_WIDTH = 28LL;
  v83->BLANK_EARTH_WINDOW_POS.fields.y = 0.0;
  v83->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
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
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  System_Int32_array *receiveMissionIds; // x20
  MasterMissionListViewManager_o *v10; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_4B39B7C & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_MasterMissionComponent__AcceptReward_b__187_0__, v4);
    byte_4B39B7C = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BD36BC(v5, v6);
  receiveMissionIds = this->fields.receiveMissionIds;
  v10 = missionListViewManager->m_Items[nowType];
  v11 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__187_0__, 0LL);
  if ( !v10 )
LABEL_7:
    sub_1BD36B4(v5, v6);
  MasterMissionListViewManager__AcceptReward(v10, receiveMissionIds, v11, v12);
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
    sub_1BD36BC(this, isBulk);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1BD36B4(this, isBulk);
  v6 = MasterMissionListViewManager__ReceiveMissionItems((MasterMissionListViewManager_o *)this, isBulk, method);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v23; // x20
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v24; // x22

  if ( (byte_4B39B78 & 1) == 0 )
  {
    sub_1BD3458(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo, items);
    sub_1BD3458(&Method_MasterMissionComponent___c__DisplayClass182_0__BulkReceiveConfirm_b__0__, v5);
    sub_1BD3458(&MasterMissionComponent___c__DisplayClass182_0_TypeInfo, v6);
    byte_4B39B78 = 1;
  }
  v7 = sub_1BD36A4(MasterMissionComponent___c__DisplayClass182_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = items;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)items, v16, v17, v18, v19, v20, v21);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v23 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v7 + 24);
  v24 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_1BD36A4(MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_MasterMissionComponent___c__DisplayClass182_0__BulkReceiveConfirm_b__0__,
    0LL);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_1BD36B4(v8, v9);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v23, v24, 0LL);
}


void __fastcall MasterMissionComponent__ChangeTabImage(MasterMissionComponent_o *this, const MethodInfo *method)
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
  __int64 v23; // x1
  int32_t v24; // w19

  v2 = this;
  if ( (byte_4B39B73 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BD3458(&MasterMissionComponent_TypeInfo, method);
    byte_4B39B73 = 1;
  }
  missionTabList = v2->fields.missionTabList;
  if ( !missionTabList )
    goto LABEL_50;
  if ( !missionTabList->max_length )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)missionTabList->m_Items[0];
  if ( !this )
    goto LABEL_50;
  dailyTabBtnBase = v2->fields.dailyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 0,
                                       0LL);
  if ( !dailyTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(dailyTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  dailyTabSprite = v2->fields.dailyTabSprite;
  nowType = v2->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !dailyTabSprite )
    goto LABEL_50;
  v7 = 24LL;
  if ( !nowType )
    v7 = 16LL;
  UISprite__set_spriteName(
    dailyTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v7),
    0LL);
  this = (MasterMissionComponent_o *)v2->fields.dailySelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 0, 0LL);
  this = (MasterMissionComponent_o *)v2->fields.dailyNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 0, 0LL);
  v8 = v2->fields.missionTabList;
  if ( !v8 )
    goto LABEL_50;
  if ( v8->max_length <= 1 )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)v8->m_Items[1];
  if ( !this )
    goto LABEL_50;
  weeklyTabBtnBase = v2->fields.weeklyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 1,
                                       0LL);
  if ( !weeklyTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(weeklyTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  weeklyTabSprite = v2->fields.weeklyTabSprite;
  v11 = v2->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !weeklyTabSprite )
    goto LABEL_50;
  v12 = 40LL;
  if ( v11 == 1 )
    v12 = 32LL;
  UISprite__set_spriteName(
    weeklyTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v12),
    0LL);
  this = (MasterMissionComponent_o *)v2->fields.weeklySelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 1, 0LL);
  this = (MasterMissionComponent_o *)v2->fields.weeklyNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 1, 0LL);
  v13 = v2->fields.missionTabList;
  if ( !v13 )
    goto LABEL_50;
  if ( v13->max_length <= 2 )
    goto LABEL_51;
  this = (MasterMissionComponent_o *)v13->m_Items[2];
  if ( !this )
    goto LABEL_50;
  extraTabBtnBase = v2->fields.extraTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 2,
                                       0LL);
  if ( !extraTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(extraTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  extraTabSprite = v2->fields.extraTabSprite;
  v16 = v2->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !extraTabSprite )
    goto LABEL_50;
  v17 = 56LL;
  if ( v16 == 2 )
    v17 = 48LL;
  UISprite__set_spriteName(
    extraTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v17),
    0LL);
  this = (MasterMissionComponent_o *)v2->fields.extraSelectedObj;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 2, 0LL),
        (this = (MasterMissionComponent_o *)v2->fields.extraNonSelectedObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 2, 0LL),
        (v18 = v2->fields.missionTabList) == 0LL) )
  {
LABEL_50:
    sub_1BD36B4(this, method);
  }
  if ( v18->max_length <= 3 )
LABEL_51:
    sub_1BD36BC(this, method);
  this = (MasterMissionComponent_o *)v18->m_Items[3];
  if ( !this )
    goto LABEL_50;
  limitedTabBtnBase = v2->fields.limitedTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 3,
                                       0LL);
  if ( !limitedTabBtnBase )
    goto LABEL_50;
  UISprite__set_spriteName(limitedTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  limitedTabSprite = v2->fields.limitedTabSprite;
  v21 = v2->fields.nowType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !limitedTabSprite )
    goto LABEL_50;
  v22 = 72LL;
  if ( v21 == 3 )
    v22 = 64LL;
  UISprite__set_spriteName(
    limitedTabSprite,
    *(System_String_o **)((char *)&MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID + v22),
    0LL);
  this = (MasterMissionComponent_o *)v2->fields.limitedSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 3, 0LL);
  this = (MasterMissionComponent_o *)v2->fields.limitedNonSelectedObj;
  if ( !this )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 3, 0LL);
  v24 = v2->fields.nowType;
  if ( !byte_4B39BC3 )
  {
    sub_1BD3458(&EventRewardSaveData_TypeInfo, v23);
    byte_4B39BC3 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = v24;
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

  if ( (byte_4B39B57 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionInfo);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1BD3458(&LocalizationManager_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BD3458(&StringLiteral_8780/*"MISSION_ACHIVE_MSG"*/, v8);
    sub_1BD3458(&StringLiteral_3819/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, v9);
    sub_1BD3458(&StringLiteral_1/*""*/, v10);
    sub_1BD3458(&StringLiteral_13507/*"TIME_REST_ACHIVE"*/, v11);
    byte_4B39B57 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8780/*"MISSION_ACHIVE_MSG"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Equals_62533564(
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
    if ( System_String__Equals_62533564((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0LL) )
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0LL);
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
    sub_1BD36B4(Instance, v13);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13507/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !completeMissionAlertMsgLb )
    goto LABEL_36;
  v23 = (System_String_o *)Instance;
  Instance = (DataManager_o *)completeMissionAlertMsgLb;
LABEL_34:
  UILabel__set_text((UILabel_o *)Instance, v23, 0LL);
}


void __fastcall MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  __int64 v3; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v6; // x8
  int32_t MissionId; // w20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v2 = this;
  if ( (byte_4B39B79 & 1) == 0 )
  {
    sub_1BD3458(&int___TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_1BD3458(&StringLiteral_11273/*"REWARD_ACCEPTABLE"*/, v3);
    byte_4B39B79 = 1;
  }
  missionListViewManager = v2->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_11;
  nowType = v2->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_12;
  v6 = missionListViewManager->m_Items[nowType];
  if ( !v6
    || (this = (MasterMissionComponent_o *)v6->fields.receiveItem) == 0LL
    || (MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)this, 0LL),
        (this = (MasterMissionComponent_o *)sub_1BD3500(int___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_11:
    sub_1BD36B4(this, method);
  }
  method = (const MethodInfo *)this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_12:
    sub_1BD36BC(this, method);
  LODWORD(this->fields.myFsm) = MissionId;
  v2->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.sendMissionIds, (int64_t)this, v8, v9, v10, v11, v12, v13);
  this = (MasterMissionComponent_o *)v2->fields.myFsm;
  v2->fields.isBoardTouch = 1;
  if ( !this )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11273/*"REWARD_ACCEPTABLE"*/, 0LL);
}


void __fastcall MasterMissionComponent__Close(MasterMissionComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4B39B86 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    byte_4B39B86 = 1;
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
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL);
  v7 = this->fields.missionListViewManager;
  if ( !v7 )
    goto LABEL_22;
  if ( v7->max_length <= 1 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v7->m_Items[1];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_22;
  if ( v8->max_length <= 2 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v8->m_Items[2];
  if ( !svtVoiceCtr
    || (ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL),
        (v9 = this->fields.missionListViewManager) == 0LL) )
  {
LABEL_22:
    sub_1BD36B4(svtVoiceCtr, v3);
  }
  if ( v9->max_length <= 3 )
LABEL_23:
    sub_1BD36BC(svtVoiceCtr, v3);
  svtVoiceCtr = (EventSvtControl_o *)v9->m_Items[3];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL);
  EventRewardSaveData__SaveAllMissionData(0LL);
  svtVoiceCtr = (EventSvtControl_o *)this->fields.completeMissionIconSprite;
  if ( !svtVoiceCtr )
    goto LABEL_22;
  CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)svtVoiceCtr, 0LL);
  svtVoiceCtr = (EventSvtControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtVoiceCtr, 0, 0LL);
  MasterMissionComponent__UpdateEventInfos(v10, v11);
}


void __fastcall MasterMissionComponent__EndLoadVoiceAssets(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B39B65 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B39B65 = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BD36B4(titleInfo, v3);
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
  System_Action_o *_9__148_0; // x20
  Il2CppObject *v14; // x21
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B39B5B & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, isDecide);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BD3458(&Method_MasterMissionComponent___c__ExitCompleteMission_b__148_0__, v5);
    sub_1BD3458(&MasterMissionComponent___c_TypeInfo, v6);
    byte_4B39B5B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  _9__148_0 = v11->static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MasterMissionComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__148_0 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(_9__148_0, v14, Method_MasterMissionComponent___c__ExitCompleteMission_b__148_0__, 0LL);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__148_0 = _9__148_0;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__148_0,
      (int64_t)_9__148_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v10 )
    sub_1BD36B4(v11, v8);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, _9__148_0, 0LL);
}


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
  int32_t MissionProgressType; // w0

  if ( (byte_4B39B58 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BD3458(&MissionInfoMaker_TypeInfo, eventMissionList);
    byte_4B39B58 = 1;
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
        sub_1BD36BC(this, eventMissionList);
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
      MissionProgressType = MissionInfoMaker__GetMissionProgressType(
                              missionTargetId,
                              id,
                              v15,
                              IsIgnoreStartCondition,
                              0LL);
      this = (MasterMissionComponent_o *)MissionInfoMaker__GetProgStatus(
                                           v9->fields.missionTargetId,
                                           v9->fields.id,
                                           MissionProgressType,
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
    sub_1BD36B4(this, eventMissionList);
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
  const MethodInfo *v11; // x3

  if ( (byte_4B39B67 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BD3458(&MasterMissionListViewItem_TypeInfo, eventMissionList);
    byte_4B39B67 = 1;
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
        sub_1BD36BC(this, eventMissionList);
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_1BD36A4(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v10, v9, type, v11);
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
    sub_1BD36B4(this, eventMissionList);
  }
  return 0;
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
    sub_1BD36B4(completeMissionIcon, method);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0LL);
}


void __fastcall MasterMissionComponent__InitCompleteMissionLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *currentCompleteMissionList; // x0
  Il2CppObject *Item; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B39B56 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v3);
    byte_4B39B56 = 1;
  }
  currentCompleteMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_1BD36B4(0LL, method);
  if ( currentCompleteMissionList->fields._size < 1 )
  {
    MasterMissionComponent__HideCompleteMissionIconLb(this, method);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentCompleteMissionList,
             0,
             (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
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
  int64_t data; // x9
  bool result; // w0
  BalanceConfig_c *v20; // x0

  if ( (byte_4B39B5C & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_MstMissionMaster___, v2);
    sub_1BD3458(&NetworkManager_TypeInfo, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B39B5C = 1;
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
  Instance = (MstMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (MstMissionEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MstMissionMaster___);
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
        sub_1BD36BC(Instance, v9);
    }
LABEL_31:
    sub_1BD36B4(Instance, v9);
  }
  v14 = -1LL;
LABEL_25:
  result = 0;
  if ( Time < NoneExpireTime && v14 <= Time )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    return NoneExpireTime < v20->static_fields->NoneExpireTime;
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  _BOOL8 _38470128; // x0
  const MethodInfo *v24; // x1
  Il2CppObject *v25; // x0
  AvalonSceneManager_c *v26; // x8
  CommonUI_o *v27; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_4B39B53 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_MstMissionMaster___, v4);
    sub_1BD3458(&Method_MasterMissionComponent__LoadNotificationEnd_b__138_0__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BD3458(&TutorialFlag_TypeInfo, v8);
    byte_4B39B53 = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = (struct MstMissionMaster_o *)MasterData_object;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.mstMissionMst,
    (int64_t)MasterData_object,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  EventRewardSaveData__LoadAllMissionData(0LL);
  MasterMissionComponent__SetMissionDisp(this, v18);
  MasterMissionComponent__SetMissionClearNum(this, v19);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v20);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38470128(126, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_29;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0LL);
    Instance = (DataManager_o *)this->fields.playBtnImg;
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v10);
    MasterMissionComponent__setGuideSvtVoice(this, v22);
    Instance = (DataManager_o *)this->fields.playBtnImg;
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  MasterMissionComponent__reDispMissionList(this, v21);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38470128 = TutorialFlag__Get_38470128(207, 0LL);
  if ( !_38470128 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_38470128, v24);
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  v27 = (CommonUI_o *)v25;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__138_0__, 0LL);
  if ( !v27 )
LABEL_29:
    sub_1BD36B4(Instance, v10);
  CommonUI__maskFadein(v27, DEFAULT_FADE_TIME, v29, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct MasterMissionComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v8; // x0
  QuestRewardTokenAction_c *klass; // x8

  if ( (byte_4B39B85 & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionComponent_OnClickBack__, method);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B39B85 = 1;
  }
  v4 = Method_MasterMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_MasterMissionComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v6);
    byte_4B31F06 = 1;
  }
  v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v8->fields.boardGameTokenAction->klass;
  if ( !klass || (v8 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
    sub_1BD36B4(v8, v6);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v8, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBulkReceive(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B39B8F & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionComponent_OnClickBulkReceive__, method);
    sub_1BD3458(&StringLiteral_3141/*"BULK_RECEIVE"*/, v3);
    byte_4B39B8F = 1;
  }
  v4 = Method_MasterMissionComponent_OnClickBulkReceive__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBulkReceive__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_MasterMissionComponent_OnClickBulkReceive__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v6);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3141/*"BULK_RECEIVE"*/, 0LL);
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
  System_Action_o *_9__147_1; // x21
  Il2CppObject *v32; // x22
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B39B5A & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_System_Array_Empty_object___, v3);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v4);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_1BD3458(&LocalizationManager_TypeInfo, v6);
    sub_1BD3458(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__147_0__, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v10);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v11);
    sub_1BD3458(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__147_1__, v12);
    sub_1BD3458(&MasterMissionComponent___c_TypeInfo, v13);
    sub_1BD3458(&StringLiteral_3818/*"COMPLETE_MISSION_END"*/, v14);
    byte_4B39B5A = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B31F06 )
      {
        sub_1BD3458(&TerminalSceneComponent_TypeInfo, v16);
        byte_4B31F06 = 1;
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
          v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v19 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v19 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
          v21 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
          System_Action___ctor(
            v21,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__147_0__,
            0LL);
          if ( v18 )
          {
            CommonUI__maskFadeout((CommonUI_o *)v18, 1, DEFAULT_FADE_TIME, v21, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_1BD36B4(Instance, v16);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3818/*"COMPLETE_MISSION_END"*/, 0LL);
    v24 = Method_System_Array_Empty_object___;
    v25 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v25 )
    {
      sub_1C25390(Method_System_Array_Empty_object___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C25334(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C25334(inited);
    v28 = System_String__Format_62539756(v22, **(System_Object_array ***)(v27 + 184), 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (CommonUI_o *)Instance;
    v30 = MasterMissionComponent___c_TypeInfo;
    if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v30 = MasterMissionComponent___c_TypeInfo;
    }
    _9__147_1 = v30->static_fields->__9__147_1;
    if ( !_9__147_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = MasterMissionComponent___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__147_1 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(_9__147_1, v32, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__147_1__, 0LL);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__147_1 = _9__147_1;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__147_1,
        (int64_t)_9__147_1,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    if ( !v29 )
      goto LABEL_40;
    CommonUI__OpenNotificationDialog(v29, 0LL, v28, _9__147_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4B39B74 & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionComponent_OnClickDailyTab__, method);
    byte_4B39B74 = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_MasterMissionComponent_OnClickDailyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickDailyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_MasterMissionComponent_OnClickDailyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_4B39B76 & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionComponent_OnClickExtraTab__, method);
    byte_4B39B76 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_MasterMissionComponent_OnClickExtraTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickExtraTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_MasterMissionComponent_OnClickExtraTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_4B39B8D & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionComponent_OnClickHelp__, method);
    byte_4B39B8D = 1;
  }
  v2 = Method_MasterMissionComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1BD3470(Method_MasterMissionComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1BD343C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  MasterMissionComponent__OpenHelp(v4, v5);
}


void __fastcall MasterMissionComponent__OnClickLimitedTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4B39B77 & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionComponent_OnClickLimitedTab__, method);
    byte_4B39B77 = 1;
  }
  if ( this->fields.nowType != 3 )
  {
    v3 = Method_MasterMissionComponent_OnClickLimitedTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickLimitedTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_MasterMissionComponent_OnClickLimitedTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  System_Action_o *_9__175_0; // x20
  Il2CppObject *v16; // x21
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B39B72 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&AvalonSceneManager_TypeInfo, v2);
    sub_1BD3458(&Method_MasterMissionComponent_OnClickShopBtn__, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BD3458(&Method_MasterMissionComponent___c__OnClickShopBtn_b__175_0__, v5);
    sub_1BD3458(&MasterMissionComponent___c_TypeInfo, v6);
    byte_4B39B72 = 1;
  }
  v7 = Method_MasterMissionComponent_OnClickShopBtn__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickShopBtn__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_MasterMissionComponent_OnClickShopBtn__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  _9__175_0 = v13->static_fields->__9__175_0;
  if ( !_9__175_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = MasterMissionComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__175_0 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(_9__175_0, v16, Method_MasterMissionComponent___c__OnClickShopBtn_b__175_0__, 0LL);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__175_0 = _9__175_0;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__175_0,
      (int64_t)_9__175_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v12 )
    sub_1BD36B4(v13, v10);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, _9__175_0, 0LL);
}


void __fastcall MasterMissionComponent__OnClickSvt(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.isVoicePlaying )
  {
    svtVoiceCtr = this->fields.svtVoiceCtr;
    if ( !svtVoiceCtr )
      sub_1BD36B4(0LL, method);
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

  if ( (byte_4B39B75 & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionComponent_OnClickWeeklyTab__, method);
    byte_4B39B75 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_MasterMissionComponent_OnClickWeeklyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickWeeklyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_MasterMissionComponent_OnClickWeeklyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B39B51 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B39B51 = 1;
  }
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1BD36B4(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.titleInfo, 0LL, v7, v8, v9, v10, v11, v12);
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
  CommonUI_o *Instance; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_int__o *v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_List_object__o *v46; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v55; // w20
  bool v56; // w1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  TitleInfoControl_o *v67; // x21
  TitleInfoControl_o *v68; // x20
  System_Action_o *v69; // x21
  MasterMissionComponent_c *v70; // x0
  __int64 v71; // d0
  struct MstMissionEntity_array *Entitys_object__object; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v83; // x21
  System_Action_o *v84; // x20

  if ( (byte_4B39B52 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__TypeInfo, callback);
    sub_1BD3458(&System_Action_TypeInfo, v9);
    sub_1BD3458(&AtlasManager_TypeInfo, v10);
    sub_1BD3458(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v11);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v14);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1BD3458(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v16);
    sub_1BD3458(&Method_MasterMissionComponent_LoadNotificationEnd__, v17);
    sub_1BD3458(&Method_MasterMissionComponent_OnClickBack__, v18);
    sub_1BD3458(&Method_MasterMissionComponent__Open_b__137_0__, v19);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v20);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v22);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B39B52 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v27, v28, v29, v30, v31, v32);
  this->fields.reDispAction = redisp_act;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.reDispAction,
    (int64_t)redisp_act,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_42;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0LL);
  v39 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v39;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.currentEventIdList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v46;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.currentMstMissionEntList,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  if ( typeIndex == -1 )
  {
    if ( !byte_4B39BC2 )
    {
      Instance = (CommonUI_o *)sub_1BD3458(&EventRewardSaveData_TypeInfo, v26);
      byte_4B39BC2 = 1;
    }
    typeIndex = EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
  }
  missionTabList = this->fields.missionTabList;
  this->fields.nowType = typeIndex;
  if ( !missionTabList )
    goto LABEL_42;
  max_length = missionTabList->max_length;
  if ( max_length >= 1 )
  {
    v55 = 0;
    while ( 1 )
    {
      if ( v55 >= max_length )
        sub_1BD36BC(Instance, v26);
      Instance = (CommonUI_o *)missionTabList->m_Items[v55];
      if ( !Instance )
        break;
      MasterMissionTab__SetTabSize((MasterMissionTab_o *)Instance, 1, 0LL);
      max_length = missionTabList->max_length;
      if ( (int)++v55 >= max_length )
        goto LABEL_15;
    }
LABEL_42:
    sub_1BD36B4(Instance, v26);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v26) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_42;
    v56 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_42;
    v56 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v56, 0LL);
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
                               (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.titleInfo,
      (int64_t)Component_object,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    v67 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v67 )
      goto LABEL_42;
    TitleInfoControl__SetParent(v67, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_42;
    TitleInfoControl__setDepth((TitleInfoControl_o *)Instance, 37, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_42;
    TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 38, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_42;
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, 0LL, 83, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_42;
    TitleInfoControl__changeTitleInfo_37953932((TitleInfoControl_o *)Instance, 1, 83, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_42;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v68 = this->fields.titleInfo;
    v69 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v69, (Il2CppObject *)this, (intptr_t)Method_MasterMissionComponent_OnClickBack__, 0LL);
    if ( !v68 )
      goto LABEL_42;
    TitleInfoControl__SetBackBtnAct(v68, v69, 0LL);
  }
  v70 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v70 = MasterMissionComponent_TypeInfo;
  }
  v71 = *(_QWORD *)v70->static_fields;
  this->fields.currentDispId = 0;
  *(_QWORD *)&this->fields.currentEventSvtId = v71;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Entitys_object__object = (struct MstMissionEntity_array *)DataManager__getEntitys_object__object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2F318E4 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_object__object;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.mstMissionList,
    (int64_t)Entitys_object__object,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  MasterMissionComponent__SetupShopBtn(this, v79);
  MasterMissionComponent__SetupCompleteBtn(this, v80);
  MasterMissionComponent__RefreshInfo(this, v81);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v83 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v83, (Il2CppObject *)this, Method_MasterMissionComponent__Open_b__137_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v83, 1, 0LL);
  v84 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v84, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v84, 0LL);
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
  System_Action_o *_9__146_0; // x21
  Il2CppObject *v16; // x22
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  TerminalSceneComponent_c *v24; // x0

  if ( (byte_4B39B59 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, callback);
    sub_1BD3458(&CompleteMissionComponent_ClickDelegate_TypeInfo, v4);
    sub_1BD3458(&Method_MasterMissionComponent_ExitCompleteMission__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BD3458(&SoundManager_TypeInfo, v7);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v8);
    sub_1BD3458(&Method_MasterMissionComponent___c__OpenCompleteMission_b__146_0__, v9);
    sub_1BD3458(&MasterMissionComponent___c_TypeInfo, v10);
    byte_4B39B59 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CompleteMissionComponent_ClickDelegate_o *)sub_1BD36A4(CompleteMissionComponent_ClickDelegate_TypeInfo);
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
  _9__146_0 = mInstance->static_fields->__9__146_0;
  if ( !_9__146_0 )
  {
    if ( !mInstance->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mInstance);
      mInstance = MasterMissionComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)mInstance->static_fields->__9;
    _9__146_0 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(_9__146_0, v16, Method_MasterMissionComponent___c__OpenCompleteMission_b__146_0__, 0LL);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__146_0 = _9__146_0;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__146_0,
      (int64_t)_9__146_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v12, _9__146_0, 0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v13);
    byte_4B31F06 = 1;
  }
  v24 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v24->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_1BD36B4(mInstance, v13);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0LL);
}


void __fastcall MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B39B8E & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B39B8E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  CommonUI__OpenTutorialImageDialog_30828316((CommonUI_o *)Instance, 42, 207, 0LL, 0LL, 0LL, 0LL);
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
  QuestRewardTokenAction_c *klass; // x8
  CommonUI_o *v13; // x19
  MasterMissionComponent_c *v14; // x8
  QuestRewardTokenAction_c *v15; // x8

  if ( (byte_4B39B7F & 1) == 0 )
  {
    sub_1BD3458(&UserPresentBoxWindow_ClickDelegate_TypeInfo, method);
    sub_1BD3458(&Method_MasterMissionComponent__OpenPresentBox_b__190_0__, v3);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v7);
    byte_4B39B7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (UserPresentBoxWindow_ClickDelegate_o *)sub_1BD36A4(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__190_0__,
    0LL);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v9, 0LL, 0LL);
  v10 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v10 )
    goto LABEL_28;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v10, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B31F06 )
    {
      sub_1BD3458(&TerminalSceneComponent_TypeInfo, v11);
      byte_4B31F06 = 1;
    }
    v10 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.boardGameTokenAction->klass;
    if ( !klass )
      goto LABEL_28;
    v10 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
    if ( !v10 )
      goto LABEL_28;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth(v10, 0LL) )
    {
      v10 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        if ( !byte_4B31F06 )
        {
          sub_1BD3458(&TerminalSceneComponent_TypeInfo, v11);
          byte_4B31F06 = 1;
        }
        v10 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v10 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v15 = v10->fields.boardGameTokenAction->klass;
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
      sub_1BD36B4(v10, v11);
    }
  }
}


void __fastcall MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B39B8B & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B39B8B = 1;
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
           (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = (struct UnityEngine_GameObject_o *)v6;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.btnEffectPrefab, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0LL, 0LL) )
      GameObjectExtensions__SafeSetParent_34386852(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0LL);
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

  if ( (byte_4B39B7E & 1) == 0 )
  {
    sub_1BD3458(&PresentBoxOverDialog_ClickDelegate_TypeInfo, method);
    sub_1BD3458(&LocalizationManager_TypeInfo, v3);
    sub_1BD3458(&Method_MasterMissionComponent__PresentBoxOver_b__189_0__, v4);
    sub_1BD3458(&StringLiteral_8669/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, v5);
    sub_1BD3458(&StringLiteral_1/*""*/, v6);
    byte_4B39B7E = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8669/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0LL);
  v9 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1BD36A4(PresentBoxOverDialog_ClickDelegate_TypeInfo);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__189_0__,
    0LL);
  if ( !presentBoxOverDialog )
    sub_1BD36B4(v10, v11);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Action_o *v17; // x22
  __int64 v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Int32_array *receiveMissionIds; // x8
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v28; // x19
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x2
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v32; // x19
  System_Action_o *v33; // x22

  if ( (byte_4B39B7D & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v3);
    sub_1BD3458(&Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__0__, v4);
    sub_1BD3458(&Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__1__, v5);
    sub_1BD3458(&Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__2__, v6);
    sub_1BD3458(&MasterMissionComponent___c__DisplayClass188_0_TypeInfo, v7);
    byte_4B39B7D = 1;
  }
  v8 = sub_1BD36A4(MasterMissionComponent___c__DisplayClass188_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_20;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  v17 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v8,
    Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__0__,
    0LL);
  *(_QWORD *)(v8 + 24) = v17;
  v18 = v8 + 24;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)v17, v19, v20, v21, v22, v23, v24);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
          sub_1BD36BC(Instance, v10);
        v28 = missionListViewManager->m_Items[nowType];
        v29 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
        System_Action___ctor(
          v29,
          (Il2CppObject *)v8,
          Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__1__,
          0LL);
        if ( v28 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v28, v29, v30);
          return;
        }
      }
LABEL_20:
      sub_1BD36B4(Instance, v10);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v32 = this->fields.receiveMissionIds;
    v33 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v8,
      Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__2__,
      0LL);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v32, v33, 0LL);
  }
  else
  {
    if ( !*(_QWORD *)v18 )
      goto LABEL_20;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v18 + 64LL),
      *(_QWORD *)(*(_QWORD *)v18 + 40LL));
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

  if ( (byte_4B39B88 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1BD3458(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_1BD3458(&DataManager_TypeInfo, v4);
    sub_1BD3458(&LocalizationManager_TypeInfo, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B39B88 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ItemMaster___);
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0LL),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v14 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0LL),
        !stoneFragmentsInfoLabel) )
  {
LABEL_13:
    sub_1BD36B4(Instance, v9);
  }
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  MasterMissionComponent__UpdateStoneExchangeCount(this, v14, v15);
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

  if ( (byte_4B39B83 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v6);
    sub_1BD3458(&SoundManager_TypeInfo, v7);
    byte_4B39B83 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)currentVoiceDataList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v9 )
        break;
      if ( !v17.fields._current )
        sub_1BD36B4(v9, v10);
      klass = v17.fields._current[1].klass;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__releaseAudioAssetStorage((System_String_o *)klass, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v14 = this->fields.currentVoiceDataList;
    if ( !v14 )
      sub_1BD36B4(v12, v13);
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

  if ( (byte_4B39B7A & 1) == 0 )
  {
    sub_1BD3458(&Method_MasterMissionComponent_missionRewardCallback__, method);
    sub_1BD3458(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_1BD3458(&NetworkManager_TypeInfo, v4);
    sub_1BD3458(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4B39B7A = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1BD36A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2FB5954 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_object )
    sub_1BD36B4(0LL, v8);
  EventMissionClearRewardRequest__beginRequest_42017672(
    (EventMissionClearRewardRequest_o *)Request_object,
    this->fields.sendMissionIds,
    0LL);
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

  if ( (byte_4B39B80 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_SceneList_Type__TypeInfo, method);
    sub_1BD3458(&LocalizationManager_TypeInfo, v3);
    sub_1BD3458(&Method_MasterMissionComponent_ServantOverDialogClose__, v4);
    sub_1BD3458(&StringLiteral_8679/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, v5);
    byte_4B39B80 = 1;
  }
  overflowType = this->fields.overflowType;
  servantOverDialog = this->fields.servantOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8679/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0LL);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v8, 0LL),
        v10 = this->fields.servantOverDialog,
        v11 = (System_Action_T__o *)sub_1BD36A4(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(
          v11,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          0LL),
        !v10)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v10, (System_Action_SceneList_Type__o *)v11, 0LL),
        (v8 = (System_String_o *)this->fields.servantOverDialog) == 0LL) )
  {
    sub_1BD36B4(v8, v9);
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

  if ( (byte_4B39B81 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&type);
    sub_1BD3458(&Method_MasterMissionComponent_ServantOverDialogClose__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BD3458(&StringLiteral_3566/*"CLICK_CANCEL"*/, v7);
    byte_4B39B81 = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v9 = (System_Action_T__o *)sub_1BD36A4(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v9, (Il2CppObject *)this, Method_MasterMissionComponent_ServantOverDialogClose__, 0LL);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v9, 0LL);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0LL);
      return;
    }
LABEL_9:
    sub_1BD36B4(Instance, v11);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3566/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall MasterMissionComponent__SetAfterAction(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v5; // x8

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BD36BC(this, method);
  v5 = missionListViewManager->m_Items[nowType];
  if ( !v5 )
LABEL_5:
    sub_1BD36B4(this, method);
  MasterMissionListViewManager__setAfterAction(v5, this->fields.receiveMissionIds, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__SetBtnEnable(
        MasterMissionComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dailyTabObj; // x0
  bool v6; // w20

  if ( (byte_4B39B84 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_4B39B84 = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (v6 = isEnable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn) == 0LL) )
  {
LABEL_17:
    sub_1BD36B4(dailyTabObj, isEnable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL);
}


void __fastcall MasterMissionComponent__SetDailyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionEntity__o *VaildDailyMissionData; // x0
  const MethodInfo *v5; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v7; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v8; // x21
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x5
  struct MasterMissionListViewManager_array *v11; // x8
  MissionListViewManager_o *v12; // x19

  if ( (byte_4B39B68 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v3);
    byte_4B39B68 = 1;
  }
  EventRewardSaveData__LoadDailyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( !missionListViewManager->max_length )
    goto LABEL_14;
  v7 = missionListViewManager->m_Items[0];
  VaildDailyMissionData = MasterMissionComponent__getVaildDailyMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v8 = VaildDailyMissionData;
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v7, v8, v9, 0, this->fields.reDispAction, v10);
  v11 = this->fields.missionListViewManager;
  if ( !v11 )
    goto LABEL_13;
  if ( !v11->max_length )
LABEL_14:
    sub_1BD36BC(VaildDailyMissionData, v5);
  v12 = (MissionListViewManager_o *)v11->m_Items[0];
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v12 )
LABEL_13:
    sub_1BD36B4(VaildDailyMissionData, v5);
  MissionListViewManager__SetMode_45028048(
    v12,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetExtraMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionEntity__o *ValidExtraMissionData; // x0
  const MethodInfo *v5; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v7; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v8; // x21
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x5
  struct MasterMissionListViewManager_array *v11; // x8
  MissionListViewManager_o *v12; // x19

  if ( (byte_4B39B6A & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v3);
    byte_4B39B6A = 1;
  }
  EventRewardSaveData__LoadExtraMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( missionListViewManager->max_length <= 2 )
    goto LABEL_14;
  v7 = missionListViewManager->m_Items[2];
  ValidExtraMissionData = MasterMissionComponent__getValidExtraMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v8 = ValidExtraMissionData;
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v7, v8, v9, 2, this->fields.reDispAction, v10);
  v11 = this->fields.missionListViewManager;
  if ( !v11 )
    goto LABEL_13;
  if ( v11->max_length <= 2 )
LABEL_14:
    sub_1BD36BC(ValidExtraMissionData, v5);
  v12 = (MissionListViewManager_o *)v11->m_Items[2];
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v12 )
LABEL_13:
    sub_1BD36B4(ValidExtraMissionData, v5);
  MissionListViewManager__SetMode_45028048(
    v12,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetLimitedMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionEntity__o *VaildLimitedMissionData; // x0
  const MethodInfo *v5; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v7; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v8; // x21
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x5
  struct MasterMissionListViewManager_array *v11; // x8
  MissionListViewManager_o *v12; // x19

  if ( (byte_4B39B6B & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v3);
    byte_4B39B6B = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( missionListViewManager->max_length <= 3 )
    goto LABEL_14;
  v7 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = MasterMissionComponent__getVaildLimitedMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v8 = VaildLimitedMissionData;
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       this->fields.currentEventIdList,
                                                                                       (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v7, v8, v9, 3, this->fields.reDispAction, v10);
  v11 = this->fields.missionListViewManager;
  if ( !v11 )
    goto LABEL_13;
  if ( v11->max_length <= 3 )
LABEL_14:
    sub_1BD36BC(VaildLimitedMissionData, v5);
  v12 = (MissionListViewManager_o *)v11->m_Items[3];
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v12 )
LABEL_13:
    sub_1BD36B4(VaildLimitedMissionData, v5);
  MissionListViewManager__SetMode_45028048(
    v12,
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

  if ( (byte_4B39B90 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B39B90 = 1;
  }
  limitedMissionAnnouncementComponent = (UnityEngine_Object_o *)this->fields.limitedMissionAnnouncementComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(limitedMissionAnnouncementComponent, 0LL, 0LL) )
  {
    v5 = this->fields.limitedMissionAnnouncementComponent;
    if ( !v5 )
      sub_1BD36B4(0LL, v4);
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
  int max_length; // w8
  EventMissionMaster_o *v11; // x24
  unsigned int v12; // w26
  int32_t v13; // w20
  int32_t v14; // w21
  int32_t v15; // w23
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x25
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  if ( (byte_4B39B66 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B39B66 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_34;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v11 = (EventMissionMaster_o *)Instance;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BD36BC(Instance, v8);
      v16 = &EnableMissions->obj.klass + (int)v12;
      v17 = v16[4];
      if ( !v17 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v16[4], 0LL);
      switch ( (_DWORD)Instance )
      {
        case 5:
          if ( !v11 )
            goto LABEL_34;
          ClearMasterMissionList = (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                          v11,
                                                                                          HIDWORD(v17->_1.name),
                                                                                          5,
                                                                                          0LL);
          Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_object_(
                                        ClearMasterMissionList,
                                        (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          3,
                                          v20);
            v13 += (int)Instance;
          }
          break;
        case 4:
          if ( !v11 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getExtraMissionList(v11, HIDWORD(v17->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          2,
                                          v21);
            v14 += (int)Instance;
          }
          break;
        case 2:
          if ( !v11 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getWeeklyMasterMissionList(v11, HIDWORD(v17->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          1,
                                          v18);
            v15 += (int)Instance;
          }
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_1BD36B4(Instance, v8);
  }
  v15 = 0;
  v14 = 0;
  v13 = 0;
LABEL_30:
  Instance = (DataManager_o *)this->fields.weeklyClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v15, 0LL);
  Instance = (DataManager_o *)this->fields.extraClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v14, 0LL);
  Instance = (DataManager_o *)this->fields.limitedClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v13, 0LL);
}


void __fastcall MasterMissionComponent__SetMissionDisp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  struct MasterMissionListViewManager_array *v4; // x8
  struct MasterMissionListViewManager_array *v5; // x8
  struct MasterMissionListViewManager_array *v6; // x8
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  struct MasterMissionListViewManager_array *v9; // x8
  struct MasterMissionListViewManager_array *v10; // x8
  struct MasterMissionListViewManager_array *v11; // x8
  struct MasterMissionListViewManager_array *v12; // x8
  const MethodInfo *v13; // x1
  struct MasterMissionListViewManager_array *v14; // x8
  struct MasterMissionListViewManager_array *v15; // x8
  struct MasterMissionListViewManager_array *v16; // x8
  struct MasterMissionListViewManager_array *v17; // x8
  const MethodInfo *v18; // x1
  struct MasterMissionListViewManager_array *v19; // x8
  struct MasterMissionListViewManager_array *v20; // x8
  struct MasterMissionListViewManager_array *v21; // x8
  struct MasterMissionListViewManager_array *v22; // x8
  const MethodInfo *v23; // x1

  v2 = this;
  switch ( this->fields.nowType )
  {
    case 0:
      missionListViewManager = this->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_80;
      if ( !missionListViewManager->max_length )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)missionListViewManager->m_Items[0];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v4 = v2->fields.missionListViewManager;
      if ( !v4 )
        goto LABEL_80;
      if ( v4->max_length <= 1 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v4->m_Items[1];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v5 = v2->fields.missionListViewManager;
      if ( !v5 )
        goto LABEL_80;
      if ( v5->max_length <= 2 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v5->m_Items[2];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v6 = v2->fields.missionListViewManager;
      if ( !v6 )
        goto LABEL_80;
      if ( v6->max_length <= 3 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v6->m_Items[3];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_80;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, void *))this->klass[1]._1.namespaze)(
        this,
        0LL,
        this->klass[1]._1.byval_arg.data);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_80;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        3LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      MasterMissionComponent__SetDailyMissionList(v2, v7);
      break;
    case 1:
      v9 = this->fields.missionListViewManager;
      if ( !v9 )
        goto LABEL_80;
      if ( !v9->max_length )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v9->m_Items[0];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v10 = v2->fields.missionListViewManager;
      if ( !v10 )
        goto LABEL_80;
      if ( v10->max_length <= 1 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v10->m_Items[1];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v11 = v2->fields.missionListViewManager;
      if ( !v11 )
        goto LABEL_80;
      if ( v11->max_length <= 2 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v11->m_Items[2];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v12 = v2->fields.missionListViewManager;
      if ( !v12 )
        goto LABEL_80;
      if ( v12->max_length <= 3 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v12->m_Items[3];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_80;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, void *))this->klass[1]._1.namespaze)(
        this,
        1LL,
        this->klass[1]._1.byval_arg.data);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_80;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        0LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      MasterMissionComponent__SetWeeklyMissionList(v2, v13);
      break;
    case 2:
      v14 = this->fields.missionListViewManager;
      if ( !v14 )
        goto LABEL_80;
      if ( !v14->max_length )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v14->m_Items[0];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v15 = v2->fields.missionListViewManager;
      if ( !v15 )
        goto LABEL_80;
      if ( v15->max_length <= 1 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v15->m_Items[1];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v16 = v2->fields.missionListViewManager;
      if ( !v16 )
        goto LABEL_80;
      if ( v16->max_length <= 2 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v16->m_Items[2];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v17 = v2->fields.missionListViewManager;
      if ( !v17 )
        goto LABEL_80;
      if ( v17->max_length <= 3 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v17->m_Items[3];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_80;
      ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, void *))this->klass[1]._1.namespaze)(
        this,
        0LL,
        this->klass[1]._1.byval_arg.data);
      this = (MasterMissionComponent_o *)v2->fields.shopBtn;
      if ( !this )
        goto LABEL_80;
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        3LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      MasterMissionComponent__SetExtraMissionList(v2, v18);
      break;
    case 3:
      v19 = this->fields.missionListViewManager;
      if ( !v19 )
        goto LABEL_80;
      if ( !v19->max_length )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v19->m_Items[0];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v20 = v2->fields.missionListViewManager;
      if ( !v20 )
        goto LABEL_80;
      if ( v20->max_length <= 1 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v20->m_Items[1];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v21 = v2->fields.missionListViewManager;
      if ( !v21 )
        goto LABEL_80;
      if ( v21->max_length <= 2 )
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v21->m_Items[2];
      if ( !this )
        goto LABEL_80;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v22 = v2->fields.missionListViewManager;
      if ( !v22 )
        goto LABEL_80;
      if ( v22->max_length <= 3 )
LABEL_81:
        sub_1BD36BC(this, method);
      this = (MasterMissionComponent_o *)v22->m_Items[3];
      if ( !this
        || (this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
            (this = (MasterMissionComponent_o *)v2->fields.shopBtn) == 0LL)
        || (((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, void *))this->klass[1]._1.namespaze)(
              this,
              0LL,
              this->klass[1]._1.byval_arg.data),
            (this = (MasterMissionComponent_o *)v2->fields.shopBtn) == 0LL) )
      {
LABEL_80:
        sub_1BD36B4(this, method);
      }
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        3LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      MasterMissionComponent__SetLimitedMissionList(v2, v23);
      break;
    default:
      goto LABEL_79;
  }
  MasterMissionComponent__checkIsOpen(v2, v8);
LABEL_79:
  MasterMissionComponent__setMissionCompleteNum(v2, method);
}


void __fastcall MasterMissionComponent__SetWeeklyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionEntity__o *VaildWeeklyMissionData; // x0
  const MethodInfo *v5; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v7; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v8; // x21
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x5
  struct MasterMissionListViewManager_array *v11; // x8
  MissionListViewManager_o *v12; // x19

  if ( (byte_4B39B69 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v3);
    byte_4B39B69 = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( missionListViewManager->max_length <= 1 )
    goto LABEL_14;
  v7 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = MasterMissionComponent__getVaildWeeklyMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v8 = VaildWeeklyMissionData;
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                      this->fields.currentEventIdList,
                                                                                      (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v7, v8, v9, 1, this->fields.reDispAction, v10);
  v11 = this->fields.missionListViewManager;
  if ( !v11 )
    goto LABEL_13;
  if ( v11->max_length <= 1 )
LABEL_14:
    sub_1BD36BC(VaildWeeklyMissionData, v5);
  v12 = (MissionListViewManager_o *)v11->m_Items[1];
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !v12 )
LABEL_13:
    sub_1BD36B4(VaildWeeklyMissionData, v5);
  MissionListViewManager__SetMode_45028048(
    v12,
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x22
  MstMissionEntity_array *EnableMissions; // x24
  int max_length; // w8
  UserEventMissionMaster_o *v31; // x25
  unsigned int v32; // w28
  int32_t v33; // w20
  MstMissionEntity_o *v34; // x23
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  DataManager_o *v37; // x27
  int32_t CompleteMissionClearCount; // w26
  int m_CancellationTokenSource; // w25
  __int64 v40; // x8
  int v41; // w22
  int64_t v42; // x24
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v58; // x8
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  Il2CppObject *cNoticeNumberPrefab; // x22
  Il2CppObject *v62; // x22
  Il2CppObject *Component_object; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  UIWidget_o *v70; // x22
  struct NoticeNumberComponent_o *v71; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v73; // x1

  if ( (byte_4B39B55 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v9);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v10);
    sub_1BD3458(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v11);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v13);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B39B55 = 1;
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
    v19 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v19;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.currentCompleteMissionList,
      (int64_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_48;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_48;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v33 = 0;
  }
  else
  {
    v31 = (UserEventMissionMaster_o *)Instance;
    v32 = 0;
    v33 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
        goto LABEL_49;
      v34 = EnableMissions->m_Items[v32];
      if ( !v34 )
        goto LABEL_48;
      if ( !MasterData_object )
        goto LABEL_48;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    (EventMissionMaster_o *)MasterData_object,
                                    v34->fields.id,
                                    0LL);
      if ( !Instance )
        goto LABEL_48;
      v37 = Instance;
      if ( Instance->fields.m_CancellationTokenSource )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)Instance,
                                      (EventMissionEntity_array *)Instance,
                                      v35,
                                      v36);
        v33 += CompleteMissionClearCount;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v34, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_33;
    }
    if ( !v31 )
      goto LABEL_48;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v31, v34->fields.id, 0LL);
    m_CancellationTokenSource = (int)v37->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
LABEL_49:
      sub_1BD36BC(Instance, v27);
    v40 = *(_QWORD *)&v37->fields._DispLog;
    if ( !v40 )
      goto LABEL_48;
    v41 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_48;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v40 + 28), 0LL);
    Instance = (DataManager_o *)this->fields.completeMissionIcon;
    if ( !Instance )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v42 = sub_1BD36A4(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0LL);
    *(_QWORD *)(v42 + 16) = v34;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)v34, v43, v44, v45, v46, v47, v48);
    *(_DWORD *)(v42 + 24) = m_CancellationTokenSource;
    *(_DWORD *)(v42 + 28) = CompleteMissionClearCount;
    *(_DWORD *)(v42 + 32) = v41;
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_48;
    v55 = *(_QWORD *)&Instance->fields.m_CachedPtr;
    v56 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v55 )
      goto LABEL_48;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v55 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v42,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = v55 + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v58 + 32) = v42;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v58 + 32), v42, v49, v50, v51, v52, v53, v54);
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
    v62 = UnityEngine_Object__Instantiate_object_(
            cNoticeNumberPrefab,
            (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34386852(
      (UnityEngine_GameObject_o *)v62,
      this->fields.completeMissionNoticeRoot,
      0LL);
    if ( v62 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v62,
                           (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&this->fields.mCompleteMissionNoticeNumber,
        (int64_t)Component_object,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
        v70 = (UIWidget_o *)Instance;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        if ( v70 )
        {
          UIWidget__set_depth(v70, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
          UIWidget__set_width(v70, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
          UIWidget__set_height(v70, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
          v71 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v71->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v71->fields.numberLabel,
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
    sub_1BD36B4(Instance, v27);
  }
LABEL_46:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_48;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v33, 0LL);
  MasterMissionComponent__InitCompleteMissionLb(this, v73);
}


void __fastcall MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  UISprite_o *shopBtnSp; // x20

  if ( (byte_4B39B54 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BD3458(&StringLiteral_17709/*"btn_event_3"*/, v5);
    byte_4B39B54 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1BD36B4(Instance, v7);
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0LL);
  shopBtnSp = this->fields.shopBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_17709/*"btn_event_3"*/, 0LL);
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

  if ( (byte_4B39B8A & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1BD3458(&DataManager_TypeInfo, v3);
    byte_4B39B8A = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    sub_1BD36B4(0LL, v5);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B39B8C & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B39B8C = 1;
  }
  btnEffectPrefab = (UnityEngine_Object_o *)this->fields.btnEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(btnEffectPrefab, 0LL, 0LL) )
  {
    p_btnEffectPrefab = &this->fields.btnEffectPrefab;
    if ( !*p_btnEffectPrefab )
      sub_1BD36B4(0LL, v4);
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0LL);
    v6 = *p_btnEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70278272((UnityEngine_Object_o *)v6, 0LL);
    *p_btnEffectPrefab = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)p_btnEffectPrefab, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall MasterMissionComponent__UnAcceptableRewardDlg(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BD36BC(this, method);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1BD36B4(this, method);
  MasterMissionListViewManager__unAcceptableDlg((MasterMissionListViewManager_o *)this, method);
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

  if ( (byte_4B39B87 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v2);
    byte_4B39B87 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, method);
    byte_4B31F06 = 1;
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
      sub_1BD36B4(v5, v6);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  int32_t ExchangeStoneCount; // w0
  int32_t v22; // w23
  MasterMissionComponent_c *v23; // x0
  UILabel_o *stoneConvertCount; // x22
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v26; // w1
  UnityEngine_Object_o *btnEffectBasePrefab; // x22
  const MethodInfo *v28; // x1
  AssetLoader_LoadEndDataHandler_o *v29; // x19
  int32_t v30; // w20
  const MethodInfo *v31; // x1
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B39B89 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, *(_QWORD *)&fragmentCount);
    sub_1BD3458(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    sub_1BD3458(&Method_MasterMissionComponent___c__DisplayClass204_0__UpdateStoneExchangeCount_b__0__, v8);
    sub_1BD3458(&MasterMissionComponent___c__DisplayClass204_0_TypeInfo, v9);
    sub_1BD3458(&StringLiteral_5958/*"Effect/Common"*/, v10);
    byte_4B39B89 = 1;
  }
  v32 = 0;
  v11 = sub_1BD36A4(MasterMissionComponent___c__DisplayClass204_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_27;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v20);
  *(_DWORD *)(v11 + 24) = ExchangeStoneCount;
  v22 = ExchangeStoneCount;
  v23 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v23 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v23->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v22 > STONE_EXCHENGE_DISP_LIMIT )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
    }
    v32 = STONE_EXCHENGE_DISP_LIMIT;
    stoneConvertLimit = System_Int32__ToString((int32_t)&v32, 0LL);
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
          v26 = 1;
          goto LABEL_17;
        }
      }
    }
LABEL_27:
    sub_1BD36B4(stoneConvertLimit, v13);
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
  v26 = 0;
LABEL_17:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneConvertLimit, v26, 0LL);
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1BD36A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v29,
      (Il2CppObject *)v11,
      Method_MasterMissionComponent___c__DisplayClass204_0__UpdateStoneExchangeCount_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5958/*"Effect/Common"*/, v29, 1, 0LL);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v28);
    if ( this->fields.nowType == 1 )
    {
      v30 = *(_DWORD *)(v11 + 24);
      if ( v30 >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v31);
    }
  }
}


void __fastcall MasterMissionComponent___AcceptReward_b__187_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MasterMissionComponent__SetBtnEnable(this, 1, v2);
}


void __fastcall MasterMissionComponent___LoadNotificationEnd_b__138_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  this->fields.endFadein = 1;
}


void __fastcall MasterMissionComponent___OnClickCompleteMissionBtn_b__147_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B39B93 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B39B93 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  MasterMissionComponent__OpenCompleteMission(this, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___OpenPresentBox_b__190_0(
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

  if ( (byte_4B39B95 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, hasGetServant);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_11787/*"SERVANT_OVER"*/, v6);
    sub_1BD3458(&StringLiteral_3566/*"CLICK_CANCEL"*/, v7);
    byte_4B39B95 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_24;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v9);
    byte_4B31F06 = 1;
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
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v9);
    byte_4B31F06 = 1;
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
    sub_1BD36B4(Instance, v9);
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0LL);
LABEL_24:
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_29;
  if ( this->fields.overflowType )
    v12 = &StringLiteral_11787/*"SERVANT_OVER"*/;
  else
    v12 = &StringLiteral_3566/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___Open_b__137_0(
        MasterMissionComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4B39B92 & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4B39B92 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_1BD36B4(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___PresentBoxOver_b__189_0(
        MasterMissionComponent_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  System_Action_o *v17; // x20

  if ( (byte_4B39B94 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, isPresentBoxOpen);
    sub_1BD3458(&Method_MasterMissionComponent___c__DisplayClass189_0__PresentBoxOver_b__1__, v5);
    sub_1BD3458(&MasterMissionComponent___c__DisplayClass189_0_TypeInfo, v6);
    byte_4B39B94 = 1;
  }
  v7 = sub_1BD36A4(MasterMissionComponent___c__DisplayClass189_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v10, v11, v12, v13, v14, v15),
        *(_BYTE *)(v7 + 16) = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v17 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v7,
          Method_MasterMissionComponent___c__DisplayClass189_0__PresentBoxOver_b__1__,
          0LL),
        !presentBoxOverDialog) )
  {
    sub_1BD36B4(v8, v9);
  }
  PresentBoxOverDialog__Close_31224008(presentBoxOverDialog, v17, 0LL);
}


void __fastcall MasterMissionComponent___setRecieveModifyItem_b__193_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B39B96 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5558/*"END_DISP"*/, method);
    byte_4B39B96 = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v3);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v4);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5558/*"END_DISP"*/, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  MstMissionDisplayInfoMaster_o *v13; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct MstMissionMaster_o *mstMissionMst; // x8
  _BOOL4 v22; // w22
  _BOOL4 v23; // w23
  void *v24; // x1
  void *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 *v32; // x24
  __int64 *v33; // x8
  struct System_String_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_String_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B39B5D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v3);
    sub_1BD3458(&LocalizationManager_TypeInfo, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BD3458(&StringLiteral_8917/*"MST_REMISSON_MSG"*/, v6);
    sub_1BD3458(&StringLiteral_8915/*"MST_REDISP_MSG"*/, v7);
    sub_1BD3458(&StringLiteral_1/*""*/, v8);
    sub_1BD3458(&StringLiteral_8918/*"MST_REMISSON_TITLE_TXT"*/, v9);
    sub_1BD3458(&StringLiteral_8916/*"MST_REDISP_TITLE_TXT"*/, v10);
    byte_4B39B5D = 1;
  }
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !Instance )
    goto LABEL_28;
  v13 = (MstMissionDisplayInfoMaster_o *)Instance;
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)v13->fields.list;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  mstMissionMst = this->fields.mstMissionMst;
  if ( !mstMissionMst )
    goto LABEL_28;
  this->fields.currentType = *(&mstMissionMst->fields.revision + 1);
  if ( Instance && Instance->fields.m_CancellationTokenSource && !MstMissionMaster__IsOpenNow(mstMissionMst, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.mstMissionMst;
    if ( Instance )
    {
      v22 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0LL);
      goto LABEL_11;
    }
LABEL_28:
    sub_1BD36B4(Instance, v12);
  }
  LOBYTE(v22) = 0;
LABEL_11:
  if ( list
    && System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1
    && !MstMissionDisplayInfoMaster__IsOpenNow(v13, 0LL) )
  {
    v23 = !MstMissionDisplayInfoMaster__IsBefOpenTime(v13, 0LL);
  }
  else
  {
    LOBYTE(v23) = 0;
  }
  v24 = StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.titleTxt, (int64_t)v24, v15, v16, v17, v18, v19, v20);
  v25 = StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.msgTxt, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  if ( v22 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = &StringLiteral_8917/*"MST_REMISSON_MSG"*/;
    v33 = &StringLiteral_8918/*"MST_REMISSON_TITLE_TXT"*/;
LABEL_23:
    v34 = LocalizationManager__Get((System_String_o *)*v33, 0LL);
    this->fields.titleTxt = v34;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.titleTxt, (int64_t)v34, v35, v36, v37, v38, v39, v40);
    v41 = LocalizationManager__Get((System_String_o *)*v32, 0LL);
    this->fields.msgTxt = v41;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.msgTxt, (int64_t)v41, v42, v43, v44, v45, v46, v47);
    goto LABEL_24;
  }
  if ( v23 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = &StringLiteral_8915/*"MST_REDISP_MSG"*/;
    v33 = &StringLiteral_8916/*"MST_REDISP_TITLE_TXT"*/;
    goto LABEL_23;
  }
LABEL_24:
  this->fields.isNotNext = v22 || v23;
}


void __fastcall MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_1BD36B4(0LL, method);
  StandFigureBack__DestroyFigure(standFigureBack, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildDailyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  MasterMissionComponent_o *v7; // x19
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v26; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int64_t size; // x2
  int v29; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v31; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v34; // w26
  Il2CppClass **v35; // x8
  int64_t v36; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  __int64 v50; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  MstMissionDisplayInfoEntity_o *v60; // x0
  __int64 v61; // x1
  int64_t v62; // x24
  __int64 methodPtr_low; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  int DEFAULT_LIMITCNT; // w8
  MasterMissionComponent_c *v74; // x0
  int64_t v75; // x1
  int32_t v76; // w8
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  int v87; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v89; // w21

  v7 = this;
  if ( (byte_4B39B5F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1BD3458(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v9);
    sub_1BD3458(&System_IDisposable_TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Clear__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v20);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v21);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v22);
    sub_1BD3458(&MstMissionDisplayInfoEntity_TypeInfo, v23);
    this = (MasterMissionComponent_o *)sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B39B5F = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v26 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v26;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = (unsigned int)currentMstMissionEntList->fields._size;
  v29 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v29;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v7->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v7->fields.currentMissionDispInfoEnt, 0LL, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= max_length )
        sub_1BD36BC(this, method);
      v35 = &mstMissionList->obj.klass + (int)v34;
      v36 = (int64_t)v35[4];
      if ( !v36 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v35[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__getDailyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             *(_DWORD *)(v36 + 20),
                                             0LL);
        if ( !this )
          break;
        method = (const MethodInfo *)this;
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v31 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v31,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)*(unsigned int *)(v36 + 20);
          v43 = *(_QWORD *)&this->fields.m_CachedPtr;
          v44 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v43 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v43 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v43 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          this = (MasterMissionComponent_o *)v7->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v46 = *(_QWORD *)&this->fields.m_CachedPtr;
          v47 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v46 )
            break;
          v48 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v36,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = v46 + 8 * v48;
            LODWORD(this->fields.m_CancellationTokenSource) = v48 + 1;
            *(_QWORD *)(v49 + 32) = v36;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v49 + 32), v36, v37, v38, v39, v40, v41, v42);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1BD36B4(this, method);
  }
LABEL_29:
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)DataManager__getEntityList_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F31880 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v50);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v53;
        p_offset += 4;
        if ( !v53 )
          goto LABEL_36;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_36:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v56 = Enumerator->klass;
    v57 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v58 = &v56->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v58 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_43;
      }
      v59 = (__int64)&v56->vtable[*v58].method;
    }
    else
    {
LABEL_43:
      v59 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v60 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                                             Enumerator,
                                             *(_QWORD *)(v59 + 8));
    v62 = (int64_t)v60;
    if ( !v60 )
      goto LABEL_80;
    methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v60->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MstMissionDisplayInfoEntity_c *)v60->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_1BD3974(v60);
LABEL_80:
      sub_1BD36B4(v60, v61);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v60, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      static_fields = (struct MasterMissionComponent_StaticFields *)(v62 + 20);
      if ( *(int *)(v62 + 20) <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        static_fields = isOpenNow->static_fields;
      }
      if ( !v7 )
        sub_1BD36B4(isOpenNow, v65);
      v7->fields.currentEventSvtId = static_fields->DEFAULT_SVT_ID;
      DEFAULT_LIMITCNT = *(_DWORD *)(v62 + 32);
      if ( DEFAULT_LIMITCNT <= 0 )
      {
        v74 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v74 = MasterMissionComponent_TypeInfo;
        }
        DEFAULT_LIMITCNT = v74->static_fields->DEFAULT_LIMITCNT;
      }
      v7->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
      v75 = *(_QWORD *)(v62 + 24);
      v7->fields.voiceNameList = (struct System_String_array *)v75;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v7->fields.voiceNameList, v75, v66, v67, v68, v69, v70, v71);
      v76 = *(_DWORD *)(v62 + 16);
      v7->fields.currentMissionDispInfoEnt = (struct MstMissionDisplayInfoEntity_o *)v62;
      v7->fields.currentDispId = v76;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v7->fields.currentMissionDispInfoEnt,
        v62,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
    }
  }
  v83 = Enumerator->klass;
  v84 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v85 = &v83->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_63;
    }
    v86 = (__int64)&v83->vtable[*v85].method;
  }
  else
  {
LABEL_63:
    v86 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(Enumerator, *(_QWORD *)(v86 + 8));
  if ( v31 )
  {
    v87 = v31->fields._size;
    if ( v87 < 1 )
    {
      return 0LL;
    }
    else
    {
      v7->fields.totalMissionNum = v87;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v31,
                                           0,
                                           (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      m_CachedPtr = this->fields.m_CachedPtr;
      if ( v31->fields._size >= 1 )
      {
        v89 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v31,
                                               v89,
                                               (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v31,
                                                 v89,
                                                 (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v89 < v31->fields._size );
      }
      v7->fields.currentMissionId = m_CachedPtr;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v31;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildLimitedMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  MasterMissionComponent_o *v7; // x19
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v26; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int64_t size; // x2
  int v29; // w9
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v31; // x20
  System_Collections_Generic_List_object__o *v32; // x21
  struct MstMissionEntity_array *mstMissionList; // x26
  int max_length; // w8
  unsigned int v35; // w27
  Il2CppClass **v36; // x8
  int64_t v37; // x24
  int32_t v38; // w1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  __int64 v52; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v55; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  MstMissionDisplayInfoEntity_o *v62; // x0
  __int64 v63; // x1
  int64_t v64; // x25
  __int64 methodPtr_low; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  int DEFAULT_LIMITCNT; // w8
  MasterMissionComponent_c *v76; // x0
  int64_t v77; // x1
  int32_t v78; // w8
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Collections_Generic_IEnumerator_T__c *v85; // x8
  __int64 v86; // x9
  int32_t *v87; // x10
  __int64 v88; // x0
  int v89; // w8
  intptr_t m_CachedPtr; // w24
  int32_t v91; // w22

  v7 = this;
  if ( (byte_4B39B62 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1BD3458(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v9);
    sub_1BD3458(&System_IDisposable_TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Clear__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v20);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v21);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v22);
    sub_1BD3458(&MstMissionDisplayInfoEntity_TypeInfo, v23);
    this = (MasterMissionComponent_o *)sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B39B62 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_84;
  v26 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v26;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_84;
  size = (unsigned int)currentMstMissionEntList->fields._size;
  v29 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v29;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v7->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v7->fields.currentMissionDispInfoEnt, 0LL, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_84;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
        sub_1BD36BC(this, method);
      v36 = &mstMissionList->obj.klass + (int)v35;
      v37 = (int64_t)v36[4];
      if ( !v37 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v36[4], 0LL);
      if ( !MasterData_object )
        break;
      v38 = *(_DWORD *)(v37 + 20);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getLimitedMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             v38,
                                             0LL);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !v32 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v32,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)*(unsigned int *)(v37 + 20);
            v45 = *(_QWORD *)&this->fields.m_CachedPtr;
            v46 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v45 )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v45 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(v45 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v7->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v48 = *(_QWORD *)&this->fields.m_CachedPtr;
            v49 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v48 )
              break;
            v50 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v37,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = v48 + 8 * v50;
              LODWORD(this->fields.m_CancellationTokenSource) = v50 + 1;
              *(_QWORD *)(v51 + 32) = v37;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v51 + 32), v37, v39, v40, v41, v42, v43, v44);
            }
          }
        }
      }
      else
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getClearMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             v38,
                                             5,
                                             0LL);
        if ( !v31 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v31,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_32;
    }
LABEL_84:
    sub_1BD36B4(this, method);
  }
LABEL_32:
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_84;
  this = (MasterMissionComponent_o *)DataManager__getEntityList_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F31880 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_84;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v52);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v55 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v55;
        p_offset += 4;
        if ( !v55 )
          goto LABEL_39;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_39:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v58 = Enumerator->klass;
    v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v60 = &v58->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v60 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_46;
      }
      v61 = (__int64)&v58->vtable[*v60].method;
    }
    else
    {
LABEL_46:
      v61 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v62 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                             Enumerator,
                                             *(_QWORD *)(v61 + 8));
    v64 = (int64_t)v62;
    if ( !v62 )
      goto LABEL_86;
    methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v62->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MstMissionDisplayInfoEntity_c *)v62->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_1BD3974(v62);
LABEL_86:
      sub_1BD36B4(v62, v63);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v62, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      static_fields = (struct MasterMissionComponent_StaticFields *)(v64 + 20);
      if ( *(int *)(v64 + 20) <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        static_fields = isOpenNow->static_fields;
      }
      if ( !v7 )
        sub_1BD36B4(isOpenNow, v67);
      v7->fields.currentEventSvtId = static_fields->DEFAULT_SVT_ID;
      DEFAULT_LIMITCNT = *(_DWORD *)(v64 + 32);
      if ( DEFAULT_LIMITCNT <= 0 )
      {
        v76 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v76 = MasterMissionComponent_TypeInfo;
        }
        DEFAULT_LIMITCNT = v76->static_fields->DEFAULT_LIMITCNT;
      }
      v7->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
      v77 = *(_QWORD *)(v64 + 24);
      v7->fields.voiceNameList = (struct System_String_array *)v77;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v7->fields.voiceNameList, v77, v68, v69, v70, v71, v72, v73);
      v78 = *(_DWORD *)(v64 + 16);
      v7->fields.currentMissionDispInfoEnt = (struct MstMissionDisplayInfoEntity_o *)v64;
      v7->fields.currentDispId = v78;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v7->fields.currentMissionDispInfoEnt,
        v64,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
    }
  }
  v85 = Enumerator->klass;
  v86 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v87 = &v85->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_66;
    }
    v88 = (__int64)&v85->vtable[*v87].method;
  }
  else
  {
LABEL_66:
    v88 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v88)(
                                       Enumerator,
                                       *(_QWORD *)(v88 + 8));
  if ( v32 && (v89 = v32->fields._size, v89 >= 1) )
  {
    v7->fields.totalMissionNum = v89;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v32,
                                         0,
                                         (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_84;
    if ( v32->fields._size >= 1 )
    {
      m_CachedPtr = this->fields.m_CachedPtr;
      v91 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v32,
                                             v91,
                                             (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_84;
        if ( m_CachedPtr > this->fields.m_CachedPtr )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v32,
                                               v91,
                                               (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_84;
          m_CachedPtr = this->fields.m_CachedPtr;
        }
      }
      while ( ++v91 < v32->fields._size );
    }
    v7->fields.currentMissionId = 0;
    if ( !v31 )
      goto LABEL_84;
    System_Collections_Generic_List_object___AddRange(
      v31,
      (System_Collections_Generic_IEnumerable_T__o *)v32,
      (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v31 )
      goto LABEL_84;
    if ( v31->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v31;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildWeeklyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  MasterMissionComponent_o *v7; // x19
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v26; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int64_t size; // x2
  int v29; // w9
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v31; // x20
  System_Collections_Generic_List_object__o *v32; // x21
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v35; // w28
  Il2CppClass **v36; // x8
  int64_t v37; // x24
  int32_t v38; // w1
  MasterMissionComponent_o *v39; // x25
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  __int64 v53; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  MstMissionDisplayInfoEntity_o *v63; // x0
  __int64 v64; // x1
  int64_t v65; // x25
  __int64 methodPtr_low; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  int DEFAULT_LIMITCNT; // w8
  MasterMissionComponent_c *v77; // x0
  int64_t v78; // x1
  int32_t v79; // w8
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_IEnumerator_T__c *v86; // x8
  __int64 v87; // x9
  int32_t *v88; // x10
  __int64 v89; // x0
  int v90; // w8
  intptr_t m_CachedPtr; // w24
  int32_t v92; // w22

  v7 = this;
  if ( (byte_4B39B60 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1BD3458(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v9);
    sub_1BD3458(&System_IDisposable_TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Clear__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v20);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v21);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v22);
    sub_1BD3458(&MstMissionDisplayInfoEntity_TypeInfo, v23);
    this = (MasterMissionComponent_o *)sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B39B60 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_83;
  v26 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v26;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_83;
  size = (unsigned int)currentMstMissionEntList->fields._size;
  v29 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v29;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v7->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v7->fields.currentMissionDispInfoEnt, 0LL, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_83;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
        sub_1BD36BC(this, method);
      v36 = &mstMissionList->obj.klass + (int)v35;
      v37 = (int64_t)v36[4];
      if ( !v37 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v36[4], 0LL);
      if ( !MasterData_object )
        break;
      v38 = *(_DWORD *)(v37 + 20);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getWeeklyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             v38,
                                             0LL);
        if ( !this )
          break;
        v39 = this;
        if ( this->fields.m_CancellationTokenSource )
        {
          this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)*(unsigned int *)(v37 + 20);
          v40 = *(_QWORD *)&this->fields.m_CachedPtr;
          v41 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v40 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v40 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v40 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          if ( !v32 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v32,
            (System_Collections_Generic_IEnumerable_T__o *)v39,
            (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v7->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v49 = *(_QWORD *)&this->fields.m_CachedPtr;
          v50 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v49 )
            break;
          v51 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v37,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = v49 + 8 * v51;
            LODWORD(this->fields.m_CancellationTokenSource) = v51 + 1;
            *(_QWORD *)(v52 + 32) = v37;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v52 + 32), v37, v43, v44, v45, v46, v47, v48);
          }
        }
      }
      else
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getClearMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             v38,
                                             2,
                                             0LL);
        if ( !v31 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v31,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_31;
    }
LABEL_83:
    sub_1BD36B4(this, method);
  }
LABEL_31:
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_83;
  this = (MasterMissionComponent_o *)DataManager__getEntityList_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F31880 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v53);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v56;
        p_offset += 4;
        if ( !v56 )
          goto LABEL_38;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_38:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v59 = Enumerator->klass;
    v60 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v61 = &v59->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v61 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_45;
      }
      v62 = (__int64)&v59->vtable[*v61].method;
    }
    else
    {
LABEL_45:
      v62 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v63 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(
                                             Enumerator,
                                             *(_QWORD *)(v62 + 8));
    v65 = (int64_t)v63;
    if ( !v63 )
      goto LABEL_85;
    methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v63->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MstMissionDisplayInfoEntity_c *)v63->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_1BD3974(v63);
LABEL_85:
      sub_1BD36B4(v63, v64);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v63, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      static_fields = (struct MasterMissionComponent_StaticFields *)(v65 + 20);
      if ( *(int *)(v65 + 20) <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        static_fields = isOpenNow->static_fields;
      }
      if ( !v7 )
        sub_1BD36B4(isOpenNow, v68);
      v7->fields.currentEventSvtId = static_fields->DEFAULT_SVT_ID;
      DEFAULT_LIMITCNT = *(_DWORD *)(v65 + 32);
      if ( DEFAULT_LIMITCNT <= 0 )
      {
        v77 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v77 = MasterMissionComponent_TypeInfo;
        }
        DEFAULT_LIMITCNT = v77->static_fields->DEFAULT_LIMITCNT;
      }
      v7->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
      v78 = *(_QWORD *)(v65 + 24);
      v7->fields.voiceNameList = (struct System_String_array *)v78;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v7->fields.voiceNameList, v78, v69, v70, v71, v72, v73, v74);
      v79 = *(_DWORD *)(v65 + 16);
      v7->fields.currentMissionDispInfoEnt = (struct MstMissionDisplayInfoEntity_o *)v65;
      v7->fields.currentDispId = v79;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v7->fields.currentMissionDispInfoEnt,
        v65,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
    }
  }
  v86 = Enumerator->klass;
  v87 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v88 = &v86->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
    {
      --v87;
      v88 += 4;
      if ( !v87 )
        goto LABEL_65;
    }
    v89 = (__int64)&v86->vtable[*v88].method;
  }
  else
  {
LABEL_65:
    v89 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v89)(
                                       Enumerator,
                                       *(_QWORD *)(v89 + 8));
  if ( v32 && (v90 = v32->fields._size, v90 >= 1) )
  {
    v7->fields.totalMissionNum = v90;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v32,
                                         0,
                                         (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_83;
    m_CachedPtr = this->fields.m_CachedPtr;
    if ( v32->fields._size >= 1 )
    {
      v92 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v32,
                                             v92,
                                             (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_83;
        if ( m_CachedPtr > this->fields.m_CachedPtr )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v32,
                                               v92,
                                               (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_83;
          m_CachedPtr = this->fields.m_CachedPtr;
        }
      }
      while ( ++v92 < v32->fields._size );
    }
    v7->fields.currentMissionId = m_CachedPtr;
    if ( !v31 )
      goto LABEL_83;
    System_Collections_Generic_List_object___AddRange(
      v31,
      (System_Collections_Generic_IEnumerable_T__o *)v32,
      (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v31 )
      goto LABEL_83;
    if ( v31->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v31;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getValidExtraMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  MasterMissionComponent_o *v7; // x19
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v26; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int64_t size; // x2
  int v29; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v31; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v34; // w26
  Il2CppClass **v35; // x8
  int64_t v36; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  __int64 v50; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  MstMissionDisplayInfoEntity_o *v60; // x0
  __int64 v61; // x1
  int64_t v62; // x24
  __int64 methodPtr_low; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  int DEFAULT_LIMITCNT; // w8
  MasterMissionComponent_c *v74; // x0
  int64_t v75; // x1
  int32_t v76; // w8
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  int v87; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v89; // w21

  v7 = this;
  if ( (byte_4B39B61 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1BD3458(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v9);
    sub_1BD3458(&System_IDisposable_TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Clear__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v20);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v21);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v22);
    sub_1BD3458(&MstMissionDisplayInfoEntity_TypeInfo, v23);
    this = (MasterMissionComponent_o *)sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B39B61 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v26 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v26;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = (unsigned int)currentMstMissionEntList->fields._size;
  v29 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v29;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v7->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v7->fields.currentMissionDispInfoEnt, 0LL, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= max_length )
        sub_1BD36BC(this, method);
      v35 = &mstMissionList->obj.klass + (int)v34;
      v36 = (int64_t)v35[4];
      if ( !v36 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v35[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__getExtraMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             *(_DWORD *)(v36 + 20),
                                             0LL);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !v31 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v31,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)*(unsigned int *)(v36 + 20);
            v43 = *(_QWORD *)&this->fields.m_CachedPtr;
            v44 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v43 )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v43 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(v43 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v7->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v46 = *(_QWORD *)&this->fields.m_CachedPtr;
            v47 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v46 )
              break;
            v48 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v36,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = v46 + 8 * v48;
              LODWORD(this->fields.m_CancellationTokenSource) = v48 + 1;
              *(_QWORD *)(v49 + 32) = v36;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v49 + 32), v36, v37, v38, v39, v40, v41, v42);
            }
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1BD36B4(this, method);
  }
LABEL_29:
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)DataManager__getEntityList_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F31880 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v50);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v53;
        p_offset += 4;
        if ( !v53 )
          goto LABEL_36;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_36:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v56 = Enumerator->klass;
    v57 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v58 = &v56->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v58 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_43;
      }
      v59 = (__int64)&v56->vtable[*v58].method;
    }
    else
    {
LABEL_43:
      v59 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v60 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                                             Enumerator,
                                             *(_QWORD *)(v59 + 8));
    v62 = (int64_t)v60;
    if ( !v60 )
      goto LABEL_80;
    methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v60->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MstMissionDisplayInfoEntity_c *)v60->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_1BD3974(v60);
LABEL_80:
      sub_1BD36B4(v60, v61);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v60, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      static_fields = (struct MasterMissionComponent_StaticFields *)(v62 + 20);
      if ( *(int *)(v62 + 20) <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        static_fields = isOpenNow->static_fields;
      }
      if ( !v7 )
        sub_1BD36B4(isOpenNow, v65);
      v7->fields.currentEventSvtId = static_fields->DEFAULT_SVT_ID;
      DEFAULT_LIMITCNT = *(_DWORD *)(v62 + 32);
      if ( DEFAULT_LIMITCNT <= 0 )
      {
        v74 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v74 = MasterMissionComponent_TypeInfo;
        }
        DEFAULT_LIMITCNT = v74->static_fields->DEFAULT_LIMITCNT;
      }
      v7->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
      v75 = *(_QWORD *)(v62 + 24);
      v7->fields.voiceNameList = (struct System_String_array *)v75;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v7->fields.voiceNameList, v75, v66, v67, v68, v69, v70, v71);
      v76 = *(_DWORD *)(v62 + 16);
      v7->fields.currentMissionDispInfoEnt = (struct MstMissionDisplayInfoEntity_o *)v62;
      v7->fields.currentDispId = v76;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v7->fields.currentMissionDispInfoEnt,
        v62,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
    }
  }
  v83 = Enumerator->klass;
  v84 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v85 = &v83->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_63;
    }
    v86 = (__int64)&v83->vtable[*v85].method;
  }
  else
  {
LABEL_63:
    v86 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(Enumerator, *(_QWORD *)(v86 + 8));
  if ( v31 )
  {
    v87 = v31->fields._size;
    if ( v87 < 1 )
    {
      return 0LL;
    }
    else
    {
      v7->fields.totalMissionNum = v87;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v31,
                                           0,
                                           (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      if ( v31->fields._size >= 1 )
      {
        m_CachedPtr = this->fields.m_CachedPtr;
        v89 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v31,
                                               v89,
                                               (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v31,
                                                 v89,
                                                 (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v89 < v31->fields._size );
      }
      v7->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v31;
}


int32_t __fastcall MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4B39B50 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_1BD3458(&DataManager_TypeInfo, v3);
    byte_4B39B50 = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1BD36B4(0LL, v6);
    result = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0LL);
    this->fields.stonePrice = result;
  }
  return result;
}


MasterMissionListViewManager_o *__fastcall MasterMissionComponent__get_listViewManager(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1BD36B4(this, method);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BD36BC(this, method);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  MasterMissionComponent_o *v19; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct PlayMakerFSM_o *v30; // x10
  MasterMissionListViewManager_o *v31; // x21
  int64_t fsm; // x1
  int64_t fsmTemplate; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  v4 = this;
  if ( (byte_4B39B7B & 1) == 0 )
  {
    sub_1BD3458(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___, result);
    sub_1BD3458(&JsonManager_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_11214/*"REQUEST_OK"*/, v6);
    sub_1BD3458(&StringLiteral_11212/*"REQUEST_NG"*/, v7);
    sub_1BD3458(&StringLiteral_22325/*"ng"*/, v8);
    sub_1BD3458(&StringLiteral_15997/*"["*/, v9);
    this = (MasterMissionComponent_o *)sub_1BD3458(&StringLiteral_16255/*"]"*/, v10);
    byte_4B39B7B = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( !System_String__Equals_62533564(result, (System_String_o *)StringLiteral_22325/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_62536508(
                            (System_String_o *)StringLiteral_15997/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16255/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                         v12,
                                         (const MethodInfo_2F98C0C *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( this )
    {
      v19 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_21;
      myFsm = this->fields.myFsm;
      if ( !myFsm )
        goto LABEL_20;
      v4->fields.isOverPresentBox = (bool)myFsm->fields.m_CancellationTokenSource;
      v4->fields.overflowType = HIDWORD(myFsm->fields.m_CancellationTokenSource);
      v21 = *(_QWORD *)&myFsm->fields.m_CachedPtr;
      v4->fields.receiveMissionIds = (struct System_Int32_array *)v21;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v4->fields.receiveMissionIds, v21, v13, v14, v15, v16, v17, v18);
      missionListViewManager = v4->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_20;
      nowType = v4->fields.nowType;
      if ( (unsigned int)nowType >= missionListViewManager->max_length
        || !LODWORD(v19->fields.m_CancellationTokenSource) )
      {
LABEL_21:
        sub_1BD36BC(this, result);
      }
      v30 = v19->fields.myFsm;
      if ( v30 )
      {
        v31 = missionListViewManager->m_Items[nowType];
        if ( v31 )
        {
          fsm = (int64_t)v30->fields.fsm;
          fsmTemplate = (int64_t)v30->fields.fsmTemplate;
          v31->fields.getSvtList = (struct GetSvts_array *)fsm;
          sub_1BD33FC((PartyOrganizationUtility_o *)&v31->fields.getSvtList, fsm, v22, v23, v24, v25, v26, v27);
          v31->fields.getCommandCodeList = (struct GetCommandCodes_array *)fsmTemplate;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v31->fields.getCommandCodeList,
            fsmTemplate,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          this = (MasterMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v11 = &StringLiteral_11214/*"REQUEST_OK"*/;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_20:
    sub_1BD36B4(this, result);
  }
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_20;
  v11 = &StringLiteral_11212/*"REQUEST_NG"*/;
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
  bool _38470128; // w0
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B39B6F & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, voiceIDs);
    sub_1BD3458(&Method_MasterMissionComponent_setNormalFace__, v5);
    sub_1BD3458(&TutorialFlag_TypeInfo, v6);
    byte_4B39B6F = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38470128 = TutorialFlag__Get_38470128(126, 0LL);
  if ( voiceIDs && !_38470128 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v10 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
    if ( !svtVoiceCtr )
      sub_1BD36B4(v11, v12);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v10, 0LL);
  }
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice_44041068(
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  bool _38470128; // w0
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v28; // x20

  if ( (byte_4B39B70 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, voiceIDs);
    sub_1BD3458(&TutorialFlag_TypeInfo, v7);
    sub_1BD3458(&Method_MasterMissionComponent___c__DisplayClass172_0__playEventMissionSvtVoice_b__0__, v8);
    sub_1BD3458(&MasterMissionComponent___c__DisplayClass172_0_TypeInfo, v9);
    byte_4B39B70 = 1;
  }
  v10 = sub_1BD36A4(MasterMissionComponent___c__DisplayClass172_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = action;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)action, v19, v20, v21, v22, v23, v24);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38470128 = TutorialFlag__Get_38470128(126, 0LL);
  if ( voiceIDs && !_38470128 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v28 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v10,
      Method_MasterMissionComponent___c__DisplayClass172_0__playEventMissionSvtVoice_b__0__,
      0LL);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v28, 0LL);
      return;
    }
LABEL_11:
    sub_1BD36B4(v11, v12);
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

  if ( (byte_4B39B6E & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v3);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5);
    sub_1BD3458(&Method_MasterMissionComponent_setNormalFace__, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    byte_4B39B6E = 1;
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
      if ( !byte_4B31946 )
      {
        voicePlayEffect = sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v10);
        byte_4B31946 = 1;
      }
      if ( !v12
        || (UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0 )
      {
LABEL_20:
        sub_1BD36B4(voicePlayEffect, v10);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v14 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_String_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct MstMissionDisplayInfoEntity_o *v42; // x8
  int v43; // w8
  __int64 *v44; // x8
  struct System_String_o *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 *v52; // x8
  struct System_String_o *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  TerminalSceneComponent_c *v60; // x0
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v63; // x21
  MasterMissionComponent___c_c *v64; // x8
  System_Action_o *_9__151_0; // x22
  Il2CppObject *v66; // x23
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7

  if ( (byte_4B39B5E & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__, v4);
    sub_1BD3458(&LocalizationManager_TypeInfo, v5);
    sub_1BD3458(&NetworkManager_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v8);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v9);
    sub_1BD3458(&Method_MasterMissionComponent___c__reDispMissionList_b__151_0__, v10);
    sub_1BD3458(&MasterMissionComponent___c_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_8917/*"MST_REMISSON_MSG"*/, v12);
    sub_1BD3458(&StringLiteral_8915/*"MST_REDISP_MSG"*/, v13);
    sub_1BD3458(&StringLiteral_8918/*"MST_REMISSON_TITLE_TXT"*/, v14);
    sub_1BD3458(&StringLiteral_8916/*"MST_REDISP_TITLE_TXT"*/, v15);
    byte_4B39B5E = 1;
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
                                                                                    (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
          if ( currentMstMissionEntList )
          {
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
            if ( !currentMstMissionEntList )
              goto LABEL_59;
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                      currentMstMissionEntList,
                                                                                      v24,
                                                                                      (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
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
                                                                                        (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
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
                                                                                        (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
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
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8918/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
        this->fields.titleTxt = v28;
        sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.titleTxt, (int64_t)v28, v29, v30, v31, v32, v33, v34);
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8917/*"MST_REMISSON_MSG"*/, 0LL);
        this->fields.msgTxt = v35;
        sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.msgTxt, (int64_t)v35, v36, v37, v38, v39, v40, v41);
        v27 = 1;
      }
      v42 = this->fields.currentMissionDispInfoEnt;
      if ( !v42 )
        goto LABEL_59;
      if ( v20 >= v42->fields.endedAt )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v44 = &StringLiteral_8918/*"MST_REMISSON_TITLE_TXT"*/;
        if ( !v27 )
          v44 = &StringLiteral_8916/*"MST_REDISP_TITLE_TXT"*/;
        v45 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
        this->fields.titleTxt = v45;
        sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.titleTxt, (int64_t)v45, v46, v47, v48, v49, v50, v51);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v52 = &StringLiteral_8917/*"MST_REMISSON_MSG"*/;
        if ( !v27 )
          v52 = &StringLiteral_8915/*"MST_REDISP_MSG"*/;
        v53 = LocalizationManager__Get((System_String_o *)*v52, 0LL);
        this->fields.msgTxt = v53;
        sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.msgTxt, (int64_t)v53, v54, v55, v56, v57, v58, v59);
        v43 = 1;
      }
      else
      {
        v43 = 0;
      }
      isNotNext = this->fields.isNotNext;
      LODWORD(currentMissionDispInfoEnt) = v43 | v27;
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
    v60 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v60 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v60->static_fields->MASTER_MISSION_RESET_KEY, 0LL);
    currentMstMissionEntList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    titleTxt = this->fields.titleTxt;
    msgTxt = this->fields.msgTxt;
    v63 = (CommonUI_o *)currentMstMissionEntList;
    v64 = MasterMissionComponent___c_TypeInfo;
    if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v64 = MasterMissionComponent___c_TypeInfo;
    }
    _9__151_0 = v64->static_fields->__9__151_0;
    if ( !_9__151_0 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = MasterMissionComponent___c_TypeInfo;
      }
      v66 = (Il2CppObject *)v64->static_fields->__9;
      _9__151_0 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(_9__151_0, v66, Method_MasterMissionComponent___c__reDispMissionList_b__151_0__, 0LL);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__151_0 = _9__151_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__151_0,
        (int64_t)_9__151_0,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
    }
    if ( v63 )
    {
      CommonUI__OpenNotificationDialog(v63, titleTxt, msgTxt, _9__151_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
LABEL_59:
    sub_1BD36B4(currentMstMissionEntList, v17);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct StandFigureBack_o *standFigureBack; // x8
  int64_t standFigureCollectList; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4B39B6D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__, v3);
    byte_4B39B6D = 1;
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
                             (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
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
                                 (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
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
                                     (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
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
                    standFigureCollectList = (int64_t)standFigureBack->fields.standFigureCollectList;
                    *((_QWORD *)currentVoiceDataList + 11) = standFigureCollectList;
                    sub_1BD33FC(
                      (PartyOrganizationUtility_o *)((char *)currentVoiceDataList + 88),
                      standFigureCollectList,
                      v11,
                      v12,
                      v13,
                      v14,
                      v15,
                      v16);
                    MasterMissionComponent__playSvtVoice(this, v19);
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
    sub_1BD36B4(currentVoiceDataList, method);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v41; // x22
  struct System_String_o *VoiceAssetName; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  __int64 v50; // x1
  struct System_String_array *voiceNameList; // x23
  __int64 v52; // x8
  unsigned __int64 v53; // x24
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_List_object__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  MasterMissionComponent_VoiceData_o *v74; // x22
  const MethodInfo *v75; // x4
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  int32_t v86; // w8
  Il2CppObject *current; // x21
  Il2CppObject *v88; // x0
  __int64 v89; // x1
  SoundManager_o *v90; // x20
  System_String_o *klass; // x21
  System_Action_o *v92; // x22
  __int64 v93; // x0
  __int64 v94; // x1
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+0h] [xbp-70h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B39B64 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, v13);
    sub_1BD3458(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v14);
    sub_1BD3458(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo, v15);
    sub_1BD3458(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, v16);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BD3458(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v18);
    sub_1BD3458(&MasterMissionComponent_VoiceData_TypeInfo, v19);
    byte_4B39B64 = 1;
  }
  voicePrefix = 0LL;
  memset(&v95, 0, sizeof(v95));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v23 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v24;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.currentVoiceDataList,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v31;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.voiceListRand, (int64_t)v31, v33, v34, v35, v36, v37, v38);
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
  v41 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0LL);
  this->fields.lastAssetName = VoiceAssetName;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.lastAssetName,
    (int64_t)VoiceAssetName,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    v52 = *(_QWORD *)&voiceNameList->max_length;
    if ( v52 )
    {
      if ( (int)v52 >= 1 )
      {
        v53 = 0LL;
        do
        {
          if ( v53 >= (unsigned int)v52 )
            sub_1BD36BC(MstMissionVoiceListByName, v50);
          MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                        v41,
                                        voiceNameList->m_Items[v53],
                                        0LL);
          if ( MstMissionVoiceListByName )
          {
            p_obj = &MstMissionVoiceListByName->obj;
            Instance = *p_voiceListRand;
            if ( !*p_voiceListRand )
              goto LABEL_37;
            v60 = *((_QWORD *)Instance + 2);
            v61 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++*((_DWORD *)Instance + 7);
            if ( !v60 )
              goto LABEL_37;
            v62 = *((int *)Instance + 6);
            if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                p_obj,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = v60 + 8 * v62;
              *((_DWORD *)Instance + 6) = v62 + 1;
              *(_QWORD *)(v63 + 32) = p_obj;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v63 + 32), (int64_t)p_obj, v54, v55, v56, v57, v58, v59);
            }
          }
          LODWORD(v52) = voiceNameList->max_length;
        }
        while ( (__int64)++v53 < (int)v52 );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v41, 0LL);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.voiceListMission,
    (int64_t)MasterMissionActionVoiceList,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  currentVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v74 = (MasterMissionComponent_VoiceData_o *)sub_1BD36A4(MasterMissionComponent_VoiceData_TypeInfo);
  MasterMissionComponent_VoiceData___ctor(v74, VoiceAssetName, voiceListRand, voiceListMission, v75);
  if ( !currentVoiceDataList
    || (items = currentVoiceDataList->fields._items,
        v83 = Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__,
        ++currentVoiceDataList->fields._version,
        !items) )
  {
LABEL_37:
    sub_1BD36B4(Instance, p_obj);
  }
  size = currentVoiceDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      currentVoiceDataList,
      (Il2CppObject *)v74,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = &items->obj.klass + size;
    currentVoiceDataList->fields._size = size + 1;
    v85[4] = (Il2CppClass *)v74;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v85 + 4), (int64_t)v74, v76, v77, v78, v79, v80, v81);
  }
LABEL_25:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_37;
  v86 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v86;
  if ( v86 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, (const MethodInfo *)p_obj);
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v95,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v95,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v95.fields._current;
      v88 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_1BD36B4(v88, v89);
      v90 = (SoundManager_o *)v88;
      klass = (System_String_o *)current[1].klass;
      v92 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(v92, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0LL);
      if ( !v90 )
        sub_1BD36B4(v93, v94);
      SoundManager__LoadAudioAssetStorage(v90, klass, v92, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v95,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
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

  if ( (byte_4B39B63 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1BD3458(&int_TypeInfo, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1BD3458(&LocalizationManager_TypeInfo, v6);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BD3458(&StringLiteral_8668/*"MASTER_MISSION_COMPLETE_NUM"*/, v9);
    byte_4B39B63 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
                                    (const MethodInfo_35A3A7C *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1BD36B4(Instance, v11);
  }
LABEL_11:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8668/*"MASTER_MISSION_COMPLETE_NUM"*/, 0LL);
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
    Instance = (DataManager_o *)System_String__Format_62539620(v17, v22, v26, 0LL);
    if ( !eventMissionTxt2 )
      goto LABEL_24;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0LL);
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    v27 = this->fields.eventMissionTxt2;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    if ( !v27 )
      goto LABEL_24;
    UILabel__SetCondensedScale_47726000(
      v27,
      MasterMissionComponent_TypeInfo->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH,
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
    Instance = (DataManager_o *)System_String__Format_62539620(v17, v32, v36, 0LL);
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

  if ( (byte_4B39B6C & 1) == 0 )
  {
    sub_1BD3458(&MasterMissionComponent_TypeInfo, method);
    byte_4B39B6C = 1;
  }
  v3 = MasterMissionComponent_TypeInfo;
  standFigureBack = this->fields.standFigureBack;
  currentEventSvtId = this->fields.currentEventSvtId;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !standFigureBack )
    sub_1BD36B4(v3, method);
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

  if ( (byte_4B39B71 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B39B71 = 1;
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
    sub_1BD36B4(voicePlayEffect, v4);
  StandFigureBack__SetFaceType((StandFigureBack_o *)voicePlayEffect, 0, 0.0, 0, 0LL);
}


void __fastcall MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  if ( (byte_4B39B82 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_1BD3458(&Method_MasterMissionComponent__setRecieveModifyItem_b__193_0__, v4);
    byte_4B39B82 = 1;
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
          v2),
        (v7 = v3->fields.missionListViewManager) == 0LL) )
  {
LABEL_10:
    sub_1BD36B4(this, method);
  }
  v8 = v3->fields.nowType;
  if ( (unsigned int)v8 >= v7->max_length )
LABEL_11:
    sub_1BD36BC(this, method);
  v9 = (MissionListViewManager_o *)v7->m_Items[v8];
  v10 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v3, Method_MasterMissionComponent__setRecieveModifyItem_b__193_0__, 0LL);
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
    sub_1BD36B4(0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BD3518(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BD36D0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BD3580(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A18134;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A180EC;
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
  if ( (byte_4B39B97 & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, isDecide);
    byte_4B39B97 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BD340C(this, v9, callback, object);
}


void __fastcall MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BD3410(result, 0LL, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._MstMissionEntity_k__BackingField = mstMission;
  v10 = (MasterMissionComponent_MasterMissionInfoItem_o *)((char *)v10 + 16);
  sub_1BD33FC((PartyOrganizationUtility_o *)v10, (int64_t)mstMission, v11, v12, v13, v14, v15, v16);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MstMissionEntity_k__BackingField = value;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall MasterMissionComponent_VoiceData___ctor(
        MasterMissionComponent_VoiceData_o *this,
        System_String_o *voiceDataName,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListRand,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListMission,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.DataName = voiceDataName;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)voiceDataName, v9, v10, v11, v12, v13, v14);
  this->fields.DataListRand = voiceDataListRand;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.DataListRand,
    (int64_t)voiceDataListRand,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.DataListMission = voiceDataListMission;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.DataListMission,
    (int64_t)voiceDataListMission,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall MasterMissionComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B39B98 & 1) == 0 )
  {
    sub_1BD3458(&MasterMissionComponent___c_TypeInfo, v1);
    byte_4B39B98 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(MasterMissionComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MasterMissionComponent___c_TypeInfo->static_fields->__9 = (struct MasterMissionComponent___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)MasterMissionComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall MasterMissionComponent___c___ctor(MasterMissionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c___ExitCompleteMission_b__148_0(
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

  if ( (byte_4B39B9A & 1) == 0 )
  {
    sub_1BD3458(&AvalonSceneManager_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B39B9A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    goto LABEL_21;
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v5);
    byte_4B31F06 = 1;
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
  TerminalSceneComponent__playBgm_43046652((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v5);
    byte_4B31F06 = 1;
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
    sub_1BD36B4(Instance, v5);
  ScrPlayerStatus__OpenMasterMissionFromCompleteMission((ScrPlayerStatus_o *)Instance, 0LL);
}


void __fastcall MasterMissionComponent___c___OnClickCompleteMissionBtn_b__147_1(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterMissionComponent___c___OnClickShopBtn_b__175_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  SceneJumpInfo_o *v7; // x19

  if ( (byte_4B39B9C & 1) == 0 )
  {
    sub_1BD3458(&SceneJumpInfo_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BD3458(&StringLiteral_13169/*"StoneFragments"*/, v4);
    byte_4B39B9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        v7 = (SceneJumpInfo_o *)sub_1BD36A4(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_39452372(v7, (System_String_o *)StringLiteral_13169/*"StoneFragments"*/, 0LL),
        !v7)
    || (SceneJumpInfo__SetReturnNowScene(v7, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BD36B4(Instance, v6);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v7, 0LL);
}


void __fastcall MasterMissionComponent___c___OpenCompleteMission_b__146_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_4B39B99 & 1) == 0 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, method);
    byte_4B39B99 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, method);
    byte_4B31F06 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance )
    sub_1BD36B4(0LL, method);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0LL);
}


void __fastcall MasterMissionComponent___c___reDispMissionList_b__151_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B39B9B & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4B39B9B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 1, 1, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass172_0___ctor(
        MasterMissionComponent___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass172_0___playEventMissionSvtVoice_b__0(
        MasterMissionComponent___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent_o *_4__this; // x0
  struct System_Action_o *action; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (MasterMissionComponent__setNormalFace(_4__this, method), (action = this->fields.action) == 0LL) )
    sub_1BD36B4(_4__this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))action->fields.m_target)(
    action->fields.original_method_info,
    *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall MasterMissionComponent___c__DisplayClass182_0___ctor(
        MasterMissionComponent___c__DisplayClass182_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___c__DisplayClass182_0___BulkReceiveConfirm_b__0(
        MasterMissionComponent___c__DisplayClass182_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MasterMissionComponent___c__DisplayClass182_0_o *v4; // x19
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
  __int64 v16; // x1
  __int64 MissionId; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  __int64 *v21; // x8
  struct MasterMissionComponent_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct MasterMissionComponent_o *v29; // x8
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4B39B9D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__, isDecide);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BD3458(&StringLiteral_3573/*"CLICK_DECIDE"*/, v12);
    this = (MasterMissionComponent___c__DisplayClass182_0_o *)sub_1BD3458(&StringLiteral_3566/*"CLICK_CANCEL"*/, v13);
    byte_4B39B9D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v15 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (MasterMissionComponent___c__DisplayClass182_0_o *)v4->fields.items;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v31 = v30;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__) )
      {
        if ( !v31.fields._current )
          sub_1BD36B4(0LL, v16);
        MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v31.fields._current, 0LL);
        if ( !v15 )
          sub_1BD36B4(MissionId, (unsigned int)MissionId);
        items = v15->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !items )
          sub_1BD36B4(MissionId, (unsigned int)MissionId);
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            MissionId,
            *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v15->fields._size = size + 1;
          items->m_Items[size + 1] = MissionId;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v15 )
      {
        v22 = v4->fields.__4__this;
        this = (MasterMissionComponent___c__DisplayClass182_0_o *)System_Collections_Generic_List_int___ToArray(
                                                                    v15,
                                                                    (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v22 )
        {
          v22->fields.sendMissionIds = (struct System_Int32_array *)this;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v22->fields.sendMissionIds,
            (int64_t)this,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          v29 = v4->fields.__4__this;
          if ( v29 )
          {
            this = (MasterMissionComponent___c__DisplayClass182_0_o *)v29->fields.myFsm;
            if ( this )
            {
              v21 = &StringLiteral_3573/*"CLICK_DECIDE"*/;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BD36B4(this, isDecide);
  }
  this = (MasterMissionComponent___c__DisplayClass182_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_25;
  v21 = &StringLiteral_3566/*"CLICK_CANCEL"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v21, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass188_0___ctor(
        MasterMissionComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass188_0___ReceiveResultList_b__0(
        MasterMissionComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent___c__DisplayClass188_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v6; // x8

  v2 = this;
  if ( (byte_4B39B9E & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_11787/*"SERVANT_OVER"*/, method);
    sub_1BD3458(&StringLiteral_10585/*"PRESENT_BOX_OVER"*/, v3);
    this = (MasterMissionComponent___c__DisplayClass188_0_o *)sub_1BD3458(&StringLiteral_3566/*"CLICK_CANCEL"*/, v4);
    byte_4B39B9E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterMissionComponent___c__DisplayClass188_0_o *)_4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( this )
    {
      v6 = &StringLiteral_10585/*"PRESENT_BOX_OVER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_1BD36B4(this, method);
  }
  if ( !this )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v6 = &StringLiteral_11787/*"SERVANT_OVER"*/;
  else
    v6 = &StringLiteral_3566/*"CLICK_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass188_0___ReceiveResultList_b__1(
        MasterMissionComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *nextAction; // x8

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_1BD36B4(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))nextAction->fields.m_target)(
    nextAction->fields.original_method_info,
    *(_QWORD *)&nextAction->fields.extra_arg);
}


void __fastcall MasterMissionComponent___c__DisplayClass188_0___ReceiveResultList_b__2(
        MasterMissionComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *nextAction; // x8

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_1BD36B4(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))nextAction->fields.m_target)(
    nextAction->fields.original_method_info,
    *(_QWORD *)&nextAction->fields.extra_arg);
}


void __fastcall MasterMissionComponent___c__DisplayClass189_0___ctor(
        MasterMissionComponent___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass189_0___PresentBoxOver_b__1(
        MasterMissionComponent___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent___c__DisplayClass189_0_o *v2; // x19
  __int64 v3; // x1
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4B39B9F & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_11787/*"SERVANT_OVER"*/, method);
    this = (MasterMissionComponent___c__DisplayClass189_0_o *)sub_1BD3458(&StringLiteral_3566/*"CLICK_CANCEL"*/, v3);
    byte_4B39B9F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  if ( v2->fields.isPresentBoxOpen )
  {
    MasterMissionComponent__OpenPresentBox(_4__this, method);
    return;
  }
  this = (MasterMissionComponent___c__DisplayClass189_0_o *)_4__this->fields.myFsm;
  if ( !this )
LABEL_11:
    sub_1BD36B4(this, method);
  if ( _4__this->fields.overflowType )
    v5 = &StringLiteral_11787/*"SERVANT_OVER"*/;
  else
    v5 = &StringLiteral_3566/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass204_0___ctor(
        MasterMissionComponent___c__DisplayClass204_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass204_0___UpdateStoneExchangeCount_b__0(
        MasterMissionComponent___c__DisplayClass204_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MasterMissionComponent_o *Object_object__49362760; // x0
  struct MasterMissionComponent_o *_4__this; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct MasterMissionComponent_o *v14; // x8
  int32_t exchangeCount; // w20

  if ( (byte_4B39BA0 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, assetData);
    sub_1BD3458(&MasterMissionComponent_TypeInfo, v5);
    byte_4B39BA0 = 1;
  }
  Object_object__49362760 = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( !assetData )
    goto LABEL_14;
  Object_object__49362760 = (MasterMissionComponent_o *)AssetData__GetObject_object__49362760(
                                                          assetData,
                                                          MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
                                                          (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_object__49362760;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&_4__this->fields.btnEffectBasePrefab,
    (int64_t)Object_object__49362760,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  Object_object__49362760 = this->fields.__4__this;
  if ( !Object_object__49362760 )
    goto LABEL_14;
  MasterMissionComponent__StopStoneButtonEffect(Object_object__49362760, (const MethodInfo *)assetData);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_14;
  if ( v14->fields.nowType == 1 )
  {
    exchangeCount = this->fields.exchangeCount;
    if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
    {
      Object_object__49362760 = this->fields.__4__this;
      if ( Object_object__49362760 )
      {
        MasterMissionComponent__PlayStoneButtonEffect(Object_object__49362760, (const MethodInfo *)assetData);
        return;
      }
LABEL_14:
      sub_1BD36B4(Object_object__49362760, assetData);
    }
  }
}


void __fastcall MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}