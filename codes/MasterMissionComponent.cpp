void __fastcall MasterMissionComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  MasterMissionComponent_c *v7; // x8
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1
  struct MasterMissionComponent_StaticFields *v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct MasterMissionComponent_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct MasterMissionComponent_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct MasterMissionComponent_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct MasterMissionComponent_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct MasterMissionComponent_StaticFields *v50; // x0
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct MasterMissionComponent_StaticFields *v58; // x0
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct MasterMissionComponent_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  MasterMissionComponent_c *v74; // x8
  struct MasterMissionComponent_StaticFields *v75; // x8

  if ( (byte_43522A2 & 1) == 0 )
  {
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&StringLiteral_17322/*"btn_txt_off_limited"*/);
    sub_B70694(&StringLiteral_17321/*"btn_txt_off_extra"*/);
    sub_B70694(&StringLiteral_17328/*"btn_txt_on_limited"*/);
    sub_B70694(&StringLiteral_18445/*"ef_btn_blink"*/);
    sub_B70694(&StringLiteral_17320/*"btn_txt_off_daily"*/);
    sub_B70694(&StringLiteral_17326/*"btn_txt_on_daily"*/);
    sub_B70694(&StringLiteral_17329/*"btn_txt_on_weekly"*/);
    sub_B70694(&StringLiteral_17323/*"btn_txt_off_weekly"*/);
    sub_B70694(&StringLiteral_17327/*"btn_txt_on_extra"*/);
    byte_43522A2 = 1;
  }
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID = 9000001;
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_LIMITCNT = 0;
  v7 = MasterMissionComponent_TypeInfo;
  MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_17326/*"btn_txt_on_daily"*/;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17326/*"btn_txt_on_daily"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v9, v1, v2, v3, v4, v5, v6);
  v10 = MasterMissionComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_17320/*"btn_txt_off_daily"*/;
  v10->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17320/*"btn_txt_off_daily"*/;
  sub_B70630((BattleServantConfConponent_o *)&v10->DAILY_OFF_SPRITE_LABEL, v11, v12, v13, v14, v15, v16, v17);
  v18 = MasterMissionComponent_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_17329/*"btn_txt_on_weekly"*/;
  v18->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17329/*"btn_txt_on_weekly"*/;
  sub_B70630((BattleServantConfConponent_o *)&v18->WEEKLY_ON_SPRITE_LABEL, v19, v20, v21, v22, v23, v24, v25);
  v26 = MasterMissionComponent_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_17323/*"btn_txt_off_weekly"*/;
  v26->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17323/*"btn_txt_off_weekly"*/;
  sub_B70630((BattleServantConfConponent_o *)&v26->WEEKLY_OFF_SPRITE_LABEL, v27, v28, v29, v30, v31, v32, v33);
  v34 = MasterMissionComponent_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_17327/*"btn_txt_on_extra"*/;
  v34->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17327/*"btn_txt_on_extra"*/;
  sub_B70630((BattleServantConfConponent_o *)&v34->EXTRA_ON_SPRITE_LABEL, v35, v36, v37, v38, v39, v40, v41);
  v42 = MasterMissionComponent_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_17321/*"btn_txt_off_extra"*/;
  v42->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17321/*"btn_txt_off_extra"*/;
  sub_B70630((BattleServantConfConponent_o *)&v42->EXTRA_OFF_SPRITE_LABEL, v43, v44, v45, v46, v47, v48, v49);
  v50 = MasterMissionComponent_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_17328/*"btn_txt_on_limited"*/;
  v50->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17328/*"btn_txt_on_limited"*/;
  sub_B70630((BattleServantConfConponent_o *)&v50->LIMITED_ON_SPRITE_LABEL, v51, v52, v53, v54, v55, v56, v57);
  v58 = MasterMissionComponent_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_17322/*"btn_txt_off_limited"*/;
  v58->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17322/*"btn_txt_off_limited"*/;
  sub_B70630((BattleServantConfConponent_o *)&v58->LIMITED_OFF_SPRITE_LABEL, v59, v60, v61, v62, v63, v64, v65);
  v66 = MasterMissionComponent_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_18445/*"ef_btn_blink"*/;
  v66->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_18445/*"ef_btn_blink"*/;
  sub_B70630((BattleServantConfConponent_o *)&v66->STONE_EXCHENGE_BUTTON_EFFECT_NAME, v67, v68, v69, v70, v71, v72, v73);
  v74 = MasterMissionComponent_TypeInfo;
  MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME = 0.1;
  v74->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH = 92.0;
  v74->static_fields->NOTICE_NUMBER_BADGE_DEPTH = 10;
  v74->static_fields->NOTICE_NUMBER_BADGE_WIDTH = 40;
  v74->static_fields->NOTICE_NUMBER_BADGE_HEIGHT = 40;
  v74->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE = 16;
  v74->static_fields->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v75 = v74->static_fields;
  v75->BLANK_EARTH_WINDOW_POS.fields.x = 0.0;
  v75->BLANK_EARTH_WINDOW_POS.fields.y = 0.0;
  v75->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
}


void __fastcall MasterMissionComponent___ctor(MasterMissionComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionComponent__AcceptReward(MasterMissionComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x0

  if ( (byte_435228F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent__AcceptReward_b__186_0__);
    byte_435228F = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v12 = sub_B70798(v4);
    sub_B70738(v12, 0LL);
  }
  receiveMissionIds = this->fields.receiveMissionIds;
  v9 = missionListViewManager->m_Items[nowType];
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__186_0__, 0LL);
  if ( !v9 )
LABEL_7:
    sub_B7076C(v4, v5);
  MasterMissionListViewManager__AcceptReward(v9, receiveMissionIds, v10, v11);
}


void __fastcall MasterMissionComponent__Awake(MasterMissionComponent_o *this, const MethodInfo *method)
{
  ;
}


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
  __int64 v8; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  v5 = this;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v8 = sub_B70798(this);
    sub_B70738(v8, 0LL);
  }
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_B7076C(this, isBulk);
  v6 = MasterMissionListViewManager__ReceiveMissionItems((MasterMissionListViewManager_o *)this, isBulk, method);
  MasterMissionComponent__BulkReceiveConfirm(v5, v6, v7);
}


void __fastcall MasterMissionComponent__BulkReceiveConfirm(
        MasterMissionComponent_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *items,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v21; // x20
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v22; // x22
  const MethodInfo *v23; // x3

  if ( (byte_435228B & 1) == 0 )
  {
    sub_B70694(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__);
    sub_B70694(&MasterMissionComponent___c__DisplayClass181_0_TypeInfo);
    byte_435228B = 1;
  }
  v5 = sub_B70764(MasterMissionComponent___c__DisplayClass181_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass181_0___ctor((MasterMissionComponent___c__DisplayClass181_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = items;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)items, v14, v15, v16, v17, v18, v19);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v21 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v5 + 24);
  v22 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_B70764(MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__,
    0LL);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_B7076C(v6, v7);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v21, v22, v23);
}


void __fastcall MasterMissionComponent__ChangeTabImage(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MasterMissionComponent_o *v3; // x19
  struct MasterMissionTab_array *missionTabList; // x8
  UISprite_o *dailyTabBtnBase; // x20
  UISprite_o *dailyTabSprite; // x20
  System_String_o **p_fields; // x8
  const MethodInfo *v8; // x2
  struct MasterMissionTab_array *v9; // x8
  UISprite_o *weeklyTabBtnBase; // x20
  UISprite_o *weeklyTabSprite; // x20
  System_String_o **p_monitor; // x8
  const MethodInfo *v13; // x2
  struct MasterMissionTab_array *v14; // x8
  UISprite_o *extraTabBtnBase; // x20
  UISprite_o *extraTabSprite; // x20
  System_String_o **v17; // x8
  const MethodInfo *v18; // x2
  struct MasterMissionTab_array *v19; // x8
  UISprite_o *limitedTabBtnBase; // x20
  UISprite_o *limitedTabSprite; // x20
  System_String_o **v22; // x8
  int32_t nowType; // w19
  __int64 v24; // x0

  v3 = this;
  if ( (byte_4352286 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B70694(&MasterMissionComponent_TypeInfo);
    byte_4352286 = 1;
  }
  missionTabList = v3->fields.missionTabList;
  if ( !missionTabList )
    goto LABEL_70;
  if ( !missionTabList->max_length )
    goto LABEL_71;
  this = (MasterMissionComponent_o *)missionTabList->m_Items[0];
  if ( !this )
    goto LABEL_70;
  dailyTabBtnBase = v3->fields.dailyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 0,
                                       v2);
  if ( !dailyTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(dailyTabBtnBase, (System_String_o *)this, 0LL);
  dailyTabSprite = v3->fields.dailyTabSprite;
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  if ( !v3->fields.nowType )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_fields = (System_String_o **)&this->fields.dailySelectedObj->fields;
    if ( dailyTabSprite )
      goto LABEL_17;
LABEL_70:
    sub_B7076C(this, method);
  }
  if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  }
  p_fields = (System_String_o **)&this->fields.dailySelectedObj[1];
  if ( !dailyTabSprite )
    goto LABEL_70;
LABEL_17:
  UISprite__set_spriteName(dailyTabSprite, *p_fields, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.dailySelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 0, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.dailyNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 0, 0LL);
  v9 = v3->fields.missionTabList;
  if ( !v9 )
    goto LABEL_70;
  if ( v9->max_length <= 1 )
    goto LABEL_71;
  this = (MasterMissionComponent_o *)v9->m_Items[1];
  if ( !this )
    goto LABEL_70;
  weeklyTabBtnBase = v3->fields.weeklyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 1,
                                       v8);
  if ( !weeklyTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(weeklyTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  weeklyTabSprite = v3->fields.weeklyTabSprite;
  if ( v3->fields.nowType == 1 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_monitor = (System_String_o **)&this->fields.dailySelectedObj[1].monitor;
    if ( !weeklyTabSprite )
      goto LABEL_70;
  }
  else
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_monitor = (System_String_o **)&this->fields.dailySelectedObj[1].fields;
    if ( !weeklyTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(weeklyTabSprite, *p_monitor, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.weeklySelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 1, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.weeklyNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 1, 0LL);
  v14 = v3->fields.missionTabList;
  if ( !v14 )
    goto LABEL_70;
  if ( v14->max_length <= 2 )
    goto LABEL_71;
  this = (MasterMissionComponent_o *)v14->m_Items[2];
  if ( !this )
    goto LABEL_70;
  extraTabBtnBase = v3->fields.extraTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 2,
                                       v13);
  if ( !extraTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(extraTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  extraTabSprite = v3->fields.extraTabSprite;
  if ( v3->fields.nowType == 2 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    v17 = (System_String_o **)&this->fields.dailySelectedObj[2];
    if ( !extraTabSprite )
      goto LABEL_70;
  }
  else
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    v17 = (System_String_o **)&this->fields.dailySelectedObj[2].monitor;
    if ( !extraTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(extraTabSprite, *v17, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.extraSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 2, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.extraNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 2, 0LL);
  v19 = v3->fields.missionTabList;
  if ( !v19 )
    goto LABEL_70;
  if ( v19->max_length <= 3 )
  {
LABEL_71:
    v24 = sub_B70798(this);
    sub_B70738(v24, 0LL);
  }
  this = (MasterMissionComponent_o *)v19->m_Items[3];
  if ( !this )
    goto LABEL_70;
  limitedTabBtnBase = v3->fields.limitedTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v3->fields.nowType == 3,
                                       v18);
  if ( !limitedTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(limitedTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  limitedTabSprite = v3->fields.limitedTabSprite;
  if ( v3->fields.nowType == 3 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    v22 = (System_String_o **)&this->fields.dailySelectedObj[2].fields;
    if ( !limitedTabSprite )
      goto LABEL_70;
  }
  else
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    v22 = (System_String_o **)&this->fields.dailySelectedObj[3];
    if ( !limitedTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(limitedTabSprite, *v22, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.limitedSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType != 3, 0LL);
  this = (MasterMissionComponent_o *)v3->fields.limitedNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.nowType == 3, 0LL);
  nowType = v3->fields.nowType;
  if ( !byte_4352326 )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_4352326 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = nowType;
  EventRewardSaveData__SaveMstMissionIndex(0LL);
}


void __fastcall MasterMissionComponent__ChangeViewCompleteMissionLb(
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
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_435226A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_8849/*"MISSION_ACHIVE_MSG"*/);
    sub_B70694(&StringLiteral_3358/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_13576/*"TIME_REST_ACHIVE"*/);
    byte_435226A = 1;
  }
  MissionAchiveCount_k__BackingField = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !mstMissionInfo )
    goto LABEL_39;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  completeMissionCountNumLb = this->fields.completeMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0LL);
  if ( !completeMissionCountNumLb )
    goto LABEL_39;
  UILabel__set_text(completeMissionCountNumLb, (System_String_o *)Instance, 0LL);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  completeMissionCountNumLb2 = this->fields.completeMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0LL);
  if ( !completeMissionCountNumLb2 )
    goto LABEL_39;
  UILabel__set_text(completeMissionCountNumLb2, (System_String_o *)Instance, 0LL);
  completeMissionCountMsgLb = this->fields.completeMissionCountMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8849/*"MISSION_ACHIVE_MSG"*/, 0LL);
  if ( !completeMissionCountMsgLb )
    goto LABEL_39;
  UILabel__set_text(completeMissionCountMsgLb, (System_String_o *)Instance, 0LL);
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
  Instance = (DataManager_o *)this->fields.completeMissionTimeNumStr;
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)System_String__Equals_44745508(
                                (System_String_o *)Instance,
                                completeMissionAlertNumLb->fields.mText,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    completeMissionAlertUnitLb = this->fields.completeMissionAlertUnitLb;
    if ( !completeMissionAlertUnitLb )
      goto LABEL_39;
    Instance = (DataManager_o *)this->fields.completeMissionTimeCntStr;
    if ( !Instance )
      goto LABEL_39;
    if ( System_String__Equals_44745508((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(this->fields.completeMissionTimeNumStr, 0LL);
  if ( !this->fields.completeMissionAlertTitleLb )
    goto LABEL_39;
  v14 = (char)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.completeMissionAlertTitleLb,
                                0LL);
  if ( !Instance )
    goto LABEL_39;
  if ( (v14 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    completeMissionAlertTitleLb = this->fields.completeMissionAlertTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0LL);
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
            v16 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_39:
    sub_B7076C(Instance, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.completeMissionAlertNumLb;
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (DataManager_o *)this->fields.completeMissionAlertUnitLb;
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  completeMissionAlertMsgLb = this->fields.completeMissionAlertMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13576/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !completeMissionAlertMsgLb )
    goto LABEL_39;
  v16 = (System_String_o *)Instance;
  Instance = (DataManager_o *)completeMissionAlertMsgLb;
LABEL_37:
  UILabel__set_text((UILabel_o *)Instance, v16, 0LL);
}


void __fastcall MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v5; // x8
  int32_t MissionId; // w20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0

  v2 = this;
  if ( (byte_435228C & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    this = (MasterMissionComponent_o *)sub_B70694(&StringLiteral_11291/*"REWARD_ACCEPTABLE"*/);
    byte_435228C = 1;
  }
  missionListViewManager = v2->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_11;
  nowType = v2->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_12;
  v5 = missionListViewManager->m_Items[nowType];
  if ( !v5
    || (this = (MasterMissionComponent_o *)v5->fields.receiveItem) == 0LL
    || (MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)this, 0LL),
        (this = (MasterMissionComponent_o *)sub_B706AC(int___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_11:
    sub_B7076C(this, method);
  }
  if ( !LODWORD(this->fields.myFsm) )
  {
LABEL_12:
    v13 = sub_B70798(this);
    sub_B70738(v13, 0LL);
  }
  LODWORD(this->fields.titlePrefab) = MissionId;
  v2->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.sendMissionIds,
    (System_Int32_array **)this,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this = (MasterMissionComponent_o *)v2->fields.myFsm;
  v2->fields.isBoardTouch = 1;
  if ( !this )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11291/*"REWARD_ACCEPTABLE"*/, 0LL);
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
  __int64 v10; // x0

  if ( (byte_4352299 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    byte_4352299 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    goto LABEL_23;
  EventSvtControl__stopVoice(svtVoiceCtr, 0LL);
  MasterMissionComponent__ReleaseSvtVoiceData(this, v5);
  svtVoiceCtr = (EventSvtControl_o *)this->fields.standFigureBack;
  if ( !svtVoiceCtr )
    goto LABEL_23;
  StandFigureBack__DestroyFigure((StandFigureBack_o *)svtVoiceCtr, 0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_23;
  if ( !missionListViewManager->max_length )
    goto LABEL_24;
  svtVoiceCtr = (EventSvtControl_o *)missionListViewManager->m_Items[0];
  if ( !svtVoiceCtr )
    goto LABEL_23;
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL);
  v7 = this->fields.missionListViewManager;
  if ( !v7 )
    goto LABEL_23;
  if ( v7->max_length <= 1 )
    goto LABEL_24;
  svtVoiceCtr = (EventSvtControl_o *)v7->m_Items[1];
  if ( !svtVoiceCtr )
    goto LABEL_23;
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_23;
  if ( v8->max_length <= 2 )
    goto LABEL_24;
  svtVoiceCtr = (EventSvtControl_o *)v8->m_Items[2];
  if ( !svtVoiceCtr
    || (ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL),
        (v9 = this->fields.missionListViewManager) == 0LL) )
  {
LABEL_23:
    sub_B7076C(svtVoiceCtr, v3);
  }
  if ( v9->max_length <= 3 )
  {
LABEL_24:
    v10 = sub_B70798(svtVoiceCtr);
    sub_B70738(v10, 0LL);
  }
  svtVoiceCtr = (EventSvtControl_o *)v9->m_Items[3];
  if ( !svtVoiceCtr )
    goto LABEL_23;
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL);
  EventRewardSaveData__SaveAllMissionData(0LL);
  svtVoiceCtr = (EventSvtControl_o *)this->fields.completeMissionIconSprite;
  if ( !svtVoiceCtr )
    goto LABEL_23;
  CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)svtVoiceCtr, 0LL);
  svtVoiceCtr = (EventSvtControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtVoiceCtr, 0, 0LL);
}


void __fastcall MasterMissionComponent__EndLoadVoiceAssets(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4352278 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352278 = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(titleInfo, v3);
  }
  CommonUI__SetLoadMode((CommonUI_o *)titleInfo, 0, 0LL);
}


void __fastcall MasterMissionComponent__ExitCompleteMission(
        MasterMissionComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v5; // x8
  MasterMissionComponent___c_c *v6; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__147_0; // x20
  Il2CppObject *v10; // x21
  struct MasterMissionComponent___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_435226E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__);
    sub_B70694(&MasterMissionComponent___c_TypeInfo);
    byte_435226E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  v6 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v6 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__147_0 = static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__147_0, v10, Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__, 0LL);
    v11 = MasterMissionComponent___c_TypeInfo->static_fields;
    v11->__9__147_0 = _9__147_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v11->__9__147_0,
      (System_Int32_array **)_9__147_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !Instance )
    sub_B7076C(v6, v3);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__147_0, 0LL);
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
  __int64 v18; // x0

  if ( (byte_435226B & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B70694(&MissionInfoMaker_TypeInfo);
    byte_435226B = 1;
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
        v18 = sub_B70798(this);
        sub_B70738(v18, 0LL);
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
    sub_B7076C(this, eventMissionList);
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
  __int64 v13; // x0

  if ( (byte_435227A & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B70694(&MasterMissionListViewItem_TypeInfo);
    byte_435227A = 1;
  }
  if ( !eventMissionList )
    goto LABEL_15;
  v6 = *(_QWORD *)&eventMissionList->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v6 )
      {
        v13 = sub_B70798(this);
        sub_B70738(v13, 0LL);
      }
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_B70764(MasterMissionListViewItem_TypeInfo);
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
LABEL_15:
    sub_B7076C(this, eventMissionList);
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
    sub_B7076C(completeMissionIcon, method);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0LL);
}


void __fastcall MasterMissionComponent__InitCompleteMissionLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MasterMissionComponent_o *v3; // x19
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8

  v3 = this;
  if ( (byte_4352269 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    this = (MasterMissionComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    byte_4352269 = 1;
  }
  currentCompleteMissionList = v3->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_B7076C(this, method);
  if ( currentCompleteMissionList->fields._size < 1 )
    MasterMissionComponent__HideCompleteMissionIconLb(v3, method);
  else
    MasterMissionComponent__ChangeViewCompleteMissionLb(v3, currentCompleteMissionList->fields._items->m_Items[0], v2);
}


bool __fastcall MasterMissionComponent__IsLimitedMissionEnableTime(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0
  int64_t NoneExpireTime; // x23
  int64_t Time; // x19
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct DataMasterBase_array *datalist; // x25
  DataManager_o *v8; // x20
  unsigned int v9; // w26
  __int64 namespaze; // x24
  DataManager_c **v11; // x8
  DataManager_c *v12; // x21
  int64_t v13; // x9
  __int64 v15; // x0
  bool result; // w0
  BalanceConfig_c *v17; // x0

  if ( (byte_435226F & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435226F = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v2->static_fields->NoneExpireTime;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_34;
  datalist = Instance->fields.datalist;
  v8 = Instance;
  if ( (int)datalist >= 1 )
  {
    v9 = 0;
    namespaze = -1LL;
    while ( 1 )
    {
      v11 = &v8->klass + (int)v9;
      v12 = v11[4];
      if ( !v12 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v11[4], 0LL);
      if ( (_DWORD)Instance == 5 )
      {
        v13 = *(_QWORD *)&v12->_1.byval_arg.bits;
        if ( (__int64)v12->_1.namespaze > namespaze )
          namespaze = (__int64)v12->_1.namespaze;
        if ( Time < v13 && NoneExpireTime > v13 )
          NoneExpireTime = *(_QWORD *)&v12->_1.byval_arg.bits;
      }
      if ( (int)++v9 >= (int)datalist )
        goto LABEL_27;
      if ( v9 >= LODWORD(v8->fields.datalist) )
      {
        v15 = sub_B70798(Instance);
        sub_B70738(v15, 0LL);
      }
    }
LABEL_34:
    sub_B7076C(Instance, v6);
  }
  namespaze = -1LL;
LABEL_27:
  result = 0;
  if ( Time < NoneExpireTime && namespaze <= Time )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    return NoneExpireTime < v17->static_fields->NoneExpireTime;
  }
  return result;
}


void __fastcall MasterMissionComponent__LoadNotificationEnd(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct MstMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  _BOOL8 _29045252; // x0
  const MethodInfo *v17; // x1
  CommonUI_o *v18; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_4352266 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_B70694(&Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_4352266 = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (struct MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = MasterData_WarQuestSelectionMaster;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mstMissionMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  EventRewardSaveData__LoadAllMissionData(0LL);
  MasterMissionComponent__SetMissionDisp(this, v12);
  MasterMissionComponent__SetMissionClearNum(this, v13);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29045252(126, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_32;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0LL);
    Instance = (DataManager_o *)this->fields.playBtnImg;
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v4);
    MasterMissionComponent__setGuideSvtVoice(this, v15);
    Instance = (DataManager_o *)this->fields.playBtnImg;
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  MasterMissionComponent__reDispMissionList(this, v14);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29045252 = TutorialFlag__Get_29045252(207, 0LL);
  if ( !_29045252 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_29045252, v17);
  v18 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__, 0LL);
  if ( !v18 )
LABEL_32:
    sub_B7076C(Instance, v4);
  CommonUI__maskFadein(v18, DEFAULT_FADE_TIME, v21, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_4352298 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352298 = 1;
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

  if ( (byte_43522A1 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_2694/*"BULK_RECEIVE"*/);
    byte_43522A1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2694/*"BULK_RECEIVE"*/, 0LL);
}


void __fastcall MasterMissionComponent__OnClickCompleteMissionBtn(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_string__c *klass; // x8
  CommonUI_o *v6; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  System_String_o *v10; // x19
  _QWORD **v11; // x21
  __int64 v12; // x20
  __int16 v13; // w8
  __int64 v14; // x20
  __int64 v15; // x20
  __int64 v16; // x20
  System_String_o *v17; // x19
  CommonUI_o *v18; // x20
  MasterMissionComponent___c_c *v19; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__146_1; // x21
  Il2CppObject *v22; // x22
  struct MasterMissionComponent___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_435226D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Array_Empty_object___);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__);
    sub_B70694(&MasterMissionComponent___c_TypeInfo);
    sub_B70694(&StringLiteral_3357/*"COMPLETE_MISSION_END"*/);
    byte_435226D = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_50;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0LL) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = Instance[1].fields.saveNameList->klass;
      if ( klass )
      {
        Instance = *(DataManager_o **)&klass->_2.static_fields_size;
        if ( Instance )
        {
          ScrTerminalMap__DestroyEventActionEffect((ScrTerminalMap_o *)Instance, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          TerminalPramsManager__PlaySystemSE(0, 0LL);
          v6 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v7 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v7 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
          v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v9,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__,
            0LL);
          if ( v6 )
          {
            CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v9, 0LL);
            return;
          }
        }
      }
LABEL_50:
      sub_B7076C(Instance, v4);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3357/*"COMPLETE_MISSION_END"*/, 0LL);
    v11 = (_QWORD **)Method_System_Array_Empty_object___;
    v12 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v13 = *(_WORD *)(v12 + 306);
    if ( (v13 & 1) == 0 )
    {
      sub_B08394(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v13 = *(_WORD *)(v12 + 306);
    }
    if ( (v13 & 0x400) != 0 )
    {
      v14 = *v11[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_B08394(*v11[6]);
      if ( !*(_DWORD *)(v14 + 224) )
      {
        v15 = *v11[6];
        if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
          sub_B08394(*v11[6]);
        j_il2cpp_runtime_class_init_0(v15);
      }
    }
    v16 = *v11[6];
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_B08394(*v11[6]);
    v17 = System_String__Format_44836892(v10, **(System_Object_array ***)(v16 + 184), 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (CommonUI_o *)Instance;
    v19 = MasterMissionComponent___c_TypeInfo;
    if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v19 = MasterMissionComponent___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__146_1 = static_fields->__9__146_1;
    if ( !_9__146_1 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__146_1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(_9__146_1, v22, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__, 0LL);
      v23 = MasterMissionComponent___c_TypeInfo->static_fields;
      v23->__9__146_1 = _9__146_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v23->__9__146_1,
        (System_Int32_array **)_9__146_1,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    if ( !v18 )
      goto LABEL_50;
    CommonUI__OpenNotificationDialog(v18, 0LL, v17, _9__146_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4352287 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352287 = 1;
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

  if ( (byte_4352289 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352289 = 1;
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

  if ( (byte_435229F & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435229F = 1;
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

  if ( (byte_435228A & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435228A = 1;
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
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v4; // x8
  MasterMissionComponent___c_c *v5; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__174_0; // x20
  Il2CppObject *v9; // x21
  struct MasterMissionComponent___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4352285 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__);
    sub_B70694(&MasterMissionComponent___c_TypeInfo);
    byte_4352285 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  v5 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v5 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__174_0 = static_fields->__9__174_0;
  if ( !_9__174_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__174_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__174_0, v9, Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__, 0LL);
    v10 = MasterMissionComponent___c_TypeInfo->static_fields;
    v10->__9__174_0 = _9__174_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v10->__9__174_0,
      (System_Int32_array **)_9__174_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !Instance )
    sub_B7076C(v5, v2);
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
      sub_B7076C(0LL, method);
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

  if ( (byte_4352288 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352288 = 1;
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

  if ( (byte_4352264 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352264 = 1;
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
      sub_B7076C(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.titleInfo, 0LL, v7, v8, v9, v10, v11, v12);
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
  CommonUI_o *Instance; // x0
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_int__o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v39; // w20
  bool v40; // w1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  struct UnityEngine_GameObject_o *titlePrefab; // x21
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  TitleInfoControl_o *v51; // x21
  TitleInfoControl_o *v52; // x20
  System_Action_o *v53; // x21
  MasterMissionComponent_c *v54; // x0
  int32_t DEFAULT_LIMITCNT; // w8
  struct MstMissionEntity_array *Entitys_WarMaster__WarEntity; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v67; // x21
  System_Action_o *v68; // x20
  __int64 v69; // x0

  if ( (byte_4352265 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MstMissionEntity__TypeInfo);
    sub_B70694(&Method_MasterMissionComponent_LoadNotificationEnd__);
    sub_B70694(&Method_MasterMissionComponent_OnClickBack__);
    sub_B70694(&Method_MasterMissionComponent__Open_b__136_0__);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352265 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.reDispAction = redisp_act;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.reDispAction,
    (System_Int32_array **)redisp_act,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_46;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0LL);
  v23 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v23;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentEventIdList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v30;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentMstMissionEntList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  if ( typeIndex == -1 )
  {
    if ( !byte_4352325 )
    {
      Instance = (CommonUI_o *)sub_B70694(&EventRewardSaveData_TypeInfo);
      byte_4352325 = 1;
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
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= max_length )
      {
        v69 = sub_B70798(Instance);
        sub_B70738(v69, 0LL);
      }
      Instance = (CommonUI_o *)missionTabList->m_Items[v39];
      if ( !Instance )
        break;
      MasterMissionTab__SetSmallTab((MasterMissionTab_o *)Instance, v10);
      max_length = missionTabList->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_15;
    }
LABEL_46:
    sub_B7076C(Instance, v10);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v10) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_46;
    v40 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_46;
    v40 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v40, 0LL);
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
    Instance = (CommonUI_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                               (UnityEngine_UI_Dropdown_DropdownItem_o *)titlePrefab,
                               (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_46;
    Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.titleInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v51 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v51 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v51, (UnityEngine_Transform_o *)Instance, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setDepth((TitleInfoControl_o *)Instance, 37, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 38, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0LL, 1, 0LL, 82, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__changeTitleInfo_18518488((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v52 = this->fields.titleInfo;
    v53 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_MasterMissionComponent_OnClickBack__, 0LL);
    if ( !v52 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v52, v53, 0LL);
  }
  v54 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v54 = MasterMissionComponent_TypeInfo;
  }
  this->fields.currentEventSvtId = v54->static_fields->DEFAULT_SVT_ID;
  DEFAULT_LIMITCNT = v54->static_fields->DEFAULT_LIMITCNT;
  this->fields.currentDispId = 0;
  this->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Entitys_WarMaster__WarEntity = (struct MstMissionEntity_array *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1CA3834 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_WarMaster__WarEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mstMissionList,
    (System_Int32_array **)Entitys_WarMaster__WarEntity,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  MasterMissionComponent__SetupShopBtn(this, v63);
  MasterMissionComponent__SetupCompleteBtn(this, v64);
  MasterMissionComponent__RefreshInfo(this, v65);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v67 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v67,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__Open_b__136_0__,
    (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v67, 1, 0LL);
  v68 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v68, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v68, 0LL);
}


void __fastcall MasterMissionComponent__OpenCompleteMission(
        MasterMissionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x19
  CompleteMissionComponent_ClickDelegate_o *v5; // x20
  __int64 v6; // x1
  MasterMissionComponent___c_c *mInstance; // x0
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__145_0; // x21
  Il2CppObject *v10; // x22
  struct MasterMissionComponent___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  TerminalSceneComponent_c *v18; // x0

  if ( (byte_435226C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&CompleteMissionComponent_ClickDelegate_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent_ExitCompleteMission__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__);
    sub_B70694(&MasterMissionComponent___c_TypeInfo);
    byte_435226C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CompleteMissionComponent_ClickDelegate_o *)sub_B70764(CompleteMissionComponent_ClickDelegate_TypeInfo);
  CompleteMissionComponent_ClickDelegate___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ExitCompleteMission__,
    0LL);
  mInstance = MasterMissionComponent___c_TypeInfo;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    mInstance = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = mInstance->static_fields;
  _9__145_0 = static_fields->__9__145_0;
  if ( !_9__145_0 )
  {
    if ( (BYTE3(mInstance->vtable._0_Equals.methodPtr) & 4) != 0 && !mInstance->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mInstance);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__145_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__145_0, v10, Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__, 0LL);
    v11 = MasterMissionComponent___c_TypeInfo->static_fields;
    v11->__9__145_0 = _9__145_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v11->__9__145_0,
      (System_Int32_array **)_9__145_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !Instance )
    goto LABEL_25;
  CommonUI__OpenCompleteMission(Instance, v5, _9__145_0, 0, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v18 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v18 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v18->static_fields->mInstance;
  if ( !mInstance )
LABEL_25:
    sub_B7076C(mInstance, v6);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0LL);
}


void __fastcall MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_43522A0 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43522A0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  CommonUI__OpenTutorialImageDialog_17929856(Instance, 42, 207, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall MasterMissionComponent__OpenPresentBox(MasterMissionComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v4; // x21
  CommonUI_o *v5; // x0
  __int64 v6; // x1
  ErrorDialog_c *klass; // x8
  CommonUI_o *v8; // x19
  MasterMissionComponent_c *v9; // x8
  ErrorDialog_c *v10; // x8

  if ( (byte_4352292 & 1) == 0 )
  {
    sub_B70694(&UserPresentBoxWindow_ClickDelegate_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent__OpenPresentBox_b__189_0__);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4352292 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (UserPresentBoxWindow_ClickDelegate_o *)sub_B70764(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__189_0__,
    0LL);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__OpenUsrPresentList(Instance, 1, v4, 0LL, 0LL);
  v5 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v5 )
    goto LABEL_33;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v5, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    v5 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v5 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v5->fields.errorDialog->klass;
    if ( !klass )
      goto LABEL_33;
    v5 = *(CommonUI_o **)&klass->_2.element_size;
    if ( !v5 )
      goto LABEL_33;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v5, 0LL) )
    {
      v5 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = v5;
      v9 = MasterMissionComponent_TypeInfo;
      if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        v9 = MasterMissionComponent_TypeInfo;
      }
      if ( v8 )
      {
        CommonUI__SetUsrPresentListPos(v8, v9->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_434DEA1 )
        {
          sub_B70694(&TerminalSceneComponent_TypeInfo);
          byte_434DEA1 = 1;
        }
        v5 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v5 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        }
        v10 = v5->fields.errorDialog->klass;
        if ( v10 )
        {
          v5 = *(CommonUI_o **)&v10->_2.element_size;
          if ( v5 )
          {
            ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v5, 0, 0LL);
            return;
          }
        }
      }
LABEL_33:
      sub_B7076C(v5, v6);
    }
  }
}


void __fastcall MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  struct UnityEngine_GameObject_o *v4; // x20
  struct UnityEngine_GameObject_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_435229D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435229D = 1;
  }
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v4 = this->fields.btnEffectBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)v4,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = v5;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.btnEffectPrefab,
      (System_Int32_array **)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0LL, 0LL) )
      GameObjectExtensions__SafeSetParent_32503456(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0LL);
  }
}


void __fastcall MasterMissionComponent__PresentBoxOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  PresentBoxOverDialog_o *presentBoxOverDialog; // x20
  System_String_o *v4; // x21
  PresentBoxOverDialog_ClickDelegate_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4352291 & 1) == 0 )
  {
    sub_B70694(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent__PresentBoxOver_b__188_0__);
    sub_B70694(&StringLiteral_8741/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352291 = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8741/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0LL);
  v5 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B70764(PresentBoxOverDialog_ClickDelegate_TypeInfo);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__188_0__,
    0LL);
  if ( !presentBoxOverDialog )
    sub_B7076C(v6, v7);
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1/*""*/, v4, v5, 26, 0LL);
}


void __fastcall MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  AdManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x22
  AdManager_o **v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
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
  __int64 v30; // x0

  if ( (byte_4352290 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B70694(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__);
    sub_B70694(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__);
    sub_B70694(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__);
    sub_B70694(&MasterMissionComponent___c__DisplayClass187_0_TypeInfo);
    byte_4352290 = 1;
  }
  v3 = sub_B70764(MasterMissionComponent___c__DisplayClass187_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass187_0___ctor((MasterMissionComponent___c__DisplayClass187_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v3,
    Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__,
    0LL);
  v13 = (AdManager_o **)(v3 + 24);
  *(_QWORD *)(v3 + 24) = v12;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
          v30 = sub_B70798(Instance);
          sub_B70738(v30, 0LL);
        }
        v23 = missionListViewManager->m_Items[nowType];
        v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v24,
          (Il2CppObject *)v3,
          Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__,
          0LL);
        if ( v23 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v23, v24, v25);
          return;
        }
      }
LABEL_20:
      sub_B7076C(Instance, v5);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v27 = this->fields.receiveMissionIds;
    v28 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v3,
      Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__,
      0LL);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v27, v28, v29);
  }
  else
  {
    Instance = *v13;
    if ( !*v13 )
      goto LABEL_20;
    System_Action__Invoke((System_Action_o *)Instance, 0LL);
  }
}


void __fastcall MasterMissionComponent__RefreshInfo(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UILabel_o *stoneInfoLabel; // x20
  int32_t stone; // w21
  int32_t UserStoneFragmentNum; // w0
  UILabel_o *stoneFragmentsInfoLabel; // x21
  int32_t v10; // w20
  const MethodInfo *v11; // x2

  if ( (byte_435229A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435229A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_15;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_15;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0LL),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v10 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0LL),
        !stoneFragmentsInfoLabel) )
  {
LABEL_15:
    sub_B7076C(Instance, v5);
  }
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  MasterMissionComponent__UpdateStoneExchangeCount(this, v10, v11);
}


void __fastcall MasterMissionComponent__ReleaseSvtVoiceData(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppClass *klass; // x20
  __int64 v7; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v8; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352296 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352296 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentVoiceDataList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v9,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v9.fields.current )
        sub_B7076C(v4, v5);
      klass = v9.fields.current[1].klass;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)klass, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v8 = this->fields.currentVoiceDataList;
    if ( !v8 )
      sub_B7076C(0LL, v7);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__);
  }
}


void __fastcall MasterMissionComponent__RequestMissionReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1

  if ( (byte_435228D & 1) == 0 )
  {
    sub_B70694(&Method_MasterMissionComponent_missionRewardCallback__);
    sub_B70694(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_435228D = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v3,
                                                                            (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7076C(0LL, v5);
  EventMissionClearRewardRequest__beginRequest_27401236(
    Request_WarBoardWallAttackRequest,
    this->fields.sendMissionIds,
    0LL);
}


void __fastcall MasterMissionComponent__ServantOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int32_t overflowType; // w8
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  int32_t v5; // w20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UserPresentBoxErrorDialog_o *v8; // x21
  System_Action_ShopRootConstants_State__o *v9; // x22

  if ( (byte_4352293 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_SceneList_Type___ctor__);
    sub_B70694(&System_Action_SceneList_Type__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent_ServantOverDialogClose__);
    sub_B70694(&StringLiteral_8751/*"MASTER_MISSION_SERVANT_OVER_MSG"*/);
    byte_4352293 = 1;
  }
  overflowType = this->fields.overflowType;
  servantOverDialog = this->fields.servantOverDialog;
  if ( overflowType == 4 )
    v5 = 2;
  else
    v5 = overflowType == 2;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8751/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0LL);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v6, 0LL),
        v8 = this->fields.servantOverDialog,
        v9 = (System_Action_ShopRootConstants_State__o *)sub_B70764(System_Action_SceneList_Type__TypeInfo),
        System_Action_ShopRootConstants_State____ctor(
          v9,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          (const MethodInfo_264AE8C *)Method_System_Action_SceneList_Type___ctor__),
        !v8)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v8, (System_Action_SceneList_Type__o *)v9, 0LL),
        (v6 = (System_String_o *)this->fields.servantOverDialog) == 0LL) )
  {
    sub_B7076C(v6, v7);
  }
  UserPresentBoxErrorDialog__setJumpType((UserPresentBoxErrorDialog_o *)v6, v5, 0LL);
}


void __fastcall MasterMissionComponent__ServantOverDialogClose(
        MasterMissionComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  System_Action_ShopRootConstants_State__o *v6; // x22
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4352294 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_SceneList_Type___ctor__);
    sub_B70694(&System_Action_SceneList_Type__TypeInfo);
    sub_B70694(&Method_MasterMissionComponent_ServantOverDialogClose__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_4352294 = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v6 = (System_Action_ShopRootConstants_State__o *)sub_B70764(System_Action_SceneList_Type__TypeInfo);
  System_Action_ShopRootConstants_State____ctor(
    v6,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ServantOverDialogClose__,
    (const MethodInfo_264AE8C *)Method_System_Action_SceneList_Type___ctor__);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v6, 0LL);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0LL);
      return;
    }
LABEL_9:
    sub_B7076C(Instance, v8);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall MasterMissionComponent__SetAfterAction(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v5; // x8
  __int64 v6; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
  }
  v5 = missionListViewManager->m_Items[nowType];
  if ( !v5 )
LABEL_5:
    sub_B7076C(this, method);
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

  if ( (byte_4352297 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4352297 = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !dailyTabObj
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)dailyTabObj, isEnable, 0LL),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.shopBtn) == 0LL)
    || (dailyTabObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dailyTabObj, 0LL)) == 0LL
    || (dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    dailyTabObj,
                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (v6 = isEnable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn) == 0LL) )
  {
LABEL_17:
    sub_B7076C(dailyTabObj, isEnable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL);
}


void __fastcall MasterMissionComponent__SetDailyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x0

  if ( (byte_435227B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    byte_435227B = 1;
  }
  EventRewardSaveData__LoadDailyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( !missionListViewManager->max_length )
    goto LABEL_15;
  v6 = missionListViewManager->m_Items[0];
  VaildDailyMissionData = MasterMissionComponent__getVaildDailyMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v7 = VaildDailyMissionData;
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v6, v7, v8, 0, this->fields.reDispAction, v9);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_14;
  if ( !v10->max_length )
  {
LABEL_15:
    v12 = sub_B70798(VaildDailyMissionData);
    sub_B70738(v12, 0LL);
  }
  v11 = (MissionListViewManager_o *)v10->m_Items[0];
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v11 )
LABEL_14:
    sub_B7076C(VaildDailyMissionData, v4);
  MissionListViewManager__SetMode_22628500(
    v11,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetExtraMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x0

  if ( (byte_435227D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    byte_435227D = 1;
  }
  EventRewardSaveData__LoadExtraMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 2 )
    goto LABEL_15;
  v6 = missionListViewManager->m_Items[2];
  ValidExtraMissionData = MasterMissionComponent__getValidExtraMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v7 = ValidExtraMissionData;
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v6, v7, v8, 2, this->fields.reDispAction, v9);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_14;
  if ( v10->max_length <= 2 )
  {
LABEL_15:
    v12 = sub_B70798(ValidExtraMissionData);
    sub_B70738(v12, 0LL);
  }
  v11 = (MissionListViewManager_o *)v10->m_Items[2];
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v11 )
LABEL_14:
    sub_B7076C(ValidExtraMissionData, v4);
  MissionListViewManager__SetMode_22628500(
    v11,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetLimitedMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x0

  if ( (byte_435227E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    byte_435227E = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 3 )
    goto LABEL_15;
  v6 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = MasterMissionComponent__getVaildLimitedMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v7 = VaildLimitedMissionData;
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       this->fields.currentEventIdList,
                                                                                       (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v6, v7, v8, 3, this->fields.reDispAction, v9);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_14;
  if ( v10->max_length <= 3 )
  {
LABEL_15:
    v12 = sub_B70798(VaildLimitedMissionData);
    sub_B70738(v12, 0LL);
  }
  v11 = (MissionListViewManager_o *)v10->m_Items[3];
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v11 )
LABEL_14:
    sub_B7076C(VaildLimitedMissionData, v4);
  MissionListViewManager__SetMode_22628500(
    v11,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetMissionClearNum(MasterMissionComponent_o *this, const MethodInfo *method)
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
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v17; // x3
  __int64 v18; // x0

  if ( (byte_4352279 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352279 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
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
      {
        v18 = sub_B70798(Instance);
        sub_B70738(v18, 0LL);
      }
      v12 = &EnableMissions->obj.klass + (int)v8;
      v13 = v12[4];
      if ( !v13 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v12[4], 0LL);
      switch ( (_DWORD)Instance )
      {
        case 5:
          if ( !v7 )
            goto LABEL_34;
          ClearMasterMissionList = (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                          v7,
                                                                                          HIDWORD(v13->_1.name),
                                                                                          5,
                                                                                          0LL);
          Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        ClearMasterMissionList,
                                        (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          3,
                                          v17);
            v9 += (int)Instance;
          }
          break;
        case 4:
          if ( !v7 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getExtraMissionList(v7, HIDWORD(v13->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          2,
                                          v15);
            v10 += (int)Instance;
          }
          break;
        case 2:
          if ( !v7 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getWeeklyMasterMissionList(v7, HIDWORD(v13->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
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
    sub_B7076C(Instance, v4);
  }
  v11 = 0;
  v10 = 0;
  v9 = 0;
LABEL_30:
  Instance = (DataManager_o *)this->fields.weeklyClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v11, 0LL);
  Instance = (DataManager_o *)this->fields.extraClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v10, 0LL);
  Instance = (DataManager_o *)this->fields.limitedClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v9, 0LL);
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
  __int64 v24; // x0

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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
        goto LABEL_81;
      this = (MasterMissionComponent_o *)v22->m_Items[3];
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
      MasterMissionComponent__SetWeeklyMissionList(v2, v23);
      break;
    case 2:
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
      MasterMissionComponent__SetExtraMissionList(v2, v13);
      break;
    case 3:
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v17 = v2->fields.missionListViewManager;
      if ( !v17 )
        goto LABEL_80;
      if ( v17->max_length <= 3 )
      {
LABEL_81:
        v24 = sub_B70798(this);
        sub_B70738(v24, 0LL);
      }
      this = (MasterMissionComponent_o *)v17->m_Items[3];
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
        sub_B7076C(this, method);
      }
      ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
        this,
        3LL,
        1LL,
        this->klass[1]._1.interfaceOffsets);
      MasterMissionComponent__SetLimitedMissionList(v2, v18);
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
  System_Collections_Generic_List_EventMissionEntity__o *VaildWeeklyMissionData; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v6; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v7; // x21
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x5
  struct MasterMissionListViewManager_array *v10; // x8
  MissionListViewManager_o *v11; // x19
  __int64 v12; // x0

  if ( (byte_435227C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    byte_435227C = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 1 )
    goto LABEL_15;
  v6 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = MasterMissionComponent__getVaildWeeklyMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v7 = VaildWeeklyMissionData;
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                      this->fields.currentEventIdList,
                                                                                      (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v6, v7, v8, 1, this->fields.reDispAction, v9);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_14;
  if ( v10->max_length <= 1 )
  {
LABEL_15:
    v12 = sub_B70798(VaildWeeklyMissionData);
    sub_B70738(v12, 0LL);
  }
  v11 = (MissionListViewManager_o *)v10->m_Items[1];
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v11 )
LABEL_14:
    sub_B7076C(VaildWeeklyMissionData, v4);
  MissionListViewManager__SetMode_22628500(
    v11,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetupCompleteBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x0
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentCompleteMissionList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  MstMissionEntity_array *EnableMissions; // x23
  int max_length; // w8
  UserEventMissionMaster_o *v17; // x25
  unsigned int v18; // w28
  int32_t v19; // w20
  MstMissionEntity_o *v20; // x24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  DataManager_o *v23; // x27
  int32_t CompleteMissionClearCount; // w26
  int32_t datalist; // w23
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  int32_t v27; // w22
  MasterMissionComponent_MasterMissionInfoItem_o *v28; // x25
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  struct UnityEngine_GameObject_o *cNoticeNumberPrefab; // x22
  UnityEngine_GameObject_o *v32; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UIWidget_o *v40; // x22
  struct NoticeNumberComponent_o *v41; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v43; // x1
  __int64 v44; // x0

  if ( (byte_4352268 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    sub_B70694(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352268 = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = &this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentCompleteMissionList,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
  }
  else
  {
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v5;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.currentCompleteMissionList,
      (System_Int32_array **)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_47;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_47;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v19 = 0;
  }
  else
  {
    v17 = (UserEventMissionMaster_o *)Instance;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        goto LABEL_48;
      v20 = EnableMissions->m_Items[v18];
      if ( !v20 )
        goto LABEL_47;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    MasterData_WarQuestSelectionMaster,
                                    v20->fields.id,
                                    0LL);
      if ( !Instance )
        goto LABEL_47;
      v23 = Instance;
      if ( Instance->fields.datalist )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)Instance,
                                      (EventMissionEntity_array *)Instance,
                                      v21,
                                      v22);
        v19 += CompleteMissionClearCount;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v20, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_29;
    }
    if ( !v17 )
      goto LABEL_47;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v17, v20->fields.id, 0LL);
    datalist = (int32_t)v23->fields.datalist;
    if ( !datalist )
    {
LABEL_48:
      v44 = sub_B70798(Instance);
      sub_B70738(v44, 0LL);
    }
    lookup = v23->fields.lookup;
    if ( !lookup )
      goto LABEL_47;
    v27 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_47;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, HIDWORD(lookup->fields.entries), 0LL);
    Instance = (DataManager_o *)this->fields.completeMissionIcon;
    if ( !Instance )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v28 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_B70764(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    MasterMissionComponent_MasterMissionInfoItem___ctor(v28, v20, datalist, CompleteMissionClearCount, v27, 0LL);
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
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
    v32 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)cNoticeNumberPrefab,
                                        (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_32503456(v32, this->fields.completeMissionNoticeRoot, 0LL);
    if ( v32 )
    {
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v32,
                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.mCompleteMissionNoticeNumber,
        Component_srcLineSprite,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
        v40 = (UIWidget_o *)Instance;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        }
        if ( v40 )
        {
          UIWidget__set_depth(v40, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
          UIWidget__set_width(v40, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
          UIWidget__set_height(v40, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
          v41 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v41->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v41->fields.numberLabel,
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
    sub_B7076C(Instance, v13);
  }
LABEL_45:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_47;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v19, 0LL);
  MasterMissionComponent__InitCompleteMissionLb(this, v43);
}


void __fastcall MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UISprite_o *shopBtnSp; // x20

  if ( (byte_4352267 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_17244/*"btn_event_3"*/);
    byte_4352267 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0LL);
  shopBtnSp = this->fields.shopBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_17244/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
}


bool __fastcall MasterMissionComponent__ShouldPlayedStoneButtonEffect(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  int32_t UserStoneFragmentNum; // w0
  const MethodInfo *v6; // x2
  int32_t ExchangeStoneCount; // w19

  if ( (byte_435229C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_435229C = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v4);
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(Master_WarQuestSelectionMaster, 0LL);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, UserStoneFragmentNum, v6);
  return ExchangeStoneCount >= StoneShopMaster__GetPayMultiTimePrice(0LL);
}


void __fastcall MasterMissionComponent__StopStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o **p_btnEffectPrefab; // x19
  UnityEngine_GameObject_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_435229E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435229E = 1;
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
      sub_B7076C(0LL, v4);
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0LL);
    v6 = *p_btnEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)v6, 0LL);
    *p_btnEffectPrefab = 0LL;
    sub_B70630((BattleServantConfConponent_o *)p_btnEffectPrefab, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall MasterMissionComponent__UnAcceptableRewardDlg(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  __int64 v4; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v4 = sub_B70798(this);
    sub_B70738(v4, 0LL);
  }
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
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


void __fastcall MasterMissionComponent__UpdateStoneExchangeCount(
        MasterMissionComponent_o *this,
        int32_t fragmentCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *stoneConvertLimit; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  int32_t ExchangeStoneCount; // w0
  int32_t v16; // w21
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

  if ( (byte_435229B & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__);
    sub_B70694(&MasterMissionComponent___c__DisplayClass202_0_TypeInfo);
    sub_B70694(&StringLiteral_5925/*"Effect/Common"*/);
    byte_435229B = 1;
  }
  v26 = 0;
  v5 = sub_B70764(MasterMissionComponent___c__DisplayClass202_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass202_0___ctor((MasterMissionComponent___c__DisplayClass202_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v14);
  *(_DWORD *)(v5 + 24) = ExchangeStoneCount;
  v16 = ExchangeStoneCount;
  v17 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v17 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v17->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v16 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    stoneConvertLimit = System_Int32__ToString((int)v5 + 24, 0LL);
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
          v20 = 0;
          goto LABEL_19;
        }
      }
    }
LABEL_31:
    sub_B7076C(stoneConvertLimit, v7);
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  v26 = STONE_EXCHENGE_DISP_LIMIT;
  stoneConvertLimit = System_Int32__ToString((int32_t)&v26, 0LL);
  if ( !stoneConvertCount )
    goto LABEL_31;
  UILabel__set_text(stoneConvertCount, stoneConvertLimit, 0LL);
  stoneConvertLimit = (System_String_o *)this->fields.stoneConvertLimit;
  if ( !stoneConvertLimit )
    goto LABEL_31;
  stoneConvertLimit = (System_String_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)stoneConvertLimit,
                                           0LL);
  if ( !stoneConvertLimit )
    goto LABEL_31;
  v20 = 1;
LABEL_19:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneConvertLimit, v20, 0LL);
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      (Il2CppObject *)v5,
      Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5925/*"Effect/Common"*/, v23, 1, 0LL);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v22);
    if ( this->fields.nowType == 1 )
    {
      v24 = *(_DWORD *)(v5 + 24);
      if ( v24 >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v25);
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
  __int64 v4; // x1
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_43522A4 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43522A4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__CloseMasterMission(Instance, 0LL);
  MasterMissionComponent__OpenCompleteMission(this, v5, v6);
}


void __fastcall MasterMissionComponent___OpenPresentBox_b__189_0(
        MasterMissionComponent_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ErrorDialog_c *klass; // x8
  ErrorDialog_c *v7; // x8
  __int64 *v8; // x8

  if ( (byte_43522A6 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&StringLiteral_11905/*"SERVANT_OVER"*/);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_43522A6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_28;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass )
    goto LABEL_33;
  Instance = *(CommonUI_o **)&klass->_2.element_size;
  if ( !Instance )
    goto LABEL_33;
  if ( !ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)Instance, 0LL) )
    goto LABEL_28;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = Instance->fields.errorDialog->klass;
  if ( !v7 || (Instance = *(CommonUI_o **)&v7->_2.element_size) == 0LL )
LABEL_33:
    sub_B7076C(Instance, v5);
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0LL);
LABEL_28:
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_33;
  if ( this->fields.overflowType )
    v8 = &StringLiteral_11905/*"SERVANT_OVER"*/;
  else
    v8 = &StringLiteral_3116/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v8, 0LL);
}


void __fastcall MasterMissionComponent___Open_b__136_0(
        MasterMissionComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_43522A3 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_43522A3 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_B7076C(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


void __fastcall MasterMissionComponent___PresentBoxOver_b__188_0(
        MasterMissionComponent_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  System_Action_o *v15; // x20

  if ( (byte_43522A5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__);
    sub_B70694(&MasterMissionComponent___c__DisplayClass188_0_TypeInfo);
    byte_43522A5 = 1;
  }
  v5 = sub_B70764(MasterMissionComponent___c__DisplayClass188_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass188_0___ctor((MasterMissionComponent___c__DisplayClass188_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__,
          0LL),
        !presentBoxOverDialog) )
  {
    sub_B7076C(v6, v7);
  }
  PresentBoxOverDialog__Close_25460164(presentBoxOverDialog, v15, 0LL);
}


void __fastcall MasterMissionComponent___setRecieveModifyItem_b__192_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_43522A7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5569/*"END_DISP"*/);
    byte_43522A7 = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v3);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5569/*"END_DISP"*/, 0LL);
}


void __fastcall MasterMissionComponent__checkIsOpen(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  MstMissionDisplayInfoMaster_o *v5; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct MstMissionMaster_o *mstMissionMst; // x8
  _BOOL4 v14; // w22
  _BOOL4 v15; // w23
  struct System_String_o **p_titleTxt; // x21
  System_Int32_array **v17; // x1
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 *v32; // x8
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_String_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_4352270 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_8956/*"MST_REMISSON_MSG"*/);
    sub_B70694(&StringLiteral_8954/*"MST_REDISP_MSG"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_8957/*"MST_REMISSON_TITLE_TXT"*/);
    sub_B70694(&StringLiteral_8955/*"MST_REDISP_TITLE_TXT"*/);
    byte_4352270 = 1;
  }
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !Instance )
    goto LABEL_29;
  v5 = (MstMissionDisplayInfoMaster_o *)Instance;
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v5->fields.list;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  mstMissionMst = this->fields.mstMissionMst;
  if ( !mstMissionMst )
    goto LABEL_29;
  this->fields.currentType = *(&mstMissionMst->fields.revision + 1);
  if ( !Instance || !Instance->fields.datalist || MstMissionMaster__IsOpenNow(mstMissionMst, 0LL) )
  {
    LOBYTE(v14) = 0;
    if ( !list )
      goto LABEL_16;
    goto LABEL_11;
  }
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
LABEL_29:
    sub_B7076C(Instance, v4);
  v14 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0LL);
  if ( !list )
    goto LABEL_16;
LABEL_11:
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1
    && !MstMissionDisplayInfoMaster__IsOpenNow(v5, 0LL) )
  {
    v15 = !MstMissionDisplayInfoMaster__IsBefOpenTime(v5, 0LL);
    goto LABEL_17;
  }
LABEL_16:
  LOBYTE(v15) = 0;
LABEL_17:
  p_titleTxt = &this->fields.titleTxt;
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.titleTxt, v17, v7, v8, v9, v10, v11, v12);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.msgTxt, v18, v19, v20, v21, v22, v23, v24);
  if ( v14 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_8957/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
    *p_titleTxt = (struct System_String_o *)v25;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.titleTxt, v25, v26, v27, v28, v29, v30, v31);
    v32 = &StringLiteral_8956/*"MST_REMISSON_MSG"*/;
LABEL_27:
    v40 = LocalizationManager__Get((System_String_o *)*v32, 0LL);
    this->fields.msgTxt = v40;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.msgTxt,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    goto LABEL_28;
  }
  if ( v15 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_8955/*"MST_REDISP_TITLE_TXT"*/, 0LL);
    *p_titleTxt = (struct System_String_o *)v33;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.titleTxt, v33, v34, v35, v36, v37, v38, v39);
    v32 = &StringLiteral_8954/*"MST_REDISP_MSG"*/;
    goto LABEL_27;
  }
LABEL_28:
  this->fields.isNotNext = v14 || v15;
}


void __fastcall MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_B7076C(0LL, method);
  StandFigureBack__DestroyFigure(standFigureBack, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildDailyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 currentEventIdList; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v14; // w26
  Il2CppClass **v15; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x23
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  MstMissionDisplayInfoEntity_o *v27; // x0
  __int64 v28; // x1
  struct MstMissionDisplayInfoEntity_o *v29; // x24
  __int64 v30; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v41; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v56; // x10
  int v57; // w9
  int32_t missionTargetId; // w22
  __int64 v59; // x21
  __int64 v60; // x9
  __int64 v61; // x9
  __int64 v63; // x0

  if ( (byte_4352272 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&MstMissionDisplayInfoEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352272 = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_77;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_77;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v4, v5, v6, v7, v8, v9);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_77;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v63 = sub_B70798(currentEventIdList);
        sub_B70738(v63, 0LL);
      }
      v15 = &mstMissionList->obj.klass + (int)v14;
      v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15[4];
      if ( !v16 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v15[4], 0LL);
      if ( (currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (__int64)EventMissionMaster__getDailyMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        v16->fields.missionConditionDetailId,
                                        0LL);
        if ( !currentEventIdList )
          break;
        method = (const MethodInfo *)currentEventIdList;
        if ( *(_QWORD *)(currentEventIdList + 24) )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
            (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = (__int64)this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)currentEventIdList,
            v16->fields.missionConditionDetailId,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
            v16,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_20;
    }
LABEL_77:
    sub_B7076C(currentEventIdList, method);
  }
LABEL_20:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_77;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_1CA37BC *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_34:
      v26 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                             Enumerator,
                                             *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      goto LABEL_79;
    v30 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (MstMissionDisplayInfoEntity_c *)v27->klass->_2.typeHierarchy[v30 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v27 = (MstMissionDisplayInfoEntity_o *)sub_B70A60(v27);
LABEL_79:
      sub_B7076C(v27, v28);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v27, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v29->fields.guideImageId;
      if ( guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        guideImageId = isOpenNow->static_fields->DEFAULT_SVT_ID;
      }
      if ( !this )
        sub_B7076C(isOpenNow, v32);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v29->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v41 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v41 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v41->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v29->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      id = v29->fields.id;
      this->fields.currentMissionDispInfoEnt = v29;
      this->fields.currentDispId = id;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v29,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
  }
  v50 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_56:
    v53 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                         Enumerator,
                         *(_QWORD *)(v53 + 8));
  if ( v11 )
  {
    size = v11->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v11->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      items = v11->fields._items;
      v56 = items->m_Items[0];
      if ( !v56 )
        goto LABEL_77;
      v57 = v11->fields._size;
      missionTargetId = v56->fields.missionTargetId;
      if ( v57 >= 1 )
      {
        v59 = 4LL;
        do
        {
          if ( v57 <= (unsigned int)(v59 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v60 = *((_QWORD *)&items->obj.klass + v59);
          if ( !v60 )
            goto LABEL_77;
          if ( missionTargetId > *(_DWORD *)(v60 + 16) )
          {
            if ( v11->fields._size <= (unsigned int)(v59 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v61 = *((_QWORD *)&items->obj.klass + v59);
            if ( !v61 )
              goto LABEL_77;
            missionTargetId = *(_DWORD *)(v61 + 16);
          }
          v57 = v11->fields._size;
        }
        while ( (int)++v59 - 4 < v57 );
      }
      this->fields.currentMissionId = missionTargetId;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v11;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildLimitedMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  struct MstMissionEntity_array *mstMissionList; // x26
  int max_length; // w8
  unsigned int v15; // w27
  Il2CppClass **v16; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x24
  int32_t missionConditionDetailId; // w1
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  MstMissionDisplayInfoEntity_o *v29; // x0
  __int64 v30; // x1
  struct MstMissionDisplayInfoEntity_o *v31; // x25
  __int64 v32; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v43; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  int32_t v56; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v58; // x10
  int size; // w9
  int32_t missionTargetId; // w23
  __int64 v61; // x22
  __int64 v62; // x9
  __int64 v63; // x9
  __int64 v65; // x0

  if ( (byte_4352275 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&MstMissionDisplayInfoEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352275 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (System_Collections_Generic_List_int__o *)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v4, v5, v6, v7, v8, v9);
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v65 = sub_B70798(currentEventIdList);
        sub_B70738(v65, 0LL);
      }
      v16 = &mstMissionList->obj.klass + (int)v15;
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16[4];
      if ( !v17 )
        break;
      currentEventIdList = (System_Collections_Generic_List_int__o *)MstMissionEntity__isOpenNow(
                                                                       (MstMissionEntity_o *)v16[4],
                                                                       0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v17->fields.missionConditionDetailId;
      if ( ((unsigned __int8)currentEventIdList & 1) != 0 )
      {
        currentEventIdList = (System_Collections_Generic_List_int__o *)EventMissionMaster__getLimitedMissionList(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         missionConditionDetailId,
                                                                         0LL);
        if ( currentEventIdList )
        {
          method = (const MethodInfo *)currentEventIdList;
          if ( currentEventIdList->fields._size >= 1 )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
              (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
              (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            currentEventIdList = this->fields.currentEventIdList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_int___Add(
              currentEventIdList,
              v17->fields.missionConditionDetailId,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
            currentEventIdList = (System_Collections_Generic_List_int__o *)this->fields.currentMstMissionEntList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
              v17,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
          }
        }
      }
      else
      {
        currentEventIdList = (System_Collections_Generic_List_int__o *)EventMissionMaster__getClearMasterMissionList(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         missionConditionDetailId,
                                                                         5,
                                                                         0LL);
        if ( !v11 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
          (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B7076C(currentEventIdList, method);
  }
LABEL_22:
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  currentEventIdList = (System_Collections_Generic_List_int__o *)DataManager__getEntityList_QuestReleaseMaster_(
                                                                   (DataManager_o *)currentEventIdList,
                                                                   (const MethodInfo_1CA37BC *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_36:
      v28 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                             Enumerator,
                                             *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      goto LABEL_84;
    v32 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (MstMissionDisplayInfoEntity_c *)v29->klass->_2.typeHierarchy[v32 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v29 = (MstMissionDisplayInfoEntity_o *)sub_B70A60(v29);
LABEL_84:
      sub_B7076C(v29, v30);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v29, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v31->fields.guideImageId;
      if ( guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        guideImageId = isOpenNow->static_fields->DEFAULT_SVT_ID;
      }
      if ( !this )
        sub_B7076C(isOpenNow, v34);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v31->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v43 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v43 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v43->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v31->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      id = v31->fields.id;
      this->fields.currentMissionDispInfoEnt = v31;
      this->fields.currentDispId = id;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v31,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
  }
  v52 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      v54 += 4;
      if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_58;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_58:
    v55 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  currentEventIdList = (System_Collections_Generic_List_int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v55 + 8));
  if ( v12 && (v56 = v12->fields._size, v56 >= 1) )
  {
    this->fields.totalMissionNum = v56;
    if ( !v12->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    items = v12->fields._items;
    v58 = items->m_Items[0];
    if ( !v58 )
      goto LABEL_82;
    size = v12->fields._size;
    if ( size >= 1 )
    {
      missionTargetId = v58->fields.missionTargetId;
      v61 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v61 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v62 = *((_QWORD *)&items->obj.klass + v61);
        if ( !v62 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v62 + 16) )
        {
          if ( v12->fields._size <= (unsigned int)(v61 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v63 = *((_QWORD *)&items->obj.klass + v61);
          if ( !v63 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v63 + 16);
        }
        size = v12->fields._size;
      }
      while ( (int)++v61 - 4 < size );
    }
    this->fields.currentMissionId = 0;
    if ( !v11 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v11 )
      goto LABEL_82;
    if ( v11->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v11;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildWeeklyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 currentEventIdList; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v15; // w28
  Il2CppClass **v16; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x24
  int32_t missionConditionDetailId; // w1
  System_Collections_Generic_IEnumerable_T__o *v19; // x25
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  MstMissionDisplayInfoEntity_o *v30; // x0
  __int64 v31; // x1
  struct MstMissionDisplayInfoEntity_o *v32; // x25
  __int64 v33; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v44; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  int32_t v57; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x10
  int size; // w9
  int32_t missionTargetId; // w23
  __int64 v62; // x22
  __int64 v63; // x9
  __int64 v64; // x9
  __int64 v66; // x0

  if ( (byte_4352273 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&MstMissionDisplayInfoEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352273 = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v4, v5, v6, v7, v8, v9);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v66 = sub_B70798(currentEventIdList);
        sub_B70738(v66, 0LL);
      }
      v16 = &mstMissionList->obj.klass + (int)v15;
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16[4];
      if ( !v17 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v16[4], 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v17->fields.missionConditionDetailId;
      if ( (currentEventIdList & 1) != 0 )
      {
        currentEventIdList = (__int64)EventMissionMaster__getWeeklyMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        missionConditionDetailId,
                                        0LL);
        if ( !currentEventIdList )
          break;
        v19 = (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList;
        if ( *(_QWORD *)(currentEventIdList + 24) )
        {
          currentEventIdList = (__int64)this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)currentEventIdList,
            v17->fields.missionConditionDetailId,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v12 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
            v19,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
            v17,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      else
      {
        currentEventIdList = (__int64)EventMissionMaster__getClearMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        missionConditionDetailId,
                                        2,
                                        0LL);
        if ( !v11 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
          (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B7076C(currentEventIdList, method);
  }
LABEL_22:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_1CA37BC *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_36:
      v29 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                             Enumerator,
                                             *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      goto LABEL_84;
    v33 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v33
      || (MstMissionDisplayInfoEntity_c *)v30->klass->_2.typeHierarchy[v33 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v30 = (MstMissionDisplayInfoEntity_o *)sub_B70A60(v30);
LABEL_84:
      sub_B7076C(v30, v31);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v30, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v32->fields.guideImageId;
      if ( guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        guideImageId = isOpenNow->static_fields->DEFAULT_SVT_ID;
      }
      if ( !this )
        sub_B7076C(isOpenNow, v35);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v32->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v44 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v44 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v44->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v32->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      id = v32->fields.id;
      this->fields.currentMissionDispInfoEnt = v32;
      this->fields.currentDispId = id;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v32,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
  }
  v53 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_58;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_58:
    v56 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                         Enumerator,
                         *(_QWORD *)(v56 + 8));
  if ( v12 && (v57 = v12->fields._size, v57 >= 1) )
  {
    this->fields.totalMissionNum = v57;
    if ( !v12->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    items = v12->fields._items;
    v59 = items->m_Items[0];
    if ( !v59 )
      goto LABEL_82;
    size = v12->fields._size;
    missionTargetId = v59->fields.missionTargetId;
    if ( size >= 1 )
    {
      v62 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v62 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v63 = *((_QWORD *)&items->obj.klass + v62);
        if ( !v63 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v63 + 16) )
        {
          if ( v12->fields._size <= (unsigned int)(v62 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v64 = *((_QWORD *)&items->obj.klass + v62);
          if ( !v64 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v64 + 16);
        }
        size = v12->fields._size;
      }
      while ( (int)++v62 - 4 < size );
    }
    this->fields.currentMissionId = missionTargetId;
    if ( !v11 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v11 )
      goto LABEL_82;
    if ( v11->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v11;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getValidExtraMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 currentEventIdList; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v14; // w26
  Il2CppClass **v15; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x23
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  MstMissionDisplayInfoEntity_o *v27; // x0
  __int64 v28; // x1
  struct MstMissionDisplayInfoEntity_o *v29; // x24
  __int64 v30; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v41; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v56; // x10
  int v57; // w9
  int32_t missionTargetId; // w22
  __int64 v59; // x21
  __int64 v60; // x9
  __int64 v61; // x9
  __int64 v63; // x0

  if ( (byte_4352274 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&MstMissionDisplayInfoEntity_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352274 = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_78;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v4, v5, v6, v7, v8, v9);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v63 = sub_B70798(currentEventIdList);
        sub_B70738(v63, 0LL);
      }
      v15 = &mstMissionList->obj.klass + (int)v14;
      v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15[4];
      if ( !v16 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v15[4], 0LL);
      if ( (currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (__int64)EventMissionMaster__getExtraMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        v16->fields.missionConditionDetailId,
                                        0LL);
        if ( currentEventIdList )
        {
          method = (const MethodInfo *)currentEventIdList;
          if ( *(int *)(currentEventIdList + 24) >= 1 )
          {
            if ( !v11 )
              break;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
              (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
              (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            currentEventIdList = (__int64)this->fields.currentEventIdList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)currentEventIdList,
              v16->fields.missionConditionDetailId,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
            currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
              v16,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_20;
    }
LABEL_78:
    sub_B7076C(currentEventIdList, method);
  }
LABEL_20:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_78;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_1CA37BC *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_34:
      v26 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                             Enumerator,
                                             *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      sub_B7076C(0LL, v28);
    v30 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (MstMissionDisplayInfoEntity_c *)v27->klass->_2.typeHierarchy[v30 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      currentEventIdList = sub_B70A60(v27);
      goto LABEL_78;
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v27, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v29->fields.guideImageId;
      if ( guideImageId <= 0 )
      {
        isOpenNow = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          isOpenNow = MasterMissionComponent_TypeInfo;
        }
        guideImageId = isOpenNow->static_fields->DEFAULT_SVT_ID;
      }
      if ( !this )
        sub_B7076C(isOpenNow, v32);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v29->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v41 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v41 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v41->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v29->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      id = v29->fields.id;
      this->fields.currentMissionDispInfoEnt = v29;
      this->fields.currentDispId = id;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v29,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
  }
  v50 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_56:
    v53 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                         Enumerator,
                         *(_QWORD *)(v53 + 8));
  if ( v11 )
  {
    size = v11->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v11->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      items = v11->fields._items;
      v56 = items->m_Items[0];
      if ( !v56 )
        goto LABEL_78;
      v57 = v11->fields._size;
      if ( v57 >= 1 )
      {
        missionTargetId = v56->fields.missionTargetId;
        v59 = 4LL;
        do
        {
          if ( v57 <= (unsigned int)(v59 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v60 = *((_QWORD *)&items->obj.klass + v59);
          if ( !v60 )
            goto LABEL_78;
          if ( missionTargetId > *(_DWORD *)(v60 + 16) )
          {
            if ( v11->fields._size <= (unsigned int)(v59 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v61 = *((_QWORD *)&items->obj.klass + v59);
            if ( !v61 )
              goto LABEL_78;
            missionTargetId = *(_DWORD *)(v61 + 16);
          }
          v57 = v11->fields._size;
        }
        while ( (int)++v59 - 4 < v57 );
      }
      this->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v11;
}


int32_t __fastcall MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_4352263 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4352263 = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B7076C(0LL, v5);
    result = ShopMaster__GetFragmentCountToExchangeForStone(Master_WarQuestSelectionMaster, 0LL);
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
  __int64 v5; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_B7076C(this, method);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
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
  MasterMissionComponent_o *v4; // x19
  __int64 *v5; // x8
  Il2CppObject *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  MasterMissionComponent_o *v13; // x20
  struct UnityEngine_GameObject_o *titlePrefab; // x8
  struct UnityEngine_GameObject_o *v15; // x8
  struct UnityEngine_GameObject_o *v16; // x8
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct UnityEngine_GameObject_o *v26; // x10
  MasterMissionListViewManager_o *v27; // x21
  System_Int32_array **monitor; // x1
  System_Int32_array **v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0

  v4 = this;
  if ( (byte_435228E & 1) == 0 )
  {
    sub_B70694(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    this = (MasterMissionComponent_o *)sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_435228E = 1;
  }
  if ( !result )
    goto LABEL_25;
  if ( !System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    v6 = (Il2CppObject *)System_String__Concat_44760452(
                           (System_String_o *)StringLiteral_15855/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16092/*"]"*/,
                           0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                         v6,
                                         (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( this )
    {
      v13 = this;
      if ( !LODWORD(this->fields.myFsm) )
        goto LABEL_26;
      titlePrefab = this->fields.titlePrefab;
      if ( !titlePrefab )
        goto LABEL_25;
      v4->fields.isOverPresentBox = (bool)titlePrefab[1].klass;
      if ( !LODWORD(this->fields.myFsm) )
        goto LABEL_26;
      v15 = this->fields.titlePrefab;
      if ( !v15 )
        goto LABEL_25;
      v4->fields.overflowType = HIDWORD(v15[1].klass);
      if ( !LODWORD(this->fields.myFsm) )
        goto LABEL_26;
      v16 = this->fields.titlePrefab;
      if ( !v16 )
        goto LABEL_25;
      v17 = *(System_Int32_array ***)&v16->fields.m_CachedPtr;
      v4->fields.receiveMissionIds = (struct System_Int32_array *)v17;
      sub_B70630((BattleServantConfConponent_o *)&v4->fields.receiveMissionIds, v17, v7, v8, v9, v10, v11, v12);
      missionListViewManager = v4->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_25;
      nowType = v4->fields.nowType;
      if ( (unsigned int)nowType >= missionListViewManager->max_length || !LODWORD(v13->fields.myFsm) )
      {
LABEL_26:
        v36 = sub_B70798(this);
        sub_B70738(v36, 0LL);
      }
      v26 = v13->fields.titlePrefab;
      if ( v26 )
      {
        v27 = missionListViewManager->m_Items[nowType];
        if ( v27 )
        {
          monitor = (System_Int32_array **)v26[1].monitor;
          v29 = *(System_Int32_array ***)&v26[1].fields.m_CachedPtr;
          v27->fields.getSvtList = (struct GetSvts_array *)monitor;
          sub_B70630((BattleServantConfConponent_o *)&v27->fields.getSvtList, monitor, v18, v19, v20, v21, v22, v23);
          v27->fields.getCommandCodeList = (struct GetCommandCodes_array *)v29;
          sub_B70630((BattleServantConfConponent_o *)&v27->fields.getCommandCodeList, v29, v30, v31, v32, v33, v34, v35);
          this = (MasterMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v5 = &StringLiteral_11233/*"REQUEST_OK"*/;
            goto LABEL_24;
          }
        }
      }
    }
LABEL_25:
    sub_B7076C(this, result);
  }
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_25;
  v5 = &StringLiteral_11231/*"REQUEST_NG"*/;
LABEL_24:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        const MethodInfo *method)
{
  bool _29045252; // w0
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4352282 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent_setNormalFace__);
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_4352282 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29045252 = TutorialFlag__Get_29045252(126, 0LL);
  if ( voiceIDs && !_29045252 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
    if ( !svtVoiceCtr )
      sub_B7076C(v9, v10);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v8, 0LL);
  }
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice_25861196(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
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
  bool _29045252; // w0
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v25; // x20

  if ( (byte_4352283 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__);
    sub_B70694(&MasterMissionComponent___c__DisplayClass171_0_TypeInfo);
    byte_4352283 = 1;
  }
  v7 = sub_B70764(MasterMissionComponent___c__DisplayClass171_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass171_0___ctor((MasterMissionComponent___c__DisplayClass171_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = action;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)action, v16, v17, v18, v19, v20, v21);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29045252 = TutorialFlag__Get_29045252(126, 0LL);
  if ( voiceIDs && !_29045252 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v7,
      Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__,
      0LL);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v25, 0LL);
      return;
    }
LABEL_12:
    sub_B7076C(v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__playSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playBtnImg; // x20
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x8
  UnityEngine_Transform_o *transform; // x20
  int v8; // s0
  EventSvtControl_o *svtVoiceCtr; // x20
  System_Action_o *v12; // x21

  if ( (byte_4352281 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_B70694(&Method_MasterMissionComponent_setNormalFace__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352281 = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(playBtnImg, 0LL, 0LL);
  if ( ((unsigned __int8)voicePlayEffect & 1) != 0 )
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
      voicePlayEffect = this->fields.voicePlayEffect;
      if ( !voicePlayEffect )
        goto LABEL_19;
      transform = UnityEngine_GameObject__get_transform(voicePlayEffect, 0LL);
      *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform
        || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v8, 0LL),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0LL
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0LL )
      {
LABEL_19:
        sub_B7076C(voicePlayEffect, v5);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_19;
  EventSvtControl__playVoice(svtVoiceCtr, v12, 0LL);
}


void __fastcall MasterMissionComponent__reDispMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  TerminalSceneComponent_c *v5; // x0
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v8; // x21
  MasterMissionComponent___c_c *v9; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__150_0; // x22
  Il2CppObject *v12; // x23
  struct MasterMissionComponent___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct MstMissionDisplayInfoEntity_o *currentMissionDispInfoEnt; // x8
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x24
  __int64 size; // x21
  int64_t v23; // x20
  __int64 v24; // x22
  unsigned __int64 v25; // x23
  struct System_Collections_Generic_List_MstMissionEntity__o *v26; // x24
  struct System_Collections_Generic_List_MstMissionEntity__o *v27; // x24
  __int64 v28; // x8
  int64_t v29; // x8
  __int64 v30; // x8
  int v31; // w21
  struct System_String_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_String_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct MstMissionDisplayInfoEntity_o *v46; // x8
  int v47; // w8
  __int64 *v48; // x8
  struct System_String_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 *v56; // x8
  struct System_String_o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  bool v64; // w9

  if ( (byte_4352271 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_MasterMissionComponent___c__reDispMissionList_b__150_0__);
    sub_B70694(&MasterMissionComponent___c_TypeInfo);
    sub_B70694(&StringLiteral_8956/*"MST_REMISSON_MSG"*/);
    sub_B70694(&StringLiteral_8954/*"MST_REDISP_MSG"*/);
    sub_B70694(&StringLiteral_8957/*"MST_REMISSON_TITLE_TXT"*/);
    sub_B70694(&StringLiteral_8955/*"MST_REDISP_TITLE_TXT"*/);
    byte_4352271 = 1;
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
    v23 = Time;
    if ( (int)size < 1 )
    {
LABEL_51:
      v31 = 0;
    }
    else
    {
      v24 = 4LL;
      while ( 1 )
      {
        v25 = v24 - 4;
        if ( v24 - 4 >= (unsigned __int64)(unsigned int)currentMstMissionEntList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( *((_QWORD *)&currentMstMissionEntList->fields._items->obj.klass + v24) )
        {
          v26 = this->fields.currentMstMissionEntList;
          if ( !v26 )
            goto LABEL_82;
          if ( v25 >= (unsigned int)v26->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          Time = *((_QWORD *)&v26->fields._items->obj.klass + v24);
          if ( !Time )
            goto LABEL_82;
          Time = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0LL);
          v27 = this->fields.currentMstMissionEntList;
          if ( (_DWORD)Time == 5 )
          {
            if ( !v27 )
              goto LABEL_82;
            if ( v25 >= (unsigned int)v27->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v28 = *((_QWORD *)&v27->fields._items->obj.klass + v24);
            if ( !v28 )
              goto LABEL_82;
            v29 = *(_QWORD *)(v28 + 40);
          }
          else
          {
            if ( !v27 )
              goto LABEL_82;
            if ( v25 >= (unsigned int)v27->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v30 = *((_QWORD *)&v27->fields._items->obj.klass + v24);
            if ( !v30 )
              goto LABEL_82;
            v29 = *(_QWORD *)(v30 + 32);
          }
          if ( v23 >= v29 )
            break;
        }
        if ( v24 - 3 >= size )
          goto LABEL_51;
        currentMstMissionEntList = this->fields.currentMstMissionEntList;
        ++v24;
        if ( !currentMstMissionEntList )
          goto LABEL_82;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8957/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
      this->fields.titleTxt = v32;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.titleTxt,
        (System_Int32_array **)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_8956/*"MST_REMISSON_MSG"*/, 0LL);
      this->fields.msgTxt = v39;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.msgTxt,
        (System_Int32_array **)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v31 = 1;
    }
    v46 = this->fields.currentMissionDispInfoEnt;
    if ( !v46 )
      goto LABEL_82;
    if ( v23 >= v46->fields.endedAt )
    {
      if ( (v31 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = &StringLiteral_8957/*"MST_REMISSON_TITLE_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = &StringLiteral_8955/*"MST_REDISP_TITLE_TXT"*/;
      }
      v49 = LocalizationManager__Get((System_String_o *)*v48, 0LL);
      this->fields.titleTxt = v49;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.titleTxt,
        (System_Int32_array **)v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      if ( (v31 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v56 = &StringLiteral_8956/*"MST_REMISSON_MSG"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v56 = &StringLiteral_8954/*"MST_REDISP_MSG"*/;
      }
      v57 = LocalizationManager__Get((System_String_o *)*v56, 0LL);
      this->fields.msgTxt = v57;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.msgTxt,
        (System_Int32_array **)v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      v47 = 1;
    }
    else
    {
      v47 = 0;
    }
    v64 = (v47 | v31) != 0;
    LODWORD(currentMissionDispInfoEnt) = this->fields.isNotNext;
    if ( v64 )
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
      v5 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v5 = TerminalSceneComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__DeleteKey(v5->static_fields->MASTER_MISSION_RESET_KEY, 0LL);
      Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      titleTxt = this->fields.titleTxt;
      msgTxt = this->fields.msgTxt;
      v8 = (CommonUI_o *)Time;
      v9 = MasterMissionComponent___c_TypeInfo;
      if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
        v9 = MasterMissionComponent___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__150_0 = static_fields->__9__150_0;
      if ( !_9__150_0 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__150_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(_9__150_0, v12, Method_MasterMissionComponent___c__reDispMissionList_b__150_0__, 0LL);
        v13 = MasterMissionComponent___c_TypeInfo->static_fields;
        v13->__9__150_0 = _9__150_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v13->__9__150_0,
          (System_Int32_array **)_9__150_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      if ( v8 )
      {
        CommonUI__OpenNotificationDialog(v8, titleTxt, msgTxt, _9__150_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
        return;
      }
LABEL_82:
      sub_B7076C(Time, v4);
    }
  }
}


void __fastcall MasterMissionComponent__setCurrentSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x21
  unsigned int size; // w8
  __int64 currentIdx; // x22
  EventSvtControl_o *svtVoiceCtr; // x20
  MasterMissionComponent_VoiceData_o *v7; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v8; // x22
  __int64 v9; // x23
  System_Collections_Generic_List_ServantVoiceData____o *DataListRand; // x21
  MasterMissionComponent_VoiceData_o *v11; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v12; // x23
  __int64 v13; // x24
  System_Collections_Generic_List_ServantVoiceData____o *DataListMission; // x22
  MasterMissionComponent_VoiceData_o *v15; // x8
  System_String_o *DataName; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct StandFigureBack_o *standFigureBack; // x8
  struct UnityEngine_GameObject_o *standFigureCollectList; // x1
  const MethodInfo *v25; // x1

  v2 = this;
  if ( (byte_4352280 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__);
    this = (MasterMissionComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
    byte_4352280 = 1;
  }
  currentVoiceDataList = v2->fields.currentVoiceDataList;
  if ( !currentVoiceDataList )
    goto LABEL_21;
  size = currentVoiceDataList->fields._size;
  if ( size )
  {
    currentIdx = v2->fields.currentIdx;
    svtVoiceCtr = v2->fields.svtVoiceCtr;
    if ( size <= (unsigned int)currentIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v7 = currentVoiceDataList->fields._items->m_Items[currentIdx];
    if ( v7 )
    {
      v8 = v2->fields.currentVoiceDataList;
      if ( v8 )
      {
        v9 = v2->fields.currentIdx;
        DataListRand = v7->fields.DataListRand;
        if ( v8->fields._size <= (unsigned int)v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v11 = v8->fields._items->m_Items[v9];
        if ( v11 )
        {
          v12 = v2->fields.currentVoiceDataList;
          if ( v12 )
          {
            v13 = v2->fields.currentIdx;
            DataListMission = v11->fields.DataListMission;
            if ( v12->fields._size <= (unsigned int)v13 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v15 = v12->fields._items->m_Items[v13];
            if ( v15 )
            {
              DataName = v15->fields.DataName;
              this = (MasterMissionComponent_o *)ServantVoiceMaster__getSvtVoiceId(v2->fields.currentEventSvtId, 0LL);
              if ( svtVoiceCtr )
              {
                EventSvtControl__setSvtVoice(
                  svtVoiceCtr,
                  DataListRand,
                  DataListMission,
                  0LL,
                  DataName,
                  (int32_t)this,
                  0LL);
                standFigureBack = v2->fields.standFigureBack;
                if ( standFigureBack )
                {
                  this = (MasterMissionComponent_o *)v2->fields.svtVoiceCtr;
                  if ( this )
                  {
                    standFigureCollectList = (struct UnityEngine_GameObject_o *)standFigureBack->fields.standFigureCollectList;
                    this->fields.eventMissionInfo = standFigureCollectList;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&this->fields.eventMissionInfo,
                      (System_Int32_array **)standFigureCollectList,
                      v17,
                      v18,
                      v19,
                      v20,
                      v21,
                      v22);
                    MasterMissionComponent__playSvtVoice(v2, v25);
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
    sub_B7076C(this, method);
  }
}


void __fastcall MasterMissionComponent__setGuideSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v4; // x1
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x21
  ServantVoiceMaster_o *v6; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v24; // x22
  struct System_String_o *VoiceAssetName; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  struct System_String_array *voiceNameList; // x23
  __int64 v34; // x8
  unsigned __int64 v35; // x24
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  MasterMissionComponent_VoiceData_o *v46; // x22
  int32_t v47; // w8
  Il2CppObject *current; // x21
  WebViewManager_o *v49; // x0
  __int64 v50; // x1
  SoundManager_o *v51; // x20
  System_String_o *klass; // x21
  System_Action_o *v53; // x22
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x0
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+0h] [xbp-60h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4352277 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__);
    sub_B70694(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
    sub_B70694(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&MasterMissionComponent_VoiceData_TypeInfo);
    byte_4352277 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  memset(&v57, 0, sizeof(v57));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v6 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentVoiceDataList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.voiceListRand,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  currentEventSvtId = this->fields.currentEventSvtId;
  this->fields.downLoadCnt = 0;
  Instance = (void *)ServantVoiceMaster__getSvtVoiceId(currentEventSvtId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  ServantLimitAddMaster__getVoiceIndex(
    MasterData_WarQuestSelectionMaster,
    &voicePrefix[1],
    voicePrefix,
    (int32_t)Instance,
    this->fields.currentEventSvtLimitCnt,
    0LL);
  if ( !v6 )
    goto LABEL_31;
  Entity = ServantVoiceMaster__GetEntity(v6, voicePrefix[1], voicePrefix[0], 8, 0LL);
  if ( !Entity )
    goto LABEL_19;
  v24 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0LL);
  this->fields.lastAssetName = VoiceAssetName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.lastAssetName,
    (System_Int32_array **)VoiceAssetName,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    v34 = *(_QWORD *)&voiceNameList->max_length;
    if ( v34 )
    {
      if ( (int)v34 >= 1 )
      {
        v35 = 0LL;
        do
        {
          if ( v35 >= (unsigned int)v34 )
          {
            v56 = sub_B70798(MstMissionVoiceListByName);
            sub_B70738(v56, 0LL);
          }
          MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                        v24,
                                        voiceNameList->m_Items[v35],
                                        0LL);
          if ( MstMissionVoiceListByName )
          {
            v4 = (EventMissionProgressRequest_Argument_ProgressData_o *)MstMissionVoiceListByName;
            Instance = *p_voiceListRand;
            if ( !*p_voiceListRand )
              goto LABEL_31;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              v4,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
          LODWORD(v34) = voiceNameList->max_length;
          ++v35;
        }
        while ( (__int64)v35 < (int)v34 );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v24, 0LL);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.voiceListMission,
    (System_Int32_array **)MasterMissionActionVoiceList,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  currentVoiceDataList = this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v46 = (MasterMissionComponent_VoiceData_o *)sub_B70764(MasterMissionComponent_VoiceData_TypeInfo);
  MasterMissionComponent_VoiceData___ctor(v46, VoiceAssetName, voiceListRand, voiceListMission, 0LL);
  if ( !currentVoiceDataList )
LABEL_31:
    sub_B7076C(Instance, v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentVoiceDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__);
LABEL_19:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_31;
  v47 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v47;
  if ( v47 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, (const MethodInfo *)v4);
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v57,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v57.fields.current;
      v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_B7076C(v49, v50);
      v51 = (SoundManager_o *)v49;
      klass = (System_String_o *)current[1].klass;
      v53 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v53, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0LL);
      if ( !v51 )
        sub_B7076C(v54, v55);
      SoundManager__LoadAudioAssetStorage(v51, klass, v53, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v57,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
  }
}


void __fastcall MasterMissionComponent__setMissionCompleteNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x24
  signed __int64 size; // x21
  int32_t compMissionNum; // w22
  UserEventMissionMaster_o *v8; // x20
  unsigned __int64 v9; // x23
  System_String_o *v10; // x20
  UILabel_o *eventMissionTxt2; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x22
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  UILabel_o *v16; // x19
  UILabel_o *eventMissionTxt; // x21
  __int64 v18; // x2
  Il2CppObject *v19; // x22
  __int64 v20; // x2
  Il2CppObject *v21; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4352276 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_8740/*"MASTER_MISSION_COMPLETE_NUM"*/);
    byte_4352276 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_28;
  size = currentEventIdList->fields._size;
  if ( (int)size >= 1 )
  {
    compMissionNum = this->fields.compMissionNum;
    v8 = (UserEventMissionMaster_o *)Instance;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)currentEventIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( !v8 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(
                                    v8,
                                    currentEventIdList->fields._items->m_Items[++v9],
                                    0LL);
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( (__int64)v9 >= size )
        goto LABEL_13;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_28:
    sub_B7076C(Instance, v4);
  }
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8740/*"MASTER_MISSION_COMPLETE_NUM"*/, 0LL);
  if ( !this->fields.eventMissionInfo )
    goto LABEL_28;
  v10 = (System_String_o *)Instance;
  if ( this->fields.nowType )
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 0, 0LL);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    eventMissionTxt2 = this->fields.eventMissionTxt2;
    v23 = this->fields.compMissionNum;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v12);
    totalMissionNum = this->fields.totalMissionNum;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum, v14);
    Instance = (DataManager_o *)System_String__Format_44753704(v10, v13, v15, 0LL);
    if ( !eventMissionTxt2 )
      goto LABEL_28;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0LL);
    v16 = this->fields.eventMissionTxt2;
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    }
    if ( !v16 )
      goto LABEL_28;
    UILabel__SetCondensedScale_41496620(
      v16,
      MasterMissionComponent_TypeInfo->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH,
      0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 1, 0LL);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    eventMissionTxt = this->fields.eventMissionTxt;
    v23 = this->fields.compMissionNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v18);
    totalMissionNum = this->fields.totalMissionNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum, v20);
    Instance = (DataManager_o *)System_String__Format_44753704(v10, v19, v21, 0LL);
    if ( !eventMissionTxt )
      goto LABEL_28;
    UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall MasterMissionComponent__setMySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x19
  int32_t currentEventSvtId; // w20
  MasterMissionComponent_c *v5; // x0

  if ( (byte_435227F & 1) == 0 )
  {
    sub_B70694(&MasterMissionComponent_TypeInfo);
    byte_435227F = 1;
  }
  standFigureBack = this->fields.standFigureBack;
  currentEventSvtId = this->fields.currentEventSvtId;
  v5 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !standFigureBack )
    sub_B7076C(v5, method);
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

  if ( (byte_4352284 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352284 = 1;
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
  voicePlayEffect = (UnityEngine_GameObject_o *)this->fields.standFigureBack;
  if ( !voicePlayEffect )
LABEL_11:
    sub_B7076C(voicePlayEffect, v4);
  StandFigureBack__SetFaceType((StandFigureBack_o *)voicePlayEffect, 0, 0.0, 0, 0LL);
}


void __fastcall MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
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
  __int64 v11; // x0

  v3 = this;
  if ( (byte_4352295 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (MasterMissionComponent_o *)sub_B70694(&Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__);
    byte_4352295 = 1;
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
        (v6 = v3->fields.missionListViewManager) == 0LL) )
  {
LABEL_10:
    sub_B7076C(this, method);
  }
  v7 = v3->fields.nowType;
  if ( (unsigned int)v7 >= v6->max_length )
  {
LABEL_11:
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
  v8 = (MissionListViewManager_o *)v6->m_Items[v7];
  v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v3, Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__, 0LL);
  if ( !v8 )
    goto LABEL_10;
  MissionListViewManager__SetMode(v8, 3, v9, 0LL);
  MasterMissionComponent__RefreshInfo(v3, v10);
}


void __fastcall MasterMissionComponent__stopSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    sub_B7076C(0LL, method);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


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
  if ( (byte_434F3D7 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434F3D7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B706C4(v20) & 1) == 0 )
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
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
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
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
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
            v14 = sub_B08590(v19, class_0, v9);
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

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._MstMissionEntity_k__BackingField = mstMission;
  v10 = (MasterMissionComponent_MasterMissionInfoItem_o *)((char *)v10 + 16);
  sub_B70630(v10);
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
  this->fields._MstMissionEntity_k__BackingField = value;
  sub_B70630(&this->fields);
}


void __fastcall MasterMissionComponent_VoiceData___ctor(
        MasterMissionComponent_VoiceData_o *this,
        System_String_o *voiceDataName,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListRand,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListMission,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.DataName = voiceDataName;
  sub_B70630(&this->fields);
  this->fields.DataListRand = voiceDataListRand;
  sub_B70630(&this->fields.DataListRand);
  this->fields.DataListMission = voiceDataListMission;
  sub_B70630(&this->fields.DataListMission);
}


void __fastcall MasterMissionComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434F3CE & 1) == 0 )
  {
    sub_B70694(&MasterMissionComponent___c_TypeInfo);
    byte_434F3CE = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(MasterMissionComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MasterMissionComponent___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall MasterMissionComponent___c___ctor(MasterMissionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c___ExitCompleteMission_b__147_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19
  TerminalSceneComponent_c *v5; // x0
  ErrorDialog_c *klass; // x8

  if ( (byte_434F3D0 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434F3D0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_25;
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v5->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_25;
  TerminalSceneComponent__playBgm_18546388((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass || (Instance = *(CommonUI_o **)&klass->_2.instance_size) == 0LL )
LABEL_25:
    sub_B7076C(Instance, v3);
  ScrPlayerStatus__OpenMasterMissionFromCompleteMission((ScrPlayerStatus_o *)Instance, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v3; // x1
  SceneJumpInfo_o *v4; // x19

  if ( (byte_434F3D2 & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_13258/*"StoneFragments"*/);
    byte_434F3D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission(Instance, 0LL),
        v4 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_17523664(v4, (System_String_o *)StringLiteral_13258/*"StoneFragments"*/, 0LL),
        !v4)
    || (SceneJumpInfo__SetReturnNowScene(v4, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v3);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0LL);
}


void __fastcall MasterMissionComponent___c___OpenCompleteMission_b__145_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_434F3CF & 1) == 0 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434F3CF = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
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
    sub_B7076C(0LL, method);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0LL);
}


void __fastcall MasterMissionComponent___c___reDispMissionList_b__150_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_434F3D1 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_434F3D1 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (MasterMissionComponent__setNormalFace(_4__this, 0LL),
        (_4__this = (MasterMissionComponent_o *)this->fields.action) == 0LL) )
  {
    sub_B7076C(_4__this, method);
  }
  System_Action__Invoke((System_Action_o *)_4__this, 0LL);
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
  MasterMissionComponent___c__DisplayClass181_0_o *v4; // x19
  struct MasterMissionComponent_o *_4__this; // x8
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 v7; // x1
  __int64 MissionId; // x0
  __int64 *v9; // x8
  struct MasterMissionComponent_o *v10; // x21
  struct MasterMissionComponent_o *v11; // x8
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_434F3D3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&StringLiteral_3123/*"CLICK_DECIDE"*/);
    this = (MasterMissionComponent___c__DisplayClass181_0_o *)sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_434F3D3 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v6 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    this = (MasterMissionComponent___c__DisplayClass181_0_o *)v4->fields.items;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v12,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v13 = v12;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v13,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__) )
      {
        if ( !v13.fields.current )
          sub_B7076C(0LL, v7);
        MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v13.fields.current, 0LL);
        if ( !v6 )
          sub_B7076C(MissionId, (unsigned int)MissionId);
        System_Collections_Generic_List_int___Add(
          v6,
          MissionId,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v13,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v6 )
      {
        v10 = v4->fields.__4__this;
        this = (MasterMissionComponent___c__DisplayClass181_0_o *)System_Collections_Generic_List_int___ToArray(
                                                                    v6,
                                                                    (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v10 )
        {
          v10->fields.sendMissionIds = (struct System_Int32_array *)this;
          sub_B70630(&v10->fields.sendMissionIds);
          v11 = v4->fields.__4__this;
          if ( v11 )
          {
            this = (MasterMissionComponent___c__DisplayClass181_0_o *)v11->fields.myFsm;
            if ( this )
            {
              v9 = &StringLiteral_3123/*"CLICK_DECIDE"*/;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B7076C(this, isDecide);
  }
  this = (MasterMissionComponent___c__DisplayClass181_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_21;
  v9 = &StringLiteral_3116/*"CLICK_CANCEL"*/;
LABEL_18:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
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
  MasterMissionComponent___c__DisplayClass187_0_o *v2; // x19
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_434F3D4 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11905/*"SERVANT_OVER"*/);
    sub_B70694(&StringLiteral_10631/*"PRESENT_BOX_OVER"*/);
    this = (MasterMissionComponent___c__DisplayClass187_0_o *)sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_434F3D4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterMissionComponent___c__DisplayClass187_0_o *)_4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( this )
    {
      v4 = &StringLiteral_10631/*"PRESENT_BOX_OVER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B7076C(this, method);
  }
  if ( !this )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v4 = &StringLiteral_11905/*"SERVANT_OVER"*/;
  else
    v4 = &StringLiteral_3116/*"CLICK_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v4, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__1(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *nextAction; // x0

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_B7076C(0LL, method);
  System_Action__Invoke(nextAction, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__2(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *nextAction; // x0

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_B7076C(0LL, method);
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
  struct MasterMissionComponent_o *_4__this; // x0
  __int64 *v4; // x9

  if ( (byte_434F3D5 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11905/*"SERVANT_OVER"*/);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_434F3D5 = 1;
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
    sub_B7076C(_4__this, method);
  if ( _4__this->fields.overflowType )
    v4 = &StringLiteral_11905/*"SERVANT_OVER"*/;
  else
    v4 = &StringLiteral_3116/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent(_4__this->fields.myFsm, (System_String_o *)*v4, 0LL);
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
  struct MasterMissionComponent_o *_4__this; // x21
  MasterMissionComponent_o *Object_WarBoardWaitTimeSetting; // x0
  struct MasterMissionComponent_o *v7; // x8
  int32_t exchangeCount; // w20

  if ( (byte_434F3D6 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    byte_434F3D6 = 1;
  }
  _4__this = this->fields.__4__this;
  Object_WarBoardWaitTimeSetting = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !assetData )
    goto LABEL_15;
  Object_WarBoardWaitTimeSetting = (MasterMissionComponent_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
                                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B70630(&_4__this->fields.btnEffectBasePrefab);
  Object_WarBoardWaitTimeSetting = this->fields.__4__this;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_15;
  MasterMissionComponent__StopStoneButtonEffect(Object_WarBoardWaitTimeSetting, 0LL);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_15;
  if ( v7->fields.nowType == 1 )
  {
    exchangeCount = this->fields.exchangeCount;
    if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
    {
      Object_WarBoardWaitTimeSetting = this->fields.__4__this;
      if ( Object_WarBoardWaitTimeSetting )
      {
        MasterMissionComponent__PlayStoneButtonEffect(Object_WarBoardWaitTimeSetting, 0LL);
        return;
      }
LABEL_15:
      sub_B7076C(Object_WarBoardWaitTimeSetting, assetData);
    }
  }
}


void __fastcall MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}