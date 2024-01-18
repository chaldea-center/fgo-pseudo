void __fastcall MasterMissionComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MasterMissionComponent_c *v11; // x8
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  __int64 v13; // x1
  struct MasterMissionComponent_StaticFields *v14; // x0
  __int64 v15; // x1
  struct MasterMissionComponent_StaticFields *v16; // x0
  __int64 v17; // x1
  struct MasterMissionComponent_StaticFields *v18; // x0
  __int64 v19; // x1
  struct MasterMissionComponent_StaticFields *v20; // x0
  __int64 v21; // x1
  struct MasterMissionComponent_StaticFields *v22; // x0
  __int64 v23; // x1
  struct MasterMissionComponent_StaticFields *v24; // x0
  __int64 v25; // x1
  struct MasterMissionComponent_StaticFields *v26; // x0
  __int64 v27; // x1
  struct MasterMissionComponent_StaticFields *v28; // x0
  __int64 v29; // x1
  MasterMissionComponent_c *v30; // x8
  struct MasterMissionComponent_StaticFields *v31; // x8

  if ( (byte_418598D & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_17066/*"btn_txt_off_limited"*/, v2);
    sub_B2C35C(&StringLiteral_17065/*"btn_txt_off_extra"*/, v3);
    sub_B2C35C(&StringLiteral_17072/*"btn_txt_on_limited"*/, v4);
    sub_B2C35C(&StringLiteral_18168/*"ef_btn_blink"*/, v5);
    sub_B2C35C(&StringLiteral_17064/*"btn_txt_off_daily"*/, v6);
    sub_B2C35C(&StringLiteral_17070/*"btn_txt_on_daily"*/, v7);
    sub_B2C35C(&StringLiteral_17073/*"btn_txt_on_weekly"*/, v8);
    sub_B2C35C(&StringLiteral_17067/*"btn_txt_off_weekly"*/, v9);
    sub_B2C35C(&StringLiteral_17071/*"btn_txt_on_extra"*/, v10);
    byte_418598D = 1;
  }
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_SVT_ID = 9000001;
  MasterMissionComponent_TypeInfo->static_fields->DEFAULT_LIMITCNT = 0;
  v11 = MasterMissionComponent_TypeInfo;
  MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  static_fields = v11->static_fields;
  v13 = StringLiteral_17070/*"btn_txt_on_daily"*/;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17070/*"btn_txt_on_daily"*/;
  sub_B2C2F8(&static_fields->DAILY_ON_SPRITE_LABEL, v13);
  v14 = MasterMissionComponent_TypeInfo->static_fields;
  v15 = StringLiteral_17064/*"btn_txt_off_daily"*/;
  v14->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17064/*"btn_txt_off_daily"*/;
  sub_B2C2F8(&v14->DAILY_OFF_SPRITE_LABEL, v15);
  v16 = MasterMissionComponent_TypeInfo->static_fields;
  v17 = StringLiteral_17073/*"btn_txt_on_weekly"*/;
  v16->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17073/*"btn_txt_on_weekly"*/;
  sub_B2C2F8(&v16->WEEKLY_ON_SPRITE_LABEL, v17);
  v18 = MasterMissionComponent_TypeInfo->static_fields;
  v19 = StringLiteral_17067/*"btn_txt_off_weekly"*/;
  v18->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17067/*"btn_txt_off_weekly"*/;
  sub_B2C2F8(&v18->WEEKLY_OFF_SPRITE_LABEL, v19);
  v20 = MasterMissionComponent_TypeInfo->static_fields;
  v21 = StringLiteral_17071/*"btn_txt_on_extra"*/;
  v20->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17071/*"btn_txt_on_extra"*/;
  sub_B2C2F8(&v20->EXTRA_ON_SPRITE_LABEL, v21);
  v22 = MasterMissionComponent_TypeInfo->static_fields;
  v23 = StringLiteral_17065/*"btn_txt_off_extra"*/;
  v22->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17065/*"btn_txt_off_extra"*/;
  sub_B2C2F8(&v22->EXTRA_OFF_SPRITE_LABEL, v23);
  v24 = MasterMissionComponent_TypeInfo->static_fields;
  v25 = StringLiteral_17072/*"btn_txt_on_limited"*/;
  v24->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17072/*"btn_txt_on_limited"*/;
  sub_B2C2F8(&v24->LIMITED_ON_SPRITE_LABEL, v25);
  v26 = MasterMissionComponent_TypeInfo->static_fields;
  v27 = StringLiteral_17066/*"btn_txt_off_limited"*/;
  v26->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_17066/*"btn_txt_off_limited"*/;
  sub_B2C2F8(&v26->LIMITED_OFF_SPRITE_LABEL, v27);
  v28 = MasterMissionComponent_TypeInfo->static_fields;
  v29 = StringLiteral_18168/*"ef_btn_blink"*/;
  v28->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_18168/*"ef_btn_blink"*/;
  sub_B2C2F8(&v28->STONE_EXCHENGE_BUTTON_EFFECT_NAME, v29);
  v30 = MasterMissionComponent_TypeInfo;
  MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME = 0.1;
  v30->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH = 92.0;
  v30->static_fields->NOTICE_NUMBER_BADGE_DEPTH = 10;
  v30->static_fields->NOTICE_NUMBER_BADGE_WIDTH = 40;
  v30->static_fields->NOTICE_NUMBER_BADGE_HEIGHT = 40;
  v30->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE = 16;
  v30->static_fields->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v31 = v30->static_fields;
  v31->BLANK_EARTH_WINDOW_POS.fields.x = 0.0;
  v31->BLANK_EARTH_WINDOW_POS.fields.y = 0.0;
  v31->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
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
  __int64 v12; // x0

  if ( (byte_418597A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MasterMissionComponent__AcceptReward_b__186_0__, v4);
    byte_418597A = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v12 = sub_B2C460(v5);
    sub_B2C400(v12, 0LL);
  }
  receiveMissionIds = this->fields.receiveMissionIds;
  v10 = missionListViewManager->m_Items[nowType];
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__186_0__, 0LL);
  if ( !v10 )
LABEL_7:
    sub_B2C434(v5, v6);
  MasterMissionListViewManager__AcceptReward(v10, receiveMissionIds, v11, 0LL);
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
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_B2C434(this, isBulk);
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
  MasterMissionComponent___c__DisplayClass181_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v11; // x20
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v12; // x22

  if ( (byte_4185976 & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo, items);
    sub_B2C35C(&Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__, v5);
    sub_B2C35C(&MasterMissionComponent___c__DisplayClass181_0_TypeInfo, v6);
    byte_4185976 = 1;
  }
  v7 = (MasterMissionComponent___c__DisplayClass181_0_o *)sub_B2C42C(MasterMissionComponent___c__DisplayClass181_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass181_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_6;
  v7->fields.__4__this = this;
  sub_B2C2F8(&v7->fields, this);
  v7->fields.items = items;
  sub_B2C2F8(&v7->fields.items, items);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v11 = v7->fields.items;
  v12 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_B2C42C(MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_MasterMissionComponent___c__DisplayClass181_0__BulkReceiveConfirm_b__0__,
    0LL);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_B2C434(v8, v9);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v11, v12, 0LL);
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
  if ( (byte_4185971 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B2C35C(&MasterMissionComponent_TypeInfo, method);
    byte_4185971 = 1;
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
    sub_B2C434(this, method);
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
    v21 = sub_B2C460(this);
    sub_B2C400(v21, 0LL);
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
  if ( !byte_4185994 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v19);
    byte_4185994 = 1;
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
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4185955 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_8744/*"MISSION_ACHIVE_MSG"*/, v8);
    sub_B2C35C(&StringLiteral_3283/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    sub_B2C35C(&StringLiteral_13392/*"TIME_REST_ACHIVE"*/, v11);
    byte_4185955 = 1;
  }
  MissionAchiveCount_k__BackingField = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8744/*"MISSION_ACHIVE_MSG"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Equals_44292872(
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
    if ( System_String__Equals_44292872((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(this->fields.completeMissionTimeNumStr, 0LL);
  if ( !this->fields.completeMissionAlertTitleLb )
    goto LABEL_39;
  v21 = (char)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.completeMissionAlertTitleLb,
                                0LL);
  if ( !Instance )
    goto LABEL_39;
  if ( (v21 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    completeMissionAlertTitleLb = this->fields.completeMissionAlertTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3283/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0LL);
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
            goto LABEL_37;
          }
        }
      }
    }
LABEL_39:
    sub_B2C434(Instance, v13);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13392/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !completeMissionAlertMsgLb )
    goto LABEL_39;
  v23 = (System_String_o *)Instance;
  Instance = (DataManager_o *)completeMissionAlertMsgLb;
LABEL_37:
  UILabel__set_text((UILabel_o *)Instance, v23, 0LL);
}


void __fastcall MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  __int64 v3; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  int32_t BoardTouchMissionId; // w20
  __int64 v7; // x0

  v2 = this;
  if ( (byte_4185977 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_B2C35C(&StringLiteral_11137/*"REWARD_ACCEPTABLE"*/, v3);
    byte_4185977 = 1;
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
        (this = (MasterMissionComponent_o *)sub_B2C374(int___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  if ( !LODWORD(this->fields.myFsm) )
  {
LABEL_11:
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
  LODWORD(this->fields.titlePrefab) = BoardTouchMissionId;
  v2->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_B2C2F8(&v2->fields.sendMissionIds, this);
  this = (MasterMissionComponent_o *)v2->fields.myFsm;
  v2->fields.isBoardTouch = 1;
  if ( !this )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11137/*"REWARD_ACCEPTABLE"*/, 0LL);
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

  if ( (byte_4185984 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    byte_4185984 = 1;
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
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL);
  v7 = this->fields.missionListViewManager;
  if ( !v7 )
    goto LABEL_23;
  if ( v7->max_length <= 1 )
    goto LABEL_24;
  svtVoiceCtr = (EventSvtControl_o *)v7->m_Items[1];
  if ( !svtVoiceCtr )
    goto LABEL_23;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_23;
  if ( v8->max_length <= 2 )
    goto LABEL_24;
  svtVoiceCtr = (EventSvtControl_o *)v8->m_Items[2];
  if ( !svtVoiceCtr
    || (MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0LL),
        (v9 = this->fields.missionListViewManager) == 0LL) )
  {
LABEL_23:
    sub_B2C434(svtVoiceCtr, v3);
  }
  if ( v9->max_length <= 3 )
  {
LABEL_24:
    v10 = sub_B2C460(svtVoiceCtr);
    sub_B2C400(v10, 0LL);
  }
  svtVoiceCtr = (EventSvtControl_o *)v9->m_Items[3];
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
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4185963 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185963 = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(titleInfo, v3);
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
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v9; // x8
  MasterMissionComponent___c_c *v10; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__147_0; // x20
  Il2CppObject *v14; // x21
  struct MasterMissionComponent___c_StaticFields *v15; // x0

  if ( (byte_4185959 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__, v5);
    sub_B2C35C(&MasterMissionComponent___c_TypeInfo, v6);
    byte_4185959 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  v10 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v10 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__147_0 = static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__147_0, v14, Method_MasterMissionComponent___c__ExitCompleteMission_b__147_0__, 0LL);
    v15 = MasterMissionComponent___c_TypeInfo->static_fields;
    v15->__9__147_0 = _9__147_0;
    sub_B2C2F8(&v15->__9__147_0, _9__147_0);
  }
  if ( !Instance )
    sub_B2C434(v10, v7);
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

  if ( (byte_4185956 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B2C35C(&MissionInfoMaker_TypeInfo, eventMissionList);
    byte_4185956 = 1;
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
        v18 = sub_B2C460(this);
        sub_B2C400(v18, 0LL);
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
    sub_B2C434(this, eventMissionList);
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
  __int64 v12; // x0

  if ( (byte_4185965 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_B2C35C(&MasterMissionListViewItem_TypeInfo, eventMissionList);
    byte_4185965 = 1;
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
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_B2C42C(MasterMissionListViewItem_TypeInfo);
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
    sub_B2C434(this, eventMissionList);
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
    sub_B2C434(completeMissionIcon, method);
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
  if ( (byte_4185954 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method);
    this = (MasterMissionComponent_o *)sub_B2C35C(
                                         &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
                                         v4);
    byte_4185954 = 1;
  }
  currentCompleteMissionList = v3->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    sub_B2C434(this, method);
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
  __int64 v9; // x1
  struct DataMasterBase_array *datalist; // x25
  DataManager_o *v11; // x20
  unsigned int v12; // w26
  __int64 namespaze; // x24
  DataManager_c **v14; // x8
  DataManager_c *v15; // x21
  int64_t v16; // x9
  __int64 v18; // x0
  bool result; // w0
  BalanceConfig_c *v20; // x0

  if ( (byte_418595A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_MstMissionMaster___, v2);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418595A = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_34;
  datalist = Instance->fields.datalist;
  v11 = Instance;
  if ( (int)datalist >= 1 )
  {
    v12 = 0;
    namespaze = -1LL;
    while ( 1 )
    {
      v14 = &v11->klass + (int)v12;
      v15 = v14[4];
      if ( !v15 )
        break;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v14[4], 0LL);
      if ( (_DWORD)Instance == 5 )
      {
        v16 = *(_QWORD *)&v15->_1.byval_arg.bits;
        if ( (__int64)v15->_1.namespaze > namespaze )
          namespaze = (__int64)v15->_1.namespaze;
        if ( Time < v16 && NoneExpireTime > v16 )
          NoneExpireTime = *(_QWORD *)&v15->_1.byval_arg.bits;
      }
      if ( (int)++v12 >= (int)datalist )
        goto LABEL_27;
      if ( v12 >= LODWORD(v11->fields.datalist) )
      {
        v18 = sub_B2C460(Instance);
        sub_B2C400(v18, 0LL);
      }
    }
LABEL_34:
    sub_B2C434(Instance, v9);
  }
  namespaze = -1LL;
LABEL_27:
  result = 0;
  if ( Time < NoneExpireTime && namespaze <= Time )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  struct MstMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  _BOOL8 _28617756; // x0
  const MethodInfo *v17; // x1
  CommonUI_o *v18; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_4185951 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_MstMissionMaster___, v4);
    sub_B2C35C(&Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&TutorialFlag_TypeInfo, v8);
    byte_4185951 = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (struct MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(&this->fields.mstMissionMst, MasterData_WarQuestSelectionMaster);
  EventRewardSaveData__LoadAllMissionData(0LL);
  MasterMissionComponent__SetMissionDisp(this, v12);
  MasterMissionComponent__SetMissionClearNum(this, v13);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(126, 0LL) )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v10);
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
  _28617756 = TutorialFlag__Get_28617756(207, 0LL);
  if ( !_28617756 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_28617756, v17);
  v18 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__137_0__, 0LL);
  if ( !v18 )
LABEL_32:
    sub_B2C434(Instance, v10);
  CommonUI__maskFadein(v18, DEFAULT_FADE_TIME, v21, 0LL);
}


void __fastcall MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_4185983 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185983 = 1;
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
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_418598C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_2632/*"BULK_RECEIVE"*/, v3);
    byte_418598C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2632/*"BULK_RECEIVE"*/, 0LL);
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
  CommonUI_o *v18; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  System_String_o *v22; // x19
  _QWORD **v23; // x21
  __int64 v24; // x20
  __int16 v25; // w8
  __int64 v26; // x20
  __int64 v27; // x20
  __int64 v28; // x20
  System_String_o *v29; // x19
  CommonUI_o *v30; // x20
  MasterMissionComponent___c_c *v31; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__146_1; // x21
  Il2CppObject *v34; // x22
  struct MasterMissionComponent___c_StaticFields *v35; // x0

  if ( (byte_4185958 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Array_Empty_object___, v3);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
    sub_B2C35C(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__, v12);
    sub_B2C35C(&MasterMissionComponent___c_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_3282/*"COMPLETE_MISSION_END"*/, v14);
    byte_4185958 = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_50;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0LL) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v16);
        byte_4183C65 = 1;
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
          v18 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v19 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v19 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
          v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v21,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__146_0__,
            0LL);
          if ( v18 )
          {
            CommonUI__maskFadeout(v18, 1, DEFAULT_FADE_TIME, v21, 0LL);
            return;
          }
        }
      }
LABEL_50:
      sub_B2C434(Instance, v16);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3282/*"COMPLETE_MISSION_END"*/, 0LL);
    v23 = (_QWORD **)Method_System_Array_Empty_object___;
    v24 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v25 = *(_WORD *)(v24 + 306);
    if ( (v25 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v25 = *(_WORD *)(v24 + 306);
    }
    if ( (v25 & 0x400) != 0 )
    {
      v26 = *v23[6];
      if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
        sub_AC505C(*v23[6]);
      if ( !*(_DWORD *)(v26 + 224) )
      {
        v27 = *v23[6];
        if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
          sub_AC505C(*v23[6]);
        j_il2cpp_runtime_class_init_0(v27);
      }
    }
    v28 = *v23[6];
    if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
      sub_AC505C(*v23[6]);
    v29 = System_String__Format_44384256(v22, **(System_Object_array ***)(v28 + 184), 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = (CommonUI_o *)Instance;
    v31 = MasterMissionComponent___c_TypeInfo;
    if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
      v31 = MasterMissionComponent___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__146_1 = static_fields->__9__146_1;
    if ( !_9__146_1 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__146_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__146_1, v34, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__146_1__, 0LL);
      v35 = MasterMissionComponent___c_TypeInfo->static_fields;
      v35->__9__146_1 = _9__146_1;
      sub_B2C2F8(&v35->__9__146_1, _9__146_1);
    }
    if ( !v30 )
      goto LABEL_50;
    CommonUI__OpenNotificationDialog(v30, 0LL, v29, _9__146_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
  }
}


void __fastcall MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4185972 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185972 = 1;
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

  if ( (byte_4185974 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185974 = 1;
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

  if ( (byte_418598A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418598A = 1;
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

  if ( (byte_4185975 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185975 = 1;
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
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v9; // x8
  MasterMissionComponent___c_c *v10; // x0
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__174_0; // x20
  Il2CppObject *v14; // x21
  struct MasterMissionComponent___c_StaticFields *v15; // x0

  if ( (byte_4185970 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__, v5);
    sub_B2C35C(&MasterMissionComponent___c_TypeInfo, v6);
    byte_4185970 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  v10 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
    v10 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__174_0 = static_fields->__9__174_0;
  if ( !_9__174_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__174_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__174_0, v14, Method_MasterMissionComponent___c__OnClickShopBtn_b__174_0__, 0LL);
    v15 = MasterMissionComponent___c_TypeInfo->static_fields;
    v15->__9__174_0 = _9__174_0;
    sub_B2C2F8(&v15->__9__174_0, _9__174_0);
  }
  if ( !Instance )
    sub_B2C434(v10, v7);
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
      sub_B2C434(0LL, method);
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

  if ( (byte_4185973 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185973 = 1;
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

  if ( (byte_418594F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418594F = 1;
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
      sub_B2C434(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_titleInfo = 0LL;
    sub_B2C2F8(&this->fields.titleInfo, 0LL);
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
  const MethodInfo *v27; // x1
  System_Collections_Generic_List_int__o *v28; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  unsigned int v32; // w20
  bool v33; // w1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  struct UnityEngine_GameObject_o *titlePrefab; // x21
  struct TitleInfoControl_o *Component_srcLineSprite; // x0
  TitleInfoControl_o *v38; // x21
  TitleInfoControl_o *v39; // x20
  System_Action_o *v40; // x21
  MasterMissionComponent_c *v41; // x0
  int32_t DEFAULT_LIMITCNT; // w8
  struct MstMissionEntity_array *Entitys_WarMaster__WarEntity; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v48; // x21
  System_Action_o *v49; // x20
  __int64 v50; // x0

  if ( (byte_4185950 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, callback);
    sub_B2C35C(&System_Action_int__TypeInfo, v9);
    sub_B2C35C(&System_Action_TypeInfo, v10);
    sub_B2C35C(&AtlasManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_List_MstMissionEntity__TypeInfo, v17);
    sub_B2C35C(&Method_MasterMissionComponent_LoadNotificationEnd__, v18);
    sub_B2C35C(&Method_MasterMissionComponent_OnClickBack__, v19);
    sub_B2C35C(&Method_MasterMissionComponent__Open_b__136_0__, v20);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v21);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    byte_4185950 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(&this->fields.callbackFunc, callback);
  this->fields.reDispAction = redisp_act;
  sub_B2C2F8(&this->fields.reDispAction, redisp_act);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_46;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0LL);
  v28 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v28;
  sub_B2C2F8(&this->fields.currentEventIdList, v28);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v29;
  sub_B2C2F8(&this->fields.currentMstMissionEntList, v29);
  EventRewardSaveData__LoadMstMissionIndex(0LL);
  if ( typeIndex == -1 )
  {
    if ( !byte_4185993 )
    {
      Instance = (CommonUI_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, v27);
      byte_4185993 = 1;
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
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
      {
        v50 = sub_B2C460(Instance);
        sub_B2C400(v50, 0LL);
      }
      Instance = (CommonUI_o *)missionTabList->m_Items[v32];
      if ( !Instance )
        break;
      MasterMissionTab__SetTabSize((MasterMissionTab_o *)Instance, 1, 0LL);
      max_length = missionTabList->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_15;
    }
LABEL_46:
    sub_B2C434(Instance, v27);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v27) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_46;
    v33 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_46;
    v33 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v33, 0LL);
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
                               (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_46;
    Component_srcLineSprite = (struct TitleInfoControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = Component_srcLineSprite;
    sub_B2C2F8(&this->fields.titleInfo, Component_srcLineSprite);
    v38 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v38 )
      goto LABEL_46;
    TitleInfoControl__SetParent(v38, (UnityEngine_Transform_o *)Instance, 0LL);
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
    TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)Instance, 1, 82, 0, 0LL);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_46;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    v39 = this->fields.titleInfo;
    v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_MasterMissionComponent_OnClickBack__, 0LL);
    if ( !v39 )
      goto LABEL_46;
    TitleInfoControl__SetBackBtnAct(v39, v40, 0LL);
  }
  v41 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v41 = MasterMissionComponent_TypeInfo;
  }
  this->fields.currentEventSvtId = v41->static_fields->DEFAULT_SVT_ID;
  DEFAULT_LIMITCNT = v41->static_fields->DEFAULT_LIMITCNT;
  this->fields.currentDispId = 0;
  this->fields.currentEventSvtLimitCnt = DEFAULT_LIMITCNT;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Entitys_WarMaster__WarEntity = (struct MstMissionEntity_array *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1733C80 *)Method_DataManager_getEntitys_MstMissionMaster__MstMissionEntity___);
  this->fields.mstMissionList = Entitys_WarMaster__WarEntity;
  sub_B2C2F8(&this->fields.mstMissionList, Entitys_WarMaster__WarEntity);
  MasterMissionComponent__SetupShopBtn(this, v44);
  MasterMissionComponent__SetupCompleteBtn(this, v45);
  MasterMissionComponent__RefreshInfo(this, v46);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v48 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v48,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__Open_b__136_0__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v48, 1, 0LL);
  v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v49, 0LL);
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
  CompleteMissionComponent_ClickDelegate_o *v12; // x20
  __int64 v13; // x1
  MasterMissionComponent___c_c *mInstance; // x0
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__145_0; // x21
  Il2CppObject *v17; // x22
  struct MasterMissionComponent___c_StaticFields *v18; // x0
  TerminalSceneComponent_c *v19; // x0

  if ( (byte_4185957 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&CompleteMissionComponent_ClickDelegate_TypeInfo, v4);
    sub_B2C35C(&Method_MasterMissionComponent_ExitCompleteMission__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
    sub_B2C35C(&Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__, v9);
    sub_B2C35C(&MasterMissionComponent___c_TypeInfo, v10);
    byte_4185957 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CompleteMissionComponent_ClickDelegate_o *)sub_B2C42C(CompleteMissionComponent_ClickDelegate_TypeInfo);
  CompleteMissionComponent_ClickDelegate___ctor(
    v12,
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
    v17 = (Il2CppObject *)static_fields->__9;
    _9__145_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__145_0, v17, Method_MasterMissionComponent___c__OpenCompleteMission_b__145_0__, 0LL);
    v18 = MasterMissionComponent___c_TypeInfo->static_fields;
    v18->__9__145_0 = _9__145_0;
    sub_B2C2F8(&v18->__9__145_0, _9__145_0);
  }
  if ( !Instance )
    goto LABEL_25;
  CommonUI__OpenCompleteMission(Instance, v12, _9__145_0, 0, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v13);
    byte_4183C65 = 1;
  }
  v19 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v19 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v19->static_fields->mInstance;
  if ( !mInstance )
LABEL_25:
    sub_B2C434(mInstance, v13);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0LL);
}


void __fastcall MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418598B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418598B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__OpenTutorialImageDialog_17996800(Instance, 42, 207, 0LL, 0LL, 0LL, 0LL);
}


void __fastcall MasterMissionComponent__OpenPresentBox(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v9; // x21
  CommonUI_o *v10; // x0
  __int64 v11; // x1
  ErrorDialog_c *klass; // x8
  CommonUI_o *v13; // x19
  MasterMissionComponent_c *v14; // x8
  ErrorDialog_c *v15; // x8

  if ( (byte_418597D & 1) == 0 )
  {
    sub_B2C35C(&UserPresentBoxWindow_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_MasterMissionComponent__OpenPresentBox_b__189_0__, v3);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v7);
    byte_418597D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (UserPresentBoxWindow_ClickDelegate_o *)sub_B2C42C(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__189_0__,
    0LL);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__OpenUsrPresentList(Instance, 1, v9, 0LL, 0LL);
  v10 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v10 )
    goto LABEL_33;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v10, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
      byte_4183C65 = 1;
    }
    v10 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v10 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.errorDialog->klass;
    if ( !klass )
      goto LABEL_33;
    v10 = *(CommonUI_o **)&klass->_2.element_size;
    if ( !v10 )
      goto LABEL_33;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v10, 0LL) )
    {
      v10 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = v10;
      v14 = MasterMissionComponent_TypeInfo;
      if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
        v14 = MasterMissionComponent_TypeInfo;
      }
      if ( v13 )
      {
        CommonUI__SetUsrPresentListPos(v13, v14->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v11);
          byte_4183C65 = 1;
        }
        v10 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v10 = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        }
        v15 = v10->fields.errorDialog->klass;
        if ( v15 )
        {
          v10 = *(CommonUI_o **)&v15->_2.element_size;
          if ( v10 )
          {
            ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v10, 0, 0LL);
            return;
          }
        }
      }
LABEL_33:
      sub_B2C434(v10, v11);
    }
  }
}


void __fastcall MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  struct UnityEngine_GameObject_o *v5; // x20
  struct UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4185988 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185988 = 1;
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
                                              (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = v6;
    sub_B2C2F8(&this->fields.btnEffectPrefab, v6);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0LL, 0LL) )
      GameObjectExtensions__SafeSetParent_31331952(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0LL);
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

  if ( (byte_418597C & 1) == 0 )
  {
    sub_B2C35C(&PresentBoxOverDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_MasterMissionComponent__PresentBoxOver_b__188_0__, v4);
    sub_B2C35C(&StringLiteral_8639/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418597C = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8639/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0LL);
  v9 = (PresentBoxOverDialog_ClickDelegate_o *)sub_B2C42C(PresentBoxOverDialog_ClickDelegate_TypeInfo);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__188_0__,
    0LL);
  if ( !presentBoxOverDialog )
    sub_B2C434(v10, v11);
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1/*""*/, v8, v9, 26, 0LL);
}


void __fastcall MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MasterMissionComponent___c__DisplayClass187_0_o *v8; // x20
  AdManager_o *Instance; // x0
  __int64 v10; // x1
  System_Action_o *v11; // x22
  AdManager_o **p_nextAction; // x21
  struct System_Int32_array *receiveMissionIds; // x8
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v16; // x19
  System_Action_o *v17; // x21
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v19; // x19
  System_Action_o *v20; // x22
  __int64 v21; // x0

  if ( (byte_418597B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v3);
    sub_B2C35C(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__, v4);
    sub_B2C35C(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__, v5);
    sub_B2C35C(&Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__, v6);
    sub_B2C35C(&MasterMissionComponent___c__DisplayClass187_0_TypeInfo, v7);
    byte_418597B = 1;
  }
  v8 = (MasterMissionComponent___c__DisplayClass187_0_o *)sub_B2C42C(MasterMissionComponent___c__DisplayClass187_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass187_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_20;
  v8->fields.__4__this = this;
  sub_B2C2F8(&v8->fields, this);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v8,
    Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__0__,
    0LL);
  p_nextAction = (AdManager_o **)&v8->fields.nextAction;
  v8->fields.nextAction = v11;
  sub_B2C2F8(&v8->fields.nextAction, v11);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && *(_QWORD *)&receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 1) <= 2 && !this->fields.isOverPresentBox && !this->fields.overflowType )
    {
      Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
          v21 = sub_B2C460(Instance);
          sub_B2C400(v21, 0LL);
        }
        v16 = missionListViewManager->m_Items[nowType];
        v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v17,
          (Il2CppObject *)v8,
          Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__1__,
          0LL);
        if ( v16 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v16, v17, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B2C434(Instance, v10);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v19 = this->fields.receiveMissionIds;
    v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v8,
      Method_MasterMissionComponent___c__DisplayClass187_0__ReceiveResultList_b__2__,
      0LL);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v19, v20, 0LL);
  }
  else
  {
    Instance = *p_nextAction;
    if ( !*p_nextAction )
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
  __int64 v9; // x1
  UILabel_o *stoneInfoLabel; // x20
  int32_t stone; // w21
  int32_t UserStoneFragmentNum; // w0
  UILabel_o *stoneFragmentsInfoLabel; // x21
  int32_t v14; // w20
  const MethodInfo *v15; // x2

  if ( (byte_4185985 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserItemMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185985 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
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
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0LL),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v14 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0LL),
        !stoneFragmentsInfoLabel) )
  {
LABEL_15:
    sub_B2C434(Instance, v9);
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
  __int64 v12; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4185981 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_4185981 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  currentVoiceDataList = this->fields.currentVoiceDataList;
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentVoiceDataList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v14,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v9 )
        break;
      if ( !v14.fields.current )
        sub_B2C434(v9, v10);
      klass = v14.fields.current[1].klass;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__releaseAudioAssetStorage((System_String_o *)klass, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v13 = this->fields.currentVoiceDataList;
    if ( !v13 )
      sub_B2C434(0LL, v12);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v13,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__);
  }
}


void __fastcall MasterMissionComponent__RequestMissionReward(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  EventMissionClearRewardRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v8; // x1

  if ( (byte_4185978 & 1) == 0 )
  {
    sub_B2C35C(&Method_MasterMissionComponent_missionRewardCallback__, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4185978 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionClearRewardRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v6,
                                                                            (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B2C434(0LL, v8);
  EventMissionClearRewardRequest__beginRequest_27199816(
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
  __int64 v11; // x1
  UserPresentBoxErrorDialog_o *v12; // x21
  System_Action_ShopRootConstants_State__o *v13; // x22

  if ( (byte_418597E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_SceneList_Type___ctor__, method);
    sub_B2C35C(&System_Action_SceneList_Type__TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_MasterMissionComponent_ServantOverDialogClose__, v5);
    sub_B2C35C(&StringLiteral_8649/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, v6);
    byte_418597E = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8649/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0LL);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v10, 0LL),
        v12 = this->fields.servantOverDialog,
        v13 = (System_Action_ShopRootConstants_State__o *)sub_B2C42C(System_Action_SceneList_Type__TypeInfo),
        System_Action_ShopRootConstants_State____ctor(
          v13,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          (const MethodInfo_24BA81C *)Method_System_Action_SceneList_Type___ctor__),
        !v12)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v12, (System_Action_SceneList_Type__o *)v13, 0LL),
        (v10 = (System_String_o *)this->fields.servantOverDialog) == 0LL) )
  {
    sub_B2C434(v10, v11);
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
  __int64 v12; // x1

  if ( (byte_418597F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_SceneList_Type___ctor__, *(_QWORD *)&type);
    sub_B2C35C(&System_Action_SceneList_Type__TypeInfo, v5);
    sub_B2C35C(&Method_MasterMissionComponent_ServantOverDialogClose__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_3048/*"CLICK_CANCEL"*/, v8);
    byte_418597F = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v10 = (System_Action_ShopRootConstants_State__o *)sub_B2C42C(System_Action_SceneList_Type__TypeInfo);
  System_Action_ShopRootConstants_State____ctor(
    v10,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ServantOverDialogClose__,
    (const MethodInfo_24BA81C *)Method_System_Action_SceneList_Type___ctor__);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v10, 0LL);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0LL);
      return;
    }
LABEL_9:
    sub_B2C434(Instance, v12);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3048/*"CLICK_CANCEL"*/, 0LL);
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
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  v4 = missionListViewManager->m_Items[nowType];
  if ( !v4 )
LABEL_5:
    sub_B2C434(this, method);
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

  if ( (byte_4185982 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    byte_4185982 = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0LL);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_17;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              dailyTabObj,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (v6 = isEnable,
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, v6, 0LL),
        (dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn) == 0LL) )
  {
LABEL_17:
    sub_B2C434(dailyTabObj, isEnable);
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

  if ( (byte_4185966 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v3);
    byte_4185966 = 1;
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
                            (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v7, v8, VaildDailyMissionData, 0, this->fields.reDispAction, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_14;
  if ( !v9->max_length )
  {
LABEL_15:
    v11 = sub_B2C460(VaildDailyMissionData);
    sub_B2C400(v11, 0LL);
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
    sub_B2C434(VaildDailyMissionData, v5);
  MissionListViewManager__SetMode_24421264(
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

  if ( (byte_4185968 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v3);
    byte_4185968 = 1;
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
                            (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v7, v8, ValidExtraMissionData, 2, this->fields.reDispAction, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_14;
  if ( v9->max_length <= 2 )
  {
LABEL_15:
    v11 = sub_B2C460(ValidExtraMissionData);
    sub_B2C400(v11, 0LL);
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
    sub_B2C434(ValidExtraMissionData, v5);
  MissionListViewManager__SetMode_24421264(
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

  if ( (byte_4185969 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v3);
    byte_4185969 = 1;
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
                              (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v7, v8, VaildLimitedMissionData, 3, this->fields.reDispAction, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_14;
  if ( v9->max_length <= 3 )
  {
LABEL_15:
    v11 = sub_B2C460(VaildLimitedMissionData);
    sub_B2C400(v11, 0LL);
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
    sub_B2C434(VaildLimitedMissionData, v5);
  MissionListViewManager__SetMode_24421264(
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
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x0

  if ( (byte_4185964 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185964 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
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
      {
        v22 = sub_B2C460(Instance);
        sub_B2C400(v22, 0LL);
      }
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
          Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        ClearMasterMissionList,
                                        (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          3,
                                          v21);
            v13 += (int)Instance;
          }
          break;
        case 4:
          if ( !v11 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getExtraMissionList(v11, HIDWORD(v17->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
          {
            Instance = (DataManager_o *)MasterMissionComponent__GetMissionClearCount(
                                          (MasterMissionComponent_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          2,
                                          v19);
            v14 += (int)Instance;
          }
          break;
        case 2:
          if ( !v11 )
            goto LABEL_34;
          Instance = (DataManager_o *)EventMissionMaster__getWeeklyMasterMissionList(v11, HIDWORD(v17->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.datalist )
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
    sub_B2C434(Instance, v8);
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
        v24 = sub_B2C460(this);
        sub_B2C400(v24, 0LL);
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
        sub_B2C434(this, method);
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

  if ( (byte_4185967 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, method);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v3);
    byte_4185967 = 1;
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
                             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v7 )
    goto LABEL_14;
  MasterMissionListViewManager__CreateList(v7, v8, VaildWeeklyMissionData, 1, this->fields.reDispAction, 0LL);
  v9 = this->fields.missionListViewManager;
  if ( !v9 )
    goto LABEL_14;
  if ( v9->max_length <= 1 )
  {
LABEL_15:
    v11 = sub_B2C460(VaildWeeklyMissionData);
    sub_B2C400(v11, 0LL);
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
    sub_B2C434(VaildWeeklyMissionData, v5);
  MissionListViewManager__SetMode_24421264(
    v10,
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
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x0
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentCompleteMissionList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  MstMissionEntity_array *EnableMissions; // x23
  int max_length; // w8
  UserEventMissionMaster_o *v23; // x25
  unsigned int v24; // w28
  int32_t v25; // w20
  MstMissionEntity_o *v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  DataManager_o *v29; // x27
  int32_t CompleteMissionClearCount; // w26
  int32_t datalist; // w23
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  int32_t v33; // w22
  MasterMissionComponent_MasterMissionInfoItem_o *v34; // x25
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  struct UnityEngine_GameObject_o *cNoticeNumberPrefab; // x22
  UnityEngine_GameObject_o *v38; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  UIWidget_o *v40; // x22
  struct NoticeNumberComponent_o *v41; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v43; // x1
  __int64 v44; // x0

  if ( (byte_4185953 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v9);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v10);
    sub_B2C35C(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4185953 = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = &this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentCompleteMissionList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
  }
  else
  {
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v17;
    sub_B2C2F8(&this->fields.currentCompleteMissionList, v17);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_47;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_47;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v25 = 0;
  }
  else
  {
    v23 = (UserEventMissionMaster_o *)Instance;
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
        goto LABEL_48;
      v26 = EnableMissions->m_Items[v24];
      if ( !v26 )
        goto LABEL_47;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_47;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    MasterData_WarQuestSelectionMaster,
                                    v26->fields.id,
                                    0LL);
      if ( !Instance )
        goto LABEL_47;
      v29 = Instance;
      if ( Instance->fields.datalist )
      {
        CompleteMissionClearCount = MasterMissionComponent__GetCompleteMissionClearCount(
                                      (MasterMissionComponent_o *)Instance,
                                      (EventMissionEntity_array *)Instance,
                                      v27,
                                      v28);
        v25 += CompleteMissionClearCount;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v26, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_29;
    }
    if ( !v23 )
      goto LABEL_47;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v23, v26->fields.id, 0LL);
    datalist = (int32_t)v29->fields.datalist;
    if ( !datalist )
    {
LABEL_48:
      v44 = sub_B2C460(Instance);
      sub_B2C400(v44, 0LL);
    }
    lookup = v29->fields.lookup;
    if ( !lookup )
      goto LABEL_47;
    v33 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_47;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, HIDWORD(lookup->fields.entries), 0LL);
    Instance = (DataManager_o *)this->fields.completeMissionIcon;
    if ( !Instance )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    v34 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_B2C42C(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    MasterMissionComponent_MasterMissionInfoItem___ctor(v34, v26, datalist, CompleteMissionClearCount, v33, 0LL);
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
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
    v38 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)cNoticeNumberPrefab,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_31331952(v38, this->fields.completeMissionNoticeRoot, 0LL);
    if ( v38 )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v38,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
      sub_B2C2F8(&this->fields.mCompleteMissionNoticeNumber, Component_srcLineSprite);
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
    sub_B2C434(Instance, v19);
  }
LABEL_45:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_47;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v25, 0LL);
  MasterMissionComponent__InitCompleteMissionLb(this, v43);
}


void __fastcall MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UISprite_o *shopBtnSp; // x20

  if ( (byte_4185952 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_16988/*"btn_event_3"*/, v5);
    byte_4185952 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  this->fields.stonePrice = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0LL);
  shopBtnSp = this->fields.shopBtnSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_16988/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
}


bool __fastcall MasterMissionComponent__ShouldPlayedStoneButtonEffect(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  int32_t UserStoneFragmentNum; // w0
  const MethodInfo *v7; // x2
  int32_t ExchangeStoneCount; // w19

  if ( (byte_4185987 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4185987 = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(Master_WarQuestSelectionMaster, 0LL);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, UserStoneFragmentNum, v7);
  return ExchangeStoneCount >= StoneShopMaster__GetPayMultiTimePrice(0LL);
}


void __fastcall MasterMissionComponent__StopStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o **p_btnEffectPrefab; // x19
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4185989 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185989 = 1;
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
      sub_B2C434(0LL, v4);
    UnityEngine_GameObject__SetActive(*p_btnEffectPrefab, 0, 0LL);
    v6 = *p_btnEffectPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)v6, 0LL);
    *p_btnEffectPrefab = 0LL;
    sub_B2C2F8(p_btnEffectPrefab, 0LL);
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
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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
  MasterMissionComponent___c__DisplayClass202_0_o *v11; // x20
  System_String_o *stoneConvertLimit; // x0
  __int64 v13; // x1
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
  int32_t exchangeCount; // w20
  const MethodInfo *v25; // x1
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4185986 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&fragmentCount);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__, v8);
    sub_B2C35C(&MasterMissionComponent___c__DisplayClass202_0_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5835/*"Effect/Common"*/, v10);
    byte_4185986 = 1;
  }
  v26 = 0;
  v11 = (MasterMissionComponent___c__DisplayClass202_0_o *)sub_B2C42C(MasterMissionComponent___c__DisplayClass202_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass202_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_31;
  v11->fields.__4__this = this;
  sub_B2C2F8(&v11->fields, this);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v14);
  v11->fields.exchangeCount = ExchangeStoneCount;
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
          v20 = 0;
          goto LABEL_19;
        }
      }
    }
LABEL_31:
    sub_B2C434(stoneConvertLimit, v13);
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
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      (Il2CppObject *)v11,
      Method_MasterMissionComponent___c__DisplayClass202_0__UpdateStoneExchangeCount_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5835/*"Effect/Common"*/, v23, 1, 0LL);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v22);
    if ( this->fields.nowType == 1 )
    {
      exchangeCount = v11->fields.exchangeCount;
      if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
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

  if ( (byte_418598F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418598F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CloseMasterMission(Instance, 0LL);
  MasterMissionComponent__OpenCompleteMission(this, v5, v6);
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
  ErrorDialog_c *v11; // x8
  __int64 *v12; // x8

  if ( (byte_4185991 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, hasGetServant);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11745/*"SERVANT_OVER"*/, v6);
    sub_B2C35C(&StringLiteral_3048/*"CLICK_CANCEL"*/, v7);
    byte_4185991 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
    goto LABEL_28;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
    byte_4183C65 = 1;
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
    byte_4183C65 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v11 = Instance->fields.errorDialog->klass;
  if ( !v11 || (Instance = *(CommonUI_o **)&v11->_2.element_size) == 0LL )
LABEL_33:
    sub_B2C434(Instance, v9);
  ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0LL);
LABEL_28:
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_33;
  if ( this->fields.overflowType )
    v12 = &StringLiteral_11745/*"SERVANT_OVER"*/;
  else
    v12 = &StringLiteral_3048/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionComponent___Open_b__136_0(
        MasterMissionComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_418598E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_418598E = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_B2C434(NumberFormat, v7);
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
  MasterMissionComponent___c__DisplayClass188_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  System_Action_o *v11; // x20

  if ( (byte_4185990 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isPresentBoxOpen);
    sub_B2C35C(&Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__, v5);
    sub_B2C35C(&MasterMissionComponent___c__DisplayClass188_0_TypeInfo, v6);
    byte_4185990 = 1;
  }
  v7 = (MasterMissionComponent___c__DisplayClass188_0_o *)sub_B2C42C(MasterMissionComponent___c__DisplayClass188_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass188_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.__4__this = this,
        sub_B2C2F8(&v7->fields.__4__this, this),
        v7->fields.isPresentBoxOpen = isPresentBoxOpen,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_MasterMissionComponent___c__DisplayClass188_0__PresentBoxOver_b__1__,
          0LL),
        !presentBoxOverDialog) )
  {
    sub_B2C434(v8, v9);
  }
  PresentBoxOverDialog__Close_25190412(presentBoxOverDialog, v11, 0LL);
}


void __fastcall MasterMissionComponent___setRecieveModifyItem_b__192_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4185992 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5481/*"END_DISP"*/, method);
    byte_4185992 = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v3);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481/*"END_DISP"*/, 0LL);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x21
  struct MstMissionMaster_o *mstMissionMst; // x8
  _BOOL4 v16; // w22
  _BOOL4 v17; // w23
  struct System_String_o **p_titleTxt; // x21
  void *v19; // x1
  void *v20; // x1
  System_String_o *v21; // x0
  __int64 *v22; // x8
  System_String_o *v23; // x0
  struct System_String_o *v24; // x0

  if ( (byte_418595B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_8850/*"MST_REMISSON_MSG"*/, v6);
    sub_B2C35C(&StringLiteral_8848/*"MST_REDISP_MSG"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    sub_B2C35C(&StringLiteral_8851/*"MST_REMISSON_TITLE_TXT"*/, v9);
    sub_B2C35C(&StringLiteral_8849/*"MST_REDISP_TITLE_TXT"*/, v10);
    byte_418595B = 1;
  }
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !Instance )
    goto LABEL_29;
  v13 = (MstMissionDisplayInfoMaster_o *)Instance;
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
    goto LABEL_29;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v13->fields.list;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  mstMissionMst = this->fields.mstMissionMst;
  if ( !mstMissionMst )
    goto LABEL_29;
  this->fields.currentType = *(&mstMissionMst->fields.revision + 1);
  if ( !Instance || !Instance->fields.datalist || MstMissionMaster__IsOpenNow(mstMissionMst, 0LL) )
  {
    LOBYTE(v16) = 0;
    if ( !list )
      goto LABEL_16;
    goto LABEL_11;
  }
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
LABEL_29:
    sub_B2C434(Instance, v12);
  v16 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0LL);
  if ( !list )
    goto LABEL_16;
LABEL_11:
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1
    && !MstMissionDisplayInfoMaster__IsOpenNow(v13, 0LL) )
  {
    v17 = !MstMissionDisplayInfoMaster__IsBefOpenTime(v13, 0LL);
    goto LABEL_17;
  }
LABEL_16:
  LOBYTE(v17) = 0;
LABEL_17:
  p_titleTxt = &this->fields.titleTxt;
  v19 = StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.titleTxt, v19);
  v20 = StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.msgTxt, v20);
  if ( v16 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8851/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
    *p_titleTxt = v21;
    sub_B2C2F8(&this->fields.titleTxt, v21);
    v22 = &StringLiteral_8850/*"MST_REMISSON_MSG"*/;
LABEL_27:
    v24 = LocalizationManager__Get((System_String_o *)*v22, 0LL);
    this->fields.msgTxt = v24;
    sub_B2C2F8(&this->fields.msgTxt, v24);
    goto LABEL_28;
  }
  if ( v17 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8849/*"MST_REDISP_TITLE_TXT"*/, 0LL);
    *p_titleTxt = v23;
    sub_B2C2F8(&this->fields.titleTxt, v23);
    v22 = &StringLiteral_8848/*"MST_REDISP_MSG"*/;
    goto LABEL_27;
  }
LABEL_28:
  this->fields.isNotNext = v16 || v17;
}


void __fastcall MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_B2C434(0LL, method);
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
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v25; // w26
  Il2CppClass **v26; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  MstMissionDisplayInfoEntity_o *v40; // x0
  __int64 v41; // x1
  struct MstMissionDisplayInfoEntity_o *v42; // x24
  __int64 v43; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v45; // x1
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v48; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x10
  int v58; // w9
  int32_t missionTargetId; // w22
  __int64 v60; // x21
  __int64 v61; // x9
  __int64 v62; // x9
  __int64 v64; // x0

  if ( (byte_418595D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B2C35C(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v17);
    sub_B2C35C(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418595D = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_77;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_77;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B2C2F8(&this->fields.currentMissionDispInfoEnt, 0LL);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_77;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_77;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        v64 = sub_B2C460(currentEventIdList);
        sub_B2C400(v64, 0LL);
      }
      v26 = &mstMissionList->obj.klass + (int)v25;
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)v26[4];
      if ( !v27 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v26[4], 0LL);
      if ( (currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (__int64)EventMissionMaster__getDailyMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        v27->fields.missionConditionDetailId,
                                        0LL);
        if ( !currentEventIdList )
          break;
        method = (const MethodInfo *)currentEventIdList;
        if ( *(_QWORD *)(currentEventIdList + 24) )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
            (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = (__int64)this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)currentEventIdList,
            v27->fields.missionConditionDetailId,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
            v27,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_20;
    }
LABEL_77:
    sub_B2C434(currentEventIdList, method);
  }
LABEL_20:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_77;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_1733C08 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_77;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v36 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v38 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v39 = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_34:
      v39 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
    }
    v40 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                             Enumerator,
                                             *(_QWORD *)(v39 + 8));
    v42 = v40;
    if ( !v40 )
      goto LABEL_79;
    v43 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v40->klass->_2.bitflags2 + 1) < (unsigned int)v43
      || (MstMissionDisplayInfoEntity_c *)v40->klass->_2.typeHierarchy[v43 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v40 = (MstMissionDisplayInfoEntity_o *)sub_B2C728(v40);
LABEL_79:
      sub_B2C434(v40, v41);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v40, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v42->fields.guideImageId;
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
        sub_B2C434(isOpenNow, v45);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v42->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v48 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v48 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v48->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v42->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B2C2F8(&this->fields.voiceNameList, talkIds);
      id = v42->fields.id;
      this->fields.currentMissionDispInfoEnt = v42;
      this->fields.currentDispId = id;
      sub_B2C2F8(&this->fields.currentMissionDispInfoEnt, v42);
    }
  }
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_56:
    v54 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v35);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                         Enumerator,
                         *(_QWORD *)(v54 + 8));
  if ( v22 )
  {
    size = v22->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v22->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      items = v22->fields._items;
      v57 = items->m_Items[0];
      if ( !v57 )
        goto LABEL_77;
      v58 = v22->fields._size;
      missionTargetId = v57->fields.missionTargetId;
      if ( v58 >= 1 )
      {
        v60 = 4LL;
        do
        {
          if ( v58 <= (unsigned int)(v60 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v61 = *((_QWORD *)&items->obj.klass + v60);
          if ( !v61 )
            goto LABEL_77;
          if ( missionTargetId > *(_DWORD *)(v61 + 16) )
          {
            if ( v22->fields._size <= (unsigned int)(v60 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v62 = *((_QWORD *)&items->obj.klass + v60);
            if ( !v62 )
              goto LABEL_77;
            missionTargetId = *(_DWORD *)(v62 + 16);
          }
          v58 = v22->fields._size;
        }
        while ( (int)++v60 - 4 < v58 );
      }
      this->fields.currentMissionId = missionTargetId;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v22;
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
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  struct MstMissionEntity_array *mstMissionList; // x26
  int max_length; // w8
  unsigned int v26; // w27
  Il2CppClass **v27; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x24
  int32_t missionConditionDetailId; // w1
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  MstMissionDisplayInfoEntity_o *v42; // x0
  __int64 v43; // x1
  struct MstMissionDisplayInfoEntity_o *v44; // x25
  __int64 v45; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v47; // x1
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v50; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
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

  if ( (byte_4185960 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B2C35C(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v17);
    sub_B2C35C(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4185960 = 1;
  }
  currentEventIdList = this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    currentEventIdList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (System_Collections_Generic_List_int__o *)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B2C2F8(&this->fields.currentMissionDispInfoEnt, 0LL);
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
      {
        v66 = sub_B2C460(currentEventIdList);
        sub_B2C400(v66, 0LL);
      }
      v27 = &mstMissionList->obj.klass + (int)v26;
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)v27[4];
      if ( !v28 )
        break;
      currentEventIdList = (System_Collections_Generic_List_int__o *)MstMissionEntity__isOpenNow(
                                                                       (MstMissionEntity_o *)v27[4],
                                                                       0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v28->fields.missionConditionDetailId;
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
            if ( !v23 )
              break;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
              (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            currentEventIdList = this->fields.currentEventIdList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_int___Add(
              currentEventIdList,
              v28->fields.missionConditionDetailId,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            currentEventIdList = (System_Collections_Generic_List_int__o *)this->fields.currentMstMissionEntList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
              v28,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
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
        if ( !v22 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
          (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B2C434(currentEventIdList, method);
  }
LABEL_22:
  currentEventIdList = (System_Collections_Generic_List_int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  currentEventIdList = (System_Collections_Generic_List_int__o *)DataManager__getEntityList_QuestReleaseMaster_(
                                                                   (DataManager_o *)currentEventIdList,
                                                                   (const MethodInfo_1733C08 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_36:
      v41 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                             Enumerator,
                                             *(_QWORD *)(v41 + 8));
    v44 = v42;
    if ( !v42 )
      goto LABEL_84;
    v45 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v45
      || (MstMissionDisplayInfoEntity_c *)v42->klass->_2.typeHierarchy[v45 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v42 = (MstMissionDisplayInfoEntity_o *)sub_B2C728(v42);
LABEL_84:
      sub_B2C434(v42, v43);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v42, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v44->fields.guideImageId;
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
        sub_B2C434(isOpenNow, v47);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v44->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v50 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v50 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v50->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v44->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B2C2F8(&this->fields.voiceNameList, talkIds);
      id = v44->fields.id;
      this->fields.currentMissionDispInfoEnt = v44;
      this->fields.currentDispId = id;
      sub_B2C2F8(&this->fields.currentMissionDispInfoEnt, v44);
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
    v56 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  currentEventIdList = (System_Collections_Generic_List_int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v56 + 8));
  if ( v23 && (v57 = v23->fields._size, v57 >= 1) )
  {
    this->fields.totalMissionNum = v57;
    if ( !v23->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    items = v23->fields._items;
    v59 = items->m_Items[0];
    if ( !v59 )
      goto LABEL_82;
    size = v23->fields._size;
    if ( size >= 1 )
    {
      missionTargetId = v59->fields.missionTargetId;
      v62 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v62 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v63 = *((_QWORD *)&items->obj.klass + v62);
        if ( !v63 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v63 + 16) )
        {
          if ( v23->fields._size <= (unsigned int)(v62 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v64 = *((_QWORD *)&items->obj.klass + v62);
          if ( !v64 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v64 + 16);
        }
        size = v23->fields._size;
      }
      while ( (int)++v62 - 4 < size );
    }
    this->fields.currentMissionId = 0;
    if ( !v22 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v22 )
      goto LABEL_82;
    if ( v22->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v22;
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
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  struct MstMissionEntity_array *mstMissionList; // x27
  int max_length; // w8
  unsigned int v26; // w28
  Il2CppClass **v27; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x24
  int32_t missionConditionDetailId; // w1
  System_Collections_Generic_IEnumerable_T__o *v30; // x25
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  MstMissionDisplayInfoEntity_o *v43; // x0
  __int64 v44; // x1
  struct MstMissionDisplayInfoEntity_o *v45; // x25
  __int64 v46; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v48; // x1
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v51; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  int32_t v58; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x10
  int size; // w9
  int32_t missionTargetId; // w23
  __int64 v63; // x22
  __int64 v64; // x9
  __int64 v65; // x9
  __int64 v67; // x0

  if ( (byte_418595E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B2C35C(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v17);
    sub_B2C35C(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418595E = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_82;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B2C2F8(&this->fields.currentMissionDispInfoEnt, 0LL);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_82;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
      {
        v67 = sub_B2C460(currentEventIdList);
        sub_B2C400(v67, 0LL);
      }
      v27 = &mstMissionList->obj.klass + (int)v26;
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)v27[4];
      if ( !v28 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v27[4], 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      missionConditionDetailId = v28->fields.missionConditionDetailId;
      if ( (currentEventIdList & 1) != 0 )
      {
        currentEventIdList = (__int64)EventMissionMaster__getWeeklyMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        missionConditionDetailId,
                                        0LL);
        if ( !currentEventIdList )
          break;
        v30 = (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList;
        if ( *(_QWORD *)(currentEventIdList + 24) )
        {
          currentEventIdList = (__int64)this->fields.currentEventIdList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)currentEventIdList,
            v28->fields.missionConditionDetailId,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !v23 )
            break;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
            v30,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
          if ( !currentEventIdList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
            v28,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
        }
      }
      else
      {
        currentEventIdList = (__int64)EventMissionMaster__getClearMasterMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        missionConditionDetailId,
                                        2,
                                        0LL);
        if ( !v22 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
          (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_22;
    }
LABEL_82:
    sub_B2C434(currentEventIdList, method);
  }
LABEL_22:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_82;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_1733C08 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_36:
      v42 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v38);
    }
    v43 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                             Enumerator,
                                             *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( !v43 )
      goto LABEL_84;
    v46 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v43->klass->_2.bitflags2 + 1) < (unsigned int)v46
      || (MstMissionDisplayInfoEntity_c *)v43->klass->_2.typeHierarchy[v46 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      v43 = (MstMissionDisplayInfoEntity_o *)sub_B2C728(v43);
LABEL_84:
      sub_B2C434(v43, v44);
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v43, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v45->fields.guideImageId;
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
        sub_B2C434(isOpenNow, v48);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v45->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v51 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v51 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v51->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v45->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B2C2F8(&this->fields.voiceNameList, talkIds);
      id = v45->fields.id;
      this->fields.currentMissionDispInfoEnt = v45;
      this->fields.currentDispId = id;
      sub_B2C2F8(&this->fields.currentMissionDispInfoEnt, v45);
    }
  }
  v54 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_58;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_58:
    v57 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v38);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(
                         Enumerator,
                         *(_QWORD *)(v57 + 8));
  if ( v23 && (v58 = v23->fields._size, v58 >= 1) )
  {
    this->fields.totalMissionNum = v58;
    if ( !v23->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    items = v23->fields._items;
    v60 = items->m_Items[0];
    if ( !v60 )
      goto LABEL_82;
    size = v23->fields._size;
    missionTargetId = v60->fields.missionTargetId;
    if ( size >= 1 )
    {
      v63 = 4LL;
      do
      {
        if ( size <= (unsigned int)(v63 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v64 = *((_QWORD *)&items->obj.klass + v63);
        if ( !v64 )
          goto LABEL_82;
        if ( missionTargetId > *(_DWORD *)(v64 + 16) )
        {
          if ( v23->fields._size <= (unsigned int)(v63 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v65 = *((_QWORD *)&items->obj.klass + v63);
          if ( !v65 )
            goto LABEL_82;
          missionTargetId = *(_DWORD *)(v65 + 16);
        }
        size = v23->fields._size;
      }
      while ( (int)++v63 - 4 < size );
    }
    this->fields.currentMissionId = missionTargetId;
    if ( !v22 )
      goto LABEL_82;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
      (System_Collections_Generic_IEnumerable_T__o *)v23,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v22 )
      goto LABEL_82;
    if ( v22->fields._size <= 0 )
      return 0LL;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v22;
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
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v25; // w26
  Il2CppClass **v26; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  MstMissionDisplayInfoEntity_o *v40; // x0
  __int64 v41; // x1
  struct MstMissionDisplayInfoEntity_o *v42; // x24
  __int64 v43; // x9
  MasterMissionComponent_c *isOpenNow; // x0
  __int64 v45; // x1
  int32_t guideImageId; // w8
  int32_t guideLimitCount; // w8
  MasterMissionComponent_c *v48; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  int32_t size; // w8
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x10
  int v58; // w9
  int32_t missionTargetId; // w22
  __int64 v60; // x21
  __int64 v61; // x9
  __int64 v62; // x9
  __int64 v64; // x0

  if ( (byte_418595F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B2C35C(&Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v15);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v17);
    sub_B2C35C(&MstMissionDisplayInfoEntity_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418595F = 1;
  }
  currentEventIdList = (__int64)this->fields.currentEventIdList;
  this->fields.currentIdx = 0;
  this->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_78;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)currentEventIdList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
  if ( !currentEventIdList )
    goto LABEL_78;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)currentEventIdList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
  this->fields.currentMissionDispInfoEnt = 0LL;
  sub_B2C2F8(&this->fields.currentMissionDispInfoEnt, 0LL);
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_78;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)currentEventIdList,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = this->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_78;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        v64 = sub_B2C460(currentEventIdList);
        sub_B2C400(v64, 0LL);
      }
      v26 = &mstMissionList->obj.klass + (int)v25;
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)v26[4];
      if ( !v27 )
        break;
      currentEventIdList = MstMissionEntity__isOpenNow((MstMissionEntity_o *)v26[4], 0LL);
      if ( (currentEventIdList & 1) != 0 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        currentEventIdList = (__int64)EventMissionMaster__getExtraMissionList(
                                        MasterData_WarQuestSelectionMaster,
                                        v27->fields.missionConditionDetailId,
                                        0LL);
        if ( currentEventIdList )
        {
          method = (const MethodInfo *)currentEventIdList;
          if ( *(int *)(currentEventIdList + 24) >= 1 )
          {
            if ( !v22 )
              break;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
              (System_Collections_Generic_IEnumerable_T__o *)currentEventIdList,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            currentEventIdList = (__int64)this->fields.currentEventIdList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)currentEventIdList,
              v27->fields.missionConditionDetailId,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            currentEventIdList = (__int64)this->fields.currentMstMissionEntList;
            if ( !currentEventIdList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentEventIdList,
              v27,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MstMissionEntity__Add__);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_20;
    }
LABEL_78:
    sub_B2C434(currentEventIdList, method);
  }
LABEL_20:
  currentEventIdList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !currentEventIdList )
    goto LABEL_78;
  currentEventIdList = (__int64)DataManager__getEntityList_QuestReleaseMaster_(
                                  (DataManager_o *)currentEventIdList,
                                  (const MethodInfo_1733C08 *)Method_DataManager_getEntityList_MstMissionDisplayInfoMaster___);
  if ( !currentEventIdList )
    goto LABEL_78;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)currentEventIdList,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v28);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v36 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v38 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v39 = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_34:
      v39 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
    }
    v40 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                             Enumerator,
                                             *(_QWORD *)(v39 + 8));
    v42 = v40;
    if ( !v40 )
      sub_B2C434(0LL, v41);
    v43 = *(&MstMissionDisplayInfoEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v40->klass->_2.bitflags2 + 1) < (unsigned int)v43
      || (MstMissionDisplayInfoEntity_c *)v40->klass->_2.typeHierarchy[v43 - 1] != MstMissionDisplayInfoEntity_TypeInfo )
    {
      currentEventIdList = sub_B2C728(v40);
      goto LABEL_78;
    }
    isOpenNow = (MasterMissionComponent_c *)MstMissionDisplayInfoEntity__isOpenNow(v40, 0LL);
    if ( ((unsigned __int8)isOpenNow & 1) != 0 )
    {
      guideImageId = v42->fields.guideImageId;
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
        sub_B2C434(isOpenNow, v45);
      this->fields.currentEventSvtId = guideImageId;
      guideLimitCount = v42->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v48 = MasterMissionComponent_TypeInfo;
        if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
          v48 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v48->static_fields->DEFAULT_LIMITCNT;
      }
      this->fields.currentEventSvtLimitCnt = guideLimitCount;
      talkIds = v42->fields.talkIds;
      this->fields.voiceNameList = talkIds;
      sub_B2C2F8(&this->fields.voiceNameList, talkIds);
      id = v42->fields.id;
      this->fields.currentMissionDispInfoEnt = v42;
      this->fields.currentDispId = id;
      sub_B2C2F8(&this->fields.currentMissionDispInfoEnt, v42);
    }
  }
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_56:
    v54 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v35);
  }
  currentEventIdList = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                         Enumerator,
                         *(_QWORD *)(v54 + 8));
  if ( v22 )
  {
    size = v22->fields._size;
    if ( size < 1 )
    {
      return 0LL;
    }
    else
    {
      this->fields.totalMissionNum = size;
      if ( !v22->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      items = v22->fields._items;
      v57 = items->m_Items[0];
      if ( !v57 )
        goto LABEL_78;
      v58 = v22->fields._size;
      if ( v58 >= 1 )
      {
        missionTargetId = v57->fields.missionTargetId;
        v60 = 4LL;
        do
        {
          if ( v58 <= (unsigned int)(v60 - 4) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v61 = *((_QWORD *)&items->obj.klass + v60);
          if ( !v61 )
            goto LABEL_78;
          if ( missionTargetId > *(_DWORD *)(v61 + 16) )
          {
            if ( v22->fields._size <= (unsigned int)(v60 - 4) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v62 = *((_QWORD *)&items->obj.klass + v60);
            if ( !v62 )
              goto LABEL_78;
            missionTargetId = *(_DWORD *)(v62 + 16);
          }
          v58 = v22->fields._size;
        }
        while ( (int)++v60 - 4 < v58 );
      }
      this->fields.currentMissionId = 0;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v22;
}


int32_t __fastcall MasterMissionComponent__get_StonePrice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t result; // w0
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1

  if ( (byte_418594E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_418594E = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B2C434(0LL, v6);
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
    sub_B2C434(this, method);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= missionListViewManager->max_length )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  MasterMissionComponent_o *v13; // x20
  struct UnityEngine_GameObject_o *titlePrefab; // x8
  struct UnityEngine_GameObject_o *v15; // x8
  struct UnityEngine_GameObject_o *v16; // x8
  struct System_Int32_array *v17; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct UnityEngine_GameObject_o *v20; // x10
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4185979 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___, result);
    sub_B2C35C(&JsonManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v6);
    sub_B2C35C(&StringLiteral_11077/*"REQUEST_NG"*/, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v9);
    this = (MasterMissionComponent_o *)sub_B2C35C(&StringLiteral_15870/*"]"*/, v10);
    byte_4185979 = 1;
  }
  if ( !result )
    goto LABEL_25;
  if ( !System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    v12 = (Il2CppObject *)System_String__Concat_44307816(
                            (System_String_o *)StringLiteral_15634/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_15870/*"]"*/,
                            0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                         v12,
                                         (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
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
      v17 = *(struct System_Int32_array **)&v16->fields.m_CachedPtr;
      v4->fields.receiveMissionIds = v17;
      sub_B2C2F8(&v4->fields.receiveMissionIds, v17);
      missionListViewManager = v4->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_25;
      nowType = v4->fields.nowType;
      if ( (unsigned int)nowType >= missionListViewManager->max_length || !LODWORD(v13->fields.myFsm) )
      {
LABEL_26:
        v21 = sub_B2C460(this);
        sub_B2C400(v21, 0LL);
      }
      v20 = v13->fields.titlePrefab;
      if ( v20 )
      {
        this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
        if ( this )
        {
          MasterMissionListViewManager__SetResultData(
            (MasterMissionListViewManager_o *)this,
            (GetSvts_array *)v20[1].monitor,
            *(GetCommandCodes_array **)&v20[1].fields.m_CachedPtr,
            0LL);
          this = (MasterMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v11 = &StringLiteral_11079/*"REQUEST_OK"*/;
            goto LABEL_24;
          }
        }
      }
    }
LABEL_25:
    sub_B2C434(this, result);
  }
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_25;
  v11 = &StringLiteral_11077/*"REQUEST_NG"*/;
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
  bool _28617756; // w0
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_418596D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, voiceIDs);
    sub_B2C35C(&Method_MasterMissionComponent_setNormalFace__, v5);
    sub_B2C35C(&TutorialFlag_TypeInfo, v6);
    byte_418596D = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28617756 = TutorialFlag__Get_28617756(126, 0LL);
  if ( voiceIDs && !_28617756 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
    if ( !svtVoiceCtr )
      sub_B2C434(v11, v12);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v10, 0LL);
  }
}


void __fastcall MasterMissionComponent__playEventMissionSvtVoice_21085348(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MasterMissionComponent___c__DisplayClass171_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  bool _28617756; // w0
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v16; // x20

  if ( (byte_418596E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, voiceIDs);
    sub_B2C35C(&TutorialFlag_TypeInfo, v7);
    sub_B2C35C(&Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__, v8);
    sub_B2C35C(&MasterMissionComponent___c__DisplayClass171_0_TypeInfo, v9);
    byte_418596E = 1;
  }
  v10 = (MasterMissionComponent___c__DisplayClass171_0_o *)sub_B2C42C(MasterMissionComponent___c__DisplayClass171_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass171_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.action = action;
  sub_B2C2F8(&v10->fields.action, action);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28617756 = TutorialFlag__Get_28617756(126, 0LL);
  if ( voiceIDs && !_28617756 )
  {
    this->fields.isVoicePlaying = 1;
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v10,
      Method_MasterMissionComponent___c__DisplayClass171_0__playEventMissionSvtVoice_b__0__,
      0LL);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v16, 0LL);
      return;
    }
LABEL_12:
    sub_B2C434(v11, v12);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x8
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0
  EventSvtControl_o *svtVoiceCtr; // x20
  System_Action_o *v17; // x21

  if ( (byte_418596C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v5);
    sub_B2C35C(&Method_MasterMissionComponent_setNormalFace__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418596C = 1;
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
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform
        || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v13, 0LL),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0LL
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0LL )
      {
LABEL_19:
        sub_B2C434(voicePlayEffect, v10);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0LL);
    }
  }
  this->fields.isVoicePlaying = 1;
  svtVoiceCtr = this->fields.svtVoiceCtr;
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0LL);
  if ( !svtVoiceCtr )
    goto LABEL_19;
  EventSvtControl__playVoice(svtVoiceCtr, v17, 0LL);
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
  TerminalSceneComponent_c *v18; // x0
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  CommonUI_o *v21; // x21
  MasterMissionComponent___c_c *v22; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__150_0; // x22
  Il2CppObject *v25; // x23
  struct MasterMissionComponent___c_StaticFields *v26; // x0
  struct MstMissionDisplayInfoEntity_o *currentMissionDispInfoEnt; // x8
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x24
  __int64 size; // x21
  int64_t v30; // x20
  __int64 v31; // x22
  unsigned __int64 v32; // x23
  struct System_Collections_Generic_List_MstMissionEntity__o *v33; // x24
  struct System_Collections_Generic_List_MstMissionEntity__o *v34; // x24
  __int64 v35; // x8
  int64_t v36; // x8
  __int64 v37; // x8
  int v38; // w21
  struct System_String_o *v39; // x0
  struct System_String_o *v40; // x0
  struct MstMissionDisplayInfoEntity_o *v41; // x8
  int v42; // w8
  __int64 *v43; // x8
  struct System_String_o *v44; // x0
  __int64 *v45; // x8
  struct System_String_o *v46; // x0
  bool v47; // w9

  if ( (byte_418595C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v9);
    sub_B2C35C(&Method_MasterMissionComponent___c__reDispMissionList_b__150_0__, v10);
    sub_B2C35C(&MasterMissionComponent___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_8850/*"MST_REMISSON_MSG"*/, v12);
    sub_B2C35C(&StringLiteral_8848/*"MST_REDISP_MSG"*/, v13);
    sub_B2C35C(&StringLiteral_8851/*"MST_REMISSON_TITLE_TXT"*/, v14);
    sub_B2C35C(&StringLiteral_8849/*"MST_REDISP_TITLE_TXT"*/, v15);
    byte_418595C = 1;
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
    v30 = Time;
    if ( (int)size < 1 )
    {
LABEL_51:
      v38 = 0;
    }
    else
    {
      v31 = 4LL;
      while ( 1 )
      {
        v32 = v31 - 4;
        if ( v31 - 4 >= (unsigned __int64)(unsigned int)currentMstMissionEntList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( *((_QWORD *)&currentMstMissionEntList->fields._items->obj.klass + v31) )
        {
          v33 = this->fields.currentMstMissionEntList;
          if ( !v33 )
            goto LABEL_82;
          if ( v32 >= (unsigned int)v33->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          Time = *((_QWORD *)&v33->fields._items->obj.klass + v31);
          if ( !Time )
            goto LABEL_82;
          Time = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0LL);
          v34 = this->fields.currentMstMissionEntList;
          if ( (_DWORD)Time == 5 )
          {
            if ( !v34 )
              goto LABEL_82;
            if ( v32 >= (unsigned int)v34->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v35 = *((_QWORD *)&v34->fields._items->obj.klass + v31);
            if ( !v35 )
              goto LABEL_82;
            v36 = *(_QWORD *)(v35 + 40);
          }
          else
          {
            if ( !v34 )
              goto LABEL_82;
            if ( v32 >= (unsigned int)v34->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v37 = *((_QWORD *)&v34->fields._items->obj.klass + v31);
            if ( !v37 )
              goto LABEL_82;
            v36 = *(_QWORD *)(v37 + 32);
          }
          if ( v30 >= v36 )
            break;
        }
        if ( v31 - 3 >= size )
          goto LABEL_51;
        currentMstMissionEntList = this->fields.currentMstMissionEntList;
        ++v31;
        if ( !currentMstMissionEntList )
          goto LABEL_82;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_8851/*"MST_REMISSON_TITLE_TXT"*/, 0LL);
      this->fields.titleTxt = v39;
      sub_B2C2F8(&this->fields.titleTxt, v39);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8850/*"MST_REMISSON_MSG"*/, 0LL);
      this->fields.msgTxt = v40;
      sub_B2C2F8(&this->fields.msgTxt, v40);
      v38 = 1;
    }
    v41 = this->fields.currentMissionDispInfoEnt;
    if ( !v41 )
      goto LABEL_82;
    if ( v30 >= v41->fields.endedAt )
    {
      if ( (v38 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v43 = &StringLiteral_8851/*"MST_REMISSON_TITLE_TXT"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v43 = &StringLiteral_8849/*"MST_REDISP_TITLE_TXT"*/;
      }
      v44 = LocalizationManager__Get((System_String_o *)*v43, 0LL);
      this->fields.titleTxt = v44;
      sub_B2C2F8(&this->fields.titleTxt, v44);
      if ( (v38 & 1) != 0 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v45 = &StringLiteral_8850/*"MST_REMISSON_MSG"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v45 = &StringLiteral_8848/*"MST_REDISP_MSG"*/;
      }
      v46 = LocalizationManager__Get((System_String_o *)*v45, 0LL);
      this->fields.msgTxt = v46;
      sub_B2C2F8(&this->fields.msgTxt, v46);
      v42 = 1;
    }
    else
    {
      v42 = 0;
    }
    v47 = (v42 | v38) != 0;
    LODWORD(currentMissionDispInfoEnt) = this->fields.isNotNext;
    if ( v47 )
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
      v18 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v18 = TerminalSceneComponent_TypeInfo;
      }
      UnityEngine_PlayerPrefs__DeleteKey(v18->static_fields->MASTER_MISSION_RESET_KEY, 0LL);
      Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      titleTxt = this->fields.titleTxt;
      msgTxt = this->fields.msgTxt;
      v21 = (CommonUI_o *)Time;
      v22 = MasterMissionComponent___c_TypeInfo;
      if ( (BYTE3(MasterMissionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterMissionComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo);
        v22 = MasterMissionComponent___c_TypeInfo;
      }
      static_fields = v22->static_fields;
      _9__150_0 = static_fields->__9__150_0;
      if ( !_9__150_0 )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
        }
        v25 = (Il2CppObject *)static_fields->__9;
        _9__150_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__150_0, v25, Method_MasterMissionComponent___c__reDispMissionList_b__150_0__, 0LL);
        v26 = MasterMissionComponent___c_TypeInfo->static_fields;
        v26->__9__150_0 = _9__150_0;
        sub_B2C2F8(&v26->__9__150_0, _9__150_0);
      }
      if ( v21 )
      {
        CommonUI__OpenNotificationDialog(v21, titleTxt, msgTxt, _9__150_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
        return;
      }
LABEL_82:
      sub_B2C434(Time, v17);
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
  struct StandFigureBack_o *standFigureBack; // x8
  struct UnityEngine_GameObject_o *standFigureCollectList; // x1
  const MethodInfo *v20; // x1

  v2 = this;
  if ( (byte_418596B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, method);
    this = (MasterMissionComponent_o *)sub_B2C35C(
                                         &Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__,
                                         v3);
    byte_418596B = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v8 = currentVoiceDataList->fields._items->m_Items[currentIdx];
    if ( v8 )
    {
      v9 = v2->fields.currentVoiceDataList;
      if ( v9 )
      {
        v10 = v2->fields.currentIdx;
        DataListRand = v8->fields.DataListRand;
        if ( v9->fields._size <= (unsigned int)v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v12 = v9->fields._items->m_Items[v10];
        if ( v12 )
        {
          v13 = v2->fields.currentVoiceDataList;
          if ( v13 )
          {
            v14 = v2->fields.currentIdx;
            DataListMission = v12->fields.DataListMission;
            if ( v13->fields._size <= (unsigned int)v14 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
                    sub_B2C2F8(&this->fields.eventMissionInfo, standFigureCollectList);
                    MasterMissionComponent__playSvtVoice(v2, v20);
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
    sub_B2C434(this, method);
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
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x21
  ServantVoiceMaster_o *v23; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v29; // x22
  struct System_String_o *VoiceAssetName; // x21
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  struct System_String_array *voiceNameList; // x23
  __int64 v33; // x8
  unsigned __int64 v34; // x24
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  MasterMissionComponent_VoiceData_o *v39; // x22
  int32_t v40; // w8
  Il2CppObject *current; // x21
  WebViewManager_o *v42; // x0
  __int64 v43; // x1
  SoundManager_o *v44; // x20
  System_String_o *klass; // x21
  System_Action_o *v46; // x22
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+0h] [xbp-60h] BYREF
  int32_t voicePrefix[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4185962 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__, v13);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo, v15);
    sub_B2C35C(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v18);
    sub_B2C35C(&MasterMissionComponent_VoiceData_TypeInfo, v19);
    byte_4185962 = 1;
  }
  *(_QWORD *)voicePrefix = 0LL;
  memset(&v50, 0, sizeof(v50));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v23 = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v24;
  sub_B2C2F8(&this->fields.currentVoiceDataList, v24);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v25;
  sub_B2C2F8(&this->fields.voiceListRand, v25);
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
  if ( !v23 )
    goto LABEL_31;
  Entity = ServantVoiceMaster__GetEntity(v23, voicePrefix[1], voicePrefix[0], 8, 0LL);
  if ( !Entity )
    goto LABEL_19;
  v29 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0LL);
  this->fields.lastAssetName = VoiceAssetName;
  sub_B2C2F8(&this->fields.lastAssetName, VoiceAssetName);
  voiceNameList = this->fields.voiceNameList;
  if ( voiceNameList )
  {
    v33 = *(_QWORD *)&voiceNameList->max_length;
    if ( v33 )
    {
      if ( (int)v33 >= 1 )
      {
        v34 = 0LL;
        do
        {
          if ( v34 >= (unsigned int)v33 )
          {
            v49 = sub_B2C460(MstMissionVoiceListByName);
            sub_B2C400(v49, 0LL);
          }
          MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                        v29,
                                        voiceNameList->m_Items[v34],
                                        0LL);
          if ( MstMissionVoiceListByName )
          {
            v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)MstMissionVoiceListByName;
            Instance = *p_voiceListRand;
            if ( !*p_voiceListRand )
              goto LABEL_31;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
              v21,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
          LODWORD(v33) = voiceNameList->max_length;
          ++v34;
        }
        while ( (__int64)v34 < (int)v33 );
      }
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v29, 0LL);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_B2C2F8(&this->fields.voiceListMission, MasterMissionActionVoiceList);
  currentVoiceDataList = this->fields.currentVoiceDataList;
  voiceListRand = this->fields.voiceListRand;
  voiceListMission = this->fields.voiceListMission;
  v39 = (MasterMissionComponent_VoiceData_o *)sub_B2C42C(MasterMissionComponent_VoiceData_TypeInfo);
  MasterMissionComponent_VoiceData___ctor(v39, VoiceAssetName, voiceListRand, voiceListMission, 0LL);
  if ( !currentVoiceDataList )
LABEL_31:
    sub_B2C434(Instance, v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentVoiceDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__);
LABEL_19:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_31;
  v40 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v40;
  if ( v40 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, (const MethodInfo *)v21);
  }
  else
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v50,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v50,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v50.fields.current;
      v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_B2C434(v42, v43);
      v44 = (SoundManager_o *)v42;
      klass = (System_String_o *)current[1].klass;
      v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v46, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0LL);
      if ( !v44 )
        sub_B2C434(v47, v48);
      SoundManager__LoadAudioAssetStorage(v44, klass, v46, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v50,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
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
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x24
  signed __int64 size; // x21
  int32_t compMissionNum; // w22
  UserEventMissionMaster_o *v15; // x20
  unsigned __int64 v16; // x23
  System_String_o *v17; // x20
  UILabel_o *eventMissionTxt2; // x21
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  UILabel_o *v21; // x19
  UILabel_o *eventMissionTxt; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4185961 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_8638/*"MASTER_MISSION_COMPLETE_NUM"*/, v9);
    byte_4185961 = 1;
  }
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_28;
  size = currentEventIdList->fields._size;
  if ( (int)size >= 1 )
  {
    compMissionNum = this->fields.compMissionNum;
    v15 = (UserEventMissionMaster_o *)Instance;
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)currentEventIdList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v15 )
        break;
      Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(
                                    v15,
                                    currentEventIdList->fields._items->m_Items[++v16],
                                    0LL);
      compMissionNum += (int)Instance;
      this->fields.compMissionNum = compMissionNum;
      if ( (__int64)v16 >= size )
        goto LABEL_13;
      currentEventIdList = this->fields.currentEventIdList;
    }
    while ( currentEventIdList );
LABEL_28:
    sub_B2C434(Instance, v11);
  }
LABEL_13:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8638/*"MASTER_MISSION_COMPLETE_NUM"*/, 0LL);
  if ( !this->fields.eventMissionInfo )
    goto LABEL_28;
  v17 = (System_String_o *)Instance;
  if ( this->fields.nowType )
  {
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 0, 0LL);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    eventMissionTxt2 = this->fields.eventMissionTxt2;
    v26 = this->fields.compMissionNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    totalMissionNum = this->fields.totalMissionNum;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_44301068(v17, v19, v20, 0LL);
    if ( !eventMissionTxt2 )
      goto LABEL_28;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0LL);
    v21 = this->fields.eventMissionTxt2;
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    }
    if ( !v21 )
      goto LABEL_28;
    UILabel__SetCondensedScale_41673556(
      v21,
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
    v26 = this->fields.compMissionNum;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    totalMissionNum = this->fields.totalMissionNum;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_44301068(v17, v23, v24, 0LL);
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

  if ( (byte_418596A & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionComponent_TypeInfo, method);
    byte_418596A = 1;
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
    sub_B2C434(v5, method);
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

  if ( (byte_418596F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418596F = 1;
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
    sub_B2C434(voicePlayEffect, v4);
  StandFigureBack__SetFaceType((StandFigureBack_o *)voicePlayEffect, 0, 0.0, 0, 0LL);
}


void __fastcall MasterMissionComponent__setRecieveModifyItem(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  __int64 v3; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct MasterMissionListViewManager_array *v6; // x8
  __int64 v7; // x9
  MissionListViewManager_o *v8; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x0

  v2 = this;
  if ( (byte_4185980 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (MasterMissionComponent_o *)sub_B2C35C(&Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__, v3);
    byte_4185980 = 1;
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
        (v6 = v2->fields.missionListViewManager) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  v7 = v2->fields.nowType;
  if ( (unsigned int)v7 >= v6->max_length )
  {
LABEL_11:
    v11 = sub_B2C460(this);
    sub_B2C400(v11, 0LL);
  }
  v8 = (MissionListViewManager_o *)v6->m_Items[v7];
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v2, Method_MasterMissionComponent__setRecieveModifyItem_b__192_0__, 0LL);
  if ( !v8 )
    goto LABEL_10;
  MissionListViewManager__SetMode(v8, 3, v9, 0LL);
  MasterMissionComponent__RefreshInfo(v2, v10);
}


void __fastcall MasterMissionComponent__stopSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  svtVoiceCtr = this->fields.svtVoiceCtr;
  if ( !svtVoiceCtr )
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(
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
  if ( (byte_4185D0F & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_4185D0F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  MasterMissionComponent_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  MasterMissionComponent_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
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
  sub_B2C2F8((BattleServantConfConponent_o *)v10, (System_Int32_array **)mstMission, v11, v12, v13, v14, v15, v16);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)voiceDataName,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.DataListRand = voiceDataListRand;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.DataListRand,
    (System_Int32_array **)voiceDataListRand,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.DataListMission = voiceDataListMission;
  sub_B2C2F8(
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185D06 & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionComponent___c_TypeInfo, v1);
    byte_4185D06 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MasterMissionComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MasterMissionComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
  __int64 v5; // x1
  CommonUI_o *v6; // x19
  TerminalSceneComponent_c *v7; // x0
  ErrorDialog_c *klass; // x8

  if ( (byte_4185D08 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v3);
    byte_4185D08 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
    goto LABEL_25;
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
    byte_4183C65 = 1;
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
  TerminalSceneComponent__playBgm_18835492((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v5);
    byte_4183C65 = 1;
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
    sub_B2C434(Instance, v5);
  ScrPlayerStatus__OpenMasterMission((ScrPlayerStatus_o *)Instance, 0LL, -1, 0LL);
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
  SceneJumpInfo_o *v7; // x19

  if ( (byte_4185D0A & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_13077/*"StoneFragments"*/, v4);
    byte_4185D0A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission(Instance, 0LL),
        v7 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_17292872(v7, (System_String_o *)StringLiteral_13077/*"StoneFragments"*/, 0LL),
        !v7)
    || (SceneJumpInfo__SetReturnNowScene(v7, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v6);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v7, 0LL);
}


void __fastcall MasterMissionComponent___c___OpenCompleteMission_b__145_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_4185D07 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4185D07 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
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
    sub_B2C434(0LL, method);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0LL);
}


void __fastcall MasterMissionComponent___c___reDispMissionList_b__150_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4185D09 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4185D09 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
    sub_B2C434(_4__this, method);
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
  __int64 v16; // x1
  __int64 MissionId; // x0
  __int64 *v18; // x8
  struct MasterMissionComponent_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct MasterMissionComponent_o *v26; // x8
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4185D0B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__, isDecide);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&StringLiteral_3054/*"CLICK_DECIDE"*/, v12);
    this = (MasterMissionComponent___c__DisplayClass181_0_o *)sub_B2C35C(&StringLiteral_3048/*"CLICK_CANCEL"*/, v13);
    byte_4185D0B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_21;
  if ( isDecide )
  {
    _4__this->fields.isBoardTouch = 0;
    v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    this = (MasterMissionComponent___c__DisplayClass181_0_o *)v4->fields.items;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v27,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
      v28 = v27;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v28,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__) )
      {
        if ( !v28.fields.current )
          sub_B2C434(0LL, v16);
        MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v28.fields.current, 0LL);
        if ( !v15 )
          sub_B2C434(MissionId, (unsigned int)MissionId);
        System_Collections_Generic_List_int___Add(
          v15,
          MissionId,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v28,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
      if ( v15 )
      {
        v19 = v4->fields.__4__this;
        this = (MasterMissionComponent___c__DisplayClass181_0_o *)System_Collections_Generic_List_int___ToArray(
                                                                    v15,
                                                                    (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( v19 )
        {
          v19->fields.sendMissionIds = (struct System_Int32_array *)this;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v19->fields.sendMissionIds,
            (System_Int32_array **)this,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v26 = v4->fields.__4__this;
          if ( v26 )
          {
            this = (MasterMissionComponent___c__DisplayClass181_0_o *)v26->fields.myFsm;
            if ( this )
            {
              v18 = &StringLiteral_3054/*"CLICK_DECIDE"*/;
              goto LABEL_18;
            }
          }
        }
      }
    }
LABEL_21:
    sub_B2C434(this, isDecide);
  }
  this = (MasterMissionComponent___c__DisplayClass181_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_21;
  v18 = &StringLiteral_3048/*"CLICK_CANCEL"*/;
LABEL_18:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v18, 0LL);
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
  if ( (byte_4185D0C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11745/*"SERVANT_OVER"*/, method);
    sub_B2C35C(&StringLiteral_10493/*"PRESENT_BOX_OVER"*/, v3);
    this = (MasterMissionComponent___c__DisplayClass187_0_o *)sub_B2C35C(&StringLiteral_3048/*"CLICK_CANCEL"*/, v4);
    byte_4185D0C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (MasterMissionComponent___c__DisplayClass187_0_o *)_4__this->fields.myFsm;
  if ( _4__this->fields.isOverPresentBox )
  {
    if ( this )
    {
      v6 = &StringLiteral_10493/*"PRESENT_BOX_OVER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B2C434(this, method);
  }
  if ( !this )
    goto LABEL_12;
  if ( _4__this->fields.overflowType )
    v6 = &StringLiteral_11745/*"SERVANT_OVER"*/;
  else
    v6 = &StringLiteral_3048/*"CLICK_CANCEL"*/;
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
    sub_B2C434(0LL, method);
  System_Action__Invoke(nextAction, 0LL);
}


void __fastcall MasterMissionComponent___c__DisplayClass187_0___ReceiveResultList_b__2(
        MasterMissionComponent___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *nextAction; // x0

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_B2C434(0LL, method);
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

  if ( (byte_4185D0D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11745/*"SERVANT_OVER"*/, method);
    sub_B2C35C(&StringLiteral_3048/*"CLICK_CANCEL"*/, v3);
    byte_4185D0D = 1;
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
    sub_B2C434(_4__this, method);
  if ( _4__this->fields.overflowType )
    v5 = &StringLiteral_11745/*"SERVANT_OVER"*/;
  else
    v5 = &StringLiteral_3048/*"CLICK_CANCEL"*/;
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
  struct MasterMissionComponent_o *v14; // x8
  int32_t exchangeCount; // w20

  if ( (byte_4185D0E & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, assetData);
    sub_B2C35C(&MasterMissionComponent_TypeInfo, v5);
    byte_4185D0E = 1;
  }
  _4__this = this->fields.__4__this;
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)MasterMissionComponent_TypeInfo;
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
                                                            (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&_4__this->fields.btnEffectBasePrefab,
    Object_WarBoardWaitTimeSetting,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)this->fields.__4__this;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_15;
  MasterMissionComponent__StopStoneButtonEffect((MasterMissionComponent_o *)Object_WarBoardWaitTimeSetting, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_15;
  if ( v14->fields.nowType == 1 )
  {
    exchangeCount = this->fields.exchangeCount;
    if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0LL) )
    {
      Object_WarBoardWaitTimeSetting = (System_Int32_array **)this->fields.__4__this;
      if ( Object_WarBoardWaitTimeSetting )
      {
        MasterMissionComponent__PlayStoneButtonEffect((MasterMissionComponent_o *)Object_WarBoardWaitTimeSetting, 0LL);
        return;
      }
LABEL_15:
      sub_B2C434(Object_WarBoardWaitTimeSetting, assetData);
    }
  }
}


void __fastcall MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}