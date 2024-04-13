void __fastcall MasterMissionComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  MasterMissionComponent_c *v35; // x8
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  System_Int32_array **v37; // x1
  struct MasterMissionComponent_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct MasterMissionComponent_StaticFields *v46; // x0
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct MasterMissionComponent_StaticFields *v54; // x0
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct MasterMissionComponent_StaticFields *v62; // x0
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct MasterMissionComponent_StaticFields *v70; // x0
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct MasterMissionComponent_StaticFields *v78; // x0
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct MasterMissionComponent_StaticFields *v86; // x0
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct MasterMissionComponent_StaticFields *v94; // x0
  System_Int32_array **v95; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  MasterMissionComponent_c *v102; // x8
  struct MasterMissionComponent_StaticFields *v103; // x8

  if ( (byte_42E89B1 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17275/*"btn_txt_off_limited"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17274/*"btn_txt_off_extra"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17281/*"btn_txt_on_limited"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18396/*"ef_btn_blink"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17273/*"btn_txt_off_daily"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17279/*"btn_txt_on_daily"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_17282/*"btn_txt_on_weekly"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_17276/*"btn_txt_off_weekly"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_17280/*"btn_txt_on_extra"*/, v32, v33, v34);
    byte_42E89B1 = 1;
  }
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID = 9000001;
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_LIMITCNT = 0;
  v35 = MasterMissionComponent_TypeInfo;
  MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  static_fields = v35->static_fields;
  v37 = (System_Int32_array **)StringLiteral_17279/*"btn_txt_on_daily"*/;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17279/*"btn_txt_on_daily"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v37, v2, v3, v4, v5, v6, v7);
  v38 = MasterMissionComponent_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_17273/*"btn_txt_off_daily"*/;
  v38->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17273/*"btn_txt_off_daily"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v38->DAILY_OFF_SPRITE_LABEL, v39, v40, v41, v42, v43, v44, v45);
  v46 = MasterMissionComponent_TypeInfo->static_fields;
  v47 = (System_Int32_array **)StringLiteral_17282/*"btn_txt_on_weekly"*/;
  v46->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17282/*"btn_txt_on_weekly"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v46->WEEKLY_ON_SPRITE_LABEL, v47, v48, v49, v50, v51, v52, v53);
  v54 = MasterMissionComponent_TypeInfo->static_fields;
  v55 = (System_Int32_array **)StringLiteral_17276/*"btn_txt_off_weekly"*/;
  v54->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17276/*"btn_txt_off_weekly"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v54->WEEKLY_OFF_SPRITE_LABEL, v55, v56, v57, v58, v59, v60, v61);
  v62 = MasterMissionComponent_TypeInfo->static_fields;
  v63 = (System_Int32_array **)StringLiteral_17280/*"btn_txt_on_extra"*/;
  v62->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17280/*"btn_txt_on_extra"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v62->EXTRA_ON_SPRITE_LABEL, v63, v64, v65, v66, v67, v68, v69);
  v70 = MasterMissionComponent_TypeInfo->static_fields;
  v71 = (System_Int32_array **)StringLiteral_17274/*"btn_txt_off_extra"*/;
  v70->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17274/*"btn_txt_off_extra"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v70->EXTRA_OFF_SPRITE_LABEL, v71, v72, v73, v74, v75, v76, v77);
  v78 = MasterMissionComponent_TypeInfo->static_fields;
  v79 = (System_Int32_array **)StringLiteral_17281/*"btn_txt_on_limited"*/;
  v78->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17281/*"btn_txt_on_limited"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v78->LIMITED_ON_SPRITE_LABEL, v79, v80, v81, v82, v83, v84, v85);
  v86 = MasterMissionComponent_TypeInfo->static_fields;
  v87 = (System_Int32_array **)StringLiteral_17275/*"btn_txt_off_limited"*/;
  v86->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17275/*"btn_txt_off_limited"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v86->LIMITED_OFF_SPRITE_LABEL, v87, v88, v89, v90, v91, v92, v93);
  v94 = MasterMissionComponent_TypeInfo->static_fields;
  v95 = (System_Int32_array **)StringLiteral_18396/*"ef_btn_blink"*/;
  v94->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_18396/*"ef_btn_blink"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v94->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v102 = MasterMissionComponent_TypeInfo;
  MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME = 0.1;
  v102->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH = 92.0;
  v102->static_fields->NOTICE_NUMBER_BADGE_DEPTH = 10;
  v102->static_fields->NOTICE_NUMBER_BADGE_WIDTH = 40;
  v102->static_fields->NOTICE_NUMBER_BADGE_HEIGHT = 40;
  v102->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE = 16;
  v102->static_fields->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v103 = v102->static_fields;
  v103->BLANK_EARTH_WINDOW_POS.fields.x = 0.0;
  v103->BLANK_EARTH_WINDOW_POS.fields.y = 0.0;
  v103->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
}


void __fastcall MasterMissionComponent___ctor(MasterMissionComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionComponent__AcceptReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  System_Int32_array *receiveMissionIds; // x20
  MasterMissionListViewManager_o *v13; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3
  __int64 v16; // x0

  if ( (byte_42E899E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_MasterMissionComponent__AcceptReward_b__186_0__, v5, v6, v7);
    byte_42E899E = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v16 = sub_B5D6C8(v8);
    sub_B5D668(v16, 0LL);
  }
  receiveMissionIds = this->fields.receiveMissionIds;
  v13 = missionListViewManager->m_Items[nowType];
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__186_0__, 0LL);
  if ( !v13 )
LABEL_7:
    sub_B5D69C(v8, v9);
  MasterMissionListViewManager__AcceptReward(v13, receiveMissionIds, v14, v15);
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
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, isBulk);
  v6 = MasterMissionListViewManager__ReceiveMissionItems((MasterMissionListViewManager_o *)this, isBulk, method);
  MasterMissionComponent__BulkReceiveConfirm(v5, v6, v7);
}


void __fastcall MasterMissionComponent__BulkReceiveConfirm(
        MasterMissionComponent_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *items,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
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
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v28; // x20
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v29; // x22
  const MethodInfo *v30; // x3

  if ( (byte_42E899A & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)items, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__, v6, v7, v8);
    sub_B5D5C4(&MasterMissionComponent___c__DisplayClass181_0_TypeInfo, v9, v10, v11);
    byte_42E899A = 1;
  }
  v12 = sub_B5D694(MasterMissionComponent___c__DisplayClass181_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass181_0___ctor((MasterMissionComponent___c__DisplayClass181_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_6;
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = items;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)items, v21, v22, v23, v24, v25, v26);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v28 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v12 + 24);
  v29 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_B5D694(MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)v12,
    Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__,
    0LL);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_B5D69C(v13, v14);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v28, v29, v30);
}


void __fastcall MasterMissionComponent__ChangeTabImage(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  MasterMissionComponent_o *v4; // x19
  struct MasterMissionTab_array *missionTabList; // x8
  UISprite_o *dailyTabBtnBase; // x20
  UISprite_o *dailyTabSprite; // x20
  System_String_o **p_fields; // x8
  const MethodInfo *v9; // x2
  struct MasterMissionTab_array *v10; // x8
  UISprite_o *weeklyTabBtnBase; // x20
  UISprite_o *weeklyTabSprite; // x20
  System_String_o **p_monitor; // x8
  const MethodInfo *v14; // x2
  struct MasterMissionTab_array *v15; // x8
  UISprite_o *extraTabBtnBase; // x20
  UISprite_o *extraTabSprite; // x20
  System_String_o **v18; // x8
  const MethodInfo *v19; // x2
  struct MasterMissionTab_array *v20; // x8
  UISprite_o *limitedTabBtnBase; // x20
  UISprite_o *limitedTabSprite; // x20
  System_String_o **v23; // x8
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int32_t nowType; // w19
  __int64 v28; // x0

  v4 = this;
  if ( (byte_42E8995 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B5D5C4(&MasterMissionComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E8995 = 1;
  }
  missionTabList = v4->fields.missionTabList;
  if ( !missionTabList )
    goto LABEL_70;
  if ( !missionTabList->max_length )
    goto LABEL_71;
  this = (MasterMissionComponent_o *)missionTabList->m_Items[0];
  if ( !this )
    goto LABEL_70;
  dailyTabBtnBase = v4->fields.dailyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v4->fields.nowType == 0,
                                       v2);
  if ( !dailyTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(dailyTabBtnBase, (System_String_o *)this, 0LL);
  dailyTabSprite = v4->fields.dailyTabSprite;
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  if ( !v4->fields.nowType )
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
    sub_B5D69C(this, method);
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
  this = (MasterMissionComponent_o *)v4->fields.dailySelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4->fields.nowType != 0, 0LL);
  this = (MasterMissionComponent_o *)v4->fields.dailyNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4->fields.nowType == 0, 0LL);
  v10 = v4->fields.missionTabList;
  if ( !v10 )
    goto LABEL_70;
  if ( v10->max_length <= 1 )
    goto LABEL_71;
  this = (MasterMissionComponent_o *)v10->m_Items[1];
  if ( !this )
    goto LABEL_70;
  weeklyTabBtnBase = v4->fields.weeklyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v4->fields.nowType == 1,
                                       v9);
  if ( !weeklyTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(weeklyTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  weeklyTabSprite = v4->fields.weeklyTabSprite;
  if ( v4->fields.nowType == 1 )
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
  this = (MasterMissionComponent_o *)v4->fields.weeklySelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4->fields.nowType != 1, 0LL);
  this = (MasterMissionComponent_o *)v4->fields.weeklyNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4->fields.nowType == 1, 0LL);
  v15 = v4->fields.missionTabList;
  if ( !v15 )
    goto LABEL_70;
  if ( v15->max_length <= 2 )
    goto LABEL_71;
  this = (MasterMissionComponent_o *)v15->m_Items[2];
  if ( !this )
    goto LABEL_70;
  extraTabBtnBase = v4->fields.extraTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v4->fields.nowType == 2,
                                       v14);
  if ( !extraTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(extraTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  extraTabSprite = v4->fields.extraTabSprite;
  if ( v4->fields.nowType == 2 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    v18 = (System_String_o **)&this->fields.dailySelectedObj[2];
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
    v18 = (System_String_o **)&this->fields.dailySelectedObj[2].monitor;
    if ( !extraTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(extraTabSprite, *v18, 0LL);
  this = (MasterMissionComponent_o *)v4->fields.extraSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4->fields.nowType != 2, 0LL);
  this = (MasterMissionComponent_o *)v4->fields.extraNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4->fields.nowType == 2, 0LL);
  v20 = v4->fields.missionTabList;
  if ( !v20 )
    goto LABEL_70;
  if ( v20->max_length <= 3 )
  {
LABEL_71:
    v28 = sub_B5D6C8(this);
    sub_B5D668(v28, 0LL);
  }
  this = (MasterMissionComponent_o *)v20->m_Items[3];
  if ( !this )
    goto LABEL_70;
  limitedTabBtnBase = v4->fields.limitedTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v4->fields.nowType == 3,
                                       v19);
  if ( !limitedTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(limitedTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  limitedTabSprite = v4->fields.limitedTabSprite;
  if ( v4->fields.nowType == 3 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    v23 = (System_String_o **)&this->fields.dailySelectedObj[2].fields;
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
    v23 = (System_String_o **)&this->fields.dailySelectedObj[3];
    if ( !limitedTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(limitedTabSprite, *v23, 0LL);
  this = (MasterMissionComponent_o *)v4->fields.limitedSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4->fields.nowType != 3, 0LL);
  this = (MasterMissionComponent_o *)v4->fields.limitedNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4->fields.nowType == 3, 0LL);
  nowType = v4->fields.nowType;
  if ( !byte_42E8A35 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v24, v25, v26);
    byte_42E8A35 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = nowType;
  EventRewardSaveData__SaveMstMissionIndex(0LL);
}


void __fastcall MasterMissionComponent__ChangeViewCompleteMissionLb(
        MasterMissionComponent_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *mstMissionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x22
  UILabel_o *completeMissionCountNumLb; // x21
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *completeMissionCountNumLb2; // x20
  UILabel_o *completeMissionCountMsgLb; // x20
  struct UILabel_o *completeMissionAlertNumLb; // x8
  struct UILabel_o *completeMissionAlertUnitLb; // x8
  char v36; // w20
  struct UILabel_o *completeMissionAlertMsgLb; // x19
  System_String_o *v38; // x1
  UILabel_o *completeMissionAlertTitleLb; // x20
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8979 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)mstMissionInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_8834/*"MISSION_ACHIVE_MSG"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3349/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_13548/*"TIME_REST_ACHIVE"*/, v24, v25, v26);
    byte_42E8979 = 1;
  }
  MissionAchiveCount_k__BackingField = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8834/*"MISSION_ACHIVE_MSG"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Equals_44565128(
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
    if ( System_String__Equals_44565128((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(this->fields.completeMissionTimeNumStr, 0LL);
  if ( !this->fields.completeMissionAlertTitleLb )
    goto LABEL_39;
  v36 = (char)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.completeMissionAlertTitleLb,
                                0LL);
  if ( !Instance )
    goto LABEL_39;
  if ( (v36 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    completeMissionAlertTitleLb = this->fields.completeMissionAlertTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3349/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0LL);
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
            v38 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_39:
    sub_B5D69C(Instance, v28);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13548/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !completeMissionAlertMsgLb )
    goto LABEL_39;
  v38 = (System_String_o *)Instance;
  Instance = (DataManager_o *)completeMissionAlertMsgLb;
LABEL_37:
  UILabel__set_text((UILabel_o *)Instance, v38, 0LL);
}


void __fastcall MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterMissionComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v10; // x8
  int32_t MissionId; // w20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0

  v4 = this;
  if ( (byte_42E899B & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    this = (MasterMissionComponent_o *)sub_B5D5C4(&StringLiteral_11270/*"REWARD_ACCEPTABLE"*/, v5, v6, v7);
    byte_42E899B = 1;
  }
  missionListViewManager = v4->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_11;
  nowType = v4->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_12;
  v10 = missionListViewManager->m_Items[nowType];
  if ( !v10
    || (this = (MasterMissionComponent_o *)v10->fields.receiveItem) == 0LL
    || (MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)this, 0LL),
        (this = (MasterMissionComponent_o *)sub_B5D5DC(int___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(this, method);
  }
  if ( !LODWORD(this->fields.myFsm) )
  {
LABEL_12:
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
  }
  LODWORD(this->fields.titlePrefab) = MissionId;
  v4->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.sendMissionIds,
    (System_Int32_array **)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  v4->fields.isBoardTouch = 1;
  if ( !this )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11270/*"REWARD_ACCEPTABLE"*/, 0LL);
}


void __fastcall MasterMissionComponent__Close(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v7; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  struct MasterMissionListViewManager_array *v9; // x8
  struct MasterMissionListViewManager_array *v10; // x8
  struct MasterMissionListViewManager_array *v11; // x8
  __int64 v12; // x0

  if ( (byte_42E89A8 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89A8 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    goto LABEL_23;
  EventSvtControl__stopVoice(svtVoiceCtr, 0LL);
  MasterMissionComponent__ReleaseSvtVoiceData(this, v7);
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
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_23;
  if ( v9->max_length <= 1 )
    goto LABEL_24;
  svtVoiceCtr = (EventSvtControl_o *)v9->m_Items[1];
  if ( !svtVoiceCtr )
    goto LABEL_23;
  ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL);
  v10 = this->fields.missionListViewManager;
  if ( !v10 )
    goto LABEL_23;
  if ( v10->max_length <= 2 )
    goto LABEL_24;
  svtVoiceCtr = (EventSvtControl_o *)v10->m_Items[2];
  if ( !svtVoiceCtr
    || (ListViewManager__DestroyList((ListViewManager_o *)svtVoiceCtr, 0LL),
        (v11 = this->fields.missionListViewManager) == 0LL) )
  {
LABEL_23:
    sub_B5D69C(svtVoiceCtr, v5);
  }
  if ( v11->max_length <= 3 )
  {
LABEL_24:
    v12 = sub_B5D6C8(svtVoiceCtr);
    sub_B5D668(v12, 0LL);
  }
  svtVoiceCtr = (EventSvtControl_o *)v11->m_Items[3];
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_42E8987 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E8987 = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(titleInfo, v5);
  }
  CommonUI__SetLoadMode((CommonUI_o *)titleInfo, 0, 0LL);
}


void __fastcall MasterMissionComponent__ExitCompleteMission(
        MasterMissionComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v18; // x8
  MasterMissionComponent___c_c *v19; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__147_0; // x20
  Il2CppObject *v23; // x21
  struct MasterMissionComponent___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42E897D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__, v10, v11, v12);
    sub_B5D5C4(&MasterMissionComponent___c_TypeInfo, v13, v14, v15);
    byte_42E897D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  v19 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v19 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__147_0 = static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__147_0, v23, Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__, 0LL);
    v24 = MasterMissionComponent___c_TypeInfo->static_fields;
    v24->__9__147_0 = _9__147_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v24->__9__147_0,
      (System_Int32_array **)_9__147_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !Instance )
    sub_B5D69C(v19, v16);
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

  if ( (byte_42E897A & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B5D5C4(&MissionInfoMaker_TypeInfo, (_DWORD)eventMissionList, type, method);
    byte_42E897A = 1;
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
        v18 = sub_B5D6C8(this);
        sub_B5D668(v18, 0LL);
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
    sub_B5D69C(this, eventMissionList);
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

  if ( (byte_42E8989 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B5D5C4(
                                         &MasterMissionListViewItem_TypeInfo,
                                         (_DWORD)eventMissionList,
                                         type,
                                         method);
    byte_42E8989 = 1;
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
        v13 = sub_B5D6C8(this);
        sub_B5D668(v13, 0LL);
      }
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_B5D694(MasterMissionListViewItem_TypeInfo);
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
    sub_B5D69C(this, eventMissionList);
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
    sub_B5D69C(completeMissionIcon, method);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0LL);
}


void __fastcall MasterMissionComponent__InitCompleteMissionLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  MasterMissionComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8

  v4 = this;
  if ( (byte_42E8978 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    this = (MasterMissionComponent_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
                                         v5,
                                         v6,
                                         v7);
    byte_42E8978 = 1;
  }
  currentCompleteMissionList = v4->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_B5D69C(this, method);
  if ( currentCompleteMissionList->fields._size < 1 )
    MasterMissionComponent__HideCompleteMissionIconLb(v4, method);
  else
    MasterMissionComponent__ChangeViewCompleteMissionLb(v4, currentCompleteMissionList->fields._items->m_Items[0], v2);
}


bool __fastcall MasterMissionComponent__IsLimitedMissionEnableTime(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  BalanceConfig_c *v13; // x0
  int64_t NoneExpireTime; // x23
  int64_t Time; // x19
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct DataMasterBase_array *datalist; // x25
  DataManager_o *v19; // x20
  unsigned int v20; // w26
  __int64 namespaze; // x24
  DataManager_c **v22; // x8
  DataManager_c *v23; // x21
  int64_t v24; // x9
  __int64 v26; // x0
  bool result; // w0
  BalanceConfig_c *v28; // x0

  if ( (byte_42E897E & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MstMissionMaster___, v4, v5, v6);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E897E = 1;
  }
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v13->static_fields->NoneExpireTime;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_34;
  datalist = Instance->fields.datalist;
  v19 = Instance;
  if ( (int)datalist >= 1 )
  {
    v20 = 0;
    namespaze = -1LL;
    while ( 1 )
    {
      v22 = &v19->klass + (int)v20;
      v23 = v22[4];
      if ( !v23 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v22[4], 0LL);
      if ( (_DWORD)Instance == 5 )
      {
        v24 = *(_QWORD *)&v23->_1.byval_arg.bits;
        if ( (__int64)v23->_1.namespaze > namespaze )
          namespaze = (__int64)v23->_1.namespaze;
        if ( Time < v24 && NoneExpireTime > v24 )
          NoneExpireTime = *(_QWORD *)&v23->_1.byval_arg.bits;
      }
      if ( (int)++v20 >= (int)datalist )
        goto LABEL_27;
      if ( v20 >= LODWORD(v19->fields.datalist) )
      {
        v26 = sub_B5D6C8(Instance);
        sub_B5D668(v26, 0LL);
      }
    }
LABEL_34:
    sub_B5D69C(Instance, v17);
  }
  namespaze = -1LL;
LABEL_27:
  result = 0;
  if ( Time < NoneExpireTime && namespaze <= Time )
  {
    v28 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    return NoneExpireTime < v28->static_fields->NoneExpireTime;
  }
  return result;
}


void __fastcall MasterMissionComponent__LoadNotificationEnd(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v24; // x1
  struct MstMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  _BOOL8 _29295864; // x0
  const MethodInfo *v37; // x1
  CommonUI_o *v38; // x20
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_42E8975 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MstMissionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v20, v21, v22);
    byte_42E8975 = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (struct MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mstMissionMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  EventRewardSaveData__LoadAllMissionData(0LL);
  MasterMissionComponent__SetMissionDisp(this, v32);
  MasterMissionComponent__SetMissionClearNum(this, v33);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(126, 0LL) )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v24);
    MasterMissionComponent__setGuideSvtVoice(this, v35);
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
  MasterMissionComponent__reDispMissionList(this, v34);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = TutorialFlag__Get_29295864(207, 0LL);
  if ( !_29295864 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_29295864, v37);
  v38 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v39 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
  v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__, 0LL);
  if ( !v38 )
LABEL_32:
    sub_B5D69C(Instance, v24);
  CommonUI__maskFadein(v38, DEFAULT_FADE_TIME, v41, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterMissionComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_42E89A7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89A7 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E89B0 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2686/*"BULK_RECEIVE"*/, v5, v6, v7);
    byte_42E89B0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2686/*"BULK_RECEIVE"*/, 0LL);
}


void __fastcall MasterMissionComponent__OnClickCompleteMissionBtn(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_List_string__c *klass; // x8
  CommonUI_o *v46; // x20
  AvalonSceneManager_c *v47; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v49; // x21
  System_String_o *v50; // x19
  _QWORD **v51; // x21
  __int64 v52; // x20
  __int16 v53; // w8
  __int64 v54; // x20
  __int64 v55; // x20
  __int64 v56; // x20
  System_String_o *v57; // x19
  CommonUI_o *v58; // x20
  MasterMissionComponent___c_c *v59; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__146_1; // x21
  Il2CppObject *v62; // x22
  struct MasterMissionComponent___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7

  if ( (byte_42E897C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Array_Empty_object___, v5, v6, v7);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__, v32, v33, v34);
    sub_B5D5C4(&MasterMissionComponent___c_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3348/*"COMPLETE_MISSION_END"*/, v38, v39, v40);
    byte_42E897C = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_50;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0LL) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v42, v43, v44);
        byte_42E4B1E = 1;
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
          v46 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v47 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v47 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v47->static_fields->DEFAULT_FADE_TIME;
          v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v49,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__,
            0LL);
          if ( v46 )
          {
            CommonUI__maskFadeout(v46, 1, DEFAULT_FADE_TIME, v49, 0LL);
            return;
          }
        }
      }
LABEL_50:
      sub_B5D69C(Instance, v42);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3348/*"COMPLETE_MISSION_END"*/, 0LL);
    v51 = (_QWORD **)Method_System_Array_Empty_object___;
    v52 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v53 = *(_WORD *)(v52 + 306);
    if ( (v53 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v53 = *(_WORD *)(v52 + 306);
    }
    if ( (v53 & 0x400) != 0 )
    {
      v54 = *v51[6];
      if ( (*(_BYTE *)(v54 + 306) & 1) == 0 )
        sub_AF52C4(*v51[6]);
      if ( !*(_DWORD *)(v54 + 224) )
      {
        v55 = *v51[6];
        if ( (*(_BYTE *)(v55 + 306) & 1) == 0 )
          sub_AF52C4(*v51[6]);
        j_il2cpp_runtime_class_init_0(v55);
      }
    }
    v56 = *v51[6];
    if ( (*(_BYTE *)(v56 + 306) & 1) == 0 )
      sub_AF52C4(*v51[6]);
    v57 = System_String__Format_44656512(v50, **(System_Object_array ***)(v56 + 184), 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v58 = (CommonUI_o *)Instance;
    v59 = MasterMissionComponent___c_TypeInfo;
    if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v59 = MasterMissionComponent___c_TypeInfo;
    }
    static_fields = v59->static_fields;
    _9__146_1 = static_fields->__9__146_1;
    if ( !_9__146_1 )
    {
      if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      }
      v62 = (Il2CppObject *)static_fields->__9;
      _9__146_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__146_1, v62, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__, 0LL);
      v63 = MasterMissionComponent___c_TypeInfo->static_fields;
      v63->__9__146_1 = _9__146_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v63->__9__146_1,
        (System_Int32_array **)_9__146_1,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    if ( !v58 )
      goto LABEL_50;
    CommonUI__OpenNotificationDialog(v58, 0LL, v57, _9__146_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42E8996 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8996 = 1;
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
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void __fastcall MasterMissionComponent__OnClickExtraTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42E8998 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8998 = 1;
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
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void __fastcall MasterMissionComponent__OnClickHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterMissionComponent_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E89AE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89AE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  MasterMissionComponent__OpenHelp(v4, v5);
}


void __fastcall MasterMissionComponent__OnClickLimitedTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42E8999 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8999 = 1;
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
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void __fastcall MasterMissionComponent__OnClickShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v21; // x8
  MasterMissionComponent___c_c *v22; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__174_0; // x20
  Il2CppObject *v26; // x21
  struct MasterMissionComponent___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42E8994 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&SoundManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__, v13, v14, v15);
    sub_B5D5C4(&MasterMissionComponent___c_TypeInfo, v16, v17, v18);
    byte_42E8994 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  v22 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v22 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__174_0 = static_fields->__9__174_0;
  if ( !_9__174_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__174_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__174_0, v26, Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__, 0LL);
    v27 = MasterMissionComponent___c_TypeInfo->static_fields;
    v27->__9__174_0 = _9__174_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v27->__9__174_0,
      (System_Int32_array **)_9__174_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !Instance )
    sub_B5D69C(v22, v19);
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
      sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_42E8997 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8997 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8973 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8973 = 1;
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
      sub_B5D69C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.titleInfo, 0LL, v9, v10, v11, v12, v13, v14);
  }
  MasterMissionComponent__StopStoneButtonEffect(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__Open(
        MasterMissionComponent_o *this,
        MasterMissionComponent_ClickDelegate_o *callback,
        System_Action_o *redisp_act,
        int32_t typeIndex,
        const MethodInfo *method)
{
  int32_t MstMissionIndex_k__BackingField; // w20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  CommonUI_o *Instance; // x0
  const MethodInfo *v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_List_int__o *v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v81; // x21
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  int v88; // w2
  __int64 v89; // x3
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v92; // w20
  bool v93; // w1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  struct UnityEngine_GameObject_o *titlePrefab; // x21
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  TitleInfoControl_o *v104; // x21
  TitleInfoControl_o *v105; // x20
  System_Action_o *v106; // x21
  MasterMissionComponent_c *v107; // x0
  int32_t DEFAULT_LIMITCNT; // w8
  struct MstMissionEntity_array *Entitys_WarMaster__WarEntity; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  const MethodInfo *v116; // x1
  const MethodInfo *v117; // x1
  const MethodInfo *v118; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v120; // x21
  System_Action_o *v121; // x20
  __int64 v122; // x0

  MstMissionIndex_k__BackingField = typeIndex;
  if ( (byte_42E8974 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)callback, (_DWORD)redisp_act, *(_QWORD *)&typeIndex);
    sub_B5D5C4(&System_Action_int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Action_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&AtlasManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_MasterMissionComponent_LoadNotificationEnd__, v36, v37, v38);
    sub_B5D5C4(&Method_MasterMissionComponent_OnClickBack__, v39, v40, v41);
    sub_B5D5C4(&Method_MasterMissionComponent__Open_b__136_0__, v42, v43, v44);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v48, v49, v50);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v57, v58, v59);
    byte_42E8974 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.reDispAction = redisp_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reDispAction,
    (System_Int32_array **)redisp_act,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_46;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0LL);
  v74 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v74,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.currentEventIdList = v74;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentEventIdList,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v81 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v81,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v81;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentMstMissionEntList,
    (System_Int32_array **)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  if ( MstMissionIndex_k__BackingField == -1 )
  {
    if ( !byte_42E8A34 )
    {
      Instance = (CommonUI_o *)sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v61, v88, v89);
      byte_42E8A34 = 1;
    }
    MstMissionIndex_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
  }
  missionTabList = this->fields.missionTabList;
  this->fields.nowType = MstMissionIndex_k__BackingField;
  if ( !missionTabList )
    goto LABEL_46;
  max_length = missionTabList->max_length;
  if ( max_length >= 1 )
  {
    v92 = 0;
    while ( 1 )
    {
      if ( v92 >= max_length )
      {
        v122 = sub_B5D6C8(Instance);
        sub_B5D668(v122, 0LL);
      }
      Instance = (CommonUI_o *)missionTabList->m_Items[v92];
      if ( !Instance )
        break;
      MasterMissionTab__SetSmallTab((MasterMissionTab_o *)Instance, v61);
      max_length = missionTabList->max_length;
      if ( (int)++v92 >= max_length )
        goto LABEL_15;
    }
LABEL_46:
    sub_B5D69C(Instance, v61);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v61) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_46;
    v93 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_46;
    v93 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v93, 0LL);
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
                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_46;
    Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.titleInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    v104 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v104 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v104, (UnityEngine_Transform_o *)Instance, 0LL);
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
    TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v105 = this->fields.titleInfo;
    v106 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v106, (Il2CppObject *)this, Method_MasterMissionComponent_OnClickBack__, 0LL);
    if ( !v105 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v105, v106, 0LL);
  }
  v107 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v107 = MasterMissionComponent_TypeInfo;
  }
  this->fields.currentEventSvtId = v107->static_fields->DEFAULT_SVT_ID;
  DEFAULT_LIMITCNT = v107->static_fields->DEFAULT_LIMITCNT;
  this->fields.currentDispId = 0;
  this->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Entitys_WarMaster__WarEntity = (struct MstMissionEntity_array *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1AE44E0 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_WarMaster__WarEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mstMissionList,
    (System_Int32_array **)Entitys_WarMaster__WarEntity,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  MasterMissionComponent__SetupShopBtn(this, v116);
  MasterMissionComponent__SetupCompleteBtn(this, v117);
  MasterMissionComponent__RefreshInfo(this, v118);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v120 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v120,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__Open_b__136_0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v120, 1, 0LL);
  v121 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v121, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v121, 0LL);
}


void __fastcall MasterMissionComponent__OpenCompleteMission(
        MasterMissionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  CommonUI_o *Instance; // x19
  CompleteMissionComponent_ClickDelegate_o *v27; // x20
  __int64 v28; // x1
  MasterMissionComponent___c_c *mInstance; // x0
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__145_0; // x21
  Il2CppObject *v32; // x22
  struct MasterMissionComponent___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int v40; // w2
  __int64 v41; // x3
  TerminalSceneComponent_c *v42; // x0

  if ( (byte_42E897B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&CompleteMissionComponent_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MasterMissionComponent_ExitCompleteMission__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__, v20, v21, v22);
    sub_B5D5C4(&MasterMissionComponent___c_TypeInfo, v23, v24, v25);
    byte_42E897B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (CompleteMissionComponent_ClickDelegate_o *)sub_B5D694(CompleteMissionComponent_ClickDelegate_TypeInfo);
  CompleteMissionComponent_ClickDelegate___ctor(
    v27,
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
    v32 = (Il2CppObject *)static_fields->__9;
    _9__145_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__145_0, v32, Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__, 0LL);
    v33 = MasterMissionComponent___c_TypeInfo->static_fields;
    v33->__9__145_0 = _9__145_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v33->__9__145_0,
      (System_Int32_array **)_9__145_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !Instance )
    goto LABEL_25;
  CommonUI__OpenCompleteMission(Instance, v27, _9__145_0, 0, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v28, v40, v41);
    byte_42E4B1E = 1;
  }
  v42 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v42 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v42->static_fields->mInstance;
  if ( !mInstance )
LABEL_25:
    sub_B5D69C(mInstance, v28);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0LL);
}


void __fastcall MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E89AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E89AF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__OpenTutorialImageDialog_18227680(Instance, 42, 207, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall MasterMissionComponent__OpenPresentBox(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  CommonUI_o *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v21; // x21
  CommonUI_o *v22; // x0
  __int64 v23; // x1
  int v24; // w2
  __int64 v25; // x3
  ErrorDialog_c *klass; // x8
  CommonUI_o *v27; // x19
  MasterMissionComponent_c *v28; // x8
  int v29; // w2
  __int64 v30; // x3
  ErrorDialog_c *v31; // x8

  if ( (byte_42E89A1 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentBoxWindow_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MasterMissionComponent__OpenPresentBox_b__189_0__, v5, v6, v7);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v17, v18, v19);
    byte_42E89A1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (UserPresentBoxWindow_ClickDelegate_o *)sub_B5D694(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__189_0__,
    0LL);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__OpenUsrPresentList(Instance, 1, v21, 0LL, 0LL);
  v22 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v22 )
    goto LABEL_33;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v22, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v23, v24, v25);
      byte_42E4B1E = 1;
    }
    v22 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v22 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v22->fields.errorDialog->klass;
    if ( !klass )
      goto LABEL_33;
    v22 = *(CommonUI_o **)&klass->_2.element_size;
    if ( !v22 )
      goto LABEL_33;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v22, 0LL) )
    {
      v22 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = v22;
      v28 = MasterMissionComponent_TypeInfo;
      if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        v28 = MasterMissionComponent_TypeInfo;
      }
      if ( v27 )
      {
        CommonUI__SetUsrPresentListPos(v27, v28->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v23, v29, v30);
          byte_42E4B1E = 1;
        }
        v22 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v22 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        }
        v31 = v22->fields.errorDialog->klass;
        if ( v31 )
        {
          v22 = *(CommonUI_o **)&v31->_2.element_size;
          if ( v22 )
          {
            ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v22, 0, 0LL);
            return;
          }
        }
      }
LABEL_33:
      sub_B5D69C(v22, v23);
    }
  }
}


void __fastcall MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  struct UnityEngine_GameObject_o *v9; // x20
  struct UnityEngine_GameObject_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E89AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E89AC = 1;
  }
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v9 = this->fields.btnEffectBasePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                               (UnityEngine_UI_Dropdown_DropdownItem_o *)v9,
                                               (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = v10;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.btnEffectPrefab,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0LL, 0LL) )
      GameObjectExtensions__SafeSetParent_32436524(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0LL);
  }
}


void __fastcall MasterMissionComponent__PresentBoxOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  PresentBoxOverDialog_o *presentBoxOverDialog; // x20
  System_String_o *v18; // x21
  PresentBoxOverDialog_ClickDelegate_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_42E89A0 & 1) == 0 )
  {
    sub_B5D5C4(&PresentBoxOverDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MasterMissionComponent__PresentBoxOver_b__188_0__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_8726/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E89A0 = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8726/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0LL);
  v19 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B5D694(PresentBoxOverDialog_ClickDelegate_TypeInfo);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__188_0__,
    0LL);
  if ( !presentBoxOverDialog )
    sub_B5D69C(v20, v21);
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1/*""*/, v18, v19, 26, 0LL);
}


void __fastcall MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  AdManager_o *Instance; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o *v29; // x22
  AdManager_o **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_Int32_array *receiveMissionIds; // x8
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v40; // x19
  System_Action_o *v41; // x21
  const MethodInfo *v42; // x2
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v44; // x19
  System_Action_o *v45; // x22
  const MethodInfo *v46; // x3
  __int64 v47; // x0

  if ( (byte_42E899F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__, v8, v9, v10);
    sub_B5D5C4(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__, v11, v12, v13);
    sub_B5D5C4(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__, v14, v15, v16);
    sub_B5D5C4(&MasterMissionComponent___c__DisplayClass187_0_TypeInfo, v17, v18, v19);
    byte_42E899F = 1;
  }
  v20 = sub_B5D694(MasterMissionComponent___c__DisplayClass187_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass187_0___ctor((MasterMissionComponent___c__DisplayClass187_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_20;
  *(_QWORD *)(v20 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v20,
    Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__,
    0LL);
  v30 = (AdManager_o **)(v20 + 24);
  *(_QWORD *)(v20 + 24) = v29;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)v29, v31, v32, v33, v34, v35, v36);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
          v47 = sub_B5D6C8(Instance);
          sub_B5D668(v47, 0LL);
        }
        v40 = missionListViewManager->m_Items[nowType];
        v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v41,
          (Il2CppObject *)v20,
          Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__,
          0LL);
        if ( v40 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v40, v41, v42);
          return;
        }
      }
LABEL_20:
      sub_B5D69C(Instance, v22);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v44 = this->fields.receiveMissionIds;
    v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v20,
      Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__,
      0LL);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v44, v45, v46);
  }
  else
  {
    Instance = *v30;
    if ( !*v30 )
      goto LABEL_20;
    System_Action__Invoke((System_Action_o *)Instance, 0LL);
  }
}


void __fastcall MasterMissionComponent__RefreshInfo(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  UILabel_o *stoneInfoLabel; // x20
  int32_t stone; // w21
  int32_t UserStoneFragmentNum; // w0
  UILabel_o *stoneFragmentsInfoLabel; // x21
  int32_t v24; // w20
  const MethodInfo *v25; // x2

  if ( (byte_42E89A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E89A9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
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
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0LL),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v24 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0LL),
        !stoneFragmentsInfoLabel) )
  {
LABEL_15:
    sub_B5D69C(Instance, v19);
  }
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  MasterMissionComponent__UpdateStoneExchangeCount(this, v24, v25);
}


void __fastcall MasterMissionComponent__ReleaseSvtVoiceData(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppClass *klass; // x20
  __int64 v24; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E89A5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    byte_42E89A5 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentVoiceDataList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v21 )
        break;
      if ( !v26.fields.current )
        sub_B5D69C(v21, v22);
      klass = v26.fields.current[1].klass;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)klass, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v25 = this->fields.currentVoiceDataList;
    if ( !v25 )
      sub_B5D69C(0LL, v24);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v25,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__);
  }
}


void __fastcall MasterMissionComponent__RequestMissionReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1

  if ( (byte_42E899C & 1) == 0 )
  {
    sub_B5D5C4(&Method_MasterMissionComponent_missionRewardCallback__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    byte_42E899C = 1;
  }
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v14,
                                                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v16);
  EventMissionClearRewardRequest__beginRequest_27159564(
    Request_WarBoardWallAttackRequest,
    this->fields.sendMissionIds,
    0LL);
}


void __fastcall MasterMissionComponent__ServantOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t overflowType; // w8
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  int32_t v19; // w20
  System_String_o *v20; // x0
  __int64 v21; // x1
  UserPresentBoxErrorDialog_o *v22; // x21
  System_Action_ShopRootConstants_State__o *v23; // x22

  if ( (byte_42E89A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SceneList_Type___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_SceneList_Type__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_MasterMissionComponent_ServantOverDialogClose__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_8736/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, v14, v15, v16);
    byte_42E89A2 = 1;
  }
  overflowType = this->fields.overflowType;
  servantOverDialog = this->fields.servantOverDialog;
  if ( overflowType == 4 )
    v19 = 2;
  else
    v19 = overflowType == 2;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8736/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0LL);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v20, 0LL),
        v22 = this->fields.servantOverDialog,
        v23 = (System_Action_ShopRootConstants_State__o *)sub_B5D694(System_Action_SceneList_Type__TypeInfo),
        System_Action_ShopRootConstants_State____ctor(
          v23,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          (const MethodInfo_258A064 *)Method_System_Action_SceneList_Type___ctor__),
        !v22)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v22, (System_Action_SceneList_Type__o *)v23, 0LL),
        (v20 = (System_String_o *)this->fields.servantOverDialog) == 0LL) )
  {
    sub_B5D69C(v20, v21);
  }
  UserPresentBoxErrorDialog__setJumpType((UserPresentBoxErrorDialog_o *)v20, v19, 0LL);
}


void __fastcall MasterMissionComponent__ServantOverDialogClose(
        MasterMissionComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  System_Action_ShopRootConstants_State__o *v19; // x22
  CommonUI_o *Instance; // x0
  __int64 v21; // x1

  if ( (byte_42E89A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SceneList_Type___ctor__, type, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_SceneList_Type__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_MasterMissionComponent_ServantOverDialogClose__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v15, v16, v17);
    byte_42E89A3 = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v19 = (System_Action_ShopRootConstants_State__o *)sub_B5D694(System_Action_SceneList_Type__TypeInfo);
  System_Action_ShopRootConstants_State____ctor(
    v19,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ServantOverDialogClose__,
    (const MethodInfo_258A064 *)Method_System_Action_SceneList_Type___ctor__);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v19, 0LL);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0LL);
      return;
    }
LABEL_9:
    sub_B5D69C(Instance, v21);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  v5 = missionListViewManager->m_Items[nowType];
  if ( !v5 )
LABEL_5:
    sub_B5D69C(this, method);
  MasterMissionListViewManager__setAfterAction(v5, this->fields.receiveMissionIds, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__SetBtnEnable(
        MasterMissionComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *dailyTabObj; // x0
  bool v7; // w20

  if ( (byte_42E89A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable, (_DWORD)method, v3);
    byte_42E89A6 = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (v7 = isEnable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v7, 0LL),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(dailyTabObj, isEnable);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v7, 0LL);
}


void __fastcall MasterMissionComponent__SetDailyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionEntity__o *VaildDailyMissionData; // x0
  const MethodInfo *v9; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v11; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v12; // x21
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x5
  struct MasterMissionListViewManager_array *v15; // x8
  MissionListViewManager_o *v16; // x19
  __int64 v17; // x0

  if ( (byte_42E898A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v5, v6, v7);
    byte_42E898A = 1;
  }
  EventRewardSaveData__LoadDailyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( !missionListViewManager->max_length )
    goto LABEL_15;
  v11 = missionListViewManager->m_Items[0];
  VaildDailyMissionData = MasterMissionComponent__getVaildDailyMissionData(this, v9);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v12 = VaildDailyMissionData;
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v11 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v11, v12, v13, 0, this->fields.reDispAction, v14);
  v15 = this->fields.missionListViewManager;
  if ( !v15 )
    goto LABEL_14;
  if ( !v15->max_length )
  {
LABEL_15:
    v17 = sub_B5D6C8(VaildDailyMissionData);
    sub_B5D668(v17, 0LL);
  }
  v16 = (MissionListViewManager_o *)v15->m_Items[0];
  VaildDailyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v16 )
LABEL_14:
    sub_B5D69C(VaildDailyMissionData, v9);
  MissionListViewManager__SetMode_25051420(
    v16,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetExtraMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionEntity__o *ValidExtraMissionData; // x0
  const MethodInfo *v9; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v11; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v12; // x21
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x5
  struct MasterMissionListViewManager_array *v15; // x8
  MissionListViewManager_o *v16; // x19
  __int64 v17; // x0

  if ( (byte_42E898C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v5, v6, v7);
    byte_42E898C = 1;
  }
  EventRewardSaveData__LoadExtraMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 2 )
    goto LABEL_15;
  v11 = missionListViewManager->m_Items[2];
  ValidExtraMissionData = MasterMissionComponent__getValidExtraMissionData(this, v9);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v12 = ValidExtraMissionData;
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                     this->fields.currentEventIdList,
                                                                                     (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v11 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v11, v12, v13, 2, this->fields.reDispAction, v14);
  v15 = this->fields.missionListViewManager;
  if ( !v15 )
    goto LABEL_14;
  if ( v15->max_length <= 2 )
  {
LABEL_15:
    v17 = sub_B5D6C8(ValidExtraMissionData);
    sub_B5D668(v17, 0LL);
  }
  v16 = (MissionListViewManager_o *)v15->m_Items[2];
  ValidExtraMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v16 )
LABEL_14:
    sub_B5D69C(ValidExtraMissionData, v9);
  MissionListViewManager__SetMode_25051420(
    v16,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetLimitedMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionEntity__o *VaildLimitedMissionData; // x0
  const MethodInfo *v9; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v11; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v12; // x21
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x5
  struct MasterMissionListViewManager_array *v15; // x8
  MissionListViewManager_o *v16; // x19
  __int64 v17; // x0

  if ( (byte_42E898D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v5, v6, v7);
    byte_42E898D = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 3 )
    goto LABEL_15;
  v11 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = MasterMissionComponent__getVaildLimitedMissionData(this, v9);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v12 = VaildLimitedMissionData;
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                       this->fields.currentEventIdList,
                                                                                       (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v11 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v11, v12, v13, 3, this->fields.reDispAction, v14);
  v15 = this->fields.missionListViewManager;
  if ( !v15 )
    goto LABEL_14;
  if ( v15->max_length <= 3 )
  {
LABEL_15:
    v17 = sub_B5D6C8(VaildLimitedMissionData);
    sub_B5D668(v17, 0LL);
  }
  v16 = (MissionListViewManager_o *)v15->m_Items[3];
  VaildLimitedMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v16 )
LABEL_14:
    sub_B5D69C(VaildLimitedMissionData, v9);
  MissionListViewManager__SetMode_25051420(
    v16,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetMissionClearNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  MstMissionEntity_array *EnableMissions; // x22
  int max_length; // w8
  EventMissionMaster_o *v21; // x24
  unsigned int v22; // w26
  int32_t v23; // w20
  int32_t v24; // w21
  int32_t v25; // w23
  Il2CppClass **v26; // x8
  Il2CppClass *v27; // x25
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x0

  if ( (byte_42E8988 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MstMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E8988 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_34;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v21 = (EventMissionMaster_o *)Instance;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
      {
        v32 = sub_B5D6C8(Instance);
        sub_B5D668(v32, 0LL);
      }
      v26 = &EnableMissions->obj.klass + (int)v22;
      v27 = v26[4];
      if ( !v27 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v26[4], 0LL);
      switch ( (_DWORD)Instance )
      {
        case 5:
          if ( !v21 )
            goto LABEL_34;
          ClearMasterMissionList = (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                          v21,
                                                                                          HIDWORD(v27->_1.name),
                                                                                          5,
                                                                                          0LL);
          Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        ClearMasterMissionList,
                                        (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          3,
                                          v31);
            v23 += (int)Instance;
          }
          break;
        case 4:
          if ( !v21 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getExtraMissionList(v21, HIDWORD(v27->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          2,
                                          v29);
            v24 += (int)Instance;
          }
          break;
        case 2:
          if ( !v21 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getWeeklyMasterMissionList(v21, HIDWORD(v27->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          1,
                                          v28);
            v25 += (int)Instance;
          }
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_B5D69C(Instance, v18);
  }
  v25 = 0;
  v24 = 0;
  v23 = 0;
LABEL_30:
  Instance = (DataManager_o *)this->fields.weeklyClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v25, 0LL);
  Instance = (DataManager_o *)this->fields.extraClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v24, 0LL);
  Instance = (DataManager_o *)this->fields.limitedClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v23, 0LL);
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
        v24 = sub_B5D6C8(this);
        sub_B5D668(v24, 0LL);
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
        sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionEntity__o *VaildWeeklyMissionData; // x0
  const MethodInfo *v9; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v11; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v12; // x21
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x5
  struct MasterMissionListViewManager_array *v15; // x8
  MissionListViewManager_o *v16; // x19
  __int64 v17; // x0

  if ( (byte_42E898B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v5, v6, v7);
    byte_42E898B = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 1 )
    goto LABEL_15;
  v11 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = MasterMissionComponent__getVaildWeeklyMissionData(this, v9);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v12 = VaildWeeklyMissionData;
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)System_Collections_Generic_List_int___ToArray(
                                                                                      this->fields.currentEventIdList,
                                                                                      (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v11 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v11, v12, v13, 1, this->fields.reDispAction, v14);
  v15 = this->fields.missionListViewManager;
  if ( !v15 )
    goto LABEL_14;
  if ( v15->max_length <= 1 )
  {
LABEL_15:
    v17 = sub_B5D6C8(VaildWeeklyMissionData);
    sub_B5D668(v17, 0LL);
  }
  v16 = (MissionListViewManager_o *)v15->m_Items[1];
  VaildWeeklyMissionData = (System_Collections_Generic_List_EventMissionEntity__o *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v16 )
LABEL_14:
    sub_B5D69C(VaildWeeklyMissionData, v9);
  MissionListViewManager__SetMode_25051420(
    v16,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetupCompleteBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x0
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentCompleteMissionList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  DataManager_o *Instance; // x0
  __int64 v51; // x1
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  MstMissionEntity_array *EnableMissions; // x23
  int max_length; // w8
  UserEventMissionMaster_o *v55; // x25
  unsigned int v56; // w28
  int32_t v57; // w20
  MstMissionEntity_o *v58; // x24
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  DataManager_o *v61; // x27
  int32_t CompleteMissionClearCount; // w26
  int32_t datalist; // w23
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  int32_t v65; // w22
  MasterMissionComponent_MasterMissionInfoItem_o *v66; // x25
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  struct UnityEngine_GameObject_o *cNoticeNumberPrefab; // x22
  UnityEngine_GameObject_o *v70; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  UIWidget_o *v78; // x22
  struct NoticeNumberComponent_o *v79; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v81; // x1
  __int64 v82; // x0

  if ( (byte_42E8977 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MstMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v32, v33, v34);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    byte_42E8977 = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = &this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentCompleteMissionList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
  }
  else
  {
    v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v43,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v43;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.currentCompleteMissionList,
      (System_Int32_array **)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_47;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_47;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v57 = 0;
  }
  else
  {
    v55 = (UserEventMissionMaster_o *)Instance;
    v56 = 0;
    v57 = 0;
    while ( 1 )
    {
      if ( v56 >= max_length )
        goto LABEL_48;
      v58 = EnableMissions->m_Items[v56];
      if ( !v58 )
        goto LABEL_47;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    MasterData_WarQuestSelectionMaster,
                                    v58->fields.id,
                                    0LL);
      if ( !Instance )
        goto LABEL_47;
      v61 = Instance;
      if ( Instance->fields.datalist )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)Instance,
                                      (EventMissionEntity_array *)Instance,
                                      v59,
                                      v60);
        v57 += CompleteMissionClearCount;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v58, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v56 >= max_length )
        goto LABEL_29;
    }
    if ( !v55 )
      goto LABEL_47;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v55, v58->fields.id, 0LL);
    datalist = (int32_t)v61->fields.datalist;
    if ( !datalist )
    {
LABEL_48:
      v82 = sub_B5D6C8(Instance);
      sub_B5D668(v82, 0LL);
    }
    lookup = v61->fields.lookup;
    if ( !lookup )
      goto LABEL_47;
    v65 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_47;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, HIDWORD(lookup->fields.entries), 0LL);
    Instance = (DataManager_o *)this->fields.completeMissionIcon;
    if ( !Instance )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v66 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_B5D694(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    MasterMissionComponent_MasterMissionInfoItem___ctor(v66, v58, datalist, CompleteMissionClearCount, v65, 0LL);
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
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
    v70 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)cNoticeNumberPrefab,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_32436524(v70, this->fields.completeMissionNoticeRoot, 0LL);
    if ( v70 )
    {
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v70,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.mCompleteMissionNoticeNumber,
        Component_srcLineSprite,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
        v78 = (UIWidget_o *)Instance;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        }
        if ( v78 )
        {
          UIWidget__set_depth(v78, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
          UIWidget__set_width(v78, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
          UIWidget__set_height(v78, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
          v79 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v79->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v79->fields.numberLabel,
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
    sub_B5D69C(Instance, v51);
  }
LABEL_45:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_47;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v57, 0LL);
  MasterMissionComponent__InitCompleteMissionLb(this, v81);
}


void __fastcall MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  UISprite_o *shopBtnSp; // x20

  if ( (byte_42E8976 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17197/*"btn_event_3"*/, v11, v12, v13);
    byte_42E8976 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0LL);
  shopBtnSp = this->fields.shopBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_17197/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
}


bool __fastcall MasterMissionComponent__ShouldPlayedStoneButtonEffect(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  int32_t UserStoneFragmentNum; // w0
  const MethodInfo *v11; // x2
  int32_t ExchangeStoneCount; // w19

  if ( (byte_42E89AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E89AB = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(Master_WarQuestSelectionMaster, 0LL);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, UserStoneFragmentNum, v11);
  return ExchangeStoneCount >= StoneShopMaster__GetPayMultiTimePrice(0LL);
}


void __fastcall MasterMissionComponent__StopStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *btnEffectPrefab; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o **p_btnEffectPrefab; // x19
  UnityEngine_GameObject_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E89AD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89AD = 1;
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
      sub_B5D69C(0LL, v6);
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0LL);
    v8 = *p_btnEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)v8, 0LL);
    *p_btnEffectPrefab = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_btnEffectPrefab, 0LL, v9, v10, v11, v12, v13, v14);
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
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x20
  System_String_o *stoneConvertLimit; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  int32_t ExchangeStoneCount; // w0
  int32_t v35; // w21
  MasterMissionComponent_c *v36; // x0
  UILabel_o *stoneConvertCount; // x22
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v39; // w1
  UnityEngine_Object_o *btnEffectBasePrefab; // x22
  const MethodInfo *v41; // x1
  AssetLoader_LoadEndDataHandler_o *v42; // x19
  int32_t v43; // w20
  const MethodInfo *v44; // x1
  int32_t v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E89AA & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, fragmentCount, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__, v15, v16, v17);
    sub_B5D5C4(&MasterMissionComponent___c__DisplayClass202_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5913/*"Effect/Common"*/, v21, v22, v23);
    byte_42E89AA = 1;
  }
  v45 = 0;
  v24 = sub_B5D694(MasterMissionComponent___c__DisplayClass202_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass202_0___ctor((MasterMissionComponent___c__DisplayClass202_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_31;
  *(_QWORD *)(v24 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v33);
  *(_DWORD *)(v24 + 24) = ExchangeStoneCount;
  v35 = ExchangeStoneCount;
  v36 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v36 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v36->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v35 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    stoneConvertLimit = System_Int32__ToString((int)v24 + 24, 0LL);
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
          v39 = 0;
          goto LABEL_19;
        }
      }
    }
LABEL_31:
    sub_B5D69C(stoneConvertLimit, v26);
  }
  if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v36);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  v45 = STONE_EXCHENGE_DISP_LIMIT;
  stoneConvertLimit = System_Int32__ToString((int32_t)&v45, 0LL);
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
  v39 = 1;
LABEL_19:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneConvertLimit, v39, 0LL);
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v42 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v42,
      (Il2CppObject *)v24,
      Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5913/*"Effect/Common"*/, v42, 1, 0LL);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v41);
    if ( this->fields.nowType == 1 )
    {
      v43 = *(_DWORD *)(v24 + 24);
      if ( v43 >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v44);
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_42E89B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E89B3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__CloseMasterMission(Instance, 0LL);
  MasterMissionComponent__OpenCompleteMission(this, v7, v8);
}


void __fastcall MasterMissionComponent___OpenPresentBox_b__189_0(
        MasterMissionComponent_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  int v19; // w2
  __int64 v20; // x3
  ErrorDialog_c *klass; // x8
  int v22; // w2
  __int64 v23; // x3
  ErrorDialog_c *v24; // x8
  __int64 *v25; // x8

  if ( (byte_42E89B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, hasGetServant, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11884/*"SERVANT_OVER"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v14, v15, v16);
    byte_42E89B5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_28;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_BYTE)v18, v19, v20);
    byte_42E4B1E = 1;
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
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_BYTE)v18, v22, v23);
    byte_42E4B1E = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v24 = Instance->fields.errorDialog->klass;
  if ( !v24 || (Instance = *(CommonUI_o **)&v24->_2.element_size) == 0LL )
LABEL_33:
    sub_B5D69C(Instance, v18);
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0LL);
LABEL_28:
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_33;
  if ( this->fields.overflowType )
    v25 = &StringLiteral_11884/*"SERVANT_OVER"*/;
  else
    v25 = &StringLiteral_3107/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v25, 0LL);
}


void __fastcall MasterMissionComponent___Open_b__136_0(
        MasterMissionComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v8; // x1

  if ( (byte_42E89B2 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, stoneCount, (_DWORD)method, v3);
    byte_42E89B2 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_B5D69C(NumberFormat, v8);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


void __fastcall MasterMissionComponent___PresentBoxOver_b__188_0(
        MasterMissionComponent_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  System_Action_o *v22; // x20

  if ( (byte_42E89B4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isPresentBoxOpen, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__, v6, v7, v8);
    sub_B5D5C4(&MasterMissionComponent___c__DisplayClass188_0_TypeInfo, v9, v10, v11);
    byte_42E89B4 = 1;
  }
  v12 = sub_B5D694(MasterMissionComponent___c__DisplayClass188_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass188_0___ctor((MasterMissionComponent___c__DisplayClass188_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v12 + 24),
          (System_Int32_array **)this,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        *(_BYTE *)(v12 + 16) = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v12,
          Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__,
          0LL),
        !presentBoxOverDialog) )
  {
    sub_B5D69C(v13, v14);
  }
  PresentBoxOverDialog__Close_25079716(presentBoxOverDialog, v22, 0LL);
}


void __fastcall MasterMissionComponent___setRecieveModifyItem_b__192_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E89B6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5558/*"END_DISP"*/, (_DWORD)method, v2, v3);
    byte_42E89B6 = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v5);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v6);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5558/*"END_DISP"*/, 0LL);
}


void __fastcall MasterMissionComponent__checkIsOpen(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  MstMissionDisplayInfoMaster_o *v31; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct MstMissionMaster_o *mstMissionMst; // x8
  _BOOL4 v40; // w22
  _BOOL4 v41; // w23
  struct System_String_o **p_titleTxt; // x21
  System_Int32_array **v43; // x1
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 *v58; // x8
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct System_String_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_42E897F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_8941/*"MST_REMISSON_MSG"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_8939/*"MST_REDISP_MSG"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_8942/*"MST_REMISSON_TITLE_TXT"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_8940/*"MST_REDISP_TITLE_TXT"*/, v26, v27, v28);
    byte_42E897F = 1;
  }
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !Instance )
    goto LABEL_29;
  v31 = (MstMissionDisplayInfoMaster_o *)Instance;
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v31->fields.list;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  mstMissionMst = this->fields.mstMissionMst;
  if ( !mstMissionMst )
    goto LABEL_29;
  this->fields.currentType = *(&mstMissionMst->fields.revision + 1);
  if ( !Instance || !Instance->fields.datalist || MstMissionMaster__IsOpenNow(mstMissionMst, 0LL) )
  {
    LOBYTE(v40) = 0;
    if ( !list )
      goto LABEL_16;
    goto LABEL_11;
  }
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
LABEL_29:
    sub_B5D69C(Instance, v30);
  v40 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0LL);
  if ( !list )
    goto LABEL_16;
LABEL_11:
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1
    && !MstMissionDisplayInfoMaster__IsOpenNow(v31, 0LL) )
  {
    v41 = !MstMissionDisplayInfoMaster__IsBefOpenTime(v31, 0LL);
    goto LABEL_17;
  }
LABEL_16:
  LOBYTE(v41) = 0;
LABEL_17:
  p_titleTxt = &this->fields.titleTxt;
  v43 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.titleTxt, v43, v33, v34, v35, v36, v37, v38);
  v44 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.msgTxt, v44, v45, v46, v47, v48, v49, v50);
  if ( v40 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_8942/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
    *p_titleTxt = (struct System_String_o *)v51;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.titleTxt, v51, v52, v53, v54, v55, v56, v57);
    v58 = &StringLiteral_8941/*"MST_REMISSON_MSG"*/;
LABEL_27:
    v66 = LocalizationManager__Get((System_String_o *)*v58, 0LL);
    this->fields.msgTxt = v66;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.msgTxt,
      (System_Int32_array **)v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    goto LABEL_28;
  }
  if ( v41 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v59 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_8940/*"MST_REDISP_TITLE_TXT"*/, 0LL);
    *p_titleTxt = (struct System_String_o *)v59;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.titleTxt, v59, v60, v61, v62, v63, v64, v65);
    v58 = &StringLiteral_8939/*"MST_REDISP_MSG"*/;
    goto LABEL_27;
  }
LABEL_28:
  this->fields.isNotNext = v40 || v41;
}


void __fastcall MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_B5D69C(0LL, method);
  StandFigureBack__DestroyFigure(standFigureBack, 0LL);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildDailyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  __int64 currentEventIdList; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v67; // w26
  Il2CppClass **v68; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x23
  __int64 v70; // x1
  System_String_array **v71; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v74; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v77; // x3
  System_Collections_Generic_IEnumerator_T__c *v78; // x8
  unsigned __int64 v79; // x10
  int32_t *v80; // x11
  __int64 v81; // x0
  MstMissionDisplayInfoEntity_o *v82; // x0
  __int64 v83; // x1
  struct MstMissionDisplayInfoEntity_o *v84; // x24
  __int64 v85; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v87; // x1
  System_String_array **v88; // x2
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v95; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Generic_IEnumerator_T__c *v104; // x8
  unsigned __int64 v105; // x10
  int32_t *v106; // x11
  __int64 v107; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v110; // x10
  int v111; // w9
  int32_t missionTargetId; // w22
  __int64 v113; // x21
  __int64 v114; // x9
  __int64 v115; // x9
  __int64 v117; // x0

  if ( (byte_42E8981 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&MstMissionDisplayInfoEntity_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    byte_42E8981 = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_77;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_77;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v57, v58, v59, v60, v61, v62);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_77;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v67 = 0;
    while ( 1 )
    {
      if ( v67 >= max_length )
      {
        v117 = sub_B5D6C8(currentEventIdList);
        sub_B5D668(v117, 0LL);
      }
      v68 = &mstMissionList->obj.klass + (int)v67;
      v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)v68[4];
      if ( !v69 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v68[4], 0LL);
      if ( (currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (__int64)EventMissionMaster__getDailyMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        v69->fields.missionConditionDetailId,
                                        0LL);
        if ( !currentEventIdList )
          break;
        method = (const MethodInfo *)currentEventIdList;
        if ( *(_QWORD *)(currentEventIdList + 24) )
        {
          if ( !v64 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
            (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = (__int64)this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)currentEventIdList,
            v69->fields.missionConditionDetailId,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
            v69,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v67 >= max_length )
        goto LABEL_20;
    }
LABEL_77:
    sub_B5D69C(currentEventIdList, method);
  }
LABEL_20:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_77;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_1AE4468 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v70);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v74 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v74;
        p_offset += 4;
        if ( v74 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v71);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v78 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v79 = 0LL;
      v80 = &v78->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v80 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v79;
        v80 += 4;
        if ( v79 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v81 = (__int64)&v78->vtable[*v80].method;
    }
    else
    {
LABEL_34:
      v81 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v77);
    }
    v82 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v81)(
                                             Enumerator,
                                             *(_QWORD *)(v81 + 8));
    v84 = v82;
    if ( !v82 )
      goto LABEL_79;
    v85 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v82->klass->_2.bitflags2 + 1) < (unsigned int)v85
      || (MstMissionDisplayInfoEntity_c *)v82->klass->_2.typeHierarchy[v85 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v82 = (MstMissionDisplayInfoEntity_o *)sub_B5D990(v82);
LABEL_79:
      sub_B5D69C(v82, v83);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v82, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v84->fields.guideImageId;
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
        sub_B5D69C(isOpenNow, v87);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v84->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v95 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v95 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v95->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v84->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v88,
        v71,
        v89,
        v90,
        v91,
        v92);
      id = v84->fields.id;
      this->fields.currentMissionDispInfoEnt = v84;
      this->fields.currentDispId = id;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v84,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
  }
  v104 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v105 = 0LL;
    v106 = &v104->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
    {
      ++v105;
      v106 += 4;
      if ( v105 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v107 = (__int64)&v104->vtable[*v106].method;
  }
  else
  {
LABEL_56:
    v107 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v77);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v107)(
                         Enumerator,
                         *(_QWORD *)(v107 + 8));
  if ( v64 )
  {
    size = v64->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v64->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      items = v64->fields._items;
      v110 = items->m_Items[0];
      if ( !v110 )
        goto LABEL_77;
      v111 = v64->fields._size;
      missionTargetId = v110->fields.missionTargetId;
      if ( v111 >= 1 )
      {
        v113 = 4LL;
        do
        {
          if ( v111 <= (unsigned int)(v113 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v114 = *((_QWORD *)&items->obj.klass + v113);
          if ( !v114 )
            goto LABEL_77;
          if ( missionTargetId > *(_DWORD *)(v114 + 16) )
          {
            if ( v64->fields._size <= (unsigned int)(v113 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v115 = *((_QWORD *)&items->obj.klass + v113);
            if ( !v115 )
              goto LABEL_77;
            missionTargetId = *(_DWORD *)(v115 + 16);
          }
          v111 = v64->fields._size;
        }
        while ( (int)++v113 - 4 < v111 );
      }
      this->fields.currentMissionId = missionTargetId;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v64;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildLimitedMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  System_Collections_Generic_List_int__o *currentEventIdList; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x21
  struct MstMissionEntity_array *mstMissionList; // x26
  int max_length; // w8
  unsigned int v68; // w27
  Il2CppClass **v69; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v70; // x24
  int32_t missionConditionDetailId; // w1
  __int64 v72; // x1
  System_String_array **v73; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v76; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v79; // x3
  System_Collections_Generic_IEnumerator_T__c *v80; // x8
  unsigned __int64 v81; // x10
  int32_t *v82; // x11
  __int64 v83; // x0
  MstMissionDisplayInfoEntity_o *v84; // x0
  __int64 v85; // x1
  struct MstMissionDisplayInfoEntity_o *v86; // x25
  __int64 v87; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v89; // x1
  System_String_array **v90; // x2
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v97; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Collections_Generic_IEnumerator_T__c *v106; // x8
  unsigned __int64 v107; // x10
  int32_t *v108; // x11
  __int64 v109; // x0
  int32_t v110; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v112; // x10
  int size; // w9
  int32_t missionTargetId; // w23
  __int64 v115; // x22
  __int64 v116; // x9
  __int64 v117; // x9
  __int64 v119; // x0

  if ( (byte_42E8984 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&MstMissionDisplayInfoEntity_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    byte_42E8984 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (System_Collections_Generic_List_int__o *)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v57, v58, v59, v60, v61, v62);
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v68 = 0;
    while ( 1 )
    {
      if ( v68 >= max_length )
      {
        v119 = sub_B5D6C8(currentEventIdList);
        sub_B5D668(v119, 0LL);
      }
      v69 = &mstMissionList->obj.klass + (int)v68;
      v70 = (EventMissionProgressRequest_Argument_ProgressData_o *)v69[4];
      if ( !v70 )
        break;
      currentEventIdList = (System_Collections_Generic_List_int__o *)MstMissionEntity__isOpenNow(
                                                                       (MstMissionEntity_o *)v69[4],
                                                                       0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v70->fields.missionConditionDetailId;
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
            if ( !v65 )
              break;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v65,
              (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            currentEventIdList = this->fields.currentEventIdList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_int___Add(
              currentEventIdList,
              v70->fields.missionConditionDetailId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            currentEventIdList = (System_Collections_Generic_List_int__o *)this->fields.currentMstMissionEntList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
              v70,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
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
        if ( !v64 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
          (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v68 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B5D69C(currentEventIdList, method);
  }
LABEL_22:
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  currentEventIdList = (System_Collections_Generic_List_int__o *)DataManager__getEntityList_QuestReleaseMaster_(
                                                                   (DataManager_o *)currentEventIdList,
                                                                   (const MethodInfo_1AE4468 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v72);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v76 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v76;
        p_offset += 4;
        if ( v76 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v73);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v80 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v81 = 0LL;
      v82 = &v80->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v82 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v81;
        v82 += 4;
        if ( v81 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v83 = (__int64)&v80->vtable[*v82].method;
    }
    else
    {
LABEL_36:
      v83 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v79);
    }
    v84 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v83)(
                                             Enumerator,
                                             *(_QWORD *)(v83 + 8));
    v86 = v84;
    if ( !v84 )
      goto LABEL_84;
    v87 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v84->klass->_2.bitflags2 + 1) < (unsigned int)v87
      || (MstMissionDisplayInfoEntity_c *)v84->klass->_2.typeHierarchy[v87 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v84 = (MstMissionDisplayInfoEntity_o *)sub_B5D990(v84);
LABEL_84:
      sub_B5D69C(v84, v85);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v84, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v86->fields.guideImageId;
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
        sub_B5D69C(isOpenNow, v89);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v86->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v97 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v97 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v97->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v86->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v90,
        v73,
        v91,
        v92,
        v93,
        v94);
      id = v86->fields.id;
      this->fields.currentMissionDispInfoEnt = v86;
      this->fields.currentDispId = id;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v86,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
    }
  }
  v106 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v107 = 0LL;
    v108 = &v106->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v108 - 1) != System_IDisposable_TypeInfo )
    {
      ++v107;
      v108 += 4;
      if ( v107 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_58;
    }
    v109 = (__int64)&v106->vtable[*v108].method;
  }
  else
  {
LABEL_58:
    v109 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v79);
  }
  currentEventIdList = (System_Collections_Generic_List_int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v109)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v109 + 8));
  if ( v65 && (v110 = v65->fields._size, v110 >= 1) )
  {
    this->fields.totalMissionNum = v110;
    if ( !v65->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    items = v65->fields._items;
    v112 = items->m_Items[0];
    if ( !v112 )
      goto LABEL_82;
    size = v65->fields._size;
    if ( size >= 1 )
    {
      missionTargetId = v112->fields.missionTargetId;
      v115 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v115 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v116 = *((_QWORD *)&items->obj.klass + v115);
        if ( !v116 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v116 + 16) )
        {
          if ( v65->fields._size <= (unsigned int)(v115 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v117 = *((_QWORD *)&items->obj.klass + v115);
          if ( !v117 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v117 + 16);
        }
        size = v65->fields._size;
      }
      while ( (int)++v115 - 4 < size );
    }
    this->fields.currentMissionId = 0;
    if ( !v64 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
      (System_Collections_Generic_IEnumerable_T__o *)v65,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v64 )
      goto LABEL_82;
    if ( v64->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v64;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getVaildWeeklyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  __int64 currentEventIdList; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x21
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v68; // w28
  Il2CppClass **v69; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v70; // x24
  int32_t missionConditionDetailId; // w1
  System_Collections_Generic_IEnumerable_T__o *v72; // x25
  __int64 v73; // x1
  System_String_array **v74; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v77; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v80; // x3
  System_Collections_Generic_IEnumerator_T__c *v81; // x8
  unsigned __int64 v82; // x10
  int32_t *v83; // x11
  __int64 v84; // x0
  MstMissionDisplayInfoEntity_o *v85; // x0
  __int64 v86; // x1
  struct MstMissionDisplayInfoEntity_o *v87; // x25
  __int64 v88; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v90; // x1
  System_String_array **v91; // x2
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v98; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Collections_Generic_IEnumerator_T__c *v107; // x8
  unsigned __int64 v108; // x10
  int32_t *v109; // x11
  __int64 v110; // x0
  int32_t v111; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v113; // x10
  int size; // w9
  int32_t missionTargetId; // w23
  __int64 v116; // x22
  __int64 v117; // x9
  __int64 v118; // x9
  __int64 v120; // x0

  if ( (byte_42E8982 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&MstMissionDisplayInfoEntity_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    byte_42E8982 = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v57, v58, v59, v60, v61, v62);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v68 = 0;
    while ( 1 )
    {
      if ( v68 >= max_length )
      {
        v120 = sub_B5D6C8(currentEventIdList);
        sub_B5D668(v120, 0LL);
      }
      v69 = &mstMissionList->obj.klass + (int)v68;
      v70 = (EventMissionProgressRequest_Argument_ProgressData_o *)v69[4];
      if ( !v70 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v69[4], 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v70->fields.missionConditionDetailId;
      if ( (currentEventIdList & 1) != 0 )
      {
        currentEventIdList = (__int64)EventMissionMaster__getWeeklyMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        missionConditionDetailId,
                                        0LL);
        if ( !currentEventIdList )
          break;
        v72 = (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList;
        if ( *(_QWORD *)(currentEventIdList + 24) )
        {
          currentEventIdList = (__int64)this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)currentEventIdList,
            v70->fields.missionConditionDetailId,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v65 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v65,
            v72,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
            v70,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      else
      {
        currentEventIdList = (__int64)EventMissionMaster__getClearMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        missionConditionDetailId,
                                        2,
                                        0LL);
        if ( !v64 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
          (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v68 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B5D69C(currentEventIdList, method);
  }
LABEL_22:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_1AE4468 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v73);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v77 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v77;
        p_offset += 4;
        if ( v77 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v74);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v81 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v82 = 0LL;
      v83 = &v81->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v83 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v82;
        v83 += 4;
        if ( v82 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v84 = (__int64)&v81->vtable[*v83].method;
    }
    else
    {
LABEL_36:
      v84 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v80);
    }
    v85 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v84)(
                                             Enumerator,
                                             *(_QWORD *)(v84 + 8));
    v87 = v85;
    if ( !v85 )
      goto LABEL_84;
    v88 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v85->klass->_2.bitflags2 + 1) < (unsigned int)v88
      || (MstMissionDisplayInfoEntity_c *)v85->klass->_2.typeHierarchy[v88 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v85 = (MstMissionDisplayInfoEntity_o *)sub_B5D990(v85);
LABEL_84:
      sub_B5D69C(v85, v86);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v85, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v87->fields.guideImageId;
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
        sub_B5D69C(isOpenNow, v90);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v87->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v98 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v98 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v98->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v87->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v91,
        v74,
        v92,
        v93,
        v94,
        v95);
      id = v87->fields.id;
      this->fields.currentMissionDispInfoEnt = v87;
      this->fields.currentDispId = id;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v87,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
    }
  }
  v107 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v108 = 0LL;
    v109 = &v107->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v109 - 1) != System_IDisposable_TypeInfo )
    {
      ++v108;
      v109 += 4;
      if ( v108 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_58;
    }
    v110 = (__int64)&v107->vtable[*v109].method;
  }
  else
  {
LABEL_58:
    v110 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v80);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v110)(
                         Enumerator,
                         *(_QWORD *)(v110 + 8));
  if ( v65 && (v111 = v65->fields._size, v111 >= 1) )
  {
    this->fields.totalMissionNum = v111;
    if ( !v65->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    items = v65->fields._items;
    v113 = items->m_Items[0];
    if ( !v113 )
      goto LABEL_82;
    size = v65->fields._size;
    missionTargetId = v113->fields.missionTargetId;
    if ( size >= 1 )
    {
      v116 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v116 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v117 = *((_QWORD *)&items->obj.klass + v116);
        if ( !v117 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v117 + 16) )
        {
          if ( v65->fields._size <= (unsigned int)(v116 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v118 = *((_QWORD *)&items->obj.klass + v116);
          if ( !v118 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v118 + 16);
        }
        size = v65->fields._size;
      }
      while ( (int)++v116 - 4 < size );
    }
    this->fields.currentMissionId = missionTargetId;
    if ( !v64 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
      (System_Collections_Generic_IEnumerable_T__o *)v65,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v64 )
      goto LABEL_82;
    if ( v64->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v64;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall MasterMissionComponent__getValidExtraMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  __int64 currentEventIdList; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v67; // w26
  Il2CppClass **v68; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x23
  __int64 v70; // x1
  System_String_array **v71; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v74; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v77; // x3
  System_Collections_Generic_IEnumerator_T__c *v78; // x8
  unsigned __int64 v79; // x10
  int32_t *v80; // x11
  __int64 v81; // x0
  MstMissionDisplayInfoEntity_o *v82; // x0
  __int64 v83; // x1
  struct MstMissionDisplayInfoEntity_o *v84; // x24
  __int64 v85; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v87; // x1
  System_String_array **v88; // x2
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v95; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Generic_IEnumerator_T__c *v104; // x8
  unsigned __int64 v105; // x10
  int32_t *v106; // x11
  __int64 v107; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v110; // x10
  int v111; // w9
  int32_t missionTargetId; // w22
  __int64 v113; // x21
  __int64 v114; // x9
  __int64 v115; // x9
  __int64 v117; // x0

  if ( (byte_42E8983 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&MstMissionDisplayInfoEntity_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    byte_42E8983 = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_78;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v57, v58, v59, v60, v61, v62);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v67 = 0;
    while ( 1 )
    {
      if ( v67 >= max_length )
      {
        v117 = sub_B5D6C8(currentEventIdList);
        sub_B5D668(v117, 0LL);
      }
      v68 = &mstMissionList->obj.klass + (int)v67;
      v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)v68[4];
      if ( !v69 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v68[4], 0LL);
      if ( (currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (__int64)EventMissionMaster__getExtraMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        v69->fields.missionConditionDetailId,
                                        0LL);
        if ( currentEventIdList )
        {
          method = (const MethodInfo *)currentEventIdList;
          if ( *(int *)(currentEventIdList + 24) >= 1 )
          {
            if ( !v64 )
              break;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
              (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            currentEventIdList = (__int64)this->fields.currentEventIdList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)currentEventIdList,
              v69->fields.missionConditionDetailId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
              v69,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v67 >= max_length )
        goto LABEL_20;
    }
LABEL_78:
    sub_B5D69C(currentEventIdList, method);
  }
LABEL_20:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_78;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_1AE4468 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v70);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v74 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v74;
        p_offset += 4;
        if ( v74 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v71);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v78 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v79 = 0LL;
      v80 = &v78->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v80 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v79;
        v80 += 4;
        if ( v79 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v81 = (__int64)&v78->vtable[*v80].method;
    }
    else
    {
LABEL_34:
      v81 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v77);
    }
    v82 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v81)(
                                             Enumerator,
                                             *(_QWORD *)(v81 + 8));
    v84 = v82;
    if ( !v82 )
      sub_B5D69C(0LL, v83);
    v85 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v82->klass->_2.bitflags2 + 1) < (unsigned int)v85
      || (MstMissionDisplayInfoEntity_c *)v82->klass->_2.typeHierarchy[v85 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      currentEventIdList = sub_B5D990(v82);
      goto LABEL_78;
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v82, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v84->fields.guideImageId;
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
        sub_B5D69C(isOpenNow, v87);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v84->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v95 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v95 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v95->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v84->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v88,
        v71,
        v89,
        v90,
        v91,
        v92);
      id = v84->fields.id;
      this->fields.currentMissionDispInfoEnt = v84;
      this->fields.currentDispId = id;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v84,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103);
    }
  }
  v104 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v105 = 0LL;
    v106 = &v104->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
    {
      ++v105;
      v106 += 4;
      if ( v105 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v107 = (__int64)&v104->vtable[*v106].method;
  }
  else
  {
LABEL_56:
    v107 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v77);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v107)(
                         Enumerator,
                         *(_QWORD *)(v107 + 8));
  if ( v64 )
  {
    size = v64->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v64->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      items = v64->fields._items;
      v110 = items->m_Items[0];
      if ( !v110 )
        goto LABEL_78;
      v111 = v64->fields._size;
      if ( v111 >= 1 )
      {
        missionTargetId = v110->fields.missionTargetId;
        v113 = 4LL;
        do
        {
          if ( v111 <= (unsigned int)(v113 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v114 = *((_QWORD *)&items->obj.klass + v113);
          if ( !v114 )
            goto LABEL_78;
          if ( missionTargetId > *(_DWORD *)(v114 + 16) )
          {
            if ( v64->fields._size <= (unsigned int)(v113 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v115 = *((_QWORD *)&items->obj.klass + v113);
            if ( !v115 )
              goto LABEL_78;
            missionTargetId = *(_DWORD *)(v115 + 16);
          }
          v111 = v64->fields._size;
        }
        while ( (int)++v113 - 4 < v111 );
      }
      this->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v64;
}


int32_t __fastcall MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t result; // w0
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1

  if ( (byte_42E8972 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E8972 = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v10);
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
    sub_B5D69C(this, method);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
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
  __int64 v3; // x3
  MasterMissionComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 *v24; // x8
  Il2CppObject *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  MasterMissionComponent_o *v32; // x20
  struct UnityEngine_GameObject_o *titlePrefab; // x8
  struct UnityEngine_GameObject_o *v34; // x8
  struct UnityEngine_GameObject_o *v35; // x8
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct UnityEngine_GameObject_o *v45; // x10
  MasterMissionListViewManager_o *v46; // x21
  System_Int32_array **monitor; // x1
  System_Int32_array **v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0

  v5 = this;
  if ( (byte_42E899D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___,
      (_DWORD)result,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v18, v19, v20);
    this = (MasterMissionComponent_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v21, v22, v23);
    byte_42E899D = 1;
  }
  if ( !result )
    goto LABEL_25;
  if ( !System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    v25 = (Il2CppObject *)System_String__Concat_44580072(
                            (System_String_o *)StringLiteral_15824/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16061/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                         v25,
                                         (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( this )
    {
      v32 = this;
      if ( !LODWORD(this->fields.myFsm) )
        goto LABEL_26;
      titlePrefab = this->fields.titlePrefab;
      if ( !titlePrefab )
        goto LABEL_25;
      v5->fields.isOverPresentBox = (bool)titlePrefab[1].klass;
      if ( !LODWORD(this->fields.myFsm) )
        goto LABEL_26;
      v34 = this->fields.titlePrefab;
      if ( !v34 )
        goto LABEL_25;
      v5->fields.overflowType = HIDWORD(v34[1].klass);
      if ( !LODWORD(this->fields.myFsm) )
        goto LABEL_26;
      v35 = this->fields.titlePrefab;
      if ( !v35 )
        goto LABEL_25;
      v36 = *(System_Int32_array ***)&v35->fields.m_CachedPtr;
      v5->fields.receiveMissionIds = (struct System_Int32_array *)v36;
      sub_B5D560((BattleServantConfConponent_o *)&v5->fields.receiveMissionIds, v36, v26, v27, v28, v29, v30, v31);
      missionListViewManager = v5->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_25;
      nowType = v5->fields.nowType;
      if ( (unsigned int)nowType >= missionListViewManager->max_length || !LODWORD(v32->fields.myFsm) )
      {
LABEL_26:
        v55 = sub_B5D6C8(this);
        sub_B5D668(v55, 0LL);
      }
      v45 = v32->fields.titlePrefab;
      if ( v45 )
      {
        v46 = missionListViewManager->m_Items[nowType];
        if ( v46 )
        {
          monitor = (System_Int32_array **)v45[1].monitor;
          v48 = *(System_Int32_array ***)&v45[1].fields.m_CachedPtr;
          v46->fields.getSvtList = (struct GetSvts_array *)monitor;
          sub_B5D560((BattleServantConfConponent_o *)&v46->fields.getSvtList, monitor, v37, v38, v39, v40, v41, v42);
          v46->fields.getCommandCodeList = (struct GetCommandCodes_array *)v48;
          sub_B5D560((BattleServantConfConponent_o *)&v46->fields.getCommandCodeList, v48, v49, v50, v51, v52, v53, v54);
          this = (MasterMissionComponent_o *)v5->fields.myFsm;
          if ( this )
          {
            v24 = &StringLiteral_11212/*"REQUEST_OK"*/;
            goto LABEL_24;
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(this, result);
  }
  this = (MasterMissionComponent_o *)v5->fields.myFsm;
  if ( !this )
    goto LABEL_25;
  v24 = &StringLiteral_11210/*"REQUEST_NG"*/;
LABEL_24:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v24, 0LL);
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  bool _29295864; // w0
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42E8991 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)voiceIDs, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MasterMissionComponent_setNormalFace__, v6, v7, v8);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v9, v10, v11);
    byte_42E8991 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = TutorialFlag__Get_29295864(126, 0LL);
  if ( voiceIDs && !_29295864 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
    if ( !svtVoiceCtr )
      sub_B5D69C(v16, v17);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v15, 0LL);
  }
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice_25295040(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        System_Action_o *action,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  bool _29295864; // w0
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v34; // x20

  if ( (byte_42E8992 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)voiceIDs, (_DWORD)action, method);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__, v10, v11, v12);
    sub_B5D5C4(&MasterMissionComponent___c__DisplayClass171_0_TypeInfo, v13, v14, v15);
    byte_42E8992 = 1;
  }
  v16 = sub_B5D694(MasterMissionComponent___c__DisplayClass171_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass171_0___ctor((MasterMissionComponent___c__DisplayClass171_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_12;
  *(_QWORD *)(v16 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = action;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)action, v25, v26, v27, v28, v29, v30);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = TutorialFlag__Get_29295864(126, 0LL);
  if ( voiceIDs && !_29295864 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v16,
      Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__,
      0LL);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v34, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__playSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Object_o *playBtnImg; // x20
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x8
  UnityEngine_Transform_o *transform; // x20
  int v25; // s0
  EventSvtControl_o *svtVoiceCtr; // x20
  System_Action_o *v29; // x21

  if ( (byte_42E8990 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_MasterMissionComponent_setNormalFace__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E8990 = 1;
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
      *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform
        || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v25, 0LL),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0LL
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0LL )
      {
LABEL_19:
        sub_B5D69C(voicePlayEffect, v22);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_19;
  EventSvtControl__playVoice(svtVoiceCtr, v29, 0LL);
}


void __fastcall MasterMissionComponent__reDispMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int64_t Time; // x0
  __int64 v45; // x1
  TerminalSceneComponent_c *v46; // x0
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v49; // x21
  MasterMissionComponent___c_c *v50; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__150_0; // x22
  Il2CppObject *v53; // x23
  struct MasterMissionComponent___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct MstMissionDisplayInfoEntity_o *currentMissionDispInfoEnt; // x8
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x24
  __int64 size; // x21
  int64_t v64; // x20
  __int64 v65; // x22
  unsigned __int64 v66; // x23
  struct System_Collections_Generic_List_MstMissionEntity__o *v67; // x24
  struct System_Collections_Generic_List_MstMissionEntity__o *v68; // x24
  __int64 v69; // x8
  int64_t v70; // x8
  __int64 v71; // x8
  int v72; // w21
  struct System_String_o *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct System_String_o *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct MstMissionDisplayInfoEntity_o *v87; // x8
  int v88; // w8
  __int64 *v89; // x8
  struct System_String_o *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 *v97; // x8
  struct System_String_o *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  bool v105; // w9

  if ( (byte_42E8980 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_MasterMissionComponent___c__reDispMissionList_b__150_0__, v26, v27, v28);
    sub_B5D5C4(&MasterMissionComponent___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_8941/*"MST_REMISSON_MSG"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_8939/*"MST_REDISP_MSG"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_8942/*"MST_REMISSON_TITLE_TXT"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_8940/*"MST_REDISP_TITLE_TXT"*/, v41, v42, v43);
    byte_42E8980 = 1;
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
    v64 = Time;
    if ( (int)size < 1 )
    {
LABEL_51:
      v72 = 0;
    }
    else
    {
      v65 = 4LL;
      while ( 1 )
      {
        v66 = v65 - 4;
        if ( v65 - 4 >= (unsigned __int64)(unsigned int)currentMstMissionEntList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( *((_QWORD *)&currentMstMissionEntList->fields._items->obj.klass + v65) )
        {
          v67 = this->fields.currentMstMissionEntList;
          if ( !v67 )
            goto LABEL_82;
          if ( v66 >= (unsigned int)v67->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          Time = *((_QWORD *)&v67->fields._items->obj.klass + v65);
          if ( !Time )
            goto LABEL_82;
          Time = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0LL);
          v68 = this->fields.currentMstMissionEntList;
          if ( (_DWORD)Time == 5 )
          {
            if ( !v68 )
              goto LABEL_82;
            if ( v66 >= (unsigned int)v68->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v69 = *((_QWORD *)&v68->fields._items->obj.klass + v65);
            if ( !v69 )
              goto LABEL_82;
            v70 = *(_QWORD *)(v69 + 40);
          }
          else
          {
            if ( !v68 )
              goto LABEL_82;
            if ( v66 >= (unsigned int)v68->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v71 = *((_QWORD *)&v68->fields._items->obj.klass + v65);
            if ( !v71 )
              goto LABEL_82;
            v70 = *(_QWORD *)(v71 + 32);
          }
          if ( v64 >= v70 )
            break;
        }
        if ( v65 - 3 >= size )
          goto LABEL_51;
        currentMstMissionEntList = this->fields.currentMstMissionEntList;
        ++v65;
        if ( !currentMstMissionEntList )
          goto LABEL_82;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_8942/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
      this->fields.titleTxt = v73;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.titleTxt,
        (System_Int32_array **)v73,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_8941/*"MST_REMISSON_MSG"*/, 0LL);
      this->fields.msgTxt = v80;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.msgTxt,
        (System_Int32_array **)v80,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      v72 = 1;
    }
    v87 = this->fields.currentMissionDispInfoEnt;
    if ( !v87 )
      goto LABEL_82;
    if ( v64 >= v87->fields.endedAt )
    {
      if ( (v72 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v89 = &StringLiteral_8942/*"MST_REMISSON_TITLE_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v89 = &StringLiteral_8940/*"MST_REDISP_TITLE_TXT"*/;
      }
      v90 = LocalizationManager__Get((System_String_o *)*v89, 0LL);
      this->fields.titleTxt = v90;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.titleTxt,
        (System_Int32_array **)v90,
        v91,
        v92,
        v93,
        v94,
        v95,
        v96);
      if ( (v72 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v97 = &StringLiteral_8941/*"MST_REMISSON_MSG"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v97 = &StringLiteral_8939/*"MST_REDISP_MSG"*/;
      }
      v98 = LocalizationManager__Get((System_String_o *)*v97, 0LL);
      this->fields.msgTxt = v98;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.msgTxt,
        (System_Int32_array **)v98,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
      v88 = 1;
    }
    else
    {
      v88 = 0;
    }
    v105 = (v88 | v72) != 0;
    LODWORD(currentMissionDispInfoEnt) = this->fields.isNotNext;
    if ( v105 )
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
      v46 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v46 = TerminalSceneComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__DeleteKey(v46->static_fields->MASTER_MISSION_RESET_KEY, 0LL);
      Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      titleTxt = this->fields.titleTxt;
      msgTxt = this->fields.msgTxt;
      v49 = (CommonUI_o *)Time;
      v50 = MasterMissionComponent___c_TypeInfo;
      if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
        v50 = MasterMissionComponent___c_TypeInfo;
      }
      static_fields = v50->static_fields;
      _9__150_0 = static_fields->__9__150_0;
      if ( !_9__150_0 )
      {
        if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
        }
        v53 = (Il2CppObject *)static_fields->__9;
        _9__150_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__150_0, v53, Method_MasterMissionComponent___c__reDispMissionList_b__150_0__, 0LL);
        v54 = MasterMissionComponent___c_TypeInfo->static_fields;
        v54->__9__150_0 = _9__150_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v54->__9__150_0,
          (System_Int32_array **)_9__150_0,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      if ( v49 )
      {
        CommonUI__OpenNotificationDialog(v49, titleTxt, msgTxt, _9__150_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
        return;
      }
LABEL_82:
      sub_B5D69C(Time, v45);
    }
  }
}


void __fastcall MasterMissionComponent__setCurrentSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterMissionComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x21
  unsigned int size; // w8
  __int64 currentIdx; // x22
  EventSvtControl_o *svtVoiceCtr; // x20
  MasterMissionComponent_VoiceData_o *v12; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v13; // x22
  __int64 v14; // x23
  System_Collections_Generic_List_ServantVoiceData____o *DataListRand; // x21
  MasterMissionComponent_VoiceData_o *v16; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v17; // x23
  __int64 v18; // x24
  System_Collections_Generic_List_ServantVoiceData____o *DataListMission; // x22
  MasterMissionComponent_VoiceData_o *v20; // x8
  System_String_o *DataName; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct StandFigureBack_o *standFigureBack; // x8
  struct UnityEngine_GameObject_o *standFigureCollectList; // x1
  const MethodInfo *v30; // x1

  v4 = this;
  if ( (byte_42E898F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    this = (MasterMissionComponent_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__,
                                         v5,
                                         v6,
                                         v7);
    byte_42E898F = 1;
  }
  currentVoiceDataList = v4->fields.currentVoiceDataList;
  if ( !currentVoiceDataList )
    goto LABEL_21;
  size = currentVoiceDataList->fields._size;
  if ( size )
  {
    currentIdx = v4->fields.currentIdx;
    svtVoiceCtr = v4->fields.svtVoiceCtr;
    if ( size <= (unsigned int)currentIdx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v12 = currentVoiceDataList->fields._items->m_Items[currentIdx];
    if ( v12 )
    {
      v13 = v4->fields.currentVoiceDataList;
      if ( v13 )
      {
        v14 = v4->fields.currentIdx;
        DataListRand = v12->fields.DataListRand;
        if ( v13->fields._size <= (unsigned int)v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v16 = v13->fields._items->m_Items[v14];
        if ( v16 )
        {
          v17 = v4->fields.currentVoiceDataList;
          if ( v17 )
          {
            v18 = v4->fields.currentIdx;
            DataListMission = v16->fields.DataListMission;
            if ( v17->fields._size <= (unsigned int)v18 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v20 = v17->fields._items->m_Items[v18];
            if ( v20 )
            {
              DataName = v20->fields.DataName;
              this = (MasterMissionComponent_o *)ServantVoiceMaster__getSvtVoiceId(v4->fields.currentEventSvtId, 0LL);
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
                standFigureBack = v4->fields.standFigureBack;
                if ( standFigureBack )
                {
                  this = (MasterMissionComponent_o *)v4->fields.svtVoiceCtr;
                  if ( this )
                  {
                    standFigureCollectList = (struct UnityEngine_GameObject_o *)standFigureBack->fields.standFigureCollectList;
                    this->fields.eventMissionInfo = standFigureCollectList;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&this->fields.eventMissionInfo,
                      (System_Int32_array **)standFigureCollectList,
                      v22,
                      v23,
                      v24,
                      v25,
                      v26,
                      v27);
                    MasterMissionComponent__playSvtVoice(v4, v30);
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
    sub_B5D69C(this, method);
  }
}


void __fastcall MasterMissionComponent__setGuideSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  void *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x1
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x21
  ServantVoiceMaster_o *v59; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v77; // x22
  struct System_String_o *VoiceAssetName; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  struct System_String_array *voiceNameList; // x23
  __int64 v87; // x8
  unsigned __int64 v88; // x24
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  MasterMissionComponent_VoiceData_o *v99; // x22
  int32_t v100; // w8
  Il2CppObject *current; // x21
  WebViewManager_o *v102; // x0
  __int64 v103; // x1
  SoundManager_o *v104; // x20
  System_String_o *klass; // x21
  System_Action_o *v106; // x22
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x0
  System_Collections_Generic_List_Enumerator_T__o v110; // [xsp+0h] [xbp-60h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42E8986 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&MasterMissionComponent_VoiceData_TypeInfo, v53, v54, v55);
    byte_42E8986 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  memset(&v110, 0, sizeof(v110));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v59 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v60;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentVoiceDataList,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v67,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v67;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceListRand,
    (System_Int32_array **)v67,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
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
  if ( !v59 )
    goto LABEL_31;
  Entity = ServantVoiceMaster__GetEntity(v59, voicePrefix[1], voicePrefix[0], 8, 0LL);
  if ( !Entity )
    goto LABEL_19;
  v77 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0LL);
  this->fields.lastAssetName = VoiceAssetName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lastAssetName,
    (System_Int32_array **)VoiceAssetName,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    v87 = *(_QWORD *)&voiceNameList->max_length;
    if ( v87 )
    {
      if ( (int)v87 >= 1 )
      {
        v88 = 0LL;
        do
        {
          if ( v88 >= (unsigned int)v87 )
          {
            v109 = sub_B5D6C8(MstMissionVoiceListByName);
            sub_B5D668(v109, 0LL);
          }
          MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                        v77,
                                        voiceNameList->m_Items[v88],
                                        0LL);
          if ( MstMissionVoiceListByName )
          {
            v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)MstMissionVoiceListByName;
            Instance = *p_voiceListRand;
            if ( !*p_voiceListRand )
              goto LABEL_31;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              v57,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
          LODWORD(v87) = voiceNameList->max_length;
          ++v88;
        }
        while ( (__int64)v88 < (int)v87 );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v77, 0LL);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceListMission,
    (System_Int32_array **)MasterMissionActionVoiceList,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  currentVoiceDataList = this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v99 = (MasterMissionComponent_VoiceData_o *)sub_B5D694(MasterMissionComponent_VoiceData_TypeInfo);
  MasterMissionComponent_VoiceData___ctor(v99, VoiceAssetName, voiceListRand, voiceListMission, 0LL);
  if ( !currentVoiceDataList )
LABEL_31:
    sub_B5D69C(Instance, v57);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentVoiceDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v99,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__);
LABEL_19:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_31;
  v100 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v100;
  if ( v100 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, (const MethodInfo *)v57);
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v110,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v110,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v110.fields.current;
      v102 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_B5D69C(v102, v103);
      v104 = (SoundManager_o *)v102;
      klass = (System_String_o *)current[1].klass;
      v106 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v106, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0LL);
      if ( !v104 )
        sub_B5D69C(v107, v108);
      SoundManager__LoadAudioAssetStorage(v104, klass, v106, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v110,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
  }
}


void __fastcall MasterMissionComponent__setMissionCompleteNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x24
  signed __int64 size; // x21
  int32_t compMissionNum; // w22
  UserEventMissionMaster_o *v31; // x20
  unsigned __int64 v32; // x23
  System_String_o *v33; // x20
  UILabel_o *eventMissionTxt2; // x21
  Il2CppObject *v35; // x22
  Il2CppObject *v36; // x0
  UILabel_o *v37; // x19
  UILabel_o *eventMissionTxt; // x21
  Il2CppObject *v39; // x22
  Il2CppObject *v40; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E8985 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_8725/*"MASTER_MISSION_COMPLETE_NUM"*/, v23, v24, v25);
    byte_42E8985 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_28;
  size = currentEventIdList->fields._size;
  if ( (int)size >= 1 )
  {
    compMissionNum = this->fields.compMissionNum;
    v31 = (UserEventMissionMaster_o *)Instance;
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)currentEventIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v31 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(
                                    v31,
                                    currentEventIdList->fields._items->m_Items[++v32],
                                    0LL);
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( (__int64)v32 >= size )
        goto LABEL_13;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_28:
    sub_B5D69C(Instance, v27);
  }
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8725/*"MASTER_MISSION_COMPLETE_NUM"*/, 0LL);
  if ( !this->fields.eventMissionInfo )
    goto LABEL_28;
  v33 = (System_String_o *)Instance;
  if ( this->fields.nowType )
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 0, 0LL);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    eventMissionTxt2 = this->fields.eventMissionTxt2;
    v42 = this->fields.compMissionNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    totalMissionNum = this->fields.totalMissionNum;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_44573324(v33, v35, v36, 0LL);
    if ( !eventMissionTxt2 )
      goto LABEL_28;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0LL);
    v37 = this->fields.eventMissionTxt2;
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    }
    if ( !v37 )
      goto LABEL_28;
    UILabel__SetCondensedScale_41950620(
      v37,
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
    v42 = this->fields.compMissionNum;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    totalMissionNum = this->fields.totalMissionNum;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_44573324(v33, v39, v40, 0LL);
    if ( !eventMissionTxt )
      goto LABEL_28;
    UILabel__set_text(eventMissionTxt, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall MasterMissionComponent__setMySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  StandFigureBack_o *standFigureBack; // x19
  int32_t currentEventSvtId; // w20
  MasterMissionComponent_c *v7; // x0

  if ( (byte_42E898E & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E898E = 1;
  }
  standFigureBack = this->fields.standFigureBack;
  currentEventSvtId = this->fields.currentEventSvtId;
  v7 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !standFigureBack )
    sub_B5D69C(v7, method);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0

  if ( (byte_42E8993 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8993 = 1;
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
    sub_B5D69C(voicePlayEffect, v6);
  StandFigureBack__SetFaceType((StandFigureBack_o *)voicePlayEffect, 0, 0.0, 0, 0LL);
}


void __fastcall MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  MasterMissionComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct MasterMissionListViewManager_array *v10; // x8
  __int64 v11; // x9
  MissionListViewManager_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x1
  __int64 v15; // x0

  v4 = this;
  if ( (byte_42E89A4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    this = (MasterMissionComponent_o *)sub_B5D5C4(
                                         &Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__,
                                         v5,
                                         v6,
                                         v7);
    byte_42E89A4 = 1;
  }
  missionListViewManager = v4->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_10;
  nowType = v4->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_11;
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this
    || (MasterMissionListViewManager__ModifyItem(
          (MasterMissionListViewManager_o *)this,
          v4->fields.receiveMissionIds,
          v2),
        (v10 = v4->fields.missionListViewManager) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(this, method);
  }
  v11 = v4->fields.nowType;
  if ( (unsigned int)v11 >= v10->max_length )
  {
LABEL_11:
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
  }
  v12 = (MissionListViewManager_o *)v10->m_Items[v11];
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__, 0LL);
  if ( !v12 )
    goto LABEL_10;
  MissionListViewManager__SetMode(v12, 3, v13, 0LL);
  MasterMissionComponent__RefreshInfo(v4, v14);
}


void __fastcall MasterMissionComponent__stopSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    sub_B5D69C(0LL, method);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5F39 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5F39 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  MasterMissionComponent_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  MasterMissionComponent_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
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
  sub_B5D560(v10);
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
  sub_B5D560(&this->fields);
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
  sub_B5D560(&this->fields);
  this->fields.DataListRand = voiceDataListRand;
  sub_B5D560(&this->fields.DataListRand);
  this->fields.DataListMission = voiceDataListMission;
  sub_B5D560(&this->fields.DataListMission);
}


void __fastcall MasterMissionComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F30 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5F30 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MasterMissionComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MasterMissionComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall MasterMissionComponent___c___ctor(MasterMissionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterMissionComponent___c___ExitCompleteMission_b__147_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  CommonUI_o *v12; // x19
  int v13; // w2
  __int64 v14; // x3
  TerminalSceneComponent_c *v15; // x0
  int v16; // w2
  __int64 v17; // x3
  ErrorDialog_c *klass; // x8

  if ( (byte_42E5F32 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v7, v8, v9);
    byte_42E5F32 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v12 )
    goto LABEL_25;
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v11, v13, v14);
    byte_42E4B1E = 1;
  }
  v15 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v15 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v15->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_25;
  TerminalSceneComponent__playBgm_18327136((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v11, v16, v17);
    byte_42E4B1E = 1;
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
    sub_B5D69C(Instance, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  SceneJumpInfo_o *v15; // x19

  if ( (byte_42E5F34 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_13233/*"StoneFragments"*/, v10, v11, v12);
    byte_42E5F34 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission(Instance, 0LL),
        v15 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_17508984(v15, (System_String_o *)StringLiteral_13233/*"StoneFragments"*/, 0LL),
        !v15)
    || (SceneJumpInfo__SetReturnNowScene(v15, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v14);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v15, 0LL);
}


void __fastcall MasterMissionComponent___c___OpenCompleteMission_b__145_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_c *v4; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_42E5F31 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5F31 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( !mInstance )
    sub_B5D69C(0LL, method);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0LL);
}


void __fastcall MasterMissionComponent___c___reDispMissionList_b__150_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ManagementManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5F33 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5F33 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
    sub_B5D69C(_4__this, method);
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
  __int64 v3; // x3
  MasterMissionComponent___c__DisplayClass181_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  struct MasterMissionComponent_o *_4__this; // x8
  System_Collections_Generic_List_int__o *v34; // x20
  __int64 v35; // x1
  __int64 MissionId; // x0
  __int64 *v37; // x8
  struct MasterMissionComponent_o *v38; // x21
  struct MasterMissionComponent_o *v39; // x8
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-40h] BYREF

  v5 = this;
  if ( (byte_42E5F35 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__,
      isDecide,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3114/*"CLICK_DECIDE"*/, v27, v28, v29);
    this = (MasterMissionComponent___c__DisplayClass181_0_o *)sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v30, v31, v32);
    byte_42E5F35 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v34 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v34,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    this = (MasterMissionComponent___c__DisplayClass181_0_o *)v5->fields.items;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v40,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v41 = v40;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v41,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__) )
      {
        if ( !v41.fields.current )
          sub_B5D69C(0LL, v35);
        MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v41.fields.current, 0LL);
        if ( !v34 )
          sub_B5D69C(MissionId, (unsigned int)MissionId);
        System_Collections_Generic_List_int___Add(
          v34,
          MissionId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v41,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v34 )
      {
        v38 = v5->fields.__4__this;
        this = (MasterMissionComponent___c__DisplayClass181_0_o *)System_Collections_Generic_List_int___ToArray(
                                                                    v34,
                                                                    (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v38 )
        {
          v38->fields.sendMissionIds = (struct System_Int32_array *)this;
          sub_B5D560(&v38->fields.sendMissionIds);
          v39 = v5->fields.__4__this;
          if ( v39 )
          {
            this = (MasterMissionComponent___c__DisplayClass181_0_o *)v39->fields.myFsm;
            if ( this )
            {
              v37 = &StringLiteral_3114/*"CLICK_DECIDE"*/;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(this, isDecide);
  }
  this = (MasterMissionComponent___c__DisplayClass181_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_21;
  v37 = &StringLiteral_3107/*"CLICK_CANCEL"*/;
LABEL_18:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v37, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  MasterMissionComponent___c__DisplayClass187_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v12; // x8

  v4 = this;
  if ( (byte_42E5F36 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11884/*"SERVANT_OVER"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10610/*"PRESENT_BOX_OVER"*/, v5, v6, v7);
    this = (MasterMissionComponent___c__DisplayClass187_0_o *)sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v8, v9, v10);
    byte_42E5F36 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterMissionComponent___c__DisplayClass187_0_o *)_4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( this )
    {
      v12 = &StringLiteral_10610/*"PRESENT_BOX_OVER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(this, method);
  }
  if ( !this )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v12 = &StringLiteral_11884/*"SERVANT_OVER"*/;
  else
    v12 = &StringLiteral_3107/*"CLICK_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v12, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__1(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *nextAction; // x0

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_B5D69C(0LL, method);
  System_Action__Invoke(nextAction, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__2(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *nextAction; // x0

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MasterMissionComponent_o *_4__this; // x0
  __int64 *v9; // x9

  if ( (byte_42E5F37 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11884/*"SERVANT_OVER"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v5, v6, v7);
    byte_42E5F37 = 1;
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
    sub_B5D69C(_4__this, method);
  if ( _4__this->fields.overflowType )
    v9 = &StringLiteral_11884/*"SERVANT_OVER"*/;
  else
    v9 = &StringLiteral_3107/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent(_4__this->fields.myFsm, (System_String_o *)*v9, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct MasterMissionComponent_o *_4__this; // x21
  MasterMissionComponent_o *Object_WarBoardWaitTimeSetting; // x0
  struct MasterMissionComponent_o *v11; // x8
  int32_t exchangeCount; // w20

  if ( (byte_42E5F38 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v6, v7, v8);
    byte_42E5F38 = 1;
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
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B5D560(&_4__this->fields.btnEffectBasePrefab);
  Object_WarBoardWaitTimeSetting = this->fields.__4__this;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_15;
  MasterMissionComponent__StopStoneButtonEffect(Object_WarBoardWaitTimeSetting, 0LL);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_15;
  if ( v11->fields.nowType == 1 )
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
      sub_B5D69C(Object_WarBoardWaitTimeSetting, assetData);
    }
  }
}


void __fastcall MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}