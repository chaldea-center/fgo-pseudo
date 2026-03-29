void ScrPlayerStatus___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct ScrPlayerStatus_StaticFields *static_fields; // x0
  ManagerConfig_c *v8; // x8
  int32_t v9; // w1
  struct ScrPlayerStatus_StaticFields *v10; // x0
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct ScrPlayerStatus_StaticFields *v18; // x0
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct ScrPlayerStatus_StaticFields *v26; // x8

  if ( (byte_4D2D773 & 1) == 0 )
  {
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&StringLiteral_17152/*"banner_icon_mission_limited_"*/);
    sub_1C93AD4(&StringLiteral_16081/*"[ffb505]"*/);
    sub_1C93AD4(&StringLiteral_8536/*"LocationInfoAgreement"*/);
    byte_4D2D773 = 1;
  }
  static_fields = ScrPlayerStatus_TypeInfo->static_fields;
  static_fields->MV_SPD_TIME = 0.25;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
    static_fields = ScrPlayerStatus_TypeInfo->static_fields;
  }
  static_fields->FRAME_OUT_POS_X = (float)-v8->static_fields->WIDTH;
  v9 = StringLiteral_16081/*"[ffb505]"*/;
  static_fields->AP_OVER_TXT_COLOR_STR = (struct System_String_o *)StringLiteral_16081/*"[ffb505]"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->AP_OVER_TXT_COLOR_STR, v9, v1, v2, v3, v4, v5, v6);
  v10 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_QWORD *)&v10->MAX_LEVEL_BASE_POS_X = 0xC1400000C1500000LL;
  v11 = StringLiteral_8536/*"LocationInfoAgreement"*/;
  v10->LOCATION_TOS_AGREED_KEY = (struct System_String_o *)StringLiteral_8536/*"LocationInfoAgreement"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10->LOCATION_TOS_AGREED_KEY, v11, v12, v13, v14, v15, v16, v17);
  v18 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_OWORD *)&v18->NOTICE_NUMBER_BADGE_DEPTH = xmmword_D003E0;
  v18->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v19 = StringLiteral_17152/*"banner_icon_mission_limited_"*/;
  v18->MASTER_MISSION_ICON_LIMITED_PREFIX = (struct System_String_o *)StringLiteral_17152/*"banner_icon_mission_limited_"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v18->MASTER_MISSION_ICON_LIMITED_PREFIX,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_QWORD *)&v26->CMD_SPELL_SCROLLVIEW_DEPTH = 0x3E19999A000000DCLL;
  *(_OWORD *)&v26->STONE_COUNT_MAX_WIDTH = xmmword_D00830;
}


void ScrPlayerStatus___ctor(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2D772 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D772 = 1;
  }
  this->fields.miMasterUserEquipID = 1;
  this->fields.meMasterGender = 2;
  this->fields.mfApParOld = -1.0;
  this->fields.isDispMax = 1;
  this->fields.oldRp = -1;
  this->fields.mstMissionStartsAt = -1;
  v9 = StringLiteral_1/*""*/;
  this->fields.overwriteSpellIconId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.overwriteSpellIconId, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScrPlayerStatus__Awake(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  BaseDialog_o *nextExpDialog; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  nextExpDialog = this->fields.nextExpDialog;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  if ( !nextExpDialog )
    sub_1C93D2C(v5, v6);
  v13.fields.z = -LocalPosition.fields.z;
  v13.fields.y = -LocalPosition.fields.y;
  v13.fields.x = -LocalPosition.fields.x;
  BaseDialog__SetMaskSpritePosition(nextExpDialog, v13, 0);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mFrameInPosX = GameObjectExtensions__GetLocalPositionX(v7, 0);
  ScrPlayerStatus__FrameInOut(this, 0, 1, v8);
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 1, v9);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 1, v10);
  ScrPlayerStatus__CheckAssert(this, v11);
}


void ScrPlayerStatus__ChangeViewMstMissionLb(
        ScrPlayerStatus_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *mstMissionInfo,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x21
  int32_t MissionType; // w24
  int32_t v7; // w23
  int32_t v8; // w22
  UISprite_o *masterMissionLimitedBgSp; // x22
  ScrPlayerStatus_c *v10; // x0
  System_String_o *MASTER_MISSION_ICON_LIMITED_PREFIX; // x23
  System_String_o *v12; // x0
  System_String_o *v13; // x23
  ScrPlayerStatus_c *v14; // x0
  UISprite_o *v15; // x22
  System_String_o *v16; // x23
  UILabel_o *masterMissionDetailOverlapLb; // x22
  UILabel_o *masterMissionDetailLb; // x23
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  MstMissionEntity_c *v20; // x0
  ScrPlayerStatus_o *v21; // x24
  UILabel_o *masterMissionCountNumLb; // x22
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *masterMissionCountNumLb2; // x20
  int64_t NextDayStartTime; // x20
  struct UILabel_o *masterMissionAlertNumLb; // x8
  struct UILabel_o *masterMissionAlertUnitLb; // x8
  ScrPlayerStatus_o *masterMissionAlertMsgLb; // x19
  ScrPlayerStatus_o *v29; // x1
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4D2D761 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&MstMissionEntity_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_13513/*"TIME_REST_ACHIVE"*/);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2D761 = 1;
  }
  if ( !mstMissionInfo )
    goto LABEL_59;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_59;
  MissionType = MstMissionEntity__getMissionType(mstMissionInfo->fields._MstMissionEntity_k__BackingField, 0);
  v7 = MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0);
  v8 = MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0);
  if ( MissionType != 3 && v7 != 2 && v8 != 5 )
  {
    ScrPlayerStatus__HideMstMissionIconLb(v4, (const MethodInfo *)mstMissionInfo);
    return;
  }
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionDailyBgObj;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, MissionType == 3, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionWeeklyBgObj;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7 == 2, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionLimitedBgObj;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 == 5, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAnimationLabelsRoot;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 == 5, 0);
  if ( v8 == 5 )
  {
    masterMissionLimitedBgSp = v4->fields.masterMissionLimitedBgSp;
    v10 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
      v10 = ScrPlayerStatus_TypeInfo;
    }
    MASTER_MISSION_ICON_LIMITED_PREFIX = v10->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX;
    v12 = System_Int32__ToString((int)MstMissionEntity_k__BackingField + 56, 0);
    v13 = System_String__Concat_64425724(MASTER_MISSION_ICON_LIMITED_PREFIX, v12, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetBanner(masterMissionLimitedBgSp, v13, 0) )
    {
      v14 = ScrPlayerStatus_TypeInfo;
      v15 = v4->fields.masterMissionLimitedBgSp;
      if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
        v14 = ScrPlayerStatus_TypeInfo;
      }
      v16 = System_String__Concat_64425724(
              v14->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX,
              (System_String_o *)StringLiteral_1116/*"0"*/,
              0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v15, v16, 0);
    }
    this = (ScrPlayerStatus_o *)v4->fields.masterMissionLimitedBgSp;
    if ( !this )
      goto LABEL_59;
    ((void (__fastcall *)(ScrPlayerStatus_o *, void *))this->klass[2]._1.parent)(this, this->klass[2]._1.generic_class);
    masterMissionDetailLb = v4->fields.masterMissionDetailLb;
    masterMissionDetailOverlapLb = v4->fields.masterMissionDetailOverlapLb;
    script = MstMissionEntity_k__BackingField->fields.script;
    v20 = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
      v20 = MstMissionEntity_TypeInfo;
    }
    this = (ScrPlayerStatus_o *)EntityScriptUtil__GetStringValue(
                                  script,
                                  v20->static_fields->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
                                  0,
                                  0);
    if ( !masterMissionDetailLb )
      goto LABEL_59;
    v21 = this;
    UILabel__set_text(masterMissionDetailLb, (System_String_o *)this, 0);
    if ( !masterMissionDetailOverlapLb )
      goto LABEL_59;
    UILabel__set_text(masterMissionDetailOverlapLb, (System_String_o *)v21, 0);
  }
  masterMissionCountNumLb = v4->fields.masterMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  this = (ScrPlayerStatus_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0);
  if ( !masterMissionCountNumLb )
    goto LABEL_59;
  UILabel__set_text(masterMissionCountNumLb, (System_String_o *)this, 0);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  masterMissionCountNumLb2 = v4->fields.masterMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  this = (ScrPlayerStatus_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0);
  if ( !masterMissionCountNumLb2 )
    goto LABEL_59;
  UILabel__set_text(masterMissionCountNumLb2, (System_String_o *)this, 0);
  if ( MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0) == 3 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NextDayStartTime = NetworkManager__getNextDayStartTime(0);
  }
  else
  {
    NextDayStartTime = MstMissionEntity_k__BackingField->fields.endedAt;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LocalizationManager__GetRestTimeWithSeparatedTimeStr(
    NextDayStartTime,
    &v4->fields.mstMissionTimeNumStr,
    &v4->fields.mstMissionTimeCntStr,
    0);
  masterMissionAlertNumLb = v4->fields.masterMissionAlertNumLb;
  if ( !masterMissionAlertNumLb )
    goto LABEL_59;
  this = (ScrPlayerStatus_o *)v4->fields.mstMissionTimeNumStr;
  if ( !this )
    goto LABEL_59;
  this = (ScrPlayerStatus_o *)System_String__Equals_64461044(
                                (System_String_o *)this,
                                masterMissionAlertNumLb->fields.mText,
                                0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    masterMissionAlertUnitLb = v4->fields.masterMissionAlertUnitLb;
    if ( !masterMissionAlertUnitLb )
      goto LABEL_59;
    this = (ScrPlayerStatus_o *)v4->fields.mstMissionTimeCntStr;
    if ( !this )
      goto LABEL_59;
    if ( System_String__Equals_64461044((System_String_o *)this, masterMissionAlertUnitLb->fields.mText, 0) )
      return;
  }
  this = (ScrPlayerStatus_o *)System_String__IsNullOrEmpty(v4->fields.mstMissionTimeNumStr, 0);
  if ( !v4->fields.masterMissionAlertTitleLb )
    goto LABEL_59;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(v4->fields.masterMissionAlertTitleLb, 1, 0);
    this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertNumLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v4->fields.mstMissionTimeNumStr, 0);
      this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertUnitLb;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, v4->fields.mstMissionTimeCntStr, 0);
        this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertMsgLb;
        if ( this )
        {
          v29 = (ScrPlayerStatus_o *)StringLiteral_1/*""*/;
          goto LABEL_57;
        }
      }
    }
LABEL_59:
    sub_1C93D2C(this, mstMissionInfo);
  }
  UnityEngine_GameObject__SetActive(v4->fields.masterMissionAlertTitleLb, 0, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertNumLb;
  if ( !this )
    goto LABEL_59;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertUnitLb;
  if ( !this )
    goto LABEL_59;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  masterMissionAlertMsgLb = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ScrPlayerStatus_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13513/*"TIME_REST_ACHIVE"*/, 0);
  if ( !masterMissionAlertMsgLb )
    goto LABEL_59;
  v29 = this;
  this = masterMissionAlertMsgLb;
LABEL_57:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v29, 0);
}


void ScrPlayerStatus__CheckAssert(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *completeMissionViewController; // x20
  __int64 v4; // x1
  CompleteMissionViewController_o *v5; // x0

  if ( (byte_4D2D771 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D771 = 1;
  }
  completeMissionViewController = (UnityEngine_Object_o *)this->fields.completeMissionViewController;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(completeMissionViewController, 0, 0) )
  {
    v5 = this->fields.completeMissionViewController;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    CompleteMissionViewController__CheckAssert(v5, 0);
  }
}


void ScrPlayerStatus__ClickBannerOpenMasterMission(
        ScrPlayerStatus_o *this,
        int32_t typeIndex,
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
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x20

  if ( (byte_4D2D730 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass135_0__ClickBannerOpenMasterMission_b__0__);
    sub_1C93AD4(&ScrPlayerStatus___c__DisplayClass135_0_TypeInfo);
    byte_4D2D730 = 1;
  }
  v5 = sub_1C93D20(ScrPlayerStatus___c__DisplayClass135_0_TypeInfo);
  ScrPlayerStatus___c__DisplayClass135_0___ctor((ScrPlayerStatus___c__DisplayClass135_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = typeIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_ScrPlayerStatus___c__DisplayClass135_0__ClickBannerOpenMasterMission_b__0__,
    0);
  if ( !v16 )
LABEL_8:
    sub_1C93D2C(v6, v7);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0);
}


void ScrPlayerStatus__ClickLoginDialogOpenMasterMission(
        ScrPlayerStatus_o *this,
        int32_t typeIndex,
        System_Action_o *closeCallback,
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
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v23; // x8
  CommonUI_o *v24; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x20

  if ( (byte_4D2D731 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass136_0__ClickLoginDialogOpenMasterMission_b__0__);
    sub_1C93AD4(&ScrPlayerStatus___c__DisplayClass136_0_TypeInfo);
    byte_4D2D731 = 1;
  }
  v7 = sub_1C93D20(ScrPlayerStatus___c__DisplayClass136_0_TypeInfo);
  ScrPlayerStatus___c__DisplayClass136_0___ctor((ScrPlayerStatus___c__DisplayClass136_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = closeCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)closeCallback, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v7 + 32) = typeIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  v24 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v26 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_ScrPlayerStatus___c__DisplayClass136_0__ClickLoginDialogOpenMasterMission_b__0__,
    0);
  if ( !v24 )
LABEL_8:
    sub_1C93D2C(v8, v9);
  CommonUI__maskFadeout(v24, 1, DEFAULT_FADE_TIME, v26, 0);
}


void ScrPlayerStatus__DisableAllBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_GameObject_o *masterFaceBtnObj; // x0

  if ( (byte_4D2D76A & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4D2D76A = 1;
  }
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 0, v2);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 0, v4);
  masterFaceBtnObj = this->fields.masterFaceBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.mcGiftButtonP;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  GiftButtonCtrl__set_isEnabled((GiftButtonCtrl_o *)masterFaceBtnObj, 0, 0);
  masterFaceBtnObj = this->fields.nextExpOpenBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0);
  masterFaceBtnObj = this->fields.mLocationBtnRoot;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionBtnColl;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionDailyBgColl;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionWeeklyBgColl;
  if ( !masterFaceBtnObj
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionLimitedBgColl) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.commandSpellButtonCollider) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.completeMissionViewController) == 0) )
  {
LABEL_17:
    sub_1C93D2C(masterFaceBtnObj, v5);
  }
  CompleteMissionViewController__SetInteractable((CompleteMissionViewController_o *)masterFaceBtnObj, 0, 0);
}


void ScrPlayerStatus__EnableAllBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_GameObject_o *masterFaceBtnObj; // x0

  if ( (byte_4D2D76B & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4D2D76B = 1;
  }
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 1, v2);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 1, v4);
  masterFaceBtnObj = this->fields.masterFaceBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.mcGiftButtonP;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  GiftButtonCtrl__set_isEnabled((GiftButtonCtrl_o *)masterFaceBtnObj, 1, 0);
  masterFaceBtnObj = this->fields.nextExpOpenBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0);
  masterFaceBtnObj = this->fields.mLocationBtnRoot;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionBtnColl;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionDailyBgColl;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionWeeklyBgColl;
  if ( !masterFaceBtnObj
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionLimitedBgColl) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.commandSpellButtonCollider) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.completeMissionViewController) == 0) )
  {
LABEL_17:
    sub_1C93D2C(masterFaceBtnObj, v5);
  }
  CompleteMissionViewController__SetInteractable((CompleteMissionViewController_o *)masterFaceBtnObj, 1, 0);
}


void ScrPlayerStatus__EndLocationRequest(ScrPlayerStatus_o *this, System_String_o *result, const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  System_Action_o *v8; // x23
  Il2CppObject *v9; // x25
  Il2CppObject *v10; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  System_String_o *v13; // x23
  ScrPlayerStatus_o *v14; // x24
  GiftEntity_array *monitor; // x25
  BalanceConfig_c *v16; // x0
  int32_t LocationRewardDlgColumn; // w26
  CommonMultiItemGetDlg_OnClickDelegate_o *v18; // x27

  v4 = this;
  if ( (byte_4D2D747 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_JsonManager_Deserialize_EventLocationRequest_LocationGift___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CommonMultiItemGetDlg_OnClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__EndLocationRequest_b__161_0__);
    sub_1C93AD4(&Method_ScrPlayerStatus__EndLocationRequest_b__161_1__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_8359/*"LOCATION_GIFT_DLG_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_8361/*"LOCATION_GIFT_DLG_DETAIL"*/);
    sub_1C93AD4(&StringLiteral_8360/*"LOCATION_GIFT_DLG_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8354/*"LOCATION_DLG_FAIL_TITLE"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_22484/*"ngParse"*/);
    sub_1C93AD4(&StringLiteral_8353/*"LOCATION_DLG_FAIL_MESSAGE"*/);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&StringLiteral_8362/*"LOCATION_GIFT_DLG_TITLE"*/);
    byte_4D2D747 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_64461044(result, (System_String_o *)StringLiteral_22484/*"ngParse"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8354/*"LOCATION_DLG_FAIL_TITLE"*/, 0);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8353/*"LOCATION_DLG_FAIL_MESSAGE"*/, 0);
    v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v4, Method_ScrPlayerStatus__EndLocationRequest_b__161_0__, 0);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v6, v7, v8, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_20:
    sub_1C93D2C(this, result);
  }
  if ( System_String__Equals_64461044(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    v4->fields.isLocationBusy = 0;
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__Deserialize_object_(
           (Il2CppObject *)result,
           (const MethodInfo_3213E20 *)Method_JsonManager_Deserialize_EventLocationRequest_LocationGift___);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LOCATION_GIFT_DLG_TITLE"*/, 0);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8361/*"LOCATION_GIFT_DLG_DETAIL"*/, 0);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8359/*"LOCATION_GIFT_DLG_CANCEL"*/, 0);
    this = (ScrPlayerStatus_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8360/*"LOCATION_GIFT_DLG_DECIDE"*/, 0);
    if ( !v9 )
      goto LABEL_20;
    v14 = this;
    monitor = (GiftEntity_array *)v9[1].monitor;
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    LocationRewardDlgColumn = v16->static_fields->LocationRewardDlgColumn;
    v18 = (CommonMultiItemGetDlg_OnClickDelegate_o *)sub_1C93D20(CommonMultiItemGetDlg_OnClickDelegate_TypeInfo);
    CommonMultiItemGetDlg_OnClickDelegate___ctor(
      v18,
      (Il2CppObject *)v4,
      Method_ScrPlayerStatus__EndLocationRequest_b__161_1__,
      0);
    if ( !v10 )
      goto LABEL_20;
    CommonUI__OpenMultiGiftGetDialog(
      (CommonUI_o *)v10,
      v11,
      v12,
      v13,
      (System_String_o *)v14,
      monitor,
      LocationRewardDlgColumn,
      v18,
      0);
  }
}


void ScrPlayerStatus__ExitCompleteMission(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D2D74F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__ExitCompleteMission_b__170_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D74F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitCompleteMission_b__170_0__, 0);
  if ( !v6 )
    sub_1C93D2C(v9, v10);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0);
}


void ScrPlayerStatus__ExitMasterMission(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D2D74E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__ExitMasterMission_b__169_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D74E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterMission_b__169_0__, 0);
  if ( !v6 )
    sub_1C93D2C(v9, v10);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0);
}


void ScrPlayerStatus__ExitMasterProfile(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2D73F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__ExitMasterProfile_b__151_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D73F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterProfile_b__151_0__, 0);
  if ( !v5 )
    sub_1C93D2C(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__FrameIn(ScrPlayerStatus_o *this, bool is_force, const MethodInfo *method)
{
  TerminalSceneComponent_c *IsGrandQuestWarId; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x21
  TerminalPramsManager_c *v8; // x0
  int32_t WarId_k__BackingField; // w22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  if ( (byte_4D2D76D & 1) == 0 )
  {
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D76D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  IsGrandQuestWarId = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    IsGrandQuestWarId = TerminalSceneComponent_TypeInfo;
  }
  mInstance = IsGrandQuestWarId->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_25;
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2ABEB )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2ABEB = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  IsGrandQuestWarId = (TerminalSceneComponent_c *)ScrTerminalListTop__IsGrandQuestWarId(WarId_k__BackingField, 0);
  if ( ((unsigned __int8)IsGrandQuestWarId & 1) == 0 )
    goto LABEL_23;
  if ( !mTerminalList )
LABEL_25:
    sub_1C93D2C(IsGrandQuestWarId, is_force);
  if ( !ScrTerminalListTop__IsGrandQuestActive(mTerminalList, 0) )
  {
LABEL_23:
    ScrPlayerStatus__SetupDispRaidPoint(this, (const MethodInfo *)is_force);
    ScrPlayerStatus__FrameInOut(this, 1, is_force, v11);
    ScrPlayerStatus__UpdateCompleteMissionIconVisibility(this, v12);
    return;
  }
  if ( !ScrTerminalListTop__IsGrandQuestClassSelect(mTerminalList, 0) )
    ScrPlayerStatus__FrameInOut(this, 1, is_force, v10);
}


void ScrPlayerStatus__FrameInOut(ScrPlayerStatus_o *this, bool is_framein, bool is_force, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  ScrPlayerStatus_c *v9; // x8
  float mFrameInPosX; // s14
  UnityEngine_GameObject_o *v11; // x21
  struct ScrPlayerStatus_StaticFields *static_fields; // x8
  float FRAME_OUT_POS_X; // s15
  float v14; // s8
  Il2CppObject *Component_object; // x20
  const MethodInfo *v16; // x1
  ScrPlayerStatus_c *v17; // x0
  float MV_SPD_TIME; // s9
  float IntpTime_AutoResume; // s13
  float v20; // s0
  float y; // s1
  float z; // s2
  float v23; // s3
  float v24; // s4
  UnityEngine_GameObject_o *v25; // x21
  UnityEngine_GameObject_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v41; // 0:kr14_12.12

  if ( (byte_4D2D76E & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_UITweener_Begin_TweenPosition___);
    sub_1C93AD4(&StringLiteral_6892/*"FrameInOutEnd"*/);
    byte_4D2D76E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v9 = ScrPlayerStatus_TypeInfo;
  mFrameInPosX = this->fields.mFrameInPosX;
  v11 = gameObject;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    v9 = ScrPlayerStatus_TypeInfo;
  }
  static_fields = v9->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  if ( is_framein )
    v14 = mFrameInPosX;
  else
    v14 = static_fields->FRAME_OUT_POS_X;
  if ( !is_force && v14 != GameObjectExtensions__GetLocalPositionX(v11, 0) )
  {
    v17 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
      v17 = ScrPlayerStatus_TypeInfo;
    }
    MV_SPD_TIME = v17->static_fields->MV_SPD_TIME;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(MV_SPD_TIME, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(v11, 0);
    v41 = GameObjectExtensions__GetLocalPosition(v11, 0);
    gameObject = (UnityEngine_GameObject_o *)UITweener__Begin_object_(
                                               v11,
                                               IntpTime_AutoResume,
                                               (const MethodInfo_327A3AC *)Method_UITweener_Begin_TweenPosition___);
    if ( gameObject )
    {
      if ( is_framein )
        v20 = FRAME_OUT_POS_X;
      else
        v20 = mFrameInPosX;
      if ( is_framein )
        y = v41.fields.y;
      else
        y = LocalPosition.fields.y;
      if ( is_framein )
        z = v41.fields.z;
      else
        z = LocalPosition.fields.z;
      if ( is_framein )
        v23 = LocalPosition.fields.y;
      else
        v23 = v41.fields.y;
      if ( is_framein )
        v24 = LocalPosition.fields.z;
      else
        v24 = v41.fields.z;
      v25 = gameObject;
      *(float *)&gameObject[5].monitor = v20;
      *((float *)&gameObject[5].monitor + 1) = y;
      *(float *)&gameObject[5].fields.m_CachedPtr = z;
      *((float *)&gameObject[5].fields.m_CachedPtr + 1) = v14;
      *(float *)&gameObject[6].klass = v23;
      *((float *)&gameObject[6].klass + 1) = v24;
      LODWORD(gameObject[1].monitor) = 2;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v25[3].monitor = v26;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v25[3].monitor, (int32_t)v26, v27, v28, v29, v30, v31, v32);
      v33 = StringLiteral_6892/*"FrameInOutEnd"*/;
      v25[3].fields.m_CachedPtr = StringLiteral_6892/*"FrameInOutEnd"*/;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v25[3].fields, v33, v34, v35, v36, v37, v38, v39);
      return;
    }
LABEL_39:
    sub_1C93D2C(gameObject, v8);
  }
  if ( !v11 )
    goto LABEL_39;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v11,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)Component_object, 0);
  }
  GameObjectExtensions__SetLocalPositionX(v11, v14, 0);
  ScrPlayerStatus__FrameInOutEnd(this, v16);
}


void ScrPlayerStatus__FrameInOutEnd(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4D2D76F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7014/*"GO_NEXT"*/);
    byte_4D2D76F = 1;
  }
  ScrPlayerStatus__UpdatePanel(this, method);
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_7014/*"GO_NEXT"*/, v3);
}


void ScrPlayerStatus__FrameOut(ScrPlayerStatus_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScrPlayerStatus__FrameInOut(this, 0, is_force, v3);
}


MasterMissionComponent_MasterMissionInfoItem_o *ScrPlayerStatus__GetDailyMissionInfoItem(
        ScrPlayerStatus_o *this,
        MstMissionEntity_o *mstMissionEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  EventMissionEntity_array *DailyMasterMissionList; // x0
  __int64 v6; // x1
  UserEventMissionMaster_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  EventMissionEntity_array *v10; // x21
  int32_t MissionClearCount; // w22
  int32_t AchiveMissionNum; // w0
  int32_t max_length; // w20
  int32_t v14; // w21
  MasterMissionComponent_MasterMissionInfoItem_o *v15; // x23

  if ( (byte_4D2D75C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    byte_4D2D75C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMissionMaster___);
  DailyMasterMissionList = (EventMissionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !mstMissionEntity )
    goto LABEL_13;
  if ( !Master_object )
    goto LABEL_13;
  v7 = (UserEventMissionMaster_o *)DailyMasterMissionList;
  DailyMasterMissionList = EventMissionMaster__GetDailyMasterMissionList(
                             (EventMissionMaster_o *)Master_object,
                             mstMissionEntity->fields.id,
                             0);
  if ( !DailyMasterMissionList )
    goto LABEL_13;
  v10 = DailyMasterMissionList;
  if ( DailyMasterMissionList->max_length )
  {
    MissionClearCount = ScrPlayerStatus__GetMissionClearCount(
                          (ScrPlayerStatus_o *)DailyMasterMissionList,
                          DailyMasterMissionList,
                          v8,
                          v9);
    DailyMasterMissionList = (EventMissionEntity_array *)MstMissionEntity__isOpenNow(mstMissionEntity, 0);
    if ( ((unsigned __int8)DailyMasterMissionList & 1) != 0 )
    {
      if ( v7 )
      {
        AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(v7, mstMissionEntity->fields.id, 0);
        max_length = v10->max_length;
        v14 = AchiveMissionNum;
        v15 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C93D20(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
        MasterMissionComponent_MasterMissionInfoItem___ctor(
          v15,
          mstMissionEntity,
          max_length,
          MissionClearCount,
          v14,
          0);
        return v15;
      }
LABEL_13:
      sub_1C93D2C(DailyMasterMissionList, v6);
    }
  }
  return 0;
}


int32_t ScrPlayerStatus__GetEnabledMstMissionCount(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *currentMissionList; // x8
  int size; // w9
  int v7; // w23
  int64_t v8; // x20
  int32_t v9; // w22
  int32_t v10; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4D2D765 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2D765 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_10:
    sub_1C93D2C(Time, v4);
  size = currentMissionList->fields._size;
  v7 = size - 1;
  if ( size < 1 )
    return 0;
  v8 = Time;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentMissionList,
             v9,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    Time = ScrPlayerStatus__IsEnabledMstMission(
             (ScrPlayerStatus_o *)Item,
             (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
             v8,
             v12);
    v10 += Time & 1;
    if ( v7 == v9 )
      return v10;
    currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
    ++v9;
    if ( !currentMissionList )
      goto LABEL_10;
  }
}


int32_t ScrPlayerStatus__GetFirstMstMissionIndex(ScrPlayerStatus_o *this, int32_t targetType, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *currentMissionList; // x8
  int size; // w9
  int v9; // w24
  int64_t v10; // x22
  int32_t v11; // w21
  MasterMissionComponent_MasterMissionInfoItem_o *v12; // x23
  const MethodInfo *v13; // x3

  if ( (byte_4D2D764 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2D764 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( !currentMissionList )
    goto LABEL_14;
  size = currentMissionList->fields._size;
  v9 = size - 1;
  if ( size >= 1 )
  {
    v10 = Time;
    v11 = 0;
    do
    {
      Time = (int64_t)System_Collections_Generic_List_object___get_Item(
                        currentMissionList,
                        v11,
                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Time )
        break;
      v12 = (MasterMissionComponent_MasterMissionInfoItem_o *)Time;
      Time = *(_QWORD *)(Time + 16);
      if ( !Time )
        break;
      Time = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0);
      if ( (_DWORD)Time == targetType )
      {
        Time = ScrPlayerStatus__IsEnabledMstMission((ScrPlayerStatus_o *)Time, v12, v10, v13);
        if ( (Time & 1) != 0 )
          return v11;
      }
      if ( v9 == v11 )
        return -1;
      currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
      ++v11;
    }
    while ( currentMissionList );
LABEL_14:
    sub_1C93D2C(Time, v6);
  }
  return -1;
}


int32_t ScrPlayerStatus__GetMissionClearCount(
        ScrPlayerStatus_o *this,
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
  bool IsIgnoreStartCondition; // w25
  bool v15; // w24
  int32_t MissionProgressType_47706724; // w0

  if ( (byte_4D2D75E & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&MissionInfoMaker_TypeInfo);
    byte_4D2D75E = 1;
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
        sub_1C93D34(this);
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
      v15 = v13;
      MissionProgressType_47706724 = MissionInfoMaker__GetMissionProgressType_47706724(
                                       missionTargetId,
                                       id,
                                       v15,
                                       IsIgnoreStartCondition,
                                       0);
      this = (ScrPlayerStatus_o *)MissionInfoMaker__GetProgStatus(
                                    v9->fields.missionTargetId,
                                    v9->fields.id,
                                    MissionProgressType_47706724,
                                    v15,
                                    0);
      max_length = eventMissionList->max_length;
      ++v6;
      if ( (_DWORD)this == 3 )
        ++v7;
      if ( v6 >= max_length )
        return v7;
    }
LABEL_16:
    sub_1C93D2C(this, eventMissionList);
  }
  return 0;
}


int64_t ScrPlayerStatus__GetMstMissionStarts(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  int64_t result; // x0

  result = this->fields.mstMissionStartsAt;
  if ( result <= 0 )
  {
    ScrPlayerStatus__mfCheckMasterMission(this, method);
    return this->fields.mstMissionStartsAt;
  }
  return result;
}


int32_t ScrPlayerStatus__GetNextMstMissionIndex(ScrPlayerStatus_o *this, int32_t startIndex, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Time; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int size; // w22
  int64_t v9; // x21
  int v10; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4D2D763 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2D763 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0);
  currentMissionList = this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_16:
    sub_1C93D2C(Time, v6);
  size = currentMissionList->fields._size;
  v9 = (int64_t)Time;
  v10 = (size & ~(size >> 31)) + 1;
  while ( --v10 )
  {
    Time = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
    if ( size > startIndex + 1 )
      ++startIndex;
    else
      startIndex = 0;
    if ( !Time )
      goto LABEL_16;
    Item = System_Collections_Generic_List_object___get_Item(
             Time,
             startIndex,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( ScrPlayerStatus__IsEnabledMstMission(
           (ScrPlayerStatus_o *)Item,
           (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
           v9,
           v12) )
    {
      return startIndex;
    }
  }
  return 0;
}


System_String_o *ScrPlayerStatus__GetTimeApRecoverStr(
        ScrPlayerStatus_o *this,
        int64_t time,
        bool isGetMax,
        const MethodInfo *method)
{
  int v5; // w20
  int v6; // w21
  int v7; // w22
  int v8; // w23
  System_String_o *v9; // x19
  System_String_o *v10; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  int v19; // [xsp+Ch] [xbp-44h] BYREF
  int v20; // [xsp+18h] [xbp-38h] BYREF
  int v21; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = time;
  if ( (byte_4D2D758 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_14942/*"USER_ACTION_POINT_MAX_TIME"*/);
    sub_1C93AD4(&StringLiteral_14944/*"USER_ACTION_POINT_NEXT_TIME"*/);
    sub_1C93AD4(&StringLiteral_14943/*"USER_ACTION_POINT_MAX_TIME_FORMAT"*/);
    sub_1C93AD4(&StringLiteral_14945/*"USER_ACTION_POINT_NEXT_TIME_FORMAT"*/);
    byte_4D2D758 = 1;
  }
  v6 = v5 / 3600;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = v5 / 60 - 60 * v6;
  v8 = v5 % 60;
  if ( isGetMax )
  {
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_14942/*"USER_ACTION_POINT_MAX_TIME"*/, 0);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_14943/*"USER_ACTION_POINT_MAX_TIME_FORMAT"*/, 0);
    v21 = v6;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v20 = v7;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v19 = v8;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v14 = System_String__Format_64467100(v10, v11, v12, v13, 0);
  }
  else
  {
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_14944/*"USER_ACTION_POINT_NEXT_TIME"*/, 0);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14945/*"USER_ACTION_POINT_NEXT_TIME_FORMAT"*/, 0);
    v21 = v7;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v20 = v8;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v14 = System_String__Format_64467032(v15, v16, v17, 0);
  }
  return System_String__Concat_64425724(v9, v14, 0);
}


System_String_o *ScrPlayerStatus__GetTimeCommandSpellRecoverStr(
        ScrPlayerStatus_o *this,
        int64_t time,
        const MethodInfo *method)
{
  int v3; // w19
  int v4; // w22
  Il2CppObject *v5; // x19
  Il2CppObject *v6; // x0
  int v8; // [xsp+8h] [xbp-28h] BYREF
  int v9; // [xsp+Ch] [xbp-24h] BYREF

  v3 = time;
  if ( (byte_4D2D759 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_25416/*"{0:D}:{1:D2}"*/);
    byte_4D2D759 = 1;
  }
  v4 = v3 % 60;
  v9 = v3 / 60;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = v4;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format_64467032((System_String_o *)StringLiteral_25416/*"{0:D}:{1:D2}"*/, v5, v6, 0);
}


void ScrPlayerStatus__HideMstMissionIconLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterMissionDailyBgObj; // x0

  masterMissionDailyBgObj = this->fields.masterMissionDailyBgObj;
  if ( !masterMissionDailyBgObj )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0);
  masterMissionDailyBgObj = this->fields.masterMissionWeeklyBgObj;
  if ( !masterMissionDailyBgObj )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0);
  masterMissionDailyBgObj = this->fields.masterMissionLimitedBgObj;
  if ( !masterMissionDailyBgObj
    || (UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0),
        (masterMissionDailyBgObj = this->fields.masterMissionAlertRoot) == 0)
    || (UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0),
        (masterMissionDailyBgObj = this->fields.masterMissionCountRoot) == 0)
    || (UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0),
        (masterMissionDailyBgObj = this->fields.masterMissionAnimationLabelsRoot) == 0) )
  {
LABEL_8:
    sub_1C93D2C(masterMissionDailyBgObj, method);
  }
  UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0);
}


void ScrPlayerStatus__InitApRecoverLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_c *v3; // x0
  float v4; // s0
  TitleInfoControl_c *v5; // x0
  float v6; // s8
  System_Func_float__float__float__float__o *v7; // x20
  AlphaTransitionCalculator_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  AlphaTransitionCalculator_o *apRecoverStrAlphaCalculator; // x0

  if ( (byte_4D2D753 & 1) == 0 )
  {
    sub_1C93AD4(&AlphaTransitionCalculator_TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&TitleInfoControl_TypeInfo);
    byte_4D2D753 = 1;
  }
  v3 = ScrPlayerStatus_TypeInfo;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    v3 = ScrPlayerStatus_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0);
  v5 = TitleInfoControl_TypeInfo;
  v6 = v4;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v5 = TitleInfoControl_TypeInfo;
  }
  v7 = ExtraEasing__AsymptoticSeriesFloat(
         v5->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
         (float)ScrPlayerStatus_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
         0);
  v8 = (AlphaTransitionCalculator_o *)sub_1C93D20(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v8, v6, v7, 0);
  this->fields.apRecoverStrAlphaCalculator = v8;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.apRecoverStrAlphaCalculator,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  apRecoverStrAlphaCalculator = this->fields.apRecoverStrAlphaCalculator;
  if ( !apRecoverStrAlphaCalculator )
    sub_1C93D2C(0, v15);
  AlphaTransitionCalculator__MakeFadeInFinished(apRecoverStrAlphaCalculator, 0);
  this->fields.ApRecoverStrUpdateTimer = 0.0;
  this->fields.isDispMax = 1;
}


void ScrPlayerStatus__InitCompleteMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  CompleteMissionViewController_o *completeMissionViewController; // x0
  const MethodInfo *v4; // x1

  completeMissionViewController = this->fields.completeMissionViewController;
  if ( !completeMissionViewController )
    sub_1C93D2C(0, method);
  CompleteMissionViewController__Refresh(completeMissionViewController, 0);
  ScrPlayerStatus__UpdateCompleteMissionIconVisibility(this, v4);
}


void ScrPlayerStatus__InitMstMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *masterMissionAlertPanel; // x0
  const MethodInfo *v4; // x2
  ScrPlayerStatus_c *v5; // x0
  struct AlphaTransitionCalculator_o **p_missionAlertAlphaCalculator; // x20
  float v7; // s8
  TitleInfoControl_c *v8; // x0
  System_Func_float__float__float__float__o *v9; // x21
  AlphaTransitionCalculator_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4D2D75F & 1) == 0 )
  {
    sub_1C93AD4(&AlphaTransitionCalculator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&TitleInfoControl_TypeInfo);
    byte_4D2D75F = 1;
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.masterMissionAlertPanel;
  this->fields.mstMissionIconUpdateTimer = 0.0;
  if ( !masterMissionAlertPanel )
    goto LABEL_19;
  ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))masterMissionAlertPanel->klass[1]._1.element_class)(
    masterMissionAlertPanel,
    masterMissionAlertPanel->klass[1]._1.castClass,
    1.0);
  if ( !this->fields.missionAlertAlphaCalculator )
  {
    v5 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
      v5 = ScrPlayerStatus_TypeInfo;
    }
    p_missionAlertAlphaCalculator = &this->fields.missionAlertAlphaCalculator;
    v7 = ChangedFPSUtil__CovertFrameNumToSecond(v5->static_fields->MISSION_ALERT_FADE_FRAME_NUM, 0);
    v8 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v8 = TitleInfoControl_TypeInfo;
    }
    v9 = ExtraEasing__AsymptoticSeriesFloat(
           v8->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
           (float)ScrPlayerStatus_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM,
           0);
    v10 = (AlphaTransitionCalculator_o *)sub_1C93D20(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v10, v7, v9, 0);
    *p_missionAlertAlphaCalculator = v10;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.missionAlertAlphaCalculator,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    masterMissionAlertPanel = *p_missionAlertAlphaCalculator;
    if ( !*p_missionAlertAlphaCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(masterMissionAlertPanel, 0);
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 5, v4);
  method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel;
  if ( ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0
    || (masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 3, v17),
        method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel,
        ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0)
    || (masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 2, v17),
        method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel,
        ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0) )
  {
    currentMissionList = this->fields.currentMissionList;
    if ( !currentMissionList )
      goto LABEL_19;
    if ( currentMissionList->fields._size >= 1 )
    {
      this->fields.currentMissionIndex = (int)method;
      ScrPlayerStatus__UpdateDailyMissionInfoItem(this, (int32_t)method, v17);
      masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.currentMissionList;
      if ( masterMissionAlertPanel )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)masterMissionAlertPanel,
                 this->fields.currentMissionIndex,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
        ScrPlayerStatus__ChangeViewMstMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v20);
        return;
      }
LABEL_19:
      sub_1C93D2C(masterMissionAlertPanel, method);
    }
  }
  ScrPlayerStatus__HideMstMissionIconLb(this, method);
}


bool ScrPlayerStatus__IsBPActive(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *rpRoot; // x0

  rpRoot = (UnityEngine_Component_o *)this->fields.rpRoot;
  if ( !rpRoot || (rpRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rpRoot, 0)) == 0 )
    sub_1C93D2C(rpRoot, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)rpRoot, 0);
}


bool ScrPlayerStatus__IsCommandSpellActive(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *commandSpellWindow; // x0

  commandSpellWindow = (BattleWindowComponent_o *)this->fields.commandSpellWindow;
  if ( !commandSpellWindow )
    sub_1C93D2C(0, method);
  return BattleWindowComponent__isOpen(commandSpellWindow, 0);
}


bool ScrPlayerStatus__IsEnabledMstMission(
        ScrPlayerStatus_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *missionInfo,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x21
  int32_t MissionType; // w0
  int64_t endedAt; // x8

  if ( !missionInfo || (MstMissionEntity_k__BackingField = missionInfo->fields._MstMissionEntity_k__BackingField) == 0 )
    sub_1C93D2C(this, missionInfo);
  MissionType = MstMissionEntity__getMissionType(missionInfo->fields._MstMissionEntity_k__BackingField, 0);
  if ( (unsigned int)(MissionType - 2) >= 2 )
  {
    if ( MissionType != 5 )
      return 0;
    endedAt = MstMissionEntity_k__BackingField->fields.endedAt;
    return MstMissionEntity_k__BackingField->fields.startedAt <= nowTime && endedAt >= nowTime
        || endedAt < nowTime
        && MstMissionEntity_k__BackingField->fields.closedAt >= nowTime
        && missionInfo->fields._MissionClearCount_k__BackingField > 0;
  }
  return MstMissionEntity__isOpenNow(MstMissionEntity_k__BackingField, 0);
}


bool ScrPlayerStatus__IsLocationBusy(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  return this->fields.isLocationBusy;
}


bool ScrPlayerStatus__IsTouchable(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *v2; // x0
  QuestRewardItemAction_c *klass; // x8

  if ( (byte_4D2D73D & 1) == 0 )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D73D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v2 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.friendPointBoostItemAction->klass;
  if ( !klass || (v2 = *(ScrTerminalListTop_o **)&klass->_2.element_size) == 0 )
    sub_1C93D2C(v2, method);
  return !ScrTerminalListTop__IsListSliding(v2, 0);
}


void ScrPlayerStatus__OnClickApRecoverBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  Il2CppObject *Instance; // x20
  RecoverDlgComponent_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  v2 = this;
  if ( (byte_4D2D738 & 1) == 0 )
  {
    sub_1C93AD4(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__OnClickApRecoverBtn_b__143_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D738 = 1;
  }
  if ( v2->fields.mIsEnableApRecoverBtn && ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C93D20(RecoverDlgComponent_CallbackFunc_TypeInfo);
    RecoverDlgComponent_CallbackFunc___ctor(
      v4,
      (Il2CppObject *)v2,
      Method_ScrPlayerStatus__OnClickApRecoverBtn_b__143_0__,
      0);
    if ( !Instance )
      sub_1C93D2C(v5, v6);
    CommonUI__OpenApRecoverItemListDialog((CommonUI_o *)Instance, 0, v4, 1, 0);
  }
}


void ScrPlayerStatus__OnClickCloseNextExp(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BaseDialog_o *nextExpDialog; // x19
  ScrPlayerStatus___c_c *v5; // x0
  System_Action_o *_9__153_0; // x20
  Il2CppObject *v7; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2D741 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__OnClickCloseNextExp_b__153_0__);
    sub_1C93AD4(&ScrPlayerStatus___c_TypeInfo);
    byte_4D2D741 = 1;
  }
  if ( !this->fields.isDisableCloseNextExpBtn )
  {
    this->fields.isDisableCloseNextExpBtn = 1;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0);
    nextExpDialog = this->fields.nextExpDialog;
    v5 = ScrPlayerStatus___c_TypeInfo;
    if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
      v5 = ScrPlayerStatus___c_TypeInfo;
    }
    _9__153_0 = v5->static_fields->__9__153_0;
    if ( !_9__153_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = ScrPlayerStatus___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__153_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(_9__153_0, v7, Method_ScrPlayerStatus___c__OnClickCloseNextExp_b__153_0__, 0);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
      static_fields->__9__153_0 = _9__153_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__153_0,
        (int32_t)_9__153_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    if ( !nextExpDialog )
      sub_1C93D2C(v5, v3);
    BaseDialog__Close(nextExpDialog, _9__153_0, 0);
  }
}


void ScrPlayerStatus__OnClickCompleteMissionBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
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
  ScrPlayerStatus___c_c *v18; // x8
  System_Action_o *_9__139_1; // x21
  Il2CppObject *v20; // x22
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  v2 = (Il2CppObject *)this;
  if ( (byte_4D2D734 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Array_Empty_object___);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__139_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__OnClickCompleteMissionBtn_b__139_1__);
    sub_1C93AD4(&ScrPlayerStatus___c_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&StringLiteral_3732/*"COMPLETE_MISSION_END"*/);
    byte_4D2D734 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
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
          v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v7 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v7 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
          v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v9, v2, Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__139_0__, 0);
          if ( v6 )
          {
            CommonUI__maskFadeout((CommonUI_o *)v6, 1, DEFAULT_FADE_TIME, v9, 0);
            return;
          }
        }
      }
LABEL_40:
      sub_1C93D2C(Instance, v4);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"COMPLETE_MISSION_END"*/, 0);
    v12 = Method_System_Array_Empty_object___;
    v13 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v13 )
    {
      sub_1C69BC4(Method_System_Array_Empty_object___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C69B68(inited);
    v16 = System_String__Format_64467168(v10, **(System_Object_array ***)(v15 + 184), 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (CommonUI_o *)Instance;
    v18 = ScrPlayerStatus___c_TypeInfo;
    if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
      v18 = ScrPlayerStatus___c_TypeInfo;
    }
    _9__139_1 = v18->static_fields->__9__139_1;
    if ( !_9__139_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = ScrPlayerStatus___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__139_1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(_9__139_1, v20, Method_ScrPlayerStatus___c__OnClickCompleteMissionBtn_b__139_1__, 0);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
      static_fields->__9__139_1 = _9__139_1;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__139_1,
        (int32_t)_9__139_1,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    if ( !v17 )
      goto LABEL_40;
    CommonUI__OpenNotificationDialog(v17, 0, v16, _9__139_1, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
  }
}


void ScrPlayerStatus__OnClickDailyMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v6; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4D2D735 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__OnClickDailyMissionInfoBtn_b__140_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D735 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v6 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v6 )
      goto LABEL_25;
    genericContainerHandle = (ScrTerminalMap_o *)v6->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v10, v2, Method_ScrPlayerStatus__OnClickDailyMissionInfoBtn_b__140_0__, 0);
    if ( !Instance )
LABEL_25:
      sub_1C93D2C(genericContainerHandle, v3);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0);
  }
}


void ScrPlayerStatus__OnClickLimitedMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v6; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4D2D737 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__OnClickLimitedMissionInfoBtn_b__142_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D737 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v6 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v6 )
      goto LABEL_25;
    genericContainerHandle = (ScrTerminalMap_o *)v6->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v10, v2, Method_ScrPlayerStatus__OnClickLimitedMissionInfoBtn_b__142_0__, 0);
    if ( !Instance )
LABEL_25:
      sub_1C93D2C(genericContainerHandle, v3);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0);
  }
}


void ScrPlayerStatus__OnClickLocation(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4D2D742 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D742 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(0, 0);
  this->fields.isLocationBusy = 1;
  if ( AndroidPermissionManager__EnabledRuntimePermission(0) )
    ScrPlayerStatus__ShowEnabledRuntimePermissionDialog(this, v3);
  else
    ScrPlayerStatus__ShowDisabledRuntimePermissionDialog(this, v3);
}


void ScrPlayerStatus__OnClickMasterFaceBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v6; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4D2D73A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__OnClickMasterFaceBtn_b__145_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D73A = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v6 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v6 )
      goto LABEL_25;
    genericContainerHandle = (ScrTerminalMap_o *)v6->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v10, v2, Method_ScrPlayerStatus__OnClickMasterFaceBtn_b__145_0__, 0);
    if ( !Instance )
LABEL_25:
      sub_1C93D2C(genericContainerHandle, v3);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0);
  }
}


void ScrPlayerStatus__OnClickMasterMissionBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v6; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4D2D72F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__134_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D72F = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v6 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v6 )
      goto LABEL_25;
    genericContainerHandle = (ScrTerminalMap_o *)v6->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v10, v2, Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__134_0__, 0);
    if ( !Instance )
LABEL_25:
      sub_1C93D2C(genericContainerHandle, v3);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0);
  }
}


void ScrPlayerStatus__OnClickOpenNextExp(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UILabel_o *nextExpValLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  BaseDialog_o *nextExpDialog; // x20
  System_Action_o *v7; // x21

  if ( (byte_4D2D740 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__OnClickOpenNextExp_b__152_0__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_397/*"#,0"*/);
    byte_4D2D740 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(0, 0);
  nextExpValLabel = this->fields.nextExpValLabel;
  v4 = System_Int64__ToString_65939396((int64_t)&this->fields.nextExpVal, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
  if ( !nextExpValLabel
    || (UILabel__set_text(nextExpValLabel, v4, 0),
        this->fields.isDisableCloseNextExpBtn = 1,
        nextExpDialog = this->fields.nextExpDialog,
        v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrPlayerStatus__OnClickOpenNextExp_b__152_0__, 0),
        !nextExpDialog) )
  {
    sub_1C93D2C(v4, v5);
  }
  BaseDialog__Open(nextExpDialog, v7, 0, 0, 0);
}


void ScrPlayerStatus__OnClickRpRecoverBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  Il2CppObject *Instance; // x20
  RecoverDlgComponent_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  v2 = this;
  if ( (byte_4D2D739 & 1) == 0 )
  {
    sub_1C93AD4(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__OnClickRpRecoverBtn_b__144_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D739 = 1;
  }
  if ( v2->fields.mIsEnableRpRecoverBtn && ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C93D20(RecoverDlgComponent_CallbackFunc_TypeInfo);
    RecoverDlgComponent_CallbackFunc___ctor(
      v4,
      (Il2CppObject *)v2,
      Method_ScrPlayerStatus__OnClickRpRecoverBtn_b__144_0__,
      0);
    if ( !Instance )
      sub_1C93D2C(v5, v6);
    CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)Instance, 0, v4, 1, 0);
  }
}


void ScrPlayerStatus__OnClickSpellBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  _BOOL4 isRevocationSpell; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct CommandSpellWindowComponent_o *commandSpellWindow; // x0

  v2 = this;
  if ( (byte_4D2D73B & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&Method_ScrPlayerStatus_OnClickSpellBtn__);
    byte_4D2D73B = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    isRevocationSpell = v2->fields.isRevocationSpell;
    v4 = Method_ScrPlayerStatus_OnClickSpellBtn__;
    if ( (*((_BYTE *)Method_ScrPlayerStatus_OnClickSpellBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C93AEC(Method_ScrPlayerStatus_OnClickSpellBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
    if ( isRevocationSpell )
    {
      OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
      commandSpellWindow = v2->fields.commandSpellWindow;
      if ( !commandSpellWindow )
        sub_1C93D2C(0, v6);
      ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, const MethodInfo *))commandSpellWindow->klass->vtable._10_Open.methodPtr)(
        commandSpellWindow,
        0,
        commandSpellWindow->klass->vtable._10_Open.method);
    }
  }
}


void ScrPlayerStatus__OnClickWeeklyMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v6; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4D2D736 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__OnClickWeeklyMissionInfoBtn_b__141_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D736 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v6 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v6 )
      goto LABEL_25;
    genericContainerHandle = (ScrTerminalMap_o *)v6->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v10, v2, Method_ScrPlayerStatus__OnClickWeeklyMissionInfoBtn_b__141_0__, 0);
    if ( !Instance )
LABEL_25:
      sub_1C93D2C(genericContainerHandle, v3);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0);
  }
}


void ScrPlayerStatus__OnCloseSpellWindow(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  __int64 v3; // x1
  BattleWindowComponent_o *commandSpellWindow; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  v2 = this;
  if ( (byte_4D2D73C & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&Method_ScrPlayerStatus_OnCloseSpellWindow__);
    byte_4D2D73C = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    commandSpellWindow = (BattleWindowComponent_o *)v2->fields.commandSpellWindow;
    if ( !commandSpellWindow )
      goto LABEL_11;
    if ( BattleWindowComponent__isOpen(commandSpellWindow, 0) )
    {
      v5 = Method_ScrPlayerStatus_OnCloseSpellWindow__;
      if ( (*((_BYTE *)Method_ScrPlayerStatus_OnCloseSpellWindow__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C93AEC(Method_ScrPlayerStatus_OnCloseSpellWindow__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
      commandSpellWindow = (BattleWindowComponent_o *)v2->fields.commandSpellWindow;
      if ( commandSpellWindow )
      {
        ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, const MethodInfo *))commandSpellWindow->klass->vtable._12_Close.methodPtr)(
          commandSpellWindow,
          0,
          commandSpellWindow->klass->vtable._12_Close.method);
        return;
      }
LABEL_11:
      sub_1C93D2C(commandSpellWindow, v3);
    }
  }
}


void ScrPlayerStatus__OnDestroy(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  UnityEngine_Object_o *v5; // x19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4D2D72A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D72A = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C69B68(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseUsrPresentList((CommonUI_o *)Instance, 0);
        return;
      }
LABEL_15:
      sub_1C93D2C(Instance, v7);
    }
  }
}


void ScrPlayerStatus__OnPermissionDenied(
        ScrPlayerStatus_o *this,
        System_String_o *permissionName,
        const MethodInfo *method)
{
  this->fields.isLocationBusy = 0;
}


void ScrPlayerStatus__OpenCompleteMission(
        ScrPlayerStatus_o *this,
        System_Action_o *callback,
        int32_t typeIndex,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  bool IsParticleActive; // w0
  System_String_c *v17; // x8
  Il2CppObject *Instance; // x21
  CompleteMissionComponent_ClickDelegate_o *v19; // x22
  System_Action_o *v20; // x23
  TerminalSceneComponent_c *v21; // x0

  if ( (byte_4D2D733 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&CompleteMissionComponent_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus_ExitCompleteMission__);
    sub_1C93AD4(&Method_ScrPlayerStatus__OpenCompleteMission_b__138_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D733 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0);
  this->fields.mAfterCloseCompleteMission = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAfterCloseCompleteMission,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.particleAssetName->klass;
  if ( !klass )
    goto LABEL_32;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_32;
  IsParticleActive = TitleInfoControl__get_IsParticleActive(genericContainerHandle, 0);
  this->fields.isTerminalEffectDisplay = IsParticleActive;
  if ( IsParticleActive )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v17 = genericContainerHandle->fields.particleAssetName->klass;
    if ( v17 )
    {
      genericContainerHandle = (TitleInfoControl_o *)v17->_2.genericContainerHandle;
      if ( genericContainerHandle )
      {
        TitleInfoControl__setDispParticleObj(genericContainerHandle, 0, 0);
        goto LABEL_23;
      }
    }
LABEL_32:
    sub_1C93D2C(genericContainerHandle, v13);
  }
LABEL_23:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (CompleteMissionComponent_ClickDelegate_o *)sub_1C93D20(CompleteMissionComponent_ClickDelegate_TypeInfo);
  CompleteMissionComponent_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_ScrPlayerStatus_ExitCompleteMission__,
    0);
  v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ScrPlayerStatus__OpenCompleteMission_b__138_0__, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v19, v20, typeIndex, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v21 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v21 = TerminalSceneComponent_TypeInfo;
  }
  genericContainerHandle = (TitleInfoControl_o *)v21->static_fields->mInstance;
  if ( !genericContainerHandle )
    goto LABEL_32;
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)genericContainerHandle, 0, 0);
}


void ScrPlayerStatus__OpenMasterMission(
        ScrPlayerStatus_o *this,
        System_Action_o *callback,
        int32_t typeIndex,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.mAfterCloseMasterMission = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAfterCloseMasterMission,
    (int32_t)callback,
    typeIndex,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ScrPlayerStatus__OpenMasterMission_37263496(this, typeIndex, v10);
}


void ScrPlayerStatus__OpenMasterMissionFromCompleteMission(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_37263496(this, -1, v2);
}


void ScrPlayerStatus__OpenMasterMission_37263496(ScrPlayerStatus_o *this, int32_t typeIndex, const MethodInfo *method)
{
  __int64 v5; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  bool IsParticleActive; // w0
  System_String_c *v9; // x8
  Il2CppObject *Instance; // x21
  MasterMissionComponent_ClickDelegate_o *v11; // x22
  System_Action_o *v12; // x23
  TerminalSceneComponent_c *v13; // x0
  System_String_c *v14; // x8
  System_String_c *v15; // x8
  __int64 v16; // x8

  if ( (byte_4D2D72E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&MasterMissionComponent_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus_ExitMasterMission__);
    sub_1C93AD4(&Method_ScrPlayerStatus__OpenMasterMission_b__133_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D72E = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.particleAssetName->klass;
  if ( !klass )
    goto LABEL_49;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_49;
  IsParticleActive = TitleInfoControl__get_IsParticleActive(genericContainerHandle, 0);
  this->fields.isTerminalEffectDisplay = IsParticleActive;
  if ( IsParticleActive )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v9 = genericContainerHandle->fields.particleAssetName->klass;
    if ( !v9 )
      goto LABEL_49;
    genericContainerHandle = (TitleInfoControl_o *)v9->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_49;
    TitleInfoControl__setDispParticleObj(genericContainerHandle, 0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (MasterMissionComponent_ClickDelegate_o *)sub_1C93D20(MasterMissionComponent_ClickDelegate_TypeInfo);
  MasterMissionComponent_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_ScrPlayerStatus_ExitMasterMission__, 0);
  v12 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ScrPlayerStatus__OpenMasterMission_b__133_0__, 0);
  if ( !Instance )
    goto LABEL_49;
  CommonUI__OpenMasterMission((CommonUI_o *)Instance, v11, v12, typeIndex, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  genericContainerHandle = (TitleInfoControl_o *)v13->static_fields->mInstance;
  if ( !genericContainerHandle )
    goto LABEL_49;
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)genericContainerHandle, 0, 0);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v14 = genericContainerHandle->fields.particleAssetName->klass;
  if ( !v14 )
    goto LABEL_49;
  genericContainerHandle = *(TitleInfoControl_o **)&v14->_2.element_size;
  if ( !genericContainerHandle )
    goto LABEL_49;
  if ( ScrTerminalListTop__IsGrandQuestActive((ScrTerminalListTop_o *)genericContainerHandle, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v15 = genericContainerHandle->fields.particleAssetName->klass;
    if ( v15 )
    {
      v16 = *(_QWORD *)&v15->_2.element_size;
      if ( v16 )
      {
        genericContainerHandle = *(TitleInfoControl_o **)(v16 + 824);
        if ( genericContainerHandle )
        {
          GrandQuestRootComponent__SetDispServant((GrandQuestRootComponent_o *)genericContainerHandle, 0, 0);
          return;
        }
      }
    }
LABEL_49:
    sub_1C93D2C(genericContainerHandle, v5);
  }
}


void ScrPlayerStatus__OpenMasterProfile(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  MstProfileComponent_ClickDelegate_o *v4; // x20
  __int64 v5; // x1
  ScrPlayerStatus___c_c *mInstance; // x0
  System_Action_o *_9__150_0; // x21
  Il2CppObject *v8; // x22
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  TerminalSceneComponent_c *v16; // x0

  if ( (byte_4D2D73E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&MstProfileComponent_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus_ExitMasterProfile__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__OpenMasterProfile_b__150_0__);
    sub_1C93AD4(&ScrPlayerStatus___c_TypeInfo);
    byte_4D2D73E = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (MstProfileComponent_ClickDelegate_o *)sub_1C93D20(MstProfileComponent_ClickDelegate_TypeInfo);
  MstProfileComponent_ClickDelegate___ctor(v4, (Il2CppObject *)this, Method_ScrPlayerStatus_ExitMasterProfile__, 0);
  mInstance = ScrPlayerStatus___c_TypeInfo;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    mInstance = ScrPlayerStatus___c_TypeInfo;
  }
  _9__150_0 = mInstance->static_fields->__9__150_0;
  if ( !_9__150_0 )
  {
    if ( !mInstance->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mInstance);
      mInstance = ScrPlayerStatus___c_TypeInfo;
    }
    v8 = (Il2CppObject *)mInstance->static_fields->__9;
    _9__150_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__150_0, v8, Method_ScrPlayerStatus___c__OpenMasterProfile_b__150_0__, 0);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__150_0 = _9__150_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__150_0,
      (int32_t)_9__150_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenMasterProfile((CommonUI_o *)Instance, v4, _9__150_0, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v16 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v16 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (ScrPlayerStatus___c_c *)v16->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_1C93D2C(mInstance, v5);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0);
}


void ScrPlayerStatus__ResetMasterFaceTexture(
        ScrPlayerStatus_o *this,
        int32_t overWriteImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mcMasterCurTexP; // x22
  struct UIMasterFaceTexture_o **p_mcMasterCurTexP; // x21
  __int64 v7; // x1
  long double v8; // q0
  UnityEngine_Component_o *MasterData_object; // x0
  UnityEngine_Object_o *gameObject; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int64_t miMasterUserEquipID; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  intptr_t m_CachedPtr; // x22
  void *monitor; // x23
  int32_t v22; // w22
  UnityEngine_GameObject_o *mcFaceObjP; // x23
  int32_t meMasterGender; // w24
  System_Action_o *v25; // x25
  struct UIMasterFaceTexture_o *Prefab_41387856; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4D2D756 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus_mfFaceMngCallback__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D2D756 = 1;
  }
  mcMasterCurTexP = (UnityEngine_Object_o *)this->fields.mcMasterCurTexP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_mcMasterCurTexP = &this->fields.mcMasterCurTexP;
  if ( UnityEngine_Object__op_Implicit(mcMasterCurTexP, 0) )
  {
    MasterData_object = (UnityEngine_Component_o *)*p_mcMasterCurTexP;
    if ( !*p_mcMasterCurTexP )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(MasterData_object, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    *p_mcMasterCurTexP = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mcMasterCurTexP, 0, v11, v12, v13, v14, v15, v16);
  }
  miMasterUserEquipID = this->fields.miMasterUserEquipID;
  this->fields.overwriteMasterIconId = overWriteImageId;
  if ( miMasterUserEquipID < 1 )
  {
    v22 = 0;
    goto LABEL_22;
  }
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C69B68(v8);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C69B68(v8);
  MasterData_object = **(UnityEngine_Component_o ***)(v19 + 184);
  if ( !MasterData_object
    || (MasterData_object = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)MasterData_object,
                                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0
    || (MasterData_object = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                         this->fields.miMasterUserEquipID,
                                                         (const MethodInfo_3465A24 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__)) == 0 )
  {
LABEL_23:
    sub_1C93D2C(MasterData_object, v7);
  }
  monitor = MasterData_object[1].monitor;
  m_CachedPtr = MasterData_object[1].fields.m_CachedPtr;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v33.fields.fakeValue = m_CachedPtr;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v33, 0);
LABEL_22:
  mcFaceObjP = this->fields.mcFaceObjP;
  meMasterGender = this->fields.meMasterGender;
  v25 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ScrPlayerStatus_mfFaceMngCallback__, 0);
  Prefab_41387856 = MasterFaceManager__CreatePrefab_41387856(
                      mcFaceObjP,
                      1,
                      meMasterGender,
                      v22,
                      1,
                      v25,
                      overWriteImageId,
                      0);
  this->fields.mcMasterCurTexP = Prefab_41387856;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mcMasterCurTexP,
    (int32_t)Prefab_41387856,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void ScrPlayerStatus__SetAfterCloseMasterMissionAct(
        ScrPlayerStatus_o *this,
        System_Action_o *act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mAfterCloseMasterMission = act;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAfterCloseMasterMission,
    (int32_t)act,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScrPlayerStatus__SetAllParam(ScrPlayerStatus_o *this, UserGameEntity_o *entity, const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  int64_t ActiveUserEquipId; // x0
  Il2CppType *v6; // x22
  int64_t v7; // x21
  System_Type_o *TypeFromHandle; // x0
  int32_t genderType; // w22
  System_Type_o *v10; // x23
  int32_t v11; // w8
  int32_t Act; // w0
  int32_t actMax; // w8
  float v14; // s0
  int32_t CommandSpell; // w20
  int32_t Value; // w0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  ScrPlayerStatus_o *v19; // x0
  int64_t v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int64_t exp; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4D2D728 & 1) == 0 )
  {
    sub_1C93AD4(&System_Enum_TypeInfo);
    sub_1C93AD4(&Gender_Type_var);
    sub_1C93AD4(&Gender_Type_TypeInfo);
    sub_1C93AD4(&System_Type_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&StringLiteral_8659/*"MAX_COMMAND_SPELL"*/);
    byte_4D2D728 = 1;
  }
  exp = 0;
  if ( !entity )
    goto LABEL_17;
  v4->fields.miLevel = entity->fields.lv;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(entity, 0);
  v6 = Gender_Type_var;
  v7 = ActiveUserEquipId;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v6, 0);
  genderType = entity->fields.genderType;
  v10 = TypeFromHandle;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (ScrPlayerStatus_o *)System_Enum__ToObject_66160288(v10, genderType, 0);
  if ( !this )
LABEL_17:
    sub_1C93D2C(this, entity);
  if ( this->klass->_1.element_class == Gender_Type_TypeInfo->_1.element_class )
  {
    v11 = *(_DWORD *)j_il2cpp_object_unbox_0();
    if ( v4->fields.miMasterUserEquipID != v7 || v4->fields.meMasterGender != v11 )
    {
      v4->fields.miMasterUserEquipID = v7;
      v4->fields.isUpdateFaceTexture = 1;
      v4->fields.meMasterGender = v11;
    }
    UserGameEntity__getExpInfo(entity, &exp, &v4->fields.nextExpVal, &v4->fields.mfExpPar, 0);
    Act = UserGameEntity__getAct(entity, 0);
    actMax = entity->fields.actMax;
    v4->fields.miApNow = Act;
    v4->fields.miApMax = actMax;
    if ( Act < 1 )
      v14 = 0.0;
    else
      v14 = (float)Act / (float)actMax;
    v4->fields.mfApPar = v14;
    CommandSpell = UserGameEntity__getCommandSpell(entity, 0);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8659/*"MAX_COMMAND_SPELL"*/, 0);
    ScrPlayerStatus__mfSetSpell(v4, CommandSpell, Value, v17);
    ScrPlayerStatus__mfSetStoneAndFragment(v4, v18);
  }
  else
  {
    sub_1C940C8(this);
    ScrPlayerStatus__mfSetFaceID(v19, v20, v21, v22);
  }
}


void ScrPlayerStatus__SetApRecoverBtnEnable(ScrPlayerStatus_o *this, bool is_enable, const MethodInfo *method)
{
  UIWidget_o *mApRecoverBtnSp; // x0
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mApRecoverBtnSp = (UIWidget_o *)this->fields.mApRecoverBtnSp;
  v5.fields.r = 0.5;
  if ( is_enable )
    v5.fields.r = 1.0;
  this->fields.mIsEnableApRecoverBtn = is_enable;
  if ( !mApRecoverBtnSp )
    sub_1C93D2C(0, is_enable);
  v5.fields.a = 1.0;
  v5.fields.g = v5.fields.r;
  v5.fields.b = v5.fields.r;
  UIWidget__set_color(mApRecoverBtnSp, v5, 0);
}


void ScrPlayerStatus__SetCloseGiftAct(
        ScrPlayerStatus_o *this,
        System_Func_bool__bool__o *act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct GiftButtonCtrl_o *mcGiftButtonP; // x0

  mcGiftButtonP = this->fields.mcGiftButtonP;
  if ( !mcGiftButtonP )
    sub_1C93D2C(0, act);
  mcGiftButtonP->fields.OnGiftCloseAdditionalAction = act;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&mcGiftButtonP->fields.OnGiftCloseAdditionalAction,
    (int32_t)act,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScrPlayerStatus__SetLocationCheck(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  EventEntity_array *EnableEntityList; // x0
  __int64 *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x8
  __int64 v21; // x8
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x21
  CommonUI_o *v24; // x22
  System_String_o *v25; // x23
  System_String_o **v26; // x9
  System_String_o *v27; // x24
  System_String_o *v28; // x0
  _BOOL4 mIsAcceptedLocationEvent; // w25
  System_String_o *v30; // x19
  CampaignInfoDlg_onButtonDelgate_o *v31; // x24
  Il2CppObject *v32; // x19
  System_String_o *v33; // x21
  System_String_o *v34; // x22
  System_Action_o *v35; // x0
  intptr_t *v36; // x8
  System_String_o *v37; // x22
  System_String_o *v38; // x0
  System_Action_o *v39; // x23
  Il2CppObject *v40; // [xsp+40h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4D2D745 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_CampaignInfoMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventLocationCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
    sub_1C93AD4(&GeoLocation_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass159_0__SetLocationCheck_b__0__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass159_0__SetLocationCheck_b__1__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass159_0__SetLocationCheck_b__2__);
    sub_1C93AD4(&ScrPlayerStatus___c__DisplayClass159_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_8352/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_8346/*"LOCATION_CAMPAIGN_INFO_DLG_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8344/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/);
    sub_1C93AD4(&StringLiteral_8354/*"LOCATION_DLG_FAIL_TITLE"*/);
    sub_1C93AD4(&StringLiteral_8355/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_8345/*"LOCATION_CAMPAIGN_INFO_DLG_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_8348/*"LOCATION_DLG_DEVICE_OPTION_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_8347/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/);
    sub_1C93AD4(&CampaignInfoDlg_onButtonDelgate_TypeInfo);
    byte_4D2D745 = 1;
  }
  v40 = 0;
  entity = 0;
  v3 = sub_1C93D20(ScrPlayerStatus___c__DisplayClass159_0_TypeInfo);
  ScrPlayerStatus___c__DisplayClass159_0___ctor((ScrPlayerStatus___c__DisplayClass159_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_39;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
  if ( GeoLocation__IsLocationEnabledByUser(0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_39;
    EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 20, 0, 0, 0);
    *(_QWORD *)(v3 + 24) = EnableEntityList;
    v13 = (__int64 *)(v3 + 24);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)EnableEntityList, v14, v15, v16, v17, v18, v19);
    if ( !*(_QWORD *)(v3 + 24) )
      goto LABEL_39;
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 24) + 24LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventLocationCampaignMaster___);
      v20 = *v13;
      if ( !*v13 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v20 + 24) )
        sub_1C93D34(Instance);
      v21 = *(_QWORD *)(v20 + 32);
      if ( !v21 || !Instance )
        goto LABEL_39;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             *(_DWORD *)(v21 + 16),
             (const MethodInfo_34632C0 *)Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int__TryGetEntity__) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_39;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CampaignInfoMaster___);
        if ( !entity || !Instance )
          goto LABEL_39;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v40,
               (int32_t)entity[2].monitor,
               (const MethodInfo_34632C0 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__) )
        {
          v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v23 = v40;
          v24 = (CommonUI_o *)v22;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8345/*"LOCATION_CAMPAIGN_INFO_DLG_CANCEL"*/, 0);
          if ( this->fields.mIsAcceptedLocationEvent )
            v26 = (System_String_o **)&StringLiteral_8344/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/;
          else
            v26 = (System_String_o **)&StringLiteral_8346/*"LOCATION_CAMPAIGN_INFO_DLG_DECIDE"*/;
          v27 = *v26;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v28 = LocalizationManager__Get(v27, 0);
          mIsAcceptedLocationEvent = this->fields.mIsAcceptedLocationEvent;
          v30 = v28;
          v31 = (CampaignInfoDlg_onButtonDelgate_o *)sub_1C93D20(CampaignInfoDlg_onButtonDelgate_TypeInfo);
          CampaignInfoDlg_onButtonDelgate___ctor(
            v31,
            (Il2CppObject *)v3,
            Method_ScrPlayerStatus___c__DisplayClass159_0__SetLocationCheck_b__1__,
            0);
          if ( v24 )
          {
            CommonUI__OpenCampaignInfoDialog(
              v24,
              (CampaignInfoEntity_o *)v23,
              v25,
              v30,
              !mIsAcceptedLocationEvent,
              v31,
              0);
            return;
          }
LABEL_39:
          sub_1C93D2C(Instance, v5);
        }
      }
    }
    v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8354/*"LOCATION_DLG_FAIL_TITLE"*/, 0);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8355/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, 0);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8347/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0);
    v34 = System_String__Concat_64425724(v37, v38, 0);
    v35 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    v36 = &Method_ScrPlayerStatus___c__DisplayClass159_0__SetLocationCheck_b__2__;
  }
  else
  {
    v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8352/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/, 0);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8348/*"LOCATION_DLG_DEVICE_OPTION_MESSAGE"*/, 0);
    v35 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    v36 = &Method_ScrPlayerStatus___c__DisplayClass159_0__SetLocationCheck_b__0__;
  }
  v39 = v35;
  System_Action___ctor(v35, (Il2CppObject *)v3, *v36, 0);
  if ( !v32 )
    goto LABEL_39;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v32, v33, v34, v39, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


void ScrPlayerStatus__SetLocationEventBtnShow(ScrPlayerStatus_o *this, bool onOff, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mLocationBtnRoot; // x0

  mLocationBtnRoot = this->fields.mLocationBtnRoot;
  if ( !mLocationBtnRoot )
    sub_1C93D2C(0, onOff);
  UnityEngine_GameObject__SetActive(mLocationBtnRoot, onOff, 0);
}


void ScrPlayerStatus__SetOverwriteMasterInfo(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  WarAddMaster_o *v7; // x21
  WarAddEntity_o *PrioredEntity; // x0
  int32_t v9; // w22
  System_String_o **p_overwriteStr; // x8
  System_String_o *v11; // x23
  int32_t PrioredID; // w21
  ScrPlayerStatus_OverwriteMasterInfo_o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2D754 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus_OverwriteMasterInfo_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D754 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2ABEB )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2ABEB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v6);
  v7 = (WarAddMaster_o *)Master_object;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 20, WarId_k__BackingField, 0);
  if ( PrioredEntity )
  {
    v9 = PrioredEntity->fields.overwriteId - 1;
    p_overwriteStr = &PrioredEntity->fields.overwriteStr;
  }
  else
  {
    p_overwriteStr = (System_String_o **)&StringLiteral_1/*""*/;
    v9 = -1;
  }
  v11 = *p_overwriteStr;
  PrioredID = WarAddMaster__GetPrioredID(v7, 21, WarId_k__BackingField, 0, 0);
  v13 = (ScrPlayerStatus_OverwriteMasterInfo_o *)sub_1C93D20(ScrPlayerStatus_OverwriteMasterInfo_TypeInfo);
  ScrPlayerStatus_OverwriteMasterInfo___ctor(v13, WarId_k__BackingField, PrioredID, v9, v11, 0);
  this->fields.overwriteMasterInfo = v13;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteMasterInfo,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void ScrPlayerStatus__SetRecoverAct(ScrPlayerStatus_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mRecoverAct = act;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mRecoverAct,
    (int32_t)act,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScrPlayerStatus__SetRpRecoverBtnEnable(ScrPlayerStatus_o *this, bool is_enable, const MethodInfo *method)
{
  UIWidget_o *mRpRecoverBtnSp; // x0
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mRpRecoverBtnSp = (UIWidget_o *)this->fields.mRpRecoverBtnSp;
  v5.fields.r = 0.5;
  if ( is_enable )
    v5.fields.r = 1.0;
  this->fields.mIsEnableRpRecoverBtn = is_enable;
  if ( !mRpRecoverBtnSp )
    sub_1C93D2C(0, is_enable);
  v5.fields.a = 1.0;
  v5.fields.g = v5.fields.r;
  v5.fields.b = v5.fields.r;
  UIWidget__set_color(mRpRecoverBtnSp, v5, 0);
}


void ScrPlayerStatus__SetupDispRaidPoint(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *rpRoot; // x8
  const MethodInfo *v6; // x2

  if ( (byte_4D2D74D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D74D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)EventMaster__IsBPEnable((EventMaster_o *)Instance, 0);
  rpRoot = (UnityEngine_Component_o *)this->fields.rpRoot;
  this->fields.isBPEvent = (unsigned __int8)Instance & 1;
  if ( !rpRoot )
    goto LABEL_11;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(rpRoot, 0);
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isBPEvent, 0);
  if ( this->fields.isBPEvent )
  {
    Instance = (DataManager_o *)this->fields.rpRoot;
    if ( Instance )
    {
      ScrPlayerBP__SetupDispRaidPoint((ScrPlayerBP_o *)Instance, this->fields.userGameEntity, v6);
      return;
    }
LABEL_11:
    sub_1C93D2C(Instance, v4);
  }
}


void ScrPlayerStatus__SetupGradeIcon(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x19
  int32_t Kind_41140740; // w21
  System_String_o *MainMstIconBgImage; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  UISprite_o *masterIconBG; // x20
  __int64 v9; // x8
  UIAtlas_o *v10; // x21

  if ( (byte_4D2D74C & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Grade_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D74C = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_41140740 = Grade__GetKind_41140740(userGameEntity, 0);
  MainMstIconBgImage = Grade__GetMainMstIconBgImage(Kind_41140740, 0);
  if ( !this->fields.masterIconGrade )
    goto LABEL_16;
  v7 = MainMstIconBgImage;
  UserGradeComponent__Set(this->fields.masterIconGrade, Kind_41140740, 0);
  masterIconBG = this->fields.masterIconBG;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  MainMstIconBgImage = (System_String_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MainMstIconBgImage = (System_String_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = **(_QWORD **)&MainMstIconBgImage[7].fields;
  if ( !v9 )
LABEL_16:
    sub_1C93D2C(MainMstIconBgImage, v6);
  v10 = *(UIAtlas_o **)(v9 + 304);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeBase(masterIconBG, v7, v10, 0);
}


void ScrPlayerStatus__ShowDisabledRuntimePermissionDialog(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_c *v3; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *Instance; // x20
  TermsOfUseDlg_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D2D744 & 1) == 0 )
  {
    sub_1C93AD4(&TermsOfUseDlg_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__ShowDisabledRuntimePermissionDialog_b__156_0__);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D744 = 1;
  }
  v3 = ScrPlayerStatus_TypeInfo;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    v3 = ScrPlayerStatus_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v3->static_fields->LOCATION_TOS_AGREED_KEY, -1, 0) == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (TermsOfUseDlg_CallbackFunc_o *)sub_1C93D20(TermsOfUseDlg_CallbackFunc_TypeInfo);
    TermsOfUseDlg_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ScrPlayerStatus__ShowDisabledRuntimePermissionDialog_b__156_0__,
      0);
    if ( !Instance )
      sub_1C93D2C(v7, v8);
    CommonUI__OpenLocationTermsOfUseDlg((CommonUI_o *)Instance, v6, 1, 0);
  }
  else
  {
    ScrPlayerStatus__SetLocationCheck(this, v4);
  }
}


void ScrPlayerStatus__ShowEnabledRuntimePermissionDialog(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  bool v19; // w21
  bool ShouldShowRequestPermissionRationale; // w0
  const MethodInfo *v21; // x1
  Il2CppObject *Instance; // x19
  TermsOfUseDlg_CallbackFunc_o *v23; // x21

  if ( (byte_4D2D743 & 1) == 0 )
  {
    sub_1C93AD4(&TermsOfUseDlg_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass155_0__ShowEnabledRuntimePermissionDialog_b__0__);
    sub_1C93AD4(&ScrPlayerStatus___c__DisplayClass155_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_16885/*"android.permission.ACCESS_FINE_LOCATION"*/);
    byte_4D2D743 = 1;
  }
  v3 = sub_1C93D20(ScrPlayerStatus___c__DisplayClass155_0_TypeInfo);
  ScrPlayerStatus___c__DisplayClass155_0___ctor((ScrPlayerStatus___c__DisplayClass155_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = StringLiteral_16885/*"android.permission.ACCESS_FINE_LOCATION"*/;
  *(_QWORD *)(v3 + 16) = StringLiteral_16885/*"android.permission.ACCESS_FINE_LOCATION"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), v12, v13, v14, v15, v16, v17, v18);
  v19 = AndroidPermissionManager__CheckPermission(*(System_String_o **)(v3 + 16), 0);
  ShouldShowRequestPermissionRationale = AndroidPermissionManager__ShouldShowRequestPermissionRationale(
                                           *(System_String_o **)(v3 + 16),
                                           0);
  if ( !v19 && !ShouldShowRequestPermissionRationale )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = (TermsOfUseDlg_CallbackFunc_o *)sub_1C93D20(TermsOfUseDlg_CallbackFunc_TypeInfo);
    TermsOfUseDlg_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)v3,
      Method_ScrPlayerStatus___c__DisplayClass155_0__ShowEnabledRuntimePermissionDialog_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__OpenLocationTermsOfUseDlg((CommonUI_o *)Instance, v23, 0, 0);
      return;
    }
LABEL_9:
    sub_1C93D2C(v4, v5);
  }
  ScrPlayerStatus__SetLocationCheck(this, v21);
}


void ScrPlayerStatus__SortLimitedMstMissionViewList(
        System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **list,
        const MethodInfo *method)
{
  ScrPlayerStatus___c__DisplayClass187_0_o *v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v6; // x21
  ScrPlayerStatus___c_c *v7; // x0
  System_Func_object__int__o *_9__187_0; // x22
  Il2CppObject *v9; // x23
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x21
  System_Func_object__int__o *v18; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x21
  System_Func_object__long__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D2D75D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_MasterMissionComponent_MasterMissionInfoItem__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__long___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_MasterMissionComponent_MasterMissionInfoItem___);
    sub_1C93AD4(&System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo);
    sub_1C93AD4(&System_Func_MasterMissionComponent_MasterMissionInfoItem__long__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__SortLimitedMstMissionViewList_b__187_0__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass187_0__SortLimitedMstMissionViewList_b__1__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass187_0__SortLimitedMstMissionViewList_b__2__);
    sub_1C93AD4(&ScrPlayerStatus___c__DisplayClass187_0_TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus___c_TypeInfo);
    byte_4D2D75D = 1;
  }
  v3 = (ScrPlayerStatus___c__DisplayClass187_0_o *)sub_1C93D20(ScrPlayerStatus___c__DisplayClass187_0_TypeInfo);
  ScrPlayerStatus___c__DisplayClass187_0___ctor(v3, 0);
  if ( !*list )
    goto LABEL_16;
  if ( (*list)->fields._size < 2 )
    return;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
LABEL_16:
    sub_1C93D2C(Time, v5);
  v3->fields.nowTime = Time;
  v6 = *list;
  v7 = ScrPlayerStatus___c_TypeInfo;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    v7 = ScrPlayerStatus___c_TypeInfo;
  }
  _9__187_0 = (System_Func_object__int__o *)v7->static_fields->__9__187_0;
  if ( !_9__187_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ScrPlayerStatus___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__187_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__187_0,
      v9,
      Method_ScrPlayerStatus___c__SortLimitedMstMissionViewList_b__187_0__,
      0);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__187_0 = (struct System_Func_MasterMissionComponent_MasterMissionInfoItem__int__o *)_9__187_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__187_0,
      (int32_t)_9__187_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v6,
          (System_Func_TSource__TKey__o *)_9__187_0,
          (const MethodInfo_31D3DE4 *)Method_System_Linq_Enumerable_OrderByDescending_MasterMissionComponent_MasterMissionInfoItem__int___);
  v18 = (System_Func_object__int__o *)sub_1C93D20(System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo);
  System_Func_object__int____ctor(
    v18,
    (Il2CppObject *)v3,
    Method_ScrPlayerStatus___c__DisplayClass187_0__SortLimitedMstMissionViewList_b__1__,
    0);
  v19 = System_Linq_Enumerable__ThenBy_object__int_(
          v17,
          (System_Func_TSource__TKey__o *)v18,
          (const MethodInfo_31E2E7C *)Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__int___);
  v20 = (System_Func_object__long__o *)sub_1C93D20(System_Func_MasterMissionComponent_MasterMissionInfoItem__long__TypeInfo);
  System_Func_object__long____ctor(
    v20,
    (Il2CppObject *)v3,
    Method_ScrPlayerStatus___c__DisplayClass187_0__SortLimitedMstMissionViewList_b__2__,
    0);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v19,
                                                               (System_Func_TSource__TKey__o *)v20,
                                                               (const MethodInfo_31E2F48 *)Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__long___);
  v22 = (System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v21,
                                                                                             (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_MasterMissionComponent_MasterMissionInfoItem___);
  *list = v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)list, (int32_t)v22, v23, v24, v25, v26, v27, v28);
}


void ScrPlayerStatus__Start(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTargetFsm; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2D727 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D727 = 1;
  }
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0, mTargetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.mTargetFsm,
      (int32_t)Component_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
}


void ScrPlayerStatus__Update(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserGameEntity_o *userGameEntity; // x0
  ScrPlayerBP_o *rpRoot; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t CommandSpell; // w20
  TerminalPramsManager_c *v13; // x0
  struct ScrPlayerStatus_OverwriteMasterInfo_o *overwriteMasterInfo; // x8
  int32_t targetWarId_k__BackingField; // w21
  struct ScrPlayerStatus_OverwriteMasterInfo_o *v16; // x8
  int spellCount_k__BackingField; // w9
  char v18; // w21
  int32_t v19; // w1
  struct System_String_o *spellIconId_k__BackingField; // x1
  const MethodInfo *v21; // x2
  struct ScrPlayerStatus_OverwriteMasterInfo_o *v22; // x8
  struct ScrPlayerStatus_OverwriteMasterInfo_o *v23; // x8
  const MethodInfo *v24; // x1
  int64_t Time; // x1
  const MethodInfo *v26; // x2

  if ( (byte_4D2D729 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D729 = 1;
  }
  if ( this->fields.mtIsUpdate )
    ScrPlayerStatus__mfUpdatePrams(this, method);
  if ( this->fields.userGameEntity )
  {
    ScrPlayerStatus__UpdateAp(this, method);
    if ( this->fields.isBPEvent )
    {
      userGameEntity = this->fields.userGameEntity;
      if ( !userGameEntity )
        goto LABEL_73;
      userGameEntity = (UserGameEntity_o *)UserGameEntity__getRp(userGameEntity, 0);
      if ( this->fields.oldRp != (_DWORD)userGameEntity )
      {
        rpRoot = this->fields.rpRoot;
        this->fields.oldRp = (int)userGameEntity;
        if ( !rpRoot )
          goto LABEL_73;
        ScrPlayerBP__UpdateRpStatus(rpRoot, v3);
      }
      userGameEntity = (UserGameEntity_o *)this->fields.rpRoot;
      if ( !userGameEntity )
LABEL_73:
        sub_1C93D2C(userGameEntity, v3);
      ScrPlayerBP__UpdateRpTimeStr((ScrPlayerBP_o *)userGameEntity, v3);
    }
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_73;
    CommandSpell = UserGameEntity__getCommandSpell(userGameEntity, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D3F7 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D3F7 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    if ( v13->static_fields->_DispState_k__BackingField == 2 )
    {
      overwriteMasterInfo = this->fields.overwriteMasterInfo;
      if ( !overwriteMasterInfo )
        goto LABEL_29;
      targetWarId_k__BackingField = overwriteMasterInfo->fields._targetWarId_k__BackingField;
      if ( !v13->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v13);
      if ( !byte_4D2ABEB )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2ABEB = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( targetWarId_k__BackingField != *(_DWORD *)(*(_QWORD *)&userGameEntity->fields.stone + 4LL) )
LABEL_29:
        ScrPlayerStatus__SetOverwriteMasterInfo(this, v3);
      v16 = this->fields.overwriteMasterInfo;
      if ( !v16 )
        goto LABEL_73;
      spellCount_k__BackingField = v16->fields._spellCount_k__BackingField;
      if ( spellCount_k__BackingField >= 0 )
        CommandSpell = v16->fields._spellCount_k__BackingField;
      if ( spellCount_k__BackingField < 0 || this->fields.isRevocationSpell )
      {
        userGameEntity = (UserGameEntity_o *)System_String__op_Inequality(
                                               this->fields.overwriteSpellIconId,
                                               v16->fields._spellIconId_k__BackingField,
                                               0);
        v16 = this->fields.overwriteMasterInfo;
        if ( !v16 )
          goto LABEL_73;
        v18 = (char)userGameEntity;
      }
      else
      {
        v18 = 1;
      }
      spellIconId_k__BackingField = v16->fields._spellIconId_k__BackingField;
      this->fields.overwriteSpellIconId = spellIconId_k__BackingField;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.overwriteSpellIconId,
        (int32_t)spellIconId_k__BackingField,
        (int32_t)v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2D77D )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D77D = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*(_BYTE *)(*(_QWORD *)&userGameEntity->fields.stone + 160LL) )
      {
        v22 = this->fields.overwriteMasterInfo;
        if ( !this->fields.isOverwriteFaceTexture )
        {
          if ( !v22 )
            goto LABEL_73;
LABEL_71:
          ScrPlayerStatus__ResetMasterFaceTexture(this, v22->fields._masterIconId_k__BackingField, v21);
          this->fields.isOverwriteFaceTexture = 1;
          if ( (v18 & 1) != 0 )
            goto LABEL_64;
LABEL_63:
          if ( this->fields.CommandSpellRest == CommandSpell )
          {
LABEL_67:
            ScrPlayerStatus__mfSetStoneAndFragment(this, v3);
            ScrPlayerStatus__UpdateMstMissionLb(this, v24);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__getTime(0);
            ScrPlayerStatus__checkLocationEventBtnShows(this, Time, v26);
            return;
          }
          goto LABEL_64;
        }
        if ( !v22 )
          goto LABEL_73;
        if ( this->fields.overwriteMasterIconId != v22->fields._masterIconId_k__BackingField )
          goto LABEL_71;
      }
    }
    else
    {
      if ( !v13->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v13);
      if ( !byte_4D2D77D )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D77D = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*(_BYTE *)(*(_QWORD *)&userGameEntity->fields.stone + 160LL) && this->fields.isOverwriteFaceTexture )
      {
        ScrPlayerStatus__ResetMasterFaceTexture(this, 0, v6);
        this->fields.isOverwriteFaceTexture = 0;
      }
      if ( this->fields.isRevocationSpell )
      {
        v19 = StringLiteral_1/*""*/;
        this->fields.overwriteSpellIconId = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.overwriteSpellIconId,
          v19,
          (int32_t)v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        goto LABEL_64;
      }
      v18 = 0;
    }
    if ( (v18 & 1) == 0 )
      goto LABEL_63;
LABEL_64:
    v23 = this->fields.overwriteMasterInfo;
    if ( v23 )
    {
      userGameEntity = (UserGameEntity_o *)this->fields.commandSpellComp;
      if ( userGameEntity )
      {
        this->fields.isRevocationSpell = CommandSpellIconComponent__SetRevocationData(
                                           (CommandSpellIconComponent_o *)userGameEntity,
                                           this->fields.userGameEntity,
                                           v23->fields._spellIconId_k__BackingField,
                                           v23->fields._spellCount_k__BackingField,
                                           0);
        this->fields.CommandSpellRest = CommandSpell;
        goto LABEL_67;
      }
    }
    goto LABEL_73;
  }
}


void ScrPlayerStatus__UpdateAp(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  struct UserGameEntity_o *v4; // x8
  int32_t actMax; // w8
  float v6; // s0
  float mfApParOld; // s1
  UnityEngine_Object_o *mcApTimeP; // x20
  TransitionCalculator_float__o *apRecoverStrAlphaCalculator; // x0
  UILabel_o *v10; // x20
  const MethodInfo *v11; // x2
  float ApRecoverStrUpdateTimer; // s8
  float v13; // s8
  TitleInfoControl_c *v14; // x0
  struct AlphaTransitionCalculator_o *v15; // x8

  if ( (byte_4D2D751 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TitleInfoControl_TypeInfo);
    sub_1C93AD4(&Method_TransitionCalculator_float__Update__);
    sub_1C93AD4(&Method_TransitionCalculator_float__get_Current__);
    byte_4D2D751 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_30;
  userGameEntity = (UserGameEntity_o *)UserGameEntity__getAct(userGameEntity, 0);
  v4 = this->fields.userGameEntity;
  if ( !v4 )
    goto LABEL_30;
  actMax = v4->fields.actMax;
  this->fields.miApNow = (int)userGameEntity;
  this->fields.miApMax = actMax;
  if ( (int)userGameEntity < 1 )
    v6 = 0.0;
  else
    v6 = (float)(int)userGameEntity / (float)actMax;
  mfApParOld = this->fields.mfApParOld;
  this->fields.mfApPar = v6;
  if ( v6 != mfApParOld )
  {
    this->fields.mfApParOld = v6;
    ScrPlayerStatus__UpdateApStatus(this, method);
  }
  mcApTimeP = (UnityEngine_Object_o *)this->fields.mcApTimeP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcApTimeP, 0, 0) )
  {
    apRecoverStrAlphaCalculator = (TransitionCalculator_float__o *)this->fields.apRecoverStrAlphaCalculator;
    if ( apRecoverStrAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        apRecoverStrAlphaCalculator,
        (const MethodInfo_3B67808 *)Method_TransitionCalculator_float__Update__);
      v10 = this->fields.mcApTimeP;
      userGameEntity = (UserGameEntity_o *)ScrPlayerStatus__mfGetApRecoverTimeStr(this, this->fields.isDispMax, v11);
      if ( v10 )
      {
        UILabel__set_text(v10, (System_String_o *)userGameEntity, 0);
        userGameEntity = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( userGameEntity )
        {
          if ( !CommonUI__maskFadeIsDisp((CommonUI_o *)userGameEntity, 0) )
          {
            ApRecoverStrUpdateTimer = this->fields.ApRecoverStrUpdateTimer;
            v13 = ApRecoverStrUpdateTimer + UnityEngine_Time__get_deltaTime(0);
            this->fields.ApRecoverStrUpdateTimer = v13;
            v14 = TitleInfoControl_TypeInfo;
            if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
              v14 = TitleInfoControl_TypeInfo;
            }
            if ( v13 >= v14->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
            {
              userGameEntity = (UserGameEntity_o *)this->fields.apRecoverStrAlphaCalculator;
              if ( !userGameEntity )
                goto LABEL_30;
              AlphaTransitionCalculator__StartFadeOut((AlphaTransitionCalculator_o *)userGameEntity, 0);
              this->fields.ApRecoverStrUpdateTimer = 0.0;
            }
          }
          userGameEntity = (UserGameEntity_o *)this->fields.apRecoverStrAlphaCalculator;
          if ( userGameEntity )
          {
            userGameEntity = (UserGameEntity_o *)AlphaTransitionCalculator__IsFadeOutFinished(
                                                   (AlphaTransitionCalculator_o *)userGameEntity,
                                                   0);
            if ( ((unsigned __int8)userGameEntity & 1) != 0 )
            {
              userGameEntity = (UserGameEntity_o *)this->fields.apRecoverStrAlphaCalculator;
              if ( !userGameEntity )
                goto LABEL_30;
              AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)userGameEntity, 0);
              this->fields.isDispMax ^= 1u;
            }
            v15 = this->fields.apRecoverStrAlphaCalculator;
            if ( v15 )
            {
              userGameEntity = (UserGameEntity_o *)this->fields.mcApTimeP;
              if ( userGameEntity )
              {
                ((void (__fastcall *)(UserGameEntity_o *, _QWORD, float))userGameEntity->klass[1]._1.byval_arg.data)(
                  userGameEntity,
                  *(_QWORD *)&userGameEntity->klass[1]._1.byval_arg.bits,
                  v15->fields._Current_k__BackingField);
                return;
              }
            }
          }
        }
      }
LABEL_30:
      sub_1C93D2C(userGameEntity, method);
    }
  }
}


void ScrPlayerStatus__UpdateApStatus(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mcApSldP; // x20
  __int64 v4; // x1
  UIProgressBar_o *v5; // x0
  UnityEngine_Object_o *mcApSldP2; // x20
  float mfApPar; // s0
  float v8; // s1
  bool v9; // cc
  float v10; // s0
  float value; // s0
  UILabel_o *mcApStrP; // x20
  ScrPlayerStatus_c *v13; // x0
  System_String_o *AP_OVER_TXT_COLOR_STR; // x21
  System_String_o *v15; // x22
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  UnityEngine_Transform_c *klass; // x8
  __int64 v20; // x8

  if ( (byte_4D2D752 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_15924/*"[-]/"*/);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    byte_4D2D752 = 1;
  }
  mcApSldP = (UnityEngine_Object_o *)this->fields.mcApSldP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcApSldP, 0, 0) )
  {
    v5 = (UIProgressBar_o *)this->fields.mcApSldP;
    if ( !v5 )
      goto LABEL_32;
    UIProgressBar__set_value(v5, fminf(this->fields.mfApPar, 1.0), 0);
  }
  mcApSldP2 = (UnityEngine_Object_o *)this->fields.mcApSldP2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcApSldP2, 0, 0) )
  {
    v5 = (UIProgressBar_o *)this->fields.mcApSldP2;
    if ( !v5 )
      goto LABEL_32;
    mfApPar = this->fields.mfApPar;
    v8 = mfApPar + -1.0;
    v9 = mfApPar <= 1.0;
    v10 = 0.0;
    if ( !v9 )
      v10 = v8;
    UIProgressBar__set_value(v5, v10, 0);
    v5 = (UIProgressBar_o *)this->fields.mcApSldP2;
    if ( !v5 )
LABEL_32:
      sub_1C93D2C(v5, v4);
    value = UIProgressBar__get_value(v5, 0);
    mcApStrP = this->fields.mcApStrP;
    if ( value <= 0.0 )
    {
      v17 = System_Int32__ToString((int)this + 544, 0);
      v18 = System_Int32__ToString((int)this + 548, 0);
      v5 = (UIProgressBar_o *)System_String__Concat_64463988(v17, (System_String_o *)StringLiteral_1042/*"/"*/, v18, 0);
      if ( !mcApStrP )
        goto LABEL_32;
    }
    else
    {
      v13 = ScrPlayerStatus_TypeInfo;
      if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
        v13 = ScrPlayerStatus_TypeInfo;
      }
      AP_OVER_TXT_COLOR_STR = v13->static_fields->AP_OVER_TXT_COLOR_STR;
      v15 = System_Int32__ToString((int)this + 544, 0);
      v16 = System_Int32__ToString((int)this + 548, 0);
      v5 = (UIProgressBar_o *)System_String__Concat_64465992(
                                AP_OVER_TXT_COLOR_STR,
                                v15,
                                (System_String_o *)StringLiteral_15924/*"[-]/"*/,
                                v16,
                                0);
      if ( !mcApStrP )
        goto LABEL_32;
    }
    UILabel__set_text(mcApStrP, (System_String_o *)v5, 0);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v5 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v5[1].fields.mTrans->klass;
  if ( !klass )
    goto LABEL_32;
  v20 = *(_QWORD *)&klass->_2.element_size;
  if ( !v20 )
    goto LABEL_32;
  v5 = *(UIProgressBar_o **)(v20 + 320);
  if ( !v5 )
    goto LABEL_32;
  QuestBoardListViewManager__RequestConsumeColorReset((QuestBoardListViewManager_o *)v5, 0);
}


void ScrPlayerStatus__UpdateCompleteMissionIconVisibility(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  void *mInstance; // x0
  __int64 v5; // x8
  __int64 v6; // x8
  char v7; // w23
  struct CompleteMissionViewController_o *completeMissionViewController; // x8
  struct CompleteMissionViewController_o *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  ScrPlayerStatus___c_c *v11; // x0
  System_Func_object__bool__o *_9__219_0; // x21
  Il2CppObject *v13; // x22
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *v21; // x0
  __int64 v22; // x8

  if ( (byte_4D2D770 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
    sub_1C93AD4(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__UpdateCompleteMissionIconVisibility_b__219_0__);
    sub_1C93AD4(&ScrPlayerStatus___c_TypeInfo);
    byte_4D2D770 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_58;
  mInstance = (void *)TerminalSceneComponent__IsMapActive((TerminalSceneComponent_o *)mInstance, 0);
  if ( ((unsigned __int8)mInstance & 1) != 0 )
    goto LABEL_31;
  mInstance = this->fields.completeMissionViewController;
  if ( !mInstance )
    goto LABEL_58;
  mInstance = (void *)CompleteMissionViewController__get_HasMissions((CompleteMissionViewController_o *)mInstance, 0);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
    goto LABEL_31;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  mInstance = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mInstance = TerminalSceneComponent_TypeInfo;
  }
  v5 = **((_QWORD **)mInstance + 23);
  if ( !v5 )
    goto LABEL_58;
  mInstance = *(void **)(v5 + 256);
  if ( !mInstance )
    goto LABEL_58;
  mInstance = (void *)ScrTerminalListTop__IsBlankEarthActive((ScrTerminalListTop_o *)mInstance, 0);
  if ( ((unsigned __int8)mInstance & 1) != 0 )
    goto LABEL_31;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  mInstance = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mInstance = TerminalSceneComponent_TypeInfo;
  }
  v6 = **((_QWORD **)mInstance + 23);
  if ( !v6 )
    goto LABEL_58;
  mInstance = *(void **)(v6 + 256);
  if ( !mInstance )
    goto LABEL_58;
  mInstance = (void *)ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)mInstance, 0);
  if ( ((unsigned __int8)mInstance & 1) != 0 )
  {
LABEL_31:
    v7 = 0;
  }
  else
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    mInstance = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      mInstance = TerminalSceneComponent_TypeInfo;
    }
    v22 = **((_QWORD **)mInstance + 23);
    if ( !v22 )
      goto LABEL_58;
    mInstance = *(void **)(v22 + 256);
    if ( !mInstance )
      goto LABEL_58;
    mInstance = (void *)ScrTerminalListTop__IsGrandQuestActive((ScrTerminalListTop_o *)mInstance, 0);
    v7 = (unsigned __int8)mInstance ^ 1;
  }
  completeMissionViewController = this->fields.completeMissionViewController;
  if ( !completeMissionViewController )
    goto LABEL_58;
  if ( completeMissionViewController->fields.currentEventId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    mInstance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
    v9 = this->fields.completeMissionViewController;
    if ( v9 )
    {
      if ( mInstance )
      {
        mInstance = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)mInstance,
                      v9->fields.currentEventId,
                      (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( mInstance )
        {
          v10 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)mInstance + 15);
          v11 = ScrPlayerStatus___c_TypeInfo;
          if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
            v11 = ScrPlayerStatus___c_TypeInfo;
          }
          _9__219_0 = (System_Func_object__bool__o *)v11->static_fields->__9__219_0;
          if ( !_9__219_0 )
          {
            if ( !v11->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v11);
              v11 = ScrPlayerStatus___c_TypeInfo;
            }
            v13 = (Il2CppObject *)v11->static_fields->__9;
            _9__219_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventEntity_ScriptData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__219_0,
              v13,
              Method_ScrPlayerStatus___c__UpdateCompleteMissionIconVisibility_b__219_0__,
              0);
            static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
            static_fields->__9__219_0 = (struct System_Func_EventEntity_ScriptData__bool__o *)_9__219_0;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__219_0,
              (int32_t)_9__219_0,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
          }
          v21 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
                  v10,
                  (System_Func_TSource__bool__o *)_9__219_0,
                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
          if ( v21 )
            v7 &= LOBYTE(v21[5].klass) == 0;
          goto LABEL_47;
        }
      }
    }
LABEL_58:
    sub_1C93D2C(mInstance, method);
  }
LABEL_47:
  mInstance = this->fields.completeMissionViewController;
  if ( !mInstance )
    goto LABEL_58;
  CompleteMissionViewController__SetVisible((CompleteMissionViewController_o *)mInstance, v7 & 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__UpdateDailyMissionInfoItem(ScrPlayerStatus_o *this, int32_t index, const MethodInfo *method)
{
  int32_t currentMissionIndex; // w20
  System_Collections_Generic_List_object__o *currentMissionList; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  MstMissionEntity_o *items; // x20
  const MethodInfo *v8; // x2
  int size; // w8
  System_Collections_Generic_List_object__o *v10; // x21
  unsigned int v11; // w25
  __int64 v12; // x29
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w22
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  currentMissionIndex = index;
  if ( (byte_4D2D762 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__set_Item__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2D762 = 1;
  }
  entity = 0;
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( currentMissionIndex < 0 )
    currentMissionIndex = this->fields.currentMissionIndex;
  if ( !currentMissionList )
    goto LABEL_34;
  currentMissionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      currentMissionList,
                                                                      currentMissionIndex,
                                                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
  if ( !currentMissionList )
    goto LABEL_34;
  v6 = currentMissionList;
  currentMissionList = (System_Collections_Generic_List_object__o *)currentMissionList->fields._items;
  if ( !currentMissionList )
    goto LABEL_34;
  if ( MstMissionEntity__getMissionType((MstMissionEntity_o *)currentMissionList, 0) == 3 )
  {
    items = (MstMissionEntity_o *)v6->fields._items;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    currentMissionList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !items )
      goto LABEL_34;
    if ( !currentMissionList )
      goto LABEL_34;
    currentMissionList = (System_Collections_Generic_List_object__o *)EventMissionMaster__GetDailyMasterMissionList(
                                                                        (EventMissionMaster_o *)currentMissionList,
                                                                        items->fields.id,
                                                                        0);
    if ( !currentMissionList )
      goto LABEL_34;
    size = currentMissionList->fields._size;
    v10 = currentMissionList;
    if ( size >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= size )
          sub_1C93D34(currentMissionList);
        v12 = *((_QWORD *)&v10->fields._syncRoot + (int)v11);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2A55B )
        {
          sub_1C93AD4(&NetworkManager_TypeInfo);
          byte_4D2A55B = 1;
        }
        currentMissionList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          currentMissionList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
        }
        if ( !v12 || !Master_object )
          break;
        currentMissionList = (System_Collections_Generic_List_object__o *)UserEventMissionMaster__TryGetEntity(
                                                                            (UserEventMissionMaster_o *)Master_object,
                                                                            &entity,
                                                                            *(_QWORD *)(*(_QWORD *)&currentMissionList[4].fields._size
                                                                                      + 64LL),
                                                                            *(_DWORD *)(v12 + 16),
                                                                            0);
        if ( ((unsigned __int8)currentMissionList & 1) != 0 )
        {
          currentMissionList = (System_Collections_Generic_List_object__o *)entity;
          if ( !entity )
            break;
          currentMissionList = (System_Collections_Generic_List_object__o *)UserEventMissionEntity__IsTodayMissionData(
                                                                              entity,
                                                                              0);
          if ( ((unsigned __int8)currentMissionList & 1) != 0 )
            return;
        }
        size = v10->fields._size;
        if ( (int)++v11 >= size )
          goto LABEL_31;
      }
LABEL_34:
      sub_1C93D2C(currentMissionList, *(_QWORD *)&index);
    }
LABEL_31:
    v14 = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
    v15 = this->fields.currentMissionIndex;
    currentMissionList = (System_Collections_Generic_List_object__o *)ScrPlayerStatus__GetDailyMissionInfoItem(
                                                                        this,
                                                                        items,
                                                                        v8);
    if ( !v14 )
      goto LABEL_34;
    System_Collections_Generic_List_object___set_Item(
      v14,
      v15,
      (Il2CppObject *)currentMissionList,
      (const MethodInfo_3879720 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__set_Item__);
  }
}


void ScrPlayerStatus__UpdateGiftBoxNum(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mcGiftButtonP; // x20
  __int64 v4; // x1
  GiftButtonCtrl_o *v5; // x0

  if ( (byte_4D2D732 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D732 = 1;
  }
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcGiftButtonP, 0, 0) )
  {
    v5 = this->fields.mcGiftButtonP;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    GiftButtonCtrl__InvalidateGiftInfo(v5, 0);
  }
}


void ScrPlayerStatus__UpdateMstMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  TransitionCalculator_float__o *missionAlertAlphaCalculator; // x0
  __int64 Instance; // x0
  float mstMissionIconUpdateTimer; // s8
  float deltaTime; // s0
  float v9; // s8
  const MethodInfo *v10; // x2
  int32_t NextMstMissionIndex; // w0
  const MethodInfo *v12; // x2
  Il2CppObject *Item; // x0
  const MethodInfo *v14; // x2
  struct AlphaTransitionCalculator_o *v15; // x8
  TerminalPramsManager_c *v16; // x0
  UnityEngine_Behaviour_o *masterMissionAnimationLabelsTween; // x20
  TerminalPramsManager_c *v18; // x0
  int32_t DispState_k__BackingField; // w8
  UnityEngine_Behaviour_o *v20; // x21
  __int64 v21; // x8
  __int64 v22; // x8
  UnityEngine_Transform_o *v23; // x19

  if ( (byte_4D2D760 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_TransitionCalculator_float__Update__);
    sub_1C93AD4(&Method_TransitionCalculator_float__get_Current__);
    byte_4D2D760 = 1;
  }
  if ( ScrPlayerStatus__GetEnabledMstMissionCount(this, method) >= 2 )
  {
    missionAlertAlphaCalculator = (TransitionCalculator_float__o *)this->fields.missionAlertAlphaCalculator;
    if ( !missionAlertAlphaCalculator )
      return;
    TransitionCalculator_float___Update(
      missionAlertAlphaCalculator,
      (const MethodInfo_3B67808 *)Method_TransitionCalculator_float__Update__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0) )
      {
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_75;
        if ( !CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0) )
        {
          mstMissionIconUpdateTimer = this->fields.mstMissionIconUpdateTimer;
          deltaTime = UnityEngine_Time__get_deltaTime(0);
          Instance = (__int64)this->fields.currentMissionList;
          v9 = mstMissionIconUpdateTimer + deltaTime;
          this->fields.mstMissionIconUpdateTimer = v9;
          if ( !Instance )
            goto LABEL_75;
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                this->fields.currentMissionIndex,
                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
          if ( !Instance )
            goto LABEL_75;
          Instance = *(_QWORD *)(Instance + 16);
          if ( !Instance )
            goto LABEL_75;
          if ( v9 >= MstMissionEntity__GetMissionIconDisplaySec((MstMissionEntity_o *)Instance, 0) )
          {
            Instance = (__int64)this->fields.missionAlertAlphaCalculator;
            this->fields.mstMissionIconUpdateTimer = 0.0;
            if ( !Instance )
              goto LABEL_75;
            AlphaTransitionCalculator__StartFadeOut((AlphaTransitionCalculator_o *)Instance, 0);
          }
        }
      }
    }
    Instance = (__int64)this->fields.missionAlertAlphaCalculator;
    if ( !Instance )
      goto LABEL_75;
    Instance = AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)Instance, 0);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)this->fields.missionAlertAlphaCalculator;
      if ( !Instance )
        goto LABEL_75;
      AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)Instance, 0);
      NextMstMissionIndex = ScrPlayerStatus__GetNextMstMissionIndex(this, this->fields.currentMissionIndex, v10);
      this->fields.currentMissionIndex = NextMstMissionIndex;
      ScrPlayerStatus__UpdateDailyMissionInfoItem(this, NextMstMissionIndex, v12);
      Instance = (__int64)this->fields.currentMissionList;
      if ( !Instance )
        goto LABEL_75;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               this->fields.currentMissionIndex,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      ScrPlayerStatus__ChangeViewMstMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v14);
    }
    v15 = this->fields.missionAlertAlphaCalculator;
    if ( !v15 )
      goto LABEL_75;
    Instance = (__int64)this->fields.masterMissionAlertPanel;
    if ( !Instance )
      goto LABEL_75;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL),
      v15->fields._Current_k__BackingField);
  }
  else
  {
    ScrPlayerStatus__InitMstMissionLb(this, v3);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D3F7 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D3F7 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( !v16->static_fields->_DispState_k__BackingField )
    return;
  masterMissionAnimationLabelsTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionAnimationLabelsTween;
  if ( !v16->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_4D2D3F7 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D3F7 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  DispState_k__BackingField = v18->static_fields->_DispState_k__BackingField;
  if ( DispState_k__BackingField == 2 )
    v20 = 0;
  else
    v20 = masterMissionAnimationLabelsTween;
  if ( DispState_k__BackingField == 2 )
    goto LABEL_52;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  Instance = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v21 = **(_QWORD **)(Instance + 184);
  if ( !v21 )
    goto LABEL_75;
  Instance = *(_QWORD *)(v21 + 256);
  if ( !Instance )
    goto LABEL_75;
  if ( ScrTerminalListTop__get_IsActiveAnyEarth((ScrTerminalListTop_o *)Instance, 0) )
  {
LABEL_52:
    Instance = 0;
    if ( !masterMissionAnimationLabelsTween )
      goto LABEL_75;
  }
  else
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0) )
    {
      Instance = 0;
    }
    else
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v22 = **(_QWORD **)(Instance + 184);
      if ( !v22 )
        goto LABEL_75;
      Instance = *(_QWORD *)(v22 + 240);
      if ( !Instance )
        goto LABEL_75;
      Instance = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)Instance, 0);
    }
    masterMissionAnimationLabelsTween = v20;
    if ( !v20 )
      goto LABEL_75;
  }
  UnityEngine_Behaviour__set_enabled(masterMissionAnimationLabelsTween, Instance & 1, 0);
  Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
  if ( !Instance )
    goto LABEL_75;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0) )
  {
    Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
    if ( Instance )
    {
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      v23 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4D2A139 )
      {
        Instance = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      if ( v23 )
      {
        UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        return;
      }
    }
LABEL_75:
    sub_1C93D2C(Instance, v4);
  }
}


void ScrPlayerStatus__UpdatePanel(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D2D76C & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D76C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C93D2C(v4, v5);
    ((void (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))Component_object->klass->vtable[12].methodPtr)(
      Component_object,
      1,
      Component_object->klass->vtable[12].method);
  }
}


void ScrPlayerStatus___EndLocationRequest_b__161_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___EndLocationRequest_b__161_1(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *mcGiftButtonP; // x21

  if ( (byte_4D2D779 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D779 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseMultiGiftGetDialg(Instance, 0);
  this->fields.isLocationBusy = 0;
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcGiftButtonP, 0, 0) )
  {
    Instance = (CommonUI_o *)this->fields.mcGiftButtonP;
    if ( !Instance )
      goto LABEL_12;
    GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0);
    if ( isDecide )
    {
      Instance = (CommonUI_o *)this->fields.mcGiftButtonP;
      if ( Instance )
      {
        GiftButtonCtrl__OnButtonTouched((GiftButtonCtrl_o *)Instance, 0);
        goto LABEL_11;
      }
LABEL_12:
      sub_1C93D2C(Instance, v6);
    }
  }
LABEL_11:
  this->fields.mIsAcceptedLocationEvent = 1;
}


void ScrPlayerStatus___ExitCompleteMission_b__170_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  ErrorDialog_c *klass; // x8
  Il2CppObject *v6; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  TerminalSceneComponent_c *v11; // x0
  TerminalSceneComponent_c *v12; // x0

  if ( (byte_4D2D77B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__ExitCompleteMission_b__170_1__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D77B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  CommonUI__CloseCompleteMission(Instance, 0);
  Instance = (CommonUI_o *)this->fields.completeMissionViewController;
  if ( !Instance )
    goto LABEL_31;
  CompleteMissionViewController__Release((CompleteMissionViewController_o *)Instance, 0);
  if ( !this->fields.isTerminalEffectDisplay )
    goto LABEL_15;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass || (Instance = (CommonUI_o *)klass->_2.genericContainerHandle) == 0 )
LABEL_31:
    sub_1C93D2C(Instance, v4);
  TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)Instance, 1, 0);
  this->fields.isTerminalEffectDisplay = 0;
LABEL_15:
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)v6;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitCompleteMission_b__170_1__, 0);
  if ( !v8 )
    goto LABEL_31;
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v11->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_31;
  TerminalSceneComponent__playBgm_46040200((TerminalSceneComponent_o *)Instance, 0);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v12 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v12 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v12->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_31;
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0);
}


void ScrPlayerStatus___ExitCompleteMission_b__170_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CompleteMissionViewController_o *completeMissionViewController; // x0

  ActionExtensions__Call(this->fields.mAfterCloseCompleteMission, 0);
  completeMissionViewController = this->fields.completeMissionViewController;
  if ( !completeMissionViewController )
    sub_1C93D2C(0, v3);
  CompleteMissionViewController__SetVisible(completeMissionViewController, 1, 0);
}


void ScrPlayerStatus___ExitMasterMission_b__169_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  ErrorDialog_c *klass; // x8
  Il2CppObject *v6; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  TerminalSceneComponent_c *v11; // x0
  ErrorDialog_c *v12; // x8
  ErrorDialog_c *v13; // x8
  __int64 v14; // x8

  if ( (byte_4D2D77A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus__ExitMasterMission_b__169_1__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D77A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  CommonUI__CloseMasterMission(Instance, 0);
  if ( this->fields.isTerminalEffectDisplay )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance->fields.errorDialog->klass;
    if ( !klass )
      goto LABEL_42;
    Instance = (CommonUI_o *)klass->_2.genericContainerHandle;
    if ( !Instance )
      goto LABEL_42;
    TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)Instance, 1, 0);
    this->fields.isTerminalEffectDisplay = 0;
  }
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)v6;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterMission_b__169_1__, 0);
  if ( !v8 )
    goto LABEL_42;
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v11->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_42;
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v12 = Instance->fields.errorDialog->klass;
  if ( !v12 )
    goto LABEL_42;
  Instance = *(CommonUI_o **)&v12->_2.element_size;
  if ( !Instance )
    goto LABEL_42;
  if ( ScrTerminalListTop__IsGrandQuestActive((ScrTerminalListTop_o *)Instance, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    v13 = Instance->fields.errorDialog->klass;
    if ( v13 )
    {
      v14 = *(_QWORD *)&v13->_2.element_size;
      if ( v14 )
      {
        Instance = *(CommonUI_o **)(v14 + 824);
        if ( Instance )
        {
          GrandQuestRootComponent__SetDispServant((GrandQuestRootComponent_o *)Instance, 1, 0);
          return;
        }
      }
    }
LABEL_42:
    sub_1C93D2C(Instance, v4);
  }
}


void ScrPlayerStatus___ExitMasterMission_b__169_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterCloseMasterMission, 0);
}


void ScrPlayerStatus___ExitMasterProfile_b__151_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x20
  Il2CppObject *v11; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  TerminalSceneComponent_c *v19; // x0

  if ( (byte_4D2D777 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__ExitMasterProfile_b__151_1__);
    sub_1C93AD4(&ScrPlayerStatus___c_TypeInfo);
    byte_4D2D777 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseMasterProfile((CommonUI_o *)Instance, 0);
  ScrPlayerStatus__mfInitUserData(this, v5);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)v6;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  Instance = ScrPlayerStatus___c_TypeInfo;
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    Instance = ScrPlayerStatus___c_TypeInfo;
  }
  v10 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ScrPlayerStatus___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v10, v11, Method_ScrPlayerStatus___c__ExitMasterProfile_b__151_1__, 0);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__151_1 = v10;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__151_1, (int32_t)v10, v13, v14, v15, v16, v17, v18);
  }
  if ( !v8 )
    goto LABEL_21;
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v19 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v19 = TerminalSceneComponent_TypeInfo;
  }
  Instance = v19->static_fields->mInstance;
  if ( !Instance )
LABEL_21:
    sub_1C93D2C(Instance, v4);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0);
}


void ScrPlayerStatus___OnClickApRecoverBtn_b__143_0(ScrPlayerStatus_o *this, int32_t result, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D2D775 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D775 = 1;
  }
  if ( result == 2 )
    ActionExtensions__Call(this->fields.mRecoverAct, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0);
}


void ScrPlayerStatus___OnClickCompleteMissionBtn_b__139_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  ScrPlayerStatus__OpenCompleteMission(this, 0, 0, v2);
}


void ScrPlayerStatus___OnClickDailyMissionInfoBtn_b__140_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_37263496(this, 0, v2);
}


void ScrPlayerStatus___OnClickLimitedMissionInfoBtn_b__142_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_37263496(this, 3, v2);
}


void ScrPlayerStatus___OnClickMasterMissionBtn_b__134_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x2

  if ( (byte_4D2D774 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus_UpdateGiftBoxNum__);
    byte_4D2D774 = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ScrPlayerStatus_UpdateGiftBoxNum__, 0);
  this->fields.mAfterCloseMasterMission = v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAfterCloseMasterMission,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  ScrPlayerStatus__OpenMasterMission_37263496(this, -1, v10);
}


void ScrPlayerStatus___OnClickOpenNextExp_b__152_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.isDisableCloseNextExpBtn = 0;
}


void ScrPlayerStatus___OnClickRpRecoverBtn_b__144_0(ScrPlayerStatus_o *this, int32_t result, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D2D776 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D776 = 1;
  }
  if ( result == 2 )
    ActionExtensions__Call(this->fields.mRecoverAct, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0);
}


void ScrPlayerStatus___OnClickWeeklyMissionInfoBtn_b__141_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_37263496(this, 1, v2);
}


void ScrPlayerStatus___OpenCompleteMission_b__138_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.mtIsUpdate = 1;
}


void ScrPlayerStatus___OpenMasterMission_b__133_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.mtIsUpdate = 1;
}


void ScrPlayerStatus___ShowDisabledRuntimePermissionDialog_b__156_0(
        ScrPlayerStatus_o *this,
        bool result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  ScrPlayerStatus_c *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4D2D778 & 1) == 0 )
  {
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D778 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
  CommonUI__CloseLocationTermsOfUseDlg((CommonUI_o *)Instance, 0);
  if ( result )
  {
    v7 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
      v7 = ScrPlayerStatus_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v7->static_fields->LOCATION_TOS_AGREED_KEY, 1, 0);
    ScrPlayerStatus__SetLocationCheck(this, v8);
  }
  else
  {
    this->fields.isLocationBusy = 0;
  }
}


void ScrPlayerStatus__cbfGift_Push(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  __int64 v3; // x1
  ScrTerminalMap_o *v4; // x0
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_4D2D72D & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&StringLiteral_3022/*"BTN_GIFT"*/);
    byte_4D2D72D = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    v4 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v4 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v4->fields.subRootGimmickP->klass;
    if ( !klass || (v4 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
      sub_1C93D2C(v4, v3);
    ScrTerminalMap__DestroyEventActionEffect(v4, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0);
    ScrPlayerStatus__mfCallFsmEvent(v2, (System_String_o *)StringLiteral_3022/*"BTN_GIFT"*/, v6);
  }
}


void ScrPlayerStatus__cbfSlide_In(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2D72B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12334/*"SLIDE_IN"*/);
    byte_4D2D72B = 1;
  }
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_12334/*"SLIDE_IN"*/, v2);
}


void ScrPlayerStatus__cbfSlide_Out(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D2D72C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12335/*"SLIDE_OUT"*/);
    byte_4D2D72C = 1;
  }
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_12335/*"SLIDE_OUT"*/, v2);
}


void ScrPlayerStatus__cbfStatus_Init(
        ScrPlayerStatus_o *this,
        UnityEngine_GameObject_o *oFsmObject,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2D74B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5772/*"EV_PRAM_INIT_FIN"*/);
    byte_4D2D74B = 1;
  }
  ScrPlayerStatus__mfInitUserData(this, (const MethodInfo *)oFsmObject);
  ScrPlayerStatus__SetupGradeIcon(this, v4);
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_5772/*"EV_PRAM_INIT_FIN"*/, v5);
}


void ScrPlayerStatus__checkLocationEventBtnShows(ScrPlayerStatus_o *this, int64_t now, const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  struct System_Int64_array *mNextLocationEventTerm; // x8
  struct System_Int64_array *v6; // x8
  unsigned int max_length; // w9
  ScrPlayerBP_c *klass; // x8
  UnityEngine_Object_o *MyFsmP; // x20
  System_String_o *ActiveStateName; // x0
  UnityEngine_GameObject_o *mLocationBtnRoot; // x8

  v4 = this;
  if ( (byte_4D2D769 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&StringLiteral_13167/*"State Roring"*/);
    byte_4D2D769 = 1;
  }
  mNextLocationEventTerm = v4->fields.mNextLocationEventTerm;
  if ( !mNextLocationEventTerm )
  {
    ScrPlayerStatus__mfSetLocationEventTime(v4, now, method);
    mNextLocationEventTerm = v4->fields.mNextLocationEventTerm;
    if ( !mNextLocationEventTerm )
      goto LABEL_38;
  }
  if ( !LODWORD(mNextLocationEventTerm->max_length) )
    goto LABEL_37;
  if ( mNextLocationEventTerm->m_Items[0] >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D3F7 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D3F7 = 1;
    }
    this = (ScrPlayerStatus_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (ScrPlayerStatus_o *)TerminalPramsManager_TypeInfo;
    }
    if ( this->fields.rpRoot->klass != (ScrPlayerBP_c *)((char *)&dword_0 + 1) )
      goto LABEL_33;
    v6 = v4->fields.mNextLocationEventTerm;
    if ( !v6 )
      goto LABEL_38;
    max_length = v6->max_length;
    if ( max_length )
    {
      if ( v6->m_Items[0] >= now )
        goto LABEL_33;
      if ( max_length > 1 )
      {
        if ( v6->m_Items[1] > now && !v4->fields.mIsAcceptedLocationEvent )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D2A6EE )
          {
            sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
            byte_4D2A6EE = 1;
          }
          this = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            this = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
          }
          klass = this->fields.rpRoot->klass;
          if ( !klass )
            goto LABEL_38;
          this = *(ScrPlayerStatus_o **)&klass->_2.static_fields_size;
          if ( !this )
            goto LABEL_38;
          MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP((ScrTerminalMap_o *)this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(MyFsmP, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !MyFsmP )
              goto LABEL_38;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0);
            this = (ScrPlayerStatus_o *)System_String__op_Equality(
                                          ActiveStateName,
                                          (System_String_o *)StringLiteral_13167/*"State Roring"*/,
                                          0);
            goto LABEL_34;
          }
        }
LABEL_33:
        this = 0;
LABEL_34:
        mLocationBtnRoot = v4->fields.mLocationBtnRoot;
        if ( mLocationBtnRoot )
        {
          UnityEngine_GameObject__SetActive(mLocationBtnRoot, (unsigned __int8)this & 1, 0);
          return;
        }
LABEL_38:
        sub_1C93D2C(this, now);
      }
    }
LABEL_37:
    sub_1C93D34(this);
  }
}


void ScrPlayerStatus__locationRequest(ScrPlayerStatus_o *this, EventEntity_o *eventEnt, const MethodInfo *method)
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
  GeoLocation_LocationDelegate_o *v20; // x20

  if ( (byte_4D2D746 & 1) == 0 )
  {
    sub_1C93AD4(&GeoLocation_TypeInfo);
    sub_1C93AD4(&GeoLocation_LocationDelegate_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass160_0__locationRequest_b__0__);
    sub_1C93AD4(&ScrPlayerStatus___c__DisplayClass160_0_TypeInfo);
    byte_4D2D746 = 1;
  }
  v5 = sub_1C93D20(ScrPlayerStatus___c__DisplayClass160_0_TypeInfo);
  ScrPlayerStatus___c__DisplayClass160_0___ctor((ScrPlayerStatus___c__DisplayClass160_0_o *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = eventEnt;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)eventEnt, v14, v15, v16, v17, v18, v19);
  v20 = (GeoLocation_LocationDelegate_o *)sub_1C93D20(GeoLocation_LocationDelegate_TypeInfo);
  GeoLocation_LocationDelegate___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ScrPlayerStatus___c__DisplayClass160_0__locationRequest_b__0__,
    0);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
  GeoLocation__GetLocation(v20, (UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScrPlayerStatus__mfCallFsmEvent(ScrPlayerStatus_o *this, System_String_o *sEventStr, const MethodInfo *method)
{
  struct PlayMakerFSM_o **p_mTargetFsm; // x20
  UnityEngine_Object_o *mTargetFsm; // x22
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_4D2D748 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D748 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0, mTargetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.mTargetFsm,
      (int32_t)Component_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0, v14, 0) )
  {
    Fsm = *p_mTargetFsm;
    if ( !*p_mTargetFsm || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0)) == 0 )
      sub_1C93D2C(Fsm, v15);
    HutongGames_PlayMaker_Fsm__Event_67247360((HutongGames_PlayMaker_Fsm_o *)Fsm, sEventStr, 0);
  }
}


void ScrPlayerStatus__mfCheckMasterMission(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int32_t size; // w2
  int v5; // w9
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x23
  DataManager_o *Instance; // x0
  Il2CppObject *v15; // x1
  Il2CppObject *MasterData_object; // x24
  MstMissionEntity_array *EnableMissions; // x25
  int max_length; // w8
  UserEventMissionMaster_o *v19; // x19
  unsigned int v20; // w22
  int32_t v21; // w20
  Il2CppClass **v22; // x8
  MstMissionEntity_o *v23; // x27
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  DataManager_o *v27; // x29
  int32_t MissionClearCount; // w28
  int32_t AchiveMissionNum; // w0
  int64_t startedAt; // x8
  int32_t m_CancellationTokenSource; // w19
  int32_t v32; // w21
  MasterMissionComponent_MasterMissionInfoItem_o *v33; // x29
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  GrandQuestFolderBoardItem_o *v44; // x0
  int32_t m_CancellationTokenSource_high; // w9
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x10
  __int64 v48; // x11
  Il2CppClass **v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  DataManager_o *v52; // x28
  ScrPlayerStatus_o *v53; // x0
  int32_t v54; // w19
  int32_t v55; // w21
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w29
  MasterMissionComponent_MasterMissionInfoItem_o *v59; // x28
  struct MasterMissionComponent_MasterMissionInfoItem_array *m_CachedPtr; // x8
  _QWORD *v61; // x9
  __int64 m_CancellationTokenSource_low; // x10
  Il2CppClass **v63; // x8
  __int64 v64; // x8
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v65; // x21
  System_Predicate_object__o *v66; // x22
  Il2CppObject *v67; // x19
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UnityEngine_Object_o *mMasterMissionNoticeNumber; // x19
  struct NoticeNumberComponent_o **p_mMasterMissionNoticeNumber; // x21
  Il2CppObject *mNoticeNumberPrefab; // x19
  Il2CppObject *v78; // x19
  Il2CppObject *Component_object; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  UIWidget_o *v86; // x22
  struct NoticeNumberComponent_o *v87; // x8
  UILabel_o *numberLabel; // x22
  UnityEngine_Behaviour_o *masterMissionTween; // x20
  UnityEngine_GameObject_o *gameObject; // x19
  System_Collections_Generic_List_object__o *v91; // [xsp+0h] [xbp-80h]
  UserEventMissionMaster_o *v92; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **list; // [xsp+10h] [xbp-70h]

  if ( (byte_4D2D75B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_1C93AD4(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__mfCheckMasterMission_b__183_0__);
    sub_1C93AD4(&ScrPlayerStatus___c_TypeInfo);
    byte_4D2D75B = 1;
  }
  currentMissionList = this->fields.currentMissionList;
  this->fields.mstMissionStartsAt = 0;
  list = &this->fields.currentMissionList;
  if ( currentMissionList )
  {
    size = currentMissionList->fields._size;
    v5 = currentMissionList->fields._version + 1;
    currentMissionList->fields._size = 0;
    currentMissionList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentMissionList->fields._items, 0, size, 0);
  }
  else
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    this->fields.currentMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.currentMissionList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  v91 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_MstMissionMaster___)) == 0
    || (EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
        !EnableMissions) )
  {
LABEL_90:
    sub_1C93D2C(Instance, v15);
  }
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v19 = (UserEventMissionMaster_o *)Instance;
    v20 = 0;
    v21 = 0;
    v92 = (UserEventMissionMaster_o *)Instance;
    while ( 2 )
    {
      if ( v20 >= max_length )
        sub_1C93D34(Instance);
      v22 = &EnableMissions->obj.klass + (int)v20;
      v23 = (MstMissionEntity_o *)v22[4];
      if ( v23 )
      {
        Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v22[4], 0);
        switch ( (int)Instance )
        {
          case 2:
            if ( !MasterData_object )
              goto LABEL_90;
            Instance = (DataManager_o *)EventMissionMaster__GetWeeklyMasterMissionList(
                                          (EventMissionMaster_o *)MasterData_object,
                                          v23->fields.id,
                                          0);
            if ( !Instance )
              goto LABEL_90;
            v27 = Instance;
            if ( !Instance->fields.m_CancellationTokenSource )
              goto LABEL_52;
            MissionClearCount = ScrPlayerStatus__GetMissionClearCount(
                                  (ScrPlayerStatus_o *)Instance,
                                  (EventMissionEntity_array *)Instance,
                                  v25,
                                  v26);
            v21 += MissionClearCount;
            Instance = (DataManager_o *)MstMissionEntity__isOpenNow(v23, 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_52;
            if ( !v19 )
              goto LABEL_90;
            AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(v19, v23->fields.id, 0);
            startedAt = v23->fields.startedAt;
            m_CancellationTokenSource = (int32_t)v27->fields.m_CancellationTokenSource;
            v32 = AchiveMissionNum;
            if ( startedAt > this->fields.mstMissionStartsAt )
              this->fields.mstMissionStartsAt = startedAt;
            v33 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C93D20(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
            MasterMissionComponent_MasterMissionInfoItem___ctor(
              v33,
              v23,
              m_CancellationTokenSource,
              MissionClearCount,
              v32,
              0);
            if ( !v91 )
              goto LABEL_90;
            items = v91->fields._items;
            v19 = v92;
            v41 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++v91->fields._version;
            if ( !items )
              goto LABEL_90;
            v42 = v91->fields._size;
            if ( (unsigned int)v42 < LODWORD(items->max_length) )
            {
              v43 = &items->obj.klass + v42;
              v91->fields._size = v42 + 1;
              v43[4] = (Il2CppClass *)v33;
              v44 = (GrandQuestFolderBoardItem_o *)(v43 + 4);
              LODWORD(v15) = (_DWORD)v33;
              goto LABEL_47;
            }
            v64 = v41[4];
            Instance = (DataManager_o *)v91;
            v15 = (Il2CppObject *)v33;
            goto LABEL_51;
          case 3:
            Instance = (DataManager_o *)ScrPlayerStatus__GetDailyMissionInfoItem(this, v23, v24);
            if ( !Instance )
              goto LABEL_52;
            if ( !v13 )
              goto LABEL_90;
            m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
            v46 = v13->fields._items;
            v15 = (Il2CppObject *)Instance;
            v47 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++v13->fields._version;
            if ( !v46 )
              goto LABEL_90;
            v48 = v13->fields._size;
            v21 += m_CancellationTokenSource_high;
            if ( (unsigned int)v48 < LODWORD(v46->max_length) )
            {
              v49 = &v46->obj.klass + v48;
              v13->fields._size = v48 + 1;
              v49[4] = (Il2CppClass *)v15;
              v44 = (GrandQuestFolderBoardItem_o *)(v49 + 4);
              goto LABEL_47;
            }
            v64 = v47[4];
            Instance = (DataManager_o *)v13;
            goto LABEL_51;
          case 4:
            if ( !MasterData_object )
              goto LABEL_90;
            Instance = (DataManager_o *)EventMissionMaster__GetExtraMissionList(
                                          (EventMissionMaster_o *)MasterData_object,
                                          v23->fields.id,
                                          0);
            if ( !Instance )
              goto LABEL_90;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)Instance,
                                          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
            if ( !Instance )
              goto LABEL_90;
            if ( Instance->fields.m_CancellationTokenSource )
            {
              Instance = (DataManager_o *)ScrPlayerStatus__GetMissionClearCount(
                                            (ScrPlayerStatus_o *)Instance,
                                            (EventMissionEntity_array *)Instance,
                                            v50,
                                            v51);
              v21 += (int)Instance;
            }
            goto LABEL_52;
          case 5:
            if ( !MasterData_object )
              goto LABEL_90;
            Instance = (DataManager_o *)EventMissionMaster__GetLimitedMissionList(
                                          (EventMissionMaster_o *)MasterData_object,
                                          v23->fields.id,
                                          0);
            if ( !Instance )
              goto LABEL_90;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)Instance,
                                          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
            if ( !Instance )
              goto LABEL_90;
            v52 = Instance;
            if ( !Instance->fields.m_CancellationTokenSource )
              goto LABEL_52;
            if ( !v19 )
              goto LABEL_90;
            v53 = (ScrPlayerStatus_o *)UserEventMissionMaster__getAchiveMissionNum(v19, v23->fields.id, 0);
            v54 = (int32_t)v52->fields.m_CancellationTokenSource;
            v55 = (int)v53;
            v58 = ScrPlayerStatus__GetMissionClearCount(v53, (EventMissionEntity_array *)v52, v56, v57);
            v59 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C93D20(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
            MasterMissionComponent_MasterMissionInfoItem___ctor(v59, v23, v54, v58, v55, 0);
            Instance = (DataManager_o *)*list;
            if ( !*list )
              goto LABEL_90;
            m_CachedPtr = (struct MasterMissionComponent_MasterMissionInfoItem_array *)Instance->fields.m_CachedPtr;
            v61 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++HIDWORD(Instance->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              goto LABEL_90;
            m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
            v19 = v92;
            v21 += v58;
            if ( (unsigned int)m_CancellationTokenSource_low >= LODWORD(m_CachedPtr->max_length) )
            {
              v64 = v61[4];
              v15 = (Il2CppObject *)v59;
LABEL_51:
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                v15,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v64 + 192) + 112LL));
            }
            else
            {
              v63 = &m_CachedPtr->obj.klass + m_CancellationTokenSource_low;
              LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              v63[4] = (Il2CppClass *)v59;
              v44 = (GrandQuestFolderBoardItem_o *)(v63 + 4);
              LODWORD(v15) = (_DWORD)v59;
LABEL_47:
              sub_1C93A78(v44, (int32_t)v15, v34, v35, v36, v37, v38, v39);
            }
LABEL_52:
            max_length = EnableMissions->max_length;
            if ( (int)++v20 >= max_length )
              goto LABEL_55;
            continue;
          default:
            goto LABEL_52;
        }
      }
      goto LABEL_90;
    }
  }
  v21 = 0;
LABEL_55:
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
  ScrPlayerStatus__SortLimitedMstMissionViewList(list, (const MethodInfo *)v15);
  Instance = (DataManager_o *)*list;
  if ( !*list )
    goto LABEL_90;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v13,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
  Instance = (DataManager_o *)*list;
  if ( !*list )
    goto LABEL_90;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v91,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
  Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
  v65 = *list;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
  }
  v66 = *(System_Predicate_object__o **)(*(_QWORD *)&Instance[1].fields._DispLog + 48LL);
  if ( !v66 )
  {
    if ( !LODWORD(Instance[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
    }
    v67 = **(Il2CppObject ***)&Instance[1].fields._DispLog;
    v66 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Predicate_object____ctor(v66, v67, Method_ScrPlayerStatus___c__mfCheckMasterMission_b__183_0__, 0);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__183_0 = (struct System_Predicate_MasterMissionComponent_MasterMissionInfoItem__o *)v66;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__183_0, (int32_t)v66, v69, v70, v71, v72, v73, v74);
  }
  if ( !v65 )
    goto LABEL_90;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v65,
    (System_Predicate_T__o *)v66,
    (const MethodInfo_387AFF8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
  p_mMasterMissionNoticeNumber = &this->fields.mMasterMissionNoticeNumber;
  mMasterMissionNoticeNumber = (UnityEngine_Object_o *)this->fields.mMasterMissionNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mMasterMissionNoticeNumber, 0, 0) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v78 = UnityEngine_Object__Instantiate_object_(
            mNoticeNumberPrefab,
            (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_36750960(
      (UnityEngine_GameObject_o *)v78,
      this->fields.masterMissionNoticeRoot,
      0);
    if ( !v78 )
      goto LABEL_90;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v78,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mMasterMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.mMasterMissionNoticeNumber,
      (int32_t)Component_object,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    Instance = (DataManager_o *)*p_mMasterMissionNoticeNumber;
    if ( !*p_mMasterMissionNoticeNumber )
      goto LABEL_90;
    Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0);
    v86 = (UIWidget_o *)Instance;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    if ( !v86 )
      goto LABEL_90;
    UIWidget__set_depth(v86, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0);
    UIWidget__set_width(v86, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0);
    UIWidget__set_height(v86, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0);
    v87 = *p_mMasterMissionNoticeNumber;
    if ( !*p_mMasterMissionNoticeNumber )
      goto LABEL_90;
    numberLabel = v87->fields.numberLabel;
    if ( !numberLabel )
      goto LABEL_90;
    UIWidget__set_depth(
      (UIWidget_o *)v87->fields.numberLabel,
      ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH + 1,
      0);
    UILabel__set_fontSize(numberLabel, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE, 0);
    UIWidget__set_width(
      (UIWidget_o *)numberLabel,
      ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_LABEL_WIDTH,
      0);
  }
  Instance = (DataManager_o *)*p_mMasterMissionNoticeNumber;
  if ( !*p_mMasterMissionNoticeNumber )
    goto LABEL_90;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v21, 0);
  Instance = (DataManager_o *)this->fields.mMasterMissionNoticeNumber;
  if ( !Instance )
    goto LABEL_90;
  masterMissionTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionTween;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_90;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( !masterMissionTween )
    goto LABEL_90;
  UnityEngine_Behaviour__set_enabled(masterMissionTween, (unsigned __int8)Instance & 1, 0);
  Instance = (DataManager_o *)this->fields.masterMissionTween;
  if ( !Instance )
    goto LABEL_90;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0) )
  {
    Instance = (DataManager_o *)this->fields.masterMissionTween;
    if ( !Instance )
      goto LABEL_90;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  ScrPlayerStatus__InitMstMissionLb(this, (const MethodInfo *)v15);
}


void ScrPlayerStatus__mfFaceMngCallback(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 mcFaceObjP; // x0
  int v4; // w8
  __int64 v5; // x20
  unsigned int v6; // w23
  __int64 v7; // x8
  UIWidget_o *v8; // x22
  System_String_o *name; // x0
  UnityEngine_Transform_o *v10; // x22

  if ( (byte_4D2D750 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITexture___);
    sub_1C93AD4(&StringLiteral_3205/*"Body"*/);
    byte_4D2D750 = 1;
  }
  mcFaceObjP = (__int64)this->fields.mcFaceObjP;
  if ( !mcFaceObjP )
    goto LABEL_17;
  mcFaceObjP = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                          (UnityEngine_GameObject_o *)mcFaceObjP,
                          (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UITexture___);
  if ( !mcFaceObjP )
    goto LABEL_17;
  v4 = *(_DWORD *)(mcFaceObjP + 24);
  v5 = mcFaceObjP;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v4 )
        sub_1C93D34(mcFaceObjP);
      v7 = v5 + 8LL * (int)v6;
      v8 = *(UIWidget_o **)(v7 + 32);
      if ( !v8 )
        break;
      name = UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v7 + 32), 0);
      mcFaceObjP = System_String__op_Equality(name, (System_String_o *)StringLiteral_3205/*"Body"*/, 0);
      if ( (mcFaceObjP & 1) != 0 )
      {
        UIWidget__SetDimensions(v8, 350, 350, 0);
        UIWidget__set_pivot(v8, 4, 0);
        mcFaceObjP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
        if ( !mcFaceObjP )
          break;
        mcFaceObjP = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mcFaceObjP, 0);
        v10 = (UnityEngine_Transform_o *)mcFaceObjP;
        if ( !byte_4D2A139 )
        {
          mcFaceObjP = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        if ( !v10 )
          break;
        UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      }
      v4 = *(_DWORD *)(v5 + 24);
      if ( (int)++v6 >= v4 )
        goto LABEL_16;
    }
LABEL_17:
    sub_1C93D2C(mcFaceObjP, method);
  }
LABEL_16:
  this->fields.isUpdateFaceTexture = 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ScrPlayerStatus__mfGetApRecoverTimeStr(
        ScrPlayerStatus_o *this,
        bool isGetMax,
        const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v6; // x21
  ScrPlayerStatus_o *ActAllRecoverTime; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4D2D757 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D757 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_11;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !UserGameEntity__IsNeedRecoverAct(userGameEntity, 0) )
    return v6;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_11:
    sub_1C93D2C(userGameEntity, isGetMax);
  if ( isGetMax )
    ActAllRecoverTime = (ScrPlayerStatus_o *)UserGameEntity__getActAllRecoverTime(userGameEntity, 0);
  else
    ActAllRecoverTime = (ScrPlayerStatus_o *)UserGameEntity__getActNextRecoverTime(userGameEntity, 0);
  return ScrPlayerStatus__GetTimeApRecoverStr(ActAllRecoverTime, (int64_t)ActAllRecoverTime, isGetMax, v8);
}


System_String_o *ScrPlayerStatus__mfGetCommandSpellRecoverTimeStr(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v4; // x20
  int32_t CommandSpell; // w0
  BalanceConfig_c *v6; // x8
  int32_t CommandSpellMax; // w8
  _BOOL8 CmdSpellInfo; // x0
  const MethodInfo *v9; // x2
  int64_t time; // [xsp+0h] [xbp-30h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2D75A & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D75A = 1;
  }
  count = 0;
  time = 0;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_10;
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  CommandSpell = UserGameEntity__getCommandSpell(userGameEntity, 0);
  this->fields.miSpellNow = CommandSpell;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
    CommandSpell = this->fields.miSpellNow;
  }
  CommandSpellMax = v6->static_fields->CommandSpellMax;
  this->fields.miSpellMax = CommandSpellMax;
  if ( CommandSpell != CommandSpellMax )
  {
    userGameEntity = this->fields.userGameEntity;
    if ( userGameEntity )
    {
      CmdSpellInfo = UserGameEntity__getCmdSpellInfo(userGameEntity, &count, &time, 0);
      return ScrPlayerStatus__GetTimeCommandSpellRecoverStr((ScrPlayerStatus_o *)CmdSpellInfo, time, v9);
    }
LABEL_10:
    sub_1C93D2C(userGameEntity, method);
  }
  return v4;
}


int32_t ScrPlayerStatus__mfGetFsmValueInt(
        ScrPlayerStatus_o *this,
        System_String_o *sValueStr,
        const MethodInfo *method)
{
  struct PlayMakerFSM_o **p_mTargetFsm; // x20
  UnityEngine_Object_o *mTargetFsm; // x22
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_4D2D74A & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D74A = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0, mTargetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.mTargetFsm,
      (int32_t)Component_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(0, v14, 0) )
    return 0;
  Fsm = *p_mTargetFsm;
  if ( !*p_mTargetFsm
    || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0)) == 0
    || (Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource) == 0
    || (Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                  sValueStr,
                                  0)) == 0 )
  {
    sub_1C93D2C(Fsm, v15);
  }
  return HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Fsm, 0);
}


void ScrPlayerStatus__mfInitUserData(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  BaseDialog_o *nextExpDialog; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userGameEntity,
    (int32_t)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  ScrPlayerStatus__SetAllParam(this, this->fields.userGameEntity, v10);
  nextExpDialog = this->fields.nextExpDialog;
  this->fields.mtIsUpdate = 1;
  if ( !nextExpDialog )
    sub_1C93D2C(0, v11);
  BaseDialog__Init(nextExpDialog, 0);
}


void ScrPlayerStatus__mfSetAp(ScrPlayerStatus_o *this, int32_t iApNow, int32_t iApMax, const MethodInfo *method)
{
  float v4; // s0

  this->fields.miApNow = iApNow;
  this->fields.miApMax = iApMax;
  if ( iApNow < 1 )
    v4 = 0.0;
  else
    v4 = (float)iApNow / (float)iApMax;
  this->fields.mfApPar = v4;
}


void ScrPlayerStatus__mfSetFaceID(
        ScrPlayerStatus_o *this,
        int64_t equipID,
        int32_t genderType,
        const MethodInfo *method)
{
  if ( this->fields.miMasterUserEquipID != equipID || this->fields.meMasterGender != genderType )
  {
    this->fields.miMasterUserEquipID = equipID;
    this->fields.isUpdateFaceTexture = 1;
    this->fields.meMasterGender = genderType;
  }
}


void ScrPlayerStatus__mfSetFsmValueInt(
        ScrPlayerStatus_o *this,
        System_String_o *sValueStr,
        int32_t iValueInt,
        const MethodInfo *method)
{
  struct PlayMakerFSM_o **p_mTargetFsm; // x21
  UnityEngine_Object_o *mTargetFsm; // x23
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *v16; // x22
  __int64 v17; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_4D2D749 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D749 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0, mTargetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.mTargetFsm,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0, v16, 0) )
  {
    Fsm = *p_mTargetFsm;
    if ( !*p_mTargetFsm
      || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0)) == 0
      || (Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource) == 0
      || (Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    sValueStr,
                                    0)) == 0 )
    {
      sub_1C93D2C(Fsm, v17);
    }
    LODWORD(Fsm->fields.addEventHandlers) = iValueInt;
  }
}


void ScrPlayerStatus__mfSetIsUpdate(ScrPlayerStatus_o *this, bool isUpdate, const MethodInfo *method)
{
  this->fields.mtIsUpdate = isUpdate;
}


void ScrPlayerStatus__mfSetLevel(ScrPlayerStatus_o *this, int32_t iLevel, const MethodInfo *method)
{
  this->fields.miLevel = iLevel;
}


void ScrPlayerStatus__mfSetLocationEventTime(ScrPlayerStatus_o *this, int64_t now, const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  struct System_Int64_array *mNextLocationEventTerm; // x8
  unsigned int max_length; // w9
  ScrPlayerStatus_o *v7; // x1
  _QWORD *p_mNextLocationEventTerm; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x9
  struct System_Int64_array *v10; // x8
  ScrPlayerStatus_o *v11; // x20
  struct PlayMakerFSM_o *mTargetFsm; // x9
  unsigned int v13; // w10
  int v14; // w9
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct PlayMakerFSM_o *v21; // x8
  unsigned int v22; // w9
  Il2CppObject *MasterData_object; // x21
  struct PlayMakerFSM_o *v24; // x8
  __int64 v25; // x9
  __int64 v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  v4 = this;
  if ( (byte_4D2D768 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D768 = 1;
  }
  mNextLocationEventTerm = v4->fields.mNextLocationEventTerm;
  if ( !mNextLocationEventTerm )
    goto LABEL_8;
  max_length = mNextLocationEventTerm->max_length;
  if ( !max_length )
    goto LABEL_48;
  if ( mNextLocationEventTerm->m_Items[0] >= 1 )
  {
    if ( max_length <= 1 )
      goto LABEL_48;
    if ( mNextLocationEventTerm->m_Items[1] < now )
    {
LABEL_8:
      this = (ScrPlayerStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_47;
      this = (ScrPlayerStatus_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_47;
      this = (ScrPlayerStatus_o *)EventMaster__GetEnableEntityList((EventMaster_o *)this, 20, 0, 0, 0);
      if ( !this )
        goto LABEL_47;
      p_mNextLocationEventTerm = &v4->fields.mNextLocationEventTerm;
      m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
      v10 = v4->fields.mNextLocationEventTerm;
      v11 = this;
      if ( m_CancellationTokenSource )
      {
        if ( v10 )
        {
          if ( !(_DWORD)m_CancellationTokenSource )
            goto LABEL_48;
          mTargetFsm = this->fields.mTargetFsm;
          if ( !mTargetFsm )
            goto LABEL_47;
          v13 = v10->max_length;
          if ( !v13 )
            goto LABEL_48;
          v10->m_Items[0] = (int64_t)mTargetFsm[1].fields.m_CancellationTokenSource;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) || v13 <= 1 )
            goto LABEL_48;
          v10->m_Items[1] = (int64_t)mTargetFsm[1].fields.fsm;
        }
        else
        {
          this = (ScrPlayerStatus_o *)sub_1C93B7C(long___TypeInfo, 2);
          if ( !LODWORD(v11->fields.m_CancellationTokenSource) )
            goto LABEL_48;
          v21 = v11->fields.mTargetFsm;
          if ( !v21 )
            goto LABEL_47;
          v7 = this;
          if ( !this )
            goto LABEL_47;
          v22 = (unsigned int)this->fields.m_CancellationTokenSource;
          if ( !v22 )
            goto LABEL_48;
          this->fields.mTargetFsm = (struct PlayMakerFSM_o *)v21[1].fields.m_CancellationTokenSource;
          if ( !LODWORD(v11->fields.m_CancellationTokenSource) || v22 <= 1 )
            goto LABEL_48;
          this->fields.mcFaceObjP = (struct UnityEngine_GameObject_o *)v21[1].fields.fsm;
          *p_mNextLocationEventTerm = this;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v4->fields.mNextLocationEventTerm,
            (int32_t)this,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
        }
        this = (ScrPlayerStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_47;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2A55B )
        {
          sub_1C93AD4(&NetworkManager_TypeInfo);
          byte_4D2A55B = 1;
        }
        this = (ScrPlayerStatus_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (ScrPlayerStatus_o *)NetworkManager_TypeInfo;
        }
        if ( LODWORD(v11->fields.m_CancellationTokenSource) )
        {
          v24 = v11->fields.mTargetFsm;
          if ( v24 && MasterData_object )
          {
            v25 = 20;
            if ( SHIDWORD(v24->fields.m_CachedPtr) <= 0 )
              v25 = 16;
            this = (ScrPlayerStatus_o *)UserEventMaster__GetEntityDefinitely(
                                          (UserEventMaster_o *)MasterData_object,
                                          (int64_t)this->fields.rpRoot->fields.mcRpStrP,
                                          *(_DWORD *)((char *)&v24->klass + v25),
                                          0);
            if ( this )
            {
              v4->fields.mIsAcceptedLocationEvent = SHIDWORD(this->fields.m_CancellationTokenSource) > 0;
              return;
            }
          }
LABEL_47:
          sub_1C93D2C(this, v7);
        }
LABEL_48:
        sub_1C93D34(this);
      }
      if ( v10 )
      {
        v14 = v10->max_length;
        if ( !v14 )
          goto LABEL_48;
        v10->m_Items[0] = 0;
        if ( v14 == 1 )
          goto LABEL_48;
        v10->m_Items[1] = 0;
      }
      else
      {
        v26 = sub_1C93B7C(long___TypeInfo, 2);
        *p_mNextLocationEventTerm = v26;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v4->fields.mNextLocationEventTerm,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      v4->fields.mIsAcceptedLocationEvent = 0;
    }
  }
}


void ScrPlayerStatus__mfSetSpell(
        ScrPlayerStatus_o *this,
        int32_t iSpellNow,
        int32_t iSpellMax,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commandSpellWindow; // x21
  struct CommandSpellWindowComponent_o **p_commandSpellWindow; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *v11; // x21
  Il2CppObject *commandSpellWindowPrefab; // x21
  Il2CppObject *v13; // x21
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_GameObject_o *v22; // x0
  CommandSpellWindowComponent_o *v23; // x21
  struct CommandSpellWindowComponent_o *v24; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2D766 & 1) == 0 )
  {
    sub_1C93AD4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus_OnCloseSpellWindow__);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    byte_4D2D766 = 1;
  }
  this->fields.miSpellNow = iSpellNow;
  this->fields.miSpellMax = iSpellMax;
  commandSpellWindow = (UnityEngine_Object_o *)this->fields.commandSpellWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_commandSpellWindow = &this->fields.commandSpellWindow;
  if ( UnityEngine_Object__op_Inequality(commandSpellWindow, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow;
    if ( !*p_commandSpellWindow )
      goto LABEL_23;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow;
    if ( !*p_commandSpellWindow )
      goto LABEL_23;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v11, 0);
  }
  commandSpellWindowPrefab = (Il2CppObject *)this->fields.commandSpellWindowPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__Instantiate_object_(
          commandSpellWindowPrefab,
          (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_23;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
  GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v13, layer, 0);
  if ( !v13 )
    goto LABEL_23;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v13,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___);
  *p_commandSpellWindow = (struct CommandSpellWindowComponent_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandSpellWindow,
    (int32_t)Component_object,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow;
  if ( !*p_commandSpellWindow )
    goto LABEL_23;
  v22 = UnityEngine_Component__get_gameObject(gameObject, 0);
  GameObjectExtensions__SafeSetParent_36750960(v22, this->fields.commandSpellWindowRoot, 0);
  gameObject = (UnityEngine_Component_o *)ScrPlayerStatus_TypeInfo;
  v23 = this->fields.commandSpellWindow;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
  if ( !v23
    || (CommandSpellWindowComponent__InitializeCommandSpellDepth(
          v23,
          0,
          ScrPlayerStatus_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH,
          0),
        (gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow) == 0)
    || (BattleWindowComponent__setInitData(
          (BattleWindowComponent_o *)gameObject,
          2,
          ScrPlayerStatus_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0),
        (v24 = *p_commandSpellWindow) == 0) )
  {
LABEL_23:
    sub_1C93D2C(gameObject, v9);
  }
  v24->fields.mode = 0;
  v25 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1C93D20(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v25,
    (Il2CppObject *)this,
    (intptr_t)Method_ScrPlayerStatus_OnCloseSpellWindow__,
    0);
  v24->fields.callback_close = v25;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->fields.callback_close, (int32_t)v25, v26, v27, v28, v29, v30, v31);
}


void ScrPlayerStatus__mfSetStoneAndFragment(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v7; // x22
  UserItemEntity_o *EntityDefinitely; // x21
  Il2CppObject *Master_object; // x22
  int64_t v10; // x23
  int32_t num; // w26
  int32_t stone; // w23
  int32_t v13; // w21
  int32_t MaxNum; // w20
  bool _41140656; // w0
  UILabel_o *stoneCountNumLb; // x22
  UILabel_o *v17; // x22
  UILabel_o *stoneFragmentCountNumLb; // x22
  Il2CppObject **v19; // x8
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *stormPodCountNumLb; // x21
  Il2CppObject *v24; // x22
  System_String_o *v25; // x23
  Il2CppObject *v26; // x0
  UILabel_o *v27; // x20
  UISprite_o *stormPodIcon; // x19
  int32_t v29; // [xsp+0h] [xbp-60h] BYREF
  int32_t v30; // [xsp+4h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2D767 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&ClassBoardUtility_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_19618/*"ffb505"*/);
    sub_1C93AD4(&StringLiteral_19619/*"ffffff"*/);
    sub_1C93AD4(&StringLiteral_21284/*"item_mini_49"*/);
    sub_1C93AD4(&StringLiteral_3883/*"COUNT_LIMITED"*/);
    sub_1C93AD4(&StringLiteral_16119/*"[{0}]{1:N0}[-]"*/);
    byte_4D2D767 = 1;
  }
  entity = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object || !v7 )
    goto LABEL_66;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v7,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       HIDWORD(MasterData_object[5].monitor),
                       0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v10 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Master_object )
    goto LABEL_66;
  UserItemMaster__TryGetEntity(
    (UserItemMaster_o *)Master_object,
    &entity,
    v10,
    BalanceConfig_TypeInfo->static_fields->stormPodItemId,
    0);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                BalanceConfig_TypeInfo->static_fields->stormPodItemId,
                                (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !SelfUserGame || !EntityDefinitely )
    goto LABEL_66;
  if ( entity )
  {
    num = entity->fields.num;
    if ( !Instance )
      goto LABEL_66;
  }
  else
  {
    num = 0;
    if ( !Instance )
      goto LABEL_66;
  }
  stone = SelfUserGame->fields.stone;
  v13 = EntityDefinitely->fields.num;
  MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)Instance, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _41140656 = TutorialFlag__Get_41140656(101, 0);
  stoneCountNumLb = this->fields.stoneCountNumLb;
  if ( !_41140656 )
    stone = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(stone, 0);
  if ( !stoneCountNumLb )
    goto LABEL_66;
  UILabel__set_text(stoneCountNumLb, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)ScrPlayerStatus_TypeInfo;
  v17 = this->fields.stoneCountNumLb;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
  if ( !v17 )
    goto LABEL_66;
  UILabel__SetCondensedScale(v17, ScrPlayerStatus_TypeInfo->static_fields->STONE_COUNT_MAX_WIDTH, 0, 0);
  stoneFragmentCountNumLb = this->fields.stoneFragmentCountNumLb;
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(v13, 0);
  if ( !stoneFragmentCountNumLb )
    goto LABEL_66;
  UILabel__set_text(stoneFragmentCountNumLb, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.stoneFragmentCountNumLb;
  if ( !Instance )
    goto LABEL_66;
  UILabel__SetCondensedScale(
    (UILabel_o *)Instance,
    ScrPlayerStatus_TypeInfo->static_fields->STONE_COUNT_MAX_WIDTH,
    0,
    0);
  Instance = (DataManager_o *)this->fields.stormPodIcon;
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
  if ( ClassBoardUtility__IsTargetQuestClear(0) )
  {
    Instance = (DataManager_o *)this->fields.stormPodIcon;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( Instance )
        {
          Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
          if ( Instance )
          {
            Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
              v19 = (Il2CppObject **)&StringLiteral_19619/*"ffffff"*/;
              if ( num >= MaxNum )
                v19 = (Il2CppObject **)&StringLiteral_19618/*"ffb505"*/;
              v20 = *v19;
              v30 = num;
              v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
              v22 = System_String__Format_64467032((System_String_o *)StringLiteral_16119/*"[{0}]{1:N0}[-]"*/, v20, v21, 0);
              stormPodCountNumLb = this->fields.stormPodCountNumLb;
              v24 = (Il2CppObject *)v22;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3883/*"COUNT_LIMITED"*/, 0);
              v29 = MaxNum;
              v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
              Instance = (DataManager_o *)System_String__Format_64467032(v25, v24, v26, 0);
              if ( stormPodCountNumLb )
              {
                UILabel__set_text(stormPodCountNumLb, (System_String_o *)Instance, 0);
                Instance = (DataManager_o *)ScrPlayerStatus_TypeInfo;
                v27 = this->fields.stormPodCountNumLb;
                if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
                if ( v27 )
                {
                  UILabel__SetCondensedScale(
                    v27,
                    ScrPlayerStatus_TypeInfo->static_fields->STORMPOD_COUNT_MAX_WIDTH,
                    0,
                    0);
                  stormPodIcon = this->fields.stormPodIcon;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetEventSprite(stormPodIcon, (System_String_o *)StringLiteral_21284/*"item_mini_49"*/, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_1C93D2C(Instance, v5);
  }
}


void ScrPlayerStatus__mfUpdatePrams(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  UILabel_o *mcLevelStrP; // x20
  System_String_o *v7; // x1
  UILabel_o *mcLevelMaxP; // x20
  System_String_o *v9; // x0
  ScrPlayerStatus_c *v10; // x8
  UnityEngine_Transform_o *v11; // x20
  struct UILabel_o *v12; // x9
  struct ScrPlayerStatus_StaticFields *static_fields; // x8
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x2
  struct ScrPlayerStatus_OverwriteMasterInfo_o *overwriteMasterInfo; // x8
  UnityEngine_Object_o *mcGiftButtonP; // x20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  int32_t LevelMax; // [xsp+Ch] [xbp-34h] BYREF
  int64_t recoverTime; // [xsp+10h] [xbp-30h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D755 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScrPlayerStatus_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D755 = 1;
  }
  count = 0;
  recoverTime = 0;
  if ( this->fields.isUpdateFaceTexture )
    ScrPlayerStatus__ResetMasterFaceTexture(this, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !Instance )
    goto LABEL_33;
  LevelMax = UserExpMaster__GetLevelMax((UserExpMaster_o *)Instance, 0);
  mcLevelStrP = this->fields.mcLevelStrP;
  Instance = (DataManager_o *)System_Int32__ToString((int)this + 536, 0);
  if ( !mcLevelStrP )
    goto LABEL_33;
  v7 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(mcLevelStrP, v7, 0);
  mcLevelMaxP = this->fields.mcLevelMaxP;
  v9 = System_Int32__ToString((int32_t)&LevelMax, 0);
  Instance = (DataManager_o *)System_String__Concat_64425724((System_String_o *)StringLiteral_1042/*"/"*/, v9, 0);
  if ( !mcLevelMaxP )
    goto LABEL_33;
  UILabel__set_text(mcLevelMaxP, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.mcLevelMaxP;
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  v10 = ScrPlayerStatus_TypeInfo;
  v11 = (UnityEngine_Transform_o *)Instance;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    v10 = ScrPlayerStatus_TypeInfo;
  }
  v12 = this->fields.mcLevelStrP;
  if ( !v12 )
    goto LABEL_33;
  if ( !v11 )
    goto LABEL_33;
  static_fields = v10->static_fields;
  v24.fields.y = static_fields->MAX_LEVEL_BASE_POS_Y;
  v24.fields.x = static_fields->MAX_LEVEL_BASE_POS_X + (float)v12->fields.mWidth;
  v24.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v11, v24, 0);
  Instance = (DataManager_o *)this->fields.mcExpSldP;
  if ( !Instance )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, this->fields.mfExpPar, 0);
  if ( (this->fields.miApMax & 0x80000000) == 0 )
  {
    ScrPlayerStatus__InitApRecoverLb(this, v5);
    ScrPlayerStatus__UpdateAp(this, v14);
  }
  Instance = (DataManager_o *)this->fields.rpRoot;
  if ( !Instance )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectHelper__SetActiveSafely(gameObject, this->fields.isBPEvent, 0);
  if ( this->fields.isBPEvent )
  {
    Instance = (DataManager_o *)this->fields.rpRoot;
    if ( !Instance )
      goto LABEL_33;
    ScrPlayerBP__SetupDispRaidPoint((ScrPlayerBP_o *)Instance, this->fields.userGameEntity, v16);
  }
  ScrPlayerStatus__SetOverwriteMasterInfo(this, v5);
  overwriteMasterInfo = this->fields.overwriteMasterInfo;
  if ( !overwriteMasterInfo
    || (Instance = (DataManager_o *)this->fields.commandSpellComp) == 0
    || (CommandSpellIconComponent__SetRevocationData(
          (CommandSpellIconComponent_o *)Instance,
          this->fields.userGameEntity,
          overwriteMasterInfo->fields._spellIconId_k__BackingField,
          overwriteMasterInfo->fields._spellCount_k__BackingField,
          0),
        (Instance = (DataManager_o *)this->fields.userGameEntity) == 0) )
  {
LABEL_33:
    sub_1C93D2C(Instance, v5);
  }
  UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)Instance, &count, &recoverTime, 0);
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcGiftButtonP, 0, 0) )
  {
    Instance = (DataManager_o *)this->fields.mcGiftButtonP;
    if ( Instance )
    {
      GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
LABEL_32:
  ScrPlayerStatus__mfCheckMasterMission(this, v5);
  ScrPlayerStatus__InitCompleteMissionLb(this, v19);
  ScrPlayerStatus__mfSetStoneAndFragment(this, v20);
  this->fields.mtIsUpdate = 0;
}


void ScrPlayerStatus_OverwriteMasterInfo___ctor(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        int32_t warId,
        int32_t masterIcon,
        int32_t count,
        System_String_o *spellIcon,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v10 = (GrandQuestFolderBoardItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.sortValue0 = (int64_t)spellIcon;
  v10 = (GrandQuestFolderBoardItem_o *)((char *)v10 + 32);
  LODWORD(v10[-1].fields._ListCreatedTime_k__BackingField) = warId;
  HIDWORD(v10[-1].fields._ListCreatedTime_k__BackingField) = masterIcon;
  LODWORD(v10[-1].fields._ClosedMessage_k__BackingField) = count;
  sub_1C93A78(v10, (int32_t)spellIcon, v11, v12, v13, v14, v15, v16);
}


int32_t ScrPlayerStatus_OverwriteMasterInfo__get_masterIconId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._masterIconId_k__BackingField;
}


int32_t ScrPlayerStatus_OverwriteMasterInfo__get_spellCount(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._spellCount_k__BackingField;
}


System_String_o *ScrPlayerStatus_OverwriteMasterInfo__get_spellIconId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._spellIconId_k__BackingField;
}


int32_t ScrPlayerStatus_OverwriteMasterInfo__get_targetWarId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._targetWarId_k__BackingField;
}


void ScrPlayerStatus_OverwriteMasterInfo__set_masterIconId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._masterIconId_k__BackingField = value;
}


void ScrPlayerStatus_OverwriteMasterInfo__set_spellCount(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._spellCount_k__BackingField = value;
}


void ScrPlayerStatus_OverwriteMasterInfo__set_spellIconId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._spellIconId_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._spellIconId_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScrPlayerStatus_OverwriteMasterInfo__set_targetWarId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._targetWarId_k__BackingField = value;
}


void ScrPlayerStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D963 & 1) == 0 )
  {
    sub_1C93AD4(&ScrPlayerStatus___c_TypeInfo);
    byte_4D2D963 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ScrPlayerStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScrPlayerStatus___c_TypeInfo->static_fields->__9 = (struct ScrPlayerStatus___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ScrPlayerStatus___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScrPlayerStatus___c___ctor(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c___ExitMasterProfile_b__151_1(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  ;
}


void ScrPlayerStatus___c___OnClickCloseNextExp_b__153_0(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  ;
}


void ScrPlayerStatus___c___OnClickCompleteMissionBtn_b__139_1(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  ;
}


void ScrPlayerStatus___c___OpenMasterProfile_b__150_0(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x20
  Il2CppObject *v9; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2D964 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__OpenMasterProfile_b__150_1__);
    sub_1C93AD4(&ScrPlayerStatus___c_TypeInfo);
    byte_4D2D964 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)v4;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  Instance = ScrPlayerStatus___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    Instance = ScrPlayerStatus___c_TypeInfo;
  }
  v8 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ScrPlayerStatus___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_ScrPlayerStatus___c__OpenMasterProfile_b__150_1__, 0);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__150_1 = v8;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__150_1, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
LABEL_14:
    sub_1C93D2C(Instance, v3);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void ScrPlayerStatus___c___OpenMasterProfile_b__150_1(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t ScrPlayerStatus___c___SortLimitedMstMissionViewList_b__187_0(
        ScrPlayerStatus___c_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *info,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x8

  if ( !info || (MstMissionEntity_k__BackingField = info->fields._MstMissionEntity_k__BackingField) == 0 )
    sub_1C93D2C(this, info);
  return MstMissionEntity_k__BackingField->fields.priority;
}


bool ScrPlayerStatus___c___UpdateCompleteMissionIconVisibility_b__219_0(
        ScrPlayerStatus___c_o *this,
        EventEntity_ScriptData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.isHiddenTerminalCompleteMissionButton;
}


bool ScrPlayerStatus___c___mfCheckMasterMission_b__183_0(
        ScrPlayerStatus___c_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._MissionAchiveCount_k__BackingField == x->fields._MissionCount_k__BackingField;
}


void ScrPlayerStatus___c__DisplayClass135_0___ctor(
        ScrPlayerStatus___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass135_0___ClickBannerOpenMasterMission_b__0(
        ScrPlayerStatus___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2D965 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus_UpdateGiftBoxNum__);
    byte_4D2D965 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v4, _4__this, Method_ScrPlayerStatus_UpdateGiftBoxNum__, 0);
  if ( !_4__this )
    sub_1C93D2C(v5, v6);
  ScrPlayerStatus__OpenMasterMission((ScrPlayerStatus_o *)_4__this, v4, this->fields.typeIndex, 0);
}


void ScrPlayerStatus___c__DisplayClass136_0___ctor(
        ScrPlayerStatus___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass136_0___ClickLoginDialogOpenMasterMission_b__0(
        ScrPlayerStatus___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus___c__DisplayClass136_0_o *v2; // x19
  System_Action_o *_9__1; // x21
  ScrPlayerStatus_o *_4__this; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  v2 = this;
  if ( (byte_4D2D966 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (ScrPlayerStatus___c__DisplayClass136_0_o *)sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass136_0__ClickLoginDialogOpenMasterMission_b__1__);
    byte_4D2D966 = 1;
  }
  _9__1 = v2->fields.__9__1;
  _4__this = v2->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ScrPlayerStatus___c__DisplayClass136_0__ClickLoginDialogOpenMasterMission_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v5, v6, v7, v8, v9, v10);
  }
  if ( !_4__this )
    sub_1C93D2C(this, method);
  ScrPlayerStatus__OpenMasterMission(_4__this, _9__1, v2->fields.typeIndex, 0);
}


void ScrPlayerStatus___c__DisplayClass136_0___ClickLoginDialogOpenMasterMission_b__1(
        ScrPlayerStatus___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *_4__this; // x0
  struct System_Action_o *closeCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ScrPlayerStatus__UpdateGiftBoxNum(_4__this, 0);
  closeCallback = this->fields.closeCallback;
  if ( closeCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallback->fields.invoke_impl)(
      closeCallback->fields.method_code,
      closeCallback->fields.method);
}


void ScrPlayerStatus___c__DisplayClass155_0___ctor(
        ScrPlayerStatus___c__DisplayClass155_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass155_0___ShowEnabledRuntimePermissionDialog_b__0(
        ScrPlayerStatus___c__DisplayClass155_0_o *this,
        bool result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_String_o *permissionName; // x20
  Il2CppObject *_4__this; // x21
  System_Action_object__o *v9; // x22
  Il2CppObject *v10; // x19
  System_Action_object__o *v11; // x21
  struct ScrPlayerStatus_o *v12; // x8

  if ( (byte_4D2D967 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus_OnPermissionDenied__);
    sub_1C93AD4(&Method_ScrPlayerStatus_OnPermissionGranted__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D967 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseLocationTermsOfUseDlg((CommonUI_o *)Instance, 0);
  if ( result )
  {
    permissionName = this->fields.permissionName;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v9 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
    System_Action_object____ctor(v9, _4__this, Method_ScrPlayerStatus_OnPermissionGranted__, 0);
    v10 = (Il2CppObject *)this->fields.__4__this;
    v11 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
    System_Action_object____ctor(v11, v10, Method_ScrPlayerStatus_OnPermissionDenied__, 0);
    AndroidPermissionManager__RequestPermission(
      permissionName,
      (System_Action_string__o *)v9,
      (System_Action_string__o *)v11,
      0,
      0);
    return;
  }
  v12 = this->fields.__4__this;
  if ( !v12 )
LABEL_8:
    sub_1C93D2C(Instance, v6);
  v12->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___c__DisplayClass159_0___ctor(
        ScrPlayerStatus___c__DisplayClass159_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass159_0___SetLocationCheck_b__0(
        ScrPlayerStatus___c__DisplayClass159_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  _4__this->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___c__DisplayClass159_0___SetLocationCheck_b__1(
        ScrPlayerStatus___c__DisplayClass159_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct EventEntity_array *list; // x8

  if ( (byte_4D2D968 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D968 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseCampaignInfoDialg(Instance, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( isDecide )
  {
    list = this->fields.list;
    if ( list )
    {
      if ( !LODWORD(list->max_length) )
        sub_1C93D34(Instance);
      if ( Instance )
      {
        ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, list->m_Items[0], 0);
        return;
      }
    }
LABEL_11:
    sub_1C93D2C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_11;
  LOBYTE(Instance->fields.achievementExchangeConditionsDialogPath) = 0;
}


void ScrPlayerStatus___c__DisplayClass159_0___SetLocationCheck_b__2(
        ScrPlayerStatus___c__DisplayClass159_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  _4__this->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___c__DisplayClass160_0___ctor(
        ScrPlayerStatus___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass160_0___locationRequest_b__0(
        ScrPlayerStatus___c__DisplayClass160_0_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  EventLocationRequest_o *Instance; // x0
  __int64 id; // x1
  struct EventEntity_o *eventEnt; // x8
  CommonUI_o *v10; // x20
  System_String_o *name; // x21
  System_String_o *v12; // x22
  System_String_o *v13; // x0
  System_Action_o *_9__3; // x23
  System_String_o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *v22; // x20
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  CommonConfirmDialog_ClickDelegate_o *_9__1; // x25
  System_String_o *v27; // x24
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct CommonConfirmDialog_ClickDelegate_o **p__9__1; // x0
  int32_t v35; // w1
  System_String_o *v36; // x22
  System_String_o *v37; // x0
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  struct EventEntity_o *v40; // x8
  __int128 v41; // q0
  UnityEngine_LocationInfo_o v42; // [xsp+40h] [xbp-90h] BYREF
  UnityEngine_LocationInfo_o v43; // [xsp+60h] [xbp-70h]

  if ( (byte_4D2D969 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_EventLocationRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_ScrPlayerStatus_EndLocationRequest__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass160_0__locationRequest_b__1__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass160_0__locationRequest_b__2__);
    sub_1C93AD4(&Method_ScrPlayerStatus___c__DisplayClass160_0__locationRequest_b__3__);
    sub_1C93AD4(&StringLiteral_8357/*"LOCATION_DLG_TIMEOUT_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_8358/*"LOCATION_DLG_TIMEOUT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_8356/*"LOCATION_DLG_TIMEOUT_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8355/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_8351/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/);
    sub_1C93AD4(&StringLiteral_8349/*"LOCATION_DLG_DEVICE_OPTION_RETRY_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_8350/*"LOCATION_DLG_DEVICE_OPTION_RETRY_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_8347/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/);
    byte_4D2D969 = 1;
  }
  switch ( result )
  {
    case 0:
    case 1:
    case 4:
      Instance = (EventLocationRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      eventEnt = this->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_28;
      v10 = (CommonUI_o *)Instance;
      name = eventEnt->fields.name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8355/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, 0);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8347/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0);
      Instance = (EventLocationRequest_o *)System_String__Concat_64425724(v12, v13, 0);
      _9__3 = this->fields.__9__3;
      v15 = (System_String_o *)Instance;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)this,
          Method_ScrPlayerStatus___c__DisplayClass160_0__locationRequest_b__3__,
          0);
        this->fields.__9__3 = _9__3;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v16, v17, v18, v19, v20, v21);
      }
      if ( !v10 )
        goto LABEL_28;
      CommonUI__OpenNotificationDialog(v10, name, v15, _9__3, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    case 2:
      v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8351/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/, 0);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8350/*"LOCATION_DLG_DEVICE_OPTION_RETRY_MESSAGE"*/, 0);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8349/*"LOCATION_DLG_DEVICE_OPTION_RETRY_DECIDE"*/, 0);
      Instance = (EventLocationRequest_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/, 0);
      _9__1 = this->fields.__9__1;
      v27 = (System_String_o *)Instance;
      if ( _9__1 )
        goto LABEL_20;
      _9__1 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ScrPlayerStatus___c__DisplayClass160_0__locationRequest_b__1__,
        0);
      p__9__1 = &this->fields.__9__1;
      v35 = (int)_9__1;
      this->fields.__9__1 = _9__1;
      goto LABEL_19;
    case 3:
      v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8358/*"LOCATION_DLG_TIMEOUT_TITLE"*/, 0);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8357/*"LOCATION_DLG_TIMEOUT_MESSAGE"*/, 0);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8347/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0);
      v24 = System_String__Concat_64425724(v36, v37, 0);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8356/*"LOCATION_DLG_TIMEOUT_DECIDE"*/, 0);
      Instance = (EventLocationRequest_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/, 0);
      _9__1 = this->fields.__9__2;
      v27 = (System_String_o *)Instance;
      if ( _9__1 )
        goto LABEL_20;
      _9__1 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ScrPlayerStatus___c__DisplayClass160_0__locationRequest_b__2__,
        0);
      p__9__1 = &this->fields.__9__2;
      v35 = (int)_9__1;
      this->fields.__9__2 = _9__1;
LABEL_19:
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p__9__1, v35, v28, v29, v30, v31, v32, v33);
LABEL_20:
      if ( !v22 )
LABEL_28:
        sub_1C93D2C(Instance, id);
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v22,
        v23,
        v24,
        v25,
        v27,
        _9__1,
        0,
        0.0,
        15.0,
        0,
        0,
        0,
        240,
        0,
        1,
        0,
        0,
        0);
      break;
    case 5:
      _4__this = (Il2CppObject *)this->fields.__4__this;
      v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v39, _4__this, Method_ScrPlayerStatus_EndLocationRequest__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (EventLocationRequest_o *)NetworkManager__getRequest_object_(
                                             v39,
                                             (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_EventLocationRequest___);
      v40 = this->fields.eventEnt;
      if ( !v40 )
        goto LABEL_28;
      v41 = *(_OWORD *)&locInfo->fields.m_Altitude;
      id = (unsigned int)v40->fields.id;
      *(_OWORD *)&v43.fields.m_Timestamp = *(_OWORD *)&locInfo->fields.m_Timestamp;
      *(_OWORD *)&v43.fields.m_Altitude = v41;
      if ( !Instance )
        goto LABEL_28;
      v42 = v43;
      EventLocationRequest__beginRequest(Instance, id, &v42, 0);
      break;
    default:
      return;
  }
}


void ScrPlayerStatus___c__DisplayClass160_0___locationRequest_b__1(
        ScrPlayerStatus___c__DisplayClass160_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D2D96A & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D96A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseConfirmDialog(Instance, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( isDecide )
  {
    if ( Instance )
    {
      ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, this->fields.eventEnt, 0);
      return;
    }
LABEL_9:
    sub_1C93D2C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_9;
  LOBYTE(Instance->fields.achievementExchangeConditionsDialogPath) = 0;
}


void ScrPlayerStatus___c__DisplayClass160_0___locationRequest_b__2(
        ScrPlayerStatus___c__DisplayClass160_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D2D96B & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D96B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseConfirmDialog(Instance, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( isDecide )
  {
    if ( Instance )
    {
      ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, this->fields.eventEnt, 0);
      return;
    }
LABEL_9:
    sub_1C93D2C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_9;
  LOBYTE(Instance->fields.achievementExchangeConditionsDialogPath) = 0;
}


void ScrPlayerStatus___c__DisplayClass160_0___locationRequest_b__3(
        ScrPlayerStatus___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  _4__this->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___c__DisplayClass187_0___ctor(
        ScrPlayerStatus___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ScrPlayerStatus___c__DisplayClass187_0___SortLimitedMstMissionViewList_b__1(
        ScrPlayerStatus___c__DisplayClass187_0_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *info,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x8

  if ( !info || (MstMissionEntity_k__BackingField = info->fields._MstMissionEntity_k__BackingField) == 0 )
    sub_1C93D2C(this, info);
  return MstMissionEntity_k__BackingField->fields.endedAt >= this->fields.nowTime;
}


int64_t ScrPlayerStatus___c__DisplayClass187_0___SortLimitedMstMissionViewList_b__2(
        ScrPlayerStatus___c__DisplayClass187_0_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *info,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x8
  __int64 v4; // x9

  if ( !info || (MstMissionEntity_k__BackingField = info->fields._MstMissionEntity_k__BackingField) == 0 )
    sub_1C93D2C(this, info);
  v4 = 48;
  if ( MstMissionEntity_k__BackingField->fields.endedAt >= this->fields.nowTime )
    v4 = 40;
  return *(int64_t *)((char *)&MstMissionEntity_k__BackingField->klass + v4);
}