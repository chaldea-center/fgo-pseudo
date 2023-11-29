void __fastcall MasterMissionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  MasterMissionComponent_c *v17; // x8
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  System_Int32_array **v19; // x1
  struct MasterMissionComponent_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct MasterMissionComponent_StaticFields *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct MasterMissionComponent_StaticFields *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct MasterMissionComponent_StaticFields *v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct MasterMissionComponent_StaticFields *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct MasterMissionComponent_StaticFields *v60; // x0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct MasterMissionComponent_StaticFields *v68; // x0
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct MasterMissionComponent_StaticFields *v76; // x0
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  MasterMissionComponent_c *v84; // x8
  struct MasterMissionComponent_StaticFields *v85; // x8

  if ( (byte_40FB230 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_17000, v8);
    sub_B16FFC(&StringLiteral_16999, v9);
    sub_B16FFC(&StringLiteral_17006, v10);
    sub_B16FFC(&StringLiteral_18100, v11);
    sub_B16FFC(&StringLiteral_16998, v12);
    sub_B16FFC(&StringLiteral_17004, v13);
    sub_B16FFC(&StringLiteral_17007, v14);
    sub_B16FFC(&StringLiteral_17001, v15);
    sub_B16FFC(&StringLiteral_17005, v16);
    byte_40FB230 = 1;
  }
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID = 9000001;
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_LIMITCNT = 0;
  v17 = MasterMissionComponent_TypeInfo;
  MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  static_fields = v17->static_fields;
  v19 = (System_Int32_array **)StringLiteral_17004;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17004;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v19, v2, v3, v4, v5, v6, v7);
  v20 = MasterMissionComponent_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_16998;
  v20->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_16998;
  sub_B16F98((BattleServantConfConponent_o *)&v20->DAILY_OFF_SPRITE_LABEL, v21, v22, v23, v24, v25, v26, v27);
  v28 = MasterMissionComponent_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_17007;
  v28->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17007;
  sub_B16F98((BattleServantConfConponent_o *)&v28->WEEKLY_ON_SPRITE_LABEL, v29, v30, v31, v32, v33, v34, v35);
  v36 = MasterMissionComponent_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_17001;
  v36->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17001;
  sub_B16F98((BattleServantConfConponent_o *)&v36->WEEKLY_OFF_SPRITE_LABEL, v37, v38, v39, v40, v41, v42, v43);
  v44 = MasterMissionComponent_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_17005;
  v44->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17005;
  sub_B16F98((BattleServantConfConponent_o *)&v44->EXTRA_ON_SPRITE_LABEL, v45, v46, v47, v48, v49, v50, v51);
  v52 = MasterMissionComponent_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_16999;
  v52->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_16999;
  sub_B16F98((BattleServantConfConponent_o *)&v52->EXTRA_OFF_SPRITE_LABEL, v53, v54, v55, v56, v57, v58, v59);
  v60 = MasterMissionComponent_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_17006;
  v60->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17006;
  sub_B16F98((BattleServantConfConponent_o *)&v60->LIMITED_ON_SPRITE_LABEL, v61, v62, v63, v64, v65, v66, v67);
  v68 = MasterMissionComponent_TypeInfo->static_fields;
  v69 = (System_Int32_array **)StringLiteral_17000;
  v68->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17000;
  sub_B16F98((BattleServantConfConponent_o *)&v68->LIMITED_OFF_SPRITE_LABEL, v69, v70, v71, v72, v73, v74, v75);
  v76 = MasterMissionComponent_TypeInfo->static_fields;
  v77 = (System_Int32_array **)StringLiteral_18100;
  v76->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_18100;
  sub_B16F98((BattleServantConfConponent_o *)&v76->STONE_EXCHENGE_BUTTON_EFFECT_NAME, v77, v78, v79, v80, v81, v82, v83);
  v84 = MasterMissionComponent_TypeInfo;
  MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME = 0.1;
  v84->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH = 92.0;
  v84->static_fields->NOTICE_NUMBER_BADGE_DEPTH = 10;
  v84->static_fields->NOTICE_NUMBER_BADGE_WIDTH = 40;
  v84->static_fields->NOTICE_NUMBER_BADGE_HEIGHT = 40;
  v84->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE = 16;
  v84->static_fields->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v85 = v84->static_fields;
  v85->BLANK_EARTH_WINDOW_POS.fields.x = 0.0;
  v85->BLANK_EARTH_WINDOW_POS.fields.y = 0.0;
  v85->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
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
  __int64 v8; // x3
  __int64 v9; // x4
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  System_Int32_array *receiveMissionIds; // x20
  MasterMissionListViewManager_o *v13; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_40FB21D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MasterMissionComponent__AcceptReward_b__186_0__, v4);
    byte_40FB21D = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    sub_B17100(v5, v6, v7);
    sub_B170A0();
  }
  receiveMissionIds = this->fields.receiveMissionIds;
  v13 = missionListViewManager->m_Items[nowType];
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__186_0__, 0LL);
  if ( !v13 )
LABEL_7:
    sub_B170D4();
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
  MasterMissionListViewManager_o *v6; // x0
  System_Collections_Generic_List_MasterMissionListViewItem__o *v7; // x1
  const MethodInfo *v8; // x2

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    sub_B17100(this, isBulk, method);
    sub_B170A0();
  }
  v6 = missionListViewManager->m_Items[nowType];
  if ( !v6 )
LABEL_5:
    sub_B170D4();
  v7 = MasterMissionListViewManager__ReceiveMissionItems(v6, isBulk, method);
  MasterMissionComponent__BulkReceiveConfirm(this, v7, v8);
}


void __fastcall MasterMissionComponent__BulkReceiveConfirm(
        MasterMissionComponent_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *items,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v28; // x22
  const MethodInfo *v29; // x3

  if ( (byte_40FB219 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo, items);
    sub_B16FFC(&Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__, v7);
    sub_B16FFC(&MasterMissionComponent___c__DisplayClass181_0_TypeInfo, v8);
    byte_40FB219 = 1;
  }
  v9 = sub_B170CC(MasterMissionComponent___c__DisplayClass181_0_TypeInfo, items, method, v3, v4);
  MasterMissionComponent___c__DisplayClass181_0___ctor((MasterMissionComponent___c__DisplayClass181_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 24) = items;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)items, v16, v17, v18, v19, v20, v21);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v23 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v9 + 24);
  v28 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                               MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo,
                                                               v24,
                                                               v25,
                                                               v26,
                                                               v27);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__,
    0LL);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_B170D4();
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v23, v28, v29);
}


void __fastcall MasterMissionComponent__ChangeTabImage(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterMissionComponent_o *v3; // x19
  struct MasterMissionTab_array *missionTabList; // x8
  MasterMissionTab_o *v5; // x0
  UISprite_o *dailyTabBtnBase; // x20
  System_String_o *ButtonSpriteName; // x0
  UISprite_o *dailyTabSprite; // x20
  MasterMissionComponent_c *v9; // x0
  System_String_o **p_DAILY_ON_SPRITE_LABEL; // x8
  UnityEngine_GameObject_o *dailySelectedObj; // x0
  UnityEngine_GameObject_o *dailyNonSelectedObj; // x0
  struct MasterMissionTab_array *v13; // x8
  MasterMissionTab_o *v14; // x0
  UISprite_o *weeklyTabBtnBase; // x20
  System_String_o *v16; // x0
  MasterMissionComponent_c *v17; // x0
  UISprite_o *weeklyTabSprite; // x20
  System_String_o **p_WEEKLY_ON_SPRITE_LABEL; // x8
  UnityEngine_GameObject_o *weeklySelectedObj; // x0
  UnityEngine_GameObject_o *weeklyNonSelectedObj; // x0
  struct MasterMissionTab_array *v22; // x8
  MasterMissionTab_o *v23; // x0
  UISprite_o *extraTabBtnBase; // x20
  System_String_o *v25; // x0
  MasterMissionComponent_c *v26; // x0
  UISprite_o *extraTabSprite; // x20
  System_String_o **p_EXTRA_ON_SPRITE_LABEL; // x8
  UnityEngine_GameObject_o *extraSelectedObj; // x0
  UnityEngine_GameObject_o *extraNonSelectedObj; // x0
  struct MasterMissionTab_array *v31; // x8
  MasterMissionTab_o *v32; // x0
  UISprite_o *limitedTabBtnBase; // x20
  System_String_o *v34; // x0
  MasterMissionComponent_c *v35; // x0
  UISprite_o *limitedTabSprite; // x20
  System_String_o **p_LIMITED_ON_SPRITE_LABEL; // x8
  UnityEngine_GameObject_o *limitedSelectedObj; // x0
  UnityEngine_GameObject_o *limitedNonSelectedObj; // x0
  __int64 v40; // x1
  int32_t nowType; // w19

  v3 = this;
  if ( (byte_40FB214 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B16FFC(&MasterMissionComponent_TypeInfo, method);
    byte_40FB214 = 1;
  }
  missionTabList = v3->fields.missionTabList;
  if ( !missionTabList )
    goto LABEL_70;
  if ( !missionTabList->max_length )
    goto LABEL_71;
  v5 = missionTabList->m_Items[0];
  if ( !v5 )
    goto LABEL_70;
  dailyTabBtnBase = v3->fields.dailyTabBtnBase;
  ButtonSpriteName = MasterMissionTab__GetButtonSpriteName(v5, v3->fields.nowType == 0, 0LL);
  if ( !dailyTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(dailyTabBtnBase, ButtonSpriteName, 0LL);
  dailyTabSprite = v3->fields.dailyTabSprite;
  v9 = MasterMissionComponent_TypeInfo;
  if ( !v3->fields.nowType )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v9 = MasterMissionComponent_TypeInfo;
    }
    p_DAILY_ON_SPRITE_LABEL = &v9->static_fields->DAILY_ON_SPRITE_LABEL;
    if ( dailyTabSprite )
      goto LABEL_17;
LABEL_70:
    sub_B170D4();
  }
  if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v9 = MasterMissionComponent_TypeInfo;
  }
  p_DAILY_ON_SPRITE_LABEL = &v9->static_fields->DAILY_OFF_SPRITE_LABEL;
  if ( !dailyTabSprite )
    goto LABEL_70;
LABEL_17:
  UISprite__set_spriteName(dailyTabSprite, *p_DAILY_ON_SPRITE_LABEL, 0LL);
  dailySelectedObj = v3->fields.dailySelectedObj;
  if ( !dailySelectedObj )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(dailySelectedObj, v3->fields.nowType != 0, 0LL);
  dailyNonSelectedObj = v3->fields.dailyNonSelectedObj;
  if ( !dailyNonSelectedObj )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(dailyNonSelectedObj, v3->fields.nowType == 0, 0LL);
  v13 = v3->fields.missionTabList;
  if ( !v13 )
    goto LABEL_70;
  if ( v13->max_length <= 1 )
    goto LABEL_71;
  v14 = v13->m_Items[1];
  if ( !v14 )
    goto LABEL_70;
  weeklyTabBtnBase = v3->fields.weeklyTabBtnBase;
  v16 = MasterMissionTab__GetButtonSpriteName(v14, v3->fields.nowType == 1, 0LL);
  if ( !weeklyTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(weeklyTabBtnBase, v16, 0LL);
  v17 = MasterMissionComponent_TypeInfo;
  weeklyTabSprite = v3->fields.weeklyTabSprite;
  if ( v3->fields.nowType == 1 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v17 = MasterMissionComponent_TypeInfo;
    }
    p_WEEKLY_ON_SPRITE_LABEL = &v17->static_fields->WEEKLY_ON_SPRITE_LABEL;
    if ( !weeklyTabSprite )
      goto LABEL_70;
  }
  else
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v17 = MasterMissionComponent_TypeInfo;
    }
    p_WEEKLY_ON_SPRITE_LABEL = &v17->static_fields->WEEKLY_OFF_SPRITE_LABEL;
    if ( !weeklyTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(weeklyTabSprite, *p_WEEKLY_ON_SPRITE_LABEL, 0LL);
  weeklySelectedObj = v3->fields.weeklySelectedObj;
  if ( !weeklySelectedObj )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(weeklySelectedObj, v3->fields.nowType != 1, 0LL);
  weeklyNonSelectedObj = v3->fields.weeklyNonSelectedObj;
  if ( !weeklyNonSelectedObj )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(weeklyNonSelectedObj, v3->fields.nowType == 1, 0LL);
  v22 = v3->fields.missionTabList;
  if ( !v22 )
    goto LABEL_70;
  if ( v22->max_length <= 2 )
    goto LABEL_71;
  v23 = v22->m_Items[2];
  if ( !v23 )
    goto LABEL_70;
  extraTabBtnBase = v3->fields.extraTabBtnBase;
  v25 = MasterMissionTab__GetButtonSpriteName(v23, v3->fields.nowType == 2, 0LL);
  if ( !extraTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(extraTabBtnBase, v25, 0LL);
  v26 = MasterMissionComponent_TypeInfo;
  extraTabSprite = v3->fields.extraTabSprite;
  if ( v3->fields.nowType == 2 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v26 = MasterMissionComponent_TypeInfo;
    }
    p_EXTRA_ON_SPRITE_LABEL = &v26->static_fields->EXTRA_ON_SPRITE_LABEL;
    if ( !extraTabSprite )
      goto LABEL_70;
  }
  else
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v26 = MasterMissionComponent_TypeInfo;
    }
    p_EXTRA_ON_SPRITE_LABEL = &v26->static_fields->EXTRA_OFF_SPRITE_LABEL;
    if ( !extraTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(extraTabSprite, *p_EXTRA_ON_SPRITE_LABEL, 0LL);
  extraSelectedObj = v3->fields.extraSelectedObj;
  if ( !extraSelectedObj )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(extraSelectedObj, v3->fields.nowType != 2, 0LL);
  extraNonSelectedObj = v3->fields.extraNonSelectedObj;
  if ( !extraNonSelectedObj )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(extraNonSelectedObj, v3->fields.nowType == 2, 0LL);
  v31 = v3->fields.missionTabList;
  if ( !v31 )
    goto LABEL_70;
  if ( v31->max_length <= 3 )
  {
LABEL_71:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v32 = v31->m_Items[3];
  if ( !v32 )
    goto LABEL_70;
  limitedTabBtnBase = v3->fields.limitedTabBtnBase;
  v34 = MasterMissionTab__GetButtonSpriteName(v32, v3->fields.nowType == 3, 0LL);
  if ( !limitedTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(limitedTabBtnBase, v34, 0LL);
  v35 = MasterMissionComponent_TypeInfo;
  limitedTabSprite = v3->fields.limitedTabSprite;
  if ( v3->fields.nowType == 3 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v35 = MasterMissionComponent_TypeInfo;
    }
    p_LIMITED_ON_SPRITE_LABEL = &v35->static_fields->LIMITED_ON_SPRITE_LABEL;
    if ( !limitedTabSprite )
      goto LABEL_70;
  }
  else
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      v35 = MasterMissionComponent_TypeInfo;
    }
    p_LIMITED_ON_SPRITE_LABEL = &v35->static_fields->LIMITED_OFF_SPRITE_LABEL;
    if ( !limitedTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(limitedTabSprite, *p_LIMITED_ON_SPRITE_LABEL, 0LL);
  limitedSelectedObj = v3->fields.limitedSelectedObj;
  if ( !limitedSelectedObj )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(limitedSelectedObj, v3->fields.nowType != 3, 0LL);
  limitedNonSelectedObj = v3->fields.limitedNonSelectedObj;
  if ( !limitedNonSelectedObj )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive(limitedNonSelectedObj, v3->fields.nowType == 3, 0LL);
  nowType = v3->fields.nowType;
  if ( !byte_40FB27D )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v40);
    byte_40FB27D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = nowType;
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v13; // x0
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x22
  UILabel_o *completeMissionCountNumLb; // x21
  System_String_o *v16; // x0
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *completeMissionCountNumLb2; // x20
  System_String_o *v19; // x0
  UILabel_o *completeMissionCountMsgLb; // x20
  System_String_o *v21; // x0
  struct UILabel_o *completeMissionAlertNumLb; // x8
  System_String_o *completeMissionTimeNumStr; // x0
  struct UILabel_o *completeMissionAlertUnitLb; // x8
  System_String_o *completeMissionTimeCntStr; // x0
  bool IsNullOrEmpty; // w0
  bool v27; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v29; // x0
  UILabel_o *v30; // x0
  struct UILabel_o *v31; // x19
  System_String_o *v32; // x0
  System_String_o *v33; // x1
  UILabel_o *completeMissionAlertMsgLb; // x0
  UILabel_o *completeMissionAlertTitleLb; // x20
  System_String_o *v36; // x0
  UILabel_o *v37; // x0
  UILabel_o *v38; // x0
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FB1F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_8715, v8);
    sub_B16FFC(&StringLiteral_3274, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    sub_B16FFC(&StringLiteral_13336, v11);
    byte_40FB1F8 = 1;
  }
  MissionAchiveCount_k__BackingField = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13 )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v13,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !mstMissionInfo )
    goto LABEL_39;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  completeMissionCountNumLb = this->fields.completeMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  v16 = System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0LL);
  if ( !completeMissionCountNumLb )
    goto LABEL_39;
  UILabel__set_text(completeMissionCountNumLb, v16, 0LL);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  completeMissionCountNumLb2 = this->fields.completeMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  v19 = System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0LL);
  if ( !completeMissionCountNumLb2 )
    goto LABEL_39;
  UILabel__set_text(completeMissionCountNumLb2, v19, 0LL);
  completeMissionCountMsgLb = this->fields.completeMissionCountMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8715, 0LL);
  if ( !completeMissionCountMsgLb )
    goto LABEL_39;
  UILabel__set_text(completeMissionCountMsgLb, v21, 0LL);
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_39;
  LocalizationManager__GetRestTimeWithSeparatedTimeStr(
    MstMissionEntity_k__BackingField->fields.endedAt,
    &this->fields.completeMissionTimeNumStr,
    &this->fields.completeMissionTimeCntStr,
    0LL);
  completeMissionAlertNumLb = this->fields.completeMissionAlertNumLb;
  if ( !completeMissionAlertNumLb )
    goto LABEL_39;
  completeMissionTimeNumStr = this->fields.completeMissionTimeNumStr;
  if ( !completeMissionTimeNumStr )
    goto LABEL_39;
  if ( System_String__Equals_43731072(completeMissionTimeNumStr, completeMissionAlertNumLb->fields.mText, 0LL) )
  {
    completeMissionAlertUnitLb = this->fields.completeMissionAlertUnitLb;
    if ( !completeMissionAlertUnitLb )
      goto LABEL_39;
    completeMissionTimeCntStr = this->fields.completeMissionTimeCntStr;
    if ( !completeMissionTimeCntStr )
      goto LABEL_39;
    if ( System_String__Equals_43731072(completeMissionTimeCntStr, completeMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.completeMissionTimeNumStr, 0LL);
  if ( !this->fields.completeMissionAlertTitleLb )
    goto LABEL_39;
  v27 = IsNullOrEmpty;
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)this->fields.completeMissionAlertTitleLb,
                 0LL);
  if ( !gameObject )
    goto LABEL_39;
  if ( !v27 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    completeMissionAlertTitleLb = this->fields.completeMissionAlertTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3274, 0LL);
    if ( completeMissionAlertTitleLb )
    {
      UILabel__set_text(completeMissionAlertTitleLb, v36, 0LL);
      v37 = this->fields.completeMissionAlertNumLb;
      if ( v37 )
      {
        UILabel__set_text(v37, this->fields.completeMissionTimeNumStr, 0LL);
        v38 = this->fields.completeMissionAlertUnitLb;
        if ( v38 )
        {
          UILabel__set_text(v38, this->fields.completeMissionTimeCntStr, 0LL);
          completeMissionAlertMsgLb = this->fields.completeMissionAlertMsgLb;
          if ( completeMissionAlertMsgLb )
          {
            v33 = (System_String_o *)StringLiteral_1;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_39:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v29 = this->fields.completeMissionAlertNumLb;
  if ( !v29 )
    goto LABEL_39;
  UILabel__set_text(v29, (System_String_o *)StringLiteral_1, 0LL);
  v30 = this->fields.completeMissionAlertUnitLb;
  if ( !v30 )
    goto LABEL_39;
  UILabel__set_text(v30, (System_String_o *)StringLiteral_1, 0LL);
  v31 = this->fields.completeMissionAlertMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13336, 0LL);
  if ( !v31 )
    goto LABEL_39;
  v33 = v32;
  completeMissionAlertMsgLb = v31;
LABEL_37:
  UILabel__set_text(completeMissionAlertMsgLb, v33, 0LL);
}


void __fastcall MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v7; // x8
  MissionListViewItem_o *receiveItem; // x0
  int32_t MissionId; // w20
  __int64 v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_40FB21A & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_B16FFC(&StringLiteral_11101, v4);
    byte_40FB21A = 1;
  }
  missionListViewManager = v3->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_11;
  nowType = v3->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_12;
  v7 = missionListViewManager->m_Items[nowType];
  if ( !v7
    || (receiveItem = (MissionListViewItem_o *)v7->fields.receiveItem) == 0LL
    || (MissionId = MissionListViewItem__get_MissionId(receiveItem, 0LL),
        (this = (MasterMissionComponent_o *)sub_B17014(int___TypeInfo, 1LL, v10)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  method = (const MethodInfo *)this;
  if ( !LODWORD(this->fields.myFsm) )
  {
LABEL_12:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  LODWORD(this->fields.titlePrefab) = MissionId;
  v3->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v3->fields.sendMissionIds,
    (System_Int32_array **)this,
    v2,
    v11,
    v12,
    v13,
    v14,
    v15);
  myFsm = v3->fields.myFsm;
  v3->fields.isBoardTouch = 1;
  if ( !myFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11101, 0LL);
}


void __fastcall MasterMissionComponent__Close(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1
  StandFigureBack_o *standFigureBack; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  ListViewManager_o *v10; // x0
  struct MasterMissionListViewManager_array *v11; // x8
  ListViewManager_o *v12; // x0
  struct MasterMissionListViewManager_array *v13; // x8
  ListViewManager_o *v14; // x0
  struct MasterMissionListViewManager_array *v15; // x8
  ListViewManager_o *v16; // x0
  CompleteMissionSprite_o *completeMissionIconSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FB227 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    byte_40FB227 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    goto LABEL_23;
  EventSvtControl__stopVoice(svtVoiceCtr, 0LL);
  MasterMissionComponent__ReleaseSvtVoiceData(this, v4);
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_23;
  StandFigureBack__DestroyFigure(standFigureBack, 0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_23;
  if ( !missionListViewManager->max_length )
    goto LABEL_24;
  v10 = (ListViewManager_o *)missionListViewManager->m_Items[0];
  if ( !v10 )
    goto LABEL_23;
  ListViewManager__DestroyList(v10, 0LL);
  v11 = this->fields.missionListViewManager;
  if ( !v11 )
    goto LABEL_23;
  if ( v11->max_length <= 1 )
    goto LABEL_24;
  v12 = (ListViewManager_o *)v11->m_Items[1];
  if ( !v12 )
    goto LABEL_23;
  ListViewManager__DestroyList(v12, 0LL);
  v13 = this->fields.missionListViewManager;
  if ( !v13 )
    goto LABEL_23;
  if ( v13->max_length <= 2 )
    goto LABEL_24;
  v14 = (ListViewManager_o *)v13->m_Items[2];
  if ( !v14 || (ListViewManager__DestroyList(v14, 0LL), (v15 = this->fields.missionListViewManager) == 0LL) )
LABEL_23:
    sub_B170D4();
  if ( v15->max_length <= 3 )
  {
LABEL_24:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v16 = (ListViewManager_o *)v15->m_Items[3];
  if ( !v16 )
    goto LABEL_23;
  ListViewManager__DestroyList(v16, 0LL);
  EventRewardSaveData__SaveAllMissionData(0LL);
  completeMissionIconSprite = this->fields.completeMissionIconSprite;
  if ( !completeMissionIconSprite )
    goto LABEL_23;
  CompleteMissionSprite__ReleaseEventUI(completeMissionIconSprite, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall MasterMissionComponent__EndLoadVoiceAssets(MasterMissionComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FB206 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FB206 = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__SetLoadMode(Instance, 0, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v12; // x8
  MasterMissionComponent___c_c *v13; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__147_0; // x20
  Il2CppObject *v17; // x21
  struct MasterMissionComponent___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FB1FC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__, v5);
    sub_B16FFC(&MasterMissionComponent___c_TypeInfo, v6);
    byte_40FB1FC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  v13 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v13 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__147_0 = static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(_9__147_0, v17, Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__, 0LL);
    v18 = MasterMissionComponent___c_TypeInfo->static_fields;
    v18->__9__147_0 = _9__147_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__147_0,
      (System_Int32_array **)_9__147_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__147_0, 0LL);
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
  int32_t MissionProgressType; // w0

  if ( (byte_40FB1F9 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B16FFC(&MissionInfoMaker_TypeInfo, eventMissionList);
    byte_40FB1F9 = 1;
  }
  if ( !eventMissionList )
    goto LABEL_18;
  max_length = eventMissionList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)max_length )
      {
        sub_B17100(this, eventMissionList, *(_QWORD *)&type);
        sub_B170A0();
      }
      v8 = &eventMissionList->obj.klass + v6;
      v9 = (EventMissionEntity_o *)v8[4];
      if ( !v9 )
        break;
      isNowMission = EventMissionEntity__isNowMission((EventMissionEntity_o *)v8[4], 0LL);
      missionTargetId = v9->fields.missionTargetId;
      id = v9->fields.id;
      v13 = isNowMission;
      IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v9, 0LL);
      if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      }
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
LABEL_18:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x8
  int32_t v8; // w21
  unsigned __int64 v9; // x24
  EventMissionEntity_o *v10; // x23
  MasterMissionListViewItem_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_40FB208 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B16FFC(&MasterMissionListViewItem_TypeInfo, eventMissionList);
    byte_40FB208 = 1;
  }
  if ( !eventMissionList )
    goto LABEL_15;
  v7 = *(_QWORD *)&eventMissionList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
      {
        sub_B17100(this, eventMissionList, *(_QWORD *)&type);
        sub_B170A0();
      }
      v10 = eventMissionList->m_Items[v9];
      v11 = (MasterMissionListViewItem_o *)sub_B170CC(
                                             MasterMissionListViewItem_TypeInfo,
                                             eventMissionList,
                                             *(_QWORD *)&type,
                                             method,
                                             v4);
      MasterMissionListViewItem___ctor(v11, v10, type, v12);
      if ( !v11 )
        break;
      LODWORD(v7) = eventMissionList->max_length;
      ++v9;
      if ( v11->fields.progStatus == 3 )
        ++v8;
      if ( (__int64)v9 >= (int)v7 )
        return v8;
    }
LABEL_15:
    sub_B170D4();
  }
  return 0;
}


void __fastcall MasterMissionComponent__HideCompleteMissionIconLb(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *completeMissionIcon; // x0
  CompleteMissionSprite_o *completeMissionIconSprite; // x0
  UnityEngine_GameObject_o *completeMissionAlertRoot; // x0
  UnityEngine_GameObject_o *completeMissionCountRoot; // x0

  completeMissionIcon = this->fields.completeMissionIcon;
  if ( !completeMissionIcon
    || (UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0LL),
        (completeMissionIconSprite = this->fields.completeMissionIconSprite) == 0LL)
    || (CompleteMissionSprite__ReleaseEventUI(completeMissionIconSprite, 0LL),
        (completeMissionAlertRoot = this->fields.completeMissionAlertRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(completeMissionAlertRoot, 0, 0LL),
        (completeMissionCountRoot = this->fields.completeMissionCountRoot) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(completeMissionCountRoot, 0, 0LL);
}


void __fastcall MasterMissionComponent__InitCompleteMissionLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8

  if ( (byte_40FB1F7 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v4);
    byte_40FB1F7 = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_B170D4();
  if ( currentCompleteMissionList->fields._size < 1 )
    MasterMissionComponent__HideCompleteMissionIconLb(this, method);
  else
    MasterMissionComponent__ChangeViewCompleteMissionLb(this, currentCompleteMissionList->fields._items->m_Items[0], v2);
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
  WebViewManager_o *Instance; // x0
  MstMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  MstMissionEntity_array *EnableMissions; // x0
  __int64 v11; // x25
  MstMissionEntity_array *v12; // x20
  il2cpp_array_size_t v13; // w26
  __int64 namespaze; // x24
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x21
  __int64 MissionType; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t v20; // x9
  bool result; // w0
  BalanceConfig_c *v23; // x0

  if ( (byte_40FB1FD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_MstMissionMaster___, v2);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FB1FD = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v5->static_fields->NoneExpireTime;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !EnableMissions )
    goto LABEL_34;
  v11 = *(_QWORD *)&EnableMissions->max_length;
  v12 = EnableMissions;
  if ( (int)v11 >= 1 )
  {
    v13 = 0;
    namespaze = -1LL;
    while ( 1 )
    {
      v15 = &v12->obj.klass + (int)v13;
      v16 = v15[4];
      if ( !v16 )
        break;
      MissionType = MstMissionEntity__getMissionType((MstMissionEntity_o *)v15[4], 0LL);
      if ( (_DWORD)MissionType == 5 )
      {
        v20 = *(_QWORD *)&v16->_1.byval_arg.bits;
        if ( (__int64)v16->_1.namespaze > namespaze )
          namespaze = (__int64)v16->_1.namespaze;
        if ( Time < v20 && NoneExpireTime > v20 )
          NoneExpireTime = *(_QWORD *)&v16->_1.byval_arg.bits;
      }
      if ( (int)++v13 >= (int)v11 )
        goto LABEL_27;
      if ( v13 >= v12->max_length )
      {
        sub_B17100(MissionType, v18, v19);
        sub_B170A0();
      }
    }
LABEL_34:
    sub_B170D4();
  }
  namespaze = -1LL;
LABEL_27:
  result = 0;
  if ( Time < NoneExpireTime && namespaze <= Time )
  {
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    return NoneExpireTime < v23->static_fields->NoneExpireTime;
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
  WebViewManager_o *Instance; // x0
  struct MstMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Component_o *playBtnImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v25; // x0
  CommonUI_o *v26; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Transform_o *v31; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  _BOOL8 _28023340; // x0
  const MethodInfo *v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  CommonUI_o *v40; // x20
  AvalonSceneManager_c *v41; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v43; // x21

  if ( (byte_40FB1F4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_MstMissionMaster___, v4);
    sub_B16FFC(&Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&TutorialFlag_TypeInfo, v8);
    byte_40FB1F4 = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (struct MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mstMissionMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  EventRewardSaveData__LoadAllMissionData(0LL);
  MasterMissionComponent__SetMissionDisp(this, v17);
  MasterMissionComponent__SetMissionClearNum(this, v18);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(126, 0LL) )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_32;
    TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
    playBtnImg = (UnityEngine_Component_o *)this->fields.playBtnImg;
    if ( !playBtnImg )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject(playBtnImg, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !transform )
      goto LABEL_32;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_32;
    v25 = UnityEngine_Component__get_gameObject(parent, 0LL);
    if ( !v25 )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(v25, 0, 0LL);
    v26 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v26 )
      goto LABEL_32;
    CommonUI__SetLoadMode(v26, 0, 0LL);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v19);
    MasterMissionComponent__setGuideSvtVoice(this, v28);
    v29 = (UnityEngine_Component_o *)this->fields.playBtnImg;
    if ( !v29 )
      goto LABEL_32;
    v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
    if ( !v30 )
      goto LABEL_32;
    v31 = UnityEngine_GameObject__get_transform(v30, 0LL);
    if ( !v31 )
      goto LABEL_32;
    v32 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v31, 0LL);
    if ( !v32 )
      goto LABEL_32;
    v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
    if ( !v33 )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(v33, 1, 0LL);
  }
  MasterMissionComponent__reDispMissionList(this, v27);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28023340 = TutorialFlag__Get_28023340(207, 0LL);
  if ( !_28023340 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_28023340, v35);
  v40 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v41 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v41 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v41->static_fields->DEFAULT_FADE_TIME;
  v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__, 0LL);
  if ( !v40 )
LABEL_32:
    sub_B170D4();
  CommonUI__maskFadein(v40, DEFAULT_FADE_TIME, v43, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_40FB226 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB226 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    MasterMissionComponent_ClickDelegate__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBulkReceive(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FB22F & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2621, v3);
    byte_40FB22F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2621, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  TerminalSceneComponent_c *v18; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  CommonUI_o *v25; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21
  System_String_o *v29; // x19
  _QWORD **v30; // x21
  __int64 v31; // x20
  __int16 v32; // w8
  __int64 v33; // x20
  __int64 v34; // x20
  __int64 v35; // x20
  System_String_o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  CommonUI_o *v41; // x20
  MasterMissionComponent___c_c *v42; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__146_1; // x21
  Il2CppObject *v45; // x22
  struct MasterMissionComponent___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_40FB1FB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Array_Empty_object___, v3);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v11);
    sub_B16FFC(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__, v12);
    sub_B16FFC(&MasterMissionComponent___c_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_3273, v14);
    byte_40FB1FB = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_50;
    if ( EventMissionMaster__isActiveCompMission(MasterData_WarQuestSelectionMaster, 0LL) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v17);
        byte_40F6042 = 1;
      }
      v18 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v18 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v18->static_fields->mInstance;
      if ( mInstance )
      {
        mTerminalMap = mInstance->fields.mTerminalMap;
        if ( mTerminalMap )
        {
          ScrTerminalMap__DestroyEventActionEffect(mTerminalMap, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          TerminalPramsManager__PlaySystemSE(0, 0LL);
          v25 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v26 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v26 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
          v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
          System_Action___ctor(
            v28,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__,
            0LL);
          if ( v25 )
          {
            CommonUI__maskFadeout(v25, 1, DEFAULT_FADE_TIME, v28, 0LL);
            return;
          }
        }
      }
LABEL_50:
      sub_B170D4();
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3273, 0LL);
    v30 = (_QWORD **)Method_System_Array_Empty_object___;
    v31 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v32 = *(_WORD *)(v31 + 306);
    if ( (v32 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v32 = *(_WORD *)(v31 + 306);
    }
    if ( (v32 & 0x400) != 0 )
    {
      v33 = *v30[6];
      if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
        sub_AAFCFC(*v30[6]);
      if ( !*(_DWORD *)(v33 + 224) )
      {
        v34 = *v30[6];
        if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
          sub_AAFCFC(*v30[6]);
        j_il2cpp_runtime_class_init_0(v34);
      }
    }
    v35 = *v30[6];
    if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
      sub_AAFCFC(*v30[6]);
    v36 = System_String__Format_43822456(v29, **(System_Object_array ***)(v35 + 184), 0LL);
    v41 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v42 = MasterMissionComponent___c_TypeInfo;
    if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v42 = MasterMissionComponent___c_TypeInfo;
    }
    static_fields = v42->static_fields;
    _9__146_1 = static_fields->__9__146_1;
    if ( !_9__146_1 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)static_fields->__9;
      _9__146_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
      System_Action___ctor(_9__146_1, v45, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__, 0LL);
      v46 = MasterMissionComponent___c_TypeInfo->static_fields;
      v46->__9__146_1 = _9__146_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v46->__9__146_1,
        (System_Int32_array **)_9__146_1,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    if ( !v41 )
      goto LABEL_50;
    CommonUI__OpenNotificationDialog(v41, 0LL, v36, _9__146_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_40FB215 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB215 = 1;
  }
  if ( this->fields.nowType )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.nowType = 0;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v3);
    MasterMissionComponent__SetMissionDisp(this, v4);
    MasterMissionComponent__StopStoneButtonEffect(this, v5);
  }
}


void __fastcall MasterMissionComponent__OnClickExtraTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_40FB217 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB217 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.nowType = 2;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v3);
    MasterMissionComponent__SetMissionDisp(this, v4);
    MasterMissionComponent__StopStoneButtonEffect(this, v5);
  }
}


void __fastcall MasterMissionComponent__OnClickHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_40FB22D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB22D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  MasterMissionComponent__OpenHelp(v2, v3);
}


void __fastcall MasterMissionComponent__OnClickLimitedTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_40FB218 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB218 = 1;
  }
  if ( this->fields.nowType != 3 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.nowType = 3;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v3);
    MasterMissionComponent__SetMissionDisp(this, v4);
    MasterMissionComponent__StopStoneButtonEffect(this, v5);
  }
}


void __fastcall MasterMissionComponent__OnClickShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v12; // x8
  MasterMissionComponent___c_c *v13; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__174_0; // x20
  Il2CppObject *v17; // x21
  struct MasterMissionComponent___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FB213 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__, v5);
    sub_B16FFC(&MasterMissionComponent___c_TypeInfo, v6);
    byte_40FB213 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  v13 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v13 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__174_0 = static_fields->__9__174_0;
  if ( !_9__174_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__174_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(_9__174_0, v17, Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__, 0LL);
    v18 = MasterMissionComponent___c_TypeInfo->static_fields;
    v18->__9__174_0 = _9__174_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__174_0,
      (System_Int32_array **)_9__174_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__174_0, 0LL);
}


void __fastcall MasterMissionComponent__OnClickSvt(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.isVoicePlaying )
  {
    svtVoiceCtr = this->fields.svtVoiceCtr;
    if ( !svtVoiceCtr )
      sub_B170D4();
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
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_40FB216 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB216 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.nowType = 1;
    EventRewardSaveData__SaveAllMissionData(0LL);
    MasterMissionComponent__ChangeTabImage(this, v3);
    MasterMissionComponent__SetMissionDisp(this, v4);
    MasterMissionComponent__StopStoneButtonEffect(this, v5);
    if ( MasterMissionComponent__ShouldPlayedStoneButtonEffect(this, v6) )
      MasterMissionComponent__PlayStoneButtonEffect(this, v7);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB1F2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB1F2 = 1;
  }
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0LL, 0LL) )
  {
    if ( !*p_titleInfo )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.titleInfo, 0LL, v7, v8, v9, v10, v11, v12);
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
  CommonUI_o *Instance; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  StandFigureBack_o *standFigureBack; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_List_int__o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  MasterMissionComponent_o *v62; // x0
  const MethodInfo *v63; // x1
  __int64 v64; // x2
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v67; // w20
  MasterMissionTab_o *v68; // x0
  UnityEngine_GameObject_o *limitedTabObj; // x0
  bool v70; // w1
  TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  struct UnityEngine_GameObject_o *titlePrefab; // x21
  UnityEngine_GameObject_o *v74; // x0
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  TitleInfoControl_o *v82; // x21
  UnityEngine_Transform_o *transform; // x0
  TitleInfoControl_o *v84; // x20
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  System_Action_o *v89; // x21
  MasterMissionComponent_c *v90; // x0
  int32_t DEFAULT_LIMITCNT; // w8
  WebViewManager_o *v92; // x0
  struct MstMissionEntity_array *Entitys_WarMaster__WarEntity; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  System_Action_int__o *v108; // x21
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  System_Action_o *v113; // x20

  if ( (byte_40FB1F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, callback);
    sub_B16FFC(&System_Action_int__TypeInfo, v9);
    sub_B16FFC(&System_Action_TypeInfo, v10);
    sub_B16FFC(&AtlasManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v17);
    sub_B16FFC(&Method_MasterMissionComponent_LoadNotificationEnd__, v18);
    sub_B16FFC(&Method_MasterMissionComponent_OnClickBack__, v19);
    sub_B16FFC(&Method_MasterMissionComponent__Open_b__136_0__, v20);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v21);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    byte_40FB1F3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.reDispAction = redisp_act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.reDispAction,
    (System_Int32_array **)redisp_act,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_46;
  StandFigureBack__Init(standFigureBack, 0LL);
  v44 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v40,
                                                    v41,
                                                    v42,
                                                    v43);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentEventIdList,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MstMissionEntity__TypeInfo,
                                                                                                  v51,
                                                                                                  v52,
                                                                                                  v53,
                                                                                                  v54);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentMstMissionEntList,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  if ( typeIndex == -1 )
  {
    if ( !byte_40FB27C )
    {
      v62 = (MasterMissionComponent_o *)sub_B16FFC(&EventRewardSaveData_TypeInfo, v63);
      byte_40FB27C = 1;
    }
    typeIndex = EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
  }
  missionTabList = this->fields.missionTabList;
  this->fields.nowType = typeIndex;
  if ( !missionTabList )
    goto LABEL_46;
  max_length = missionTabList->max_length;
  if ( max_length >= 1 )
  {
    v67 = 0;
    while ( 1 )
    {
      if ( v67 >= max_length )
      {
        sub_B17100(v62, v63, v64);
        sub_B170A0();
      }
      v68 = missionTabList->m_Items[v67];
      if ( !v68 )
        break;
      MasterMissionTab__SetTabSize(v68, 1, 0LL);
      max_length = missionTabList->max_length;
      if ( (int)++v67 >= max_length )
        goto LABEL_15;
    }
LABEL_46:
    sub_B170D4();
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime(v62, v63) )
  {
    limitedTabObj = this->fields.limitedTabObj;
    if ( !limitedTabObj )
      goto LABEL_46;
    v70 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    limitedTabObj = this->fields.limitedTabObj;
    if ( !limitedTabObj )
      goto LABEL_46;
    v70 = 0;
  }
  UnityEngine_GameObject__SetActive(limitedTabObj, v70, 0LL);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(titleInfo, 0LL, 0LL) )
  {
    titlePrefab = this->fields.titlePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v74 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)titlePrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v74 )
      goto LABEL_46;
    Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v74,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.titleInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    v82 = this->fields.titleInfo;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v82 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v82, transform, 0LL);
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setDepth(*p_titleInfo, 37, 0LL);
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnDepth(*p_titleInfo, 38, 0LL);
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setTitleInfo(*p_titleInfo, 0LL, 1, 0LL, 82, 0LL);
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__changeTitleInfo_19612684(*p_titleInfo, 1, 82, 0, 0LL);
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable(*p_titleInfo, 0, 0LL);
    v84 = this->fields.titleInfo;
    v89 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v85, v86, v87, v88);
    System_Action___ctor(v89, (Il2CppObject *)this, Method_MasterMissionComponent_OnClickBack__, 0LL);
    if ( !v84 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v84, v89, 0LL);
  }
  v90 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v90 = MasterMissionComponent_TypeInfo;
  }
  this->fields.currentEventSvtId = v90->static_fields->DEFAULT_SVT_ID;
  DEFAULT_LIMITCNT = v90->static_fields->DEFAULT_LIMITCNT;
  this->fields.currentDispId = 0;
  this->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
  v92 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v92 )
    goto LABEL_46;
  Entitys_WarMaster__WarEntity = (struct MstMissionEntity_array *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                    (DataManager_o *)v92,
                                                                    (const MethodInfo_18C3518 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_WarMaster__WarEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mstMissionList,
    (System_Int32_array **)Entitys_WarMaster__WarEntity,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  MasterMissionComponent__SetupShopBtn(this, v100);
  MasterMissionComponent__SetupCompleteBtn(this, v101);
  MasterMissionComponent__RefreshInfo(this, v102);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v108 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v104, v105, v106, v107);
  System_Action_int____ctor(
    v108,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__Open_b__136_0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v108, 1, 0LL);
  v113 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v109, v110, v111, v112);
  System_Action___ctor(v113, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v113, 0LL);
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
  CommonUI_o *Instance; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  CompleteMissionComponent_ClickDelegate_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  MasterMissionComponent___c_c *v21; // x0
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__145_0; // x21
  Il2CppObject *v24; // x22
  struct MasterMissionComponent___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  TerminalSceneComponent_c *v33; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_40FB1FA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&CompleteMissionComponent_ClickDelegate_TypeInfo, v4);
    sub_B16FFC(&Method_MasterMissionComponent_ExitCompleteMission__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v8);
    sub_B16FFC(&Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__, v9);
    sub_B16FFC(&MasterMissionComponent___c_TypeInfo, v10);
    byte_40FB1FA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CompleteMissionComponent_ClickDelegate_o *)sub_B170CC(
                                                      CompleteMissionComponent_ClickDelegate_TypeInfo,
                                                      v12,
                                                      v13,
                                                      v14,
                                                      v15);
  CompleteMissionComponent_ClickDelegate___ctor(
    v16,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ExitCompleteMission__,
    0LL);
  v21 = MasterMissionComponent___c_TypeInfo;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v21 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__145_0 = static_fields->__9__145_0;
  if ( !_9__145_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__145_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
    System_Action___ctor(_9__145_0, v24, Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__, 0LL);
    v25 = MasterMissionComponent___c_TypeInfo->static_fields;
    v25->__9__145_0 = _9__145_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__145_0,
      (System_Int32_array **)_9__145_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !Instance )
    goto LABEL_25;
  CommonUI__OpenCompleteMission(Instance, v16, _9__145_0, 0, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v32);
    byte_40F6042 = 1;
  }
  v33 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v33 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v33->static_fields->mInstance;
  if ( !mInstance )
LABEL_25:
    sub_B170D4();
  TerminalSceneComponent__SetDispStandServant(mInstance, 0, 0LL);
}


void __fastcall MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FB22E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FB22E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenTutorialImageDialog_18263036(Instance, 42, 207, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall MasterMissionComponent__OpenPresentBox(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  UserPresentBoxWindow_ClickDelegate_o *v13; // x21
  AvalonSceneManager_o *v14; // x0
  __int64 v15; // x1
  TerminalSceneComponent_c *v16; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  CommonUI_o *v19; // x19
  MasterMissionComponent_c *v20; // x8
  __int64 v21; // x1
  TerminalSceneComponent_c *v22; // x0
  struct TerminalSceneComponent_o *v23; // x8
  ScrTerminalListTop_o *v24; // x0

  if ( (byte_40FB220 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentBoxWindow_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_MasterMissionComponent__OpenPresentBox_b__189_0__, v3);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v7);
    byte_40FB220 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (UserPresentBoxWindow_ClickDelegate_o *)sub_B170CC(
                                                  UserPresentBoxWindow_ClickDelegate_TypeInfo,
                                                  v9,
                                                  v10,
                                                  v11,
                                                  v12);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__189_0__,
    0LL);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__OpenUsrPresentList(Instance, 1, v13, 0LL, 0LL);
  v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v14 )
    goto LABEL_33;
  if ( AvalonSceneManager__checkNowScene(v14, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v15);
      byte_40F6042 = 1;
    }
    v16 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v16 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v16->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_33;
    mTerminalList = mInstance->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_33;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth(mTerminalList, 0LL) )
    {
      v19 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = MasterMissionComponent_TypeInfo;
      if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        v20 = MasterMissionComponent_TypeInfo;
      }
      if ( v19 )
      {
        CommonUI__SetUsrPresentListPos(v19, v20->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v21);
          byte_40F6042 = 1;
        }
        v22 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v22 = TerminalSceneComponent_TypeInfo;
        }
        v23 = v22->static_fields->mInstance;
        if ( v23 )
        {
          v24 = v23->fields.mTerminalList;
          if ( v24 )
          {
            ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v24, 0, 0LL);
            return;
          }
        }
      }
LABEL_33:
      sub_B170D4();
    }
  }
}


void __fastcall MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  struct UnityEngine_GameObject_o *v5; // x20
  struct UnityEngine_GameObject_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB22B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB22B = 1;
  }
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v5 = this->fields.btnEffectBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v5,
                                              (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = v6;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.btnEffectPrefab,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0LL, 0LL) )
      GameObjectExtensions__SafeSetParent_27425996(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  PresentBoxOverDialog_ClickDelegate_o *v13; // x22

  if ( (byte_40FB21F & 1) == 0 )
  {
    sub_B16FFC(&PresentBoxOverDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_MasterMissionComponent__PresentBoxOver_b__188_0__, v4);
    sub_B16FFC(&StringLiteral_8610, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FB21F = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8610, 0LL);
  v13 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B170CC(
                                                  PresentBoxOverDialog_ClickDelegate_TypeInfo,
                                                  v9,
                                                  v10,
                                                  v11,
                                                  v12);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__188_0__,
    0LL);
  if ( !presentBoxOverDialog )
    sub_B170D4();
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1, v8, v13, 26, 0LL);
}


void __fastcall MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x22
  System_Action_o **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  struct System_Int32_array *receiveMissionIds; // x8
  AdManager_o *Instance; // x0
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v39; // x19
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x2
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v43; // x19
  System_Action_o *v44; // x22
  const MethodInfo *v45; // x3

  if ( (byte_40FB21E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_B16FFC(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__, v7);
    sub_B16FFC(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__, v8);
    sub_B16FFC(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__, v9);
    sub_B16FFC(&MasterMissionComponent___c__DisplayClass187_0_TypeInfo, v10);
    byte_40FB21E = 1;
  }
  v11 = sub_B170CC(MasterMissionComponent___c__DisplayClass187_0_TypeInfo, method, v2, v3, v4);
  MasterMissionComponent___c__DisplayClass187_0___ctor((MasterMissionComponent___c__DisplayClass187_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__,
    0LL);
  v23 = (System_Action_o **)(v11 + 24);
  *(_QWORD *)(v11 + 24) = v22;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      AdManager__TrackEvent(Instance, 8, this->fields.nowType + 8, -1, -1, 0LL, 0LL);
    }
    if ( this->fields.isBoardTouch )
    {
      missionListViewManager = this->fields.missionListViewManager;
      if ( missionListViewManager )
      {
        nowType = this->fields.nowType;
        if ( (unsigned int)nowType >= missionListViewManager->max_length )
        {
          sub_B17100(v30, v31, v32);
          sub_B170A0();
        }
        v39 = missionListViewManager->m_Items[nowType];
        v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
        System_Action___ctor(
          v40,
          (Il2CppObject *)v11,
          Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__,
          0LL);
        if ( v39 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v39, v40, v41);
          return;
        }
      }
LABEL_20:
      sub_B170D4();
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v43 = this->fields.receiveMissionIds;
    v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v11,
      Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__,
      0LL);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v43, v44, v45);
  }
  else
  {
    if ( !*v23 )
      goto LABEL_20;
    System_Action__Invoke(*v23, 0LL);
  }
}


void __fastcall MasterMissionComponent__RefreshInfo(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x21
  WebViewManager_o *Instance; // x0
  UILabel_o *stoneInfoLabel; // x20
  int32_t stone; // w21
  System_String_o *NumberFormat; // x0
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t UserStoneFragmentNum; // w0
  UILabel_o *stoneFragmentsInfoLabel; // x21
  int32_t v15; // w20
  System_String_o *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_40FB228 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FB228 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_15;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_15;
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(Master_WarQuestSelectionMaster, 0LL),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v15 = UserStoneFragmentNum,
        v16 = LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0LL),
        !stoneFragmentsInfoLabel) )
  {
LABEL_15:
    sub_B170D4();
  }
  UILabel__set_text(stoneFragmentsInfoLabel, v16, 0LL);
  MasterMissionComponent__UpdateStoneExchangeCount(this, v15, v17);
}


void __fastcall MasterMissionComponent__ReleaseSvtVoiceData(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x0
  Il2CppClass *klass; // x20
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB224 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FB224 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentVoiceDataList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      if ( !v11.fields.current )
        sub_B170D4();
      klass = v11.fields.current[1].klass;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)klass, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v10 = this->fields.currentVoiceDataList;
    if ( !v10 )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__);
  }
}


void __fastcall MasterMissionComponent__RequestMissionReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FB21B & 1) == 0 )
  {
    sub_B16FFC(&Method_MasterMissionComponent_missionRewardCallback__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40FB21B = 1;
  }
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3, v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v9,
                                                                            (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  EventMissionClearRewardRequest__beginRequest_22521012(
    Request_WarBoardWallAttackRequest,
    this->fields.sendMissionIds,
    0LL);
}


void __fastcall MasterMissionComponent__ServantOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t overflowType; // w8
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  int32_t v9; // w20
  System_String_o *v10; // x0
  UserPresentBoxErrorDialog_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_ShopRootConstants_State__o *v16; // x22
  UserPresentBoxErrorDialog_o *v17; // x0

  if ( (byte_40FB221 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SceneList_Type___ctor__, method);
    sub_B16FFC(&System_Action_SceneList_Type__TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_MasterMissionComponent_ServantOverDialogClose__, v5);
    sub_B16FFC(&StringLiteral_8620, v6);
    byte_40FB221 = 1;
  }
  overflowType = this->fields.overflowType;
  servantOverDialog = this->fields.servantOverDialog;
  if ( overflowType == 4 )
    v9 = 2;
  else
    v9 = overflowType == 2;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8620, 0LL);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v10, 0LL),
        v11 = this->fields.servantOverDialog,
        v16 = (System_Action_ShopRootConstants_State__o *)sub_B170CC(
                                                            System_Action_SceneList_Type__TypeInfo,
                                                            v12,
                                                            v13,
                                                            v14,
                                                            v15),
        System_Action_ShopRootConstants_State____ctor(
          v16,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          (const MethodInfo_24B6054 *)Method_System_Action_SceneList_Type___ctor__),
        !v11)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v11, (System_Action_SceneList_Type__o *)v16, 0LL),
        (v17 = this->fields.servantOverDialog) == 0LL) )
  {
    sub_B170D4();
  }
  UserPresentBoxErrorDialog__setJumpType(v17, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__ServantOverDialogClose(
        MasterMissionComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  System_Action_ShopRootConstants_State__o *v12; // x22
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FB222 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SceneList_Type___ctor__, *(_QWORD *)&type);
    sub_B16FFC(&System_Action_SceneList_Type__TypeInfo, v7);
    sub_B16FFC(&Method_MasterMissionComponent_ServantOverDialogClose__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_3039, v10);
    byte_40FB222 = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v12 = (System_Action_ShopRootConstants_State__o *)sub_B170CC(
                                                      System_Action_SceneList_Type__TypeInfo,
                                                      *(_QWORD *)&type,
                                                      method,
                                                      v3,
                                                      v4);
  System_Action_ShopRootConstants_State____ctor(
    v12,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ServantOverDialogClose__,
    (const MethodInfo_24B6054 *)Method_System_Action_SceneList_Type___ctor__);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v12, 0LL);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0LL);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_9;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3039, 0LL);
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
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = missionListViewManager->m_Items[nowType];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  MasterMissionListViewManager__setAfterAction(v5, this->fields.receiveMissionIds, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__SetBtnEnable(
        MasterMissionComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dailyTabObj; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *weeklyTabObj; // x0
  UnityEngine_Collider_o *v8; // x0
  UnityEngine_GameObject_o *extraTabObj; // x0
  UnityEngine_Collider_o *v10; // x0
  UnityEngine_GameObject_o *limitedTabObj; // x0
  UnityEngine_Collider_o *v12; // x0
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Component_o *shopBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *v16; // x0
  bool v17; // w20
  UnityEngine_Collider_o *helpBtn; // x0

  if ( (byte_40FB225 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_40FB225 = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        dailyTabObj,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !Component_srcLineSprite )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled(Component_srcLineSprite, isEnable, 0LL);
  weeklyTabObj = this->fields.weeklyTabObj;
  if ( !weeklyTabObj )
    goto LABEL_17;
  v8 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   weeklyTabObj,
                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v8 )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled(v8, isEnable, 0LL);
  extraTabObj = this->fields.extraTabObj;
  if ( !extraTabObj )
    goto LABEL_17;
  v10 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    extraTabObj,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v10 )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled(v10, isEnable, 0LL);
  limitedTabObj = this->fields.limitedTabObj;
  if ( !limitedTabObj )
    goto LABEL_17;
  v12 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    limitedTabObj,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v12 )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled(v12, isEnable, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, isEnable, 0LL),
        (shopBtn = (UnityEngine_Component_o *)this->fields.shopBtn) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(shopBtn, 0LL)) == 0LL
    || (v16 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          gameObject,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (v17 = isEnable,
        UnityEngine_Collider__set_enabled(v16, v17, 0LL),
        (helpBtn = (UnityEngine_Collider_o *)this->fields.helpBtn) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(helpBtn, v17, 0LL);
}


void __fastcall MasterMissionComponent__SetDailyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v8; // x20
  System_Collections_Generic_List_EventMissionEntity__o *VaildDailyMissionData; // x0
  System_Collections_Generic_List_EventMissionEntity__o *v10; // x21
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x5
  struct MasterMissionListViewManager_array *v13; // x8
  MissionListViewManager_o *v14; // x19

  if ( (byte_40FB209 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v3);
    byte_40FB209 = 1;
  }
  EventRewardSaveData__LoadDailyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( !missionListViewManager->max_length )
    goto LABEL_15;
  v8 = missionListViewManager->m_Items[0];
  VaildDailyMissionData = MasterMissionComponent__getVaildDailyMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v10 = VaildDailyMissionData;
  System_Collections_Generic_List_int___ToArray(
    this->fields.currentEventIdList,
    (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v8, v10, v11, 0, this->fields.reDispAction, v12);
  v13 = this->fields.missionListViewManager;
  if ( !v13 )
    goto LABEL_14;
  if ( !v13->max_length )
  {
LABEL_15:
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  v14 = (MissionListViewManager_o *)v13->m_Items[0];
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v14 )
LABEL_14:
    sub_B170D4();
  MissionListViewManager__SetMode_21011360(
    v14,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetExtraMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v8; // x20
  System_Collections_Generic_List_EventMissionEntity__o *ValidExtraMissionData; // x0
  System_Collections_Generic_List_EventMissionEntity__o *v10; // x21
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x5
  struct MasterMissionListViewManager_array *v13; // x8
  MissionListViewManager_o *v14; // x19

  if ( (byte_40FB20B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v3);
    byte_40FB20B = 1;
  }
  EventRewardSaveData__LoadExtraMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 2 )
    goto LABEL_15;
  v8 = missionListViewManager->m_Items[2];
  ValidExtraMissionData = MasterMissionComponent__getValidExtraMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v10 = ValidExtraMissionData;
  System_Collections_Generic_List_int___ToArray(
    this->fields.currentEventIdList,
    (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v8, v10, v11, 2, this->fields.reDispAction, v12);
  v13 = this->fields.missionListViewManager;
  if ( !v13 )
    goto LABEL_14;
  if ( v13->max_length <= 2 )
  {
LABEL_15:
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  v14 = (MissionListViewManager_o *)v13->m_Items[2];
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v14 )
LABEL_14:
    sub_B170D4();
  MissionListViewManager__SetMode_21011360(
    v14,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetLimitedMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v8; // x20
  System_Collections_Generic_List_EventMissionEntity__o *VaildLimitedMissionData; // x0
  System_Collections_Generic_List_EventMissionEntity__o *v10; // x21
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x5
  struct MasterMissionListViewManager_array *v13; // x8
  MissionListViewManager_o *v14; // x19

  if ( (byte_40FB20C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v3);
    byte_40FB20C = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 3 )
    goto LABEL_15;
  v8 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = MasterMissionComponent__getVaildLimitedMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v10 = VaildLimitedMissionData;
  System_Collections_Generic_List_int___ToArray(
    this->fields.currentEventIdList,
    (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v8, v10, v11, 3, this->fields.reDispAction, v12);
  v13 = this->fields.missionListViewManager;
  if ( !v13 )
    goto LABEL_14;
  if ( v13->max_length <= 3 )
  {
LABEL_15:
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  v14 = (MissionListViewManager_o *)v13->m_Items[3];
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v14 )
LABEL_14:
    sub_B170D4();
  MissionListViewManager__SetMode_21011360(
    v14,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetMissionClearNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  MstMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  MstMissionEntity_array *EnableMissions; // x22
  WebViewManager_o *v10; // x0
  EventMissionMaster_o *MissionType; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  EventMissionMaster_o *v15; // x24
  unsigned int v16; // w26
  int32_t v17; // w20
  int32_t v18; // w21
  int32_t v19; // w23
  Il2CppClass **v20; // x8
  Il2CppClass *v21; // x25
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_EventMissionEntity__o *ExtraMissionList; // x0
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v26; // x3
  NoticeNumberComponent_o *weeklyClearNotice; // x0
  NoticeNumberComponent_o *extraClearNotice; // x0
  NoticeNumberComponent_o *limitedClearNotice; // x0

  if ( (byte_40FB207 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FB207 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions(MasterData_WarQuestSelectionMaster, 0LL);
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v10 )
    goto LABEL_34;
  MissionType = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v10,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_34;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v15 = MissionType;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(MissionType, v12, v13);
        sub_B170A0();
      }
      v20 = &EnableMissions->obj.klass + (int)v16;
      v21 = v20[4];
      if ( !v21 )
        break;
      MissionType = (EventMissionMaster_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v20[4], 0LL);
      switch ( (_DWORD)MissionType )
      {
        case 5:
          if ( !v15 )
            goto LABEL_34;
          ClearMasterMissionList = (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                          v15,
                                                                                          HIDWORD(v21->_1.name),
                                                                                          5,
                                                                                          0LL);
          MissionType = (EventMissionMaster_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  ClearMasterMissionList,
                                                  (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !MissionType )
            goto LABEL_34;
          if ( MissionType->fields._MasterName_k__BackingField )
          {
            MissionType = (EventMissionMaster_o *)MasterMissionComponent__GetMissionClearCount(
                                                    (MasterMissionComponent_o *)MissionType,
                                                    (EventMissionEntity_array *)MissionType,
                                                    3,
                                                    v26);
            v17 += (int)MissionType;
          }
          break;
        case 4:
          if ( !v15 )
            goto LABEL_34;
          ExtraMissionList = EventMissionMaster__getExtraMissionList(v15, HIDWORD(v21->_1.name), 0LL);
          if ( !ExtraMissionList )
            goto LABEL_34;
          MissionType = (EventMissionMaster_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ExtraMissionList,
                                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !MissionType )
            goto LABEL_34;
          if ( MissionType->fields._MasterName_k__BackingField )
          {
            MissionType = (EventMissionMaster_o *)MasterMissionComponent__GetMissionClearCount(
                                                    (MasterMissionComponent_o *)MissionType,
                                                    (EventMissionEntity_array *)MissionType,
                                                    2,
                                                    v24);
            v18 += (int)MissionType;
          }
          break;
        case 2:
          if ( !v15 )
            goto LABEL_34;
          MissionType = (EventMissionMaster_o *)EventMissionMaster__getWeeklyMasterMissionList(
                                                  v15,
                                                  HIDWORD(v21->_1.name),
                                                  0LL);
          if ( !MissionType )
            goto LABEL_34;
          if ( MissionType->fields._MasterName_k__BackingField )
          {
            MissionType = (EventMissionMaster_o *)MasterMissionComponent__GetMissionClearCount(
                                                    (MasterMissionComponent_o *)MissionType,
                                                    (EventMissionEntity_array *)MissionType,
                                                    1,
                                                    v22);
            v19 += (int)MissionType;
          }
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_B170D4();
  }
  v19 = 0;
  v18 = 0;
  v17 = 0;
LABEL_30:
  weeklyClearNotice = this->fields.weeklyClearNotice;
  if ( !weeklyClearNotice )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber(weeklyClearNotice, v19, 0LL);
  extraClearNotice = this->fields.extraClearNotice;
  if ( !extraClearNotice )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber(extraClearNotice, v18, 0LL);
  limitedClearNotice = this->fields.limitedClearNotice;
  if ( !limitedClearNotice )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber(limitedClearNotice, v17, 0LL);
}


void __fastcall MasterMissionComponent__SetMissionDisp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct MasterMissionListViewManager_array *v7; // x8
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  struct MasterMissionListViewManager_array *v10; // x8
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  struct MasterMissionListViewManager_array *v13; // x8
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  struct UICommonButton_o *shopBtn; // x0
  struct UICommonButton_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  struct MasterMissionListViewManager_array *v20; // x8
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  struct MasterMissionListViewManager_array *v23; // x8
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  struct MasterMissionListViewManager_array *v26; // x8
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  struct MasterMissionListViewManager_array *v29; // x8
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  struct UICommonButton_o *v32; // x0
  struct UICommonButton_o *v33; // x0
  const MethodInfo *v34; // x1
  struct MasterMissionListViewManager_array *v35; // x8
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  struct MasterMissionListViewManager_array *v38; // x8
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  struct MasterMissionListViewManager_array *v41; // x8
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  struct MasterMissionListViewManager_array *v44; // x8
  UnityEngine_Component_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  struct UICommonButton_o *v47; // x0
  struct UICommonButton_o *v48; // x0
  const MethodInfo *v49; // x1
  struct MasterMissionListViewManager_array *v50; // x8
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  struct MasterMissionListViewManager_array *v53; // x8
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  struct MasterMissionListViewManager_array *v56; // x8
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct MasterMissionListViewManager_array *v59; // x8
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  struct UICommonButton_o *v62; // x0
  struct UICommonButton_o *v63; // x0
  const MethodInfo *v64; // x1

  switch ( this->fields.nowType )
  {
    case 0:
      missionListViewManager = this->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_80;
      if ( !missionListViewManager->max_length )
        goto LABEL_81;
      v5 = (UnityEngine_Component_o *)missionListViewManager->m_Items[0];
      if ( !v5 )
        goto LABEL_80;
      gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( !gameObject )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v7 = this->fields.missionListViewManager;
      if ( !v7 )
        goto LABEL_80;
      if ( v7->max_length <= 1 )
        goto LABEL_81;
      v8 = (UnityEngine_Component_o *)v7->m_Items[1];
      if ( !v8 )
        goto LABEL_80;
      v9 = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( !v9 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v9, 0, 0LL);
      v10 = this->fields.missionListViewManager;
      if ( !v10 )
        goto LABEL_80;
      if ( v10->max_length <= 2 )
        goto LABEL_81;
      v11 = (UnityEngine_Component_o *)v10->m_Items[2];
      if ( !v11 )
        goto LABEL_80;
      v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !v12 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v12, 0, 0LL);
      v13 = this->fields.missionListViewManager;
      if ( !v13 )
        goto LABEL_80;
      if ( v13->max_length <= 3 )
        goto LABEL_81;
      v14 = (UnityEngine_Component_o *)v13->m_Items[3];
      if ( !v14 )
        goto LABEL_80;
      v15 = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( !v15 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v15, 0, 0LL);
      shopBtn = this->fields.shopBtn;
      if ( !shopBtn )
        goto LABEL_80;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))shopBtn->klass->vtable._5_set_isEnabled.method)(
        shopBtn,
        0LL,
        shopBtn->klass->vtable._6_OnInit.methodPtr);
      v17 = this->fields.shopBtn;
      if ( !v17 )
        goto LABEL_80;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._14_SetState.method)(
        v17,
        3LL,
        1LL,
        v17->klass->vtable._15_OnPress.methodPtr);
      MasterMissionComponent__SetDailyMissionList(this, v18);
      break;
    case 1:
      v50 = this->fields.missionListViewManager;
      if ( !v50 )
        goto LABEL_80;
      if ( !v50->max_length )
        goto LABEL_81;
      v51 = (UnityEngine_Component_o *)v50->m_Items[0];
      if ( !v51 )
        goto LABEL_80;
      v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
      if ( !v52 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v52, 0, 0LL);
      v53 = this->fields.missionListViewManager;
      if ( !v53 )
        goto LABEL_80;
      if ( v53->max_length <= 1 )
        goto LABEL_81;
      v54 = (UnityEngine_Component_o *)v53->m_Items[1];
      if ( !v54 )
        goto LABEL_80;
      v55 = UnityEngine_Component__get_gameObject(v54, 0LL);
      if ( !v55 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v55, 1, 0LL);
      v56 = this->fields.missionListViewManager;
      if ( !v56 )
        goto LABEL_80;
      if ( v56->max_length <= 2 )
        goto LABEL_81;
      v57 = (UnityEngine_Component_o *)v56->m_Items[2];
      if ( !v57 )
        goto LABEL_80;
      v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
      if ( !v58 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v58, 0, 0LL);
      v59 = this->fields.missionListViewManager;
      if ( !v59 )
        goto LABEL_80;
      if ( v59->max_length <= 3 )
        goto LABEL_81;
      v60 = (UnityEngine_Component_o *)v59->m_Items[3];
      if ( !v60 )
        goto LABEL_80;
      v61 = UnityEngine_Component__get_gameObject(v60, 0LL);
      if ( !v61 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v61, 0, 0LL);
      v62 = this->fields.shopBtn;
      if ( !v62 )
        goto LABEL_80;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v62->klass->vtable._5_set_isEnabled.method)(
        v62,
        1LL,
        v62->klass->vtable._6_OnInit.methodPtr);
      v63 = this->fields.shopBtn;
      if ( !v63 )
        goto LABEL_80;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v63->klass->vtable._14_SetState.method)(
        v63,
        0LL,
        1LL,
        v63->klass->vtable._15_OnPress.methodPtr);
      MasterMissionComponent__SetWeeklyMissionList(this, v64);
      break;
    case 2:
      v20 = this->fields.missionListViewManager;
      if ( !v20 )
        goto LABEL_80;
      if ( !v20->max_length )
        goto LABEL_81;
      v21 = (UnityEngine_Component_o *)v20->m_Items[0];
      if ( !v21 )
        goto LABEL_80;
      v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
      if ( !v22 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v22, 0, 0LL);
      v23 = this->fields.missionListViewManager;
      if ( !v23 )
        goto LABEL_80;
      if ( v23->max_length <= 1 )
        goto LABEL_81;
      v24 = (UnityEngine_Component_o *)v23->m_Items[1];
      if ( !v24 )
        goto LABEL_80;
      v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
      if ( !v25 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v25, 0, 0LL);
      v26 = this->fields.missionListViewManager;
      if ( !v26 )
        goto LABEL_80;
      if ( v26->max_length <= 2 )
        goto LABEL_81;
      v27 = (UnityEngine_Component_o *)v26->m_Items[2];
      if ( !v27 )
        goto LABEL_80;
      v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
      if ( !v28 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v28, 1, 0LL);
      v29 = this->fields.missionListViewManager;
      if ( !v29 )
        goto LABEL_80;
      if ( v29->max_length <= 3 )
        goto LABEL_81;
      v30 = (UnityEngine_Component_o *)v29->m_Items[3];
      if ( !v30 )
        goto LABEL_80;
      v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
      if ( !v31 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v31, 0, 0LL);
      v32 = this->fields.shopBtn;
      if ( !v32 )
        goto LABEL_80;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))v32->klass->vtable._5_set_isEnabled.method)(
        v32,
        0LL,
        v32->klass->vtable._6_OnInit.methodPtr);
      v33 = this->fields.shopBtn;
      if ( !v33 )
        goto LABEL_80;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._14_SetState.method)(
        v33,
        3LL,
        1LL,
        v33->klass->vtable._15_OnPress.methodPtr);
      MasterMissionComponent__SetExtraMissionList(this, v34);
      break;
    case 3:
      v35 = this->fields.missionListViewManager;
      if ( !v35 )
        goto LABEL_80;
      if ( !v35->max_length )
        goto LABEL_81;
      v36 = (UnityEngine_Component_o *)v35->m_Items[0];
      if ( !v36 )
        goto LABEL_80;
      v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
      if ( !v37 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v37, 0, 0LL);
      v38 = this->fields.missionListViewManager;
      if ( !v38 )
        goto LABEL_80;
      if ( v38->max_length <= 1 )
        goto LABEL_81;
      v39 = (UnityEngine_Component_o *)v38->m_Items[1];
      if ( !v39 )
        goto LABEL_80;
      v40 = UnityEngine_Component__get_gameObject(v39, 0LL);
      if ( !v40 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v40, 0, 0LL);
      v41 = this->fields.missionListViewManager;
      if ( !v41 )
        goto LABEL_80;
      if ( v41->max_length <= 2 )
        goto LABEL_81;
      v42 = (UnityEngine_Component_o *)v41->m_Items[2];
      if ( !v42 )
        goto LABEL_80;
      v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
      if ( !v43 )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive(v43, 0, 0LL);
      v44 = this->fields.missionListViewManager;
      if ( !v44 )
        goto LABEL_80;
      if ( v44->max_length <= 3 )
      {
LABEL_81:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v45 = (UnityEngine_Component_o *)v44->m_Items[3];
      if ( !v45
        || (v46 = UnityEngine_Component__get_gameObject(v45, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(v46, 1, 0LL), (v47 = this->fields.shopBtn) == 0LL)
        || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))v47->klass->vtable._5_set_isEnabled.method)(
              v47,
              0LL,
              v47->klass->vtable._6_OnInit.methodPtr),
            (v48 = this->fields.shopBtn) == 0LL) )
      {
LABEL_80:
        sub_B170D4();
      }
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v48->klass->vtable._14_SetState.method)(
        v48,
        3LL,
        1LL,
        v48->klass->vtable._15_OnPress.methodPtr);
      MasterMissionComponent__SetLimitedMissionList(this, v49);
      break;
    default:
      goto LABEL_79;
  }
  MasterMissionComponent__checkIsOpen(this, v19);
LABEL_79:
  MasterMissionComponent__setMissionCompleteNum(this, method);
}


void __fastcall MasterMissionComponent__SetWeeklyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v8; // x20
  System_Collections_Generic_List_EventMissionEntity__o *VaildWeeklyMissionData; // x0
  System_Collections_Generic_List_EventMissionEntity__o *v10; // x21
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x5
  struct MasterMissionListViewManager_array *v13; // x8
  MissionListViewManager_o *v14; // x19

  if ( (byte_40FB20A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v3);
    byte_40FB20A = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 1 )
    goto LABEL_15;
  v8 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = MasterMissionComponent__getVaildWeeklyMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v10 = VaildWeeklyMissionData;
  System_Collections_Generic_List_int___ToArray(
    this->fields.currentEventIdList,
    (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v8 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v8, v10, v11, 1, this->fields.reDispAction, v12);
  v13 = this->fields.missionListViewManager;
  if ( !v13 )
    goto LABEL_14;
  if ( v13->max_length <= 1 )
  {
LABEL_15:
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  v14 = (MissionListViewManager_o *)v13->m_Items[1];
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v14 )
LABEL_14:
    sub_B170D4();
  MissionListViewManager__SetMode_21011360(
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
  __int64 v4; // x4
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
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_currentCompleteMissionList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v29; // x0
  MstMissionMaster_o *v30; // x0
  MstMissionEntity_array *EnableMissions; // x23
  WebViewManager_o *v32; // x0
  UserEventMissionMaster_o *CompleteMissionList; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  int max_length; // w8
  UserEventMissionMaster_o *v37; // x25
  unsigned int v38; // w28
  int32_t v39; // w20
  MstMissionEntity_o *v40; // x24
  const MethodInfo *v41; // x3
  UserEventMissionMaster_o *v42; // x27
  int32_t CompleteMissionClearCount; // w26
  int32_t MasterName_k__BackingField; // w23
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8
  int32_t v46; // w22
  CompleteMissionSprite_o *completeMissionIconSprite; // x0
  UnityEngine_GameObject_o *completeMissionIcon; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  MasterMissionComponent_MasterMissionInfoItem_o *v53; // x25
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  struct UnityEngine_GameObject_o *cNoticeNumberPrefab; // x22
  UnityEngine_GameObject_o *v57; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  UIWidget_o *NumberBg; // x22
  NoticeNumberComponent_o *v66; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v68; // x1

  if ( (byte_40FB1F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_MstMissionMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v12);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v13);
    sub_B16FFC(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FB1F6 = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentCompleteMissionList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
  }
  else
  {
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v20,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.currentCompleteMissionList,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v29 )
    goto LABEL_47;
  v30 = (MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v29,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !v30 )
    goto LABEL_47;
  EnableMissions = MstMissionMaster__GetEnableMissions(v30, 0LL);
  v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v32 )
    goto LABEL_47;
  CompleteMissionList = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)v32,
                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_47;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v39 = 0;
  }
  else
  {
    v37 = CompleteMissionList;
    v38 = 0;
    v39 = 0;
    while ( 1 )
    {
      if ( v38 >= max_length )
        goto LABEL_48;
      v40 = EnableMissions->m_Items[v38];
      if ( !v40 )
        goto LABEL_47;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      CompleteMissionList = (UserEventMissionMaster_o *)EventMissionMaster__getCompleteMissionList(
                                                          MasterData_WarQuestSelectionMaster,
                                                          v40->fields.id,
                                                          0LL);
      if ( !CompleteMissionList )
        goto LABEL_47;
      v42 = CompleteMissionList;
      if ( CompleteMissionList->fields._MasterName_k__BackingField )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)CompleteMissionList,
                                      (EventMissionEntity_array *)CompleteMissionList,
                                      v35,
                                      v41);
        v39 += CompleteMissionClearCount;
        CompleteMissionList = (UserEventMissionMaster_o *)MstMissionEntity__isActiveNow(v40, 0LL);
        if ( ((unsigned __int8)CompleteMissionList & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v38 >= max_length )
        goto LABEL_29;
    }
    if ( !v37 )
      goto LABEL_47;
    CompleteMissionList = (UserEventMissionMaster_o *)UserEventMissionMaster__getAchiveMissionNum(
                                                        v37,
                                                        v40->fields.id,
                                                        0LL);
    MasterName_k__BackingField = (int32_t)v42->fields._MasterName_k__BackingField;
    if ( !MasterName_k__BackingField )
    {
LABEL_48:
      sub_B17100(CompleteMissionList, v34, v35);
      sub_B170A0();
    }
    list = v42->fields.list;
    if ( !list )
      goto LABEL_47;
    v46 = (int)CompleteMissionList;
    completeMissionIconSprite = this->fields.completeMissionIconSprite;
    if ( !completeMissionIconSprite )
      goto LABEL_47;
    CompleteMissionSprite__InitBtn(completeMissionIconSprite, HIDWORD(list->fields._syncRoot), 0LL);
    completeMissionIcon = this->fields.completeMissionIcon;
    if ( !completeMissionIcon )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(completeMissionIcon, 1, 0LL);
    v53 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_B170CC(
                                                              MasterMissionComponent_MasterMissionInfoItem_TypeInfo,
                                                              v49,
                                                              v50,
                                                              v51,
                                                              v52);
    MasterMissionComponent_MasterMissionInfoItem___ctor(
      v53,
      v40,
      MasterName_k__BackingField,
      CompleteMissionClearCount,
      v46,
      0LL);
    if ( !*p_currentCompleteMissionList )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_currentCompleteMissionList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
  }
LABEL_29:
  mCompleteMissionNoticeNumber = (UnityEngine_Object_o *)this->fields.mCompleteMissionNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_mCompleteMissionNoticeNumber = &this->fields.mCompleteMissionNoticeNumber;
  if ( UnityEngine_Object__op_Equality(mCompleteMissionNoticeNumber, 0LL, 0LL) )
  {
    cNoticeNumberPrefab = this->fields.cNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v57 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)cNoticeNumberPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_27425996(v57, this->fields.completeMissionNoticeRoot, 0LL);
    if ( v57 )
    {
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v57,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (NoticeNumberComponent_o *)Component_srcLineSprite;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.mCompleteMissionNoticeNumber,
        Component_srcLineSprite,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      if ( *p_mCompleteMissionNoticeNumber )
      {
        NumberBg = (UIWidget_o *)NoticeNumberComponent__GetNumberBg(*p_mCompleteMissionNoticeNumber, 0LL);
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        }
        if ( NumberBg )
        {
          UIWidget__set_depth(NumberBg, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
          UIWidget__set_width(NumberBg, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
          UIWidget__set_height(
            NumberBg,
            MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT,
            0LL);
          v66 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v66->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v66->fields.numberLabel,
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
              goto LABEL_45;
            }
          }
        }
      }
    }
LABEL_47:
    sub_B170D4();
  }
LABEL_45:
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_47;
  NoticeNumberComponent__SetNumber(*p_mCompleteMissionNoticeNumber, v39, 0LL);
  MasterMissionComponent__InitCompleteMissionLb(this, v68);
}


void __fastcall MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UISprite_o *shopBtnSp; // x20

  if ( (byte_40FB1F5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_16922, v5);
    byte_40FB1F5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone(MasterData_WarQuestSelectionMaster, 0LL);
  shopBtnSp = this->fields.shopBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_16922, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
}


bool __fastcall MasterMissionComponent__ShouldPlayedStoneButtonEffect(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t UserStoneFragmentNum; // w0
  const MethodInfo *v6; // x2
  int32_t ExchangeStoneCount; // w19

  if ( (byte_40FB22A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FB22A = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(Master_WarQuestSelectionMaster, 0LL);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, UserStoneFragmentNum, v6);
  return ExchangeStoneCount >= StoneShopMaster__GetPayMultiTimePrice(0LL);
}


void __fastcall MasterMissionComponent__StopStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectPrefab; // x20
  UnityEngine_GameObject_o **p_btnEffectPrefab; // x19
  UnityEngine_GameObject_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FB22C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB22C = 1;
  }
  btnEffectPrefab = (UnityEngine_Object_o *)this->fields.btnEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(btnEffectPrefab, 0LL, 0LL) )
  {
    p_btnEffectPrefab = &this->fields.btnEffectPrefab;
    if ( !*p_btnEffectPrefab )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0LL);
    v5 = *p_btnEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v5, 0LL);
    *p_btnEffectPrefab = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_btnEffectPrefab, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall MasterMissionComponent__UnAcceptableRewardDlg(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v5; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = missionListViewManager->m_Items[nowType];
  if ( !v5 )
LABEL_5:
    sub_B170D4();
  MasterMissionListViewManager__unAcceptableDlg(v5, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__UpdateStoneExchangeCount(
        MasterMissionComponent_o *this,
        int32_t fragmentCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  int32_t ExchangeStoneCount; // w0
  int32_t v22; // w21
  MasterMissionComponent_c *v23; // x0
  UILabel_o *stoneConvertCount; // x22
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  System_String_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v29; // w1
  System_String_o *v30; // x0
  UnityEngine_Component_o *stoneConvertLimit; // x0
  UnityEngine_Object_o *btnEffectBasePrefab; // x22
  const MethodInfo *v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  AssetLoader_LoadEndDataHandler_o *v37; // x19
  int32_t v38; // w20
  const MethodInfo *v39; // x1
  int32_t v40; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB229 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&fragmentCount);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__, v10);
    sub_B16FFC(&MasterMissionComponent___c__DisplayClass202_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_5818, v12);
    byte_40FB229 = 1;
  }
  v40 = 0;
  v13 = sub_B170CC(MasterMissionComponent___c__DisplayClass202_0_TypeInfo, *(_QWORD *)&fragmentCount, method, v3, v4);
  MasterMissionComponent___c__DisplayClass202_0___ctor((MasterMissionComponent___c__DisplayClass202_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_31;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v20);
  *(_DWORD *)(v13 + 24) = ExchangeStoneCount;
  v22 = ExchangeStoneCount;
  v23 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v23 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v23->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v22 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    v30 = System_Int32__ToString((int)v13 + 24, 0LL);
    if ( stoneConvertCount )
    {
      UILabel__set_text(stoneConvertCount, v30, 0LL);
      stoneConvertLimit = (UnityEngine_Component_o *)this->fields.stoneConvertLimit;
      if ( stoneConvertLimit )
      {
        gameObject = UnityEngine_Component__get_gameObject(stoneConvertLimit, 0LL);
        if ( gameObject )
        {
          v29 = 0;
          goto LABEL_19;
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
  if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  v40 = STONE_EXCHENGE_DISP_LIMIT;
  v26 = System_Int32__ToString((int32_t)&v40, 0LL);
  if ( !stoneConvertCount )
    goto LABEL_31;
  UILabel__set_text(stoneConvertCount, v26, 0LL);
  v27 = (UnityEngine_Component_o *)this->fields.stoneConvertLimit;
  if ( !v27 )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject(v27, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  v29 = 1;
LABEL_19:
  UnityEngine_GameObject__SetActive(gameObject, v29, 0LL);
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v37 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v33, v34, v35, v36);
    AssetLoader_LoadEndDataHandler___ctor(
      v37,
      (Il2CppObject *)v13,
      Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5818, v37, 1, 0LL);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v33);
    if ( this->fields.nowType == 1 )
    {
      v38 = *(_DWORD *)(v13 + 24);
      if ( v38 >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v39);
    }
  }
}


void __fastcall MasterMissionComponent___AcceptReward_b__186_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MasterMissionComponent__SetBtnEnable(this, 1, v2);
}


void __fastcall MasterMissionComponent___LoadNotificationEnd_b__137_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  this->fields.endFadein = 1;
}


void __fastcall MasterMissionComponent___OnClickCompleteMissionBtn_b__146_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_40FB232 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FB232 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseMasterMission(Instance, 0LL);
  MasterMissionComponent__OpenCompleteMission(this, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___OpenPresentBox_b__189_0(
        MasterMissionComponent_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  AvalonSceneManager_o *v9; // x0
  __int64 v10; // x1
  TerminalSceneComponent_c *v11; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v14; // x1
  TerminalSceneComponent_c *v15; // x0
  struct TerminalSceneComponent_o *v16; // x8
  ScrTerminalListTop_o *v17; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v19; // x8

  if ( (byte_40FB234 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, hasGetServant);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11706, v6);
    sub_B16FFC(&StringLiteral_3039, v7);
    byte_40FB234 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  v9 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v9 )
    goto LABEL_33;
  if ( !AvalonSceneManager__checkNowScene(v9, 34, 0LL) )
    goto LABEL_28;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v10);
    byte_40F6042 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v11->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_33;
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !mTerminalList )
    goto LABEL_33;
  if ( !ScrTerminalListTop__get_IsActiveBlankEarth(mTerminalList, 0LL) )
    goto LABEL_28;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v14);
    byte_40F6042 = 1;
  }
  v15 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v15 = TerminalSceneComponent_TypeInfo;
  }
  v16 = v15->static_fields->mInstance;
  if ( !v16 || (v17 = v16->fields.mTerminalList) == 0LL )
LABEL_33:
    sub_B170D4();
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v17, 1, 0LL);
LABEL_28:
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_33;
  if ( this->fields.overflowType )
    v19 = &StringLiteral_11706;
  else
    v19 = &StringLiteral_3039;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___Open_b__136_0(
        MasterMissionComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0

  if ( (byte_40FB231 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_40FB231 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_B170D4();
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___PresentBoxOver_b__188_0(
        MasterMissionComponent_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20

  if ( (byte_40FB233 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isPresentBoxOpen);
    sub_B16FFC(&Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__, v7);
    sub_B16FFC(&MasterMissionComponent___c__DisplayClass188_0_TypeInfo, v8);
    byte_40FB233 = 1;
  }
  v9 = sub_B170CC(MasterMissionComponent___c__DisplayClass188_0_TypeInfo, isPresentBoxOpen, method, v3, v4);
  MasterMissionComponent___c__DisplayClass188_0___ctor((MasterMissionComponent___c__DisplayClass188_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 24) = this,
        sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_BYTE *)(v9 + 16) = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v9,
          Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__,
          0LL),
        !presentBoxOverDialog) )
  {
    sub_B170D4();
  }
  PresentBoxOverDialog__Close_25198280(presentBoxOverDialog, v21, 0LL);
}


void __fastcall MasterMissionComponent___setRecieveModifyItem_b__192_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FB235 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5466, method);
    byte_40FB235 = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v3);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5466, 0LL);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  MstMissionDisplayInfoMaster_o *v13; // x20
  MstMissionMaster_o *mstMissionMst; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x21
  MstMissionEntity_array *EnableMissions; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct MstMissionMaster_o *v23; // x8
  _BOOL4 v24; // w22
  _BOOL4 v25; // w23
  MstMissionMaster_o *v26; // x0
  struct System_String_o **p_titleTxt; // x21
  System_Int32_array **v28; // x1
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 *v43; // x8
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_String_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_40FB1FE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_8821, v6);
    sub_B16FFC(&StringLiteral_8819, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    sub_B16FFC(&StringLiteral_8822, v9);
    sub_B16FFC(&StringLiteral_8820, v10);
    byte_40FB1FE = 1;
  }
  this->fields.isNotNext = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v13 = (MstMissionDisplayInfoMaster_o *)MasterData_WarQuestSelectionMaster;
  mstMissionMst = this->fields.mstMissionMst;
  if ( !mstMissionMst )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v13->fields.list;
  EnableMissions = MstMissionMaster__GetEnableMissions(mstMissionMst, 0LL);
  v23 = this->fields.mstMissionMst;
  if ( !v23 )
    goto LABEL_29;
  this->fields.currentType = *(&v23->fields.revision + 1);
  if ( !EnableMissions || !*(_QWORD *)&EnableMissions->max_length || MstMissionMaster__IsOpenNow(v23, 0LL) )
  {
    LOBYTE(v24) = 0;
    if ( !list )
      goto LABEL_16;
    goto LABEL_11;
  }
  v26 = this->fields.mstMissionMst;
  if ( !v26 )
LABEL_29:
    sub_B170D4();
  v24 = !MstMissionMaster__IsBefOpenTime(v26, 0LL);
  if ( !list )
    goto LABEL_16;
LABEL_11:
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1
    && !MstMissionDisplayInfoMaster__IsOpenNow(v13, 0LL) )
  {
    v25 = !MstMissionDisplayInfoMaster__IsBefOpenTime(v13, 0LL);
    goto LABEL_17;
  }
LABEL_16:
  LOBYTE(v25) = 0;
LABEL_17:
  p_titleTxt = &this->fields.titleTxt;
  v28 = (System_Int32_array **)StringLiteral_1;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.titleTxt, v28, v17, v18, v19, v20, v21, v22);
  v29 = (System_Int32_array **)StringLiteral_1;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.msgTxt, v29, v30, v31, v32, v33, v34, v35);
  if ( v24 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_8822, 0LL);
    *p_titleTxt = (struct System_String_o *)v36;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.titleTxt, v36, v37, v38, v39, v40, v41, v42);
    v43 = &StringLiteral_8821;
LABEL_27:
    v51 = LocalizationManager__Get((System_String_o *)*v43, 0LL);
    this->fields.msgTxt = v51;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.msgTxt,
      (System_Int32_array **)v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    goto LABEL_28;
  }
  if ( v25 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_8820, 0LL);
    *p_titleTxt = (struct System_String_o *)v44;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.titleTxt, v44, v45, v46, v47, v48, v49, v50);
    v43 = &StringLiteral_8819;
    goto LABEL_27;
  }
LABEL_28:
  this->fields.isNotNext = v24 || v25;
}


void __fastcall MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_B170D4();
  StandFigureBack__DestroyFigure(standFigureBack, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildDailyMissionData(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  EventMissionEntity_array *isOpenNow; // x0
  EventMissionEntity_array *v36; // x1
  __int64 v37; // x2
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v40; // w26
  Il2CppClass **v41; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x23
  System_Collections_Generic_List_int__o *v43; // x0
  struct System_Collections_Generic_List_MstMissionEntity__o *v44; // x0
  WebViewManager_o *v45; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList_QuestReleaseMaster; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  MstMissionDisplayInfoEntity_o *v56; // x0
  struct MstMissionDisplayInfoEntity_o *v57; // x24
  __int64 v58; // x9
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int32_t guideImageId; // w8
  MasterMissionComponent_c *v66; // x0
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v68; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_IEnumerator_T__c *v77; // x8
  unsigned __int64 v78; // x10
  int32_t *v79; // x11
  __int64 v80; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v83; // x10
  int v84; // w9
  int32_t missionTargetId; // w22
  __int64 v86; // x21
  __int64 v87; // x9
  __int64 v88; // x9

  if ( (byte_40FB200 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B16FFC(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v17);
    sub_B16FFC(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FB200 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_77;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  currentMstMissionEntList = this->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_77;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentMstMissionEntList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v22, v23, v24, v25, v26, v27);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_77;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= max_length )
      {
        sub_B17100(isOpenNow, v36, v37);
        sub_B170A0();
      }
      v41 = &mstMissionList->obj.klass + (int)v40;
      v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)v41[4];
      if ( !v42 )
        break;
      isOpenNow = (EventMissionEntity_array *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v41[4], 0LL);
      if ( ((unsigned __int8)isOpenNow & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        isOpenNow = EventMissionMaster__getDailyMasterMissionList(
                      MasterData_WarQuestSelectionMaster,
                      v42->fields.missionConditionDetailId,
                      0LL);
        if ( !isOpenNow )
          break;
        v36 = isOpenNow;
        if ( *(_QWORD *)&isOpenNow->max_length )
        {
          if ( !v34 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
            (System_Collections_Generic_IEnumerable_T__o *)isOpenNow,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          v43 = this->fields.currentEventIdList;
          if ( !v43 )
            break;
          System_Collections_Generic_List_int___Add(
            v43,
            v42->fields.missionConditionDetailId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          v44 = this->fields.currentMstMissionEntList;
          if ( !v44 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v44,
            v42,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v40 >= max_length )
        goto LABEL_20;
    }
LABEL_77:
    sub_B170D4();
  }
LABEL_20:
  v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v45 )
    goto LABEL_77;
  EntityList_QuestReleaseMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__getEntityList_QuestReleaseMaster_((DataManager_o *)v45, (const MethodInfo_18C34A0 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !EntityList_QuestReleaseMaster )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 EntityList_QuestReleaseMaster,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v52 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      v54 = &v52->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v54 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v55 = (__int64)&v52->vtable[*v54].method;
    }
    else
    {
LABEL_34:
      v55 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v56 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                                             Enumerator,
                                             *(_QWORD *)(v55 + 8));
    v57 = v56;
    if ( !v56 )
      goto LABEL_79;
    v58 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v56->klass->_2.bitflags2 + 1) < (unsigned int)v58
      || (MstMissionDisplayInfoEntity_c *)v56->klass->_2.typeHierarchy[v58 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_B173C8(v56);
LABEL_79:
      sub_B170D4();
    }
    if ( MstMissionDisplayInfoEntity__isOpenNow(v56, 0LL) )
    {
      guideImageId = v57->fields.guideImageId;
      if ( guideImageId <= 0 )
      {
        v66 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v66 = MasterMissionComponent_TypeInfo;
        }
        guideImageId = v66->static_fields->DEFAULT_SVT_ID;
      }
      if ( !this )
        sub_B170D4();
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v57->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v68 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v68 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v68->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v57->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      id = v57->fields.id;
      this->fields.currentMissionDispInfoEnt = v57;
      this->fields.currentDispId = id;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v57,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
    }
  }
  v77 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v78 = 0LL;
    v79 = &v77->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      ++v78;
      v79 += 4;
      if ( v78 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v80 = (__int64)&v77->vtable[*v79].method;
  }
  else
  {
LABEL_56:
    v80 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(Enumerator, *(_QWORD *)(v80 + 8));
  if ( v34 )
  {
    size = v34->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v34->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      items = v34->fields._items;
      v83 = items->m_Items[0];
      if ( !v83 )
        goto LABEL_77;
      v84 = v34->fields._size;
      missionTargetId = v83->fields.missionTargetId;
      if ( v84 >= 1 )
      {
        v86 = 4LL;
        do
        {
          if ( v84 <= (unsigned int)(v86 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v87 = *((_QWORD *)&items->obj.klass + v86);
          if ( !v87 )
            goto LABEL_77;
          if ( missionTargetId > *(_DWORD *)(v87 + 16) )
          {
            if ( v34->fields._size <= (unsigned int)(v86 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v88 = *((_QWORD *)&items->obj.klass + v86);
            if ( !v88 )
              goto LABEL_77;
            missionTargetId = *(_DWORD *)(v88 + 16);
          }
          v84 = v34->fields._size;
        }
        while ( (int)++v86 - 4 < v84 );
      }
      this->fields.currentMissionId = missionTargetId;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v34;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildLimitedMissionData(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x21
  System_Collections_Generic_List_EventMissionEntity__o *LimitedMissionList; // x0
  System_Collections_Generic_List_EventMissionEntity__o *v41; // x1
  __int64 v42; // x2
  struct MstMissionEntity_array *mstMissionList; // x26
  int max_length; // w8
  unsigned int v45; // w27
  Il2CppClass **v46; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x24
  bool isOpenNow; // w0
  int32_t missionConditionDetailId; // w1
  System_Collections_Generic_List_int__o *v50; // x0
  struct System_Collections_Generic_List_MstMissionEntity__o *v51; // x0
  System_Collections_Generic_IEnumerable_T__o *ClearMasterMissionList; // x0
  WebViewManager_o *v53; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList_QuestReleaseMaster; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v57; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  MstMissionDisplayInfoEntity_o *v64; // x0
  struct MstMissionDisplayInfoEntity_o *v65; // x25
  __int64 v66; // x9
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int32_t guideImageId; // w8
  MasterMissionComponent_c *v74; // x0
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v76; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Collections_Generic_IEnumerator_T__c *v85; // x8
  unsigned __int64 v86; // x10
  int32_t *v87; // x11
  __int64 v88; // x0
  int32_t v89; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v91; // x10
  int size; // w9
  int32_t missionTargetId; // w23
  __int64 v94; // x22
  __int64 v95; // x9
  __int64 v96; // x9

  if ( (byte_40FB203 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B16FFC(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v17);
    sub_B16FFC(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FB203 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  currentMstMissionEntList = this->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentMstMissionEntList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v22, v23, v24, v25, v26, v27);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= max_length )
      {
        sub_B17100(LimitedMissionList, v41, v42);
        sub_B170A0();
      }
      v46 = &mstMissionList->obj.klass + (int)v45;
      v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v46[4];
      if ( !v47 )
        break;
      isOpenNow = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v46[4], 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v47->fields.missionConditionDetailId;
      if ( isOpenNow )
      {
        LimitedMissionList = EventMissionMaster__getLimitedMissionList(
                               MasterData_WarQuestSelectionMaster,
                               missionConditionDetailId,
                               0LL);
        if ( LimitedMissionList )
        {
          v41 = LimitedMissionList;
          if ( LimitedMissionList->fields._size >= 1 )
          {
            if ( !v39 )
              break;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
              (System_Collections_Generic_IEnumerable_T__o *)LimitedMissionList,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            v50 = this->fields.currentEventIdList;
            if ( !v50 )
              break;
            System_Collections_Generic_List_int___Add(
              v50,
              v47->fields.missionConditionDetailId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            v51 = this->fields.currentMstMissionEntList;
            if ( !v51 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v51,
              v47,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
          }
        }
      }
      else
      {
        ClearMasterMissionList = (System_Collections_Generic_IEnumerable_T__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                  MasterData_WarQuestSelectionMaster,
                                                                                  missionConditionDetailId,
                                                                                  5,
                                                                                  0LL);
        if ( !v34 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
          ClearMasterMissionList,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B170D4();
  }
LABEL_22:
  v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v53 )
    goto LABEL_82;
  EntityList_QuestReleaseMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__getEntityList_QuestReleaseMaster_((DataManager_o *)v53, (const MethodInfo_18C34A0 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !EntityList_QuestReleaseMaster )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 EntityList_QuestReleaseMaster,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v57 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v57;
        p_offset += 4;
        if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v60 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v61 = 0LL;
      v62 = &v60->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v62 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v61;
        v62 += 4;
        if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v63 = (__int64)&v60->vtable[*v62].method;
    }
    else
    {
LABEL_36:
      v63 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v64 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(
                                             Enumerator,
                                             *(_QWORD *)(v63 + 8));
    v65 = v64;
    if ( !v64 )
      goto LABEL_84;
    v66 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v64->klass->_2.bitflags2 + 1) < (unsigned int)v66
      || (MstMissionDisplayInfoEntity_c *)v64->klass->_2.typeHierarchy[v66 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_B173C8(v64);
LABEL_84:
      sub_B170D4();
    }
    if ( MstMissionDisplayInfoEntity__isOpenNow(v64, 0LL) )
    {
      guideImageId = v65->fields.guideImageId;
      if ( guideImageId <= 0 )
      {
        v74 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v74 = MasterMissionComponent_TypeInfo;
        }
        guideImageId = v74->static_fields->DEFAULT_SVT_ID;
      }
      if ( !this )
        sub_B170D4();
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v65->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v76 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v76 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v76->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v65->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      id = v65->fields.id;
      this->fields.currentMissionDispInfoEnt = v65;
      this->fields.currentDispId = id;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v65,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
    }
  }
  v85 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v86 = 0LL;
    v87 = &v85->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      ++v86;
      v87 += 4;
      if ( v86 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_58;
    }
    v88 = (__int64)&v85->vtable[*v87].method;
  }
  else
  {
LABEL_58:
    v88 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v88)(Enumerator, *(_QWORD *)(v88 + 8));
  if ( v39 && (v89 = v39->fields._size, v89 >= 1) )
  {
    this->fields.totalMissionNum = v89;
    if ( !v39->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    items = v39->fields._items;
    v91 = items->m_Items[0];
    if ( !v91 )
      goto LABEL_82;
    size = v39->fields._size;
    if ( size >= 1 )
    {
      missionTargetId = v91->fields.missionTargetId;
      v94 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v94 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v95 = *((_QWORD *)&items->obj.klass + v94);
        if ( !v95 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v95 + 16) )
        {
          if ( v39->fields._size <= (unsigned int)(v94 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v96 = *((_QWORD *)&items->obj.klass + v94);
          if ( !v96 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v96 + 16);
        }
        size = v39->fields._size;
      }
      while ( (int)++v94 - 4 < size );
    }
    this->fields.currentMissionId = 0;
    if ( !v34 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
      (System_Collections_Generic_IEnumerable_T__o *)v39,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v34 )
      goto LABEL_82;
    if ( v34->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v34;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildWeeklyMissionData(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x21
  EventMissionEntity_array *WeeklyMasterMissionList; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v45; // w28
  Il2CppClass **v46; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x24
  bool isOpenNow; // w0
  int32_t missionConditionDetailId; // w1
  System_Collections_Generic_IEnumerable_T__o *v50; // x25
  System_Collections_Generic_List_int__o *v51; // x0
  struct System_Collections_Generic_List_MstMissionEntity__o *v52; // x0
  System_Collections_Generic_IEnumerable_T__o *ClearMasterMissionList; // x0
  WebViewManager_o *v54; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList_QuestReleaseMaster; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v58; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0
  MstMissionDisplayInfoEntity_o *v65; // x0
  struct MstMissionDisplayInfoEntity_o *v66; // x25
  __int64 v67; // x9
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  int32_t guideImageId; // w8
  MasterMissionComponent_c *v75; // x0
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v77; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Collections_Generic_IEnumerator_T__c *v86; // x8
  unsigned __int64 v87; // x10
  int32_t *v88; // x11
  __int64 v89; // x0
  int32_t v90; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v92; // x10
  int size; // w9
  int32_t missionTargetId; // w23
  __int64 v95; // x22
  __int64 v96; // x9
  __int64 v97; // x9

  if ( (byte_40FB201 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B16FFC(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v17);
    sub_B16FFC(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FB201 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  currentMstMissionEntList = this->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentMstMissionEntList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v22, v23, v24, v25, v26, v27);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= max_length )
      {
        sub_B17100(WeeklyMasterMissionList, v41, v42);
        sub_B170A0();
      }
      v46 = &mstMissionList->obj.klass + (int)v45;
      v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v46[4];
      if ( !v47 )
        break;
      isOpenNow = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v46[4], 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v47->fields.missionConditionDetailId;
      if ( isOpenNow )
      {
        WeeklyMasterMissionList = EventMissionMaster__getWeeklyMasterMissionList(
                                    MasterData_WarQuestSelectionMaster,
                                    missionConditionDetailId,
                                    0LL);
        if ( !WeeklyMasterMissionList )
          break;
        v50 = (System_Collections_Generic_IEnumerable_T__o *)WeeklyMasterMissionList;
        if ( *(_QWORD *)&WeeklyMasterMissionList->max_length )
        {
          v51 = this->fields.currentEventIdList;
          if ( !v51 )
            break;
          System_Collections_Generic_List_int___Add(
            v51,
            v47->fields.missionConditionDetailId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v39 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
            v50,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          v52 = this->fields.currentMstMissionEntList;
          if ( !v52 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52,
            v47,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      else
      {
        ClearMasterMissionList = (System_Collections_Generic_IEnumerable_T__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                  MasterData_WarQuestSelectionMaster,
                                                                                  missionConditionDetailId,
                                                                                  2,
                                                                                  0LL);
        if ( !v34 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
          ClearMasterMissionList,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B170D4();
  }
LABEL_22:
  v54 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v54 )
    goto LABEL_82;
  EntityList_QuestReleaseMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__getEntityList_QuestReleaseMaster_((DataManager_o *)v54, (const MethodInfo_18C34A0 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !EntityList_QuestReleaseMaster )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 EntityList_QuestReleaseMaster,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v58;
        p_offset += 4;
        if ( v58 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v61 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v62 = 0LL;
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v63 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v62;
        v63 += 4;
        if ( v62 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v64 = (__int64)&v61->vtable[*v63].method;
    }
    else
    {
LABEL_36:
      v64 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v65 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(
                                             Enumerator,
                                             *(_QWORD *)(v64 + 8));
    v66 = v65;
    if ( !v65 )
      goto LABEL_84;
    v67 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v65->klass->_2.bitflags2 + 1) < (unsigned int)v67
      || (MstMissionDisplayInfoEntity_c *)v65->klass->_2.typeHierarchy[v67 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_B173C8(v65);
LABEL_84:
      sub_B170D4();
    }
    if ( MstMissionDisplayInfoEntity__isOpenNow(v65, 0LL) )
    {
      guideImageId = v66->fields.guideImageId;
      if ( guideImageId <= 0 )
      {
        v75 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v75 = MasterMissionComponent_TypeInfo;
        }
        guideImageId = v75->static_fields->DEFAULT_SVT_ID;
      }
      if ( !this )
        sub_B170D4();
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v66->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v77 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v77 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v77->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v66->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      id = v66->fields.id;
      this->fields.currentMissionDispInfoEnt = v66;
      this->fields.currentDispId = id;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v66,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
    }
  }
  v86 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v87 = 0LL;
    v88 = &v86->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
    {
      ++v87;
      v88 += 4;
      if ( v87 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_58;
    }
    v89 = (__int64)&v86->vtable[*v88].method;
  }
  else
  {
LABEL_58:
    v89 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v89)(Enumerator, *(_QWORD *)(v89 + 8));
  if ( v39 && (v90 = v39->fields._size, v90 >= 1) )
  {
    this->fields.totalMissionNum = v90;
    if ( !v39->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    items = v39->fields._items;
    v92 = items->m_Items[0];
    if ( !v92 )
      goto LABEL_82;
    size = v39->fields._size;
    missionTargetId = v92->fields.missionTargetId;
    if ( size >= 1 )
    {
      v95 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v95 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v96 = *((_QWORD *)&items->obj.klass + v95);
        if ( !v96 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v96 + 16) )
        {
          if ( v39->fields._size <= (unsigned int)(v95 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v97 = *((_QWORD *)&items->obj.klass + v95);
          if ( !v97 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v97 + 16);
        }
        size = v39->fields._size;
      }
      while ( (int)++v95 - 4 < size );
    }
    this->fields.currentMissionId = missionTargetId;
    if ( !v34 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
      (System_Collections_Generic_IEnumerable_T__o *)v39,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v34 )
      goto LABEL_82;
    if ( v34->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v34;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getValidExtraMissionData(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  System_Collections_Generic_List_EventMissionEntity__o *isOpenNow; // x0
  System_Collections_Generic_List_EventMissionEntity__o *v36; // x1
  __int64 v37; // x2
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v40; // w26
  Il2CppClass **v41; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x23
  System_Collections_Generic_List_int__o *v43; // x0
  struct System_Collections_Generic_List_MstMissionEntity__o *v44; // x0
  WebViewManager_o *v45; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *EntityList_QuestReleaseMaster; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  MstMissionDisplayInfoEntity_o *v56; // x0
  struct MstMissionDisplayInfoEntity_o *v57; // x24
  __int64 v58; // x9
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int32_t guideImageId; // w8
  MasterMissionComponent_c *v66; // x0
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v68; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_IEnumerator_T__c *v77; // x8
  unsigned __int64 v78; // x10
  int32_t *v79; // x11
  __int64 v80; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v83; // x10
  int v84; // w9
  int32_t missionTargetId; // w22
  __int64 v86; // x21
  __int64 v87; // x9
  __int64 v88; // x9

  if ( (byte_40FB202 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B16FFC(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v17);
    sub_B16FFC(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FB202 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  currentMstMissionEntList = this->fields.currentMstMissionEntList;
  if ( !currentMstMissionEntList )
    goto LABEL_78;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentMstMissionEntList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v22, v23, v24, v25, v26, v27);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      if ( v40 >= max_length )
      {
        sub_B17100(isOpenNow, v36, v37);
        sub_B170A0();
      }
      v41 = &mstMissionList->obj.klass + (int)v40;
      v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)v41[4];
      if ( !v42 )
        break;
      isOpenNow = (System_Collections_Generic_List_EventMissionEntity__o *)MstMissionEntity__isOpenNow(
                                                                             (MstMissionEntity_o *)v41[4],
                                                                             0LL);
      if ( ((unsigned __int8)isOpenNow & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        isOpenNow = EventMissionMaster__getExtraMissionList(
                      MasterData_WarQuestSelectionMaster,
                      v42->fields.missionConditionDetailId,
                      0LL);
        if ( isOpenNow )
        {
          v36 = isOpenNow;
          if ( isOpenNow->fields._size >= 1 )
          {
            if ( !v34 )
              break;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
              (System_Collections_Generic_IEnumerable_T__o *)isOpenNow,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            v43 = this->fields.currentEventIdList;
            if ( !v43 )
              break;
            System_Collections_Generic_List_int___Add(
              v43,
              v42->fields.missionConditionDetailId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            v44 = this->fields.currentMstMissionEntList;
            if ( !v44 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v44,
              v42,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v40 >= max_length )
        goto LABEL_20;
    }
LABEL_78:
    sub_B170D4();
  }
LABEL_20:
  v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v45 )
    goto LABEL_78;
  EntityList_QuestReleaseMaster = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__getEntityList_QuestReleaseMaster_((DataManager_o *)v45, (const MethodInfo_18C34A0 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !EntityList_QuestReleaseMaster )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 EntityList_QuestReleaseMaster,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v52 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      v54 = &v52->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v54 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v55 = (__int64)&v52->vtable[*v54].method;
    }
    else
    {
LABEL_34:
      v55 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v56 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                                             Enumerator,
                                             *(_QWORD *)(v55 + 8));
    v57 = v56;
    if ( !v56 )
      sub_B170D4();
    v58 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v56->klass->_2.bitflags2 + 1) < (unsigned int)v58
      || (MstMissionDisplayInfoEntity_c *)v56->klass->_2.typeHierarchy[v58 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      sub_B173C8(v56);
      goto LABEL_78;
    }
    if ( MstMissionDisplayInfoEntity__isOpenNow(v56, 0LL) )
    {
      guideImageId = v57->fields.guideImageId;
      if ( guideImageId <= 0 )
      {
        v66 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v66 = MasterMissionComponent_TypeInfo;
        }
        guideImageId = v66->static_fields->DEFAULT_SVT_ID;
      }
      if ( !this )
        sub_B170D4();
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v57->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v68 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v68 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v68->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v57->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      id = v57->fields.id;
      this->fields.currentMissionDispInfoEnt = v57;
      this->fields.currentDispId = id;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v57,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
    }
  }
  v77 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v78 = 0LL;
    v79 = &v77->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      ++v78;
      v79 += 4;
      if ( v78 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v80 = (__int64)&v77->vtable[*v79].method;
  }
  else
  {
LABEL_56:
    v80 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(Enumerator, *(_QWORD *)(v80 + 8));
  if ( v34 )
  {
    size = v34->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v34->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      items = v34->fields._items;
      v83 = items->m_Items[0];
      if ( !v83 )
        goto LABEL_78;
      v84 = v34->fields._size;
      if ( v84 >= 1 )
      {
        missionTargetId = v83->fields.missionTargetId;
        v86 = 4LL;
        do
        {
          if ( v84 <= (unsigned int)(v86 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v87 = *((_QWORD *)&items->obj.klass + v86);
          if ( !v87 )
            goto LABEL_78;
          if ( missionTargetId > *(_DWORD *)(v87 + 16) )
          {
            if ( v34->fields._size <= (unsigned int)(v86 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v88 = *((_QWORD *)&items->obj.klass + v86);
            if ( !v88 )
              goto LABEL_78;
            missionTargetId = *(_DWORD *)(v88 + 16);
          }
          v84 = v34->fields._size;
        }
        while ( (int)++v86 - 4 < v84 );
      }
      this->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v34;
}


int32_t __fastcall MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t result; // w0
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_40FB1F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FB1F1 = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B170D4();
    result = ShopMaster__GetFragmentCountToExchangeForStone(Master_WarQuestSelectionMaster, 0LL);
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
    sub_B170D4();
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v12; // x8
  Il2CppObject *v13; // x20
  UserPresentBoxWindow_resData_array *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UserPresentBoxWindow_resData_array *v22; // x20
  UserPresentBoxWindow_resData_o *v23; // x8
  UserPresentBoxWindow_resData_o *v24; // x8
  UserPresentBoxWindow_resData_o *v25; // x8
  struct System_Int32_array *v26; // x1
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  UserPresentBoxWindow_resData_o *v34; // x10
  MasterMissionListViewManager_o *v35; // x21
  System_Int32_array **getCommandCodes; // x1
  System_Int32_array **receiveEventPointReward; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40FB21C & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___, result);
    sub_B16FFC(&JsonManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11043, v6);
    sub_B16FFC(&StringLiteral_11041, v7);
    sub_B16FFC(&StringLiteral_20980, v8);
    sub_B16FFC(&StringLiteral_15571, v9);
    sub_B16FFC(&StringLiteral_15807, v10);
    byte_40FB21C = 1;
  }
  if ( !result )
    goto LABEL_25;
  if ( !System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    v13 = (Il2CppObject *)System_String__Concat_43746016(
                            (System_String_o *)StringLiteral_15571,
                            result,
                            (System_String_o *)StringLiteral_15807,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v14 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            v13,
            (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( v14 )
    {
      v22 = v14;
      if ( !v14->max_length )
        goto LABEL_26;
      v23 = v14->m_Items[0];
      if ( !v23 )
        goto LABEL_25;
      this->fields.isOverPresentBox = (bool)v23->fields.getSvts;
      if ( !v14->max_length )
        goto LABEL_26;
      v24 = v14->m_Items[0];
      if ( !v24 )
        goto LABEL_25;
      this->fields.overflowType = HIDWORD(v24->fields.getSvts);
      if ( !v14->max_length )
        goto LABEL_26;
      v25 = v14->m_Items[0];
      if ( !v25 )
        goto LABEL_25;
      v26 = *(struct System_Int32_array **)&v25->fields.overflowType;
      this->fields.receiveMissionIds = v26;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.receiveMissionIds,
        (System_Int32_array **)v26,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      missionListViewManager = this->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_25;
      nowType = this->fields.nowType;
      if ( (unsigned int)nowType >= missionListViewManager->max_length || !v22->max_length )
      {
LABEL_26:
        sub_B17100(v14, v15, v16);
        sub_B170A0();
      }
      v34 = v22->m_Items[0];
      if ( v34 )
      {
        v35 = missionListViewManager->m_Items[nowType];
        if ( v35 )
        {
          getCommandCodes = (System_Int32_array **)v34->fields.getCommandCodes;
          receiveEventPointReward = (System_Int32_array **)v34->fields.receiveEventPointReward;
          v35->fields.getSvtList = (struct GetSvts_array *)getCommandCodes;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v35->fields.getSvtList,
            getCommandCodes,
            v16,
            v27,
            v28,
            v29,
            v30,
            v31);
          v35->fields.getCommandCodeList = (struct GetCommandCodes_array *)receiveEventPointReward;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v35->fields.getCommandCodeList,
            receiveEventPointReward,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
          myFsm = this->fields.myFsm;
          if ( myFsm )
          {
            v12 = &StringLiteral_11043;
            goto LABEL_24;
          }
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_25;
  v12 = &StringLiteral_11041;
LABEL_24:
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v12, 0LL);
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool _28023340; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v14; // x23

  if ( (byte_40FB210 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, voiceIDs);
    sub_B16FFC(&Method_MasterMissionComponent_setNormalFace__, v5);
    sub_B16FFC(&TutorialFlag_TypeInfo, v6);
    byte_40FB210 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28023340 = TutorialFlag__Get_28023340(126, 0LL);
  if ( voiceIDs && !_28023340 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
    if ( !svtVoiceCtr )
      sub_B170D4();
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v14, 0LL);
  }
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice_27290276(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool _28023340; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v31; // x20

  if ( (byte_40FB211 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, voiceIDs);
    sub_B16FFC(&TutorialFlag_TypeInfo, v8);
    sub_B16FFC(&Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__, v9);
    sub_B16FFC(&MasterMissionComponent___c__DisplayClass171_0_TypeInfo, v10);
    byte_40FB211 = 1;
  }
  v11 = sub_B170CC(MasterMissionComponent___c__DisplayClass171_0_TypeInfo, voiceIDs, action, method, v4);
  MasterMissionComponent___c__DisplayClass171_0___ctor((MasterMissionComponent___c__DisplayClass171_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = action;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)action, v18, v19, v20, v21, v22, v23);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28023340 = TutorialFlag__Get_28023340(126, 0LL);
  if ( voiceIDs && !_28023340 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v11,
      Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__,
      0LL);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v31, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__playSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x8
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Transform_o *transform; // x20
  int v17; // s0
  UnityEngine_GameObject_o *v20; // x0
  UITweener_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *v22; // x0
  UITweener_o *v23; // x0
  EventSvtControl_o *svtVoiceCtr; // x20
  System_Action_o *v25; // x21

  if ( (byte_40FB20F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5);
    sub_B16FFC(&Method_MasterMissionComponent_setNormalFace__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FB20F = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    voiceListRand = this->fields.voiceListRand;
    if ( !voiceListRand )
      goto LABEL_19;
    if ( voiceListRand->fields._size >= 1 )
    {
      voicePlayEffect = this->fields.voicePlayEffect;
      if ( !voicePlayEffect )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive(voicePlayEffect, 1, 0LL);
      v15 = this->fields.voicePlayEffect;
      if ( !v15 )
        goto LABEL_19;
      transform = UnityEngine_GameObject__get_transform(v15, 0LL);
      *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform
        || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v17, 0LL),
            (v20 = this->fields.voicePlayEffect) == 0LL)
        || (Component_srcLineSprite = (UITweener_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v20,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0LL
        || (UITweener__set_tweenFactor(Component_srcLineSprite, 0.0, 0LL), (v22 = this->fields.voicePlayEffect) == 0LL)
        || (v23 = (UITweener_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v22,
                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0LL )
      {
LABEL_19:
        sub_B170D4();
      }
      UITweener__set_tweenFactor(v23, 0.0, 0LL);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_19;
  EventSvtControl__playVoice(svtVoiceCtr, v25, 0LL);
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
  TerminalSceneComponent_c *v17; // x0
  WebViewManager_o *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v25; // x21
  MasterMissionComponent___c_c *v26; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__150_0; // x22
  Il2CppObject *v29; // x23
  struct MasterMissionComponent___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct MstMissionDisplayInfoEntity_o *currentMissionDispInfoEnt; // x8
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x24
  __int64 size; // x21
  int64_t v40; // x20
  __int64 v41; // x22
  unsigned __int64 v42; // x23
  struct System_Collections_Generic_List_MstMissionEntity__o *v43; // x24
  MstMissionEntity_o *v44; // x0
  int32_t MissionType; // w0
  struct System_Collections_Generic_List_MstMissionEntity__o *v46; // x24
  __int64 v47; // x8
  int64_t v48; // x8
  __int64 v49; // x8
  int v50; // w21
  struct System_String_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct System_String_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct MstMissionDisplayInfoEntity_o *v65; // x8
  int v66; // w8
  __int64 *v67; // x8
  struct System_String_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 *v75; // x8
  struct System_String_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  bool v83; // w9

  if ( (byte_40FB1FF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v9);
    sub_B16FFC(&Method_MasterMissionComponent___c__reDispMissionList_b__150_0__, v10);
    sub_B16FFC(&MasterMissionComponent___c_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_8821, v12);
    sub_B16FFC(&StringLiteral_8819, v13);
    sub_B16FFC(&StringLiteral_8822, v14);
    sub_B16FFC(&StringLiteral_8820, v15);
    byte_40FB1FF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( this->fields.isNotNext )
    goto LABEL_8;
  currentMissionDispInfoEnt = this->fields.currentMissionDispInfoEnt;
  if ( currentMissionDispInfoEnt )
  {
    currentMstMissionEntList = this->fields.currentMstMissionEntList;
    if ( !currentMstMissionEntList )
      goto LABEL_82;
    size = currentMstMissionEntList->fields._size;
    v40 = Time;
    if ( (int)size < 1 )
    {
LABEL_51:
      v50 = 0;
    }
    else
    {
      v41 = 4LL;
      while ( 1 )
      {
        v42 = v41 - 4;
        if ( v41 - 4 >= (unsigned __int64)(unsigned int)currentMstMissionEntList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( *((_QWORD *)&currentMstMissionEntList->fields._items->obj.klass + v41) )
        {
          v43 = this->fields.currentMstMissionEntList;
          if ( !v43 )
            goto LABEL_82;
          if ( v42 >= (unsigned int)v43->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v44 = (MstMissionEntity_o *)*((_QWORD *)&v43->fields._items->obj.klass + v41);
          if ( !v44 )
            goto LABEL_82;
          MissionType = MstMissionEntity__getMissionType(v44, 0LL);
          v46 = this->fields.currentMstMissionEntList;
          if ( MissionType == 5 )
          {
            if ( !v46 )
              goto LABEL_82;
            if ( v42 >= (unsigned int)v46->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v47 = *((_QWORD *)&v46->fields._items->obj.klass + v41);
            if ( !v47 )
              goto LABEL_82;
            v48 = *(_QWORD *)(v47 + 40);
          }
          else
          {
            if ( !v46 )
              goto LABEL_82;
            if ( v42 >= (unsigned int)v46->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v49 = *((_QWORD *)&v46->fields._items->obj.klass + v41);
            if ( !v49 )
              goto LABEL_82;
            v48 = *(_QWORD *)(v49 + 32);
          }
          if ( v40 >= v48 )
            break;
        }
        if ( v41 - 3 >= size )
          goto LABEL_51;
        currentMstMissionEntList = this->fields.currentMstMissionEntList;
        ++v41;
        if ( !currentMstMissionEntList )
          goto LABEL_82;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_8822, 0LL);
      this->fields.titleTxt = v51;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.titleTxt,
        (System_Int32_array **)v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      v58 = LocalizationManager__Get((System_String_o *)StringLiteral_8821, 0LL);
      this->fields.msgTxt = v58;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.msgTxt,
        (System_Int32_array **)v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      v50 = 1;
    }
    v65 = this->fields.currentMissionDispInfoEnt;
    if ( !v65 )
      goto LABEL_82;
    if ( v40 >= v65->fields.endedAt )
    {
      if ( (v50 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v67 = &StringLiteral_8822;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v67 = &StringLiteral_8820;
      }
      v68 = LocalizationManager__Get((System_String_o *)*v67, 0LL);
      this->fields.titleTxt = v68;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.titleTxt,
        (System_Int32_array **)v68,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74);
      if ( (v50 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v75 = &StringLiteral_8821;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v75 = &StringLiteral_8819;
      }
      v76 = LocalizationManager__Get((System_String_o *)*v75, 0LL);
      this->fields.msgTxt = v76;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.msgTxt,
        (System_Int32_array **)v76,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      v66 = 1;
    }
    else
    {
      v66 = 0;
    }
    v83 = (v66 | v50) != 0;
    LODWORD(currentMissionDispInfoEnt) = this->fields.isNotNext;
    if ( v83 )
      goto LABEL_8;
  }
  if ( (_DWORD)currentMissionDispInfoEnt )
  {
LABEL_8:
    if ( !this->fields.isOpenOverDlg && this->fields.currentType != 2 )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
      this->fields.isOpenOverDlg = 1;
      v17 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v17 = TerminalSceneComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__DeleteKey(v17->static_fields->MASTER_MISSION_RESET_KEY, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      titleTxt = this->fields.titleTxt;
      msgTxt = this->fields.msgTxt;
      v25 = (CommonUI_o *)Instance;
      v26 = MasterMissionComponent___c_TypeInfo;
      if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
        v26 = MasterMissionComponent___c_TypeInfo;
      }
      static_fields = v26->static_fields;
      _9__150_0 = static_fields->__9__150_0;
      if ( !_9__150_0 )
      {
        if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
        }
        v29 = (Il2CppObject *)static_fields->__9;
        _9__150_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
        System_Action___ctor(_9__150_0, v29, Method_MasterMissionComponent___c__reDispMissionList_b__150_0__, 0LL);
        v30 = MasterMissionComponent___c_TypeInfo->static_fields;
        v30->__9__150_0 = _9__150_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v30->__9__150_0,
          (System_Int32_array **)_9__150_0,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      if ( v25 )
      {
        CommonUI__OpenNotificationDialog(v25, titleTxt, msgTxt, _9__150_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
        return;
      }
LABEL_82:
      sub_B170D4();
    }
  }
}


void __fastcall MasterMissionComponent__setCurrentSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x21
  unsigned int size; // w8
  __int64 currentIdx; // x22
  EventSvtControl_o *svtVoiceCtr; // x20
  MasterMissionComponent_VoiceData_o *v8; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v9; // x22
  __int64 v10; // x23
  System_Collections_Generic_List_ServantVoiceData____o *DataListRand; // x21
  MasterMissionComponent_VoiceData_o *v12; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v13; // x23
  __int64 v14; // x24
  System_Collections_Generic_List_ServantVoiceData____o *DataListMission; // x22
  MasterMissionComponent_VoiceData_o *v16; // x8
  System_String_o *DataName; // x23
  int32_t SvtVoiceId; // w0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct StandFigureBack_o *standFigureBack; // x8
  struct EventSvtControl_o *v26; // x0
  System_Int32_array **standFigureCollectList; // x1
  const MethodInfo *v28; // x1

  if ( (byte_40FB20E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__, v3);
    byte_40FB20E = 1;
  }
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( !currentVoiceDataList )
    goto LABEL_21;
  size = currentVoiceDataList->fields._size;
  if ( size )
  {
    currentIdx = this->fields.currentIdx;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    if ( size <= (unsigned int)currentIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = currentVoiceDataList->fields._items->m_Items[currentIdx];
    if ( v8 )
    {
      v9 = this->fields.currentVoiceDataList;
      if ( v9 )
      {
        v10 = this->fields.currentIdx;
        DataListRand = v8->fields.DataListRand;
        if ( v9->fields._size <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v12 = v9->fields._items->m_Items[v10];
        if ( v12 )
        {
          v13 = this->fields.currentVoiceDataList;
          if ( v13 )
          {
            v14 = this->fields.currentIdx;
            DataListMission = v12->fields.DataListMission;
            if ( v13->fields._size <= (unsigned int)v14 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v16 = v13->fields._items->m_Items[v14];
            if ( v16 )
            {
              DataName = v16->fields.DataName;
              SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(this->fields.currentEventSvtId, 0LL);
              if ( svtVoiceCtr )
              {
                EventSvtControl__setSvtVoice(svtVoiceCtr, DataListRand, DataListMission, 0LL, DataName, SvtVoiceId, 0LL);
                standFigureBack = this->fields.standFigureBack;
                if ( standFigureBack )
                {
                  v26 = this->fields.svtVoiceCtr;
                  if ( v26 )
                  {
                    standFigureCollectList = (System_Int32_array **)standFigureBack->fields.standFigureCollectList;
                    v26->fields.standFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)standFigureCollectList;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v26->fields.standFigureCollectList,
                      standFigureCollectList,
                      v19,
                      v20,
                      v21,
                      v22,
                      v23,
                      v24);
                    MasterMissionComponent__playSvtVoice(this, v28);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v22; // x0
  ServantVoiceMaster_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_voiceListRand; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int32_t currentEventSvtId; // w0
  int32_t SvtVoiceId; // w0
  ServantVoiceEntity_o *Entity; // x0
  const MethodInfo *v50; // x1
  ServantVoiceEntity_o *v51; // x22
  struct System_String_o *VoiceAssetName; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *MstMissionVoiceListByName; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  struct System_String_array *voiceNameList; // x23
  __int64 v63; // x8
  unsigned __int64 v64; // x24
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  MasterMissionComponent_VoiceData_o *v79; // x22
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v80; // x0
  int32_t size; // w8
  Il2CppObject *current; // x21
  WebViewManager_o *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  SoundManager_o *v88; // x20
  System_String_o *klass; // x21
  System_Action_o *v90; // x22
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+0h] [xbp-60h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FB205 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, v13);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo, v15);
    sub_B16FFC(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v18);
    sub_B16FFC(&MasterMissionComponent_VoiceData_TypeInfo, v19);
    byte_40FB205 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  memset(&v91, 0, sizeof(v91));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v22 )
    goto LABEL_31;
  v23 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v22,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentVoiceDataList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceListRand,
    (System_Int32_array **)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  currentEventSvtId = this->fields.currentEventSvtId;
  this->fields.downLoadCnt = 0;
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(currentEventSvtId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  ServantLimitAddMaster__getVoiceIndex(
    MasterData_WarQuestSelectionMaster,
    &voicePrefix[1],
    voicePrefix,
    SvtVoiceId,
    this->fields.currentEventSvtLimitCnt,
    0LL);
  if ( !v23 )
    goto LABEL_31;
  Entity = ServantVoiceMaster__GetEntity(v23, voicePrefix[1], voicePrefix[0], 8, 0LL);
  if ( !Entity )
    goto LABEL_19;
  v51 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0LL);
  this->fields.lastAssetName = VoiceAssetName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lastAssetName,
    (System_Int32_array **)VoiceAssetName,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    v63 = *(_QWORD *)&voiceNameList->max_length;
    if ( v63 )
    {
      if ( (int)v63 >= 1 )
      {
        v64 = 0LL;
        do
        {
          if ( v64 >= (unsigned int)v63 )
          {
            sub_B17100(MstMissionVoiceListByName, v60, v61);
            sub_B170A0();
          }
          MstMissionVoiceListByName = (EventMissionProgressRequest_Argument_ProgressData_o *)ServantVoiceEntity__getMstMissionVoiceListByName(
                                                                                               v51,
                                                                                               voiceNameList->m_Items[v64],
                                                                                               0LL);
          if ( MstMissionVoiceListByName )
          {
            if ( !*p_voiceListRand )
              goto LABEL_31;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              *p_voiceListRand,
              MstMissionVoiceListByName,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
          LODWORD(v63) = voiceNameList->max_length;
          ++v64;
        }
        while ( (__int64)v64 < (int)v63 );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v51, 0LL);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceListMission,
    (System_Int32_array **)MasterMissionActionVoiceList,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  currentVoiceDataList = this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v79 = (MasterMissionComponent_VoiceData_o *)sub_B170CC(MasterMissionComponent_VoiceData_TypeInfo, v75, v76, v77, v78);
  MasterMissionComponent_VoiceData___ctor(v79, VoiceAssetName, voiceListRand, voiceListMission, 0LL);
  if ( !currentVoiceDataList )
LABEL_31:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentVoiceDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__);
LABEL_19:
  v80 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !v80 )
    goto LABEL_31;
  size = v80->fields._size;
  this->fields.downLoadCnt = size;
  if ( size <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, v50);
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v91,
      v80,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v91,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v91.fields.current;
      v83 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_B170D4();
      v88 = (SoundManager_o *)v83;
      klass = (System_String_o *)current[1].klass;
      v90 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v84, v85, v86, v87);
      System_Action___ctor(v90, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0LL);
      if ( !v88 )
        sub_B170D4();
      SoundManager__LoadAudioAssetStorage(v88, klass, v90, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v91,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x24
  signed __int64 size; // x21
  int32_t compMissionNum; // w22
  UserEventMissionMaster_o *v15; // x20
  unsigned __int64 v16; // x23
  int32_t AchiveMissionNum; // w0
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  UnityEngine_GameObject_o *eventMissionInfo2; // x0
  UILabel_o *eventMissionTxt2; // x21
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UILabel_o *v25; // x19
  UnityEngine_GameObject_o *v26; // x0
  UILabel_o *eventMissionTxt; // x21
  Il2CppObject *v28; // x22
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB204 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_8609, v9);
    byte_40FB204 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_28;
  size = currentEventIdList->fields._size;
  if ( (int)size >= 1 )
  {
    compMissionNum = this->fields.compMissionNum;
    v15 = (UserEventMissionMaster_o *)MasterData_WarQuestSelectionMaster;
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)currentEventIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v15 )
        break;
      AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(
                           v15,
                           currentEventIdList->fields._items->m_Items[++v16],
                           0LL);
      compMissionNum += AchiveMissionNum;
      this->fields.compMissionNum = compMissionNum;
      if ( (__int64)v16 >= size )
        goto LABEL_13;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_28:
    sub_B170D4();
  }
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8609, 0LL);
  if ( !this->fields.eventMissionInfo )
    goto LABEL_28;
  v19 = v18;
  if ( this->fields.nowType )
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 0, 0LL);
    eventMissionInfo2 = this->fields.eventMissionInfo2;
    if ( !eventMissionInfo2 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(eventMissionInfo2, 1, 0LL);
    eventMissionTxt2 = this->fields.eventMissionTxt2;
    v32 = this->fields.compMissionNum;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    totalMissionNum = this->fields.totalMissionNum;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    v24 = System_String__Format_43739268(v19, v22, v23, 0LL);
    if ( !eventMissionTxt2 )
      goto LABEL_28;
    UILabel__set_text(eventMissionTxt2, v24, 0LL);
    v25 = this->fields.eventMissionTxt2;
    if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    }
    if ( !v25 )
      goto LABEL_28;
    UILabel__SetCondensedScale_40440812(
      v25,
      MasterMissionComponent_TypeInfo->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH,
      0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 1, 0LL);
    v26 = this->fields.eventMissionInfo2;
    if ( !v26 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(v26, 0, 0LL);
    eventMissionTxt = this->fields.eventMissionTxt;
    v32 = this->fields.compMissionNum;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    totalMissionNum = this->fields.totalMissionNum;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    v30 = System_String__Format_43739268(v19, v28, v29, 0LL);
    if ( !eventMissionTxt )
      goto LABEL_28;
    UILabel__set_text(eventMissionTxt, v30, 0LL);
  }
}


void __fastcall MasterMissionComponent__setMySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x19
  int32_t currentEventSvtId; // w20

  if ( (byte_40FB20D & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionComponent_TypeInfo, method);
    byte_40FB20D = 1;
  }
  standFigureBack = this->fields.standFigureBack;
  currentEventSvtId = this->fields.currentEventSvtId;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !standFigureBack )
    sub_B170D4();
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
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  StandFigureBack_o *standFigureBack; // x0

  if ( (byte_40FB212 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB212 = 1;
  }
  this->fields.isVoicePlaying = 0;
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL) )
  {
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( !voicePlayEffect )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(voicePlayEffect, 0, 0LL);
  }
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
LABEL_11:
    sub_B170D4();
  StandFigureBack__SetFaceType(standFigureBack, 0, 0.0, 0, 0LL);
}


void __fastcall MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v7; // x0
  __int64 v8; // x3
  __int64 v9; // x4
  struct MasterMissionListViewManager_array *v10; // x8
  __int64 v11; // x9
  MissionListViewManager_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x1

  v3 = this;
  if ( (byte_40FB223 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_B16FFC(&Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__, v4);
    byte_40FB223 = 1;
  }
  missionListViewManager = v3->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_10;
  nowType = v3->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_11;
  v7 = missionListViewManager->m_Items[nowType];
  if ( !v7
    || (MasterMissionListViewManager__ModifyItem(v7, v3->fields.receiveMissionIds, v2),
        (v10 = v3->fields.missionListViewManager) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v11 = v3->fields.nowType;
  if ( (unsigned int)v11 >= v10->max_length )
  {
LABEL_11:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v12 = (MissionListViewManager_o *)v10->m_Items[v11];
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)v3, Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__, 0LL);
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
    sub_B170D4();
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MasterMissionComponent_ClickDelegate__BeginInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_40F695C & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F695C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent_ClickDelegate__Invoke(
        MasterMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  MasterMissionComponent_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  MasterMissionComponent_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  MasterMissionComponent_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (MasterMissionComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._MstMissionEntity_k__BackingField = mstMission;
  v10 = (MasterMissionComponent_MasterMissionInfoItem_o *)((char *)v10 + 16);
  sub_B16F98((BattleServantConfConponent_o *)v10, (System_Int32_array **)mstMission, v11, v12, v13, v14, v15, v16);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MstMissionEntity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MasterMissionComponent_VoiceData___ctor(
        MasterMissionComponent_VoiceData_o *this,
        System_String_o *voiceDataName,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListRand,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListMission,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.DataName = voiceDataName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)voiceDataName,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.DataListRand = voiceDataListRand;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.DataListRand,
    (System_Int32_array **)voiceDataListRand,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.DataListMission = voiceDataListMission;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.DataListMission,
    (System_Int32_array **)voiceDataListMission,
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6953 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionComponent___c_TypeInfo, v1);
    byte_40F6953 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MasterMissionComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MasterMissionComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall MasterMissionComponent___c___ctor(MasterMissionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c___ExitCompleteMission_b__147_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  CommonUI_o *v5; // x19
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v9; // x1
  TerminalSceneComponent_c *v10; // x0
  struct TerminalSceneComponent_o *v11; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x0

  if ( (byte_40F6955 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v3);
    byte_40F6955 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  v5 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v5 )
    goto LABEL_25;
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v6);
    byte_40F6042 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v7->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_25;
  TerminalSceneComponent__playBgm_19157196(mInstance, 0LL);
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v9);
    byte_40F6042 = 1;
  }
  v10 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  v11 = v10->static_fields->mInstance;
  if ( !v11 || (mPlayerStatus = v11->fields.mPlayerStatus) == 0LL )
LABEL_25:
    sub_B170D4();
  ScrPlayerStatus__OpenMasterMission(mPlayerStatus, 0LL, -1, 0LL);
}


void __fastcall MasterMissionComponent___c___OnClickCompleteMissionBtn_b__146_1(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterMissionComponent___c___OnClickShopBtn_b__174_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  SceneJumpInfo_o *v10; // x19
  AvalonSceneManager_o *v11; // x0

  if ( (byte_40F6957 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_13021, v4);
    byte_40F6957 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission(Instance, 0LL),
        v10 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v6, v7, v8, v9),
        SceneJumpInfo___ctor_29747932(v10, (System_String_o *)StringLiteral_13021, 0LL),
        !v10)
    || (SceneJumpInfo__SetReturnNowScene(v10, 0LL),
        (v11 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AvalonSceneManager__transitionScene(v11, 22, 1, (Il2CppObject *)v10, 0LL);
}


void __fastcall MasterMissionComponent___c___OpenCompleteMission_b__145_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_40F6954 & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6954 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance )
    sub_B170D4();
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0LL);
}


void __fastcall MasterMissionComponent___c___reDispMissionList_b__150_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0

  if ( (byte_40F6956 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_40F6956 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  ManagementManager__reboot(Instance, 1, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass171_0___ctor(
        MasterMissionComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass171_0___playEventMissionSvtVoice_b__0(
        MasterMissionComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent_o *_4__this; // x0
  System_Action_o *action; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (MasterMissionComponent__setNormalFace(_4__this, 0LL), (action = this->fields.action) == 0LL) )
    sub_B170D4();
  System_Action__Invoke(action, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass181_0___ctor(
        MasterMissionComponent___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___c__DisplayClass181_0___BulkReceiveConfirm_b__0(
        MasterMissionComponent___c__DisplayClass181_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct MasterMissionComponent_o *_4__this; // x8
  System_Collections_Generic_List_int__o *v17; // x20
  struct System_Collections_Generic_List_MasterMissionListViewItem__o *items; // x0
  int32_t MissionId; // w1
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v21; // x8
  struct MasterMissionComponent_o *v22; // x21
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct MasterMissionComponent_o *v30; // x8
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F6958 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__, isDecide);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&StringLiteral_3045, v14);
    sub_B16FFC(&StringLiteral_3039, v15);
    byte_40F6958 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      isDecide,
                                                      method,
                                                      v3,
                                                      v4);
    System_Collections_Generic_List_int____ctor(
      v17,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    items = this->fields.items;
    if ( items )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v31,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)items,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v32 = v31;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v32,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__) )
      {
        if ( !v32.fields.current )
          sub_B170D4();
        MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v32.fields.current, 0LL);
        if ( !v17 )
          sub_B170D4();
        System_Collections_Generic_List_int___Add(
          v17,
          MissionId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v32,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v17 )
      {
        v22 = this->fields.__4__this;
        v23 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                       v17,
                                       (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v22 )
        {
          v22->fields.sendMissionIds = (struct System_Int32_array *)v23;
          sub_B16F98((BattleServantConfConponent_o *)&v22->fields.sendMissionIds, v23, v24, v25, v26, v27, v28, v29);
          v30 = this->fields.__4__this;
          if ( v30 )
          {
            myFsm = v30->fields.myFsm;
            if ( myFsm )
            {
              v21 = &StringLiteral_3045;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
  myFsm = _4__this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_21;
  v21 = &StringLiteral_3039;
LABEL_18:
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v21, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ctor(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__0(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct MasterMissionComponent_o *_4__this; // x8
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v7; // x8

  if ( (byte_40F6959 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11706, method);
    sub_B16FFC(&StringLiteral_10460, v3);
    sub_B16FFC(&StringLiteral_3039, v4);
    byte_40F6959 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  myFsm = _4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( myFsm )
    {
      v7 = &StringLiteral_10460;
      goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
  if ( !myFsm )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v7 = &StringLiteral_11706;
  else
    v7 = &StringLiteral_3039;
LABEL_11:
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v7, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__1(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *nextAction; // x0

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_B170D4();
  System_Action__Invoke(nextAction, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__2(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *nextAction; // x0

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_B170D4();
  System_Action__Invoke(nextAction, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass188_0___ctor(
        MasterMissionComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass188_0___PresentBoxOver_b__1(
        MasterMissionComponent___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct MasterMissionComponent_o *_4__this; // x0
  __int64 *v5; // x9

  if ( (byte_40F695A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11706, method);
    sub_B16FFC(&StringLiteral_3039, v3);
    byte_40F695A = 1;
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
    sub_B170D4();
  if ( _4__this->fields.overflowType )
    v5 = &StringLiteral_11706;
  else
    v5 = &StringLiteral_3039;
  PlayMakerFSM__SendEvent(_4__this->fields.myFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass202_0___ctor(
        MasterMissionComponent___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass202_0___UpdateStoneExchangeCount_b__0(
        MasterMissionComponent___c__DisplayClass202_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct MasterMissionComponent_o *_4__this; // x21
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  MasterMissionComponent_o *v14; // x0
  struct MasterMissionComponent_o *v15; // x8
  int32_t exchangeCount; // w20
  MasterMissionComponent_o *v17; // x0

  if ( (byte_40F695B & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v5);
    byte_40F695B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !assetData )
    goto LABEL_15;
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            assetData,
                                                            MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
                                                            (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.btnEffectBasePrefab,
    Object_WarBoardWaitTimeSetting,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_15;
  MasterMissionComponent__StopStoneButtonEffect(v14, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_15;
  if ( v15->fields.nowType == 1 )
  {
    exchangeCount = this->fields.exchangeCount;
    if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
    {
      v17 = this->fields.__4__this;
      if ( v17 )
      {
        MasterMissionComponent__PlayStoneButtonEffect(v17, 0LL);
        return;
      }
LABEL_15:
      sub_B170D4();
    }
  }
}


void __fastcall MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}