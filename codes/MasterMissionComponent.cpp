void MasterMissionComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct MasterMissionComponent_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct MasterMissionComponent_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct MasterMissionComponent_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  struct MasterMissionComponent_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  struct MasterMissionComponent_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  struct MasterMissionComponent_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w1
  struct MasterMissionComponent_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  struct MasterMissionComponent_StaticFields *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t v65; // w1
  struct MasterMissionComponent_StaticFields *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  MasterMissionComponent_c *v73; // x8
  struct MasterMissionComponent_StaticFields *v79; // x9

  if ( (byte_5973B8D & 1) == 0 )
  {
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    sub_2213A60(&StringLiteral_18350/*"btn_txt_off_limited"*/);
    sub_2213A60(&StringLiteral_18349/*"btn_txt_off_extra"*/);
    sub_2213A60(&StringLiteral_18356/*"btn_txt_on_limited"*/);
    sub_2213A60(&StringLiteral_19675/*"ef_btn_blink"*/);
    sub_2213A60(&StringLiteral_18348/*"btn_txt_off_daily"*/);
    sub_2213A60(&StringLiteral_18354/*"btn_txt_on_daily"*/);
    sub_2213A60(&StringLiteral_18357/*"btn_txt_on_weekly"*/);
    sub_2213A60(&StringLiteral_18351/*"btn_txt_off_weekly"*/);
    sub_2213A60(&StringLiteral_18355/*"btn_txt_on_extra"*/);
    byte_5973B8D = 1;
  }
  v7 = StringLiteral_18354/*"btn_txt_on_daily"*/;
  static_fields = MasterMissionComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_SVT_ID = 9000001;
  static_fields->STONE_EXCHENGE_DISP_LIMIT = 99;
  static_fields->DAILY_ON_SPRITE_LABEL = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->DAILY_ON_SPRITE_LABEL, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_18348/*"btn_txt_off_daily"*/;
  v10 = MasterMissionComponent_TypeInfo->static_fields;
  v10->DAILY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_18348/*"btn_txt_off_daily"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->DAILY_OFF_SPRITE_LABEL, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_18357/*"btn_txt_on_weekly"*/;
  v18 = MasterMissionComponent_TypeInfo->static_fields;
  v18->WEEKLY_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_18357/*"btn_txt_on_weekly"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->WEEKLY_ON_SPRITE_LABEL, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_18351/*"btn_txt_off_weekly"*/;
  v26 = MasterMissionComponent_TypeInfo->static_fields;
  v26->WEEKLY_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_18351/*"btn_txt_off_weekly"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->WEEKLY_OFF_SPRITE_LABEL, v25, v27, v28, v29, v30, v31, v32);
  v33 = StringLiteral_18355/*"btn_txt_on_extra"*/;
  v34 = MasterMissionComponent_TypeInfo->static_fields;
  v34->EXTRA_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_18355/*"btn_txt_on_extra"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->EXTRA_ON_SPRITE_LABEL, v33, v35, v36, v37, v38, v39, v40);
  v41 = StringLiteral_18349/*"btn_txt_off_extra"*/;
  v42 = MasterMissionComponent_TypeInfo->static_fields;
  v42->EXTRA_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_18349/*"btn_txt_off_extra"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42->EXTRA_OFF_SPRITE_LABEL, v41, v43, v44, v45, v46, v47, v48);
  v49 = StringLiteral_18356/*"btn_txt_on_limited"*/;
  v50 = MasterMissionComponent_TypeInfo->static_fields;
  v50->LIMITED_ON_SPRITE_LABEL = (struct System_String_o *)StringLiteral_18356/*"btn_txt_on_limited"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50->LIMITED_ON_SPRITE_LABEL, v49, v51, v52, v53, v54, v55, v56);
  v57 = StringLiteral_18350/*"btn_txt_off_limited"*/;
  v58 = MasterMissionComponent_TypeInfo->static_fields;
  v58->LIMITED_OFF_SPRITE_LABEL = (struct System_String_o *)StringLiteral_18350/*"btn_txt_off_limited"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v58->LIMITED_OFF_SPRITE_LABEL, v57, v59, v60, v61, v62, v63, v64);
  v65 = StringLiteral_19675/*"ef_btn_blink"*/;
  v66 = MasterMissionComponent_TypeInfo->static_fields;
  v66->STONE_EXCHENGE_BUTTON_EFFECT_NAME = (struct System_String_o *)StringLiteral_19675/*"ef_btn_blink"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v66->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
    v65,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = MasterMissionComponent_TypeInfo;
  __asm { FMOV            V1.2S, #1.0 }
  v79 = MasterMissionComponent_TypeInfo->static_fields;
  *(_OWORD *)&v79->SLIDE_IN_TIME = xmmword_E9C260;
  v79->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
  v73->static_fields->HelpButtonDefaultPosition = (struct UnityEngine_Vector2_o)0xC31F0000C3E10000LL;
  v73->static_fields->HelpButtonItemInfoPosition = (struct UnityEngine_Vector2_o)0xC3070000C3DC0000LL;
  v73->static_fields->VoiceButtonDefaultPosition = (struct UnityEngine_Vector2_o)0xC3600000C3E60000LL;
  v73->static_fields->VoiceButtonItemInfoPosition = (struct UnityEngine_Vector2_o)0xC2B40000C3E60000LL;
  v73->static_fields->VoiceButtonDefaultScale = _D1;
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
  System_Int32_array *receiveMissionIds; // x21
  MasterMissionListViewManager_o *v9; // x20
  System_Action_o *v10; // x22

  if ( (byte_5973B74 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent__AcceptReward_b__167_0__);
    byte_5973B74 = 1;
  }
  MasterMissionComponent__SetBtnEnable(this, 0, v2);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_7;
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_2213CE4(v4);
  receiveMissionIds = this->fields.receiveMissionIds;
  v9 = missionListViewManager->m_Items[nowType];
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterMissionComponent__AcceptReward_b__167_0__, 0);
  if ( !v9 )
LABEL_7:
    sub_2213CDC(v4, v5);
  MasterMissionListViewManager__AcceptReward(v9, receiveMissionIds, v10, 0);
}


void MasterMissionComponent__AddEndVoiceCallBack(
        MasterMissionComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  UnityEngine_Object_o *svtVoiceCtr; // x21
  __int64 v6; // x1
  EventSvtControl_o *v7; // x0

  if ( (byte_5973B8C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B8C = 1;
  }
  svtVoiceCtr = (UnityEngine_Object_o *)this->fields.svtVoiceCtr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callBack);
  if ( UnityEngine_Object__op_Equality(svtVoiceCtr, 0, 0) )
  {
    ActionExtensions__Call(callBack, 0);
  }
  else
  {
    v7 = this->fields.svtVoiceCtr;
    if ( !v7 )
      sub_2213CDC(0, v6);
    EventSvtControl__AddEndCallBack(v7, callBack, 0);
  }
}


void MasterMissionComponent__Awake(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *completeMissionViewController; // x20
  __int64 v4; // x1
  CompleteMissionViewController_o *v5; // x0

  if ( (byte_5973B49 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B49 = 1;
  }
  completeMissionViewController = (UnityEngine_Object_o *)this->fields.completeMissionViewController;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(completeMissionViewController, 0, 0) )
  {
    v5 = this->fields.completeMissionViewController;
    if ( !v5 )
      sub_2213CDC(0, v4);
    CompleteMissionViewController__CheckAssert(v5, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CE4(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, isBulk);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  MasterMissionReceiveConfirmDialog_o *receiveConfirmDialog; // x19
  System_Collections_Generic_List_MasterMissionListViewItem__o *v21; // x20
  MasterMissionReceiveConfirmDialog_ClickDelegate_o *v22; // x22

  if ( (byte_5973B70 & 1) == 0 )
  {
    sub_2213A60(&MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent___c__DisplayClass162_0__BulkReceiveConfirm_b__0__);
    sub_2213A60(&MasterMissionComponent___c__DisplayClass162_0_TypeInfo);
    byte_5973B70 = 1;
  }
  v5 = sub_2213CCC(MasterMissionComponent___c__DisplayClass162_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass162_0___ctor((MasterMissionComponent___c__DisplayClass162_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = items;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)items, v14, v15, v16, v17, v18, v19);
  receiveConfirmDialog = this->fields.receiveConfirmDialog;
  v21 = *(System_Collections_Generic_List_MasterMissionListViewItem__o **)(v5 + 24);
  v22 = (MasterMissionReceiveConfirmDialog_ClickDelegate_o *)sub_2213CCC(MasterMissionReceiveConfirmDialog_ClickDelegate_TypeInfo);
  MasterMissionReceiveConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_MasterMissionComponent___c__DisplayClass162_0__BulkReceiveConfirm_b__0__,
    0);
  if ( !receiveConfirmDialog )
LABEL_6:
    sub_2213CDC(v6, v7);
  MasterMissionReceiveConfirmDialog__Open(receiveConfirmDialog, v21, v22, 0);
}


void MasterMissionComponent__ChangeTabImage(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  struct MasterMissionTab_array *missionTabList; // x8
  UISprite_o *dailyTabBtnBase; // x20
  UISprite_o *dailyTabSprite; // x20
  int v6; // w8
  System_String_o **p_fields; // x8
  struct MasterMissionTab_array *v8; // x8
  UISprite_o *weeklyTabBtnBase; // x20
  UISprite_o *weeklyTabSprite; // x20
  int v11; // w8
  System_String_o **p_leftAnchor; // x8
  struct MasterMissionTab_array *v13; // x8
  UISprite_o *extraTabBtnBase; // x20
  UISprite_o *extraTabSprite; // x20
  int v16; // w8
  System_String_o **p_bottomAnchor; // x8
  struct MasterMissionTab_array *v18; // x8
  UISprite_o *limitedTabBtnBase; // x20
  UISprite_o *limitedTabSprite; // x20
  int v21; // w8
  System_String_o **p_updateAnchors; // x8
  int32_t nowType; // w19

  v2 = this;
  if ( (byte_5973B6B & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_2213A60(&MasterMissionComponent_TypeInfo);
    byte_5973B6B = 1;
  }
  missionTabList = v2->fields.missionTabList;
  if ( !missionTabList )
    goto LABEL_62;
  if ( !LODWORD(missionTabList->max_length) )
    goto LABEL_63;
  this = (MasterMissionComponent_o *)missionTabList->m_Items[0];
  if ( !this )
    goto LABEL_62;
  dailyTabBtnBase = v2->fields.dailyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 0,
                                       0);
  if ( !dailyTabBtnBase )
    goto LABEL_62;
  UISprite__set_spriteName(dailyTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  dailyTabSprite = v2->fields.dailyTabSprite;
  v6 = *(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1);
  if ( !v2->fields.nowType )
  {
    if ( !v6 )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_fields = (System_String_o **)&this->fields.dailyTabBtnBase->fields;
    if ( dailyTabSprite )
      goto LABEL_15;
LABEL_62:
    sub_2213CDC(this, method);
  }
  if ( !v6 )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
    this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  }
  p_fields = (System_String_o **)&this->fields.dailyTabBtnBase->fields.m_CancellationTokenSource;
  if ( !dailyTabSprite )
    goto LABEL_62;
LABEL_15:
  UISprite__set_spriteName(dailyTabSprite, *p_fields, 0);
  this = (MasterMissionComponent_o *)v2->fields.dailySelectedObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 0, 0);
  this = (MasterMissionComponent_o *)v2->fields.dailyNonSelectedObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 0, 0);
  v8 = v2->fields.missionTabList;
  if ( !v8 )
    goto LABEL_62;
  if ( (v8->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_63;
  this = (MasterMissionComponent_o *)v8->m_Items[1];
  if ( !this )
    goto LABEL_62;
  weeklyTabBtnBase = v2->fields.weeklyTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 1,
                                       0);
  if ( !weeklyTabBtnBase )
    goto LABEL_62;
  UISprite__set_spriteName(weeklyTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  weeklyTabSprite = v2->fields.weeklyTabSprite;
  v11 = *(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1);
  if ( v2->fields.nowType == 1 )
  {
    if ( !v11 )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_leftAnchor = (System_String_o **)&this->fields.dailyTabBtnBase->fields.leftAnchor;
  }
  else
  {
    if ( !v11 )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_leftAnchor = (System_String_o **)&this->fields.dailyTabBtnBase->fields.rightAnchor;
  }
  if ( !weeklyTabSprite )
    goto LABEL_62;
  UISprite__set_spriteName(weeklyTabSprite, *p_leftAnchor, 0);
  this = (MasterMissionComponent_o *)v2->fields.weeklySelectedObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 1, 0);
  this = (MasterMissionComponent_o *)v2->fields.weeklyNonSelectedObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 1, 0);
  v13 = v2->fields.missionTabList;
  if ( !v13 )
    goto LABEL_62;
  if ( LODWORD(v13->max_length) <= 2 )
    goto LABEL_63;
  this = (MasterMissionComponent_o *)v13->m_Items[2];
  if ( !this )
    goto LABEL_62;
  extraTabBtnBase = v2->fields.extraTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 2,
                                       0);
  if ( !extraTabBtnBase )
    goto LABEL_62;
  UISprite__set_spriteName(extraTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  extraTabSprite = v2->fields.extraTabSprite;
  v16 = *(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1);
  if ( v2->fields.nowType == 2 )
  {
    if ( !v16 )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_bottomAnchor = (System_String_o **)&this->fields.dailyTabBtnBase->fields.bottomAnchor;
  }
  else
  {
    if ( !v16 )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_bottomAnchor = (System_String_o **)&this->fields.dailyTabBtnBase->fields.topAnchor;
  }
  if ( !extraTabSprite )
    goto LABEL_62;
  UISprite__set_spriteName(extraTabSprite, *p_bottomAnchor, 0);
  this = (MasterMissionComponent_o *)v2->fields.extraSelectedObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 2, 0);
  this = (MasterMissionComponent_o *)v2->fields.extraNonSelectedObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 2, 0);
  v18 = v2->fields.missionTabList;
  if ( !v18 )
    goto LABEL_62;
  if ( (v18->max_length & 0xFFFFFFFC) == 0 )
LABEL_63:
    sub_2213CE4(this);
  this = (MasterMissionComponent_o *)v18->m_Items[3];
  if ( !this )
    goto LABEL_62;
  limitedTabBtnBase = v2->fields.limitedTabBtnBase;
  this = (MasterMissionComponent_o *)MasterMissionTab__GetButtonSpriteName(
                                       (MasterMissionTab_o *)this,
                                       v2->fields.nowType == 3,
                                       0);
  if ( !limitedTabBtnBase )
    goto LABEL_62;
  UISprite__set_spriteName(limitedTabBtnBase, (System_String_o *)this, 0);
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  limitedTabSprite = v2->fields.limitedTabSprite;
  v21 = *(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1);
  if ( v2->fields.nowType == 3 )
  {
    if ( !v21 )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_updateAnchors = (System_String_o **)&this->fields.dailyTabBtnBase->fields.updateAnchors;
  }
  else
  {
    if ( !v21 )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
      this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
    }
    p_updateAnchors = (System_String_o **)&this->fields.dailyTabBtnBase->fields.mGo;
  }
  if ( !limitedTabSprite )
    goto LABEL_62;
  UISprite__set_spriteName(limitedTabSprite, *p_updateAnchors, 0);
  this = (MasterMissionComponent_o *)v2->fields.limitedSelectedObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType != 3, 0);
  this = (MasterMissionComponent_o *)v2->fields.limitedNonSelectedObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v2->fields.nowType == 3, 0);
  nowType = v2->fields.nowType;
  if ( !byte_596A84D )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A84D = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField = nowType;
  EventRewardSaveData__SaveMstMissionIndex(0);
}


void MasterMissionComponent__CheckRewardAcceptable(MasterMissionComponent_o *this, const MethodInfo *method)
{
  MasterMissionComponent_o *v2; // x19
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  int32_t BoardTouchMissionId; // w20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v2 = this;
  if ( (byte_5973B71 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    this = (MasterMissionComponent_o *)sub_2213A60(&StringLiteral_11639/*"REWARD_ACCEPTABLE"*/);
    byte_5973B71 = 1;
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
        (this = (MasterMissionComponent_o *)sub_2213B20(int___TypeInfo, 1)) == 0) )
  {
LABEL_10:
    sub_2213CDC(this, method);
  }
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_11:
    sub_2213CE4(this);
  LODWORD(this->fields.myFsm) = BoardTouchMissionId;
  v2->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.sendMissionIds, (int32_t)this, v6, v7, v8, v9, v10, v11);
  this = (MasterMissionComponent_o *)v2->fields.myFsm;
  v2->fields.isBoardTouch = 1;
  if ( !this )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11639/*"REWARD_ACCEPTABLE"*/, 0);
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

  if ( (byte_5973B7F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_5973B7F = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
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
  if ( (v7->max_length & 0xFFFFFFFE) == 0 )
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
    sub_2213CDC(svtVoiceCtr, v3);
  }
  if ( (v9->max_length & 0xFFFFFFFC) == 0 )
LABEL_23:
    sub_2213CE4(svtVoiceCtr);
  svtVoiceCtr = (EventSvtControl_o *)v9->m_Items[3];
  if ( !svtVoiceCtr )
    goto LABEL_22;
  MasterMissionListViewManager__DestroyList((MasterMissionListViewManager_o *)svtVoiceCtr, 0);
  EventRewardSaveData__SaveAllMissionData(0);
  svtVoiceCtr = (EventSvtControl_o *)this->fields.completeMissionViewController;
  if ( !svtVoiceCtr )
    goto LABEL_22;
  CompleteMissionViewController__Release((CompleteMissionViewController_o *)svtVoiceCtr, 0);
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

  if ( (byte_5973B5B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5973B5B = 1;
  }
  MasterMissionComponent__setCurrentSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(titleInfo, v3);
  }
  CommonUI__SetLoadMode((CommonUI_o *)titleInfo, 0, 0);
}


void MasterMissionComponent__ExecBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  struct MasterMissionComponent_ClickDelegate_o *callbackFunc; // x8
  ScrTerminalListTop_o *v4; // x0
  System_Collections_Generic_List_GameObject__c *klass; // x8

  if ( (byte_5973B7E & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5973B7E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      callbackFunc->fields.method);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v4 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v4->fields.itemGetEffectInstances->klass;
  if ( !klass || (v4 = *(ScrTerminalListTop_o **)&klass->_2.element_size) == 0 )
    sub_2213CDC(v4, method);
  ScrTerminalListTop__OnPlayerStatusSetBackMaskActive(v4, 0);
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
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__127_0; // x20
  Il2CppObject *v11; // x21
  struct MasterMissionComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5973B51 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MasterMissionComponent___c__ExitCompleteMission_b__127_0__);
    sub_2213A60(&MasterMissionComponent___c_TypeInfo);
    byte_5973B51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4);
    v5 = AvalonSceneManager_TypeInfo;
  }
  v7 = MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !*(&MasterMissionComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v4);
    v7 = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__127_0 = static_fields->__9__127_0;
  if ( !_9__127_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v4);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__127_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__127_0, v11, Method_MasterMissionComponent___c__ExitCompleteMission_b__127_0__, 0);
    v12 = MasterMissionComponent___c_TypeInfo->static_fields;
    v12->__9__127_0 = _9__127_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__127_0, (int32_t)_9__127_0, v13, v14, v15, v16, v17, v18);
  }
  if ( !v6 )
    sub_2213CDC(v7, v4);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__127_0, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t MasterMissionComponent__GetExchangeStoneCount(
        MasterMissionComponent_o *this,
        int32_t fragmentCount,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( fragmentCount < 1 )
    return 0;
  if ( MasterMissionComponent__get_StonePrice(this, *(const MethodInfo **)&fragmentCount) < 1 )
    return 0;
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

  if ( (byte_5973B5D & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    byte_5973B5D = 1;
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
        sub_2213CE4(this);
      v9 = eventMissionList->m_Items[v8];
      v10 = (MasterMissionListViewItem_o *)sub_2213CCC(MasterMissionListViewItem_TypeInfo);
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
    sub_2213CDC(this, eventMissionList);
  }
  return 0;
}


int32_t MasterMissionComponent__GetMissionTypeByTabType(int32_t tabType, const MethodInfo *method)
{
  if ( (unsigned int)(tabType - 1) > 2 )
    return 3;
  else
    return dword_EDA7F0[tabType - 1];
}


bool MasterMissionComponent__IsLimitedMissionEnableTime(MasterMissionComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0
  int64_t NoneExpireTime; // x23
  int64_t Time; // x19
  MstMissionEntity_array *Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x25
  MstMissionEntity_array *v8; // x20
  __int64 v9; // x26
  __int64 startedAt; // x24
  MstMissionEntity_o *v11; // x21
  int64_t closedAt; // x9
  bool result; // w0
  BalanceConfig_c *v15; // x0

  if ( (byte_5973B52 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B52 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v2 = BalanceConfig_TypeInfo;
  }
  NoneExpireTime = v2->static_fields->NoneExpireTime;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  Instance = (MstMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (MstMissionEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_31;
  max_length = Instance->max_length;
  v8 = Instance;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    startedAt = -1;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= LODWORD(v8->max_length) )
        sub_2213CE4(Instance);
      v11 = v8->m_Items[v9];
      if ( !v11 )
        break;
      Instance = (MstMissionEntity_array *)MstMissionEntity__getMissionType(v8->m_Items[v9], 0);
      if ( (_DWORD)Instance == 5 )
      {
        closedAt = v11->fields.closedAt;
        if ( v11->fields.startedAt > startedAt )
          startedAt = v11->fields.startedAt;
        if ( Time < closedAt && NoneExpireTime > closedAt )
          NoneExpireTime = v11->fields.closedAt;
      }
      if ( (_DWORD)max_length == (_DWORD)++v9 )
        goto LABEL_25;
    }
LABEL_31:
    sub_2213CDC(Instance, v6);
  }
  startedAt = -1;
LABEL_25:
  result = 0;
  if ( startedAt <= Time && Time < NoneExpireTime )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
      v15 = BalanceConfig_TypeInfo;
    }
    return NoneExpireTime < v15->static_fields->NoneExpireTime;
  }
  return result;
}


void MasterMissionComponent__LoadNotificationEnd(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  _BOOL8 _47388504; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  AvalonSceneManager_c *v23; // x8
  CommonUI_o *v24; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_5973B4C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_2213A60(&Method_MasterMissionComponent__LoadNotificationEnd_b__121_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_5973B4C = 1;
  }
  MasterMissionComponent__ChangeTabImage(this, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  this->fields.mstMissionMst = (struct MstMissionMaster_o *)MasterData_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mstMissionMst,
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
  MissionRewardInfoController__SetupWindow((MissionRewardInfoController_o *)Instance, 0);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v15);
  if ( TutorialFlag__Get_47388504(126, 0) )
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  }
  else
  {
    MasterMissionComponent__setMySvtFigure(this, v4);
    MasterMissionComponent__setGuideSvtVoice(this, v17);
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
  MasterMissionComponent__reDispMissionList(this, v16);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v18);
  _47388504 = TutorialFlag__Get_47388504(207, 0);
  if ( !_47388504 )
    MasterMissionComponent__OpenHelp((MasterMissionComponent_o *)_47388504, v20);
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  v24 = (CommonUI_o *)v21;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v22);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_MasterMissionComponent__LoadNotificationEnd_b__121_0__, 0);
  if ( !v24 )
LABEL_30:
    sub_2213CDC(Instance, v4);
  CommonUI__maskFadein(v24, DEFAULT_FADE_TIME, v26, 0);
}


void MasterMissionComponent__OnClickBack(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5973B7D & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionComponent_OnClickBack__);
    byte_5973B7D = 1;
  }
  v3 = Method_MasterMissionComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MasterMissionComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  MasterMissionComponent__ExecBack(this, v5);
}


void MasterMissionComponent__OnClickBulkReceive(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973B89 & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionComponent_OnClickBulkReceive__);
    sub_2213A60(&StringLiteral_3131/*"BULK_RECEIVE"*/);
    byte_5973B89 = 1;
  }
  v3 = Method_MasterMissionComponent_OnClickBulkReceive__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickBulkReceive__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MasterMissionComponent_OnClickBulkReceive__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3131/*"BULK_RECEIVE"*/, 0);
}


void MasterMissionComponent__OnClickCompleteMissionBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x1
  System_String_o *v13; // x19
  long double v14; // q0
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  System_String_o *v19; // x19
  CommonUI_o *v20; // x20
  MasterMissionComponent___c_c *v21; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__126_1; // x21
  Il2CppObject *v24; // x22
  struct MasterMissionComponent___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5973B50 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Array_Empty_object___);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__126_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__126_1__);
    sub_2213A60(&MasterMissionComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_3853/*"COMPLETE_MISSION_END"*/);
    byte_5973B50 = 1;
  }
  if ( this->fields.endFadein )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v5 = **(_QWORD **)&Instance[1].fields._DispLog;
      if ( v5 )
      {
        Instance = *(DataManager_o **)(v5 + 264);
        if ( Instance )
        {
          ScrTerminalMap__DestroyEventActionEffect((ScrTerminalMap_o *)Instance, 0);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
          TerminalPramsManager__PlaySystemSE(0, 0);
          v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v9 = AvalonSceneManager_TypeInfo;
          if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
            v9 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
          v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_MasterMissionComponent__OnClickCompleteMissionBtn_b__126_0__,
            0);
          if ( v8 )
          {
            CommonUI__maskFadeout((CommonUI_o *)v8, 1, DEFAULT_FADE_TIME, v11, 0);
            return;
          }
        }
      }
LABEL_40:
      sub_2213CDC(Instance, v4);
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3853/*"COMPLETE_MISSION_END"*/, 0);
    v15 = Method_System_Array_Empty_object___;
    v16 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v16 )
    {
      sub_224B964(Method_System_Array_Empty_object___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
      v17 = sub_224B908(v14);
    if ( !*(_DWORD *)(v17 + 228) )
      *(__n128 *)&v14 = j_il2cpp_runtime_class_init_0(v17, v12);
    v18 = *(_QWORD *)(v15[7] + 16LL);
    if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
      v18 = sub_224B908(v14);
    v19 = System_String__Format_75698016(v13, **(System_Object_array ***)(v18 + 184), 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (CommonUI_o *)Instance;
    v21 = MasterMissionComponent___c_TypeInfo;
    if ( !*(&MasterMissionComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v4);
      v21 = MasterMissionComponent___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__126_1 = static_fields->__9__126_1;
    if ( !_9__126_1 )
    {
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v21, v4);
        static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__126_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__126_1, v24, Method_MasterMissionComponent___c__OnClickCompleteMissionBtn_b__126_1__, 0);
      v25 = MasterMissionComponent___c_TypeInfo->static_fields;
      v25->__9__126_1 = _9__126_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v25->__9__126_1,
        (int32_t)_9__126_1,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    if ( !v20 )
      goto LABEL_40;
    CommonUI__OpenNotificationDialog(v20, 0, v19, _9__126_1, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
  }
}


void MasterMissionComponent__OnClickDailyTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_5973B6C & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionComponent_OnClickDailyTab__);
    byte_5973B6C = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_MasterMissionComponent_OnClickDailyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickDailyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MasterMissionComponent_OnClickDailyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.nowType = 0;
    EventRewardSaveData__SaveAllMissionData(0);
    MasterMissionComponent__ChangeTabImage(this, v5);
    MasterMissionComponent__SetMissionDisp(this, v6);
    MasterMissionComponent__StopStoneButtonEffect(this, v7);
  }
}


void MasterMissionComponent__OnClickExRoomQuestBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v8; // x1
  ScrTerminalListTop_o *v9; // x0
  System_Collections_Generic_List_GameObject__c *klass; // x8
  UnityEngine_Object_o *v11; // x20
  System_Collections_Generic_List_GameObject__c *v12; // x8
  const MethodInfo *v13; // x1
  Il2CppObject *Instance; // x20
  Il2CppObject *v15; // x22
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x2
  CommonUI_o *v18; // x19
  System_Action_o *transitionAction; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5973B6A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_CommonUI_CloseMasterMission__);
    sub_2213A60(&Method_MasterMissionComponent_OnClickExRoomQuestBtn__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_14254/*"Terminal/ExRoom/Quest"*/);
    byte_5973B6A = 1;
  }
  transitionAction = 0;
  if ( ExRoomRootComponent__IsFeatureOpen(1, 0) )
  {
    v3 = Method_MasterMissionComponent_OnClickExRoomQuestBtn__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickExRoomQuestBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MasterMissionComponent_OnClickExRoomQuestBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v9 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
        v9 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = v9->fields.itemGetEffectInstances->klass;
      if ( !klass )
        goto LABEL_42;
      v11 = *(UnityEngine_Object_o **)&klass->_2.element_size;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        v9 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
          v9 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v12 = v9->fields.itemGetEffectInstances->klass;
        if ( !v12 )
          goto LABEL_42;
        v9 = *(ScrTerminalListTop_o **)&v12->_2.element_size;
        if ( !v9 )
          goto LABEL_42;
        if ( ScrTerminalListTop__IsExRoomActive(v9, 0) )
        {
          MasterMissionComponent__ExecBack(this, v13);
          return;
        }
      }
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v16, v15, Method_CommonUI_CloseMasterMission__, 0);
    if ( Instance )
    {
      if ( !CommonUI__TryGetSceneTransitionAction(
              (CommonUI_o *)Instance,
              &transitionAction,
              (System_String_o *)StringLiteral_14254/*"Terminal/ExRoom/Quest"*/,
              0,
              v16,
              2,
              0,
              0) )
        return;
      MasterMissionComponent__SetBtnEnable(this, 0, v17);
      v9 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = (CommonUI_o *)v9;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v8);
      if ( v18 )
      {
        CommonUI__maskFadeout(
          v18,
          1,
          AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME,
          transitionAction,
          0);
        return;
      }
    }
LABEL_42:
    sub_2213CDC(v9, v8);
  }
}


void MasterMissionComponent__OnClickExtraTab(MasterMissionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_5973B6E & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionComponent_OnClickExtraTab__);
    byte_5973B6E = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_MasterMissionComponent_OnClickExtraTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickExtraTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MasterMissionComponent_OnClickExtraTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_5973B87 & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionComponent_OnClickHelp__);
    byte_5973B87 = 1;
  }
  v2 = Method_MasterMissionComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_MasterMissionComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
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

  if ( (byte_5973B6F & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionComponent_OnClickLimitedTab__);
    byte_5973B6F = 1;
  }
  if ( this->fields.nowType != 3 )
  {
    v3 = Method_MasterMissionComponent_OnClickLimitedTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickLimitedTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MasterMissionComponent_OnClickLimitedTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  intptr_t v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *m_CachedPtr; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  intptr_t v9; // x8
  TerminalPramsManager_c *v10; // x0
  int v11; // w9
  int v12; // w9
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x19
  float DEFAULT_FADE_TIME; // s8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__154_0; // x20
  Il2CppObject *v21; // x21
  struct MasterMissionComponent___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5973B69 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent_OnClickShopBtn__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent___c__OnClickShopBtn_b__154_0__);
    sub_2213A60(&MasterMissionComponent___c_TypeInfo);
    byte_5973B69 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    if ( !mInstance )
      goto LABEL_50;
    m_CachedPtr = (UnityEngine_Object_o *)mInstance[10].fields.m_CachedPtr;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(m_CachedPtr, 0, 0) )
    {
      v4 = mInstance[10].fields.m_CachedPtr;
      if ( !v4 )
        goto LABEL_50;
      if ( ScrTerminalListTop__IsExRoomActive((ScrTerminalListTop_o *)v4, 0) )
      {
        v8 = (UnityEngine_Object_o *)mInstance[15].fields.m_CachedPtr;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        v4 = UnityEngine_Object__op_Inequality(v8, 0, 0);
        if ( (v4 & 1) != 0 )
        {
          v9 = mInstance[15].fields.m_CachedPtr;
          if ( !v9 )
            goto LABEL_50;
          if ( *(_DWORD *)(v9 + 100) == 2 )
          {
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
            if ( !byte_596AEFB )
            {
              sub_2213A60(&TerminalPramsManager_TypeInfo);
              byte_596AEFB = 1;
            }
            v10 = TerminalPramsManager_TypeInfo;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
              v10 = TerminalPramsManager_TypeInfo;
            }
            v11 = (unsigned __int8)byte_596AEFC;
            v10->static_fields->_IsAutoExRoom_k__BackingField = 1;
            if ( !v11 )
            {
              sub_2213A60(&TerminalPramsManager_TypeInfo);
              v10 = TerminalPramsManager_TypeInfo;
              byte_596AEFC = 1;
            }
            if ( !*(&v10->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v10, v5);
              v10 = TerminalPramsManager_TypeInfo;
            }
            v12 = (unsigned __int8)byte_596AF01;
            v10->static_fields->_AutoExRoomType_k__BackingField = 2;
            if ( !v12 )
            {
              sub_2213A60(&TerminalPramsManager_TypeInfo);
              v10 = TerminalPramsManager_TypeInfo;
              byte_596AF01 = 1;
            }
            if ( !*(&v10->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v10, v5);
              v10 = TerminalPramsManager_TypeInfo;
            }
            v10->static_fields->_IsAutoOpenMasterMissionOnExRoomQuest_k__BackingField = 1;
          }
        }
      }
    }
  }
  v13 = Method_MasterMissionComponent_OnClickShopBtn__;
  if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickShopBtn__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_2213A78(Method_MasterMissionComponent_OnClickShopBtn__);
  v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5);
    v16 = AvalonSceneManager_TypeInfo;
  }
  v4 = (intptr_t)MasterMissionComponent___c_TypeInfo;
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  if ( !*(&MasterMissionComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v5);
    v4 = (intptr_t)MasterMissionComponent___c_TypeInfo;
  }
  static_fields = *(struct MasterMissionComponent___c_StaticFields **)(v4 + 184);
  _9__154_0 = static_fields->__9__154_0;
  if ( !_9__154_0 )
  {
    if ( !*(_DWORD *)(v4 + 228) )
    {
      j_il2cpp_runtime_class_init_0(v4, v5);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__154_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__154_0, v21, Method_MasterMissionComponent___c__OnClickShopBtn_b__154_0__, 0);
    v22 = MasterMissionComponent___c_TypeInfo->static_fields;
    v22->__9__154_0 = _9__154_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__154_0, (int32_t)_9__154_0, v23, v24, v25, v26, v27, v28);
  }
  if ( !v17 )
LABEL_50:
    sub_2213CDC(v4, v5);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, _9__154_0, 0);
}


void MasterMissionComponent__OnClickSvt(MasterMissionComponent_o *this, const MethodInfo *method)
{
  EventSvtControl_o *svtVoiceCtr; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.isVoicePlaying )
  {
    svtVoiceCtr = this->fields.svtVoiceCtr;
    if ( !svtVoiceCtr )
      sub_2213CDC(0, method);
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

  if ( (byte_5973B6D & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionComponent_OnClickWeeklyTab__);
    byte_5973B6D = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_MasterMissionComponent_OnClickWeeklyTab__;
    if ( (*((_BYTE *)Method_MasterMissionComponent_OnClickWeeklyTab__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MasterMissionComponent_OnClickWeeklyTab__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5973B4A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B4A = 1;
  }
  p_titleInfo = (UnityEngine_Component_o **)&this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0, 0) )
  {
    if ( !*p_titleInfo )
      sub_2213CDC(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_titleInfo, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_titleInfo = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.titleInfo, 0, v8, v9, v10, v11, v12, v13);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_int__o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_object__o *v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct MasterMissionTab_array *missionTabList; // x21
  int max_length; // w8
  __int64 v39; // x20
  bool v40; // w1
  __int64 v41; // x1
  struct TitleInfoControl_o **p_titleInfo; // x20
  UnityEngine_Object_o *titleInfo; // x21
  __int64 v44; // x1
  Il2CppObject *titlePrefab; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  TitleInfoControl_o *v53; // x21
  TitleInfoControl_o *v54; // x20
  System_Action_o *v55; // x21
  MasterMissionComponent_c *v56; // x0
  struct MasterMissionComponent_StaticFields *static_fields; // x8
  DataManager_c *v58; // x0
  struct MstMissionEntity_array *Entitys; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v70; // x21
  ErrorDialog_c *klass; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  System_Action_o *v73; // x20
  __int64 v74; // x1

  if ( (byte_5973B4B & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_MstMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MstMissionEntity__TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent_LoadNotificationEnd__);
    sub_2213A60(&Method_MasterMissionComponent_OnClickBack__);
    sub_2213A60(&Method_MasterMissionComponent__Open_b__120_0__);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5973B4B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  CommonUI__SetLoadMode(Instance, 1, 0);
  *(_WORD *)&this->fields.isOpenOverDlg = 0;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.reDispAction = redisp_act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.reDispAction,
    (int32_t)redisp_act,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (CommonUI_o *)this->fields.standFigureBack;
  if ( !Instance )
    goto LABEL_53;
  StandFigureBack__Init((StandFigureBack_o *)Instance, 0);
  v23 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.currentEventIdList = v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentEventIdList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MstMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MstMissionEntity___ctor__);
  this->fields.currentMstMissionEntList = (struct System_Collections_Generic_List_MstMissionEntity__o *)v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentMstMissionEntList,
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
    if ( !byte_596A84E )
    {
      Instance = (CommonUI_o *)sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A84E = 1;
    }
    typeIndex = EventRewardSaveData_TypeInfo->static_fields->_MstMissionIndex_k__BackingField;
  }
  missionTabList = this->fields.missionTabList;
  this->fields.nowType = typeIndex;
  if ( !missionTabList )
    goto LABEL_53;
  max_length = missionTabList->max_length;
  if ( max_length >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v39 >= max_length )
        sub_2213CE4(Instance);
      Instance = (CommonUI_o *)missionTabList->m_Items[v39];
      if ( !Instance )
        break;
      MasterMissionTab__SetTabSize((MasterMissionTab_o *)Instance, 1, 0);
      max_length = missionTabList->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_15;
    }
LABEL_53:
    sub_2213CDC(Instance, v10);
  }
LABEL_15:
  if ( MasterMissionComponent__IsLimitedMissionEnableTime((MasterMissionComponent_o *)Instance, v10) )
  {
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_53;
    v40 = 1;
  }
  else
  {
    if ( this->fields.nowType == 3 )
      this->fields.nowType = 1;
    Instance = (CommonUI_o *)this->fields.limitedTabObj;
    if ( !Instance )
      goto LABEL_53;
    v40 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v40, 0);
  p_titleInfo = &this->fields.titleInfo;
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Equality(titleInfo, 0, 0) )
  {
    titlePrefab = (Il2CppObject *)this->fields.titlePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
    Instance = (CommonUI_o *)UnityEngine_Object__Instantiate_object_(
                               titlePrefab,
                               (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !Instance )
      goto LABEL_53;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoControl___);
    this->fields.titleInfo = (struct TitleInfoControl_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.titleInfo,
      (int32_t)Component_object,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    v53 = this->fields.titleInfo;
    Instance = (CommonUI_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v53 )
      goto LABEL_53;
    TitleInfoControl__SetParent(v53, (UnityEngine_Transform_o *)Instance, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_53;
    TitleInfoControl__setDepth((TitleInfoControl_o *)Instance, 37, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_53;
    TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Instance, 38, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_53;
    TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, 0, 1, 0, 86, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_53;
    TitleInfoControl__changeTitleInfo_46863248((TitleInfoControl_o *)Instance, 1, 86, 0, 0);
    Instance = (CommonUI_o *)*p_titleInfo;
    if ( !*p_titleInfo )
      goto LABEL_53;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
    v54 = this->fields.titleInfo;
    v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v55, (Il2CppObject *)this, (intptr_t)Method_MasterMissionComponent_OnClickBack__, 0);
    if ( !v54 )
      goto LABEL_53;
    TitleInfoControl__SetBackBtnAct(v54, v55, 0);
  }
  v56 = MasterMissionComponent_TypeInfo;
  if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v44);
    v56 = MasterMissionComponent_TypeInfo;
  }
  static_fields = v56->static_fields;
  v58 = DataManager_TypeInfo;
  *(_QWORD *)&this->fields.currentEventSvtId = *(_QWORD *)&static_fields->DEFAULT_SVT_ID;
  LODWORD(static_fields) = *(&v58->_2.cctor_finished + 1);
  this->fields.currentDispId = 0;
  if ( !(_DWORD)static_fields )
    j_il2cpp_runtime_class_init_0(v58, v44);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_53;
  Entitys = (struct MstMissionEntity_array *)DataMasterBase_object__object__int___getEntitys(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                               (const MethodInfo_3F0FEAC *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__getEntitys__);
  this->fields.mstMissionList = Entitys;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mstMissionList,
    (int32_t)Entitys,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  MasterMissionComponent__SetupShopBtn(this, v66);
  MasterMissionComponent__SetupExRoomQuestBtn(this, v67);
  Instance = (CommonUI_o *)this->fields.completeMissionViewController;
  if ( !Instance )
    goto LABEL_53;
  CompleteMissionViewController__Refresh((CompleteMissionViewController_o *)Instance, 0);
  MasterMissionComponent__RefreshInfo(this, v68);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v70 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v70, (Il2CppObject *)this, Method_MasterMissionComponent__Open_b__120_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v70, 1, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass )
    goto LABEL_53;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_53;
  this->fields.isTerminalTouchEnabledBeforeOpen = TitleInfoControl__IsTouchEnable(
                                                    (TitleInfoControl_o *)klass->_2.genericContainerHandle,
                                                    0);
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 1, 0);
  v73 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_MasterMissionComponent_LoadNotificationEnd__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v74);
  AtlasManager__LoadNotification(v73, 0);
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
  struct MasterMissionComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__125_0; // x21
  Il2CppObject *v10; // x22
  struct MasterMissionComponent___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  TerminalSceneComponent_c *v18; // x0

  if ( (byte_5973B4F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CompleteMissionComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent_ExitCompleteMission__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent___c__OpenCompleteMission_b__125_0__);
    sub_2213A60(&MasterMissionComponent___c_TypeInfo);
    byte_5973B4F = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, callback);
  SoundManager__stopSe(0.0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CompleteMissionComponent_ClickDelegate_o *)sub_2213CCC(CompleteMissionComponent_ClickDelegate_TypeInfo);
  CompleteMissionComponent_ClickDelegate___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_ExitCompleteMission__,
    0);
  mInstance = MasterMissionComponent___c_TypeInfo;
  if ( !*(&MasterMissionComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v6);
    mInstance = MasterMissionComponent___c_TypeInfo;
  }
  static_fields = mInstance->static_fields;
  _9__125_0 = static_fields->__9__125_0;
  if ( !_9__125_0 )
  {
    if ( !*(&mInstance->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(mInstance, v6);
      static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__125_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__125_0, v10, Method_MasterMissionComponent___c__OpenCompleteMission_b__125_0__, 0);
    v11 = MasterMissionComponent___c_TypeInfo->static_fields;
    v11->__9__125_0 = _9__125_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__125_0, (int32_t)_9__125_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v5, _9__125_0, 0, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v18 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    v18 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (MasterMissionComponent___c_c *)v18->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_2213CDC(mInstance, v6);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0);
}


void MasterMissionComponent__OpenHelp(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5973B88 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5973B88 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__OpenTutorialImageDialog_37396784((CommonUI_o *)Instance, 42, 207, 0, 0, 0, 0);
}


void MasterMissionComponent__OpenPresentBox(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v4; // x21
  ScrTerminalListTop_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_GameObject__c *klass; // x8
  CommonUI_o *v8; // x19
  System_Collections_Generic_List_GameObject__c *v9; // x8

  if ( (byte_5973B77 & 1) == 0 )
  {
    sub_2213A60(&UserPresentBoxWindow_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent__OpenPresentBox_b__170_0__);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5973B77 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (UserPresentBoxWindow_ClickDelegate_o *)sub_2213CCC(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__OpenPresentBox_b__170_0__,
    0);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v4, 0, 0);
  v5 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v5 )
    goto LABEL_28;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v5, 34, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v5->fields.itemGetEffectInstances->klass;
    if ( !klass )
      goto LABEL_28;
    v5 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
    if ( !v5 )
      goto LABEL_28;
    if ( ScrTerminalListTop__get_IsActiveAnyEarth(v5, 0) )
    {
      v5 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (CommonUI_o *)v5;
      if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v6);
      if ( v8 )
      {
        CommonUI__SetUsrPresentListPos(v8, MasterMissionComponent_TypeInfo->static_fields->BLANK_EARTH_WINDOW_POS, 0);
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
          v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v9 = v5->fields.itemGetEffectInstances->klass;
        if ( v9 )
        {
          v5 = *(ScrTerminalListTop_o **)&v9->_2.element_size;
          if ( v5 )
          {
            ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v5, 0, 0);
            return;
          }
        }
      }
LABEL_28:
      sub_2213CDC(v5, v6);
    }
  }
}


void MasterMissionComponent__PlayStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectBasePrefab; // x20
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5973B85 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B85 = 1;
  }
  btnEffectBasePrefab = (UnityEngine_Object_o *)this->fields.btnEffectBasePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0, 0) )
  {
    v5 = (Il2CppObject *)this->fields.btnEffectBasePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__Instantiate_object_(
           v5,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    this->fields.btnEffectPrefab = (struct UnityEngine_GameObject_o *)v6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.btnEffectPrefab,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this->fields.btnEffectPrefab, 0, 0) )
      GameObjectExtensions__SafeSetParent_42897308(this->fields.btnEffectPrefab, this->fields.stoneConvertBtnObj, 0);
  }
}


void MasterMissionComponent__PresentBoxOver(MasterMissionComponent_o *this, const MethodInfo *method)
{
  PresentBoxOverDialog_o *presentBoxOverDialog; // x20
  System_String_o *v4; // x21
  PresentBoxOverDialog_ClickDelegate_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5973B76 & 1) == 0 )
  {
    sub_2213A60(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent__PresentBoxOver_b__169_0__);
    sub_2213A60(&StringLiteral_8920/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973B76 = 1;
  }
  presentBoxOverDialog = this->fields.presentBoxOverDialog;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8920/*"MASTER_MISSION_PRESENT_BOX_OVER_MSG"*/, 0);
  v5 = (PresentBoxOverDialog_ClickDelegate_o *)sub_2213CCC(PresentBoxOverDialog_ClickDelegate_TypeInfo);
  PresentBoxOverDialog_ClickDelegate___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MasterMissionComponent__PresentBoxOver_b__169_0__,
    0);
  if ( !presentBoxOverDialog )
    sub_2213CDC(v6, v7);
  PresentBoxOverDialog__Open(presentBoxOverDialog, (System_String_o *)StringLiteral_1/*""*/, v4, v5, 26, 0);
}


void MasterMissionComponent__ReceiveResultList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Action_o *v12; // x22
  __int64 v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Int32_array *receiveMissionIds; // x8
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  MasterMissionListViewManager_o *v23; // x19
  System_Action_o *v24; // x21
  MasterMissionReceiveResultDialog_o *receiveResultDialog; // x21
  System_Int32_array *v26; // x19
  System_Action_o *v27; // x22

  if ( (byte_5973B75 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&Method_MasterMissionComponent___c__DisplayClass168_0__ReceiveResultList_b__0__);
    sub_2213A60(&Method_MasterMissionComponent___c__DisplayClass168_0__ReceiveResultList_b__1__);
    sub_2213A60(&Method_MasterMissionComponent___c__DisplayClass168_0__ReceiveResultList_b__2__);
    sub_2213A60(&MasterMissionComponent___c__DisplayClass168_0_TypeInfo);
    byte_5973B75 = 1;
  }
  v3 = sub_2213CCC(MasterMissionComponent___c__DisplayClass168_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass168_0___ctor((MasterMissionComponent___c__DisplayClass168_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v3,
    Method_MasterMissionComponent___c__DisplayClass168_0__ReceiveResultList_b__0__,
    0);
  *(_QWORD *)(v3 + 24) = v12;
  v13 = v3 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v12, v14, v15, v16, v17, v18, v19);
  receiveMissionIds = this->fields.receiveMissionIds;
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    if ( (unsigned int)(this->fields.nowType - 4) >= 0xFFFFFFFD
      && !this->fields.isOverPresentBox
      && !this->fields.overflowType )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
          sub_2213CE4(Instance);
        v23 = missionListViewManager->m_Items[nowType];
        v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v24,
          (Il2CppObject *)v3,
          Method_MasterMissionComponent___c__DisplayClass168_0__ReceiveResultList_b__1__,
          0);
        if ( v23 )
        {
          MasterMissionListViewManager__OpenOneResultDialog(v23, v24, 0);
          return;
        }
      }
LABEL_20:
      sub_2213CDC(Instance, v5);
    }
    receiveResultDialog = this->fields.receiveResultDialog;
    v26 = this->fields.receiveMissionIds;
    v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v3,
      Method_MasterMissionComponent___c__DisplayClass168_0__ReceiveResultList_b__2__,
      0);
    if ( !receiveResultDialog )
      goto LABEL_20;
    MasterMissionReceiveResultDialog__Open(receiveResultDialog, v26, v27, 0);
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
  __int64 v8; // x1
  int32_t UserStoneFragmentNum; // w0
  UILabel_o *stoneFragmentsInfoLabel; // x21
  int32_t v11; // w20
  const MethodInfo *v12; // x2

  if ( (byte_5973B82 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B82 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_13;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(stone, 0);
  if ( !stoneInfoLabel )
    goto LABEL_13;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Instance
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Instance, 0),
        stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel,
        v11 = UserStoneFragmentNum,
        Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(UserStoneFragmentNum, 0),
        !stoneFragmentsInfoLabel) )
  {
LABEL_13:
    sub_2213CDC(Instance, v5);
  }
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0);
  MasterMissionComponent__UpdateStoneExchangeCount(this, v11, v12);
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
  __int64 v8; // x1
  _BOOL4 v9; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x20
  MasterMissionComponent_c *v13; // x0
  int v14; // w8
  struct MasterMissionComponent_StaticFields *static_fields; // x9
  float *p_HelpButtonItemInfoPosition; // x8
  float *p_y; // x9
  struct MasterMissionComponent_StaticFields *v18; // x9
  __int64 v19; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x19
  __int64 v24; // x1
  MasterMissionComponent_c *v25; // x0
  int v26; // w8
  struct MasterMissionComponent_StaticFields *v27; // x9
  float *p_VoiceButtonItemInfoPosition; // x8
  float *v29; // x9
  struct MasterMissionComponent_StaticFields *v30; // x9
  __int64 v31; // x1
  MasterMissionComponent_c *v32; // x0
  int v33; // w8
  struct MasterMissionComponent_StaticFields *v34; // x9
  float *p_VoiceButtonItemInfoScale; // x8
  float *v36; // x9
  struct MasterMissionComponent_StaticFields *v37; // x9
  __int64 v38; // x1
  Il2CppObject *v39; // x19
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v41; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4

  v4 = this;
  if ( (byte_5973B8B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B8B = 1;
  }
  missionListViewManager = v4->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_56;
  nowType = v4->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_2213CE4(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
    goto LABEL_56;
  this = (MasterMissionComponent_o *)MasterMissionListViewManager__GetRewardItemInfo(
                                       (MasterMissionListViewManager_o *)this,
                                       0);
  if ( !v4->fields.rewardInfoController )
    goto LABEL_56;
  v7 = this;
  MissionRewardInfoController__RefreshMissionRewardItemInfo(
    v4->fields.rewardInfoController,
    (System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *)this,
    isMissionRewardGet,
    0);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v8);
  FSUtility__IsUnderVista(0);
  v9 = v7
    && System_Collections_Generic_Dictionary_int__object___get_Count(
         (System_Collections_Generic_Dictionary_int__object__o *)v7,
         (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Count__) > 0;
  this = (MasterMissionComponent_o *)v4->fields.helpBtn;
  if ( !this )
    goto LABEL_56;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (MasterMissionComponent_o *)GameObjectExtensions__GetParent(gameObject, 0);
  if ( !this )
    goto LABEL_56;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0) )
  {
    v13 = MasterMissionComponent_TypeInfo;
    v14 = *(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1);
    if ( v9 )
    {
      if ( !v14 )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, isMissionRewardGet);
        v13 = MasterMissionComponent_TypeInfo;
      }
      static_fields = v13->static_fields;
      p_HelpButtonItemInfoPosition = (float *)&static_fields->HelpButtonItemInfoPosition;
      p_y = &static_fields->HelpButtonItemInfoPosition.fields.y;
    }
    else
    {
      if ( !v14 )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, isMissionRewardGet);
        v13 = MasterMissionComponent_TypeInfo;
      }
      v18 = v13->static_fields;
      p_HelpButtonItemInfoPosition = (float *)&v18->HelpButtonDefaultPosition;
      p_y = &v18->HelpButtonDefaultPosition.fields.y;
    }
    v40.fields.x = *p_HelpButtonItemInfoPosition;
    v40.fields.y = *p_y;
    GameObjectExtensions__SetLocalPosition_42891412(v12, v40, 0);
    if ( !v12 )
      goto LABEL_56;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v12,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    this = (MasterMissionComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_56;
      FSOffset__AddOffsetX((FSOffset_o *)Component_object, 0);
      FSOffset__AddBottomY((FSOffset_o *)Component_object, 0);
    }
  }
  this = (MasterMissionComponent_o *)v4->fields.playBtnImg;
  if ( !this )
    goto LABEL_56;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (MasterMissionComponent_o *)GameObjectExtensions__GetParent(v21, 0);
  if ( !this )
    goto LABEL_56;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0) )
  {
    v25 = MasterMissionComponent_TypeInfo;
    v26 = *(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1);
    if ( v9 )
    {
      if ( !v26 )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v24);
        v25 = MasterMissionComponent_TypeInfo;
      }
      v27 = v25->static_fields;
      p_VoiceButtonItemInfoPosition = (float *)&v27->VoiceButtonItemInfoPosition;
      v29 = &v27->VoiceButtonItemInfoPosition.fields.y;
    }
    else
    {
      if ( !v26 )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v24);
        v25 = MasterMissionComponent_TypeInfo;
      }
      v30 = v25->static_fields;
      p_VoiceButtonItemInfoPosition = (float *)&v30->VoiceButtonDefaultPosition;
      v29 = &v30->VoiceButtonDefaultPosition.fields.y;
    }
    v41.fields.x = *p_VoiceButtonItemInfoPosition;
    v41.fields.y = *v29;
    GameObjectExtensions__SetLocalPosition_42891412(v23, v41, 0);
    v32 = MasterMissionComponent_TypeInfo;
    v33 = *(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1);
    if ( v9 )
    {
      if ( !v33 )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v31);
        v32 = MasterMissionComponent_TypeInfo;
      }
      v34 = v32->static_fields;
      p_VoiceButtonItemInfoScale = (float *)&v34->VoiceButtonItemInfoScale;
      v36 = &v34->VoiceButtonItemInfoScale.fields.y;
    }
    else
    {
      if ( !v33 )
      {
        j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v31);
        v32 = MasterMissionComponent_TypeInfo;
      }
      v37 = v32->static_fields;
      p_VoiceButtonItemInfoScale = (float *)&v37->VoiceButtonDefaultScale;
      v36 = &v37->VoiceButtonDefaultScale.fields.y;
    }
    v42.fields.x = *p_VoiceButtonItemInfoScale;
    v42.fields.y = *v36;
    GameObjectExtensions__SetLocalScale_42893420(v23, v42, 0);
    if ( !v23 )
      goto LABEL_56;
    v39 = UnityEngine_GameObject__GetComponent_object_(
            v23,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_FSOffset___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    this = (MasterMissionComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v39 )
      {
        FSOffset__AddOffsetX((FSOffset_o *)v39, 0);
        FSOffset__AddBottomY((FSOffset_o *)v39, 0);
        return;
      }
LABEL_56:
      sub_2213CDC(this, isMissionRewardGet);
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5973B7B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5973B7B = 1;
  }
  currentVoiceDataList = this->fields.currentVoiceDataList;
  memset(&v12, 0, sizeof(v12));
  if ( currentVoiceDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)currentVoiceDataList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v12.fields._current )
        sub_2213CDC(v4, v5);
      v6 = *(System_String_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&word_10);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5);
      SoundManager__releaseAudioAssetStorage(v6, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    v9 = this->fields.currentVoiceDataList;
    if ( !v9 )
      sub_2213CDC(v7, v8);
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
  __int64 v4; // x1
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_5973B72 & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionComponent_missionRewardCallback__);
    sub_2213A60(&Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5973B72 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MasterMissionComponent_missionRewardCallback__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventMissionClearRewardRequest___);
  if ( !Request_object )
    sub_2213CDC(0, v6);
  EventMissionClearRewardRequest__beginRequest_51238248(
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
  bool IsTouchEnable; // w8

  if ( (byte_5973B81 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5973B81 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !mInstance
      || (klass = mInstance[10].klass) == 0
      || (IsTouchEnable = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)klass, 0),
          klass = mInstance[10].klass,
          v6 = IsTouchEnable,
          this->fields.isTerminalTouchEnabledBeforeOpen = IsTouchEnable,
          !klass) )
    {
      sub_2213CDC(klass, v6);
    }
    TitleInfoControl__SetTouchEnable((TitleInfoControl_o *)klass, IsTouchEnable, 0);
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

  if ( (byte_5973B78 & 1) == 0 )
  {
    sub_2213A60(&System_Action_SceneList_Type__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent_ServantOverDialogClose__);
    sub_2213A60(&StringLiteral_8930/*"MASTER_MISSION_SERVANT_OVER_MSG"*/);
    byte_5973B78 = 1;
  }
  overflowType = this->fields.overflowType;
  servantOverDialog = this->fields.servantOverDialog;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_8930/*"MASTER_MISSION_SERVANT_OVER_MSG"*/, 0);
  if ( !servantOverDialog
    || (UserPresentBoxErrorDialog__Open(servantOverDialog, v5, 0),
        v7 = this->fields.servantOverDialog,
        v8 = (System_Action_T__o *)sub_2213CCC(System_Action_SceneList_Type__TypeInfo),
        System_Action_Int32Enum____ctor(
          v8,
          (Il2CppObject *)this,
          Method_MasterMissionComponent_ServantOverDialogClose__,
          0),
        !v7)
    || (UserPresentBoxErrorDialog__add_OnErrorDialogClosed(v7, (System_Action_SceneList_Type__o *)v8, 0),
        (v5 = (System_String_o *)this->fields.servantOverDialog) == 0) )
  {
    sub_2213CDC(v5, v6);
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

  if ( (byte_5973B79 & 1) == 0 )
  {
    sub_2213A60(&System_Action_SceneList_Type__TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent_ServantOverDialogClose__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_5973B79 = 1;
  }
  servantOverDialog = this->fields.servantOverDialog;
  v6 = (System_Action_T__o *)sub_2213CCC(System_Action_SceneList_Type__TypeInfo);
  System_Action_Int32Enum____ctor(v6, (Il2CppObject *)this, Method_MasterMissionComponent_ServantOverDialogClose__, 0);
  if ( !servantOverDialog )
    goto LABEL_9;
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(servantOverDialog, (System_Action_SceneList_Type__o *)v6, 0);
  if ( type != -1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseMasterMission(Instance, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(Instance, v8);
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
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
    sub_2213CE4(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  MasterMissionListViewManager__setAfterAction((MasterMissionListViewManager_o *)this, v4->fields.receiveMissionIds, 0);
  MasterMissionComponent__RefreshMissionRewardItemInfo(v4, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionComponent__SetBtnEnable(MasterMissionComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dailyTabObj; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *exRoomQuestBtn; // x21

  if ( (byte_5973B7C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B7C = 1;
  }
  dailyTabObj = this->fields.dailyTabObj;
  if ( !dailyTabObj )
    goto LABEL_24;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_24;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = this->fields.weeklyTabObj;
  if ( !dailyTabObj )
    goto LABEL_24;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_24;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = this->fields.extraTabObj;
  if ( !dailyTabObj )
    goto LABEL_24;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_24;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = this->fields.limitedTabObj;
  if ( !dailyTabObj )
    goto LABEL_24;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_24;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !dailyTabObj )
    goto LABEL_24;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)dailyTabObj, isEnable, 0);
  dailyTabObj = (UnityEngine_GameObject_o *)this->fields.shopBtn;
  if ( !dailyTabObj )
    goto LABEL_24;
  dailyTabObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dailyTabObj, 0);
  if ( !dailyTabObj )
    goto LABEL_24;
  dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              dailyTabObj,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !dailyTabObj )
    goto LABEL_24;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
  exRoomQuestBtn = (UnityEngine_Object_o *)this->fields.exRoomQuestBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(exRoomQuestBtn, 0, 0) )
  {
    dailyTabObj = (UnityEngine_GameObject_o *)this->fields.exRoomQuestBtn;
    if ( dailyTabObj )
    {
      dailyTabObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dailyTabObj, 0);
      if ( dailyTabObj )
      {
        dailyTabObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    dailyTabObj,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( dailyTabObj )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
          goto LABEL_22;
        }
      }
    }
LABEL_24:
    sub_2213CDC(dailyTabObj, isEnable);
  }
LABEL_22:
  dailyTabObj = (UnityEngine_GameObject_o *)this->fields.helpBtn;
  if ( !dailyTabObj )
    goto LABEL_24;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)dailyTabObj, isEnable, 0);
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

  if ( (byte_5973B5E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    byte_5973B5E = 1;
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
                            (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, VaildDailyMissionData, 0, this->fields.reDispAction, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_13;
  if ( !LODWORD(v8->max_length) )
LABEL_14:
    sub_2213CE4(VaildDailyMissionData);
  v9 = (MissionListViewManager_o *)v8->m_Items[0];
  VaildDailyMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v4);
  if ( !v9 )
LABEL_13:
    sub_2213CDC(VaildDailyMissionData, v4);
  MissionListViewManager__SetMode_55044380(v9, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
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

  if ( (byte_5973B60 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    byte_5973B60 = 1;
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
                            (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, ValidExtraMissionData, 2, this->fields.reDispAction, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_13;
  if ( LODWORD(v8->max_length) <= 2 )
LABEL_14:
    sub_2213CE4(ValidExtraMissionData);
  v9 = (MissionListViewManager_o *)v8->m_Items[2];
  ValidExtraMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v4);
  if ( !v9 )
LABEL_13:
    sub_2213CDC(ValidExtraMissionData, v4);
  MissionListViewManager__SetMode_55044380(v9, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
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

  if ( (byte_5973B61 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    byte_5973B61 = 1;
  }
  EventRewardSaveData__LoadLimitedMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( (missionListViewManager->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[3];
  VaildLimitedMissionData = (System_Int32_array *)MasterMissionComponent__getVaildLimitedMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildLimitedMissionData;
  VaildLimitedMissionData = System_Collections_Generic_List_int___ToArray(
                              this->fields.currentEventIdList,
                              (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, VaildLimitedMissionData, 3, this->fields.reDispAction, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_13;
  if ( (v8->max_length & 0xFFFFFFFC) == 0 )
LABEL_14:
    sub_2213CE4(VaildLimitedMissionData);
  v9 = (MissionListViewManager_o *)v8->m_Items[3];
  VaildLimitedMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v4);
  if ( !v9 )
LABEL_13:
    sub_2213CDC(VaildLimitedMissionData, v4);
  MissionListViewManager__SetMode_55044380(v9, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetLimitedMissionRestTime(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *limitedMissionAnnouncementComponent; // x20
  __int64 v4; // x1
  LimitedMissionAnnouncementComponent_o *v5; // x0

  if ( (byte_5973B8A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B8A = 1;
  }
  limitedMissionAnnouncementComponent = (UnityEngine_Object_o *)this->fields.limitedMissionAnnouncementComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(limitedMissionAnnouncementComponent, 0, 0) )
  {
    v5 = this->fields.limitedMissionAnnouncementComponent;
    if ( !v5 )
      sub_2213CDC(0, v4);
    LimitedMissionAnnouncementComponent__mfInitUserData(v5, 0);
  }
}


void MasterMissionComponent__SetMissionClearNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  MstMissionEntity_array *EnableMissions; // x21
  int max_length; // w8
  EventMissionMaster_o *v7; // x23
  unsigned int v8; // w26
  int32_t v9; // w20
  int32_t v10; // w22
  int32_t v11; // w24
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x25
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ClearMasterMissionList; // x0
  const MethodInfo *v17; // x3

  if ( (byte_5973B5C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B5C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
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
        sub_2213CE4(Instance);
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
                                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventMissionEntity___);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
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
          Instance = (DataManager_o *)EventMissionMaster__GetExtraMissionList(v7, HIDWORD(v13->_1.name), 0);
          if ( !Instance )
            goto LABEL_34;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_34;
          if ( Instance->fields.m_CancellationTokenSource )
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
    sub_2213CDC(Instance, v4);
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
  int nowType; // w21
  struct MasterMissionListViewManager_array *v4; // x8
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
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  struct MasterMissionListViewManager_array *v21; // x8
  struct MasterMissionListViewManager_array *v22; // x8
  struct MasterMissionListViewManager_array *v23; // x8
  const MethodInfo *v24; // x1
  MissionRewardInfoController_o *rewardInfoController; // x20
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1

  v2 = this;
  if ( (byte_5973B62 & 1) == 0 )
  {
    this = (MasterMissionComponent_o *)sub_2213A60(&MasterMissionComponent_TypeInfo);
    byte_5973B62 = 1;
  }
  nowType = v2->fields.nowType;
  if ( nowType > 1 )
  {
    if ( nowType == 2 )
    {
      missionListViewManager = v2->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_92;
      if ( LODWORD(missionListViewManager->max_length) )
      {
        this = (MasterMissionComponent_o *)missionListViewManager->m_Items[0];
        if ( !this )
          goto LABEL_92;
        this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v21 = v2->fields.missionListViewManager;
        if ( !v21 )
          goto LABEL_92;
        if ( (v21->max_length & 0xFFFFFFFE) != 0 )
        {
          this = (MasterMissionComponent_o *)v21->m_Items[1];
          if ( !this )
            goto LABEL_92;
          this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_92;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          v22 = v2->fields.missionListViewManager;
          if ( !v22 )
            goto LABEL_92;
          if ( LODWORD(v22->max_length) > 2 )
          {
            this = (MasterMissionComponent_o *)v22->m_Items[2];
            if ( !this )
              goto LABEL_92;
            this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_92;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            v23 = v2->fields.missionListViewManager;
            if ( !v23 )
              goto LABEL_92;
            if ( (v23->max_length & 0xFFFFFFFC) != 0 )
            {
              this = (MasterMissionComponent_o *)v23->m_Items[3];
              if ( !this )
                goto LABEL_92;
              this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
              if ( !this )
                goto LABEL_92;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              this = (MasterMissionComponent_o *)v2->fields.shopBtn;
              if ( !this )
                goto LABEL_92;
              ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, const char *))this->klass[1]._1.name)(
                this,
                0,
                this->klass[1]._1.namespaze);
              this = (MasterMissionComponent_o *)v2->fields.shopBtn;
              if ( !this )
                goto LABEL_92;
              ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                this,
                3,
                1,
                this->klass[1]._1.implementedInterfaces);
              MasterMissionComponent__SetExtraMissionList(v2, v24);
              goto LABEL_84;
            }
          }
        }
      }
    }
    else
    {
      if ( nowType != 3 )
        goto LABEL_85;
      v10 = v2->fields.missionListViewManager;
      if ( !v10 )
        goto LABEL_92;
      if ( LODWORD(v10->max_length) )
      {
        this = (MasterMissionComponent_o *)v10->m_Items[0];
        if ( !this )
          goto LABEL_92;
        this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v11 = v2->fields.missionListViewManager;
        if ( !v11 )
          goto LABEL_92;
        if ( (v11->max_length & 0xFFFFFFFE) != 0 )
        {
          this = (MasterMissionComponent_o *)v11->m_Items[1];
          if ( !this )
            goto LABEL_92;
          this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_92;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          v12 = v2->fields.missionListViewManager;
          if ( !v12 )
            goto LABEL_92;
          if ( LODWORD(v12->max_length) > 2 )
          {
            this = (MasterMissionComponent_o *)v12->m_Items[2];
            if ( !this )
              goto LABEL_92;
            this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_92;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            v13 = v2->fields.missionListViewManager;
            if ( !v13 )
              goto LABEL_92;
            if ( (v13->max_length & 0xFFFFFFFC) != 0 )
            {
              this = (MasterMissionComponent_o *)v13->m_Items[3];
              if ( !this )
                goto LABEL_92;
              this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
              if ( !this )
                goto LABEL_92;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (MasterMissionComponent_o *)v2->fields.shopBtn;
              if ( !this )
                goto LABEL_92;
              ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, const char *))this->klass[1]._1.name)(
                this,
                0,
                this->klass[1]._1.namespaze);
              this = (MasterMissionComponent_o *)v2->fields.shopBtn;
              if ( !this )
                goto LABEL_92;
              ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                this,
                3,
                1,
                this->klass[1]._1.implementedInterfaces);
              MasterMissionComponent__SetLimitedMissionList(v2, v14);
              goto LABEL_84;
            }
          }
        }
      }
    }
    goto LABEL_93;
  }
  if ( !nowType )
  {
    v15 = v2->fields.missionListViewManager;
    if ( !v15 )
      goto LABEL_92;
    if ( LODWORD(v15->max_length) )
    {
      this = (MasterMissionComponent_o *)v15->m_Items[0];
      if ( !this )
        goto LABEL_92;
      this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v16 = v2->fields.missionListViewManager;
      if ( !v16 )
        goto LABEL_92;
      if ( (v16->max_length & 0xFFFFFFFE) != 0 )
      {
        this = (MasterMissionComponent_o *)v16->m_Items[1];
        if ( !this )
          goto LABEL_92;
        this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_92;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v17 = v2->fields.missionListViewManager;
        if ( !v17 )
          goto LABEL_92;
        if ( LODWORD(v17->max_length) > 2 )
        {
          this = (MasterMissionComponent_o *)v17->m_Items[2];
          if ( !this )
            goto LABEL_92;
          this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_92;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          v18 = v2->fields.missionListViewManager;
          if ( !v18 )
            goto LABEL_92;
          if ( (v18->max_length & 0xFFFFFFFC) != 0 )
          {
            this = (MasterMissionComponent_o *)v18->m_Items[3];
            if ( !this )
              goto LABEL_92;
            this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_92;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (MasterMissionComponent_o *)v2->fields.shopBtn;
            if ( !this )
              goto LABEL_92;
            ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, const char *))this->klass[1]._1.name)(
              this,
              0,
              this->klass[1]._1.namespaze);
            this = (MasterMissionComponent_o *)v2->fields.shopBtn;
            if ( !this )
              goto LABEL_92;
            ((void (__fastcall *)(MasterMissionComponent_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
              this,
              3,
              1,
              this->klass[1]._1.implementedInterfaces);
            MasterMissionComponent__SetDailyMissionList(v2, v19);
            goto LABEL_84;
          }
        }
      }
    }
LABEL_93:
    sub_2213CE4(this);
  }
  if ( nowType != 1 )
    goto LABEL_85;
  v4 = v2->fields.missionListViewManager;
  if ( !v4 )
    goto LABEL_92;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_93;
  this = (MasterMissionComponent_o *)v4->m_Items[0];
  if ( !this )
    goto LABEL_92;
  this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v5 = v2->fields.missionListViewManager;
  if ( !v5 )
    goto LABEL_92;
  if ( (v5->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_93;
  this = (MasterMissionComponent_o *)v5->m_Items[1];
  if ( !this )
    goto LABEL_92;
  this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v6 = v2->fields.missionListViewManager;
  if ( !v6 )
    goto LABEL_92;
  if ( LODWORD(v6->max_length) <= 2 )
    goto LABEL_93;
  this = (MasterMissionComponent_o *)v6->m_Items[2];
  if ( !this )
    goto LABEL_92;
  this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v7 = v2->fields.missionListViewManager;
  if ( !v7 )
    goto LABEL_92;
  if ( (v7->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_93;
  this = (MasterMissionComponent_o *)v7->m_Items[3];
  if ( !this )
    goto LABEL_92;
  this = (MasterMissionComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_92;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (MasterMissionComponent_o *)v2->fields.shopBtn;
  if ( !this )
    goto LABEL_92;
  ((void (__fastcall *)(MasterMissionComponent_o *, __int64, const char *))this->klass[1]._1.name)(
    this,
    1,
    this->klass[1]._1.namespaze);
  this = (MasterMissionComponent_o *)v2->fields.shopBtn;
  if ( !this )
    goto LABEL_92;
  ((void (__fastcall *)(MasterMissionComponent_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    0,
    1,
    this->klass[1]._1.implementedInterfaces);
  MasterMissionComponent__SetWeeklyMissionList(v2, v8);
LABEL_84:
  MasterMissionComponent__checkIsOpen(v2, v9);
  nowType = v2->fields.nowType;
LABEL_85:
  rewardInfoController = v2->fields.rewardInfoController;
  this = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
  if ( (unsigned int)(nowType - 1) > 2 )
    method = (const MethodInfo *)(&dword_0 + 3);
  else
    method = (const MethodInfo *)dword_EDA7F0[nowType - 1];
  if ( !rewardInfoController )
LABEL_92:
    sub_2213CDC(this, method);
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

  if ( (byte_5973B5F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    byte_5973B5F = 1;
  }
  EventRewardSaveData__LoadWeeklyMissionData(0);
  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    goto LABEL_13;
  if ( (missionListViewManager->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_14;
  v6 = missionListViewManager->m_Items[1];
  VaildWeeklyMissionData = (System_Int32_array *)MasterMissionComponent__getVaildWeeklyMissionData(this, v4);
  if ( !this->fields.currentEventIdList )
    goto LABEL_13;
  v7 = (System_Collections_Generic_List_EventMissionEntity__o *)VaildWeeklyMissionData;
  VaildWeeklyMissionData = System_Collections_Generic_List_int___ToArray(
                             this->fields.currentEventIdList,
                             (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v6 )
    goto LABEL_13;
  MasterMissionListViewManager__CreateList(v6, v7, VaildWeeklyMissionData, 1, this->fields.reDispAction, 0);
  v8 = this->fields.missionListViewManager;
  if ( !v8 )
    goto LABEL_13;
  if ( (v8->max_length & 0xFFFFFFFE) == 0 )
LABEL_14:
    sub_2213CE4(VaildWeeklyMissionData);
  v9 = (MissionListViewManager_o *)v8->m_Items[1];
  VaildWeeklyMissionData = (System_Int32_array *)MasterMissionComponent_TypeInfo;
  if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v4);
  if ( !v9 )
LABEL_13:
    sub_2213CDC(VaildWeeklyMissionData, v4);
  MissionListViewManager__SetMode_55044380(v9, 1, MasterMissionComponent_TypeInfo->static_fields->SLIDE_IN_TIME, 0, 0);
}


void MasterMissionComponent__SetupCompleteBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  CompleteMissionViewController_o *completeMissionViewController; // x0

  completeMissionViewController = this->fields.completeMissionViewController;
  if ( !completeMissionViewController )
    sub_2213CDC(0, method);
  CompleteMissionViewController__Refresh(completeMissionViewController, 0);
}


void MasterMissionComponent__SetupExRoomQuestBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *exRoomQuestBtn; // x20
  __int64 v4; // x1
  struct UICommonButton_o *IsFeatureOpen; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *exRoomQuestBtnSprite; // x20
  __int64 v9; // x1
  UISprite_o *v10; // x19

  if ( (byte_5973B4E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18250/*"btn_exroom_02"*/);
    byte_5973B4E = 1;
  }
  exRoomQuestBtn = (UnityEngine_Object_o *)this->fields.exRoomQuestBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(exRoomQuestBtn, 0, 0) )
  {
    IsFeatureOpen = this->fields.exRoomQuestBtn;
    if ( !IsFeatureOpen
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsFeatureOpen, 0),
          IsFeatureOpen = (struct UICommonButton_o *)ExRoomRootComponent__IsFeatureOpen(1, 0),
          !gameObject) )
    {
      sub_2213CDC(IsFeatureOpen, v4);
    }
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)IsFeatureOpen & 1, 0);
    exRoomQuestBtnSprite = (UnityEngine_Object_o *)this->fields.exRoomQuestBtnSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(exRoomQuestBtnSprite, 0, 0) )
    {
      v10 = this->fields.exRoomQuestBtnSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
      AtlasManager__SetBanner(v10, (System_String_o *)StringLiteral_18250/*"btn_exroom_02"*/, 0);
    }
  }
}


void MasterMissionComponent__SetupShopBtn(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t FragmentCountToExchangeForStone; // w8
  AtlasManager_c *v7; // x0
  UISprite_o *shopBtnSp; // x20

  if ( (byte_5973B4D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_18246/*"btn_event_3"*/);
    byte_5973B4D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Instance, 0);
  v7 = AtlasManager_TypeInfo;
  shopBtnSp = this->fields.shopBtnSp;
  this->fields.stonePrice = FragmentCountToExchangeForStone;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, v5);
  AtlasManager__SetBanner(shopBtnSp, (System_String_o *)StringLiteral_18246/*"btn_event_3"*/, 0);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0);
}


bool MasterMissionComponent__ShouldPlayedStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t UserStoneFragmentNum; // w0
  const MethodInfo *v6; // x2
  int32_t ExchangeStoneCount; // w19

  if ( (byte_5973B84 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5973B84 = 1;
  }
  if ( this->fields.nowType != 1 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, UserStoneFragmentNum, v6);
  return ExchangeStoneCount >= StoneShopMaster__GetPayMultiTimePrice(0);
}


void MasterMissionComponent__StopStoneButtonEffect(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *btnEffectPrefab; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5973B86 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B86 = 1;
  }
  btnEffectPrefab = (UnityEngine_Object_o *)this->fields.btnEffectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(btnEffectPrefab, 0, 0) )
  {
    v5 = this->fields.btnEffectPrefab;
    if ( !v5 )
      sub_2213CDC(0, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0);
    v7 = (UnityEngine_Object_o *)this->fields.btnEffectPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(v7, 0);
    this->fields.btnEffectPrefab = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.btnEffectPrefab, 0, v8, v9, v10, v11, v12, v13);
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
    sub_2213CE4(this);
  this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  MasterMissionListViewManager__unAcceptableDlg((MasterMissionListViewManager_o *)this, 0);
}


void MasterMissionComponent__Update(MasterMissionComponent_o *this, const MethodInfo *method)
{
  if ( !this->fields.isOpenOverDlg )
    MasterMissionComponent__reDispMissionList(this, method);
}


void MasterMissionComponent__UpdateEventInfos(MasterMissionComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_5973B80 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5973B80 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( v4 )
  {
    if ( !mInstance )
      sub_2213CDC(v4, v5);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  int32_t ExchangeStoneCount; // w23
  MasterMissionComponent_c *v17; // x0
  UILabel_o *stoneConvertCount; // x22
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v20; // w1
  __int64 v21; // x1
  UnityEngine_Object_o *btnEffectBasePrefab; // x22
  const MethodInfo *v23; // x1
  AssetLoader_LoadEndDataHandler_o *v24; // x19
  __int64 v25; // x1
  int32_t v26; // w20
  const MethodInfo *v27; // x1
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5973B83 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent___c__DisplayClass186_0__UpdateStoneExchangeCount_b__0__);
    sub_2213A60(&MasterMissionComponent___c__DisplayClass186_0_TypeInfo);
    sub_2213A60(&StringLiteral_6124/*"Effect/Common"*/);
    byte_5973B83 = 1;
  }
  v28 = 0;
  v5 = sub_2213CCC(MasterMissionComponent___c__DisplayClass186_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass186_0___ctor((MasterMissionComponent___c__DisplayClass186_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_27;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  ExchangeStoneCount = MasterMissionComponent__GetExchangeStoneCount(this, fragmentCount, v14);
  v17 = MasterMissionComponent_TypeInfo;
  *(_DWORD *)(v5 + 24) = ExchangeStoneCount;
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v15);
    v17 = MasterMissionComponent_TypeInfo;
  }
  stoneConvertCount = this->fields.stoneConvertCount;
  STONE_EXCHENGE_DISP_LIMIT = v17->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( ExchangeStoneCount > STONE_EXCHENGE_DISP_LIMIT )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v15);
      STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
    }
    v28 = STONE_EXCHENGE_DISP_LIMIT;
    stoneConvertLimit = System_Int32__ToString((int32_t)&v28, 0);
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
    sub_2213CDC(stoneConvertLimit, v7);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Equality(btnEffectBasePrefab, 0, 0) )
  {
    v24 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v24,
      (Il2CppObject *)v5,
      Method_MasterMissionComponent___c__DisplayClass186_0__UpdateStoneExchangeCount_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6124/*"Effect/Common"*/, v24, 1, 0, 0);
  }
  else
  {
    MasterMissionComponent__StopStoneButtonEffect(this, v23);
    if ( this->fields.nowType == 1 )
    {
      v26 = *(_DWORD *)(v5 + 24);
      if ( v26 >= StoneShopMaster__GetPayMultiTimePrice(0) )
        MasterMissionComponent__PlayStoneButtonEffect(this, v27);
    }
  }
}


void MasterMissionComponent___AcceptReward_b__167_0(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MasterMissionComponent__SetBtnEnable(this, 1, v2);
}


void MasterMissionComponent___LoadNotificationEnd_b__121_0(MasterMissionComponent_o *this, const MethodInfo *method)
{
  this->fields.endFadein = 1;
}


void MasterMissionComponent___OnClickCompleteMissionBtn_b__126_0(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_5973B8F & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5973B8F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0);
  MasterMissionComponent__OpenCompleteMission(this, v5, v6);
}


void MasterMissionComponent___OpenPresentBox_b__170_0(
        MasterMissionComponent_o *this,
        bool hasGetServant,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ErrorDialog_c *klass; // x8
  ErrorDialog_c *v7; // x8
  __int64 *v8; // x8

  if ( (byte_5973B91 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_12171/*"SERVANT_OVER"*/);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_5973B91 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__CloseUsrPresentList(Instance, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance->fields.errorDialog->klass;
    if ( !klass )
      goto LABEL_30;
    Instance = *(CommonUI_o **)&klass->_2.element_size;
    if ( !Instance )
      goto LABEL_30;
    if ( ScrTerminalListTop__get_IsActiveAnyEarth((ScrTerminalListTop_o *)Instance, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
        Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
      }
      v7 = Instance->fields.errorDialog->klass;
      if ( !v7 )
        goto LABEL_30;
      Instance = *(CommonUI_o **)&v7->_2.element_size;
      if ( !Instance )
        goto LABEL_30;
      ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0);
    }
  }
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !this->fields.overflowType )
  {
    if ( Instance )
    {
      v8 = &StringLiteral_3582/*"CLICK_CANCEL"*/;
      goto LABEL_29;
    }
LABEL_30:
    sub_2213CDC(Instance, v5);
  }
  if ( !Instance )
    goto LABEL_30;
  v8 = &StringLiteral_12171/*"SERVANT_OVER"*/;
LABEL_29:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionComponent___Open_b__120_0(
        MasterMissionComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_5973B8E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_5973B8E = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !stoneInfoLabel )
    sub_2213CDC(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0);
}


void MasterMissionComponent___PresentBoxOver_b__169_0(
        MasterMissionComponent_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x0
  PresentBoxOverDialog_o *presentBoxOverDialog; // x19
  System_Action_o *v16; // x20

  if ( (byte_5973B90 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent___c__DisplayClass169_0__PresentBoxOver_b__1__);
    sub_2213A60(&MasterMissionComponent___c__DisplayClass169_0_TypeInfo);
    byte_5973B90 = 1;
  }
  v5 = sub_2213CCC(MasterMissionComponent___c__DisplayClass169_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass169_0___ctor((MasterMissionComponent___c__DisplayClass169_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = System_Action_TypeInfo,
        presentBoxOverDialog = this->fields.presentBoxOverDialog,
        *(_BYTE *)(v5 + 16) = isPresentBoxOpen,
        v16 = (System_Action_o *)sub_2213CCC(v14),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_MasterMissionComponent___c__DisplayClass169_0__PresentBoxOver_b__1__,
          0),
        !presentBoxOverDialog) )
  {
    sub_2213CDC(v6, v7);
  }
  PresentBoxOverDialog__Close_38897824(presentBoxOverDialog, v16, 0);
}


void MasterMissionComponent___setRecieveModifyItem_b__173_0(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973B92 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5641/*"END_DISP"*/);
    byte_5973B92 = 1;
  }
  MasterMissionComponent__setMissionCompleteNum(this, method);
  MasterMissionComponent__SetMissionClearNum(this, v3);
  MasterMissionComponent__SetLimitedMissionRestTime(this, v4);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5641/*"END_DISP"*/, 0);
}


void MasterMissionComponent__checkIsOpen(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v3; // x0
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  MstMissionDisplayInfoMaster_o *v6; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct MstMissionMaster_o *mstMissionMst; // x8
  bool v15; // w22
  bool v16; // w23
  int32_t v17; // w1
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  LocalizationManager_c *v26; // x0
  __int64 *v27; // x24
  __int64 *v28; // x25
  struct System_String_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_String_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_5973B53 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__);
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
    sub_2213A60(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9181/*"MST_REMISSON_MSG"*/);
    sub_2213A60(&StringLiteral_9179/*"MST_REDISP_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_9182/*"MST_REMISSON_TITLE_TXT"*/);
    sub_2213A60(&StringLiteral_9180/*"MST_REDISP_TITLE_TXT"*/);
    byte_5973B53 = 1;
  }
  v3 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isNotNext = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v3);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionDisplayInfoMaster___);
  if ( !Instance )
    goto LABEL_26;
  v6 = (MstMissionDisplayInfoMaster_o *)Instance;
  Instance = (DataManager_o *)this->fields.mstMissionMst;
  if ( !Instance )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)v6->fields.list;
  Instance = (DataManager_o *)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  mstMissionMst = this->fields.mstMissionMst;
  if ( !mstMissionMst )
    goto LABEL_26;
  this->fields.currentType = mstMissionMst->fields.currentType;
  if ( Instance && Instance->fields.m_CancellationTokenSource && !MstMissionMaster__IsOpenNow(mstMissionMst, 0) )
  {
    Instance = (DataManager_o *)this->fields.mstMissionMst;
    if ( Instance )
    {
      v15 = !MstMissionMaster__IsBefOpenTime((MstMissionMaster_o *)Instance, 0);
      goto LABEL_11;
    }
LABEL_26:
    sub_2213CDC(Instance, v5);
  }
  v15 = 0;
LABEL_11:
  v16 = list
     && System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__get_Count__) >= 1
     && !MstMissionDisplayInfoMaster__IsOpenNow(v6, 0)
     && !MstMissionDisplayInfoMaster__IsBefOpenTime(v6, 0);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.titleTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.titleTxt, v17, v8, v9, v10, v11, v12, v13);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.msgTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.msgTxt, v18, v19, v20, v21, v22, v23, v24);
  if ( v15 )
  {
    v26 = LocalizationManager_TypeInfo;
    v27 = &StringLiteral_9181/*"MST_REMISSON_MSG"*/;
    v28 = &StringLiteral_9182/*"MST_REMISSON_TITLE_TXT"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_17:
      j_il2cpp_runtime_class_init_0(v26, v25);
  }
  else
  {
    if ( !v16 )
      goto LABEL_22;
    v26 = LocalizationManager_TypeInfo;
    v27 = &StringLiteral_9179/*"MST_REDISP_MSG"*/;
    v28 = &StringLiteral_9180/*"MST_REDISP_TITLE_TXT"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_17;
  }
  v29 = LocalizationManager__Get((System_String_o *)*v28, 0);
  this->fields.titleTxt = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.titleTxt, (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = LocalizationManager__Get((System_String_o *)*v27, 0);
  this->fields.msgTxt = v36;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.msgTxt, (int32_t)v36, v37, v38, v39, v40, v41, v42);
LABEL_22:
  this->fields.isNotNext = v15 || v16;
}


void MasterMissionComponent__destroySvtFigure(MasterMissionComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_2213CDC(0, method);
  StandFigureBack__DestroyFigure(standFigureBack, 0);
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getVaildDailyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  MasterMissionComponent_o *v7; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int v10; // w10
  System_String_o *size; // x2
  int v12; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v17; // w27
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  intptr_t v32; // x8
  int32_t **Enumerator; // x0
  __int64 v34; // x1
  int32_t *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  int32_t *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  MstMissionDisplayInfoEntity_o *v43; // x0
  __int64 v44; // x1
  MstMissionDisplayInfoEntity_o *v45; // x21
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v54; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  int32_t *v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  int v67; // w8
  int32_t v68; // w23
  int32_t v69; // w21
  int32_t **v71; // [xsp+18h] [xbp-58h]

  v7 = this;
  if ( (byte_5973B55 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B55 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_79;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  v10 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v10;
  if ( !currentMstMissionEntList )
    goto LABEL_79;
  size = (System_String_o *)(unsigned int)currentMstMissionEntList->fields._size;
  v12 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v12;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, (int32_t)size, 0);
  v7->fields.currentMissionDispInfoEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields.currentMissionDispInfoEnt, 0, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_79;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_79;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_2213CE4(this);
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
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
          this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
          if ( !this )
            break;
          m_CachedPtr = this->fields.m_CachedPtr;
          method = (const MethodInfo *)HIDWORD(v19->_1.name);
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
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * v31;
            LODWORD(this->fields.m_CancellationTokenSource) = v31 + 1;
            *(_QWORD *)(v32 + 32) = v19;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v19, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_29;
    }
LABEL_79:
    sub_2213CDC(this, method);
  }
LABEL_29:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_79;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_79;
  Enumerator = (int32_t **)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  v71 = Enumerator;
  while ( 1 )
  {
    if ( !v71 )
      sub_2213CDC(Enumerator, v34);
    v35 = *v71;
    v36 = *((unsigned __int16 *)*v71 + 151);
    if ( *((_WORD *)*v71 + 151) )
    {
      v37 = (int *)(*((_QWORD *)v35 + 22) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_39;
      }
      v38 = (__int64)&v35[4 * *v37 + 78];
    }
    else
    {
LABEL_39:
      v38 = sub_224BC3C(v71, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(int32_t **, _QWORD))v38)(v71, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *v71;
    v40 = *((unsigned __int16 *)*v71 + 151);
    if ( *((_WORD *)*v71 + 151) )
    {
      v41 = (int *)(*((_QWORD *)v39 + 22) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v41 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_46;
      }
      v42 = (__int64)&v39[4 * *v41 + 78];
    }
    else
    {
LABEL_46:
      v42 = sub_224BC3C(v71, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v43 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(int32_t **, _QWORD))v42)(
                                             v71,
                                             *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( !v43 )
      sub_2213CDC(0, v44);
    Enumerator = (int32_t **)MstMissionDisplayInfoEntity__isOpenNow(v43, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      p_guideImageId = &v45->fields.guideImageId;
      if ( v45->fields.guideImageId <= 0 )
      {
        Enumerator = (int32_t **)MasterMissionComponent_TypeInfo;
        if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v34);
          Enumerator = (int32_t **)MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = Enumerator[23];
      }
      if ( !v7 )
        sub_2213CDC(Enumerator, v34);
      v7->fields.currentEventSvtId = *p_guideImageId;
      guideLimitCount = v45->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v54 = MasterMissionComponent_TypeInfo;
        if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v34);
          v54 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v54->static_fields->DEFAULT_LIMITCNT;
      }
      talkIds = v45->fields.talkIds;
      v7->fields.currentEventSvtLimitCnt = guideLimitCount;
      v7->fields.voiceNameList = talkIds;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.voiceNameList,
        (int32_t)talkIds,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      id = v45->fields.id;
      v7->fields.currentMissionDispInfoEnt = v45;
      v7->fields.currentDispId = id;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.currentMissionDispInfoEnt,
        (int32_t)v45,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
    }
  }
  v63 = *v71;
  v64 = *((unsigned __int16 *)*v71 + 151);
  if ( *((_WORD *)*v71 + 151) )
  {
    v65 = (int *)(*((_QWORD *)v63 + 22) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_64;
    }
    v66 = (__int64)&v63[4 * *v65 + 78];
  }
  else
  {
LABEL_64:
    v66 = sub_224BC3C(v71, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(int32_t **, _QWORD))v66)(v71, *(_QWORD *)(v66 + 8));
  if ( v14 )
  {
    v67 = v14->fields._size;
    if ( v67 < 1 )
    {
      return 0;
    }
    else
    {
      v7->fields.totalMissionNum = v67;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v14,
                                           0,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_79;
      v68 = this->fields.m_CachedPtr;
      if ( v14->fields._size >= 1 )
      {
        v69 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v14,
                                               v69,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_79;
          if ( v68 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v14,
                                                 v69,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_79;
            v68 = this->fields.m_CachedPtr;
          }
        }
        while ( ++v69 < v14->fields._size );
      }
      v7->fields.currentMissionId = v68;
    }
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v14;
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getVaildLimitedMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  MasterMissionComponent_o *v7; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int v10; // w10
  System_String_o *size; // x2
  int v12; // w9
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v14; // x20
  System_Collections_Generic_List_object__o *v15; // x21
  struct MstMissionEntity_array *mstMissionList; // x25
  int max_length; // w8
  unsigned int v18; // w28
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  intptr_t v33; // x8
  int32_t **Enumerator; // x0
  __int64 v35; // x1
  int32_t *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  int32_t *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  MstMissionDisplayInfoEntity_o *v44; // x0
  __int64 v45; // x1
  MstMissionDisplayInfoEntity_o *v46; // x22
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int32_t *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v55; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t *v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  int v68; // w8
  int v69; // w25
  int32_t v70; // w22
  int32_t **v72; // [xsp+18h] [xbp-58h]

  v7 = this;
  if ( (byte_5973B58 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B58 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_86;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  v10 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v10;
  if ( !currentMstMissionEntList )
    goto LABEL_86;
  size = (System_String_o *)(unsigned int)currentMstMissionEntList->fields._size;
  v12 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v12;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, (int32_t)size, 0);
  v7->fields.currentMissionDispInfoEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields.currentMissionDispInfoEnt, 0, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_86;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_2213CE4(this);
      v19 = &mstMissionList->obj.klass + (int)v18;
      v20 = v19[4];
      if ( !v20 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v19[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__GetLimitedMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v20->_1.name),
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
              (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
            if ( !this )
              break;
            m_CachedPtr = this->fields.m_CachedPtr;
            method = (const MethodInfo *)HIDWORD(v20->_1.name);
            v28 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              break;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                (int32_t)method,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = (_DWORD)method;
            }
            this = (MasterMissionComponent_o *)v7->fields.currentMstMissionEntList;
            if ( !this )
              break;
            v30 = this->fields.m_CachedPtr;
            v31 = Method_System_Collections_Generic_List_MstMissionEntity__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v30 )
              break;
            v32 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v20,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = v30 + 8 * v32;
              LODWORD(this->fields.m_CancellationTokenSource) = v32 + 1;
              *(_QWORD *)(v33 + 32) = v20;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 32), (int32_t)v20, v21, v22, v23, v24, v25, v26);
            }
          }
        }
      }
      else
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__getClearMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v20->_1.name),
                                             5,
                                             0);
        if ( !v14 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v14,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_33;
    }
LABEL_86:
    sub_2213CDC(this, method);
  }
LABEL_33:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_86;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_86;
  Enumerator = (int32_t **)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  v72 = Enumerator;
  while ( 1 )
  {
    if ( !v72 )
      sub_2213CDC(Enumerator, v35);
    v36 = *v72;
    v37 = *((unsigned __int16 *)*v72 + 151);
    if ( *((_WORD *)*v72 + 151) )
    {
      v38 = (int *)(*((_QWORD *)v36 + 22) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_43;
      }
      v39 = (__int64)&v36[4 * *v38 + 78];
    }
    else
    {
LABEL_43:
      v39 = sub_224BC3C(v72, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(int32_t **, _QWORD))v39)(v72, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *v72;
    v41 = *((unsigned __int16 *)*v72 + 151);
    if ( *((_WORD *)*v72 + 151) )
    {
      v42 = (int *)(*((_QWORD *)v40 + 22) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v42 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_50;
      }
      v43 = (__int64)&v40[4 * *v42 + 78];
    }
    else
    {
LABEL_50:
      v43 = sub_224BC3C(v72, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v44 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(int32_t **, _QWORD))v43)(
                                             v72,
                                             *(_QWORD *)(v43 + 8));
    v46 = v44;
    if ( !v44 )
      sub_2213CDC(0, v45);
    Enumerator = (int32_t **)MstMissionDisplayInfoEntity__isOpenNow(v44, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      p_guideImageId = &v46->fields.guideImageId;
      if ( v46->fields.guideImageId <= 0 )
      {
        Enumerator = (int32_t **)MasterMissionComponent_TypeInfo;
        if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v35);
          Enumerator = (int32_t **)MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = Enumerator[23];
      }
      if ( !v7 )
        sub_2213CDC(Enumerator, v35);
      v7->fields.currentEventSvtId = *p_guideImageId;
      guideLimitCount = v46->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v55 = MasterMissionComponent_TypeInfo;
        if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v35);
          v55 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v55->static_fields->DEFAULT_LIMITCNT;
      }
      talkIds = v46->fields.talkIds;
      v7->fields.currentEventSvtLimitCnt = guideLimitCount;
      v7->fields.voiceNameList = talkIds;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.voiceNameList,
        (int32_t)talkIds,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      id = v46->fields.id;
      v7->fields.currentMissionDispInfoEnt = v46;
      v7->fields.currentDispId = id;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.currentMissionDispInfoEnt,
        (int32_t)v46,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
  }
  v64 = *v72;
  v65 = *((unsigned __int16 *)*v72 + 151);
  if ( *((_WORD *)*v72 + 151) )
  {
    v66 = (int *)(*((_QWORD *)v64 + 22) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_68;
    }
    v67 = (__int64)&v64[4 * *v66 + 78];
  }
  else
  {
LABEL_68:
    v67 = sub_224BC3C(v72, System_IDisposable_TypeInfo, 0);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(int32_t **, _QWORD))v67)(v72, *(_QWORD *)(v67 + 8));
  if ( v15 && (v68 = v15->fields._size, v68 >= 1) )
  {
    v7->fields.totalMissionNum = v68;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v15,
                                         0,
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_86;
    if ( v15->fields._size >= 1 )
    {
      v69 = this->fields.m_CachedPtr;
      v70 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v15,
                                             v70,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_86;
        if ( v69 > SLODWORD(this->fields.m_CachedPtr) )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v15,
                                               v70,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_86;
          v69 = this->fields.m_CachedPtr;
        }
      }
      while ( ++v70 < v15->fields._size );
    }
    v7->fields.currentMissionId = 0;
    if ( !v14 )
      goto LABEL_86;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)v15,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v14 )
      goto LABEL_86;
    if ( v14->fields._size <= 0 )
      return 0;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v14;
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getVaildWeeklyMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  MasterMissionComponent_o *v7; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int v10; // w10
  System_String_o *size; // x2
  int v12; // w9
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v14; // x20
  System_Collections_Generic_List_object__o *v15; // x21
  struct MstMissionEntity_array *mstMissionList; // x26
  int max_length; // w8
  unsigned int v18; // w29
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x23
  MasterMissionComponent_o *v21; // x24
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  intptr_t v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  intptr_t v34; // x8
  int32_t **Enumerator; // x0
  __int64 v36; // x1
  int32_t *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  int32_t *v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  MstMissionDisplayInfoEntity_o *v45; // x0
  __int64 v46; // x1
  MstMissionDisplayInfoEntity_o *v47; // x22
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v56; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t *v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  int v69; // w8
  int32_t v70; // w24
  int32_t v71; // w22
  int32_t **v73; // [xsp+18h] [xbp-68h]

  v7 = this;
  if ( (byte_5973B56 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B56 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_85;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  v10 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v10;
  if ( !currentMstMissionEntList )
    goto LABEL_85;
  size = (System_String_o *)(unsigned int)currentMstMissionEntList->fields._size;
  v12 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v12;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, (int32_t)size, 0);
  v7->fields.currentMissionDispInfoEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields.currentMissionDispInfoEnt, 0, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_85;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_2213CE4(this);
      v19 = &mstMissionList->obj.klass + (int)v18;
      v20 = v19[4];
      if ( !v20 )
        break;
      this = (MasterMissionComponent_o *)MstMissionEntity__isOpenNow((MstMissionEntity_o *)v19[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__GetWeeklyMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v20->_1.name),
                                             0);
        if ( !this )
          break;
        v21 = this;
        if ( this->fields.m_CancellationTokenSource )
        {
          this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
          if ( !this )
            break;
          m_CachedPtr = this->fields.m_CachedPtr;
          method = (const MethodInfo *)HIDWORD(v20->_1.name);
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              (int32_t)method,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
            (System_Collections_Generic_IEnumerable_T__o *)v21,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = v31 + 8 * v33;
            LODWORD(this->fields.m_CancellationTokenSource) = v33 + 1;
            *(_QWORD *)(v34 + 32) = v20;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 32), (int32_t)v20, v25, v26, v27, v28, v29, v30);
          }
        }
      }
      else
      {
        if ( !MasterData_object )
          break;
        this = (MasterMissionComponent_o *)EventMissionMaster__getClearMasterMissionList(
                                             (EventMissionMaster_o *)MasterData_object,
                                             HIDWORD(v20->_1.name),
                                             2,
                                             0);
        if ( !v14 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v14,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_32;
    }
LABEL_85:
    sub_2213CDC(this, method);
  }
LABEL_32:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_85;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_85;
  Enumerator = (int32_t **)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  v73 = Enumerator;
  while ( 1 )
  {
    if ( !v73 )
      sub_2213CDC(Enumerator, v36);
    v37 = *v73;
    v38 = *((unsigned __int16 *)*v73 + 151);
    if ( *((_WORD *)*v73 + 151) )
    {
      v39 = (int *)(*((_QWORD *)v37 + 22) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_42;
      }
      v40 = (__int64)&v37[4 * *v39 + 78];
    }
    else
    {
LABEL_42:
      v40 = sub_224BC3C(v73, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(int32_t **, _QWORD))v40)(v73, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    v41 = *v73;
    v42 = *((unsigned __int16 *)*v73 + 151);
    if ( *((_WORD *)*v73 + 151) )
    {
      v43 = (int *)(*((_QWORD *)v41 + 22) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v43 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_49;
      }
      v44 = (__int64)&v41[4 * *v43 + 78];
    }
    else
    {
LABEL_49:
      v44 = sub_224BC3C(v73, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v45 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(int32_t **, _QWORD))v44)(
                                             v73,
                                             *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      sub_2213CDC(0, v46);
    Enumerator = (int32_t **)MstMissionDisplayInfoEntity__isOpenNow(v45, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      p_guideImageId = &v47->fields.guideImageId;
      if ( v47->fields.guideImageId <= 0 )
      {
        Enumerator = (int32_t **)MasterMissionComponent_TypeInfo;
        if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v36);
          Enumerator = (int32_t **)MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = Enumerator[23];
      }
      if ( !v7 )
        sub_2213CDC(Enumerator, v36);
      v7->fields.currentEventSvtId = *p_guideImageId;
      guideLimitCount = v47->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v56 = MasterMissionComponent_TypeInfo;
        if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v36);
          v56 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v56->static_fields->DEFAULT_LIMITCNT;
      }
      talkIds = v47->fields.talkIds;
      v7->fields.currentEventSvtLimitCnt = guideLimitCount;
      v7->fields.voiceNameList = talkIds;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.voiceNameList,
        (int32_t)talkIds,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      id = v47->fields.id;
      v7->fields.currentMissionDispInfoEnt = v47;
      v7->fields.currentDispId = id;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.currentMissionDispInfoEnt,
        (int32_t)v47,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
  }
  v65 = *v73;
  v66 = *((unsigned __int16 *)*v73 + 151);
  if ( *((_WORD *)*v73 + 151) )
  {
    v67 = (int *)(*((_QWORD *)v65 + 22) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_67;
    }
    v68 = (__int64)&v65[4 * *v67 + 78];
  }
  else
  {
LABEL_67:
    v68 = sub_224BC3C(v73, System_IDisposable_TypeInfo, 0);
  }
  this = (MasterMissionComponent_o *)(*(__int64 (__fastcall **)(int32_t **, _QWORD))v68)(v73, *(_QWORD *)(v68 + 8));
  if ( v15 && (v69 = v15->fields._size, v69 >= 1) )
  {
    v7->fields.totalMissionNum = v69;
    this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                         v15,
                                         0,
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    if ( !this )
      goto LABEL_85;
    v70 = this->fields.m_CachedPtr;
    if ( v15->fields._size >= 1 )
    {
      v71 = 0;
      do
      {
        this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                             v15,
                                             v71,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
        if ( !this )
          goto LABEL_85;
        if ( v70 > SLODWORD(this->fields.m_CachedPtr) )
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v15,
                                               v71,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_85;
          v70 = this->fields.m_CachedPtr;
        }
      }
      while ( ++v71 < v15->fields._size );
    }
    v7->fields.currentMissionId = v70;
    if ( !v14 )
      goto LABEL_85;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)v15,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
  }
  else
  {
    if ( !v14 )
      goto LABEL_85;
    if ( v14->fields._size <= 0 )
      return 0;
  }
  return (System_Collections_Generic_List_EventMissionEntity__o *)v14;
}


System_Collections_Generic_List_EventMissionEntity__o *MasterMissionComponent__getValidExtraMissionData(
        MasterMissionComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  MasterMissionComponent_o *v7; // x19
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int v10; // w10
  System_String_o *size; // x2
  int v12; // w9
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  struct MstMissionEntity_array *mstMissionList; // x23
  int max_length; // w8
  unsigned int v17; // w27
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  intptr_t v32; // x8
  int32_t **Enumerator; // x0
  __int64 v34; // x1
  int32_t *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  int32_t *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  MstMissionDisplayInfoEntity_o *v43; // x0
  __int64 v44; // x1
  MstMissionDisplayInfoEntity_o *v45; // x21
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t *p_guideImageId; // x8
  int guideLimitCount; // w8
  MasterMissionComponent_c *v54; // x0
  struct System_String_array *talkIds; // x1
  int32_t id; // w8
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  int32_t *v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  int v67; // w8
  int v68; // w23
  int32_t v69; // w21
  int32_t **v71; // [xsp+18h] [xbp-58h]

  v7 = this;
  if ( (byte_5973B57 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_MstMissionDisplayInfoMaster__MstMissionDisplayInfoEntity__int__getEntityList__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    this = (MasterMissionComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973B57 = 1;
  }
  currentEventIdList = v7->fields.currentEventIdList;
  v7->fields.currentIdx = 0;
  v7->fields.totalMissionNum = 0;
  if ( !currentEventIdList )
    goto LABEL_79;
  currentMstMissionEntList = v7->fields.currentMstMissionEntList;
  v10 = currentEventIdList->fields._version + 1;
  currentEventIdList->fields._size = 0;
  currentEventIdList->fields._version = v10;
  if ( !currentMstMissionEntList )
    goto LABEL_79;
  size = (System_String_o *)(unsigned int)currentMstMissionEntList->fields._size;
  v12 = currentMstMissionEntList->fields._version + 1;
  currentMstMissionEntList->fields._size = 0;
  currentMstMissionEntList->fields._version = v12;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)currentMstMissionEntList->fields._items, 0, (int32_t)size, 0);
  v7->fields.currentMissionDispInfoEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields.currentMissionDispInfoEnt, 0, size, v2, v3, v4, v5, v6);
  this = (MasterMissionComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_79;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  mstMissionList = v7->fields.mstMissionList;
  if ( !mstMissionList )
    goto LABEL_79;
  max_length = mstMissionList->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_2213CE4(this);
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
              (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMissionEntity__AddRange__);
            this = (MasterMissionComponent_o *)v7->fields.currentEventIdList;
            if ( !this )
              break;
            m_CachedPtr = this->fields.m_CachedPtr;
            method = (const MethodInfo *)HIDWORD(v19->_1.name);
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
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = v29 + 8 * v31;
              LODWORD(this->fields.m_CancellationTokenSource) = v31 + 1;
              *(_QWORD *)(v32 + 32) = v19;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v19, v20, v21, v22, v23, v24, v25);
            }
          }
        }
      }
      max_length = mstMissionList->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_29;
    }
LABEL_79:
    sub_2213CDC(this, method);
  }
LABEL_29:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (MasterMissionComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MstMissionDisplayInfoMaster___);
  if ( !this )
    goto LABEL_79;
  this = (MasterMissionComponent_o *)this->fields.titlePrefab;
  if ( !this )
    goto LABEL_79;
  Enumerator = (int32_t **)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_MstMissionDisplayInfoEntity__GetEnumerator__);
  v71 = Enumerator;
  while ( 1 )
  {
    if ( !v71 )
      sub_2213CDC(Enumerator, v34);
    v35 = *v71;
    v36 = *((unsigned __int16 *)*v71 + 151);
    if ( *((_WORD *)*v71 + 151) )
    {
      v37 = (int *)(*((_QWORD *)v35 + 22) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_39;
      }
      v38 = (__int64)&v35[4 * *v37 + 78];
    }
    else
    {
LABEL_39:
      v38 = sub_224BC3C(v71, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(int32_t **, _QWORD))v38)(v71, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *v71;
    v40 = *((unsigned __int16 *)*v71 + 151);
    if ( *((_WORD *)*v71 + 151) )
    {
      v41 = (int *)(*((_QWORD *)v39 + 22) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__c **)v41 - 1) != System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_46;
      }
      v42 = (__int64)&v39[4 * *v41 + 78];
    }
    else
    {
LABEL_46:
      v42 = sub_224BC3C(v71, System_Collections_Generic_IEnumerator_MstMissionDisplayInfoEntity__TypeInfo, 0);
    }
    v43 = (MstMissionDisplayInfoEntity_o *)(*(__int64 (__fastcall **)(int32_t **, _QWORD))v42)(
                                             v71,
                                             *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( !v43 )
      sub_2213CDC(0, v44);
    Enumerator = (int32_t **)MstMissionDisplayInfoEntity__isOpenNow(v43, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      p_guideImageId = &v45->fields.guideImageId;
      if ( v45->fields.guideImageId <= 0 )
      {
        Enumerator = (int32_t **)MasterMissionComponent_TypeInfo;
        if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v34);
          Enumerator = (int32_t **)MasterMissionComponent_TypeInfo;
        }
        p_guideImageId = Enumerator[23];
      }
      if ( !v7 )
        sub_2213CDC(Enumerator, v34);
      v7->fields.currentEventSvtId = *p_guideImageId;
      guideLimitCount = v45->fields.guideLimitCount;
      if ( guideLimitCount <= 0 )
      {
        v54 = MasterMissionComponent_TypeInfo;
        if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v34);
          v54 = MasterMissionComponent_TypeInfo;
        }
        guideLimitCount = v54->static_fields->DEFAULT_LIMITCNT;
      }
      talkIds = v45->fields.talkIds;
      v7->fields.currentEventSvtLimitCnt = guideLimitCount;
      v7->fields.voiceNameList = talkIds;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.voiceNameList,
        (int32_t)talkIds,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      id = v45->fields.id;
      v7->fields.currentMissionDispInfoEnt = v45;
      v7->fields.currentDispId = id;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.currentMissionDispInfoEnt,
        (int32_t)v45,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
    }
  }
  v63 = *v71;
  v64 = *((unsigned __int16 *)*v71 + 151);
  if ( *((_WORD *)*v71 + 151) )
  {
    v65 = (int *)(*((_QWORD *)v63 + 22) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_64;
    }
    v66 = (__int64)&v63[4 * *v65 + 78];
  }
  else
  {
LABEL_64:
    v66 = sub_224BC3C(v71, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(int32_t **, _QWORD))v66)(v71, *(_QWORD *)(v66 + 8));
  if ( v14 )
  {
    v67 = v14->fields._size;
    if ( v67 < 1 )
    {
      return 0;
    }
    else
    {
      v7->fields.totalMissionNum = v67;
      this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                           v14,
                                           0,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !this )
        goto LABEL_79;
      if ( v14->fields._size >= 1 )
      {
        v68 = this->fields.m_CachedPtr;
        v69 = 0;
        do
        {
          this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                               v14,
                                               v69,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !this )
            goto LABEL_79;
          if ( v68 > SLODWORD(this->fields.m_CachedPtr) )
          {
            this = (MasterMissionComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 v14,
                                                 v69,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !this )
              goto LABEL_79;
            v68 = this->fields.m_CachedPtr;
          }
        }
        while ( ++v69 < v14->fields._size );
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

  if ( (byte_5973B48 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5973B48 = 1;
  }
  result = this->fields.stonePrice;
  if ( !result )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v5);
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
    sub_2213CDC(this, method);
  nowType = this->fields.nowType;
  if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length) )
    sub_2213CE4(this);
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
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  MasterMissionComponent_o *v14; // x20
  struct PlayMakerFSM_o *myFsm; // x8
  int32_t m_CancellationTokenSource_high; // w10
  struct System_Int32_array *m_CachedPtr; // x1
  struct MasterMissionListViewManager_array *missionListViewManager; // x8
  __int64 nowType; // x9
  struct PlayMakerFSM_o *v20; // x10

  v4 = this;
  if ( (byte_5973B73 & 1) == 0 )
  {
    sub_2213A60(&Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_11565/*"REQUEST_OK"*/);
    sub_2213A60(&StringLiteral_11563/*"REQUEST_NG"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    this = (MasterMissionComponent_o *)sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_5973B73 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( !System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    v7 = (Il2CppObject *)System_String__Concat_75694928(
                           (System_String_o *)StringLiteral_16427/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16691/*"]"*/,
                           0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6);
    this = (MasterMissionComponent_o *)JsonManager__DeserializeArray_object_(
                                         v7,
                                         (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_MasterMissionComponent_resData___);
    if ( this )
    {
      v14 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_21;
      myFsm = this->fields.myFsm;
      if ( !myFsm )
        goto LABEL_20;
      m_CancellationTokenSource_high = HIDWORD(myFsm->fields.m_CancellationTokenSource);
      m_CachedPtr = (struct System_Int32_array *)myFsm->fields.m_CachedPtr;
      v4->fields.isOverPresentBox = (bool)myFsm->fields.m_CancellationTokenSource;
      v4->fields.overflowType = m_CancellationTokenSource_high;
      v4->fields.receiveMissionIds = m_CachedPtr;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v4->fields.receiveMissionIds,
        (int32_t)m_CachedPtr,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      missionListViewManager = v4->fields.missionListViewManager;
      if ( !missionListViewManager )
        goto LABEL_20;
      nowType = v4->fields.nowType;
      if ( (unsigned int)nowType >= LODWORD(missionListViewManager->max_length)
        || !LODWORD(v14->fields.m_CancellationTokenSource) )
      {
LABEL_21:
        sub_2213CE4(this);
      }
      v20 = v14->fields.myFsm;
      if ( v20 )
      {
        this = (MasterMissionComponent_o *)missionListViewManager->m_Items[nowType];
        if ( this )
        {
          MasterMissionListViewManager__SetResultData(
            (MasterMissionListViewManager_o *)this,
            (GetSvts_array *)v20->fields.fsm,
            (GetCommandCodes_array *)v20->fields.fsmTemplate,
            0);
          this = (MasterMissionComponent_o *)v4->fields.myFsm;
          if ( this )
          {
            v5 = &StringLiteral_11565/*"REQUEST_OK"*/;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_20:
    sub_2213CDC(this, result);
  }
  this = (MasterMissionComponent_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_20;
  v5 = &StringLiteral_11563/*"REQUEST_NG"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void MasterMissionComponent__playEventMissionSvtVoice(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        const MethodInfo *method)
{
  bool _47388504; // w0
  EventSvtControl_o *svtVoiceCtr; // x22
  int32_t currentEventSvtId; // w21
  System_Action_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_5973B66 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent_setNormalFace__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_5973B66 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, voiceIDs);
  _47388504 = TutorialFlag__Get_47388504(126, 0);
  if ( voiceIDs && !_47388504 )
  {
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    this->fields.isVoicePlaying = 1;
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0);
    if ( !svtVoiceCtr )
      sub_2213CDC(v9, v10);
    EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v8, 0);
  }
}


void MasterMissionComponent__playEventMissionSvtVoice_54007496(
        MasterMissionComponent_o *this,
        System_String_array *voiceIDs,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  bool _47388504; // w0
  EventSvtControl_o *svtVoiceCtr; // x23
  int32_t currentEventSvtId; // w22
  System_Action_o *v26; // x20

  if ( (byte_5973B67 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent___c__DisplayClass151_0__playEventMissionSvtVoice_b__0__);
    sub_2213A60(&MasterMissionComponent___c__DisplayClass151_0_TypeInfo);
    byte_5973B67 = 1;
  }
  v7 = sub_2213CCC(MasterMissionComponent___c__DisplayClass151_0_TypeInfo);
  MasterMissionComponent___c__DisplayClass151_0___ctor((MasterMissionComponent___c__DisplayClass151_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)action, v16, v17, v18, v19, v20, v21);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v22);
  _47388504 = TutorialFlag__Get_47388504(126, 0);
  if ( voiceIDs && !_47388504 )
  {
    svtVoiceCtr = this->fields.svtVoiceCtr;
    currentEventSvtId = this->fields.currentEventSvtId;
    this->fields.isVoicePlaying = 1;
    v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v7,
      Method_MasterMissionComponent___c__DisplayClass151_0__playEventMissionSvtVoice_b__0__,
      0);
    if ( svtVoiceCtr )
    {
      EventSvtControl__playMissionVoice(svtVoiceCtr, voiceIDs, currentEventSvtId, v26, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(v8, v9);
  }
}


void MasterMissionComponent__playSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playBtnImg; // x20
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x8
  UnityEngine_Transform_o *v7; // x20
  EventSvtControl_o *svtVoiceCtr; // x20
  System_Action_o *v9; // x21

  if ( (byte_5973B65 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_2213A60(&Method_MasterMissionComponent_setNormalFace__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B65 = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(playBtnImg, 0, 0);
  if ( ((unsigned __int8)voicePlayEffect & 1) != 0 )
  {
    voiceListRand = this->fields.voiceListRand;
    if ( !voiceListRand )
      goto LABEL_20;
    if ( voiceListRand->fields._size >= 1 )
    {
      voicePlayEffect = this->fields.voicePlayEffect;
      if ( !voicePlayEffect )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(voicePlayEffect, 1, 0);
      voicePlayEffect = this->fields.voicePlayEffect;
      if ( !voicePlayEffect )
        goto LABEL_20;
      voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(voicePlayEffect, 0);
      v7 = (UnityEngine_Transform_o *)voicePlayEffect;
      if ( !byte_5969AE5 )
      {
        voicePlayEffect = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v7
        || (UnityEngine_Transform__set_localScale(v7, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___)) == 0
        || (UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0),
            (voicePlayEffect = this->fields.voicePlayEffect) == 0)
        || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            voicePlayEffect,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___)) == 0 )
      {
LABEL_20:
        sub_2213CDC(voicePlayEffect, v5);
      }
      UITweener__set_tweenFactor((UITweener_o *)voicePlayEffect, 0.0, 0);
    }
  }
  svtVoiceCtr = this->fields.svtVoiceCtr;
  this->fields.isVoicePlaying = 1;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MasterMissionComponent_setNormalFace__, 0);
  if ( !svtVoiceCtr )
    goto LABEL_20;
  EventSvtControl__playVoice(svtVoiceCtr, v9, 0);
}


void MasterMissionComponent__reDispMissionList(MasterMissionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Time; // x0
  __int64 v4; // x1
  struct MstMissionDisplayInfoEntity_o *currentMissionDispInfoEnt; // x8
  _BOOL4 isNotNext; // w9
  struct System_Collections_Generic_List_MstMissionEntity__o *currentMstMissionEntList; // x8
  int size; // w22
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21
  int32_t MissionType; // w8
  System_Collections_Generic_List_object__o *monitor; // x8
  int v13; // w21
  struct System_String_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct MstMissionDisplayInfoEntity_o *v28; // x8
  int v29; // w8
  int v30; // w8
  struct System_String_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  LocalizationManager_c *v39; // x0
  __int64 *v40; // x20
  struct System_String_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  TerminalSceneComponent_c *v49; // x0
  CommonUI_o *v50; // x21
  System_String_o *titleTxt; // x20
  System_String_o *msgTxt; // x19
  MasterMissionComponent___c_c *v53; // x8
  struct MasterMissionComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__130_0; // x22
  Il2CppObject *v56; // x23
  struct MasterMissionComponent___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct System_String_o *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7

  if ( (byte_5973B54 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent___c__reDispMissionList_b__130_0__);
    sub_2213A60(&MasterMissionComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_9181/*"MST_REMISSON_MSG"*/);
    sub_2213A60(&StringLiteral_9179/*"MST_REDISP_MSG"*/);
    sub_2213A60(&StringLiteral_9182/*"MST_REMISSON_TITLE_TXT"*/);
    sub_2213A60(&StringLiteral_9180/*"MST_REDISP_TITLE_TXT"*/);
    byte_5973B54 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0);
  if ( !this->fields.isNotNext )
  {
    currentMissionDispInfoEnt = this->fields.currentMissionDispInfoEnt;
    if ( !currentMissionDispInfoEnt )
    {
      isNotNext = 0;
      goto LABEL_39;
    }
    currentMstMissionEntList = this->fields.currentMstMissionEntList;
    if ( !currentMstMissionEntList )
      goto LABEL_59;
    size = currentMstMissionEntList->fields._size;
    v9 = Time;
    if ( size < 1 )
    {
LABEL_24:
      v13 = 0;
    }
    else
    {
      v10 = 0;
      while ( 1 )
      {
        Time = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
        if ( !Time )
          goto LABEL_59;
        Time = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Time,
                                                              v10,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
        if ( Time )
        {
          Time = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
          if ( !Time )
            goto LABEL_59;
          Time = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Time,
                                                                v10,
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
          if ( !Time )
            goto LABEL_59;
          MissionType = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0);
          Time = (System_Collections_Generic_List_object__o *)this->fields.currentMstMissionEntList;
          if ( MissionType == 5 )
          {
            if ( !Time )
              goto LABEL_59;
            Time = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Time,
                                                                  v10,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
            if ( !Time )
              goto LABEL_59;
            monitor = (System_Collections_Generic_List_object__o *)Time[1].monitor;
          }
          else
          {
            if ( !Time )
              goto LABEL_59;
            Time = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Time,
                                                                  v10,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MstMissionEntity__get_Item__);
            if ( !Time )
              goto LABEL_59;
            monitor = (System_Collections_Generic_List_object__o *)Time[1].klass;
          }
          if ( (__int64)v9 >= (__int64)monitor )
            break;
        }
        if ( size == ++v10 )
          goto LABEL_24;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9182/*"MST_REMISSON_TITLE_TXT"*/, 0);
      this->fields.titleTxt = v14;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.titleTxt,
        (int32_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9181/*"MST_REMISSON_MSG"*/, 0);
      this->fields.msgTxt = v21;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.msgTxt, (int32_t)v21, v22, v23, v24, v25, v26, v27);
      v13 = 1;
    }
    v28 = this->fields.currentMissionDispInfoEnt;
    if ( !v28 )
      goto LABEL_59;
    if ( (__int64)v9 < v28->fields.endedAt )
    {
      v29 = 0;
LABEL_38:
      isNotNext = this->fields.isNotNext;
      LODWORD(currentMissionDispInfoEnt) = v29 | v13;
      goto LABEL_39;
    }
    v30 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( (v13 & 1) != 0 )
    {
      if ( !v30 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9182/*"MST_REMISSON_TITLE_TXT"*/, 0);
      this->fields.titleTxt = v31;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.titleTxt,
        (int32_t)v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      v39 = LocalizationManager_TypeInfo;
      v40 = &StringLiteral_9181/*"MST_REMISSON_MSG"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_37;
    }
    else
    {
      if ( !v30 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9180/*"MST_REDISP_TITLE_TXT"*/, 0);
      this->fields.titleTxt = v64;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.titleTxt,
        (int32_t)v64,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
      v39 = LocalizationManager_TypeInfo;
      v40 = &StringLiteral_9179/*"MST_REDISP_MSG"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_37;
    }
    j_il2cpp_runtime_class_init_0(v39, v38);
LABEL_37:
    v41 = LocalizationManager__Get((System_String_o *)*v40, 0);
    this->fields.msgTxt = v41;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.msgTxt, (int32_t)v41, v42, v43, v44, v45, v46, v47);
    v29 = 1;
    goto LABEL_38;
  }
  LODWORD(currentMissionDispInfoEnt) = 0;
  isNotNext = 1;
LABEL_39:
  if ( (unsigned int)currentMissionDispInfoEnt | isNotNext
    && !this->fields.isOpenOverDlg
    && this->fields.currentType != 2 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0);
    this->fields.isOpenOverDlg = 1;
    v49 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v48);
      v49 = TerminalSceneComponent_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v49->static_fields->MASTER_MISSION_RESET_KEY, 0);
    Time = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v50 = (CommonUI_o *)Time;
    titleTxt = this->fields.titleTxt;
    msgTxt = this->fields.msgTxt;
    v53 = MasterMissionComponent___c_TypeInfo;
    if ( !*(&MasterMissionComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MasterMissionComponent___c_TypeInfo, v4);
      v53 = MasterMissionComponent___c_TypeInfo;
    }
    static_fields = v53->static_fields;
    _9__130_0 = static_fields->__9__130_0;
    if ( !_9__130_0 )
    {
      if ( !*(&v53->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v53, v4);
        static_fields = MasterMissionComponent___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)static_fields->__9;
      _9__130_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__130_0, v56, Method_MasterMissionComponent___c__reDispMissionList_b__130_0__, 0);
      v57 = MasterMissionComponent___c_TypeInfo->static_fields;
      v57->__9__130_0 = _9__130_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v57->__9__130_0,
        (int32_t)_9__130_0,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    if ( v50 )
    {
      CommonUI__OpenNotificationDialog(v50, titleTxt, msgTxt, _9__130_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_59:
    sub_2213CDC(Time, v4);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct StandFigureBack_o *standFigureBack; // x8
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  const MethodInfo *v18; // x1

  if ( (byte_5973B64 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
    byte_5973B64 = 1;
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
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
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
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
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
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Item__);
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
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)((char *)currentVoiceDataList + 88),
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
    sub_2213CDC(currentVoiceDataList, method);
  }
}


void MasterMissionComponent__setGuideSvtVoice(MasterMissionComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v6; // x22
  System_Collections_Generic_List_object__o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x23
  struct System_Collections_Generic_List_ServantVoiceData____o **p_voiceListRand; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t currentEventSvtId; // w0
  ServantVoiceEntity_o *Entity; // x0
  ServantVoiceEntity_o *v24; // x22
  struct System_String_o *VoiceAssetName; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  ServantVoiceData_array *MstMissionVoiceListByName; // x0
  struct System_String_array *voiceNameList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v35; // x24
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  struct System_Collections_Generic_List_ServantVoiceData____o *MasterMissionActionVoiceList; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_List_object__o *currentVoiceDataList; // x20
  System_Collections_Generic_List_ServantVoiceData____o *voiceListRand; // x23
  System_Collections_Generic_List_ServantVoiceData____o *voiceListMission; // x24
  MasterMissionComponent_VoiceData_o *v56; // x22
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  int32_t v67; // w8
  Il2CppObject *current; // x21
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  SoundManager_o *v71; // x20
  System_String_o *klass; // x21
  System_Action_o *v73; // x22
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o *v77; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+10h] [xbp-70h] BYREF
  int32_t voicePrefix[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_5973B5A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
    sub_2213A60(&Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&MasterMissionComponent_VoiceData_TypeInfo);
    byte_5973B5A = 1;
  }
  *(_QWORD *)voicePrefix = 0;
  memset(&v78, 0, sizeof(v78));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v6 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MasterMissionComponent_VoiceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData___ctor__);
  this->fields.currentVoiceDataList = (struct System_Collections_Generic_List_MasterMissionComponent_VoiceData__o *)v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentVoiceDataList,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  p_voiceListRand = &this->fields.voiceListRand;
  this->fields.voiceListRand = (struct System_Collections_Generic_List_ServantVoiceData____o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceListRand,
    (int32_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  currentEventSvtId = this->fields.currentEventSvtId;
  this->fields.downLoadCnt = 0;
  Instance = (void *)ServantVoiceMaster__getSvtVoiceId(currentEventSvtId, 0);
  if ( !MasterData_object )
    goto LABEL_36;
  ServantLimitAddMaster__getVoiceIndex(
    (ServantLimitAddMaster_o *)MasterData_object,
    &voicePrefix[1],
    voicePrefix,
    (int32_t)Instance,
    this->fields.currentEventSvtLimitCnt,
    0);
  if ( !v6 )
    goto LABEL_36;
  Entity = ServantVoiceMaster__GetEntity((ServantVoiceMaster_o *)v6, voicePrefix[1], voicePrefix[0], 8, 0);
  if ( !Entity )
    goto LABEL_24;
  v24 = Entity;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(Entity, 0);
  this->fields.lastAssetName = VoiceAssetName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lastAssetName,
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
    if ( (int)max_length >= 1 )
    {
      v35 = 0;
      do
      {
        if ( v35 >= (unsigned int)max_length )
          sub_2213CE4(MstMissionVoiceListByName);
        MstMissionVoiceListByName = ServantVoiceEntity__getMstMissionVoiceListByName(
                                      v24,
                                      voiceNameList->m_Items[v35],
                                      0);
        if ( MstMissionVoiceListByName )
        {
          p_obj = &MstMissionVoiceListByName->obj;
          Instance = *p_voiceListRand;
          if ( !*p_voiceListRand )
            goto LABEL_36;
          v42 = *((_QWORD *)Instance + 2);
          v43 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          ++*((_DWORD *)Instance + 7);
          if ( !v42 )
            goto LABEL_36;
          v44 = *((int *)Instance + 6);
          if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              p_obj,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = v42 + 8 * v44;
            *((_DWORD *)Instance + 6) = v44 + 1;
            *(_QWORD *)(v45 + 32) = p_obj;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 32), (int32_t)p_obj, v36, v37, v38, v39, v40, v41);
          }
        }
        LODWORD(max_length) = voiceNameList->max_length;
      }
      while ( (__int64)++v35 < (int)max_length );
    }
  }
  MasterMissionActionVoiceList = ServantVoiceEntity__getMasterMissionActionVoiceList(v24, 0);
  this->fields.voiceListMission = MasterMissionActionVoiceList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceListMission,
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
  v56 = (MasterMissionComponent_VoiceData_o *)sub_2213CCC(MasterMissionComponent_VoiceData_TypeInfo);
  MasterMissionComponent_VoiceData___ctor(v56, VoiceAssetName, voiceListRand, voiceListMission, 0);
  if ( !currentVoiceDataList
    || (items = currentVoiceDataList->fields._items,
        v64 = Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__Add__,
        ++currentVoiceDataList->fields._version,
        !items) )
  {
LABEL_36:
    sub_2213CDC(Instance, p_obj);
  }
  size = currentVoiceDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      currentVoiceDataList,
      (Il2CppObject *)v56,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &items->obj.klass + size;
    currentVoiceDataList->fields._size = size + 1;
    v66[4] = (Il2CppClass *)v56;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 4), (int32_t)v56, v57, v58, v59, v60, v61, v62);
  }
LABEL_24:
  Instance = this->fields.currentVoiceDataList;
  this->fields.isVoicePlaying = 0;
  if ( !Instance )
    goto LABEL_36;
  v67 = *((_DWORD *)Instance + 6);
  this->fields.downLoadCnt = v67;
  if ( v67 <= 0 )
  {
    MasterMissionComponent__EndLoadVoiceAssets(this, (const MethodInfo *)p_obj);
  }
  else
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v78,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MasterMissionComponent_VoiceData__GetEnumerator__);
    v76 = 0;
    v77 = &v78;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v78,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__MoveNext__) )
    {
      current = v78.fields._current;
      v69 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !current )
        sub_2213CDC(v69, v70);
      v71 = (SoundManager_o *)v69;
      klass = (System_String_o *)current[1].klass;
      v73 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v73, (Il2CppObject *)this, Method_MasterMissionComponent_OnCompleteLoadVoiceAsset__, 0);
      if ( !v71 )
        sub_2213CDC(v74, v75);
      SoundManager__LoadAudioAssetStorage(v71, klass, v73, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v78,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionComponent_VoiceData__Dispose__);
  }
}


void MasterMissionComponent__setMissionCompleteNum(MasterMissionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v3; // x0
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *currentEventIdList; // x8
  int size; // w22
  UserEventMissionMaster_o *v8; // x20
  int32_t v9; // w21
  int32_t compMissionNum; // w24
  struct UnityEngine_GameObject_o *eventMissionInfo; // x8
  System_String_o *v12; // x20
  UILabel_o *eventMissionTxt2; // x21
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  UILabel_o *v16; // x19
  UILabel_o *eventMissionTxt; // x21
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x0
  int32_t totalMissionNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5973B59 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_8919/*"MASTER_MISSION_COMPLETE_NUM"*/);
    byte_5973B59 = 1;
  }
  v3 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.compMissionNum = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v3);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  currentEventIdList = this->fields.currentEventIdList;
  if ( !currentEventIdList )
    goto LABEL_24;
  size = currentEventIdList->fields._size;
  if ( size >= 1 )
  {
    v8 = (UserEventMissionMaster_o *)Instance;
    v9 = 0;
    compMissionNum = this->fields.compMissionNum;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.currentEventIdList;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_int___get_Item(
                                    (System_Collections_Generic_List_int__o *)Instance,
                                    v9,
                                    (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v8 )
        break;
      ++v9;
      compMissionNum += UserEventMissionMaster__getAchiveMissionNum(v8, (int32_t)Instance, 0);
      this->fields.compMissionNum = compMissionNum;
      if ( size == v9 )
        goto LABEL_10;
    }
LABEL_24:
    sub_2213CDC(Instance, v5);
  }
LABEL_10:
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8919/*"MASTER_MISSION_COMPLETE_NUM"*/, 0);
  eventMissionInfo = this->fields.eventMissionInfo;
  v12 = (System_String_o *)Instance;
  if ( this->fields.nowType )
  {
    if ( !eventMissionInfo )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 0, 0);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    eventMissionTxt2 = this->fields.eventMissionTxt2;
    v21 = this->fields.compMissionNum;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
    totalMissionNum = this->fields.totalMissionNum;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_75697880(v12, v14, v15, 0);
    if ( !eventMissionTxt2 )
      goto LABEL_24;
    UILabel__set_text(eventMissionTxt2, (System_String_o *)Instance, 0);
    Instance = (DataManager_o *)MasterMissionComponent_TypeInfo;
    v16 = this->fields.eventMissionTxt2;
    if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v5);
    if ( !v16 )
      goto LABEL_24;
    UILabel__SetCondensedScale_56591096(
      v16,
      MasterMissionComponent_TypeInfo->static_fields->MASTER_MISSION_COMPLETE_NUM_WIDTH,
      0.0,
      0);
  }
  else
  {
    if ( !eventMissionInfo )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(this->fields.eventMissionInfo, 1, 0);
    Instance = (DataManager_o *)this->fields.eventMissionInfo2;
    if ( !Instance )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    eventMissionTxt = this->fields.eventMissionTxt;
    v21 = this->fields.compMissionNum;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
    totalMissionNum = this->fields.totalMissionNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &totalMissionNum);
    Instance = (DataManager_o *)System_String__Format_75697880(v12, v18, v19, 0);
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

  if ( (byte_5973B63 & 1) == 0 )
  {
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    byte_5973B63 = 1;
  }
  v3 = MasterMissionComponent_TypeInfo;
  standFigureBack = this->fields.standFigureBack;
  currentEventSvtId = this->fields.currentEventSvtId;
  if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
  if ( !standFigureBack )
    sub_2213CDC(v3, method);
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
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *playBtnImg; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *voicePlayEffect; // x0

  if ( (byte_5973B68 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973B68 = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  this->fields.isVoicePlaying = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
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
    sub_2213CDC(voicePlayEffect, v5);
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
  if ( (byte_5973B7A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (MasterMissionComponent_o *)sub_2213A60(&Method_MasterMissionComponent__setRecieveModifyItem_b__173_0__);
    byte_5973B7A = 1;
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
    sub_2213CDC(this, method);
  }
  v6 = v2->fields.nowType;
  if ( (unsigned int)v6 >= LODWORD(v5->max_length) )
LABEL_11:
    sub_2213CE4(this);
  v7 = (MissionListViewManager_o *)v5->m_Items[v6];
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)v2, Method_MasterMissionComponent__setRecieveModifyItem_b__173_0__, 0);
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
    sub_2213CDC(0, method);
  EventSvtControl__stopVoice(svtVoiceCtr, 0);
  MasterMissionComponent__setNormalFace(this, v4);
}


void MasterMissionComponent_ClickDelegate___ctor(
        MasterMissionComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2013DDC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2013D94;
}


System_IAsyncResult_o *MasterMissionComponent_ClickDelegate__BeginInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void MasterMissionComponent_ClickDelegate__EndInvoke(
        MasterMissionComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields._MstMissionEntity_k__BackingField = mstMission;
  v10 = (MasterMissionComponent_MasterMissionInfoItem_o *)((char *)v10 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v10, (int32_t)mstMission, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MstMissionEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MasterMissionComponent_VoiceData___ctor(
        MasterMissionComponent_VoiceData_o *this,
        System_String_o *voiceDataName,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListRand,
        System_Collections_Generic_List_ServantVoiceData____o *voiceDataListMission,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.DataName = voiceDataName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)voiceDataName, v9, v10, v11, v12, v13, v14);
  this->fields.DataListRand = voiceDataListRand;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DataListRand,
    (int32_t)voiceDataListRand,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.DataListMission = voiceDataListMission;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DataListMission,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974344 & 1) == 0 )
  {
    sub_2213A60(&MasterMissionComponent___c_TypeInfo);
    byte_5974344 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MasterMissionComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterMissionComponent___c_TypeInfo->static_fields->__9 = (struct MasterMissionComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MasterMissionComponent___c_TypeInfo->static_fields,
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


void MasterMissionComponent___c___ExitCompleteMission_b__127_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1
  CommonUI_o *v4; // x19
  TerminalSceneComponent_c *v5; // x0
  ErrorDialog_c *klass; // x8
  UnityEngine_Object_o *methodPtr; // x19
  ErrorDialog_c *v8; // x8

  if ( (byte_5974346 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5974346 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  CommonUI__CloseCompleteMission(Instance, 0);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3);
  if ( !v4 )
    goto LABEL_35;
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v5->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_35;
  TerminalSceneComponent__playBgm_52367936((TerminalSceneComponent_o *)Instance, 0);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass )
    goto LABEL_35;
  methodPtr = (UnityEngine_Object_o *)klass->vtable._4_get_closeBtnObject.methodPtr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(methodPtr, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !methodPtr )
      goto LABEL_35;
    if ( ExRoomRootComponent__IsDispQuestState((ExRoomRootComponent_o *)methodPtr, 0) )
    {
      Instance = (CommonUI_o *)methodPtr[3].klass;
      if ( Instance )
      {
        ExRoomQuestComponent__OpenMasterMission((ExRoomQuestComponent_o *)Instance, -1, 0);
        return;
      }
LABEL_35:
      sub_2213CDC(Instance, v3);
    }
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = Instance->fields.errorDialog->klass;
  if ( !v8 )
    goto LABEL_35;
  Instance = *(CommonUI_o **)&v8->_2.instance_size;
  if ( !Instance )
    goto LABEL_35;
  ScrPlayerStatus__OpenMasterMissionFromCompleteMission((ScrPlayerStatus_o *)Instance, 0);
}


void MasterMissionComponent___c___OnClickCompleteMissionBtn_b__126_1(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void MasterMissionComponent___c___OnClickShopBtn_b__154_0(MasterMissionComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  SceneJumpInfo_o *v4; // x19

  if ( (byte_5974348 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_13634/*"StoneFragments"*/);
    byte_5974348 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        v4 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_48464828(v4, (System_String_o *)StringLiteral_13634/*"StoneFragments"*/, 0),
        !v4)
    || (SceneJumpInfo__SetReturnNowScene(v4, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v3);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
}


void MasterMissionComponent___c___OpenCompleteMission_b__125_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  TerminalSceneComponent_o *mInstance; // x0

  if ( (byte_5974345 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5974345 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance )
    sub_2213CDC(0, method);
  TerminalSceneComponent__UpdateCompleteMissionIconUI(mInstance, 0);
}


void MasterMissionComponent___c___reDispMissionList_b__130_0(
        MasterMissionComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5974347 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_5974347 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 1, 1, 0);
}


void MasterMissionComponent___c__DisplayClass151_0___ctor(
        MasterMissionComponent___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionComponent___c__DisplayClass151_0___playEventMissionSvtVoice_b__0(
        MasterMissionComponent___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent_o *_4__this; // x0
  struct System_Action_o *action; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (MasterMissionComponent__setNormalFace(_4__this, 0), (action = this->fields.action) == 0) )
    sub_2213CDC(_4__this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
    action->fields.method_code,
    action->fields.method);
}


void MasterMissionComponent___c__DisplayClass162_0___ctor(
        MasterMissionComponent___c__DisplayClass162_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionComponent___c__DisplayClass162_0___BulkReceiveConfirm_b__0(
        MasterMissionComponent___c__DisplayClass162_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  MasterMissionComponent___c__DisplayClass162_0_o *v4; // x19
  struct MasterMissionComponent_o *_4__this; // x8
  System_Collections_Generic_List_int__o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  unsigned int *monitor; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  struct MasterMissionComponent_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct MasterMissionComponent_o *v20; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_5974349 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&StringLiteral_3589/*"CLICK_DECIDE"*/);
    this = (MasterMissionComponent___c__DisplayClass162_0_o *)sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_5974349 = 1;
  }
  _4__this = v4->fields.__4__this;
  memset(&v22, 0, sizeof(v22));
  if ( !isDecide )
  {
    if ( _4__this )
    {
      this = (MasterMissionComponent___c__DisplayClass162_0_o *)_4__this->fields.myFsm;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
        return;
      }
    }
LABEL_25:
    sub_2213CDC(this, isDecide);
  }
  if ( !_4__this )
    goto LABEL_25;
  _4__this->fields.isBoardTouch = 0;
  v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this = (MasterMissionComponent___c__DisplayClass162_0_o *)v4->fields.items;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MasterMissionListViewItem__GetEnumerator__);
  v22 = v21;
  v21.fields._list = 0;
  *(_QWORD *)&v21.fields._index = &v22;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__MoveNext__);
    if ( !v7 )
      break;
    if ( !v22.fields._current )
      sub_2213CDC(v7, v8);
    monitor = (unsigned int *)v22.fields._current[7].monitor;
    if ( !monitor
      || !v6
      || (items = v6->fields._items,
          v8 = monitor[4],
          v11 = Method_System_Collections_Generic_List_int__Add__,
          ++v6->fields._version,
          !items) )
    {
      sub_2213CDC(v7, v8);
    }
    size = v6->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v6,
        v8,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = size + 1;
      items->m_Items[size] = v8;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewItem__Dispose__);
  if ( !v6 )
    goto LABEL_25;
  v13 = v4->fields.__4__this;
  this = (MasterMissionComponent___c__DisplayClass162_0_o *)System_Collections_Generic_List_int___ToArray(
                                                              v6,
                                                              (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v13 )
    goto LABEL_25;
  v13->fields.sendMissionIds = (struct System_Int32_array *)this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.sendMissionIds,
    (int32_t)this,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = v4->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  this = (MasterMissionComponent___c__DisplayClass162_0_o *)v20->fields.myFsm;
  if ( !this )
    goto LABEL_25;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3589/*"CLICK_DECIDE"*/, 0);
}


void MasterMissionComponent___c__DisplayClass168_0___ctor(
        MasterMissionComponent___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionComponent___c__DisplayClass168_0___ReceiveResultList_b__0(
        MasterMissionComponent___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  MasterMissionComponent___c__DisplayClass168_0_o *v2; // x19
  struct MasterMissionComponent_o *_4__this; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_597434A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12171/*"SERVANT_OVER"*/);
    sub_2213A60(&StringLiteral_10870/*"PRESENT_BOX_OVER"*/);
    this = (MasterMissionComponent___c__DisplayClass168_0_o *)sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_597434A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  if ( !_4__this->fields.isOverPresentBox )
  {
    this = (MasterMissionComponent___c__DisplayClass168_0_o *)_4__this->fields.myFsm;
    if ( _4__this->fields.overflowType )
    {
      if ( this )
      {
        v4 = &StringLiteral_12171/*"SERVANT_OVER"*/;
        goto LABEL_12;
      }
    }
    else if ( this )
    {
      v4 = &StringLiteral_3582/*"CLICK_CANCEL"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_2213CDC(this, method);
  }
  this = (MasterMissionComponent___c__DisplayClass168_0_o *)_4__this->fields.myFsm;
  if ( !this )
    goto LABEL_13;
  v4 = &StringLiteral_10870/*"PRESENT_BOX_OVER"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v4, 0);
}


void MasterMissionComponent___c__DisplayClass168_0___ReceiveResultList_b__1(
        MasterMissionComponent___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *nextAction; // x8

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))nextAction->fields.invoke_impl)(
    nextAction->fields.method_code,
    nextAction->fields.method);
}


void MasterMissionComponent___c__DisplayClass168_0___ReceiveResultList_b__2(
        MasterMissionComponent___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *nextAction; // x8

  nextAction = this->fields.nextAction;
  if ( !nextAction )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))nextAction->fields.invoke_impl)(
    nextAction->fields.method_code,
    nextAction->fields.method);
}


void MasterMissionComponent___c__DisplayClass169_0___ctor(
        MasterMissionComponent___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionComponent___c__DisplayClass169_0___PresentBoxOver_b__1(
        MasterMissionComponent___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  struct MasterMissionComponent_o *_4__this; // x0
  int32_t overflowType; // w8
  __int64 *v5; // x8

  if ( (byte_597434B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12171/*"SERVANT_OVER"*/);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_597434B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( this->fields.isPresentBoxOpen )
  {
    if ( _4__this )
    {
      MasterMissionComponent__OpenPresentBox(_4__this, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_13;
  overflowType = _4__this->fields.overflowType;
  _4__this = (struct MasterMissionComponent_o *)_4__this->fields.myFsm;
  if ( overflowType )
  {
    if ( !_4__this )
      goto LABEL_13;
    v5 = &StringLiteral_12171/*"SERVANT_OVER"*/;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_13;
    v5 = &StringLiteral_3582/*"CLICK_CANCEL"*/;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)*v5, 0);
}


void MasterMissionComponent___c__DisplayClass186_0___ctor(
        MasterMissionComponent___c__DisplayClass186_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionComponent___c__DisplayClass186_0___UpdateStoneExchangeCount_b__0(
        MasterMissionComponent___c__DisplayClass186_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MasterMissionComponent_o *Object_object__58532980; // x0
  struct MasterMissionComponent_o *_4__this; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct MasterMissionComponent_o *v13; // x8
  int32_t exchangeCount; // w20

  if ( (byte_597434C & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    byte_597434C = 1;
  }
  Object_object__58532980 = (MasterMissionComponent_o *)MasterMissionComponent_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, assetData);
  if ( !assetData )
    goto LABEL_14;
  Object_object__58532980 = (MasterMissionComponent_o *)AssetData__GetObject_object__58532980(
                                                          assetData,
                                                          MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_BUTTON_EFFECT_NAME,
                                                          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.btnEffectBasePrefab = (struct UnityEngine_GameObject_o *)Object_object__58532980;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.btnEffectBasePrefab,
    (int32_t)Object_object__58532980,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Object_object__58532980 = this->fields.__4__this;
  if ( !Object_object__58532980 )
    goto LABEL_14;
  MasterMissionComponent__StopStoneButtonEffect(Object_object__58532980, 0);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_14;
  if ( v13->fields.nowType == 1 )
  {
    exchangeCount = this->fields.exchangeCount;
    if ( exchangeCount >= StoneShopMaster__GetPayMultiTimePrice(0) )
    {
      Object_object__58532980 = this->fields.__4__this;
      if ( Object_object__58532980 )
      {
        MasterMissionComponent__PlayStoneButtonEffect(Object_object__58532980, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(Object_object__58532980, assetData);
    }
  }
}


void MasterMissionComponent_resData___ctor(MasterMissionComponent_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}