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

  if ( (byte_4212AC9 & 1) == 0 )
  {
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17117/*"btn_txt_off_limited"*/, v8);
    sub_B0D8A4(&StringLiteral_17116/*"btn_txt_off_extra"*/, v9);
    sub_B0D8A4(&StringLiteral_17123/*"btn_txt_on_limited"*/, v10);
    sub_B0D8A4(&StringLiteral_18224/*"ef_btn_blink"*/, v11);
    sub_B0D8A4(&StringLiteral_17115/*"btn_txt_off_daily"*/, v12);
    sub_B0D8A4(&StringLiteral_17121/*"btn_txt_on_daily"*/, v13);
    sub_B0D8A4(&StringLiteral_17124/*"btn_txt_on_weekly"*/, v14);
    sub_B0D8A4(&StringLiteral_17118/*"btn_txt_off_weekly"*/, v15);
    sub_B0D8A4(&StringLiteral_17122/*"btn_txt_on_extra"*/, v16);
    byte_4212AC9 = 1;
  }
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID = 9000001;
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_LIMITCNT = 0;
  v17 = MasterMissionComponent_TypeInfo;
  MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  static_fields = v17->static_fields;
  v19 = (System_Int32_array **)StringLiteral_17121/*"btn_txt_on_daily"*/;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17121/*"btn_txt_on_daily"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v19, v2, v3, v4, v5, v6, v7);
  v20 = MasterMissionComponent_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_17115/*"btn_txt_off_daily"*/;
  v20->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17115/*"btn_txt_off_daily"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v20->DAILY_OFF_SPRITE_LABEL, v21, v22, v23, v24, v25, v26, v27);
  v28 = MasterMissionComponent_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_17124/*"btn_txt_on_weekly"*/;
  v28->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17124/*"btn_txt_on_weekly"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v28->WEEKLY_ON_SPRITE_LABEL, v29, v30, v31, v32, v33, v34, v35);
  v36 = MasterMissionComponent_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_17118/*"btn_txt_off_weekly"*/;
  v36->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17118/*"btn_txt_off_weekly"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v36->WEEKLY_OFF_SPRITE_LABEL, v37, v38, v39, v40, v41, v42, v43);
  v44 = MasterMissionComponent_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_17122/*"btn_txt_on_extra"*/;
  v44->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17122/*"btn_txt_on_extra"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v44->EXTRA_ON_SPRITE_LABEL, v45, v46, v47, v48, v49, v50, v51);
  v52 = MasterMissionComponent_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_17116/*"btn_txt_off_extra"*/;
  v52->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17116/*"btn_txt_off_extra"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v52->EXTRA_OFF_SPRITE_LABEL, v53, v54, v55, v56, v57, v58, v59);
  v60 = MasterMissionComponent_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_17123/*"btn_txt_on_limited"*/;
  v60->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17123/*"btn_txt_on_limited"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v60->LIMITED_ON_SPRITE_LABEL, v61, v62, v63, v64, v65, v66, v67);
  v68 = MasterMissionComponent_TypeInfo->static_fields;
  v69 = (System_Int32_array **)StringLiteral_17117/*"btn_txt_off_limited"*/;
  v68->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17117/*"btn_txt_off_limited"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v68->LIMITED_OFF_SPRITE_LABEL, v69, v70, v71, v72, v73, v74, v75);
  v76 = MasterMissionComponent_TypeInfo->static_fields;
  v77 = (System_Int32_array **)StringLiteral_18224/*"ef_btn_blink"*/;
  v76->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_18224/*"ef_btn_blink"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v76->STONE_EXCHENGE_BUTTON_EFFECT_NAME, v77, v78, v79, v80, v81, v82, v83);
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
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  System_Int32_array *receiveMissionIds; // x20
  MasterMissionListViewManager_o *v11; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0

  if ( (byte_4212AB6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MasterMissionComponent__AcceptReward_b__186_0__, v4);
    byte_4212AB6 = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v13 = sub_B0D9A8(v5);
    sub_B0D948(v13, 0LL);
  }
  receiveMissionIds = this->fields.receiveMissionIds;
  v11 = missionListViewManager->m_Items[nowType];
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__186_0__, 0LL);
  if ( !v11 )
LABEL_7:
    sub_B0D97C(v5);
  MasterMissionListViewManager__AcceptReward(v11, receiveMissionIds, v12, 0LL);
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
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v25; // x22

  if ( (byte_4212AB2 & 1) == 0 )
  {
    sub_B0D8A4(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo, items);
    sub_B0D8A4(&Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__, v5);
    sub_B0D8A4(&MasterMissionComponent___c__DisplayClass181_0_TypeInfo, v6);
    byte_4212AB2 = 1;
  }
  v7 = sub_B0D974(MasterMissionComponent___c__DisplayClass181_0_TypeInfo, items, method);
  MasterMissionComponent___c__DisplayClass181_0___ctor((MasterMissionComponent___c__DisplayClass181_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 24) = items;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)items, v15, v16, v17, v18, v19, v20);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v22 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v7 + 24);
  v25 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                               MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo,
                                                               v23,
                                                               v24);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v25,
    (Il2CppObject *)v7,
    Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__,
    0LL);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_B0D97C(v8);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v22, v25, 0LL);
}


void __fastcall MasterMissionComponent__ChangeTabImage(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  struct MasterMissionTab_array *missionTabList; // x8
  UISprite_o *dailyTabBtnBase; // x20
  UISprite_o *dailyTabSprite; // x20
  System_String_o **p_fields; // x8
  struct MasterMissionTab_array *v7; // x8
  UISprite_o *weeklyTabBtnBase; // x20
  UISprite_o *weeklyTabSprite; // x20
  System_String_o **p_monitor; // x8
  struct MasterMissionTab_array *v11; // x8
  UISprite_o *extraTabBtnBase; // x20
  UISprite_o *extraTabSprite; // x20
  System_String_o **v14; // x8
  struct MasterMissionTab_array *v15; // x8
  UISprite_o *limitedTabBtnBase; // x20
  UISprite_o *limitedTabSprite; // x20
  System_String_o **v18; // x8
  __int64 v19; // x1
  int32_t nowType; // w19
  __int64 v21; // x0

  v2 = this;
  if ( (byte_4212AAD & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B0D8A4(&MasterMissionComponent_TypeInfo, method);
    byte_4212AAD = 1;
  }
  missionTabList = v2->fields.missionTabList;
  if ( !missionTabList )
    goto LABEL_70;
  if ( !missionTabList->max_length )
    goto LABEL_71;
  this = (MasterMissionComponent_o *)missionTabList->m_Items[0];
  if ( !this )
    goto LABEL_70;
  dailyTabBtnBase = v2->fields.dailyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 0,
                                       0LL);
  if ( !dailyTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(dailyTabBtnBase, (System_String_o *)this, 0LL);
  dailyTabSprite = v2->fields.dailyTabSprite;
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  if ( !v2->fields.nowType )
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
    sub_B0D97C(this);
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
  this = (MasterMissionComponent_o *)v2->fields.dailySelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 0, 0LL);
  this = (MasterMissionComponent_o *)v2->fields.dailyNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 0, 0LL);
  v7 = v2->fields.missionTabList;
  if ( !v7 )
    goto LABEL_70;
  if ( v7->max_length <= 1 )
    goto LABEL_71;
  this = (MasterMissionComponent_o *)v7->m_Items[1];
  if ( !this )
    goto LABEL_70;
  weeklyTabBtnBase = v2->fields.weeklyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 1,
                                       0LL);
  if ( !weeklyTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(weeklyTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  weeklyTabSprite = v2->fields.weeklyTabSprite;
  if ( v2->fields.nowType == 1 )
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
  this = (MasterMissionComponent_o *)v2->fields.weeklySelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 1, 0LL);
  this = (MasterMissionComponent_o *)v2->fields.weeklyNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 1, 0LL);
  v11 = v2->fields.missionTabList;
  if ( !v11 )
    goto LABEL_70;
  if ( v11->max_length <= 2 )
    goto LABEL_71;
  this = (MasterMissionComponent_o *)v11->m_Items[2];
  if ( !this )
    goto LABEL_70;
  extraTabBtnBase = v2->fields.extraTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 2,
                                       0LL);
  if ( !extraTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(extraTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  extraTabSprite = v2->fields.extraTabSprite;
  if ( v2->fields.nowType == 2 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    v14 = (System_String_o **)&this->fields.dailySelectedObj[2];
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
    v14 = (System_String_o **)&this->fields.dailySelectedObj[2].monitor;
    if ( !extraTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(extraTabSprite, *v14, 0LL);
  this = (MasterMissionComponent_o *)v2->fields.extraSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 2, 0LL);
  this = (MasterMissionComponent_o *)v2->fields.extraNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 2, 0LL);
  v15 = v2->fields.missionTabList;
  if ( !v15 )
    goto LABEL_70;
  if ( v15->max_length <= 3 )
  {
LABEL_71:
    v21 = sub_B0D9A8(this);
    sub_B0D948(v21, 0LL);
  }
  this = (MasterMissionComponent_o *)v15->m_Items[3];
  if ( !this )
    goto LABEL_70;
  limitedTabBtnBase = v2->fields.limitedTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 3,
                                       0LL);
  if ( !limitedTabBtnBase )
    goto LABEL_70;
  UISprite__set_spriteName(limitedTabBtnBase, (System_String_o *)this, 0LL);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  limitedTabSprite = v2->fields.limitedTabSprite;
  if ( v2->fields.nowType == 3 )
  {
    if ( (WORD1(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    v18 = (System_String_o **)&this->fields.dailySelectedObj[2].fields;
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
    v18 = (System_String_o **)&this->fields.dailySelectedObj[3];
    if ( !limitedTabSprite )
      goto LABEL_70;
  }
  UISprite__set_spriteName(limitedTabSprite, *v18, 0LL);
  this = (MasterMissionComponent_o *)v2->fields.limitedSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 3, 0LL);
  this = (MasterMissionComponent_o *)v2->fields.limitedNonSelectedObj;
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 3, 0LL);
  nowType = v2->fields.nowType;
  if ( !byte_4212AD0 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v19);
    byte_4212AD0 = 1;
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
  DataManager_o *Instance; // x0
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x22
  UILabel_o *completeMissionCountNumLb; // x21
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *completeMissionCountNumLb2; // x20
  UILabel_o *completeMissionCountMsgLb; // x20
  struct UILabel_o *completeMissionAlertNumLb; // x8
  struct UILabel_o *completeMissionAlertUnitLb; // x8
  char v20; // w20
  struct UILabel_o *completeMissionAlertMsgLb; // x19
  System_String_o *v22; // x1
  UILabel_o *completeMissionAlertTitleLb; // x20
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4212A91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_8766/*"MISSION_ACHIVE_MSG"*/, v8);
    sub_B0D8A4(&StringLiteral_3296/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    sub_B0D8A4(&StringLiteral_13436/*"TIME_REST_ACHIVE"*/, v11);
    byte_4212A91 = 1;
  }
  MissionAchiveCount_k__BackingField = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8766/*"MISSION_ACHIVE_MSG"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Equals_43837244(
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
    if ( System_String__Equals_43837244((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(this->fields.completeMissionTimeNumStr, 0LL);
  if ( !this->fields.completeMissionAlertTitleLb )
    goto LABEL_39;
  v20 = (char)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.completeMissionAlertTitleLb,
                                0LL);
  if ( !Instance )
    goto LABEL_39;
  if ( (v20 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    completeMissionAlertTitleLb = this->fields.completeMissionAlertTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3296/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0LL);
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
            v22 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_39:
    sub_B0D97C(Instance);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13436/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !completeMissionAlertMsgLb )
    goto LABEL_39;
  v22 = (System_String_o *)Instance;
  Instance = (DataManager_o *)completeMissionAlertMsgLb;
LABEL_37:
  UILabel__set_text((UILabel_o *)Instance, v22, 0LL);
}


void __fastcall MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  __int64 v3; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  int32_t BoardTouchMissionId; // w20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4212AB3 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_B0D8A4(&StringLiteral_11164/*"REWARD_ACCEPTABLE"*/, v3);
    byte_4212AB3 = 1;
  }
  missionListViewManager = v2->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_10;
  nowType = v2->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_11;
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this
    || (BoardTouchMissionId = MasterMissionListViewManager__GetBoardTouchMissionId(
                                (MasterMissionListViewManager_o *)this,
                                0LL),
        (this = (MasterMissionComponent_o *)sub_B0D8BC(int___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  if ( !LODWORD(this->fields.myFsm) )
  {
LABEL_11:
    v13 = sub_B0D9A8(this);
    sub_B0D948(v13, 0LL);
  }
  LODWORD(this->fields.titlePrefab) = BoardTouchMissionId;
  v2->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_B0D840(
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
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11164/*"REWARD_ACCEPTABLE"*/, 0LL);
}


void __fastcall MasterMissionComponent__Close(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  struct MasterMissionListViewManager_array *v6; // x8
  struct MasterMissionListViewManager_array *v7; // x8
  struct MasterMissionListViewManager_array *v8; // x8
  __int64 v9; // x0

  if ( (byte_4212AC0 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    byte_4212AC0 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    goto LABEL_23;
  EventSvtControl__stopVoice(svtVoiceCtr, 0LL);
  MasterMissionComponent__ReleaseSvtVoiceData(this, v4);
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
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL);
  v6 = this->fields.missionListViewManager;
  if ( !v6 )
    goto LABEL_23;
  if ( v6->max_length <= 1 )
    goto LABEL_24;
  svtVoiceCtr = (EventSvtControl_o *)v6->m_Items[1];
  if ( !svtVoiceCtr )
    goto LABEL_23;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL);
  v7 = this->fields.missionListViewManager;
  if ( !v7 )
    goto LABEL_23;
  if ( v7->max_length <= 2 )
    goto LABEL_24;
  svtVoiceCtr = (EventSvtControl_o *)v7->m_Items[2];
  if ( !svtVoiceCtr
    || (MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL),
        (v8 = this->fields.missionListViewManager) == 0LL) )
  {
LABEL_23:
    sub_B0D97C(svtVoiceCtr);
  }
  if ( v8->max_length <= 3 )
  {
LABEL_24:
    v9 = sub_B0D9A8(svtVoiceCtr);
    sub_B0D948(v9, 0LL);
  }
  svtVoiceCtr = (EventSvtControl_o *)v8->m_Items[3];
  if ( !svtVoiceCtr )
    goto LABEL_23;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL);
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
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4212A9F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212A9F = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(titleInfo);
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
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v10; // x8
  MasterMissionComponent___c_c *v11; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__147_0; // x20
  Il2CppObject *v15; // x21
  struct MasterMissionComponent___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4212A95 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__, v5);
    sub_B0D8A4(&MasterMissionComponent___c_TypeInfo, v6);
    byte_4212A95 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  v11 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v11 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__147_0 = static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(_9__147_0, v15, Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__, 0LL);
    v16 = MasterMissionComponent___c_TypeInfo->static_fields;
    v16->__9__147_0 = _9__147_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v16->__9__147_0,
      (System_Int32_array **)_9__147_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !Instance )
    sub_B0D97C(v11);
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

  if ( (byte_4212A92 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B0D8A4(&MissionInfoMaker_TypeInfo, eventMissionList);
    byte_4212A92 = 1;
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
        v18 = sub_B0D9A8(this);
        sub_B0D948(v18, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v12; // x0

  if ( (byte_4212AA1 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, eventMissionList);
    byte_4212AA1 = 1;
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
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_B0D974(
                                             MasterMissionListViewItem_TypeInfo,
                                             eventMissionList,
                                             *(_QWORD *)&type);
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
LABEL_15:
    sub_B0D97C(this);
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
    sub_B0D97C(completeMissionIcon);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, 0, 0LL);
}


void __fastcall MasterMissionComponent__InitCompleteMissionLb(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MasterMissionComponent_o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8

  v3 = this;
  if ( (byte_4212A90 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method);
    this = (MasterMissionComponent_o *)sub_B0D8A4(
                                         &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
                                         v4);
    byte_4212A90 = 1;
  }
  currentCompleteMissionList = v3->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_B0D97C(this);
  if ( currentCompleteMissionList->fields._size < 1 )
    MasterMissionComponent__HideCompleteMissionIconLb(v3, method);
  else
    MasterMissionComponent__ChangeViewCompleteMissionLb(v3, currentCompleteMissionList->fields._items->m_Items[0], v2);
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
  DataManager_o *Instance; // x0
  struct DataMasterBase_array *datalist; // x25
  DataManager_o *v10; // x20
  unsigned int v11; // w26
  __int64 namespaze; // x24
  DataManager_c **v13; // x8
  DataManager_c *v14; // x21
  int64_t v15; // x9
  __int64 v17; // x0
  bool result; // w0
  BalanceConfig_c *v19; // x0

  if ( (byte_4212A96 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MstMissionMaster___, v2);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4212A96 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_34;
  datalist = Instance->fields.datalist;
  v10 = Instance;
  if ( (int)datalist >= 1 )
  {
    v11 = 0;
    namespaze = -1LL;
    while ( 1 )
    {
      v13 = &v10->klass + (int)v11;
      v14 = v13[4];
      if ( !v14 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v13[4], 0LL);
      if ( (_DWORD)Instance == 5 )
      {
        v15 = *(_QWORD *)&v14->_1.byval_arg.bits;
        if ( (__int64)v14->_1.namespaze > namespaze )
          namespaze = (__int64)v14->_1.namespaze;
        if ( Time < v15 && NoneExpireTime > v15 )
          NoneExpireTime = *(_QWORD *)&v14->_1.byval_arg.bits;
      }
      if ( (int)++v11 >= (int)datalist )
        goto LABEL_27;
      if ( v11 >= LODWORD(v10->fields.datalist) )
      {
        v17 = sub_B0D9A8(Instance);
        sub_B0D948(v17, 0LL);
      }
    }
LABEL_34:
    sub_B0D97C(Instance);
  }
  namespaze = -1LL;
LABEL_27:
  result = 0;
  if ( Time < NoneExpireTime && namespaze <= Time )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    return NoneExpireTime < v19->static_fields->NoneExpireTime;
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
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  _BOOL8 _28088484; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  CommonUI_o *v26; // x20
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_4212A8D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MstMissionMaster___, v4);
    sub_B0D8A4(&Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v8);
    byte_4212A8D = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (struct MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
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
  if ( TutorialFlag__Get_28088484(126, 0LL) )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v19);
    MasterMissionComponent__setGuideSvtVoice(this, v21);
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
  MasterMissionComponent__reDispMissionList(this, v20);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28088484 = TutorialFlag__Get_28088484(207, 0LL);
  if ( !_28088484 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_28088484, v23);
  v26 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v27 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__, 0LL);
  if ( !v26 )
LABEL_32:
    sub_B0D97C(Instance);
  CommonUI__maskFadein(v26, DEFAULT_FADE_TIME, v29, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_4212ABF & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212ABF = 1;
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

  if ( (byte_4212AC8 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_2643/*"BULK_RECEIVE"*/, v3);
    byte_4212AC8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2643/*"BULK_RECEIVE"*/, 0LL);
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
  System_Collections_Generic_List_string__c *klass; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  CommonUI_o *v20; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21
  System_String_o *v24; // x19
  _QWORD **v25; // x21
  __int64 v26; // x20
  __int16 v27; // w8
  __int64 v28; // x20
  __int64 v29; // x20
  __int64 v30; // x20
  System_String_o *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  CommonUI_o *v34; // x20
  MasterMissionComponent___c_c *v35; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__146_1; // x21
  Il2CppObject *v38; // x22
  struct MasterMissionComponent___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_4212A94 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Array_Empty_object___, v3);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v11);
    sub_B0D8A4(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__, v12);
    sub_B0D8A4(&MasterMissionComponent___c_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_3295/*"COMPLETE_MISSION_END"*/, v14);
    byte_4212A94 = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_50;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0LL) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v16);
        byte_421083D = 1;
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
          v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v21 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
          v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
          System_Action___ctor(
            v23,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__,
            0LL);
          if ( v20 )
          {
            CommonUI__maskFadeout(v20, 1, DEFAULT_FADE_TIME, v23, 0LL);
            return;
          }
        }
      }
LABEL_50:
      sub_B0D97C(Instance);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMPLETE_MISSION_END"*/, 0LL);
    v25 = (_QWORD **)Method_System_Array_Empty_object___;
    v26 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v27 = *(_WORD *)(v26 + 306);
    if ( (v27 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v27 = *(_WORD *)(v26 + 306);
    }
    if ( (v27 & 0x400) != 0 )
    {
      v28 = *v25[6];
      if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
        sub_AA65A4(*v25[6]);
      if ( !*(_DWORD *)(v28 + 224) )
      {
        v29 = *v25[6];
        if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
          sub_AA65A4(*v25[6]);
        j_il2cpp_runtime_class_init_0(v29);
      }
    }
    v30 = *v25[6];
    if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
      sub_AA65A4(*v25[6]);
    v31 = System_String__Format_43928628(v24, **(System_Object_array ***)(v30 + 184), 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v34 = (CommonUI_o *)Instance;
    v35 = MasterMissionComponent___c_TypeInfo;
    if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v35 = MasterMissionComponent___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__146_1 = static_fields->__9__146_1;
    if ( !_9__146_1 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__146_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
      System_Action___ctor(_9__146_1, v38, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__, 0LL);
      v39 = MasterMissionComponent___c_TypeInfo->static_fields;
      v39->__9__146_1 = _9__146_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v39->__9__146_1,
        (System_Int32_array **)_9__146_1,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    if ( !v34 )
      goto LABEL_50;
    CommonUI__OpenNotificationDialog(v34, 0LL, v31, _9__146_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4212AAE & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212AAE = 1;
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

  if ( (byte_4212AB0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212AB0 = 1;
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

  if ( (byte_4212AC6 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212AC6 = 1;
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

  if ( (byte_4212AB1 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212AB1 = 1;
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
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v10; // x8
  MasterMissionComponent___c_c *v11; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__174_0; // x20
  Il2CppObject *v15; // x21
  struct MasterMissionComponent___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4212AAC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__, v5);
    sub_B0D8A4(&MasterMissionComponent___c_TypeInfo, v6);
    byte_4212AAC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  v11 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v11 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__174_0 = static_fields->__9__174_0;
  if ( !_9__174_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__174_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(_9__174_0, v15, Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__, 0LL);
    v16 = MasterMissionComponent___c_TypeInfo->static_fields;
    v16->__9__174_0 = _9__174_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v16->__9__174_0,
      (System_Int32_array **)_9__174_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !Instance )
    sub_B0D97C(v11);
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
      sub_B0D97C(0LL);
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

  if ( (byte_4212AAF & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212AAF = 1;
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

  if ( (byte_4212A8B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212A8B = 1;
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
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.titleInfo, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_int__o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x1
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v60; // w20
  bool v61; // w1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  struct UnityEngine_GameObject_o *titlePrefab; // x21
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  TitleInfoControl_o *v72; // x21
  TitleInfoControl_o *v73; // x20
  __int64 v74; // x1
  __int64 v75; // x2
  System_Action_o *v76; // x21
  MasterMissionComponent_c *v77; // x0
  int32_t DEFAULT_LIMITCNT; // w8
  struct MstMissionEntity_array *Entitys_WarMaster__WarEntity; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x1
  const MethodInfo *v88; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v90; // x1
  __int64 v91; // x2
  System_Action_int__o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  System_Action_o *v95; // x20
  __int64 v96; // x0

  if ( (byte_4212A8C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, callback);
    sub_B0D8A4(&System_Action_int__TypeInfo, v9);
    sub_B0D8A4(&System_Action_TypeInfo, v10);
    sub_B0D8A4(&AtlasManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v17);
    sub_B0D8A4(&Method_MasterMissionComponent_LoadNotificationEnd__, v18);
    sub_B0D8A4(&Method_MasterMissionComponent_OnClickBack__, v19);
    sub_B0D8A4(&Method_MasterMissionComponent__Open_b__136_0__, v20);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v21);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    byte_4212A8C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.reDispAction = redisp_act;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.reDispAction,
    (System_Int32_array **)redisp_act,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_46;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0LL);
  v41 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v39, v40);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v41;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentEventIdList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MstMissionEntity__TypeInfo,
                                                                                                  v48,
                                                                                                  v49);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v50;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentMstMissionEntList,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  if ( typeIndex == -1 )
  {
    if ( !byte_4212ACF )
    {
      Instance = (CommonUI_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, v57);
      byte_4212ACF = 1;
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
    v60 = 0;
    while ( 1 )
    {
      if ( v60 >= max_length )
      {
        v96 = sub_B0D9A8(Instance);
        sub_B0D948(v96, 0LL);
      }
      Instance = (CommonUI_o *)missionTabList->m_Items[v60];
      if ( !Instance )
        break;
      MasterMissionTab__SetTabSize((MasterMissionTab_o *)Instance, 1, 0LL);
      max_length = missionTabList->max_length;
      if ( (int)++v60 >= max_length )
        goto LABEL_15;
    }
LABEL_46:
    sub_B0D97C(Instance);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v57) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_46;
    v61 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_46;
    v61 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v61, 0LL);
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
                               (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_46;
    Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.titleInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    v72 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v72 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v72, (UnityEngine_Transform_o *)Instance, 0LL);
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
    TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v73 = this->fields.titleInfo;
    v76 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v74, v75);
    System_Action___ctor(v76, (Il2CppObject *)this, Method_MasterMissionComponent_OnClickBack__, 0LL);
    if ( !v73 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v73, v76, 0LL);
  }
  v77 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v77 = MasterMissionComponent_TypeInfo;
  }
  this->fields.currentEventSvtId = v77->static_fields->DEFAULT_SVT_ID;
  DEFAULT_LIMITCNT = v77->static_fields->DEFAULT_LIMITCNT;
  this->fields.currentDispId = 0;
  this->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Entitys_WarMaster__WarEntity = (struct MstMissionEntity_array *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_171483C *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_WarMaster__WarEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mstMissionList,
    (System_Int32_array **)Entitys_WarMaster__WarEntity,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  MasterMissionComponent__SetupShopBtn(this, v86);
  MasterMissionComponent__SetupCompleteBtn(this, v87);
  MasterMissionComponent__RefreshInfo(this, v88);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v92 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v90, v91);
  System_Action_int____ctor(
    v92,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__Open_b__136_0__,
    (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v92, 1, 0LL);
  v95 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v93, v94);
  System_Action___ctor(v95, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v95, 0LL);
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
  CompleteMissionComponent_ClickDelegate_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  MasterMissionComponent___c_c *mInstance; // x0
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__145_0; // x21
  Il2CppObject *v20; // x22
  struct MasterMissionComponent___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  TerminalSceneComponent_c *v29; // x0

  if ( (byte_4212A93 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&CompleteMissionComponent_ClickDelegate_TypeInfo, v4);
    sub_B0D8A4(&Method_MasterMissionComponent_ExitCompleteMission__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v8);
    sub_B0D8A4(&Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__, v9);
    sub_B0D8A4(&MasterMissionComponent___c_TypeInfo, v10);
    byte_4212A93 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CompleteMissionComponent_ClickDelegate_o *)sub_B0D974(
                                                      CompleteMissionComponent_ClickDelegate_TypeInfo,
                                                      v12,
                                                      v13);
  CompleteMissionComponent_ClickDelegate___ctor(
    v14,
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
    v20 = (Il2CppObject *)static_fields->__9;
    _9__145_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(_9__145_0, v20, Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__, 0LL);
    v21 = MasterMissionComponent___c_TypeInfo->static_fields;
    v21->__9__145_0 = _9__145_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__145_0,
      (System_Int32_array **)_9__145_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !Instance )
    goto LABEL_25;
  CommonUI__OpenCompleteMission(Instance, v14, _9__145_0, 0, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v28);
    byte_421083D = 1;
  }
  v29 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v29 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v29->static_fields->mInstance;
  if ( !mInstance )
LABEL_25:
    sub_B0D97C(mInstance);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0LL);
}


void __fastcall MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4212AC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212AC7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__OpenTutorialImageDialog_17042492(Instance, 42, 207, 0LL, 0LL, 0LL, 0LL);
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
  UserPresentBoxWindow_ClickDelegate_o *v11; // x21
  CommonUI_o *v12; // x0
  __int64 v13; // x1
  ErrorDialog_c *klass; // x8
  CommonUI_o *v15; // x19
  MasterMissionComponent_c *v16; // x8
  __int64 v17; // x1
  ErrorDialog_c *v18; // x8

  if ( (byte_4212AB9 & 1) == 0 )
  {
    sub_B0D8A4(&UserPresentBoxWindow_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_MasterMissionComponent__OpenPresentBox_b__189_0__, v3);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v7);
    byte_4212AB9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (UserPresentBoxWindow_ClickDelegate_o *)sub_B0D974(UserPresentBoxWindow_ClickDelegate_TypeInfo, v9, v10);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__189_0__,
    0LL);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__OpenUsrPresentList(Instance, 1, v11, 0LL, 0LL);
  v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v12 )
    goto LABEL_33;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v12, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v13);
      byte_421083D = 1;
    }
    v12 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v12 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v12->fields.errorDialog->klass;
    if ( !klass )
      goto LABEL_33;
    v12 = *(CommonUI_o **)&klass->_2.element_size;
    if ( !v12 )
      goto LABEL_33;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v12, 0LL) )
    {
      v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = v12;
      v16 = MasterMissionComponent_TypeInfo;
      if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        v16 = MasterMissionComponent_TypeInfo;
      }
      if ( v15 )
      {
        CommonUI__SetUsrPresentListPos(v15, v16->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v17);
          byte_421083D = 1;
        }
        v12 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v12 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        }
        v18 = v12->fields.errorDialog->klass;
        if ( v18 )
        {
          v12 = *(CommonUI_o **)&v18->_2.element_size;
          if ( v12 )
          {
            ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v12, 0, 0LL);
            return;
          }
        }
      }
LABEL_33:
      sub_B0D97C(v12);
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

  if ( (byte_4212AC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4212AC4 = 1;
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
                                              (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = v6;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.btnEffectPrefab,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0LL, 0LL) )
      GameObjectExtensions__SafeSetParent_31184716(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0LL);
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
  PresentBoxOverDialog_ClickDelegate_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_4212AB8 & 1) == 0 )
  {
    sub_B0D8A4(&PresentBoxOverDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_MasterMissionComponent__PresentBoxOver_b__188_0__, v4);
    sub_B0D8A4(&StringLiteral_8661/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4212AB8 = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8661/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0LL);
  v11 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B0D974(PresentBoxOverDialog_ClickDelegate_TypeInfo, v9, v10);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__188_0__,
    0LL);
  if ( !presentBoxOverDialog )
    sub_B0D97C(v12);
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1/*""*/, v8, v11, 26, 0LL);
}


void __fastcall MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  AdManager_o *Instance; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x22
  AdManager_o **v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  struct System_Int32_array *receiveMissionIds; // x8
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v32; // x19
  System_Action_o *v33; // x21
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v35; // x19
  System_Action_o *v36; // x22
  __int64 v37; // x0

  if ( (byte_4212AB7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v4);
    sub_B0D8A4(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__, v5);
    sub_B0D8A4(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__, v6);
    sub_B0D8A4(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__, v7);
    sub_B0D8A4(&MasterMissionComponent___c__DisplayClass187_0_TypeInfo, v8);
    byte_4212AB7 = 1;
  }
  v9 = sub_B0D974(MasterMissionComponent___c__DisplayClass187_0_TypeInfo, method, v2);
  MasterMissionComponent___c__DisplayClass187_0___ctor((MasterMissionComponent___c__DisplayClass187_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_20;
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__,
    0LL);
  v20 = (AdManager_o **)(v9 + 24);
  *(_QWORD *)(v9 + 24) = v19;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
          v37 = sub_B0D9A8(Instance);
          sub_B0D948(v37, 0LL);
        }
        v32 = missionListViewManager->m_Items[nowType];
        v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
        System_Action___ctor(
          v33,
          (Il2CppObject *)v9,
          Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__,
          0LL);
        if ( v32 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v32, v33, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B0D97C(Instance);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v35 = this->fields.receiveMissionIds;
    v36 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v9,
      Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__,
      0LL);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v35, v36, 0LL);
  }
  else
  {
    Instance = *v20;
    if ( !*v20 )
      goto LABEL_20;
    System_Action__Invoke((System_Action_o *)Instance, 0LL);
  }
}


void __fastcall MasterMissionComponent__RefreshInfo(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  UILabel_o *stoneInfoLabel; // x20
  int32_t stone; // w21
  int32_t UserStoneFragmentNum; // w0
  UILabel_o *stoneFragmentsInfoLabel; // x21
  int32_t v13; // w20
  const MethodInfo *v14; // x2

  if ( (byte_4212AC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4212AC1 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
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
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0LL),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v13 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0LL),
        !stoneFragmentsInfoLabel) )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  MasterMissionComponent__UpdateStoneExchangeCount(this, v13, v14);
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
  Il2CppClass *klass; // x20
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212ABD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    byte_4212ABD = 1;
  }
  memset(&v12, 0, sizeof(v12));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentVoiceDataList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v12,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v9 )
        break;
      if ( !v12.fields.current )
        sub_B0D97C(v9);
      klass = v12.fields.current[1].klass;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)klass, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v11 = this->fields.currentVoiceDataList;
    if ( !v11 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__);
  }
}


void __fastcall MasterMissionComponent__RequestMissionReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_4212AB4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MasterMissionComponent_missionRewardCallback__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4212AB4 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v7,
                                                                            (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B0D97C(0LL);
  EventMissionClearRewardRequest__beginRequest_26650236(
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
  System_Action_ShopRootConstants_State__o *v14; // x22

  if ( (byte_4212ABA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_SceneList_Type___ctor__, method);
    sub_B0D8A4(&System_Action_SceneList_Type__TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_MasterMissionComponent_ServantOverDialogClose__, v5);
    sub_B0D8A4(&StringLiteral_8671/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, v6);
    byte_4212ABA = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8671/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0LL);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v10, 0LL),
        v11 = this->fields.servantOverDialog,
        v14 = (System_Action_ShopRootConstants_State__o *)sub_B0D974(System_Action_SceneList_Type__TypeInfo, v12, v13),
        System_Action_ShopRootConstants_State____ctor(
          v14,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          (const MethodInfo_246D780 *)Method_System_Action_SceneList_Type___ctor__),
        !v11)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v11, (System_Action_SceneList_Type__o *)v14, 0LL),
        (v10 = (System_String_o *)this->fields.servantOverDialog) == 0LL) )
  {
    sub_B0D97C(v10);
  }
  UserPresentBoxErrorDialog__setJumpType((UserPresentBoxErrorDialog_o *)v10, v9, 0LL);
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
  __int64 v8; // x1
  UserPresentBoxErrorDialog_o *servantOverDialog; // x21
  System_Action_ShopRootConstants_State__o *v10; // x22
  CommonUI_o *Instance; // x0

  if ( (byte_4212ABB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_SceneList_Type___ctor__, *(_QWORD *)&type);
    sub_B0D8A4(&System_Action_SceneList_Type__TypeInfo, v5);
    sub_B0D8A4(&Method_MasterMissionComponent_ServantOverDialogClose__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v8);
    byte_4212ABB = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v10 = (System_Action_ShopRootConstants_State__o *)sub_B0D974(
                                                      System_Action_SceneList_Type__TypeInfo,
                                                      *(_QWORD *)&type,
                                                      method);
  System_Action_ShopRootConstants_State____ctor(
    v10,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ServantOverDialogClose__,
    (const MethodInfo_246D780 *)Method_System_Action_SceneList_Type___ctor__);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v10, 0LL);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0LL);
      return;
    }
LABEL_9:
    sub_B0D97C(Instance);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall MasterMissionComponent__SetAfterAction(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v4; // x8
  __int64 v5; // x0

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_5;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  v4 = missionListViewManager->m_Items[nowType];
  if ( !v4 )
LABEL_5:
    sub_B0D97C(this);
  MasterMissionListViewManager__setAfterAction(v4, this->fields.receiveMissionIds, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent__SetBtnEnable(
        MasterMissionComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dailyTabObj; // x0
  bool v6; // w20

  if ( (byte_4212ABE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_4212ABE = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (v6 = isEnable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(dailyTabObj);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL);
}


void __fastcall MasterMissionComponent__SetDailyMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *VaildDailyMissionData; // x0
  const MethodInfo *v5; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v7; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v8; // x21
  struct MasterMissionListViewManager_array *v9; // x8
  MissionListViewManager_o *v10; // x19
  __int64 v11; // x0

  if ( (byte_4212AA2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v3);
    byte_4212AA2 = 1;
  }
  EventRewardSaveData__LoadDailyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( !missionListViewManager->max_length )
    goto LABEL_15;
  v7 = missionListViewManager->m_Items[0];
  VaildDailyMissionData = (System_Int32_array *)MasterMissionComponent__getVaildDailyMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v8 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildDailyMissionData;
  VaildDailyMissionData = System_Collections_Generic_List_int___ToArray(
                            this->fields.currentEventIdList,
                            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v7, v8, VaildDailyMissionData, 0, this->fields.reDispAction, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_14;
  if ( !v9->max_length )
  {
LABEL_15:
    v11 = sub_B0D9A8(VaildDailyMissionData);
    sub_B0D948(v11, 0LL);
  }
  v10 = (MissionListViewManager_o *)v9->m_Items[0];
  VaildDailyMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v10 )
LABEL_14:
    sub_B0D97C(VaildDailyMissionData);
  MissionListViewManager__SetMode_24483840(
    v10,
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
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v7; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v8; // x21
  struct MasterMissionListViewManager_array *v9; // x8
  MissionListViewManager_o *v10; // x19
  __int64 v11; // x0

  if ( (byte_4212AA4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v3);
    byte_4212AA4 = 1;
  }
  EventRewardSaveData__LoadExtraMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 2 )
    goto LABEL_15;
  v7 = missionListViewManager->m_Items[2];
  ValidExtraMissionData = (System_Int32_array *)MasterMissionComponent__getValidExtraMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v8 = (System_Collections_Generic_List_EventMissionEntity__o *)ValidExtraMissionData;
  ValidExtraMissionData = System_Collections_Generic_List_int___ToArray(
                            this->fields.currentEventIdList,
                            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v7, v8, ValidExtraMissionData, 2, this->fields.reDispAction, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_14;
  if ( v9->max_length <= 2 )
  {
LABEL_15:
    v11 = sub_B0D9A8(ValidExtraMissionData);
    sub_B0D948(v11, 0LL);
  }
  v10 = (MissionListViewManager_o *)v9->m_Items[2];
  ValidExtraMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v10 )
LABEL_14:
    sub_B0D97C(ValidExtraMissionData);
  MissionListViewManager__SetMode_24483840(
    v10,
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
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v7; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v8; // x21
  struct MasterMissionListViewManager_array *v9; // x8
  MissionListViewManager_o *v10; // x19
  __int64 v11; // x0

  if ( (byte_4212AA5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v3);
    byte_4212AA5 = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 3 )
    goto LABEL_15;
  v7 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = (System_Int32_array *)MasterMissionComponent__getVaildLimitedMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v8 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildLimitedMissionData;
  VaildLimitedMissionData = System_Collections_Generic_List_int___ToArray(
                              this->fields.currentEventIdList,
                              (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v7, v8, VaildLimitedMissionData, 3, this->fields.reDispAction, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_14;
  if ( v9->max_length <= 3 )
  {
LABEL_15:
    v11 = sub_B0D9A8(VaildLimitedMissionData);
    sub_B0D948(v11, 0LL);
  }
  v10 = (MissionListViewManager_o *)v9->m_Items[3];
  VaildLimitedMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v10 )
LABEL_14:
    sub_B0D97C(VaildLimitedMissionData);
  MissionListViewManager__SetMode_24483840(
    v10,
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
  DataManager_o *Instance; // x0
  MstMissionEntity_array *EnableMissions; // x22
  int max_length; // w8
  EventMissionMaster_o *v10; // x24
  unsigned int v11; // w26
  int32_t v12; // w20
  int32_t v13; // w21
  int32_t v14; // w23
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x25
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x0

  if ( (byte_4212AA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4212AA0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_34;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v10 = (EventMissionMaster_o *)Instance;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v21 = sub_B0D9A8(Instance);
        sub_B0D948(v21, 0LL);
      }
      v15 = &EnableMissions->obj.klass + (int)v11;
      v16 = v15[4];
      if ( !v16 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v15[4], 0LL);
      switch ( (_DWORD)Instance )
      {
        case 5:
          if ( !v10 )
            goto LABEL_34;
          ClearMasterMissionList = (System_Collections_Generic_IEnumerable_TSource__o *)EventMissionMaster__getClearMasterMissionList(
                                                                                          v10,
                                                                                          HIDWORD(v16->_1.name),
                                                                                          5,
                                                                                          0LL);
          Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        ClearMasterMissionList,
                                        (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          3,
                                          v20);
            v12 += (int)Instance;
          }
          break;
        case 4:
          if ( !v10 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getExtraMissionList(v10, HIDWORD(v16->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          2,
                                          v18);
            v13 += (int)Instance;
          }
          break;
        case 2:
          if ( !v10 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getWeeklyMasterMissionList(v10, HIDWORD(v16->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          1,
                                          v17);
            v14 += (int)Instance;
          }
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_30;
    }
LABEL_34:
    sub_B0D97C(Instance);
  }
  v14 = 0;
  v13 = 0;
  v12 = 0;
LABEL_30:
  Instance = (DataManager_o *)this->fields.weeklyClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v14, 0LL);
  Instance = (DataManager_o *)this->fields.extraClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v13, 0LL);
  Instance = (DataManager_o *)this->fields.limitedClearNotice;
  if ( !Instance )
    goto LABEL_34;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v12, 0LL);
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
        v24 = sub_B0D9A8(this);
        sub_B0D948(v24, 0LL);
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
        sub_B0D97C(this);
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
  __int64 v3; // x1
  System_Int32_array *VaildWeeklyMissionData; // x0
  const MethodInfo *v5; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  MasterMissionListViewManager_o *v7; // x20
  System_Collections_Generic_List_EventMissionEntity__o *v8; // x21
  struct MasterMissionListViewManager_array *v9; // x8
  MissionListViewManager_o *v10; // x19
  __int64 v11; // x0

  if ( (byte_4212AA3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v3);
    byte_4212AA3 = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0LL);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_14;
  if ( missionListViewManager->max_length <= 1 )
    goto LABEL_15;
  v7 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = (System_Int32_array *)MasterMissionComponent__getVaildWeeklyMissionData(this, v5);
  if ( !this->fields.currentEventIdList )
    goto LABEL_14;
  v8 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildWeeklyMissionData;
  VaildWeeklyMissionData = System_Collections_Generic_List_int___ToArray(
                             this->fields.currentEventIdList,
                             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v7, v8, VaildWeeklyMissionData, 1, this->fields.reDispAction, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_14;
  if ( v9->max_length <= 1 )
  {
LABEL_15:
    v11 = sub_B0D9A8(VaildWeeklyMissionData);
    sub_B0D948(v11, 0LL);
  }
  v10 = (MissionListViewManager_o *)v9->m_Items[1];
  VaildWeeklyMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  }
  if ( !v10 )
LABEL_14:
    sub_B0D97C(VaildWeeklyMissionData);
  MissionListViewManager__SetMode_24483840(
    v10,
    1,
    MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME,
    0LL,
    0LL);
}


void __fastcall MasterMissionComponent__SetupCompleteBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x0
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentCompleteMissionList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DataManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  MstMissionEntity_array *EnableMissions; // x23
  int max_length; // w8
  UserEventMissionMaster_o *v29; // x25
  unsigned int v30; // w28
  int32_t v31; // w20
  MstMissionEntity_o *v32; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  DataManager_o *v35; // x27
  int32_t CompleteMissionClearCount; // w26
  int32_t datalist; // w23
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  int32_t v39; // w22
  __int64 v40; // x1
  __int64 v41; // x2
  MasterMissionComponent_MasterMissionInfoItem_o *v42; // x25
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  struct UnityEngine_GameObject_o *cNoticeNumberPrefab; // x22
  UnityEngine_GameObject_o *v46; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UIWidget_o *v54; // x22
  struct NoticeNumberComponent_o *v55; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v57; // x1
  __int64 v58; // x0

  if ( (byte_4212A8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MstMissionMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v10);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v11);
    sub_B0D8A4(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v12);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4212A8F = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = &this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentCompleteMissionList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
  }
  else
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v18;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.currentCompleteMissionList,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_47;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_47;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v31 = 0;
  }
  else
  {
    v29 = (UserEventMissionMaster_o *)Instance;
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        goto LABEL_48;
      v32 = EnableMissions->m_Items[v30];
      if ( !v32 )
        goto LABEL_47;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    MasterData_WarQuestSelectionMaster,
                                    v32->fields.id,
                                    0LL);
      if ( !Instance )
        goto LABEL_47;
      v35 = Instance;
      if ( Instance->fields.datalist )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)Instance,
                                      (EventMissionEntity_array *)Instance,
                                      v33,
                                      v34);
        v31 += CompleteMissionClearCount;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v32, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_29;
    }
    if ( !v29 )
      goto LABEL_47;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v29, v32->fields.id, 0LL);
    datalist = (int32_t)v35->fields.datalist;
    if ( !datalist )
    {
LABEL_48:
      v58 = sub_B0D9A8(Instance);
      sub_B0D948(v58, 0LL);
    }
    lookup = v35->fields.lookup;
    if ( !lookup )
      goto LABEL_47;
    v39 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_47;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, HIDWORD(lookup->fields.entries), 0LL);
    Instance = (DataManager_o *)this->fields.completeMissionIcon;
    if ( !Instance )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v42 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_B0D974(
                                                              MasterMissionComponent_MasterMissionInfoItem_TypeInfo,
                                                              v40,
                                                              v41);
    MasterMissionComponent_MasterMissionInfoItem___ctor(v42, v32, datalist, CompleteMissionClearCount, v39, 0LL);
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
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
    v46 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)cNoticeNumberPrefab,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_31184716(v46, this->fields.completeMissionNoticeRoot, 0LL);
    if ( v46 )
    {
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v46,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.mCompleteMissionNoticeNumber,
        Component_srcLineSprite,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
        v54 = (UIWidget_o *)Instance;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        }
        if ( v54 )
        {
          UIWidget__set_depth(v54, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
          UIWidget__set_width(v54, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
          UIWidget__set_height(v54, MasterMissionComponent_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
          v55 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v55->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v55->fields.numberLabel,
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
    sub_B0D97C(Instance);
  }
LABEL_45:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_47;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v31, 0LL);
  MasterMissionComponent__InitCompleteMissionLb(this, v57);
}


void __fastcall MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  UISprite_o *shopBtnSp; // x20

  if ( (byte_4212A8E & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_17039/*"btn_event_3"*/, v5);
    byte_4212A8E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0LL);
  shopBtnSp = this->fields.shopBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_17039/*"btn_event_3"*/, 0LL);
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

  if ( (byte_4212AC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4212AC3 = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
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

  if ( (byte_4212AC5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212AC5 = 1;
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
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0LL);
    v5 = *p_btnEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)v5, 0LL);
    *p_btnEffectPrefab = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_btnEffectPrefab, 0LL, v6, v7, v8, v9, v10, v11);
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
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  int32_t ExchangeStoneCount; // w0
  int32_t v21; // w21
  MasterMissionComponent_c *v22; // x0
  UILabel_o *stoneConvertCount; // x22
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v25; // w1
  UnityEngine_Object_o *btnEffectBasePrefab; // x22
  const MethodInfo *v27; // x1
  __int64 v28; // x2
  AssetLoader_LoadEndDataHandler_o *v29; // x19
  int32_t v30; // w20
  const MethodInfo *v31; // x1
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4212AC2 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&fragmentCount);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__, v8);
    sub_B0D8A4(&MasterMissionComponent___c__DisplayClass202_0_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_5851/*"Effect/Common"*/, v10);
    byte_4212AC2 = 1;
  }
  v32 = 0;
  v11 = sub_B0D974(MasterMissionComponent___c__DisplayClass202_0_TypeInfo, *(_QWORD *)&fragmentCount, method);
  MasterMissionComponent___c__DisplayClass202_0___ctor((MasterMissionComponent___c__DisplayClass202_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_31;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v19);
  *(_DWORD *)(v11 + 24) = ExchangeStoneCount;
  v21 = ExchangeStoneCount;
  v22 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v22 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v22->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v21 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    stoneConvertLimit = System_Int32__ToString((int)v11 + 24, 0LL);
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
          v25 = 0;
          goto LABEL_19;
        }
      }
    }
LABEL_31:
    sub_B0D97C(stoneConvertLimit);
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  v32 = STONE_EXCHENGE_DISP_LIMIT;
  stoneConvertLimit = System_Int32__ToString((int32_t)&v32, 0LL);
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
  v25 = 1;
LABEL_19:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneConvertLimit, v25, 0LL);
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0LL, 0LL) )
  {
    v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28);
    AssetLoader_LoadEndDataHandler___ctor(
      v29,
      (Il2CppObject *)v11,
      Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5851/*"Effect/Common"*/, v29, 1, 0LL);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v27);
    if ( this->fields.nowType == 1 )
    {
      v30 = *(_DWORD *)(v11 + 24);
      if ( v30 >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v31);
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

  if ( (byte_4212ACB & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212ACB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v9; // x1
  ErrorDialog_c *klass; // x8
  __int64 v11; // x1
  ErrorDialog_c *v12; // x8
  __int64 *v13; // x8

  if ( (byte_4212ACD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, hasGetServant);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11773/*"SERVANT_OVER"*/, v6);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v7);
    byte_4212ACD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_28;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v9);
    byte_421083D = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v11);
    byte_421083D = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v12 = Instance->fields.errorDialog->klass;
  if ( !v12 || (Instance = *(CommonUI_o **)&v12->_2.element_size) == 0LL )
LABEL_33:
    sub_B0D97C(Instance);
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0LL);
LABEL_28:
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_33;
  if ( this->fields.overflowType )
    v13 = &StringLiteral_11773/*"SERVANT_OVER"*/;
  else
    v13 = &StringLiteral_3060/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___Open_b__136_0(
        MasterMissionComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0

  if ( (byte_4212ACA & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4212ACA = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_B0D97C(NumberFormat);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___PresentBoxOver_b__188_0(
        MasterMissionComponent_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x20

  if ( (byte_4212ACC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isPresentBoxOpen);
    sub_B0D8A4(&Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__, v5);
    sub_B0D8A4(&MasterMissionComponent___c__DisplayClass188_0_TypeInfo, v6);
    byte_4212ACC = 1;
  }
  v7 = sub_B0D974(MasterMissionComponent___c__DisplayClass188_0_TypeInfo, isPresentBoxOpen, method);
  MasterMissionComponent___c__DisplayClass188_0___ctor((MasterMissionComponent___c__DisplayClass188_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_B0D840((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14),
        *(_BYTE *)(v7 + 16) = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v7,
          Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__,
          0LL),
        !presentBoxOverDialog) )
  {
    sub_B0D97C(v8);
  }
  PresentBoxOverDialog__Close_24354568(presentBoxOverDialog, v18, 0LL);
}


void __fastcall MasterMissionComponent___setRecieveModifyItem_b__192_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4212ACE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5497/*"END_DISP"*/, method);
    byte_4212ACE = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v3);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5497/*"END_DISP"*/, 0LL);
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
  MstMissionDisplayInfoMaster_o *v12; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct MstMissionMaster_o *mstMissionMst; // x8
  _BOOL4 v21; // w22
  _BOOL4 v22; // w23
  struct System_String_o **p_titleTxt; // x21
  System_Int32_array **v24; // x1
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 *v39; // x8
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_String_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_4212A97 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_8873/*"MST_REMISSON_MSG"*/, v6);
    sub_B0D8A4(&StringLiteral_8871/*"MST_REDISP_MSG"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    sub_B0D8A4(&StringLiteral_8874/*"MST_REMISSON_TITLE_TXT"*/, v9);
    sub_B0D8A4(&StringLiteral_8872/*"MST_REDISP_TITLE_TXT"*/, v10);
    byte_4212A97 = 1;
  }
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !Instance )
    goto LABEL_29;
  v12 = (MstMissionDisplayInfoMaster_o *)Instance;
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v12->fields.list;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  mstMissionMst = this->fields.mstMissionMst;
  if ( !mstMissionMst )
    goto LABEL_29;
  this->fields.currentType = *(&mstMissionMst->fields.revision + 1);
  if ( !Instance || !Instance->fields.datalist || MstMissionMaster__IsOpenNow(mstMissionMst, 0LL) )
  {
    LOBYTE(v21) = 0;
    if ( !list )
      goto LABEL_16;
    goto LABEL_11;
  }
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
LABEL_29:
    sub_B0D97C(Instance);
  v21 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0LL);
  if ( !list )
    goto LABEL_16;
LABEL_11:
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1
    && !MstMissionDisplayInfoMaster__IsOpenNow(v12, 0LL) )
  {
    v22 = !MstMissionDisplayInfoMaster__IsBefOpenTime(v12, 0LL);
    goto LABEL_17;
  }
LABEL_16:
  LOBYTE(v22) = 0;
LABEL_17:
  p_titleTxt = &this->fields.titleTxt;
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.titleTxt, v24, v14, v15, v16, v17, v18, v19);
  v25 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.msgTxt, v25, v26, v27, v28, v29, v30, v31);
  if ( v21 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_8874/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
    *p_titleTxt = (struct System_String_o *)v32;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.titleTxt, v32, v33, v34, v35, v36, v37, v38);
    v39 = &StringLiteral_8873/*"MST_REMISSON_MSG"*/;
LABEL_27:
    v47 = LocalizationManager__Get((System_String_o *)*v39, 0LL);
    this->fields.msgTxt = v47;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.msgTxt,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    goto LABEL_28;
  }
  if ( v22 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_8872/*"MST_REDISP_TITLE_TXT"*/, 0LL);
    *p_titleTxt = (struct System_String_o *)v40;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.titleTxt, v40, v41, v42, v43, v44, v45, v46);
    v39 = &StringLiteral_8871/*"MST_REDISP_MSG"*/;
    goto LABEL_27;
  }
LABEL_28:
  this->fields.isNotNext = v21 || v22;
}


void __fastcall MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_B0D97C(0LL);
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
  __int64 currentEventIdList; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v33; // w26
  Il2CppClass **v34; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  MstMissionDisplayInfoEntity_o *v45; // x0
  struct MstMissionDisplayInfoEntity_o *v46; // x24
  __int64 v47; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v57; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x10
  int v73; // w9
  int32_t missionTargetId; // w22
  __int64 v75; // x21
  __int64 v76; // x9
  __int64 v77; // x9
  __int64 v79; // x0

  if ( (byte_4212A99 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B0D8A4(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v17);
    sub_B0D8A4(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4212A99 = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_77;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_77;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v21, v22, v23, v24, v25, v26);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_77;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
      {
        v79 = sub_B0D9A8(currentEventIdList);
        sub_B0D948(v79, 0LL);
      }
      v34 = &mstMissionList->obj.klass + (int)v33;
      v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)v34[4];
      if ( !v35 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v34[4], 0LL);
      if ( (currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (__int64)EventMissionMaster__getDailyMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        v35->fields.missionConditionDetailId,
                                        0LL);
        if ( !currentEventIdList )
          break;
        if ( *(_QWORD *)(currentEventIdList + 24) )
        {
          if ( !v30 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
            (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = (__int64)this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)currentEventIdList,
            v35->fields.missionConditionDetailId,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
            v35,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_20;
    }
LABEL_77:
    sub_B0D97C(currentEventIdList);
  }
LABEL_20:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_77;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_17147C4 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_34:
      v44 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v45 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                             Enumerator,
                                             *(_QWORD *)(v44 + 8));
    v46 = v45;
    if ( !v45 )
      goto LABEL_79;
    v47 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v47
      || (MstMissionDisplayInfoEntity_c *)v45->klass->_2.typeHierarchy[v47 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v45 = (MstMissionDisplayInfoEntity_o *)sub_B0DC70(v45);
LABEL_79:
      sub_B0D97C(v45);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v45, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v46->fields.guideImageId;
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
        sub_B0D97C(isOpenNow);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v46->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v57 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v57 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v57->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v46->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      id = v46->fields.id;
      this->fields.currentMissionDispInfoEnt = v46;
      this->fields.currentDispId = id;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v46,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
  }
  v66 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v69 = (__int64)&v66->vtable[*v68].method;
  }
  else
  {
LABEL_56:
    v69 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(
                         Enumerator,
                         *(_QWORD *)(v69 + 8));
  if ( v30 )
  {
    size = v30->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      items = v30->fields._items;
      v72 = items->m_Items[0];
      if ( !v72 )
        goto LABEL_77;
      v73 = v30->fields._size;
      missionTargetId = v72->fields.missionTargetId;
      if ( v73 >= 1 )
      {
        v75 = 4LL;
        do
        {
          if ( v73 <= (unsigned int)(v75 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v76 = *((_QWORD *)&items->obj.klass + v75);
          if ( !v76 )
            goto LABEL_77;
          if ( missionTargetId > *(_DWORD *)(v76 + 16) )
          {
            if ( v30->fields._size <= (unsigned int)(v75 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v77 = *((_QWORD *)&items->obj.klass + v75);
            if ( !v77 )
              goto LABEL_77;
            missionTargetId = *(_DWORD *)(v77 + 16);
          }
          v73 = v30->fields._size;
        }
        while ( (int)++v75 - 4 < v73 );
      }
      this->fields.currentMissionId = missionTargetId;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v30;
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  struct MstMissionEntity_array *mstMissionList; // x26
  int max_length; // w8
  unsigned int v36; // w27
  Il2CppClass **v37; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x24
  int32_t missionConditionDetailId; // w1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  MstMissionDisplayInfoEntity_o *v49; // x0
  struct MstMissionDisplayInfoEntity_o *v50; // x25
  __int64 v51; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v61; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  unsigned __int64 v71; // x10
  int32_t *v72; // x11
  __int64 v73; // x0
  int32_t v74; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v76; // x10
  int size; // w9
  int32_t missionTargetId; // w23
  __int64 v79; // x22
  __int64 v80; // x9
  __int64 v81; // x9
  __int64 v83; // x0

  if ( (byte_4212A9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B0D8A4(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v17);
    sub_B0D8A4(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4212A9C = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (System_Collections_Generic_List_int__o *)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v21, v22, v23, v24, v25, v26);
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
      {
        v83 = sub_B0D9A8(currentEventIdList);
        sub_B0D948(v83, 0LL);
      }
      v37 = &mstMissionList->obj.klass + (int)v36;
      v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)v37[4];
      if ( !v38 )
        break;
      currentEventIdList = (System_Collections_Generic_List_int__o *)MstMissionEntity__isOpenNow(
                                                                       (MstMissionEntity_o *)v37[4],
                                                                       0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v38->fields.missionConditionDetailId;
      if ( ((unsigned __int8)currentEventIdList & 1) != 0 )
      {
        currentEventIdList = (System_Collections_Generic_List_int__o *)EventMissionMaster__getLimitedMissionList(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         missionConditionDetailId,
                                                                         0LL);
        if ( currentEventIdList && currentEventIdList->fields._size >= 1 )
        {
          if ( !v33 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v33,
            (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            currentEventIdList,
            v38->fields.missionConditionDetailId,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          currentEventIdList = (System_Collections_Generic_List_int__o *)this->fields.currentMstMissionEntList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
            v38,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      else
      {
        currentEventIdList = (System_Collections_Generic_List_int__o *)EventMissionMaster__getClearMasterMissionList(
                                                                         MasterData_WarQuestSelectionMaster,
                                                                         missionConditionDetailId,
                                                                         5,
                                                                         0LL);
        if ( !v30 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
          (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B0D97C(currentEventIdList);
  }
LABEL_22:
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  currentEventIdList = (System_Collections_Generic_List_int__o *)DataManager__getEntityList_QuestReleaseMaster_(
                                                                   (DataManager_o *)currentEventIdList,
                                                                   (const MethodInfo_17147C4 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v42;
        p_offset += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v45 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_36:
      v48 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v49 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                                             Enumerator,
                                             *(_QWORD *)(v48 + 8));
    v50 = v49;
    if ( !v49 )
      goto LABEL_84;
    v51 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v49->klass->_2.bitflags2 + 1) < (unsigned int)v51
      || (MstMissionDisplayInfoEntity_c *)v49->klass->_2.typeHierarchy[v51 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v49 = (MstMissionDisplayInfoEntity_o *)sub_B0DC70(v49);
LABEL_84:
      sub_B0D97C(v49);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v49, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v50->fields.guideImageId;
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
        sub_B0D97C(isOpenNow);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v50->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v61 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v61 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v61->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v50->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      id = v50->fields.id;
      this->fields.currentMissionDispInfoEnt = v50;
      this->fields.currentDispId = id;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v50,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
  }
  v70 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v71 = 0LL;
    v72 = &v70->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      ++v71;
      v72 += 4;
      if ( v71 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_58;
    }
    v73 = (__int64)&v70->vtable[*v72].method;
  }
  else
  {
LABEL_58:
    v73 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  currentEventIdList = (System_Collections_Generic_List_int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v73 + 8));
  if ( v33 && (v74 = v33->fields._size, v74 >= 1) )
  {
    this->fields.totalMissionNum = v74;
    if ( !v33->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    items = v33->fields._items;
    v76 = items->m_Items[0];
    if ( !v76 )
      goto LABEL_82;
    size = v33->fields._size;
    if ( size >= 1 )
    {
      missionTargetId = v76->fields.missionTargetId;
      v79 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v79 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v80 = *((_QWORD *)&items->obj.klass + v79);
        if ( !v80 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v80 + 16) )
        {
          if ( v33->fields._size <= (unsigned int)(v79 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v81 = *((_QWORD *)&items->obj.klass + v79);
          if ( !v81 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v81 + 16);
        }
        size = v33->fields._size;
      }
      while ( (int)++v79 - 4 < size );
    }
    this->fields.currentMissionId = 0;
    if ( !v30 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
      (System_Collections_Generic_IEnumerable_T__o *)v33,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v30 )
      goto LABEL_82;
    if ( v30->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v30;
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
  __int64 currentEventIdList; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v36; // w28
  Il2CppClass **v37; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x24
  int32_t missionConditionDetailId; // w1
  System_Collections_Generic_IEnumerable_T__o *v40; // x25
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  MstMissionDisplayInfoEntity_o *v50; // x0
  struct MstMissionDisplayInfoEntity_o *v51; // x25
  __int64 v52; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v62; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 v74; // x0
  int32_t v75; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v77; // x10
  int size; // w9
  int32_t missionTargetId; // w23
  __int64 v80; // x22
  __int64 v81; // x9
  __int64 v82; // x9
  __int64 v84; // x0

  if ( (byte_4212A9A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B0D8A4(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v17);
    sub_B0D8A4(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4212A9A = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v21, v22, v23, v24, v25, v26);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
      {
        v84 = sub_B0D9A8(currentEventIdList);
        sub_B0D948(v84, 0LL);
      }
      v37 = &mstMissionList->obj.klass + (int)v36;
      v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)v37[4];
      if ( !v38 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v37[4], 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v38->fields.missionConditionDetailId;
      if ( (currentEventIdList & 1) != 0 )
      {
        currentEventIdList = (__int64)EventMissionMaster__getWeeklyMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        missionConditionDetailId,
                                        0LL);
        if ( !currentEventIdList )
          break;
        v40 = (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList;
        if ( *(_QWORD *)(currentEventIdList + 24) )
        {
          currentEventIdList = (__int64)this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)currentEventIdList,
            v38->fields.missionConditionDetailId,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v33 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v33,
            v40,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
            v38,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      else
      {
        currentEventIdList = (__int64)EventMissionMaster__getClearMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        missionConditionDetailId,
                                        2,
                                        0LL);
        if ( !v30 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
          (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B0D97C(currentEventIdList);
  }
LABEL_22:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_17147C4 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        p_offset += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v46 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v48 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v49 = (__int64)&v46->vtable[*v48].method;
    }
    else
    {
LABEL_36:
      v49 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v50 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                                             Enumerator,
                                             *(_QWORD *)(v49 + 8));
    v51 = v50;
    if ( !v50 )
      goto LABEL_84;
    v52 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v50->klass->_2.bitflags2 + 1) < (unsigned int)v52
      || (MstMissionDisplayInfoEntity_c *)v50->klass->_2.typeHierarchy[v52 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v50 = (MstMissionDisplayInfoEntity_o *)sub_B0DC70(v50);
LABEL_84:
      sub_B0D97C(v50);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v50, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v51->fields.guideImageId;
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
        sub_B0D97C(isOpenNow);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v51->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v62 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v62 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v62->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v51->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      id = v51->fields.id;
      this->fields.currentMissionDispInfoEnt = v51;
      this->fields.currentDispId = id;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v51,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
    }
  }
  v71 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v72 = 0LL;
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      ++v72;
      v73 += 4;
      if ( v72 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_58;
    }
    v74 = (__int64)&v71->vtable[*v73].method;
  }
  else
  {
LABEL_58:
    v74 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
                         Enumerator,
                         *(_QWORD *)(v74 + 8));
  if ( v33 && (v75 = v33->fields._size, v75 >= 1) )
  {
    this->fields.totalMissionNum = v75;
    if ( !v33->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    items = v33->fields._items;
    v77 = items->m_Items[0];
    if ( !v77 )
      goto LABEL_82;
    size = v33->fields._size;
    missionTargetId = v77->fields.missionTargetId;
    if ( size >= 1 )
    {
      v80 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v80 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v81 = *((_QWORD *)&items->obj.klass + v80);
        if ( !v81 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v81 + 16) )
        {
          if ( v33->fields._size <= (unsigned int)(v80 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v82 = *((_QWORD *)&items->obj.klass + v80);
          if ( !v82 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v82 + 16);
        }
        size = v33->fields._size;
      }
      while ( (int)++v80 - 4 < size );
    }
    this->fields.currentMissionId = missionTargetId;
    if ( !v30 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
      (System_Collections_Generic_IEnumerable_T__o *)v33,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v30 )
      goto LABEL_82;
    if ( v30->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v30;
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
  __int64 currentEventIdList; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v33; // w26
  Il2CppClass **v34; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  MstMissionDisplayInfoEntity_o *v45; // x0
  struct MstMissionDisplayInfoEntity_o *v46; // x24
  __int64 v47; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v57; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x10
  int v73; // w9
  int32_t missionTargetId; // w22
  __int64 v75; // x21
  __int64 v76; // x9
  __int64 v77; // x9
  __int64 v79; // x0

  if ( (byte_4212A9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B0D8A4(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v17);
    sub_B0D8A4(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4212A9B = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_78;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt, 0LL, v21, v22, v23, v24, v25, v26);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
      {
        v79 = sub_B0D9A8(currentEventIdList);
        sub_B0D948(v79, 0LL);
      }
      v34 = &mstMissionList->obj.klass + (int)v33;
      v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)v34[4];
      if ( !v35 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v34[4], 0LL);
      if ( (currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (__int64)EventMissionMaster__getExtraMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        v35->fields.missionConditionDetailId,
                                        0LL);
        if ( currentEventIdList )
        {
          if ( *(int *)(currentEventIdList + 24) >= 1 )
          {
            if ( !v30 )
              break;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
              (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            currentEventIdList = (__int64)this->fields.currentEventIdList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)currentEventIdList,
              v35->fields.missionConditionDetailId,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
              v35,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_20;
    }
LABEL_78:
    sub_B0D97C(currentEventIdList);
  }
LABEL_20:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_78;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_17147C4 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_34:
      v44 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v45 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                             Enumerator,
                                             *(_QWORD *)(v44 + 8));
    v46 = v45;
    if ( !v45 )
      sub_B0D97C(0LL);
    v47 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v47
      || (MstMissionDisplayInfoEntity_c *)v45->klass->_2.typeHierarchy[v47 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      currentEventIdList = sub_B0DC70(v45);
      goto LABEL_78;
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v45, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v46->fields.guideImageId;
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
        sub_B0D97C(isOpenNow);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v46->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v57 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v57 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v57->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v46->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.voiceNameList,
        (System_Int32_array **)talkIds,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      id = v46->fields.id;
      this->fields.currentMissionDispInfoEnt = v46;
      this->fields.currentDispId = id;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.currentMissionDispInfoEnt,
        (System_Int32_array **)v46,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
  }
  v66 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v69 = (__int64)&v66->vtable[*v68].method;
  }
  else
  {
LABEL_56:
    v69 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(
                         Enumerator,
                         *(_QWORD *)(v69 + 8));
  if ( v30 )
  {
    size = v30->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      items = v30->fields._items;
      v72 = items->m_Items[0];
      if ( !v72 )
        goto LABEL_78;
      v73 = v30->fields._size;
      if ( v73 >= 1 )
      {
        missionTargetId = v72->fields.missionTargetId;
        v75 = 4LL;
        do
        {
          if ( v73 <= (unsigned int)(v75 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v76 = *((_QWORD *)&items->obj.klass + v75);
          if ( !v76 )
            goto LABEL_78;
          if ( missionTargetId > *(_DWORD *)(v76 + 16) )
          {
            if ( v30->fields._size <= (unsigned int)(v75 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v77 = *((_QWORD *)&items->obj.klass + v75);
            if ( !v77 )
              goto LABEL_78;
            missionTargetId = *(_DWORD *)(v77 + 16);
          }
          v73 = v30->fields._size;
        }
        while ( (int)++v75 - 4 < v73 );
      }
      this->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v30;
}


int32_t __fastcall MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t result; // w0
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_4212A8A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4212A8A = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
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
    sub_B0D97C(this);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  MasterMissionComponent_o *v19; // x20
  struct UnityEngine_GameObject_o *titlePrefab; // x8
  struct UnityEngine_GameObject_o *v21; // x8
  struct UnityEngine_GameObject_o *v22; // x8
  System_Int32_array **v23; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct UnityEngine_GameObject_o *v26; // x10
  __int64 v27; // x0

  v4 = this;
  if ( (byte_4212AB5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___, result);
    sub_B0D8A4(&JsonManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v6);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v7);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v8);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v9);
    this = (MasterMissionComponent_o *)sub_B0D8A4(&StringLiteral_15917/*"]"*/, v10);
    byte_4212AB5 = 1;
  }
  if ( !result )
    goto LABEL_25;
  if ( !System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_43852188(
                            (System_String_o *)StringLiteral_15681/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15917/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                         v12,
                                         (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( this )
    {
      v19 = this;
      if ( !LODWORD(this->fields.myFsm) )
        goto LABEL_26;
      titlePrefab = this->fields.titlePrefab;
      if ( !titlePrefab )
        goto LABEL_25;
      v4->fields.isOverPresentBox = (bool)titlePrefab[1].klass;
      if ( !LODWORD(this->fields.myFsm) )
        goto LABEL_26;
      v21 = this->fields.titlePrefab;
      if ( !v21 )
        goto LABEL_25;
      v4->fields.overflowType = HIDWORD(v21[1].klass);
      if ( !LODWORD(this->fields.myFsm) )
        goto LABEL_26;
      v22 = this->fields.titlePrefab;
      if ( !v22 )
        goto LABEL_25;
      v23 = *(System_Int32_array ***)&v22->fields.m_CachedPtr;
      v4->fields.receiveMissionIds = (struct System_Int32_array *)v23;
      sub_B0D840((BattleServantConfConponent_o *)&v4->fields.receiveMissionIds, v23, v13, v14, v15, v16, v17, v18);
      missionListViewManager = v4->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_25;
      nowType = v4->fields.nowType;
      if ( (unsigned int)nowType >= missionListViewManager->max_length || !LODWORD(v19->fields.myFsm) )
      {
LABEL_26:
        v27 = sub_B0D9A8(this);
        sub_B0D948(v27, 0LL);
      }
      v26 = v19->fields.titlePrefab;
      if ( v26 )
      {
        this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
        if ( this )
        {
          MasterMissionListViewManager__SetResultData(
            (MasterMissionListViewManager_o *)this,
            (GetSvts_array *)v26[1].monitor,
            *(GetCommandCodes_array **)&v26[1].fields.m_CachedPtr,
            0LL);
          this = (MasterMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v11 = &StringLiteral_11106/*"REQUEST_OK"*/;
            goto LABEL_24;
          }
        }
      }
    }
LABEL_25:
    sub_B0D97C(this);
  }
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_25;
  v11 = &StringLiteral_11104/*"REQUEST_NG"*/;
LABEL_24:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v11, 0LL);
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool _28088484; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v12; // x23
  __int64 v13; // x0

  if ( (byte_4212AA9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, voiceIDs);
    sub_B0D8A4(&Method_MasterMissionComponent_setNormalFace__, v5);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v6);
    byte_4212AA9 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28088484 = TutorialFlag__Get_28088484(126, 0LL);
  if ( voiceIDs && !_28088484 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
    if ( !svtVoiceCtr )
      sub_B0D97C(v13);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v12, 0LL);
  }
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice_21037824(
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
  bool _28088484; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v29; // x20

  if ( (byte_4212AAA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, voiceIDs);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v7);
    sub_B0D8A4(&Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__, v8);
    sub_B0D8A4(&MasterMissionComponent___c__DisplayClass171_0_TypeInfo, v9);
    byte_4212AAA = 1;
  }
  v10 = sub_B0D974(MasterMissionComponent___c__DisplayClass171_0_TypeInfo, voiceIDs, action);
  MasterMissionComponent___c__DisplayClass171_0___ctor((MasterMissionComponent___c__DisplayClass171_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 24) = action;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)action, v18, v19, v20, v21, v22, v23);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28088484 = TutorialFlag__Get_28088484(126, 0LL);
  if ( voiceIDs && !_28088484 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v10,
      Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__,
      0LL);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v29, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(v11);
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
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x8
  UnityEngine_Transform_o *transform; // x20
  int v14; // s0
  EventSvtControl_o *svtVoiceCtr; // x20
  System_Action_o *v18; // x21

  if ( (byte_4212AA8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5);
    sub_B0D8A4(&Method_MasterMissionComponent_setNormalFace__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4212AA8 = 1;
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
      *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform
        || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v14, 0LL),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0LL
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0LL )
      {
LABEL_19:
        sub_B0D97C(voicePlayEffect);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_19;
  EventSvtControl__playVoice(svtVoiceCtr, v18, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v22; // x21
  MasterMissionComponent___c_c *v23; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__150_0; // x22
  Il2CppObject *v26; // x23
  struct MasterMissionComponent___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct MstMissionDisplayInfoEntity_o *currentMissionDispInfoEnt; // x8
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x24
  __int64 size; // x21
  int64_t v37; // x20
  __int64 v38; // x22
  unsigned __int64 v39; // x23
  struct System_Collections_Generic_List_MstMissionEntity__o *v40; // x24
  struct System_Collections_Generic_List_MstMissionEntity__o *v41; // x24
  __int64 v42; // x8
  int64_t v43; // x8
  __int64 v44; // x8
  int v45; // w21
  struct System_String_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct System_String_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct MstMissionDisplayInfoEntity_o *v60; // x8
  int v61; // w8
  __int64 *v62; // x8
  struct System_String_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 *v70; // x8
  struct System_String_o *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  bool v78; // w9

  if ( (byte_4212A98 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v9);
    sub_B0D8A4(&Method_MasterMissionComponent___c__reDispMissionList_b__150_0__, v10);
    sub_B0D8A4(&MasterMissionComponent___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_8873/*"MST_REMISSON_MSG"*/, v12);
    sub_B0D8A4(&StringLiteral_8871/*"MST_REDISP_MSG"*/, v13);
    sub_B0D8A4(&StringLiteral_8874/*"MST_REMISSON_TITLE_TXT"*/, v14);
    sub_B0D8A4(&StringLiteral_8872/*"MST_REDISP_TITLE_TXT"*/, v15);
    byte_4212A98 = 1;
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
    v37 = Time;
    if ( (int)size < 1 )
    {
LABEL_51:
      v45 = 0;
    }
    else
    {
      v38 = 4LL;
      while ( 1 )
      {
        v39 = v38 - 4;
        if ( v38 - 4 >= (unsigned __int64)(unsigned int)currentMstMissionEntList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( *((_QWORD *)&currentMstMissionEntList->fields._items->obj.klass + v38) )
        {
          v40 = this->fields.currentMstMissionEntList;
          if ( !v40 )
            goto LABEL_82;
          if ( v39 >= (unsigned int)v40->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          Time = *((_QWORD *)&v40->fields._items->obj.klass + v38);
          if ( !Time )
            goto LABEL_82;
          Time = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0LL);
          v41 = this->fields.currentMstMissionEntList;
          if ( (_DWORD)Time == 5 )
          {
            if ( !v41 )
              goto LABEL_82;
            if ( v39 >= (unsigned int)v41->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v42 = *((_QWORD *)&v41->fields._items->obj.klass + v38);
            if ( !v42 )
              goto LABEL_82;
            v43 = *(_QWORD *)(v42 + 40);
          }
          else
          {
            if ( !v41 )
              goto LABEL_82;
            if ( v39 >= (unsigned int)v41->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v44 = *((_QWORD *)&v41->fields._items->obj.klass + v38);
            if ( !v44 )
              goto LABEL_82;
            v43 = *(_QWORD *)(v44 + 32);
          }
          if ( v37 >= v43 )
            break;
        }
        if ( v38 - 3 >= size )
          goto LABEL_51;
        currentMstMissionEntList = this->fields.currentMstMissionEntList;
        ++v38;
        if ( !currentMstMissionEntList )
          goto LABEL_82;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_8874/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
      this->fields.titleTxt = v46;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.titleTxt,
        (System_Int32_array **)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8873/*"MST_REMISSON_MSG"*/, 0LL);
      this->fields.msgTxt = v53;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.msgTxt,
        (System_Int32_array **)v53,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      v45 = 1;
    }
    v60 = this->fields.currentMissionDispInfoEnt;
    if ( !v60 )
      goto LABEL_82;
    if ( v37 >= v60->fields.endedAt )
    {
      if ( (v45 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v62 = &StringLiteral_8874/*"MST_REMISSON_TITLE_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v62 = &StringLiteral_8872/*"MST_REDISP_TITLE_TXT"*/;
      }
      v63 = LocalizationManager__Get((System_String_o *)*v62, 0LL);
      this->fields.titleTxt = v63;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.titleTxt,
        (System_Int32_array **)v63,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      if ( (v45 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v70 = &StringLiteral_8873/*"MST_REMISSON_MSG"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v70 = &StringLiteral_8871/*"MST_REDISP_MSG"*/;
      }
      v71 = LocalizationManager__Get((System_String_o *)*v70, 0LL);
      this->fields.msgTxt = v71;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.msgTxt,
        (System_Int32_array **)v71,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      v61 = 1;
    }
    else
    {
      v61 = 0;
    }
    v78 = (v61 | v45) != 0;
    LODWORD(currentMissionDispInfoEnt) = this->fields.isNotNext;
    if ( v78 )
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
      Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      titleTxt = this->fields.titleTxt;
      msgTxt = this->fields.msgTxt;
      v22 = (CommonUI_o *)Time;
      v23 = MasterMissionComponent___c_TypeInfo;
      if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
        v23 = MasterMissionComponent___c_TypeInfo;
      }
      static_fields = v23->static_fields;
      _9__150_0 = static_fields->__9__150_0;
      if ( !_9__150_0 )
      {
        if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)static_fields->__9;
        _9__150_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
        System_Action___ctor(_9__150_0, v26, Method_MasterMissionComponent___c__reDispMissionList_b__150_0__, 0LL);
        v27 = MasterMissionComponent___c_TypeInfo->static_fields;
        v27->__9__150_0 = _9__150_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v27->__9__150_0,
          (System_Int32_array **)_9__150_0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      if ( v22 )
      {
        CommonUI__OpenNotificationDialog(v22, titleTxt, msgTxt, _9__150_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
        return;
      }
LABEL_82:
      sub_B0D97C(Time);
    }
  }
}


void __fastcall MasterMissionComponent__setCurrentSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct StandFigureBack_o *standFigureBack; // x8
  struct UnityEngine_GameObject_o *standFigureCollectList; // x1
  const MethodInfo *v26; // x1

  v2 = this;
  if ( (byte_4212AA7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, method);
    this = (MasterMissionComponent_o *)sub_B0D8A4(
                                         &Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__,
                                         v3);
    byte_4212AA7 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = currentVoiceDataList->fields._items->m_Items[currentIdx];
    if ( v8 )
    {
      v9 = v2->fields.currentVoiceDataList;
      if ( v9 )
      {
        v10 = v2->fields.currentIdx;
        DataListRand = v8->fields.DataListRand;
        if ( v9->fields._size <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v12 = v9->fields._items->m_Items[v10];
        if ( v12 )
        {
          v13 = v2->fields.currentVoiceDataList;
          if ( v13 )
          {
            v14 = v2->fields.currentIdx;
            DataListMission = v12->fields.DataListMission;
            if ( v13->fields._size <= (unsigned int)v14 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v16 = v13->fields._items->m_Items[v14];
            if ( v16 )
            {
              DataName = v16->fields.DataName;
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
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&this->fields.eventMissionInfo,
                      (System_Int32_array **)standFigureCollectList,
                      v18,
                      v19,
                      v20,
                      v21,
                      v22,
                      v23);
                    MasterMissionComponent__playSvtVoice(v2, v26);
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
    sub_B0D97C(this);
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
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x21
  ServantVoiceMaster_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  const MethodInfo *v44; // x1
  ServantVoiceEntity_o *v45; // x22
  struct System_String_o *VoiceAssetName; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  struct System_String_array *voiceNameList; // x23
  __int64 v55; // x8
  unsigned __int64 v56; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  __int64 v68; // x1
  __int64 v69; // x2
  MasterMissionComponent_VoiceData_o *v70; // x22
  int32_t v71; // w8
  Il2CppObject *current; // x21
  WebViewManager_o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  SoundManager_o *v76; // x20
  System_String_o *klass; // x21
  System_Action_o *v78; // x22
  __int64 v79; // x0
  __int64 v80; // x0
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+0h] [xbp-60h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4212A9E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo, v15);
    sub_B0D8A4(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v18);
    sub_B0D8A4(&MasterMissionComponent_VoiceData_TypeInfo, v19);
    byte_4212A9E = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  memset(&v81, 0, sizeof(v81));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v22 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentVoiceDataList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.voiceListRand,
    (System_Int32_array **)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
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
  if ( !v22 )
    goto LABEL_31;
  Entity = ServantVoiceMaster__GetEntity(v22, voicePrefix[1], voicePrefix[0], 8, 0LL);
  if ( !Entity )
    goto LABEL_19;
  v45 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0LL);
  this->fields.lastAssetName = VoiceAssetName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.lastAssetName,
    (System_Int32_array **)VoiceAssetName,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    v55 = *(_QWORD *)&voiceNameList->max_length;
    if ( v55 )
    {
      if ( (int)v55 >= 1 )
      {
        v56 = 0LL;
        do
        {
          if ( v56 >= (unsigned int)v55 )
          {
            v80 = sub_B0D9A8(MstMissionVoiceListByName);
            sub_B0D948(v80, 0LL);
          }
          MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                        v45,
                                        voiceNameList->m_Items[v56],
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
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
          LODWORD(v55) = voiceNameList->max_length;
          ++v56;
        }
        while ( (__int64)v56 < (int)v55 );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v45, 0LL);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.voiceListMission,
    (System_Int32_array **)MasterMissionActionVoiceList,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  currentVoiceDataList = this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v70 = (MasterMissionComponent_VoiceData_o *)sub_B0D974(MasterMissionComponent_VoiceData_TypeInfo, v68, v69);
  MasterMissionComponent_VoiceData___ctor(v70, VoiceAssetName, voiceListRand, voiceListMission, 0LL);
  if ( !currentVoiceDataList )
LABEL_31:
    sub_B0D97C(Instance);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentVoiceDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__);
LABEL_19:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_31;
  v71 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v71;
  if ( v71 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, v44);
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v81,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v81,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v81.fields.current;
      v73 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_B0D97C(v73);
      v76 = (SoundManager_o *)v73;
      klass = (System_String_o *)current[1].klass;
      v78 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v74, v75);
      System_Action___ctor(v78, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0LL);
      if ( !v76 )
        sub_B0D97C(v79);
      SoundManager__LoadAudioAssetStorage(v76, klass, v78, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v81,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
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
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x24
  signed __int64 size; // x21
  int32_t compMissionNum; // w22
  UserEventMissionMaster_o *v14; // x20
  unsigned __int64 v15; // x23
  System_String_o *v16; // x20
  UILabel_o *eventMissionTxt2; // x21
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x0
  UILabel_o *v20; // x19
  UILabel_o *eventMissionTxt; // x21
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4212A9D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_8660/*"MASTER_MISSION_COMPLETE_NUM"*/, v9);
    byte_4212A9D = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_28;
  size = currentEventIdList->fields._size;
  if ( (int)size >= 1 )
  {
    compMissionNum = this->fields.compMissionNum;
    v14 = (UserEventMissionMaster_o *)Instance;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)currentEventIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v14 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(
                                    v14,
                                    currentEventIdList->fields._items->m_Items[++v15],
                                    0LL);
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( (__int64)v15 >= size )
        goto LABEL_13;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_28:
    sub_B0D97C(Instance);
  }
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8660/*"MASTER_MISSION_COMPLETE_NUM"*/, 0LL);
  if ( !this->fields.eventMissionInfo )
    goto LABEL_28;
  v16 = (System_String_o *)Instance;
  if ( this->fields.nowType )
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 0, 0LL);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    eventMissionTxt2 = this->fields.eventMissionTxt2;
    v25 = this->fields.compMissionNum;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    totalMissionNum = this->fields.totalMissionNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_43845440(v16, v18, v19, 0LL);
    if ( !eventMissionTxt2 )
      goto LABEL_28;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0LL);
    v20 = this->fields.eventMissionTxt2;
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    }
    if ( !v20 )
      goto LABEL_28;
    UILabel__SetCondensedScale_41140248(
      v20,
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
    v25 = this->fields.compMissionNum;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    totalMissionNum = this->fields.totalMissionNum;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_43845440(v16, v22, v23, 0LL);
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

  if ( (byte_4212AA6 & 1) == 0 )
  {
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, method);
    byte_4212AA6 = 1;
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
    sub_B0D97C(v5);
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

  if ( (byte_4212AAB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212AAB = 1;
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
    sub_B0D97C(voicePlayEffect);
  StandFigureBack__SetFaceType((StandFigureBack_o *)voicePlayEffect, 0, 0.0, 0, 0LL);
}


void __fastcall MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  __int64 v3; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  __int64 v6; // x1
  __int64 v7; // x2
  struct MasterMissionListViewManager_array *v8; // x8
  __int64 v9; // x9
  MissionListViewManager_o *v10; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x1
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4212ABC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_B0D8A4(&Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__, v3);
    byte_4212ABC = 1;
  }
  missionListViewManager = v2->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_10;
  nowType = v2->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
    goto LABEL_11;
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this
    || (MasterMissionListViewManager__ModifyItem(
          (MasterMissionListViewManager_o *)this,
          v2->fields.receiveMissionIds,
          0LL),
        (v8 = v2->fields.missionListViewManager) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  v9 = v2->fields.nowType;
  if ( (unsigned int)v9 >= v8->max_length )
  {
LABEL_11:
    v13 = sub_B0D9A8(this);
    sub_B0D948(v13, 0LL);
  }
  v10 = (MissionListViewManager_o *)v8->m_Items[v9];
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)v2, Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__, 0LL);
  if ( !v10 )
    goto LABEL_10;
  MissionListViewManager__SetMode(v10, 3, v11, 0LL);
  MasterMissionComponent__RefreshInfo(v2, v12);
}


void __fastcall MasterMissionComponent__stopSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    sub_B0D97C(0LL);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4212710 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isDecide);
    byte_4212710 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent_ClickDelegate__Invoke(
        MasterMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  MasterMissionComponent_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
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
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  MasterMissionComponent_ClickDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (MasterMissionComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
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
  sub_B0D840(v10, mstMission);
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
  sub_B0D840(&this->fields, value);
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
  sub_B0D840(&this->fields, voiceDataName);
  this->fields.DataListRand = voiceDataListRand;
  sub_B0D840(&this->fields.DataListRand, voiceDataListRand);
  this->fields.DataListMission = voiceDataListMission;
  sub_B0D840(&this->fields.DataListMission, voiceDataListMission);
}


void __fastcall MasterMissionComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MasterMissionComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4212707 & 1) == 0 )
  {
    sub_B0D8A4(&MasterMissionComponent___c_TypeInfo, v1);
    byte_4212707 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MasterMissionComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MasterMissionComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v8; // x1
  ErrorDialog_c *klass; // x8

  if ( (byte_4212709 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v3);
    byte_4212709 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v6);
    byte_421083D = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v7->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_25;
  TerminalSceneComponent__playBgm_17453448((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v8);
    byte_421083D = 1;
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
    sub_B0D97C(Instance);
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  SceneJumpInfo_o *v8; // x19

  if ( (byte_421270B & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_13121/*"StoneFragments"*/, v4);
    byte_421270B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission(Instance, 0LL),
        v8 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v6, v7),
        SceneJumpInfo___ctor_16651556(v8, (System_String_o *)StringLiteral_13121/*"StoneFragments"*/, 0LL),
        !v8)
    || (SceneJumpInfo__SetReturnNowScene(v8, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v8, 0LL);
}


void __fastcall MasterMissionComponent___c___OpenCompleteMission_b__145_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_4212708 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_4212708 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
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
    sub_B0D97C(0LL);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0LL);
}


void __fastcall MasterMissionComponent___c___reDispMissionList_b__150_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0

  if ( (byte_421270A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_421270A = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D97C(_4__this);
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
  __int64 MissionId; // x0
  __int64 *v17; // x8
  struct MasterMissionComponent_o *v18; // x21
  struct MasterMissionComponent_o *v19; // x8
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_421270C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__, isDecide);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_3066/*"CLICK_DECIDE"*/, v12);
    this = (MasterMissionComponent___c__DisplayClass181_0_o *)sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v13);
    byte_421270C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      isDecide,
                                                      method);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (MasterMissionComponent___c__DisplayClass181_0_o *)v4->fields.items;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v20,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v21 = v20;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v21,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__) )
      {
        if ( !v21.fields.current )
          sub_B0D97C(0LL);
        MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v21.fields.current, 0LL);
        if ( !v15 )
          sub_B0D97C(MissionId);
        System_Collections_Generic_List_int___Add(
          v15,
          MissionId,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v21,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v15 )
      {
        v18 = v4->fields.__4__this;
        this = (MasterMissionComponent___c__DisplayClass181_0_o *)System_Collections_Generic_List_int___ToArray(
                                                                    v15,
                                                                    (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v18 )
        {
          v18->fields.sendMissionIds = (struct System_Int32_array *)this;
          sub_B0D840(&v18->fields.sendMissionIds, this);
          v19 = v4->fields.__4__this;
          if ( v19 )
          {
            this = (MasterMissionComponent___c__DisplayClass181_0_o *)v19->fields.myFsm;
            if ( this )
            {
              v17 = &StringLiteral_3066/*"CLICK_DECIDE"*/;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B0D97C(this);
  }
  this = (MasterMissionComponent___c__DisplayClass181_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_21;
  v17 = &StringLiteral_3060/*"CLICK_CANCEL"*/;
LABEL_18:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v17, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v6; // x8

  v2 = this;
  if ( (byte_421270D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11773/*"SERVANT_OVER"*/, method);
    sub_B0D8A4(&StringLiteral_10518/*"PRESENT_BOX_OVER"*/, v3);
    this = (MasterMissionComponent___c__DisplayClass187_0_o *)sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v4);
    byte_421270D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterMissionComponent___c__DisplayClass187_0_o *)_4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( this )
    {
      v6 = &StringLiteral_10518/*"PRESENT_BOX_OVER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B0D97C(this);
  }
  if ( !this )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v6 = &StringLiteral_11773/*"SERVANT_OVER"*/;
  else
    v6 = &StringLiteral_3060/*"CLICK_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__1(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *nextAction; // x0

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_B0D97C(0LL);
  System_Action__Invoke(nextAction, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__2(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *nextAction; // x0

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_B0D97C(0LL);
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

  if ( (byte_421270E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11773/*"SERVANT_OVER"*/, method);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v3);
    byte_421270E = 1;
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
    sub_B0D97C(_4__this);
  if ( _4__this->fields.overflowType )
    v5 = &StringLiteral_11773/*"SERVANT_OVER"*/;
  else
    v5 = &StringLiteral_3060/*"CLICK_CANCEL"*/;
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
  MasterMissionComponent_o *Object_WarBoardWaitTimeSetting; // x0
  struct MasterMissionComponent_o *v8; // x8
  int32_t exchangeCount; // w20

  if ( (byte_421270F & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, assetData);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v5);
    byte_421270F = 1;
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
                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B0D840(&_4__this->fields.btnEffectBasePrefab, Object_WarBoardWaitTimeSetting);
  Object_WarBoardWaitTimeSetting = this->fields.__4__this;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_15;
  MasterMissionComponent__StopStoneButtonEffect(Object_WarBoardWaitTimeSetting, 0LL);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_15;
  if ( v8->fields.nowType == 1 )
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
      sub_B0D97C(Object_WarBoardWaitTimeSetting);
    }
  }
}


void __fastcall MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}