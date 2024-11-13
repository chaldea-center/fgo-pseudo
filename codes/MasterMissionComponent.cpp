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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  int64_t v27; // x1
  int64_t v28; // x1
  struct MasterMissionComponent_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  struct MasterMissionComponent_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct MasterMissionComponent_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  struct MasterMissionComponent_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  struct MasterMissionComponent_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  struct MasterMissionComponent_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  struct MasterMissionComponent_StaticFields *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  struct MasterMissionComponent_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct MasterMissionComponent_StaticFields *v92; // x8

  if ( (byte_4B18BB6 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17766/*"btn_txt_off_limited"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17765/*"btn_txt_off_extra"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17772/*"btn_txt_on_limited"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_19007/*"ef_btn_blink"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17764/*"btn_txt_off_daily"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17770/*"btn_txt_on_daily"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_17773/*"btn_txt_on_weekly"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_17767/*"btn_txt_off_weekly"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_17771/*"btn_txt_on_extra"*/, v24, v25);
    byte_4B18BB6 = 1;
  }
  static_fields = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_SVT_ID = 9000001LL;
  static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  v27 = StringLiteral_17770/*"btn_txt_on_daily"*/;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17770/*"btn_txt_on_daily"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v27, v2, v3, v4, v5, v6, v7);
  v28 = StringLiteral_17764/*"btn_txt_off_daily"*/;
  v29 = MasterMissionComponent_TypeInfo->static_fields;
  v29->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17764/*"btn_txt_off_daily"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v29->DAILY_OFF_SPRITE_LABEL, v28, v30, v31, v32, v33, v34, v35);
  v36 = StringLiteral_17773/*"btn_txt_on_weekly"*/;
  v37 = MasterMissionComponent_TypeInfo->static_fields;
  v37->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17773/*"btn_txt_on_weekly"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v37->WEEKLY_ON_SPRITE_LABEL, v36, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_17767/*"btn_txt_off_weekly"*/;
  v45 = MasterMissionComponent_TypeInfo->static_fields;
  v45->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17767/*"btn_txt_off_weekly"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->WEEKLY_OFF_SPRITE_LABEL, v44, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_17771/*"btn_txt_on_extra"*/;
  v53 = MasterMissionComponent_TypeInfo->static_fields;
  v53->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17771/*"btn_txt_on_extra"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v53->EXTRA_ON_SPRITE_LABEL, v52, v54, v55, v56, v57, v58, v59);
  v60 = StringLiteral_17765/*"btn_txt_off_extra"*/;
  v61 = MasterMissionComponent_TypeInfo->static_fields;
  v61->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17765/*"btn_txt_off_extra"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v61->EXTRA_OFF_SPRITE_LABEL, v60, v62, v63, v64, v65, v66, v67);
  v68 = StringLiteral_17772/*"btn_txt_on_limited"*/;
  v69 = MasterMissionComponent_TypeInfo->static_fields;
  v69->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17772/*"btn_txt_on_limited"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v69->LIMITED_ON_SPRITE_LABEL, v68, v70, v71, v72, v73, v74, v75);
  v76 = StringLiteral_17766/*"btn_txt_off_limited"*/;
  v77 = MasterMissionComponent_TypeInfo->static_fields;
  v77->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17766/*"btn_txt_off_limited"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v77->LIMITED_OFF_SPRITE_LABEL, v76, v78, v79, v80, v81, v82, v83);
  v84 = StringLiteral_19007/*"ef_btn_blink"*/;
  v85 = MasterMissionComponent_TypeInfo->static_fields;
  v85->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_19007/*"ef_btn_blink"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v85->STONE_EXCHENGE_BUTTON_EFFECT_NAME, v84, v86, v87, v88, v89, v90, v91);
  v92 = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&v92->SLIDE_IN_TIME = 0x42B800003DCCCCCDLL;
  *(_OWORD *)&v92->NOTICE_NUMBER_BADGE_DEPTH = xmmword_BD21F0;
  *(_QWORD *)&v92->NOTICE_NUMBER_LABEL_WIDTH = 28LL;
  v92->BLANK_EARTH_WINDOW_POS.fields.y = 0.0;
  v92->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
}


void __fastcall MasterMissionComponent___ctor(MasterMissionComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionComponent__AcceptReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  System_Int32_array *receiveMissionIds; // x20
  MasterMissionListViewManager_o *v13; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4B18BA1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MasterMissionComponent__AcceptReward_b__187_0__, v4, v5);
    byte_4B18BA1 = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BCAA44(v6, v7);
  receiveMissionIds = this->fields.receiveMissionIds;
  v13 = missionListViewManager->m_Items[nowType];
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__187_0__, 0LL);
  if ( !v13 )
LABEL_7:
    sub_1BCAA3C(v6, v7);
  MasterMissionListViewManager__AcceptReward(v13, receiveMissionIds, v14, v15);
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
    sub_1BCAA44(this, isBulk);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, isBulk);
  v6 = MasterMissionListViewManager__ReceiveMissionItems((MasterMissionListViewManager_o *)this, isBulk, method);
  MasterMissionComponent__BulkReceiveConfirm(v5, v6, v7);
}


void __fastcall MasterMissionComponent__BulkReceiveConfirm(
        MasterMissionComponent_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *items,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
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
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v30; // x22

  if ( (byte_4B18B9D & 1) == 0 )
  {
    sub_1BCA7E0(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo, items, method);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__DisplayClass182_0__BulkReceiveConfirm_b__0__, v6, v7);
    sub_1BCA7E0(&MasterMissionComponent___c__DisplayClass182_0_TypeInfo, v8, v9);
    byte_4B18B9D = 1;
  }
  v10 = sub_1BCAA2C(MasterMissionComponent___c__DisplayClass182_0_TypeInfo, items, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = items;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)items, v19, v20, v21, v22, v23, v24);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v26 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v10 + 24);
  v30 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                               MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo,
                                                               v27,
                                                               v28,
                                                               v29);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)v10,
    Method_MasterMissionComponent___c__DisplayClass182_0__BulkReceiveConfirm_b__0__,
    0LL);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_1BCAA3C(v11, v12);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v26, v30, 0LL);
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
  __int64 v25; // x2
  int32_t v26; // w19

  v3 = this;
  if ( (byte_4B18B98 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BCA7E0(&MasterMissionComponent_TypeInfo, method, v2);
    byte_4B18B98 = 1;
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
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
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
    sub_1BCAA3C(this, method);
  }
  if ( v19->max_length <= 3 )
LABEL_51:
    sub_1BCAA44(this, method);
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
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
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
  v26 = v3->fields.nowType;
  if ( !byte_4B18BE8 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v24, v25);
    byte_4B18BE8 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = v26;
  EventRewardSaveData__SaveMstMissionIndex(0LL);
}


void __fastcall MasterMissionComponent__ChangeViewCompleteMissionLb(
        MasterMissionComponent_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *mstMissionInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x22
  UILabel_o *completeMissionCountNumLb; // x21
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *completeMissionCountNumLb2; // x20
  __int64 v25; // x1
  UILabel_o *completeMissionCountMsgLb; // x20
  struct UILabel_o *completeMissionAlertNumLb; // x8
  struct UILabel_o *completeMissionAlertUnitLb; // x8
  char v29; // w20
  __int64 v30; // x1
  struct UILabel_o *completeMissionAlertMsgLb; // x19
  System_String_o *v32; // x1
  __int64 v33; // x1
  UILabel_o *completeMissionAlertTitleLb; // x20
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18B7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_8766/*"MISSION_ACHIVE_MSG"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3812/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_13488/*"TIME_REST_ACHIVE"*/, v17, v18);
    byte_4B18B7C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8766/*"MISSION_ACHIVE_MSG"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Equals_62409536(
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
    if ( System_String__Equals_62409536((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(this->fields.completeMissionTimeNumStr, 0LL);
  if ( !this->fields.completeMissionAlertTitleLb )
    goto LABEL_36;
  v29 = (char)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.completeMissionAlertTitleLb,
                                0LL);
  if ( !Instance )
    goto LABEL_36;
  if ( (v29 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    completeMissionAlertTitleLb = this->fields.completeMissionAlertTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0LL);
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
            v32 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_34;
          }
        }
      }
    }
LABEL_36:
    sub_1BCAA3C(Instance, v20);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13488/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !completeMissionAlertMsgLb )
    goto LABEL_36;
  v32 = (System_String_o *)Instance;
  Instance = (DataManager_o *)completeMissionAlertMsgLb;
LABEL_34:
  UILabel__set_text((UILabel_o *)Instance, v32, 0LL);
}


void __fastcall MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v8; // x8
  int32_t MissionId; // w20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v3 = this;
  if ( (byte_4B18B9E & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    this = (MasterMissionComponent_o *)sub_1BCA7E0(&StringLiteral_11255/*"REWARD_ACCEPTABLE"*/, v4, v5);
    byte_4B18B9E = 1;
  }
  missionListViewManager = v3->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_11;
  nowType = v3->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_12;
  v8 = missionListViewManager->m_Items[nowType];
  if ( !v8
    || (this = (MasterMissionComponent_o *)v8->fields.receiveItem) == 0LL
    || (MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)this, 0LL),
        (this = (MasterMissionComponent_o *)sub_1BCA888(int___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, method);
  }
  method = (const MethodInfo *)this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_12:
    sub_1BCAA44(this, method);
  LODWORD(this->fields.myFsm) = MissionId;
  v3->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.sendMissionIds, (int64_t)this, v10, v11, v12, v13, v14, v15);
  this = (MasterMissionComponent_o *)v3->fields.myFsm;
  v3->fields.isBoardTouch = 1;
  if ( !this )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11255/*"REWARD_ACCEPTABLE"*/, 0LL);
}


void __fastcall MasterMissionComponent__Close(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v6; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  struct MasterMissionListViewManager_array *v8; // x8
  struct MasterMissionListViewManager_array *v9; // x8
  struct MasterMissionListViewManager_array *v10; // x8
  MasterMissionComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B18BAB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    byte_4B18BAB = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__ReleaseNotification(0LL);
  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    goto LABEL_22;
  EventSvtControl__stopVoice(svtVoiceCtr, 0LL);
  MasterMissionComponent__ReleaseSvtVoiceData(this, v6);
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
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_22;
  if ( v8->max_length <= 1 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v8->m_Items[1];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_22;
  if ( v9->max_length <= 2 )
    goto LABEL_23;
  svtVoiceCtr = (EventSvtControl_o *)v9->m_Items[2];
  if ( !svtVoiceCtr
    || (ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL),
        (v10 = this->fields.missionListViewManager) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(svtVoiceCtr, v4);
  }
  if ( v10->max_length <= 3 )
LABEL_23:
    sub_1BCAA44(svtVoiceCtr, v4);
  svtVoiceCtr = (EventSvtControl_o *)v10->m_Items[3];
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
  MasterMissionComponent__UpdateEventInfos(v11, v12);
}


void __fastcall MasterMissionComponent__EndLoadVoiceAssets(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B18B8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B18B8A = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(titleInfo, v4);
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
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  MasterMissionComponent___c_c *v17; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__148_0; // x20
  Il2CppObject *v20; // x21
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B18B80 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__ExitCompleteMission_b__148_0__, v7, v8);
    sub_1BCA7E0(&MasterMissionComponent___c_TypeInfo, v9, v10);
    byte_4B18B80 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v12);
    v15 = AvalonSceneManager_TypeInfo;
  }
  v17 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v12);
    v17 = MasterMissionComponent___c_TypeInfo;
  }
  _9__148_0 = v17->static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v12);
      v17 = MasterMissionComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__148_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(_9__148_0, v20, Method_MasterMissionComponent___c__ExitCompleteMission_b__148_0__, 0LL);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__148_0 = _9__148_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__148_0,
      (int64_t)_9__148_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v16 )
    sub_1BCAA3C(v17, v12);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, _9__148_0, 0LL);
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
  __int64 v14; // x1
  bool IsIgnoreStartCondition; // w25
  bool v16; // w24
  int32_t MissionProgressType; // w0

  if ( (byte_4B18B7D & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BCA7E0(&MissionInfoMaker_TypeInfo, eventMissionList, *(_QWORD *)&type);
    byte_4B18B7D = 1;
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
        sub_1BCAA44(this, eventMissionList);
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
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v14);
      v16 = v13;
      MissionProgressType = MissionInfoMaker__GetMissionProgressType(
                              missionTargetId,
                              id,
                              v16,
                              IsIgnoreStartCondition,
                              0LL);
      this = (MasterMissionComponent_o *)MissionInfoMaker__GetProgStatus(
                                           v9->fields.missionTargetId,
                                           v9->fields.id,
                                           MissionProgressType,
                                           v16,
                                           0LL);
      max_length = eventMissionList->max_length;
      ++v6;
      if ( (_DWORD)this == 3 )
        ++v7;
      if ( v6 >= max_length )
        return v7;
    }
LABEL_16:
    sub_1BCAA3C(this, eventMissionList);
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
  const MethodInfo *v11; // x3

  if ( (byte_4B18B8C & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_1BCA7E0(
                                         &MasterMissionListViewItem_TypeInfo,
                                         eventMissionList,
                                         *(_QWORD *)&type);
    byte_4B18B8C = 1;
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
        sub_1BCAA44(this, eventMissionList);
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_1BCAA2C(
                                             MasterMissionListViewItem_TypeInfo,
                                             eventMissionList,
                                             *(_QWORD *)&type,
                                             method);
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
    sub_1BCAA3C(this, eventMissionList);
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
    sub_1BCAA3C(completeMissionIcon, method);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0LL);
}


void __fastcall MasterMissionComponent__InitCompleteMissionLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *currentCompleteMissionList; // x0
  Il2CppObject *Item; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B18B7B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      v4,
      v5);
    byte_4B18B7B = 1;
  }
  currentCompleteMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_1BCAA3C(0LL, method);
  if ( currentCompleteMissionList->fields._size < 1 )
  {
    MasterMissionComponent__HideCompleteMissionIconLb(this, method);
  }
  else
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentCompleteMissionList,
             0,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    MasterMissionComponent__ChangeViewCompleteMissionLb(
      this,
      (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
      v8);
  }
}


bool __fastcall MasterMissionComponent__IsLimitedMissionEnableTime(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BalanceConfig_c *v9; // x0
  int64_t NoneExpireTime; // x23
  int64_t Time; // x19
  MstMissionEntity_array *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  MstMissionEntity_array *v15; // x20
  int v16; // w25
  int v17; // w26
  __int64 v18; // x24
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x21
  int64_t data; // x9
  bool result; // w0
  BalanceConfig_c *v24; // x0

  if ( (byte_4B18B81 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, v3, v4);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B18B81 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v9 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v9->static_fields->NoneExpireTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  Instance = (MstMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (MstMissionEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_31;
  v14 = *(_QWORD *)&Instance->max_length;
  v15 = Instance;
  v16 = v14 - 1;
  if ( (int)v14 >= 1 )
  {
    v17 = 0;
    v18 = -1LL;
    while ( 1 )
    {
      v19 = &v15->obj.klass + v17;
      v20 = v19[4];
      if ( !v20 )
        break;
      Instance = (MstMissionEntity_array *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v19[4], 0LL);
      if ( (_DWORD)Instance == 5 )
      {
        data = (int64_t)v20->_1.this_arg.data;
        if ( (__int64)v20->_1.byval_arg.data > v18 )
          v18 = (__int64)v20->_1.byval_arg.data;
        if ( Time < data && NoneExpireTime > data )
          NoneExpireTime = (int64_t)v20->_1.this_arg.data;
      }
      if ( v16 == v17 )
        goto LABEL_25;
      if ( ++v17 >= v15->max_length )
        sub_1BCAA44(Instance, v13);
    }
LABEL_31:
    sub_1BCAA3C(Instance, v13);
  }
  v18 = -1LL;
LABEL_25:
  result = 0;
  if ( Time < NoneExpireTime && v18 <= Time )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
      v24 = BalanceConfig_TypeInfo;
    }
    return NoneExpireTime < v24->static_fields->NoneExpireTime;
  }
  return result;
}


void __fastcall MasterMissionComponent__LoadNotificationEnd(MasterMissionComponent_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  __int64 v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  _BOOL8 _38402052; // x0
  const MethodInfo *v33; // x1
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  AvalonSceneManager_c *v38; // x8
  CommonUI_o *v39; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_4B18B78 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, v6, v7);
    sub_1BCA7E0(&Method_MasterMissionComponent__LoadNotificationEnd_b__138_0__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v14, v15);
    byte_4B18B78 = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = (struct MstMissionMaster_o *)MasterData_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mstMissionMst,
    (int64_t)MasterData_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  EventRewardSaveData__LoadAllMissionData(0LL);
  MasterMissionComponent__SetMissionDisp(this, v25);
  MasterMissionComponent__SetMissionClearNum(this, v26);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v27);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v28);
  if ( TutorialFlag__Get_38402052(126, 0LL) )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v17);
    MasterMissionComponent__setGuideSvtVoice(this, v30);
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
  MasterMissionComponent__reDispMissionList(this, v29);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v31);
  _38402052 = TutorialFlag__Get_38402052(207, 0LL);
  if ( !_38402052 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_38402052, v33);
  v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v38 = AvalonSceneManager_TypeInfo;
  v39 = (CommonUI_o *)v34;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v35);
    v38 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v38->static_fields->DEFAULT_FADE_TIME;
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__138_0__, 0LL);
  if ( !v39 )
LABEL_29:
    sub_1BCAA3C(Instance, v17);
  CommonUI__maskFadein(v39, DEFAULT_FADE_TIME, v41, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct MasterMissionComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v11; // x0
  QuestRewardTokenAction_c *klass; // x8

  if ( (byte_4B18BAA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionComponent_OnClickBack__, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B18BAA = 1;
  }
  v6 = Method_MasterMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionComponent_OnClickBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B10F83 = 1;
  }
  v11 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    v11 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v11->fields.boardGameTokenAction->klass;
  if ( !klass || (v11 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
    sub_1BCAA3C(v11, v8);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v11, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBulkReceive(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B18BB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionComponent_OnClickBulkReceive__, method, v2);
    sub_1BCA7E0(&StringLiteral_3134/*"BULK_RECEIVE"*/, v4, v5);
    byte_4B18BB4 = 1;
  }
  v6 = Method_MasterMissionComponent_OnClickBulkReceive__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBulkReceive__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionComponent_OnClickBulkReceive__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3134/*"BULK_RECEIVE"*/, 0LL);
}


void __fastcall MasterMissionComponent__OnClickCompleteMissionBtn(
        MasterMissionComponent_o *this,
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject *v36; // x20
  AvalonSceneManager_c *v37; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x21
  __int64 v40; // x1
  System_String_o *v41; // x19
  long double inited; // q0
  _QWORD *v43; // x20
  __int64 v44; // x8
  __int64 v45; // x0
  __int64 v46; // x0
  System_String_o *v47; // x19
  __int64 v48; // x2
  __int64 v49; // x3
  CommonUI_o *v50; // x20
  MasterMissionComponent___c_c *v51; // x8
  System_Action_o *_9__147_1; // x21
  Il2CppObject *v53; // x22
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  if ( (byte_4B18B7F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Array_Empty_object___, v4, v5);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__147_0__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__147_1__, v22, v23);
    sub_1BCA7E0(&MasterMissionComponent___c_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_3811/*"COMPLETE_MISSION_END"*/, v26, v27);
    byte_4B18B7F = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v29);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v29, v30);
        byte_4B10F83 = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v29);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v31 = **(_QWORD **)&Instance[1].fields._DispLog;
      if ( v31 )
      {
        Instance = *(DataManager_o **)(v31 + 264);
        if ( Instance )
        {
          ScrTerminalMap__DestroyEventActionEffect((ScrTerminalMap_o *)Instance, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v32);
          TerminalPramsManager__PlaySystemSE(0, 0LL);
          v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v37 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v33);
            v37 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
          v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
          System_Action___ctor(
            v39,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__147_0__,
            0LL);
          if ( v36 )
          {
            CommonUI__maskFadeout((CommonUI_o *)v36, 1, DEFAULT_FADE_TIME, v39, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_1BCAA3C(Instance, v29);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMPLETE_MISSION_END"*/, 0LL);
    v43 = Method_System_Array_Empty_object___;
    v44 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v44 )
    {
      sub_1C1C718(Method_System_Array_Empty_object___, v40);
      v44 = v43[7];
    }
    v45 = *(_QWORD *)(v44 + 16);
    if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
      v45 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v45 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v45, v40);
    v46 = *(_QWORD *)(v43[7] + 16LL);
    if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
      v46 = sub_1C1C6BC(inited);
    v47 = System_String__Format_62415728(v41, **(System_Object_array ***)(v46 + 184), 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v50 = (CommonUI_o *)Instance;
    v51 = MasterMissionComponent___c_TypeInfo;
    if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v29);
      v51 = MasterMissionComponent___c_TypeInfo;
    }
    _9__147_1 = v51->static_fields->__9__147_1;
    if ( !_9__147_1 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51, v29);
        v51 = MasterMissionComponent___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v51->static_fields->__9;
      _9__147_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v48, v49);
      System_Action___ctor(_9__147_1, v53, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__147_1__, 0LL);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__147_1 = _9__147_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__147_1,
        (int64_t)_9__147_1,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    if ( !v50 )
      goto LABEL_40;
    CommonUI__OpenNotificationDialog(v50, 0LL, v47, _9__147_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4B18B99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionComponent_OnClickDailyTab__, method, v2);
    byte_4B18B99 = 1;
  }
  if ( this->fields.nowType )
  {
    v4 = Method_MasterMissionComponent_OnClickDailyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickDailyTab__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionComponent_OnClickDailyTab__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    this->fields.nowType = 0;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v6);
    MasterMissionComponent__SetMissionDisp(this, v7);
    MasterMissionComponent__StopStoneButtonEffect(this, v8);
  }
}


void __fastcall MasterMissionComponent__OnClickExtraTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4B18B9B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionComponent_OnClickExtraTab__, method, v2);
    byte_4B18B9B = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v4 = Method_MasterMissionComponent_OnClickExtraTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickExtraTab__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionComponent_OnClickExtraTab__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    this->fields.nowType = 2;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v6);
    MasterMissionComponent__SetMissionDisp(this, v7);
    MasterMissionComponent__StopStoneButtonEffect(this, v8);
  }
}


void __fastcall MasterMissionComponent__OnClickHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MasterMissionComponent_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B18BB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionComponent_OnClickHelp__, method, v2);
    byte_4B18BB2 = 1;
  }
  v3 = Method_MasterMissionComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  MasterMissionComponent__OpenHelp(v5, v6);
}


void __fastcall MasterMissionComponent__OnClickLimitedTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4B18B9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionComponent_OnClickLimitedTab__, method, v2);
    byte_4B18B9C = 1;
  }
  if ( this->fields.nowType != 3 )
  {
    v4 = Method_MasterMissionComponent_OnClickLimitedTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickLimitedTab__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionComponent_OnClickLimitedTab__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    this->fields.nowType = 3;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v6);
    MasterMissionComponent__SetMissionDisp(this, v7);
    MasterMissionComponent__StopStoneButtonEffect(this, v8);
  }
}


void __fastcall MasterMissionComponent__OnClickShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x19
  MasterMissionComponent___c_c *v21; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__175_0; // x20
  Il2CppObject *v24; // x21
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B18B97 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_MasterMissionComponent_OnClickShopBtn__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__OnClickShopBtn_b__175_0__, v9, v10);
    sub_1BCA7E0(&MasterMissionComponent___c_TypeInfo, v11, v12);
    byte_4B18B97 = 1;
  }
  v13 = Method_MasterMissionComponent_OnClickShopBtn__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickShopBtn__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionComponent_OnClickShopBtn__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  v20 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v16);
    v19 = AvalonSceneManager_TypeInfo;
  }
  v21 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v16);
    v21 = MasterMissionComponent___c_TypeInfo;
  }
  _9__175_0 = v21->static_fields->__9__175_0;
  if ( !_9__175_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, v16);
      v21 = MasterMissionComponent___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__175_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
    System_Action___ctor(_9__175_0, v24, Method_MasterMissionComponent___c__OnClickShopBtn_b__175_0__, 0LL);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__175_0 = _9__175_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__175_0,
      (int64_t)_9__175_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v20 )
    sub_1BCAA3C(v21, v16);
  CommonUI__maskFadeout(v20, 1, DEFAULT_FADE_TIME, _9__175_0, 0LL);
}


void __fastcall MasterMissionComponent__OnClickSvt(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.isVoicePlaying )
  {
    svtVoiceCtr = this->fields.svtVoiceCtr;
    if ( !svtVoiceCtr )
      sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4B18B9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionComponent_OnClickWeeklyTab__, method, v2);
    byte_4B18B9A = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v4 = Method_MasterMissionComponent_OnClickWeeklyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickWeeklyTab__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MasterMissionComponent_OnClickWeeklyTab__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    this->fields.nowType = 1;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v6);
    MasterMissionComponent__SetMissionDisp(this, v7);
    MasterMissionComponent__StopStoneButtonEffect(this, v8);
    if ( MasterMissionComponent__ShouldPlayedStoneButtonEffect(this, v9) )
      MasterMissionComponent__PlayStoneButtonEffect(this, v10);
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
  __int64 v2; // x2
  UnityEngine_Component_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B18B76 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18B76 = 1;
  }
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_1BCAA3C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.titleInfo, 0LL, v9, v10, v11, v12, v13, v14);
  }
  MasterMissionComponent__StopStoneButtonEffect(this, v6);
}


void __fastcall MasterMissionComponent__Open(
        MasterMissionComponent_o *this,
        MasterMissionComponent_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        int32_t typeIndex,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  CommonUI_o *Instance; // x0
  const MethodInfo *v42; // x1
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
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_int__o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Collections_Generic_List_object__o *v68; // x21
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x2
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v78; // w20
  bool v79; // w1
  __int64 v80; // x1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  __int64 v83; // x1
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  TitleInfoControl_o *v92; // x21
  TitleInfoControl_o *v93; // x20
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  System_Action_o *v97; // x21
  MasterMissionComponent_c *v98; // x0
  __int64 v99; // d0
  struct MstMissionEntity_array *Entitys_object__object; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  const MethodInfo *v107; // x1
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  System_Action_int__o *v114; // x21
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  System_Action_o *v118; // x20
  __int64 v119; // x1

  if ( (byte_4B18B77 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, callback, redisp_act);
    sub_1BCA7E0(&System_Action_TypeInfo, v9, v10);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_MasterMissionComponent_LoadNotificationEnd__, v25, v26);
    sub_1BCA7E0(&Method_MasterMissionComponent_OnClickBack__, v27, v28);
    sub_1BCA7E0(&Method_MasterMissionComponent__Open_b__137_0__, v29, v30);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    byte_4B18B77 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v43, v44, v45, v46, v47, v48);
  this->fields.reDispAction = redisp_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.reDispAction,
    (int64_t)redisp_act,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_42;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0LL);
  v58 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v55,
                                                    v56,
                                                    v57);
  System_Collections_Generic_List_int____ctor(
    v58,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v58;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentEventIdList,
    (int64_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v68 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MstMissionEntity__TypeInfo,
                                                       v65,
                                                       v66,
                                                       v67);
  System_Collections_Generic_List_object____ctor(
    v68,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v68;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentMstMissionEntList,
    (int64_t)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  if ( typeIndex == -1 )
  {
    if ( !byte_4B18BE7 )
    {
      Instance = (CommonUI_o *)sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v42, v75);
      byte_4B18BE7 = 1;
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
    v78 = 0;
    while ( 1 )
    {
      if ( v78 >= max_length )
        sub_1BCAA44(Instance, v42);
      Instance = (CommonUI_o *)missionTabList->m_Items[v78];
      if ( !Instance )
        break;
      MasterMissionTab__SetTabSize((MasterMissionTab_o *)Instance, 1, 0LL);
      max_length = missionTabList->max_length;
      if ( (int)++v78 >= max_length )
        goto LABEL_15;
    }
LABEL_42:
    sub_1BCAA3C(Instance, v42);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v42) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_42;
    v79 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_42;
    v79 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v79, 0LL);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
    Instance = (CommonUI_o *)UnityEngine_Object__Instantiate_object_(
                               titlePrefab,
                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.titleInfo,
      (int64_t)Component_object,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
    v92 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v92 )
      goto LABEL_42;
    TitleInfoControl__SetParent(v92, (UnityEngine_Transform_o *)Instance, 0LL);
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
    TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)Instance, 1, 83, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_42;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v93 = this->fields.titleInfo;
    v97 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v94, v95, v96);
    System_Action___ctor(v97, (Il2CppObject *)this, (intptr_t)Method_MasterMissionComponent_OnClickBack__, 0LL);
    if ( !v93 )
      goto LABEL_42;
    TitleInfoControl__SetBackBtnAct(v93, v97, 0LL);
  }
  v98 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v83);
    v98 = MasterMissionComponent_TypeInfo;
  }
  v99 = *(_QWORD *)v98->static_fields;
  this->fields.currentDispId = 0;
  *(_QWORD *)&this->fields.currentEventSvtId = v99;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Entitys_object__object = (struct MstMissionEntity_array *)DataManager__getEntitys_object__object_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_2F12EF0 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_object__object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mstMissionList,
    (int64_t)Entitys_object__object,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  MasterMissionComponent__SetupShopBtn(this, v107);
  MasterMissionComponent__SetupCompleteBtn(this, v108);
  MasterMissionComponent__RefreshInfo(this, v109);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v114 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v111, v112, v113);
  System_Action_int____ctor(v114, (Il2CppObject *)this, Method_MasterMissionComponent__Open_b__137_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v114, 1, 0LL);
  v118 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v115, v116, v117);
  System_Action___ctor(v118, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v119);
  AtlasManager__LoadNotification(v118, 0LL);
}


void __fastcall MasterMissionComponent__OpenCompleteMission(
        MasterMissionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  Il2CppObject *Instance; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  CompleteMissionComponent_ClickDelegate_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  MasterMissionComponent___c_c *mInstance; // x0
  System_Action_o *_9__146_0; // x21
  Il2CppObject *v28; // x22
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x2
  TerminalSceneComponent_c *v37; // x0

  if ( (byte_4B18B7E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&CompleteMissionComponent_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_MasterMissionComponent_ExitCompleteMission__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&SoundManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__OpenCompleteMission_b__146_0__, v14, v15);
    sub_1BCA7E0(&MasterMissionComponent___c_TypeInfo, v16, v17);
    byte_4B18B7E = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, callback);
  SoundManager__stopSe(0.0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (CompleteMissionComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                      CompleteMissionComponent_ClickDelegate_TypeInfo,
                                                      v19,
                                                      v20,
                                                      v21);
  CompleteMissionComponent_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ExitCompleteMission__,
    0LL);
  mInstance = MasterMissionComponent___c_TypeInfo;
  if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v23);
    mInstance = MasterMissionComponent___c_TypeInfo;
  }
  _9__146_0 = mInstance->static_fields->__9__146_0;
  if ( !_9__146_0 )
  {
    if ( !mInstance->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mInstance, v23);
      mInstance = MasterMissionComponent___c_TypeInfo;
    }
    v28 = (Il2CppObject *)mInstance->static_fields->__9;
    _9__146_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
    System_Action___ctor(_9__146_0, v28, Method_MasterMissionComponent___c__OpenCompleteMission_b__146_0__, 0LL);
    static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    static_fields->__9__146_0 = _9__146_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__146_0,
      (int64_t)_9__146_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v22, _9__146_0, 0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v23);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v23, v36);
    byte_4B10F83 = 1;
  }
  v37 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v23);
    v37 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v37->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_1BCAA3C(mInstance, v23);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0LL);
}


void __fastcall MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18BB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B18BB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__OpenTutorialImageDialog_30792208((CommonUI_o *)Instance, 42, 207, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall MasterMissionComponent__OpenPresentBox(MasterMissionComponent_o *this, const MethodInfo *method)
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
  Il2CppObject *Instance; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  UserPresentBoxWindow_ClickDelegate_o *v18; // x21
  ScrTerminalListTop_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  QuestRewardTokenAction_c *klass; // x8
  CommonUI_o *v23; // x19
  MasterMissionComponent_c *v24; // x8
  __int64 v25; // x2
  QuestRewardTokenAction_c *v26; // x8

  if ( (byte_4B18BA4 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentBoxWindow_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MasterMissionComponent__OpenPresentBox_b__190_0__, v4, v5);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    byte_4B18BA4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (UserPresentBoxWindow_ClickDelegate_o *)sub_1BCAA2C(UserPresentBoxWindow_ClickDelegate_TypeInfo, v15, v16, v17);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__190_0__,
    0LL);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v18, 0LL, 0LL);
  v19 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v19 )
    goto LABEL_28;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v19, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v20, v21);
      byte_4B10F83 = 1;
    }
    v19 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
      v19 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v19->fields.boardGameTokenAction->klass;
    if ( !klass )
      goto LABEL_28;
    v19 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
    if ( !v19 )
      goto LABEL_28;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth(v19, 0LL) )
    {
      v19 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v23 = (CommonUI_o *)v19;
      v24 = MasterMissionComponent_TypeInfo;
      if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v20);
        v24 = MasterMissionComponent_TypeInfo;
      }
      if ( v23 )
      {
        CommonUI__SetUsrPresentListPos(v23, v24->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v20, v25);
          byte_4B10F83 = 1;
        }
        v19 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v20);
          v19 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v26 = v19->fields.boardGameTokenAction->klass;
        if ( v26 )
        {
          v19 = *(ScrTerminalListTop_o **)&v26->_2.static_fields_size;
          if ( v19 )
          {
            ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v19, 0, 0LL);
            return;
          }
        }
      }
LABEL_28:
      sub_1BCAA3C(v19, v20);
    }
  }
}


void __fastcall MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B18BB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18BB0 = 1;
  }
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v8 = (Il2CppObject *)this->fields.btnEffectBasePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__Instantiate_object_(
           v8,
           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = (struct UnityEngine_GameObject_o *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.btnEffectPrefab, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0LL, 0LL) )
      GameObjectExtensions__SafeSetParent_34336992(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0LL);
  }
}


void __fastcall MasterMissionComponent__PresentBoxOver(MasterMissionComponent_o *this, const MethodInfo *method)
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
  PresentBoxOverDialog_o *presentBoxOverDialog; // x20
  System_String_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  PresentBoxOverDialog_ClickDelegate_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B18BA3 & 1) == 0 )
  {
    sub_1BCA7E0(&PresentBoxOverDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_MasterMissionComponent__PresentBoxOver_b__189_0__, v6, v7);
    sub_1BCA7E0(&StringLiteral_8655/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B18BA3 = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8655/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0LL);
  v17 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1BCAA2C(PresentBoxOverDialog_ClickDelegate_TypeInfo, v14, v15, v16);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__189_0__,
    0LL);
  if ( !presentBoxOverDialog )
    sub_1BCAA3C(v18, v19);
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1/*""*/, v13, v17, 26, 0LL);
}


void __fastcall MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x22
  __int64 v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x2
  __int64 v36; // x3
  struct System_Int32_array *receiveMissionIds; // x8
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v40; // x19
  System_Action_o *v41; // x21
  const MethodInfo *v42; // x2
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v44; // x19
  System_Action_o *v45; // x22

  if ( (byte_4B18BA2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__0__, v7, v8);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__1__, v9, v10);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__2__, v11, v12);
    sub_1BCA7E0(&MasterMissionComponent___c__DisplayClass188_0_TypeInfo, v13, v14);
    byte_4B18BA2 = 1;
  }
  v15 = sub_1BCAA2C(MasterMissionComponent___c__DisplayClass188_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_20;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v15,
    Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__0__,
    0LL);
  *(_QWORD *)(v15 + 24) = v27;
  v28 = v15 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)v27, v29, v30, v31, v32, v33, v34);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
          sub_1BCAA44(Instance, v17);
        v40 = missionListViewManager->m_Items[nowType];
        v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v35, v36);
        System_Action___ctor(
          v41,
          (Il2CppObject *)v15,
          Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__1__,
          0LL);
        if ( v40 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v40, v41, v42);
          return;
        }
      }
LABEL_20:
      sub_1BCAA3C(Instance, v17);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v44 = this->fields.receiveMissionIds;
    v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v35, v36);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v15,
      Method_MasterMissionComponent___c__DisplayClass188_0__ReceiveResultList_b__2__,
      0LL);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v44, v45, 0LL);
  }
  else
  {
    if ( !*(_QWORD *)v28 )
      goto LABEL_20;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v28 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v28 + 64LL),
      *(_QWORD *)(*(_QWORD *)v28 + 40LL));
  }
}


void __fastcall MasterMissionComponent__RefreshInfo(MasterMissionComponent_o *this, const MethodInfo *method)
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
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  UILabel_o *stoneInfoLabel; // x21
  int32_t stone; // w20
  __int64 v17; // x1
  int32_t UserStoneFragmentNum; // w0
  UILabel_o *stoneFragmentsInfoLabel; // x21
  int32_t v20; // w20
  const MethodInfo *v21; // x2

  if ( (byte_4B18BAD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B18BAD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_13;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_13;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0LL),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v20 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0LL),
        !stoneFragmentsInfoLabel) )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v14);
  }
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  MasterMissionComponent__UpdateStoneExchangeCount(this, v20, v21);
}


void __fastcall MasterMissionComponent__ReleaseSvtVoiceData(MasterMissionComponent_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppClass *klass; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v20; // x8
  int32_t size; // w2
  int v22; // w9
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18BA8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&SoundManager_TypeInfo, v12, v13);
    byte_4B18BA8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)currentVoiceDataList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v15 )
        break;
      if ( !v23.fields._current )
        sub_1BCAA3C(v15, v16);
      klass = v23.fields._current[1].klass;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v16);
      SoundManager__releaseAudioAssetStorage((System_String_o *)klass, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v20 = this->fields.currentVoiceDataList;
    if ( !v20 )
      sub_1BCAA3C(v18, v19);
    size = v20->fields._size;
    v22 = v20->fields._version + 1;
    v20->fields._size = 0;
    v20->fields._version = v22;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v20->fields._items, 0, size, 0LL);
  }
}


void __fastcall MasterMissionComponent__RequestMissionReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1

  if ( (byte_4B18B9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterMissionComponent_missionRewardCallback__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B18B9F = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v14);
  EventMissionClearRewardRequest__beginRequest_41914400(
    (EventMissionClearRewardRequest_o *)Request_object,
    this->fields.sendMissionIds,
    0LL);
}


void __fastcall MasterMissionComponent__ServantOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t overflowType; // w22
  UserPresentBoxErrorDialog_o *servantOverDialog; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  UserPresentBoxErrorDialog_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_T__o *v18; // x21
  int32_t v19; // w1

  if ( (byte_4B18BA5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SceneList_Type__TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_MasterMissionComponent_ServantOverDialogClose__, v6, v7);
    sub_1BCA7E0(&StringLiteral_8665/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, v8, v9);
    byte_4B18BA5 = 1;
  }
  overflowType = this->fields.overflowType;
  servantOverDialog = this->fields.servantOverDialog;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8665/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0LL);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v12, 0LL),
        v14 = this->fields.servantOverDialog,
        v18 = (System_Action_T__o *)sub_1BCAA2C(System_Action_SceneList_Type__TypeInfo, v15, v16, v17),
        System_Action_Int32Enum____ctor(
          v18,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          0LL),
        !v14)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v14, (System_Action_SceneList_Type__o *)v18, 0LL),
        (v12 = (System_String_o *)this->fields.servantOverDialog) == 0LL) )
  {
    sub_1BCAA3C(v12, v13);
  }
  if ( overflowType == 4 )
    v19 = 2;
  else
    v19 = overflowType == 2;
  UserPresentBoxErrorDialog__setJumpType((UserPresentBoxErrorDialog_o *)v12, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__ServantOverDialogClose(
        MasterMissionComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  System_Action_T__o *v13; // x22
  CommonUI_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_4B18BA6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_MasterMissionComponent_ServantOverDialogClose__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v10, v11);
    byte_4B18BA6 = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v13 = (System_Action_T__o *)sub_1BCAA2C(System_Action_SceneList_Type__TypeInfo, *(_QWORD *)&type, method, v3);
  System_Action_Int32Enum____ctor(
    v13,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ServantOverDialogClose__,
    0LL);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v13, 0LL);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(Instance, v15);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
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
    sub_1BCAA44(this, method);
  v5 = missionListViewManager->m_Items[nowType];
  if ( !v5 )
LABEL_5:
    sub_1BCAA3C(this, method);
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

  if ( (byte_4B18BA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable, method);
    byte_4B18BA9 = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (v6 = isEnable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(dailyTabObj, isEnable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL);
}


void __fastcall MasterMissionComponent__SetDailyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_EventMissionEntity__o *VaildDailyMissionData; // x0
  const MethodInfo *v7; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v9; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v10; // x21
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x5
  struct MasterMissionListViewManager_array *v13; // x8
  MissionListViewManager_o *v14; // x19

  if ( (byte_4B18B8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, method, v2);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v4, v5);
    byte_4B18B8D = 1;
  }
  EventRewardSaveData__LoadDailyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( !missionListViewManager->max_length )
    goto LABEL_14;
  v9 = missionListViewManager->m_Items[0];
  VaildDailyMissionData = MasterMissionComponent__getVaildDailyMissionData(this, v7);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v10 = VaildDailyMissionData;
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v9 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v9, v10, v11, 0, this->fields.reDispAction, v12);
  v13 = this->fields.missionListViewManager;
  if ( !v13 )
    goto LABEL_13;
  if ( !v13->max_length )
LABEL_14:
    sub_1BCAA44(VaildDailyMissionData, v7);
  v14 = (MissionListViewManager_o *)v13->m_Items[0];
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v7);
  if ( !v14 )
LABEL_13:
    sub_1BCAA3C(VaildDailyMissionData, v7);
  MissionListViewManager__SetMode_44915468(
    v14,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetExtraMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_EventMissionEntity__o *ValidExtraMissionData; // x0
  const MethodInfo *v7; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v9; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v10; // x21
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x5
  struct MasterMissionListViewManager_array *v13; // x8
  MissionListViewManager_o *v14; // x19

  if ( (byte_4B18B8F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, method, v2);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v4, v5);
    byte_4B18B8F = 1;
  }
  EventRewardSaveData__LoadExtraMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( missionListViewManager->max_length <= 2 )
    goto LABEL_14;
  v9 = missionListViewManager->m_Items[2];
  ValidExtraMissionData = MasterMissionComponent__getValidExtraMissionData(this, v7);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v10 = ValidExtraMissionData;
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v9 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v9, v10, v11, 2, this->fields.reDispAction, v12);
  v13 = this->fields.missionListViewManager;
  if ( !v13 )
    goto LABEL_13;
  if ( v13->max_length <= 2 )
LABEL_14:
    sub_1BCAA44(ValidExtraMissionData, v7);
  v14 = (MissionListViewManager_o *)v13->m_Items[2];
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v7);
  if ( !v14 )
LABEL_13:
    sub_1BCAA3C(ValidExtraMissionData, v7);
  MissionListViewManager__SetMode_44915468(
    v14,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetLimitedMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_EventMissionEntity__o *VaildLimitedMissionData; // x0
  const MethodInfo *v7; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v9; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v10; // x21
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x5
  struct MasterMissionListViewManager_array *v13; // x8
  MissionListViewManager_o *v14; // x19

  if ( (byte_4B18B90 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, method, v2);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v4, v5);
    byte_4B18B90 = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( missionListViewManager->max_length <= 3 )
    goto LABEL_14;
  v9 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = MasterMissionComponent__getVaildLimitedMissionData(this, v7);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v10 = VaildLimitedMissionData;
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       this->fields.currentEventIdList,
                                                                                       (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v9 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v9, v10, v11, 3, this->fields.reDispAction, v12);
  v13 = this->fields.missionListViewManager;
  if ( !v13 )
    goto LABEL_13;
  if ( v13->max_length <= 3 )
LABEL_14:
    sub_1BCAA44(VaildLimitedMissionData, v7);
  v14 = (MissionListViewManager_o *)v13->m_Items[3];
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v7);
  if ( !v14 )
LABEL_13:
    sub_1BCAA3C(VaildLimitedMissionData, v7);
  MissionListViewManager__SetMode_44915468(
    v14,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetLimitedMissionRestTime(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *limitedMissionAnnouncementComponent; // x20
  __int64 v5; // x1
  LimitedMissionAnnouncementComponent_o *v6; // x0

  if ( (byte_4B18BB5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18BB5 = 1;
  }
  limitedMissionAnnouncementComponent = (UnityEngine_Object_o *)this->fields.limitedMissionAnnouncementComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(limitedMissionAnnouncementComponent, 0LL, 0LL) )
  {
    v6 = this->fields.limitedMissionAnnouncementComponent;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    LimitedMissionAnnouncementComponent__mfInitUserData(v6, 0LL);
  }
}


void __fastcall MasterMissionComponent__SetMissionClearNum(MasterMissionComponent_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  MstMissionEntity_array *EnableMissions; // x22
  int max_length; // w8
  EventMissionMaster_o *v16; // x24
  unsigned int v17; // w26
  int32_t v18; // w20
  int32_t v19; // w21
  int32_t v20; // w23
  Il2CppClass **v21; // x8
  Il2CppClass *v22; // x25
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3

  if ( (byte_4B18B8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B18B8B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_34;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v16 = (EventMissionMaster_o *)Instance;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1BCAA44(Instance, v13);
      v21 = &EnableMissions->obj.klass + (int)v17;
      v22 = v21[4];
      if ( !v22 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v21[4], 0LL);
      switch ( (_DWORD)Instance )
      {
        case 5:
          if ( !v16 )
            goto LABEL_34;
          ClearMasterMissionList = (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                          v16,
                                                                                          HIDWORD(v22->_1.name),
                                                                                          5,
                                                                                          0LL);
          Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_object_(
                                        ClearMasterMissionList,
                                        (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          3,
                                          v25);
            v18 += (int)Instance;
          }
          break;
        case 4:
          if ( !v16 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getExtraMissionList(v16, HIDWORD(v22->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          2,
                                          v26);
            v19 += (int)Instance;
          }
          break;
        case 2:
          if ( !v16 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getWeeklyMasterMissionList(v16, HIDWORD(v22->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          1,
                                          v23);
            v20 += (int)Instance;
          }
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_1BCAA3C(Instance, v13);
  }
  v20 = 0;
  v19 = 0;
  v18 = 0;
LABEL_30:
  Instance = (DataManager_o *)this->fields.weeklyClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v20, 0LL);
  Instance = (DataManager_o *)this->fields.extraClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v19, 0LL);
  Instance = (DataManager_o *)this->fields.limitedClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v18, 0LL);
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
        sub_1BCAA44(this, method);
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
        sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_EventMissionEntity__o *VaildWeeklyMissionData; // x0
  const MethodInfo *v7; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v9; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v10; // x21
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x5
  struct MasterMissionListViewManager_array *v13; // x8
  MissionListViewManager_o *v14; // x19

  if ( (byte_4B18B8E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, method, v2);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v4, v5);
    byte_4B18B8E = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( missionListViewManager->max_length <= 1 )
    goto LABEL_14;
  v9 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = MasterMissionComponent__getVaildWeeklyMissionData(this, v7);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v10 = VaildWeeklyMissionData;
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                      this->fields.currentEventIdList,
                                                                                      (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v9 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v9, v10, v11, 1, this->fields.reDispAction, v12);
  v13 = this->fields.missionListViewManager;
  if ( !v13 )
    goto LABEL_13;
  if ( v13->max_length <= 1 )
LABEL_14:
    sub_1BCAA44(VaildWeeklyMissionData, v7);
  v14 = (MissionListViewManager_o *)v13->m_Items[1];
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v7);
  if ( !v14 )
LABEL_13:
    sub_1BCAA3C(VaildWeeklyMissionData, v7);
  MissionListViewManager__SetMode_44915468(
    v14,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetupCompleteBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentCompleteMissionList; // x21
  int32_t size; // w2
  int v32; // w9
  System_Collections_Generic_List_object__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  DataManager_o *Instance; // x0
  __int64 v41; // x1
  Il2CppObject *MasterData_object; // x22
  MstMissionEntity_array *EnableMissions; // x24
  int max_length; // w8
  UserEventMissionMaster_o *v45; // x25
  unsigned int v46; // w28
  int32_t v47; // w20
  MstMissionEntity_o *v48; // x23
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  DataManager_o *v51; // x27
  int32_t CompleteMissionClearCount; // w26
  int m_CancellationTokenSource; // w25
  __int64 v54; // x8
  int v55; // w22
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  int64_t v59; // x24
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v75; // x8
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  Il2CppObject *cNoticeNumberPrefab; // x22
  Il2CppObject *v79; // x22
  Il2CppObject *Component_object; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  UIWidget_o *v87; // x22
  struct NoticeNumberComponent_o *v88; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v90; // x1

  if ( (byte_4B18B7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v17, v18);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v19, v20);
    sub_1BCA7E0(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B18B7A = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = &this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    size = currentCompleteMissionList->fields._size;
    v32 = currentCompleteMissionList->fields._version + 1;
    currentCompleteMissionList->fields._size = 0;
    currentCompleteMissionList->fields._version = v32;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentCompleteMissionList->fields._items, 0, size, 0LL);
  }
  else
  {
    v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v33,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v33;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.currentCompleteMissionList,
      (int64_t)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_48;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_48;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v47 = 0;
  }
  else
  {
    v45 = (UserEventMissionMaster_o *)Instance;
    v46 = 0;
    v47 = 0;
    while ( 1 )
    {
      if ( v46 >= max_length )
        goto LABEL_49;
      v48 = EnableMissions->m_Items[v46];
      if ( !v48 )
        goto LABEL_48;
      if ( !MasterData_object )
        goto LABEL_48;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    (EventMissionMaster_o *)MasterData_object,
                                    v48->fields.id,
                                    0LL);
      if ( !Instance )
        goto LABEL_48;
      v51 = Instance;
      if ( Instance->fields.m_CancellationTokenSource )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)Instance,
                                      (EventMissionEntity_array *)Instance,
                                      v49,
                                      v50);
        v47 += CompleteMissionClearCount;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v48, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v46 >= max_length )
        goto LABEL_33;
    }
    if ( !v45 )
      goto LABEL_48;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v45, v48->fields.id, 0LL);
    m_CancellationTokenSource = (int)v51->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
LABEL_49:
      sub_1BCAA44(Instance, v41);
    v54 = *(_QWORD *)&v51->fields._DispLog;
    if ( !v54 )
      goto LABEL_48;
    v55 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_48;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v54 + 28), 0LL);
    Instance = (DataManager_o *)this->fields.completeMissionIcon;
    if ( !Instance )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v59 = sub_1BCAA2C(MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v56, v57, v58);
    System_Object___ctor((Il2CppObject *)v59, 0LL);
    *(_QWORD *)(v59 + 16) = v48;
    sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)v48, v60, v61, v62, v63, v64, v65);
    *(_DWORD *)(v59 + 24) = m_CancellationTokenSource;
    *(_DWORD *)(v59 + 28) = CompleteMissionClearCount;
    *(_DWORD *)(v59 + 32) = v55;
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_48;
    v72 = *(_QWORD *)&Instance->fields.m_CachedPtr;
    v73 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v72 )
      goto LABEL_48;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v72 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v59,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = v72 + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v75 + 32) = v59;
      sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 32), v59, v66, v67, v68, v69, v70, v71);
    }
  }
LABEL_33:
  mCompleteMissionNoticeNumber = (UnityEngine_Object_o *)this->fields.mCompleteMissionNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  p_mCompleteMissionNoticeNumber = &this->fields.mCompleteMissionNoticeNumber;
  if ( UnityEngine_Object__op_Equality(mCompleteMissionNoticeNumber, 0LL, 0LL) )
  {
    cNoticeNumberPrefab = (Il2CppObject *)this->fields.cNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    v79 = UnityEngine_Object__Instantiate_object_(
            cNoticeNumberPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34336992(
      (UnityEngine_GameObject_o *)v79,
      this->fields.completeMissionNoticeRoot,
      0LL);
    if ( v79 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v79,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.mCompleteMissionNoticeNumber,
        (int64_t)Component_object,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
        v87 = (UIWidget_o *)Instance;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v41);
        if ( v87 )
        {
          UIWidget__set_depth(v87, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
          UIWidget__set_width(v87, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
          UIWidget__set_height(v87, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
          v88 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v88->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v88->fields.numberLabel,
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
    sub_1BCAA3C(Instance, v41);
  }
LABEL_46:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_48;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v47, 0LL);
  MasterMissionComponent__InitCompleteMissionLb(this, v90);
}


void __fastcall MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  UISprite_o *shopBtnSp; // x20

  if ( (byte_4B18B79 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_17683/*"btn_event_3"*/, v8, v9);
    byte_4B18B79 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0LL);
  shopBtnSp = this->fields.shopBtnSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_17683/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
}


bool __fastcall MasterMissionComponent__ShouldPlayedStoneButtonEffect(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  int32_t UserStoneFragmentNum; // w0
  const MethodInfo *v9; // x2
  int32_t ExchangeStoneCount; // w19

  if ( (byte_4B18BAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B18BAF = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, UserStoneFragmentNum, v9);
  return ExchangeStoneCount >= StoneShopMaster__GetPayMultiTimePrice(0LL);
}


void __fastcall MasterMissionComponent__StopStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *btnEffectPrefab; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o **p_btnEffectPrefab; // x19
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B18BB1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18BB1 = 1;
  }
  btnEffectPrefab = (UnityEngine_Object_o *)this->fields.btnEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(btnEffectPrefab, 0LL, 0LL) )
  {
    p_btnEffectPrefab = &this->fields.btnEffectPrefab;
    if ( !*p_btnEffectPrefab )
      sub_1BCAA3C(0LL, v5);
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0LL);
    v8 = *p_btnEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v8, 0LL);
    *p_btnEffectPrefab = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_btnEffectPrefab, 0LL, v9, v10, v11, v12, v13, v14);
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
    sub_1BCAA44(this, method);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B18BAC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v3, v4);
    byte_4B18BAC = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
  if ( v7 )
  {
    if ( !mInstance )
      sub_1BCAA3C(v7, v8);
    TerminalSceneComponent__UpdateTitleEventInfo((TerminalSceneComponent_o *)mInstance, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__UpdateStoneExchangeCount(
        MasterMissionComponent_o *this,
        int32_t fragmentCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v18; // x20
  System_String_o *stoneConvertLimit; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x2
  int32_t ExchangeStoneCount; // w0
  __int64 v29; // x1
  int32_t v30; // w23
  MasterMissionComponent_c *v31; // x0
  UILabel_o *stoneConvertCount; // x22
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v34; // w1
  __int64 v35; // x1
  UnityEngine_Object_o *btnEffectBasePrefab; // x22
  const MethodInfo *v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  AssetLoader_LoadEndDataHandler_o *v40; // x19
  __int64 v41; // x1
  int32_t v42; // w20
  const MethodInfo *v43; // x1
  int32_t v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18BAE & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&fragmentCount, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__DisplayClass204_0__UpdateStoneExchangeCount_b__0__, v12, v13);
    sub_1BCA7E0(&MasterMissionComponent___c__DisplayClass204_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_5948/*"Effect/Common"*/, v16, v17);
    byte_4B18BAE = 1;
  }
  v44 = 0;
  v18 = sub_1BCAA2C(MasterMissionComponent___c__DisplayClass204_0_TypeInfo, *(_QWORD *)&fragmentCount, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_27;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v27);
  *(_DWORD *)(v18 + 24) = ExchangeStoneCount;
  v30 = ExchangeStoneCount;
  v31 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v29);
    v31 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v31->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v30 > STONE_EXCHENGE_DISP_LIMIT )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31, v29);
      STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
    }
    v44 = STONE_EXCHENGE_DISP_LIMIT;
    stoneConvertLimit = System_Int32__ToString((int32_t)&v44, 0LL);
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
          v34 = 1;
          goto LABEL_17;
        }
      }
    }
LABEL_27:
    sub_1BCAA3C(stoneConvertLimit, v20);
  }
  stoneConvertLimit = System_Int32__ToString((int)v18 + 24, 0LL);
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
  v34 = 0;
LABEL_17:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneConvertLimit, v34, 0LL);
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v40 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v37, v38, v39);
    AssetLoader_LoadEndDataHandler___ctor(
      v40,
      (Il2CppObject *)v18,
      Method_MasterMissionComponent___c__DisplayClass204_0__UpdateStoneExchangeCount_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v41);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5948/*"Effect/Common"*/, v40, 1, 0LL);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v37);
    if ( this->fields.nowType == 1 )
    {
      v42 = *(_DWORD *)(v18 + 24);
      if ( v42 >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v43);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B18BB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B18BB8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  MasterMissionComponent__OpenCompleteMission(this, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___OpenPresentBox_b__190_0(
        MasterMissionComponent_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  ConnectMark_c *klass; // x8
  __int64 v16; // x2
  ConnectMark_c *v17; // x8
  __int64 *v18; // x8

  if ( (byte_4B18BBA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, hasGetServant, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_11768/*"SERVANT_OVER"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v10, v11);
    byte_4B18BBA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_24;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v14);
    byte_4B10F83 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
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
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v16);
    byte_4B10F83 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v17 = Instance->fields.connectMark->klass;
  if ( !v17 || (Instance = *(CommonUI_o **)&v17->_2.static_fields_size) == 0LL )
LABEL_29:
    sub_1BCAA3C(Instance, v13);
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0LL);
LABEL_24:
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_29;
  if ( this->fields.overflowType )
    v18 = &StringLiteral_11768/*"SERVANT_OVER"*/;
  else
    v18 = &StringLiteral_3559/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v18, 0LL);
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

  if ( (byte_4B18BB7 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
    byte_4B18BB7 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_1BCAA3C(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___PresentBoxOver_b__189_0(
        MasterMissionComponent_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x20

  if ( (byte_4B18BB9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isPresentBoxOpen, method);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__DisplayClass189_0__PresentBoxOver_b__1__, v6, v7);
    sub_1BCA7E0(&MasterMissionComponent___c__DisplayClass189_0_TypeInfo, v8, v9);
    byte_4B18BB9 = 1;
  }
  v10 = sub_1BCAA2C(MasterMissionComponent___c__DisplayClass189_0_TypeInfo, isPresentBoxOpen, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_BYTE *)(v10 + 16) = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v10,
          Method_MasterMissionComponent___c__DisplayClass189_0__PresentBoxOver_b__1__,
          0LL),
        !presentBoxOverDialog) )
  {
    sub_1BCAA3C(v11, v12);
  }
  PresentBoxOverDialog__Close_31185648(presentBoxOverDialog, v23, 0LL);
}


void __fastcall MasterMissionComponent___setRecieveModifyItem_b__193_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B18BBB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5549/*"END_DISP"*/, method, v2);
    byte_4B18BBB = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v4);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v5);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v6);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5549/*"END_DISP"*/, 0LL);
}


void __fastcall MasterMissionComponent__checkIsOpen(MasterMissionComponent_o *this, const MethodInfo *method)
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
  __int64 v18; // x1
  __int64 v19; // x2
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  MstMissionDisplayInfoMaster_o *v22; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct MstMissionMaster_o *mstMissionMst; // x8
  _BOOL4 v31; // w22
  _BOOL4 v32; // w23
  void *v33; // x1
  void *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  __int64 *v42; // x24
  __int64 *v43; // x8
  struct System_String_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_String_o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4B18B82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_8903/*"MST_REMISSON_MSG"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_8901/*"MST_REDISP_MSG"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_8904/*"MST_REMISSON_TITLE_TXT"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_8902/*"MST_REDISP_TITLE_TXT"*/, v18, v19);
    byte_4B18B82 = 1;
  }
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !Instance )
    goto LABEL_28;
  v22 = (MstMissionDisplayInfoMaster_o *)Instance;
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)v22->fields.list;
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
      v31 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0LL);
      goto LABEL_11;
    }
LABEL_28:
    sub_1BCAA3C(Instance, v21);
  }
  LOBYTE(v31) = 0;
LABEL_11:
  if ( list
    && System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1
    && !MstMissionDisplayInfoMaster__IsOpenNow(v22, 0LL) )
  {
    v32 = !MstMissionDisplayInfoMaster__IsBefOpenTime(v22, 0LL);
  }
  else
  {
    LOBYTE(v32) = 0;
  }
  v33 = StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.titleTxt, (int64_t)v33, v24, v25, v26, v27, v28, v29);
  v34 = StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.msgTxt, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  if ( v31 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
    v42 = &StringLiteral_8903/*"MST_REMISSON_MSG"*/;
    v43 = &StringLiteral_8904/*"MST_REMISSON_TITLE_TXT"*/;
LABEL_23:
    v44 = LocalizationManager__Get((System_String_o *)*v43, 0LL);
    this->fields.titleTxt = v44;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.titleTxt, (int64_t)v44, v45, v46, v47, v48, v49, v50);
    v51 = LocalizationManager__Get((System_String_o *)*v42, 0LL);
    this->fields.msgTxt = v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.msgTxt, (int64_t)v51, v52, v53, v54, v55, v56, v57);
    goto LABEL_24;
  }
  if ( v32 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
    v42 = &StringLiteral_8901/*"MST_REDISP_MSG"*/;
    v43 = &StringLiteral_8902/*"MST_REDISP_TITLE_TXT"*/;
    goto LABEL_23;
  }
LABEL_24:
  this->fields.isNotNext = v31 || v32;
}


void __fastcall MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_1BCAA3C(0LL, method);
  StandFigureBack__DestroyFigure(standFigureBack, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildDailyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MasterMissionComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v44; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int64_t size; // x2
  int v47; // w9
  Il2CppObject *MasterData_object; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v55; // w26
  Il2CppClass **v56; // x8
  int64_t v57; // x23
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  __int64 v71; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v74; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v77; // x8
  __int64 v78; // x9
  int32_t *v79; // x10
  __int64 v80; // x0
  MstMissionDisplayInfoEntity_o *v81; // x0
  __int64 v82; // x1
  int64_t v83; // x24
  __int64 methodPtr_low; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v86; // x1
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  int DEFAULT_LIMITCNT; // w8
  MasterMissionComponent_c *v95; // x0
  int64_t v96; // x1
  int32_t v97; // w8
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Collections_Generic_IEnumerator_T__c *v104; // x8
  __int64 v105; // x9
  int32_t *v106; // x10
  __int64 v107; // x0
  int v108; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v110; // w21

  v8 = this;
  if ( (byte_4B18B84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v35, v36);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v37, v38);
    sub_1BCA7E0(&MstMissionDisplayInfoEntity_TypeInfo, v39, v40);
    this = (MasterMissionComponent_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    byte_4B18B84 = 1;
  }
  currentEventIdList = v8->fields.currentEventIdList;
  v8->fields.currentIdx = 0;
  v8->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v44 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v44;
  currentMstMissionEntList = v8->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = (unsigned int)currentMstMissionEntList->fields._size;
  v47 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v47;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v8->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.currentMissionDispInfoEnt, 0LL, size, v3, v4, v5, v6, v7);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v8->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v55 = 0;
    while ( 1 )
    {
      if ( v55 >= max_length )
        sub_1BCAA44(this, method);
      v56 = &mstMissionList->obj.klass + (int)v55;
      v57 = (int64_t)v56[4];
      if ( !v57 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v56[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__getDailyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             *(_DWORD *)(v57 + 20),
                                             0LL);
        if ( !this )
          break;
        method = (const MethodInfo *)this;
        if ( this->fields.m_CancellationTokenSource )
        {
          if ( !v52 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v52,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v8->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)*(unsigned int *)(v57 + 20);
          v64 = *(_QWORD *)&this->fields.m_CachedPtr;
          v65 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v64 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v64 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v64 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          this = (MasterMissionComponent_o *)v8->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v67 = *(_QWORD *)&this->fields.m_CachedPtr;
          v68 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v67 )
            break;
          v69 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v57,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            v70 = v67 + 8 * v69;
            LODWORD(this->fields.m_CancellationTokenSource) = v69 + 1;
            *(_QWORD *)(v70 + 32) = v57;
            sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 32), v57, v58, v59, v60, v61, v62, v63);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v55 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1BCAA3C(this, method);
  }
LABEL_29:
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)DataManager__getEntityList_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12E8C *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v71);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v74 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v74;
        p_offset += 4;
        if ( !v74 )
          goto LABEL_36;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_36:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v77 = Enumerator->klass;
    v78 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v79 = &v77->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v79 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_43;
      }
      v80 = (__int64)&v77->vtable[*v79].method;
    }
    else
    {
LABEL_43:
      v80 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v81 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(
                                             Enumerator,
                                             *(_QWORD *)(v80 + 8));
    v83 = (int64_t)v81;
    if ( !v81 )
      goto LABEL_80;
    methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v81->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MstMissionDisplayInfoEntity_c *)v81->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_1BCACFC(v81);
LABEL_80:
      sub_1BCAA3C(v81, v82);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v81, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      static_fields = (struct MasterMissionComponent_StaticFields *)(v83 + 20);
      if ( *(int *)(v83 + 20) <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v86);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        static_fields = isOpenNow->static_fields;
      }
      if ( !v8 )
        sub_1BCAA3C(isOpenNow, v86);
      v8->fields.currentEventSvtId = static_fields->DEFAULT_SVT_ID;
      DEFAULT_LIMITCNT = *(_DWORD *)(v83 + 32);
      if ( DEFAULT_LIMITCNT <= 0 )
      {
        v95 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v86);
          v95 = MasterMissionComponent_TypeInfo;
        }
        DEFAULT_LIMITCNT = v95->static_fields->DEFAULT_LIMITCNT;
      }
      v8->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
      v96 = *(_QWORD *)(v83 + 24);
      v8->fields.voiceNameList = (struct System_String_array *)v96;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.voiceNameList, v96, v87, v88, v89, v90, v91, v92);
      v97 = *(_DWORD *)(v83 + 16);
      v8->fields.currentMissionDispInfoEnt = (struct MstMissionDisplayInfoEntity_o *)v83;
      v8->fields.currentDispId = v97;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields.currentMissionDispInfoEnt,
        v83,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
  }
  v104 = Enumerator->klass;
  v105 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v106 = &v104->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
    {
      --v105;
      v106 += 4;
      if ( !v105 )
        goto LABEL_63;
    }
    v107 = (__int64)&v104->vtable[*v106].method;
  }
  else
  {
LABEL_63:
    v107 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v107)(
    Enumerator,
    *(_QWORD *)(v107 + 8));
  if ( v52 )
  {
    v108 = v52->fields._size;
    if ( v108 < 1 )
    {
      return 0LL;
    }
    else
    {
      v8->fields.totalMissionNum = v108;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v52,
                                           0,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      m_CachedPtr = this->fields.m_CachedPtr;
      if ( v52->fields._size >= 1 )
      {
        v110 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v52,
                                               v110,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v52,
                                                 v110,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v110 < v52->fields._size );
      }
      v8->fields.currentMissionId = m_CachedPtr;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v52;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildLimitedMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MasterMissionComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v44; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int64_t size; // x2
  int v47; // w9
  Il2CppObject *MasterData_object; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_List_object__o *v56; // x21
  struct MstMissionEntity_array *mstMissionList; // x26
  int max_length; // w8
  unsigned int v59; // w27
  Il2CppClass **v60; // x8
  int64_t v61; // x24
  int32_t v62; // w1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  __int64 v76; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v79; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v82; // x8
  __int64 v83; // x9
  int32_t *v84; // x10
  __int64 v85; // x0
  MstMissionDisplayInfoEntity_o *v86; // x0
  __int64 v87; // x1
  int64_t v88; // x25
  __int64 methodPtr_low; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  int DEFAULT_LIMITCNT; // w8
  MasterMissionComponent_c *v100; // x0
  int64_t v101; // x1
  int32_t v102; // w8
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_Collections_Generic_IEnumerator_T__c *v109; // x8
  __int64 v110; // x9
  int32_t *v111; // x10
  __int64 v112; // x0
  int v113; // w8
  intptr_t m_CachedPtr; // w24
  int32_t v115; // w22

  v8 = this;
  if ( (byte_4B18B87 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v35, v36);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v37, v38);
    sub_1BCA7E0(&MstMissionDisplayInfoEntity_TypeInfo, v39, v40);
    this = (MasterMissionComponent_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    byte_4B18B87 = 1;
  }
  currentEventIdList = v8->fields.currentEventIdList;
  v8->fields.currentIdx = 0;
  v8->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_84;
  v44 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v44;
  currentMstMissionEntList = v8->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_84;
  size = (unsigned int)currentMstMissionEntList->fields._size;
  v47 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v47;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v8->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.currentMissionDispInfoEnt, 0LL, size, v3, v4, v5, v6, v7);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v56 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       v53,
                                                       v54,
                                                       v55);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v8->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_84;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v59 = 0;
    while ( 1 )
    {
      if ( v59 >= max_length )
        sub_1BCAA44(this, method);
      v60 = &mstMissionList->obj.klass + (int)v59;
      v61 = (int64_t)v60[4];
      if ( !v61 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v60[4], 0LL);
      if ( !MasterData_object )
        break;
      v62 = *(_DWORD *)(v61 + 20);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getLimitedMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             v62,
                                             0LL);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !v56 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v56,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v8->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)*(unsigned int *)(v61 + 20);
            v69 = *(_QWORD *)&this->fields.m_CachedPtr;
            v70 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v69 )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v69 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(v69 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v8->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v72 = *(_QWORD *)&this->fields.m_CachedPtr;
            v73 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v72 )
              break;
            v74 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v61,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v75 = v72 + 8 * v74;
              LODWORD(this->fields.m_CancellationTokenSource) = v74 + 1;
              *(_QWORD *)(v75 + 32) = v61;
              sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 32), v61, v63, v64, v65, v66, v67, v68);
            }
          }
        }
      }
      else
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getClearMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             v62,
                                             5,
                                             0LL);
        if ( !v52 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v52,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v59 >= max_length )
        goto LABEL_32;
    }
LABEL_84:
    sub_1BCAA3C(this, method);
  }
LABEL_32:
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_84;
  this = (MasterMissionComponent_o *)DataManager__getEntityList_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12E8C *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_84;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v76);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v79 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v79;
        p_offset += 4;
        if ( !v79 )
          goto LABEL_39;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_39:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v82 = Enumerator->klass;
    v83 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v84 = &v82->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v84 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v83;
        v84 += 4;
        if ( !v83 )
          goto LABEL_46;
      }
      v85 = (__int64)&v82->vtable[*v84].method;
    }
    else
    {
LABEL_46:
      v85 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v86 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v85)(
                                             Enumerator,
                                             *(_QWORD *)(v85 + 8));
    v88 = (int64_t)v86;
    if ( !v86 )
      goto LABEL_86;
    methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v86->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MstMissionDisplayInfoEntity_c *)v86->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_1BCACFC(v86);
LABEL_86:
      sub_1BCAA3C(v86, v87);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v86, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      static_fields = (struct MasterMissionComponent_StaticFields *)(v88 + 20);
      if ( *(int *)(v88 + 20) <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v91);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        static_fields = isOpenNow->static_fields;
      }
      if ( !v8 )
        sub_1BCAA3C(isOpenNow, v91);
      v8->fields.currentEventSvtId = static_fields->DEFAULT_SVT_ID;
      DEFAULT_LIMITCNT = *(_DWORD *)(v88 + 32);
      if ( DEFAULT_LIMITCNT <= 0 )
      {
        v100 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v91);
          v100 = MasterMissionComponent_TypeInfo;
        }
        DEFAULT_LIMITCNT = v100->static_fields->DEFAULT_LIMITCNT;
      }
      v8->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
      v101 = *(_QWORD *)(v88 + 24);
      v8->fields.voiceNameList = (struct System_String_array *)v101;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.voiceNameList, v101, v92, v93, v94, v95, v96, v97);
      v102 = *(_DWORD *)(v88 + 16);
      v8->fields.currentMissionDispInfoEnt = (struct MstMissionDisplayInfoEntity_o *)v88;
      v8->fields.currentDispId = v102;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields.currentMissionDispInfoEnt,
        v88,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
    }
  }
  v109 = Enumerator->klass;
  v110 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v111 = &v109->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
    {
      --v110;
      v111 += 4;
      if ( !v110 )
        goto LABEL_66;
    }
    v112 = (__int64)&v109->vtable[*v111].method;
  }
  else
  {
LABEL_66:
    v112 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v112)(
                                       Enumerator,
                                       *(_QWORD *)(v112 + 8));
  if ( v56 && (v113 = v56->fields._size, v113 >= 1) )
  {
    v8->fields.totalMissionNum = v113;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v56,
                                         0,
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_84;
    if ( v56->fields._size >= 1 )
    {
      m_CachedPtr = this->fields.m_CachedPtr;
      v115 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v56,
                                             v115,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_84;
        if ( m_CachedPtr > this->fields.m_CachedPtr )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v56,
                                               v115,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_84;
          m_CachedPtr = this->fields.m_CachedPtr;
        }
      }
      while ( ++v115 < v56->fields._size );
    }
    v8->fields.currentMissionId = 0;
    if ( !v52 )
      goto LABEL_84;
    System_Collections_Generic_List_object___AddRange(
      v52,
      (System_Collections_Generic_IEnumerable_T__o *)v56,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v52 )
      goto LABEL_84;
    if ( v52->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v52;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildWeeklyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MasterMissionComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v44; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int64_t size; // x2
  int v47; // w9
  Il2CppObject *MasterData_object; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_List_object__o *v56; // x21
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v59; // w28
  Il2CppClass **v60; // x8
  int64_t v61; // x24
  int32_t v62; // w1
  MasterMissionComponent_o *v63; // x25
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  __int64 v77; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v80; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  MstMissionDisplayInfoEntity_o *v87; // x0
  __int64 v88; // x1
  int64_t v89; // x25
  __int64 methodPtr_low; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  int DEFAULT_LIMITCNT; // w8
  MasterMissionComponent_c *v101; // x0
  int64_t v102; // x1
  int32_t v103; // w8
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  System_Collections_Generic_IEnumerator_T__c *v110; // x8
  __int64 v111; // x9
  int32_t *v112; // x10
  __int64 v113; // x0
  int v114; // w8
  intptr_t m_CachedPtr; // w24
  int32_t v116; // w22

  v8 = this;
  if ( (byte_4B18B85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v35, v36);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v37, v38);
    sub_1BCA7E0(&MstMissionDisplayInfoEntity_TypeInfo, v39, v40);
    this = (MasterMissionComponent_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    byte_4B18B85 = 1;
  }
  currentEventIdList = v8->fields.currentEventIdList;
  v8->fields.currentIdx = 0;
  v8->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_83;
  v44 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v44;
  currentMstMissionEntList = v8->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_83;
  size = (unsigned int)currentMstMissionEntList->fields._size;
  v47 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v47;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v8->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.currentMissionDispInfoEnt, 0LL, size, v3, v4, v5, v6, v7);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v56 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       v53,
                                                       v54,
                                                       v55);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v8->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_83;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v59 = 0;
    while ( 1 )
    {
      if ( v59 >= max_length )
        sub_1BCAA44(this, method);
      v60 = &mstMissionList->obj.klass + (int)v59;
      v61 = (int64_t)v60[4];
      if ( !v61 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v60[4], 0LL);
      if ( !MasterData_object )
        break;
      v62 = *(_DWORD *)(v61 + 20);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getWeeklyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             v62,
                                             0LL);
        if ( !this )
          break;
        v63 = this;
        if ( this->fields.m_CancellationTokenSource )
        {
          this = (MasterMissionComponent_o *)v8->fields.currentEventIdList;
          if ( !this )
            break;
          method = (const MethodInfo *)*(unsigned int *)(v61 + 20);
          v64 = *(_QWORD *)&this->fields.m_CachedPtr;
          v65 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v64 )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v64 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v64 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
          }
          if ( !v56 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v56,
            (System_Collections_Generic_IEnumerable_T__o *)v63,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v8->fields.currentMstMissionEntList;
          if ( !this )
            break;
          v73 = *(_QWORD *)&this->fields.m_CachedPtr;
          v74 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v73 )
            break;
          v75 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v61,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = v73 + 8 * v75;
            LODWORD(this->fields.m_CancellationTokenSource) = v75 + 1;
            *(_QWORD *)(v76 + 32) = v61;
            sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 32), v61, v67, v68, v69, v70, v71, v72);
          }
        }
      }
      else
      {
        this = (MasterMissionComponent_o *)EventMissionMaster__getClearMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             v62,
                                             2,
                                             0LL);
        if ( !v52 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v52,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v59 >= max_length )
        goto LABEL_31;
    }
LABEL_83:
    sub_1BCAA3C(this, method);
  }
LABEL_31:
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_83;
  this = (MasterMissionComponent_o *)DataManager__getEntityList_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12E8C *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v77);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v80 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v80;
        p_offset += 4;
        if ( !v80 )
          goto LABEL_38;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_38:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v83 = Enumerator->klass;
    v84 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v85 = &v83->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v85 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v84;
        v85 += 4;
        if ( !v84 )
          goto LABEL_45;
      }
      v86 = (__int64)&v83->vtable[*v85].method;
    }
    else
    {
LABEL_45:
      v86 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v87 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(
                                             Enumerator,
                                             *(_QWORD *)(v86 + 8));
    v89 = (int64_t)v87;
    if ( !v87 )
      goto LABEL_85;
    methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v87->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MstMissionDisplayInfoEntity_c *)v87->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_1BCACFC(v87);
LABEL_85:
      sub_1BCAA3C(v87, v88);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v87, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      static_fields = (struct MasterMissionComponent_StaticFields *)(v89 + 20);
      if ( *(int *)(v89 + 20) <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v92);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        static_fields = isOpenNow->static_fields;
      }
      if ( !v8 )
        sub_1BCAA3C(isOpenNow, v92);
      v8->fields.currentEventSvtId = static_fields->DEFAULT_SVT_ID;
      DEFAULT_LIMITCNT = *(_DWORD *)(v89 + 32);
      if ( DEFAULT_LIMITCNT <= 0 )
      {
        v101 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v92);
          v101 = MasterMissionComponent_TypeInfo;
        }
        DEFAULT_LIMITCNT = v101->static_fields->DEFAULT_LIMITCNT;
      }
      v8->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
      v102 = *(_QWORD *)(v89 + 24);
      v8->fields.voiceNameList = (struct System_String_array *)v102;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.voiceNameList, v102, v93, v94, v95, v96, v97, v98);
      v103 = *(_DWORD *)(v89 + 16);
      v8->fields.currentMissionDispInfoEnt = (struct MstMissionDisplayInfoEntity_o *)v89;
      v8->fields.currentDispId = v103;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields.currentMissionDispInfoEnt,
        v89,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
    }
  }
  v110 = Enumerator->klass;
  v111 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v112 = &v110->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v112 - 1) != System_IDisposable_TypeInfo )
    {
      --v111;
      v112 += 4;
      if ( !v111 )
        goto LABEL_65;
    }
    v113 = (__int64)&v110->vtable[*v112].method;
  }
  else
  {
LABEL_65:
    v113 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v113)(
                                       Enumerator,
                                       *(_QWORD *)(v113 + 8));
  if ( v56 && (v114 = v56->fields._size, v114 >= 1) )
  {
    v8->fields.totalMissionNum = v114;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v56,
                                         0,
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_83;
    m_CachedPtr = this->fields.m_CachedPtr;
    if ( v56->fields._size >= 1 )
    {
      v116 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v56,
                                             v116,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_83;
        if ( m_CachedPtr > this->fields.m_CachedPtr )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v56,
                                               v116,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_83;
          m_CachedPtr = this->fields.m_CachedPtr;
        }
      }
      while ( ++v116 < v56->fields._size );
    }
    v8->fields.currentMissionId = m_CachedPtr;
    if ( !v52 )
      goto LABEL_83;
    System_Collections_Generic_List_object___AddRange(
      v52,
      (System_Collections_Generic_IEnumerable_T__o *)v56,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v52 )
      goto LABEL_83;
    if ( v52->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v52;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getValidExtraMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MasterMissionComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int v44; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int64_t size; // x2
  int v47; // w9
  Il2CppObject *MasterData_object; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v55; // w26
  Il2CppClass **v56; // x8
  int64_t v57; // x23
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  __int64 v71; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v74; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v77; // x8
  __int64 v78; // x9
  int32_t *v79; // x10
  __int64 v80; // x0
  MstMissionDisplayInfoEntity_o *v81; // x0
  __int64 v82; // x1
  int64_t v83; // x24
  __int64 methodPtr_low; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v86; // x1
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  int DEFAULT_LIMITCNT; // w8
  MasterMissionComponent_c *v95; // x0
  int64_t v96; // x1
  int32_t v97; // w8
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Collections_Generic_IEnumerator_T__c *v104; // x8
  __int64 v105; // x9
  int32_t *v106; // x10
  __int64 v107; // x0
  int v108; // w8
  intptr_t m_CachedPtr; // w23
  int32_t v110; // w21

  v8 = this;
  if ( (byte_4B18B86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v35, v36);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v37, v38);
    sub_1BCA7E0(&MstMissionDisplayInfoEntity_TypeInfo, v39, v40);
    this = (MasterMissionComponent_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    byte_4B18B86 = 1;
  }
  currentEventIdList = v8->fields.currentEventIdList;
  v8->fields.currentIdx = 0;
  v8->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  v44 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v44;
  currentMstMissionEntList = v8->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  size = (unsigned int)currentMstMissionEntList->fields._size;
  v47 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v47;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, size, 0LL);
  v8->fields.currentMissionDispInfoEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.currentMissionDispInfoEnt, 0LL, size, v3, v4, v5, v6, v7);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v8->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v55 = 0;
    while ( 1 )
    {
      if ( v55 >= max_length )
        sub_1BCAA44(this, method);
      v56 = &mstMissionList->obj.klass + (int)v55;
      v57 = (int64_t)v56[4];
      if ( !v57 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v56[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__getExtraMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             *(_DWORD *)(v57 + 20),
                                             0LL);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
          {
            if ( !v52 )
              break;
            System_Collections_Generic_List_object___AddRange(
              v52,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v8->fields.currentEventIdList;
            if ( !this )
              break;
            method = (const MethodInfo *)*(unsigned int *)(v57 + 20);
            v64 = *(_QWORD *)&this->fields.m_CachedPtr;
            v65 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v64 )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v64 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(v64 + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v8->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v67 = *(_QWORD *)&this->fields.m_CachedPtr;
            v68 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v67 )
              break;
            v69 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v57,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
            }
            else
            {
              v70 = v67 + 8 * v69;
              LODWORD(this->fields.m_CancellationTokenSource) = v69 + 1;
              *(_QWORD *)(v70 + 32) = v57;
              sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 32), v57, v58, v59, v60, v61, v62, v63);
            }
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v55 >= max_length )
        goto LABEL_29;
    }
LABEL_78:
    sub_1BCAA3C(this, method);
  }
LABEL_29:
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_78;
  this = (MasterMissionComponent_o *)DataManager__getEntityList_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12E8C *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v71);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v74 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v74;
        p_offset += 4;
        if ( !v74 )
          goto LABEL_36;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_36:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v77 = Enumerator->klass;
    v78 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v79 = &v77->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v79 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_43;
      }
      v80 = (__int64)&v77->vtable[*v79].method;
    }
    else
    {
LABEL_43:
      v80 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v81 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(
                                             Enumerator,
                                             *(_QWORD *)(v80 + 8));
    v83 = (int64_t)v81;
    if ( !v81 )
      goto LABEL_80;
    methodPtr_low = LOBYTE(MstMissionDisplayInfoEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v81->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (MstMissionDisplayInfoEntity_c *)v81->klass->_2.typeHierarchy[methodPtr_low - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_1BCACFC(v81);
LABEL_80:
      sub_1BCAA3C(v81, v82);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v81, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      static_fields = (struct MasterMissionComponent_StaticFields *)(v83 + 20);
      if ( *(int *)(v83 + 20) <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v86);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        static_fields = isOpenNow->static_fields;
      }
      if ( !v8 )
        sub_1BCAA3C(isOpenNow, v86);
      v8->fields.currentEventSvtId = static_fields->DEFAULT_SVT_ID;
      DEFAULT_LIMITCNT = *(_DWORD *)(v83 + 32);
      if ( DEFAULT_LIMITCNT <= 0 )
      {
        v95 = MasterMissionComponent_TypeInfo;
        if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v86);
          v95 = MasterMissionComponent_TypeInfo;
        }
        DEFAULT_LIMITCNT = v95->static_fields->DEFAULT_LIMITCNT;
      }
      v8->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
      v96 = *(_QWORD *)(v83 + 24);
      v8->fields.voiceNameList = (struct System_String_array *)v96;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.voiceNameList, v96, v87, v88, v89, v90, v91, v92);
      v97 = *(_DWORD *)(v83 + 16);
      v8->fields.currentMissionDispInfoEnt = (struct MstMissionDisplayInfoEntity_o *)v83;
      v8->fields.currentDispId = v97;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields.currentMissionDispInfoEnt,
        v83,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
  }
  v104 = Enumerator->klass;
  v105 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v106 = &v104->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
    {
      --v105;
      v106 += 4;
      if ( !v105 )
        goto LABEL_63;
    }
    v107 = (__int64)&v104->vtable[*v106].method;
  }
  else
  {
LABEL_63:
    v107 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v107)(
    Enumerator,
    *(_QWORD *)(v107 + 8));
  if ( v52 )
  {
    v108 = v52->fields._size;
    if ( v108 < 1 )
    {
      return 0LL;
    }
    else
    {
      v8->fields.totalMissionNum = v108;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v52,
                                           0,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_78;
      if ( v52->fields._size >= 1 )
      {
        m_CachedPtr = this->fields.m_CachedPtr;
        v110 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v52,
                                               v110,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_78;
          if ( m_CachedPtr > this->fields.m_CachedPtr )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v52,
                                                 v110,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_78;
            m_CachedPtr = this->fields.m_CachedPtr;
          }
        }
        while ( ++v110 < v52->fields._size );
      }
      v8->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v52;
}


int32_t __fastcall MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4B18B75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B18B75 = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1BCAA3C(0LL, v8);
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
    sub_1BCAA3C(this, method);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    sub_1BCAA44(this, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 *v17; // x8
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  MasterMissionComponent_o *v26; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct PlayMakerFSM_o *v37; // x10
  MasterMissionListViewManager_o *v38; // x21
  int64_t fsm; // x1
  int64_t fsmTemplate; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  v4 = this;
  if ( (byte_4B18BA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___, result, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v13, v14);
    this = (MasterMissionComponent_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v15, v16);
    byte_4B18BA0 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( !System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    v19 = (Il2CppObject *)System_String__Concat_62412480(
                            (System_String_o *)StringLiteral_15978/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16236/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                         v19,
                                         (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( this )
    {
      v26 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_21;
      myFsm = this->fields.myFsm;
      if ( !myFsm )
        goto LABEL_20;
      v4->fields.isOverPresentBox = (bool)myFsm->fields.m_CancellationTokenSource;
      v4->fields.overflowType = HIDWORD(myFsm->fields.m_CancellationTokenSource);
      v28 = *(_QWORD *)&myFsm->fields.m_CachedPtr;
      v4->fields.receiveMissionIds = (struct System_Int32_array *)v28;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.receiveMissionIds, v28, v20, v21, v22, v23, v24, v25);
      missionListViewManager = v4->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_20;
      nowType = v4->fields.nowType;
      if ( (unsigned int)nowType >= missionListViewManager->max_length
        || !LODWORD(v26->fields.m_CancellationTokenSource) )
      {
LABEL_21:
        sub_1BCAA44(this, result);
      }
      v37 = v26->fields.myFsm;
      if ( v37 )
      {
        v38 = missionListViewManager->m_Items[nowType];
        if ( v38 )
        {
          fsm = (int64_t)v37->fields.fsm;
          fsmTemplate = (int64_t)v37->fields.fsmTemplate;
          v38->fields.getSvtList = (struct GetSvts_array *)fsm;
          sub_1BCA784((PartyOrganizationUtility_o *)&v38->fields.getSvtList, fsm, v29, v30, v31, v32, v33, v34);
          v38->fields.getCommandCodeList = (struct GetCommandCodes_array *)fsmTemplate;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v38->fields.getCommandCodeList,
            fsmTemplate,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          this = (MasterMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v17 = &StringLiteral_11197/*"REQUEST_OK"*/;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(this, result);
  }
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_20;
  v17 = &StringLiteral_11195/*"REQUEST_NG"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v17, 0LL);
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  bool _38402052; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B18B94 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, voiceIDs, method);
    sub_1BCA7E0(&Method_MasterMissionComponent_setNormalFace__, v5, v6);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v7, v8);
    byte_4B18B94 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, voiceIDs);
  _38402052 = TutorialFlag__Get_38402052(126, 0LL);
  if ( voiceIDs && !_38402052 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
    if ( !svtVoiceCtr )
      sub_1BCAA3C(v16, v17);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v15, 0LL);
  }
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice_43931500(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  bool _38402052; // w0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v35; // x20

  if ( (byte_4B18B95 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, voiceIDs, action);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__DisplayClass172_0__playEventMissionSvtVoice_b__0__, v9, v10);
    sub_1BCA7E0(&MasterMissionComponent___c__DisplayClass172_0_TypeInfo, v11, v12);
    byte_4B18B95 = 1;
  }
  v13 = sub_1BCAA2C(MasterMissionComponent___c__DisplayClass172_0_TypeInfo, voiceIDs, action, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)action, v22, v23, v24, v25, v26, v27);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v28);
  _38402052 = TutorialFlag__Get_38402052(126, 0LL);
  if ( voiceIDs && !_38402052 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v13,
      Method_MasterMissionComponent___c__DisplayClass172_0__playEventMissionSvtVoice_b__0__,
      0LL);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v35, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(v14, v15);
  }
}


void __fastcall MasterMissionComponent__playSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 voicePlayEffect; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x8
  __int64 v20; // x2
  UnityEngine_Transform_o *v21; // x20
  EventSvtControl_o *svtVoiceCtr; // x20
  System_Action_o *v23; // x21

  if ( (byte_4B18B93 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v8, v9);
    sub_1BCA7E0(&Method_MasterMissionComponent_setNormalFace__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B18B93 = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      v21 = (UnityEngine_Transform_o *)voicePlayEffect;
      if ( !byte_4B109C6 )
      {
        voicePlayEffect = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v20);
        byte_4B109C6 = 1;
      }
      if ( !v21
        || (UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL),
            (voicePlayEffect = (__int64)this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)voicePlayEffect,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0 )
      {
LABEL_20:
        sub_1BCAA3C(voicePlayEffect, v16);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_20;
  EventSvtControl__playVoice(svtVoiceCtr, v23, 0LL);
}


void __fastcall MasterMissionComponent__reDispMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  int64_t Time; // x0
  __int64 v31; // x1
  struct MstMissionDisplayInfoEntity_o *currentMissionDispInfoEnt; // x8
  _BOOL4 isNotNext; // w9
  int64_t v34; // x20
  System_Collections_Generic_List_object__o *currentMstMissionEntList; // x0
  int size; // w8
  int v37; // w22
  int32_t v38; // w21
  struct System_Collections_Generic_List_MstMissionEntity__o *v39; // x8
  void *monitor; // x8
  int v41; // w21
  struct System_String_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_String_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct MstMissionDisplayInfoEntity_o *v56; // x8
  int v57; // w8
  __int64 *v58; // x8
  struct System_String_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  __int64 *v67; // x8
  struct System_String_o *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x1
  TerminalSceneComponent_c *v76; // x0
  __int64 v77; // x2
  __int64 v78; // x3
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v81; // x21
  MasterMissionComponent___c_c *v82; // x8
  System_Action_o *_9__151_0; // x22
  Il2CppObject *v84; // x23
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7

  if ( (byte_4B18B83 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_MasterMissionComponent___c__reDispMissionList_b__151_0__, v18, v19);
    sub_1BCA7E0(&MasterMissionComponent___c_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_8903/*"MST_REMISSON_MSG"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_8901/*"MST_REDISP_MSG"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_8904/*"MST_REMISSON_TITLE_TXT"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_8902/*"MST_REDISP_TITLE_TXT"*/, v28, v29);
    byte_4B18B83 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
      v34 = Time;
      currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
      if ( !currentMstMissionEntList )
        goto LABEL_59;
      size = currentMstMissionEntList->fields._size;
      v37 = size - 1;
      if ( size < 1 )
      {
LABEL_25:
        v41 = 0;
      }
      else
      {
        v38 = 0;
        while ( 1 )
        {
          currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                    currentMstMissionEntList,
                                                                                    v38,
                                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
          if ( currentMstMissionEntList )
          {
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
            if ( !currentMstMissionEntList )
              goto LABEL_59;
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                      currentMstMissionEntList,
                                                                                      v38,
                                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
            if ( !currentMstMissionEntList )
              goto LABEL_59;
            currentMstMissionEntList = (System_Collections_Generic_List_object__o *)MstMissionEntity__getMissionType(
                                                                                      (MstMissionEntity_o *)currentMstMissionEntList,
                                                                                      0LL);
            v39 = this->fields.currentMstMissionEntList;
            if ( (_DWORD)currentMstMissionEntList == 5 )
            {
              if ( !v39 )
                goto LABEL_59;
              currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                        (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList,
                                                                                        v38,
                                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
              if ( !currentMstMissionEntList )
                goto LABEL_59;
              monitor = currentMstMissionEntList[1].monitor;
            }
            else
            {
              if ( !v39 )
                goto LABEL_59;
              currentMstMissionEntList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                        (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList,
                                                                                        v38,
                                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
              if ( !currentMstMissionEntList )
                goto LABEL_59;
              monitor = currentMstMissionEntList[1].klass;
            }
            if ( v34 >= (__int64)monitor )
              break;
          }
          if ( v37 == v38 )
            goto LABEL_25;
          currentMstMissionEntList = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
          ++v38;
          if ( !currentMstMissionEntList )
            goto LABEL_59;
        }
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8904/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
        this->fields.titleTxt = v42;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.titleTxt, (int64_t)v42, v43, v44, v45, v46, v47, v48);
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8903/*"MST_REMISSON_MSG"*/, 0LL);
        this->fields.msgTxt = v49;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.msgTxt, (int64_t)v49, v50, v51, v52, v53, v54, v55);
        v41 = 1;
      }
      v56 = this->fields.currentMissionDispInfoEnt;
      if ( !v56 )
        goto LABEL_59;
      if ( v34 >= v56->fields.endedAt )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
        v58 = &StringLiteral_8904/*"MST_REMISSON_TITLE_TXT"*/;
        if ( !v41 )
          v58 = &StringLiteral_8902/*"MST_REDISP_TITLE_TXT"*/;
        v59 = LocalizationManager__Get((System_String_o *)*v58, 0LL);
        this->fields.titleTxt = v59;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.titleTxt, (int64_t)v59, v60, v61, v62, v63, v64, v65);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
        v67 = &StringLiteral_8903/*"MST_REMISSON_MSG"*/;
        if ( !v41 )
          v67 = &StringLiteral_8901/*"MST_REDISP_MSG"*/;
        v68 = LocalizationManager__Get((System_String_o *)*v67, 0LL);
        this->fields.msgTxt = v68;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.msgTxt, (int64_t)v68, v69, v70, v71, v72, v73, v74);
        v57 = 1;
      }
      else
      {
        v57 = 0;
      }
      isNotNext = this->fields.isNotNext;
      LODWORD(currentMissionDispInfoEnt) = v57 | v41;
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
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
    TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
    this->fields.isOpenOverDlg = 1;
    v76 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v75);
      v76 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v76->static_fields->MASTER_MISSION_RESET_KEY, 0LL);
    currentMstMissionEntList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    titleTxt = this->fields.titleTxt;
    msgTxt = this->fields.msgTxt;
    v81 = (CommonUI_o *)currentMstMissionEntList;
    v82 = MasterMissionComponent___c_TypeInfo;
    if ( !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v31);
      v82 = MasterMissionComponent___c_TypeInfo;
    }
    _9__151_0 = v82->static_fields->__9__151_0;
    if ( !_9__151_0 )
    {
      if ( !v82->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v82, v31);
        v82 = MasterMissionComponent___c_TypeInfo;
      }
      v84 = (Il2CppObject *)v82->static_fields->__9;
      _9__151_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v77, v78);
      System_Action___ctor(_9__151_0, v84, Method_MasterMissionComponent___c__reDispMissionList_b__151_0__, 0LL);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      static_fields->__9__151_0 = _9__151_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__151_0,
        (int64_t)_9__151_0,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
    }
    if ( v81 )
    {
      CommonUI__OpenNotificationDialog(v81, titleTxt, msgTxt, _9__151_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
LABEL_59:
    sub_1BCAA3C(currentMstMissionEntList, v31);
  }
}


void __fastcall MasterMissionComponent__setCurrentSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *currentVoiceDataList; // x0
  EventSvtControl_o *svtVoiceCtr; // x20
  void *v8; // x8
  System_Collections_Generic_List_ServantVoiceData____o *v9; // x21
  void *v10; // x8
  System_Collections_Generic_List_ServantVoiceData____o *v11; // x22
  System_String_o *v12; // x23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct StandFigureBack_o *standFigureBack; // x8
  int64_t standFigureCollectList; // x1
  const MethodInfo *v21; // x1

  if ( (byte_4B18B92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__, v4, v5);
    byte_4B18B92 = 1;
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
                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
    if ( currentVoiceDataList )
    {
      v8 = currentVoiceDataList;
      currentVoiceDataList = this->fields.currentVoiceDataList;
      if ( currentVoiceDataList )
      {
        v9 = (System_Collections_Generic_List_ServantVoiceData____o *)*((_QWORD *)v8 + 3);
        currentVoiceDataList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)currentVoiceDataList,
                                 this->fields.currentIdx,
                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
        if ( currentVoiceDataList )
        {
          v10 = currentVoiceDataList;
          currentVoiceDataList = this->fields.currentVoiceDataList;
          if ( currentVoiceDataList )
          {
            v11 = (System_Collections_Generic_List_ServantVoiceData____o *)*((_QWORD *)v10 + 4);
            currentVoiceDataList = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)currentVoiceDataList,
                                     this->fields.currentIdx,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
            if ( currentVoiceDataList )
            {
              v12 = (System_String_o *)*((_QWORD *)currentVoiceDataList + 2);
              currentVoiceDataList = (void *)ServantVoiceMaster__getSvtVoiceId(this->fields.currentEventSvtId, 0LL);
              if ( svtVoiceCtr )
              {
                EventSvtControl__setSvtVoice(svtVoiceCtr, v9, v11, 0LL, v12, (int32_t)currentVoiceDataList, 0LL);
                standFigureBack = this->fields.standFigureBack;
                if ( standFigureBack )
                {
                  currentVoiceDataList = this->fields.svtVoiceCtr;
                  if ( currentVoiceDataList )
                  {
                    standFigureCollectList = (int64_t)standFigureBack->fields.standFigureCollectList;
                    *((_QWORD *)currentVoiceDataList + 11) = standFigureCollectList;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)((char *)currentVoiceDataList + 88),
                      standFigureCollectList,
                      v13,
                      v14,
                      v15,
                      v16,
                      v17,
                      v18);
                    MasterMissionComponent__playSvtVoice(this, v21);
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
    sub_1BCAA3C(currentVoiceDataList, method);
  }
}


void __fastcall MasterMissionComponent__setGuideSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  void *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_List_object__o *v55; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v65; // x22
  struct System_String_o *VoiceAssetName; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  __int64 v74; // x1
  struct System_String_array *voiceNameList; // x23
  __int64 v76; // x8
  unsigned __int64 v77; // x24
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  System_Collections_Generic_List_object__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  MasterMissionComponent_VoiceData_o *v101; // x22
  const MethodInfo *v102; // x4
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct System_Object_array *items; // x8
  _QWORD *v110; // x9
  __int64 size; // x10
  Il2CppClass **v112; // x0
  int32_t v113; // w8
  Il2CppObject *current; // x21
  Il2CppObject *v115; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  SoundManager_o *v119; // x20
  System_String_o *klass; // x21
  System_Action_o *v121; // x22
  __int64 v122; // x0
  __int64 v123; // x1
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+0h] [xbp-70h] BYREF
  __int64 voicePrefix; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B18B89 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__,
      v12,
      v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&MasterMissionComponent_VoiceData_TypeInfo, v36, v37);
    byte_4B18B89 = 1;
  }
  voicePrefix = 0LL;
  memset(&v124, 0, sizeof(v124));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v41 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v45;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentVoiceDataList,
    (int64_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       v52,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceListRand, (int64_t)v55, v57, v58, v59, v60, v61, v62);
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
  if ( !v41 )
    goto LABEL_37;
  Entity = ServantVoiceMaster__GetEntity((ServantVoiceMaster_o *)v41, SHIDWORD(voicePrefix), voicePrefix, 8, 0LL);
  if ( !Entity )
    goto LABEL_25;
  v65 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0LL);
  this->fields.lastAssetName = VoiceAssetName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.lastAssetName,
    (int64_t)VoiceAssetName,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    v76 = *(_QWORD *)&voiceNameList->max_length;
    if ( v76 )
    {
      if ( (int)v76 >= 1 )
      {
        v77 = 0LL;
        do
        {
          if ( v77 >= (unsigned int)v76 )
            sub_1BCAA44(MstMissionVoiceListByName, v74);
          MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                        v65,
                                        voiceNameList->m_Items[v77],
                                        0LL);
          if ( MstMissionVoiceListByName )
          {
            p_obj = &MstMissionVoiceListByName->obj;
            Instance = *p_voiceListRand;
            if ( !*p_voiceListRand )
              goto LABEL_37;
            v84 = *((_QWORD *)Instance + 2);
            v85 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++*((_DWORD *)Instance + 7);
            if ( !v84 )
              goto LABEL_37;
            v86 = *((int *)Instance + 6);
            if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                p_obj,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
            }
            else
            {
              v87 = v84 + 8 * v86;
              *((_DWORD *)Instance + 6) = v86 + 1;
              *(_QWORD *)(v87 + 32) = p_obj;
              sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 32), (int64_t)p_obj, v78, v79, v80, v81, v82, v83);
            }
          }
          LODWORD(v76) = voiceNameList->max_length;
        }
        while ( (__int64)++v77 < (int)v76 );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v65, 0LL);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.voiceListMission,
    (int64_t)MasterMissionActionVoiceList,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  currentVoiceDataList = (System_Collections_Generic_List_object__o *)this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v101 = (MasterMissionComponent_VoiceData_o *)sub_1BCAA2C(MasterMissionComponent_VoiceData_TypeInfo, v98, v99, v100);
  MasterMissionComponent_VoiceData___ctor(v101, VoiceAssetName, voiceListRand, voiceListMission, v102);
  if ( !currentVoiceDataList
    || (items = currentVoiceDataList->fields._items,
        v110 = Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__,
        ++currentVoiceDataList->fields._version,
        !items) )
  {
LABEL_37:
    sub_1BCAA3C(Instance, p_obj);
  }
  size = currentVoiceDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      currentVoiceDataList,
      (Il2CppObject *)v101,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = &items->obj.klass + size;
    currentVoiceDataList->fields._size = size + 1;
    v112[4] = (Il2CppClass *)v101;
    sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 4), (int64_t)v101, v103, v104, v105, v106, v107, v108);
  }
LABEL_25:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_37;
  v113 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v113;
  if ( v113 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, (const MethodInfo *)p_obj);
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v124,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v124,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v124.fields._current;
      v115 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_1BCAA3C(v115, v116);
      v119 = (SoundManager_o *)v115;
      klass = (System_String_o *)current[1].klass;
      v121 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v116, v117, v118);
      System_Action___ctor(v121, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0LL);
      if ( !v119 )
        sub_1BCAA3C(v122, v123);
      SoundManager__LoadAudioAssetStorage(v119, klass, v121, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v124,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
  }
}


void __fastcall MasterMissionComponent__setMissionCompleteNum(MasterMissionComponent_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w22
  int32_t compMissionNum; // w23
  UserEventMissionMaster_o *v23; // x20
  int32_t v24; // w21
  System_String_o *v25; // x20
  UILabel_o *eventMissionTxt2; // x21
  Il2CppObject *v27; // x22
  Il2CppObject *v28; // x0
  UILabel_o *v29; // x19
  UILabel_o *eventMissionTxt; // x21
  Il2CppObject *v31; // x22
  Il2CppObject *v32; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18B88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_8654/*"MASTER_MISSION_COMPLETE_NUM"*/, v16, v17);
    byte_4B18B88 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_24;
  size = currentEventIdList->fields._size;
  if ( size >= 1 )
  {
    compMissionNum = this->fields.compMissionNum;
    v23 = (UserEventMissionMaster_o *)Instance;
    v24 = 0;
    do
    {
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    currentEventIdList,
                                    v24,
                                    (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v23 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v23, (int32_t)Instance, 0LL);
      ++v24;
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( size == v24 )
        goto LABEL_11;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_24:
    sub_1BCAA3C(Instance, v19);
  }
LABEL_11:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_MISSION_COMPLETE_NUM"*/, 0LL);
  if ( !this->fields.eventMissionInfo )
    goto LABEL_24;
  v25 = (System_String_o *)Instance;
  if ( this->fields.nowType )
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 0, 0LL);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    eventMissionTxt2 = this->fields.eventMissionTxt2;
    v34 = this->fields.compMissionNum;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    totalMissionNum = this->fields.totalMissionNum;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_62415592(v25, v27, v28, 0LL);
    if ( !eventMissionTxt2 )
      goto LABEL_24;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0LL);
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    v29 = this->fields.eventMissionTxt2;
    if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v19);
    if ( !v29 )
      goto LABEL_24;
    UILabel__SetCondensedScale_47600808(
      v29,
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
    v34 = this->fields.compMissionNum;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    totalMissionNum = this->fields.totalMissionNum;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_62415592(v25, v31, v32, 0LL);
    if ( !eventMissionTxt )
      goto LABEL_24;
    UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall MasterMissionComponent__setMySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterMissionComponent_c *v4; // x0
  StandFigureBack_o *standFigureBack; // x19
  int32_t currentEventSvtId; // w20

  if ( (byte_4B18B91 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, method, v2);
    byte_4B18B91 = 1;
  }
  v4 = MasterMissionComponent_TypeInfo;
  standFigureBack = this->fields.standFigureBack;
  currentEventSvtId = this->fields.currentEventSvtId;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
  if ( !standFigureBack )
    sub_1BCAA3C(v4, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0

  if ( (byte_4B18B96 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18B96 = 1;
  }
  this->fields.isVoicePlaying = 0;
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(voicePlayEffect, v5);
  StandFigureBack__SetFaceType((StandFigureBack_o *)voicePlayEffect, 0, 0.0, 0, 0LL);
}


void __fastcall MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  __int64 v8; // x2
  __int64 v9; // x3
  struct MasterMissionListViewManager_array *v10; // x8
  __int64 v11; // x9
  MissionListViewManager_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x1

  v3 = this;
  if ( (byte_4B18BA7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (MasterMissionComponent_o *)sub_1BCA7E0(
                                         &Method_MasterMissionComponent__setRecieveModifyItem_b__193_0__,
                                         v4,
                                         v5);
    byte_4B18BA7 = 1;
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
        (v10 = v3->fields.missionListViewManager) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  v11 = v3->fields.nowType;
  if ( (unsigned int)v11 >= v10->max_length )
LABEL_11:
    sub_1BCAA44(this, method);
  v12 = (MissionListViewManager_o *)v10->m_Items[v11];
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)v3, Method_MasterMissionComponent__setRecieveModifyItem_b__193_0__, 0LL);
  if ( !v12 )
    goto LABEL_10;
  MissionListViewManager__SetMode(v12, 3, v13, 0LL);
  MasterMissionComponent__RefreshInfo(v3, v14);
}


void __fastcall MasterMissionComponent__stopSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0F804;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F7BC;
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
  if ( (byte_4B18BBC & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B18BBC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  sub_1BCA784((PartyOrganizationUtility_o *)v10, (int64_t)mstMission, v11, v12, v13, v14, v15, v16);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)voiceDataName, v9, v10, v11, v12, v13, v14);
  this->fields.DataListRand = voiceDataListRand;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.DataListRand,
    (int64_t)voiceDataListRand,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.DataListMission = voiceDataListMission;
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18BBD & 1) == 0 )
  {
    sub_1BCA7E0(&MasterMissionComponent___c_TypeInfo, v1, v2);
    byte_4B18BBD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MasterMissionComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MasterMissionComponent___c_TypeInfo->static_fields->__9 = (struct MasterMissionComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MasterMissionComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MasterMissionComponent___c___ctor(MasterMissionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c___ExitCompleteMission_b__148_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x19
  __int64 v10; // x2
  TerminalSceneComponent_c *v11; // x0
  __int64 v12; // x2
  ConnectMark_c *klass; // x8

  if ( (byte_4B18BBF & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v5, v6);
    byte_4B18BBF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v8);
  if ( !v9 )
    goto LABEL_21;
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v10);
    byte_4B10F83 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v11->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_21;
  TerminalSceneComponent__playBgm_42940932((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v12);
    byte_4B10F83 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.connectMark->klass;
  if ( !klass || (Instance = *(CommonUI_o **)&klass->_2.element_size) == 0LL )
LABEL_21:
    sub_1BCAA3C(Instance, v8);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  SceneJumpInfo_o *v14; // x19

  if ( (byte_4B18BC1 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_13150/*"StoneFragments"*/, v7, v8);
    byte_4B18BC1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL),
        v14 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v11, v12, v13),
        SceneJumpInfo___ctor_39380796(v14, (System_String_o *)StringLiteral_13150/*"StoneFragments"*/, 0LL),
        !v14)
    || (SceneJumpInfo__SetReturnNowScene(v14, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v10);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v14, 0LL);
}


void __fastcall MasterMissionComponent___c___OpenCompleteMission_b__146_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_4B18BBE & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B18BBE = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    sub_1BCAA3C(0LL, method);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0LL);
}


void __fastcall MasterMissionComponent___c___reDispMissionList_b__151_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18BC0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method, v2);
    byte_4B18BC0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(_4__this, method);
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
  __int64 v3; // x3
  MasterMissionComponent___c__DisplayClass182_0_o *v5; // x19
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct MasterMissionComponent_o *_4__this; // x8
  System_Collections_Generic_List_int__o *v25; // x20
  __int64 v26; // x1
  __int64 MissionId; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  __int64 *v31; // x8
  struct MasterMissionComponent_o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct MasterMissionComponent_o *v39; // x8
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-50h] BYREF

  v5 = this;
  if ( (byte_4B18BC2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__,
      isDecide,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_3566/*"CLICK_DECIDE"*/, v20, v21);
    this = (MasterMissionComponent___c__DisplayClass182_0_o *)sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v22, v23);
    byte_4B18BC2 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v25 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      isDecide,
                                                      method,
                                                      v3);
    System_Collections_Generic_List_int____ctor(
      v25,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (MasterMissionComponent___c__DisplayClass182_0_o *)v5->fields.items;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v41 = v40;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__) )
      {
        if ( !v41.fields._current )
          sub_1BCAA3C(0LL, v26);
        MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v41.fields._current, 0LL);
        if ( !v25 )
          sub_1BCAA3C(MissionId, (unsigned int)MissionId);
        items = v25->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v25->fields._version;
        if ( !items )
          sub_1BCAA3C(MissionId, (unsigned int)MissionId);
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v25,
            MissionId,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = size + 1;
          items->m_Items[size + 1] = MissionId;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v25 )
      {
        v32 = v5->fields.__4__this;
        this = (MasterMissionComponent___c__DisplayClass182_0_o *)System_Collections_Generic_List_int___ToArray(
                                                                    v25,
                                                                    (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v32 )
        {
          v32->fields.sendMissionIds = (struct System_Int32_array *)this;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v32->fields.sendMissionIds,
            (int64_t)this,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          v39 = v5->fields.__4__this;
          if ( v39 )
          {
            this = (MasterMissionComponent___c__DisplayClass182_0_o *)v39->fields.myFsm;
            if ( this )
            {
              v31 = &StringLiteral_3566/*"CLICK_DECIDE"*/;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(this, isDecide);
  }
  this = (MasterMissionComponent___c__DisplayClass182_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_25;
  v31 = &StringLiteral_3559/*"CLICK_CANCEL"*/;
LABEL_21:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v31, 0LL);
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
  __int64 v2; // x2
  MasterMissionComponent___c__DisplayClass188_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v9; // x8

  v3 = this;
  if ( (byte_4B18BC3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11768/*"SERVANT_OVER"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_10570/*"PRESENT_BOX_OVER"*/, v4, v5);
    this = (MasterMissionComponent___c__DisplayClass188_0_o *)sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v6, v7);
    byte_4B18BC3 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterMissionComponent___c__DisplayClass188_0_o *)_4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( this )
    {
      v9 = &StringLiteral_10570/*"PRESENT_BOX_OVER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  if ( !this )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v9 = &StringLiteral_11768/*"SERVANT_OVER"*/;
  else
    v9 = &StringLiteral_3559/*"CLICK_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass188_0___ReceiveResultList_b__1(
        MasterMissionComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *nextAction; // x8

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  MasterMissionComponent___c__DisplayClass189_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v7; // x8

  v3 = this;
  if ( (byte_4B18BC4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11768/*"SERVANT_OVER"*/, method, v2);
    this = (MasterMissionComponent___c__DisplayClass189_0_o *)sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v4, v5);
    byte_4B18BC4 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  if ( v3->fields.isPresentBoxOpen )
  {
    MasterMissionComponent__OpenPresentBox(_4__this, method);
    return;
  }
  this = (MasterMissionComponent___c__DisplayClass189_0_o *)_4__this->fields.myFsm;
  if ( !this )
LABEL_11:
    sub_1BCAA3C(this, method);
  if ( _4__this->fields.overflowType )
    v7 = &StringLiteral_11768/*"SERVANT_OVER"*/;
  else
    v7 = &StringLiteral_3559/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
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
  __int64 v6; // x2
  MasterMissionComponent_o *Object_object__49237568; // x0
  struct MasterMissionComponent_o *_4__this; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct MasterMissionComponent_o *v15; // x8
  int32_t exchangeCount; // w20

  if ( (byte_4B18BC5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v5, v6);
    byte_4B18BC5 = 1;
  }
  Object_object__49237568 = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, assetData);
  if ( !assetData )
    goto LABEL_14;
  Object_object__49237568 = (MasterMissionComponent_o *)AssetData__GetObject_object__49237568(
                                                          assetData,
                                                          MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
                                                          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_object__49237568;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.btnEffectBasePrefab,
    (int64_t)Object_object__49237568,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Object_object__49237568 = this->fields.__4__this;
  if ( !Object_object__49237568 )
    goto LABEL_14;
  MasterMissionComponent__StopStoneButtonEffect(Object_object__49237568, (const MethodInfo *)assetData);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_14;
  if ( v15->fields.nowType == 1 )
  {
    exchangeCount = this->fields.exchangeCount;
    if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
    {
      Object_object__49237568 = this->fields.__4__this;
      if ( Object_object__49237568 )
      {
        MasterMissionComponent__PlayStoneButtonEffect(Object_object__49237568, (const MethodInfo *)assetData);
        return;
      }
LABEL_14:
      sub_1BCAA3C(Object_object__49237568, assetData);
    }
  }
}


void __fastcall MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}