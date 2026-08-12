void ScrPlayerStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ManagerConfig_c *v8; // x8
  struct ScrPlayerStatus_StaticFields *static_fields; // x0
  int v10; // w9
  int32_t v11; // w1
  int32_t WIDTH; // w8
  MissionNaviTransitionBoardItem_o *p_AP_OVER_TXT_COLOR_STR; // x0
  int32_t v14; // w1
  struct ScrPlayerStatus_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  MissionNaviTransitionBoardItem_o *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct ScrPlayerStatus_StaticFields *v30; // x8

  if ( (byte_596D6AE & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&StringLiteral_17754/*"banner_icon_mission_limited_"*/);
    sub_2213A60(&StringLiteral_16615/*"[ffb505]"*/);
    sub_2213A60(&StringLiteral_8849/*"LocationInfoAgreement"*/);
    byte_596D6AE = 1;
  }
  v8 = ManagerConfig_TypeInfo;
  static_fields = ScrPlayerStatus_TypeInfo->static_fields;
  v10 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  static_fields->MV_SPD_TIME = 0.25;
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = ManagerConfig_TypeInfo;
    static_fields = ScrPlayerStatus_TypeInfo->static_fields;
  }
  v11 = StringLiteral_16615/*"[ffb505]"*/;
  WIDTH = v8->static_fields->WIDTH;
  static_fields->AP_OVER_TXT_COLOR_STR = (struct System_String_o *)StringLiteral_16615/*"[ffb505]"*/;
  p_AP_OVER_TXT_COLOR_STR = (MissionNaviTransitionBoardItem_o *)&static_fields->AP_OVER_TXT_COLOR_STR;
  *((float *)&p_AP_OVER_TXT_COLOR_STR[-1].fields._BoardType_k__BackingField + 1) = (float)-WIDTH;
  sub_2213A04(p_AP_OVER_TXT_COLOR_STR, v11, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_8849/*"LocationInfoAgreement"*/;
  v15 = ScrPlayerStatus_TypeInfo->static_fields;
  v15->LOCATION_TOS_AGREED_KEY = (struct System_String_o *)StringLiteral_8849/*"LocationInfoAgreement"*/;
  v15 = (struct ScrPlayerStatus_StaticFields *)((char *)v15 + 24);
  *(_QWORD *)&v15[-1].MISSION_ALERT_FADE_FRAME_NUM = 0xC1400000C1500000LL;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v15, v14, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_17754/*"banner_icon_mission_limited_"*/;
  v23 = (MissionNaviTransitionBoardItem_o *)ScrPlayerStatus_TypeInfo->static_fields;
  v23->fields.sortStr1 = (struct System_String_o *)StringLiteral_17754/*"banner_icon_mission_limited_"*/;
  v23 = (MissionNaviTransitionBoardItem_o *)((char *)v23 + 56);
  *(_OWORD *)&v23[-1].fields._ClosedMessage_k__BackingField = xmmword_E9D5F0;
  v23[-1].fields._BoardType_k__BackingField = 28;
  sub_2213A04(v23, v22, v24, v25, v26, v27, v28, v29);
  v30 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_QWORD *)&v30->CMD_SPELL_SCROLLVIEW_DEPTH = 0x3E19999A000000DCLL;
  *(_OWORD *)&v30->STONE_COUNT_MAX_WIDTH = xmmword_E9DC60;
}


void ScrPlayerStatus___ctor(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1

  if ( (byte_596D6AD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D6AD = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.miMasterUserEquipID = 1;
  this->fields.isDispMax = 1;
  this->fields.oldRp = -1;
  this->fields.meMasterGender = 2;
  this->fields.mfApParOld = -1.0;
  this->fields.mstMissionStartsAt = -1;
  this->fields.overwriteSpellIconId = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSpellIconId,
    (int32_t)v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(v5, v6);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UISprite_o *masterMissionLimitedBgSp; // x22
  ScrPlayerStatus_c *v12; // x0
  System_String_o *MASTER_MISSION_ICON_LIMITED_PREFIX; // x23
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v17; // x23
  __int64 v18; // x2
  ScrPlayerStatus_c *v19; // x0
  UISprite_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *masterMissionDetailOverlapLb; // x22
  UILabel_o *masterMissionDetailLb; // x23
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  MstMissionEntity_c *v29; // x0
  ScrPlayerStatus_o *v30; // x24
  UILabel_o *masterMissionCountNumLb; // x22
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *masterMissionCountNumLb2; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t NextDayStartTime; // x20
  struct UILabel_o *masterMissionAlertNumLb; // x8
  struct UILabel_o *masterMissionAlertUnitLb; // x8
  bool IsNullOrEmpty; // w8
  __int64 v40; // x1
  __int64 v41; // x2
  ScrPlayerStatus_o *masterMissionAlertMsgLb; // x19
  ScrPlayerStatus_o *v43; // x1
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_596D699 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MstMissionEntity_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_13971/*"TIME_REST_ACHIVE"*/);
    this = (ScrPlayerStatus_o *)sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596D699 = 1;
  }
  MissionAchiveCount_k__BackingField = 0;
  if ( !mstMissionInfo )
    goto LABEL_62;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_62;
  MissionType = MstMissionEntity__getMissionType(mstMissionInfo->fields._MstMissionEntity_k__BackingField, 0);
  v7 = MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0);
  v8 = MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0);
  if ( MissionType != 3 && v7 != 2 && v8 != 5 )
  {
    ScrPlayerStatus__HideMstMissionIconLb(v4, (const MethodInfo *)mstMissionInfo);
    return;
  }
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertRoot;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionCountRoot;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionDailyBgObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, MissionType == 3, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionWeeklyBgObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7 == 2, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionLimitedBgObj;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 == 5, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAnimationLabelsRoot;
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 == 5, 0);
  if ( v8 == 5 )
  {
    masterMissionLimitedBgSp = v4->fields.masterMissionLimitedBgSp;
    v12 = ScrPlayerStatus_TypeInfo;
    if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v9, v10);
      v12 = ScrPlayerStatus_TypeInfo;
    }
    MASTER_MISSION_ICON_LIMITED_PREFIX = v12->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX;
    v14 = System_Int32__ToString((int)MstMissionEntity_k__BackingField + 56, 0);
    v17 = System_String__Concat_75651716(MASTER_MISSION_ICON_LIMITED_PREFIX, v14, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15, v16);
    if ( !AtlasManager__SetBanner(masterMissionLimitedBgSp, v17, 0) )
    {
      v19 = ScrPlayerStatus_TypeInfo;
      v20 = v4->fields.masterMissionLimitedBgSp;
      if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, mstMissionInfo, v18);
        v19 = ScrPlayerStatus_TypeInfo;
      }
      v23 = System_String__Concat_75651716(
              v19->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX,
              (System_String_o *)StringLiteral_1198/*"0"*/,
              0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
      AtlasManager__SetBanner(v20, v23, 0);
    }
    this = (ScrPlayerStatus_o *)v4->fields.masterMissionLimitedBgSp;
    if ( !this )
      goto LABEL_62;
    ((void (__fastcall *)(ScrPlayerStatus_o *, void *))this->klass[2]._1.parent)(this, this->klass[2]._1.generic_class);
    masterMissionDetailLb = v4->fields.masterMissionDetailLb;
    masterMissionDetailOverlapLb = v4->fields.masterMissionDetailOverlapLb;
    script = MstMissionEntity_k__BackingField->fields.script;
    v29 = MstMissionEntity_TypeInfo;
    if ( !*(&MstMissionEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, v24, v25);
      v29 = MstMissionEntity_TypeInfo;
    }
    this = (ScrPlayerStatus_o *)EntityScriptUtil__GetStringValue(
                                  script,
                                  v29->static_fields->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
                                  0,
                                  0);
    if ( !masterMissionDetailLb )
      goto LABEL_62;
    v30 = this;
    UILabel__set_text(masterMissionDetailLb, (System_String_o *)this, 0);
    if ( !masterMissionDetailOverlapLb )
      goto LABEL_62;
    UILabel__set_text(masterMissionDetailOverlapLb, (System_String_o *)v30, 0);
  }
  masterMissionCountNumLb = v4->fields.masterMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  this = (ScrPlayerStatus_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0);
  if ( !masterMissionCountNumLb )
    goto LABEL_62;
  UILabel__set_text(masterMissionCountNumLb, (System_String_o *)this, 0);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  masterMissionCountNumLb2 = v4->fields.masterMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  this = (ScrPlayerStatus_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0);
  if ( !masterMissionCountNumLb2 )
    goto LABEL_62;
  UILabel__set_text(masterMissionCountNumLb2, (System_String_o *)this, 0);
  if ( MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0) == 3 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34, v35);
    NextDayStartTime = NetworkManager__getNextDayStartTime(0);
  }
  else
  {
    NextDayStartTime = MstMissionEntity_k__BackingField->fields.endedAt;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
  LocalizationManager__GetRestTimeWithSeparatedTimeStr(
    NextDayStartTime,
    &v4->fields.mstMissionTimeNumStr,
    &v4->fields.mstMissionTimeCntStr,
    0);
  masterMissionAlertNumLb = v4->fields.masterMissionAlertNumLb;
  if ( !masterMissionAlertNumLb )
    goto LABEL_62;
  this = (ScrPlayerStatus_o *)v4->fields.mstMissionTimeNumStr;
  if ( !this )
    goto LABEL_62;
  this = (ScrPlayerStatus_o *)System_String__Equals_75686512(
                                (System_String_o *)this,
                                masterMissionAlertNumLb->fields.mText,
                                0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    masterMissionAlertUnitLb = v4->fields.masterMissionAlertUnitLb;
    if ( !masterMissionAlertUnitLb )
      goto LABEL_62;
    this = (ScrPlayerStatus_o *)v4->fields.mstMissionTimeCntStr;
    if ( !this )
      goto LABEL_62;
    if ( System_String__Equals_75686512((System_String_o *)this, masterMissionAlertUnitLb->fields.mText, 0) )
      return;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4->fields.mstMissionTimeNumStr, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertTitleLb;
  if ( !IsNullOrEmpty )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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
            v43 = (ScrPlayerStatus_o *)StringLiteral_1/*""*/;
            goto LABEL_60;
          }
        }
      }
    }
LABEL_62:
    sub_2213CDC(this, mstMissionInfo);
  }
  if ( !this )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertNumLb;
  if ( !this )
    goto LABEL_62;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertUnitLb;
  if ( !this )
    goto LABEL_62;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  masterMissionAlertMsgLb = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertMsgLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
  this = (ScrPlayerStatus_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13971/*"TIME_REST_ACHIVE"*/, 0);
  if ( !masterMissionAlertMsgLb )
    goto LABEL_62;
  v43 = this;
  this = masterMissionAlertMsgLb;
LABEL_60:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v43, 0);
}


void ScrPlayerStatus__CheckAssert(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *completeMissionViewController; // x20
  __int64 v5; // x1
  CompleteMissionViewController_o *v6; // x0

  if ( (byte_596D6AA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D6AA = 1;
  }
  completeMissionViewController = (UnityEngine_Object_o *)this->fields.completeMissionViewController;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(completeMissionViewController, 0, 0) )
  {
    v6 = this->fields.completeMissionViewController;
    if ( !v6 )
      sub_2213CDC(0, v5);
    CompleteMissionViewController__CheckAssert(v6, 0);
  }
}


void ScrPlayerStatus__ClickBannerOpenMasterMission(
        ScrPlayerStatus_o *this,
        int32_t typeIndex,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_47A29F8 *v14; // x0
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_596D668 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass136_0__ClickBannerOpenMasterMission_b__0__);
    sub_2213A60(&ScrPlayerStatus___c__DisplayClass136_0_TypeInfo);
    byte_596D668 = 1;
  }
  v5 = sub_2213CCC(ScrPlayerStatus___c__DisplayClass136_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  *(_DWORD *)(v5 + 24) = typeIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance(v14);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v16, v17);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_ScrPlayerStatus___c__DisplayClass136_0__ClickBannerOpenMasterMission_b__0__,
    0);
  if ( !v19 )
LABEL_8:
    sub_2213CDC(v6, v7);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0);
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
  const MethodInfo_47A29F8 *v22; // x0
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  AvalonSceneManager_c *v26; // x8
  CommonUI_o *v27; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x20

  if ( (byte_596D669 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass137_0__ClickLoginDialogOpenMasterMission_b__0__);
    sub_2213A60(&ScrPlayerStatus___c__DisplayClass137_0_TypeInfo);
    byte_596D669 = 1;
  }
  v7 = sub_2213CCC(ScrPlayerStatus___c__DisplayClass137_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = closeCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)closeCallback, v16, v17, v18, v19, v20, v21);
  v22 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  *(_DWORD *)(v7 + 32) = typeIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance(v22);
  v26 = AvalonSceneManager_TypeInfo;
  v27 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v24, v25);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_ScrPlayerStatus___c__DisplayClass137_0__ClickLoginDialogOpenMasterMission_b__0__,
    0);
  if ( !v27 )
LABEL_8:
    sub_2213CDC(v8, v9);
  CommonUI__maskFadeout(v27, 1, DEFAULT_FADE_TIME, v29, 0);
}


void ScrPlayerStatus__DisableAllBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_GameObject_o *masterFaceBtnObj; // x0

  if ( (byte_596D6A2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_596D6A2 = 1;
  }
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 0, v2);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 0, v4);
  masterFaceBtnObj = this->fields.masterFaceBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0);
  masterFaceBtnObj = this->fields.mLocationBtnRoot;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_2213CDC(masterFaceBtnObj, v5);
  }
  CompleteMissionViewController__SetInteractable((CompleteMissionViewController_o *)masterFaceBtnObj, 0, 0);
}


void ScrPlayerStatus__EnableAllBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_GameObject_o *masterFaceBtnObj; // x0

  if ( (byte_596D6A3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_596D6A3 = 1;
  }
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 1, v2);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 1, v4);
  masterFaceBtnObj = this->fields.masterFaceBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0);
  masterFaceBtnObj = this->fields.mLocationBtnRoot;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_2213CDC(masterFaceBtnObj, v5);
  }
  CompleteMissionViewController__SetInteractable((CompleteMissionViewController_o *)masterFaceBtnObj, 1, 0);
}


void ScrPlayerStatus__EndLocationRequest(ScrPlayerStatus_o *this, System_String_o *result, const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  System_Action_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x24
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x20
  System_String_o *v17; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  __int64 v20; // x2
  ScrPlayerStatus_o *v21; // x25
  GiftEntity_array *monitor; // x24
  BalanceConfig_c *v23; // x0
  int32_t LocationRewardDlgColumn; // w26
  CommonMultiItemGetDlg_OnClickDelegate_o *v25; // x27

  v4 = this;
  if ( (byte_596D67F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_JsonManager_Deserialize_EventLocationRequest_LocationGift___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CommonMultiItemGetDlg_OnClickDelegate_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__EndLocationRequest_b__162_0__);
    sub_2213A60(&Method_ScrPlayerStatus__EndLocationRequest_b__162_1__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_8659/*"LOCATION_GIFT_DLG_CANCEL"*/);
    sub_2213A60(&StringLiteral_8661/*"LOCATION_GIFT_DLG_DETAIL"*/);
    sub_2213A60(&StringLiteral_8660/*"LOCATION_GIFT_DLG_DECIDE"*/);
    sub_2213A60(&StringLiteral_8654/*"LOCATION_DLG_FAIL_TITLE"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_23337/*"ngParse"*/);
    sub_2213A60(&StringLiteral_8653/*"LOCATION_DLG_FAIL_MESSAGE"*/);
    this = (ScrPlayerStatus_o *)sub_2213A60(&StringLiteral_8662/*"LOCATION_GIFT_DLG_TITLE"*/);
    byte_596D67F = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23337/*"ngParse"*/, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"LOCATION_DLG_FAIL_TITLE"*/, 0);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8653/*"LOCATION_DLG_FAIL_MESSAGE"*/, 0);
    v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)v4, Method_ScrPlayerStatus__EndLocationRequest_b__162_0__, 0);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v8, v9, v10, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_20:
    sub_2213CDC(this, result);
  }
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    v4->fields.isLocationBusy = 0;
  }
  else
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11, v12);
    v13 = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_EventLocationRequest_LocationGift___);
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8662/*"LOCATION_GIFT_DLG_TITLE"*/, 0);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8661/*"LOCATION_GIFT_DLG_DETAIL"*/, 0);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8659/*"LOCATION_GIFT_DLG_CANCEL"*/, 0);
    this = (ScrPlayerStatus_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8660/*"LOCATION_GIFT_DLG_DECIDE"*/, 0);
    if ( !v13 )
      goto LABEL_20;
    v21 = this;
    monitor = (GiftEntity_array *)v13[1].monitor;
    v23 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, result, v20);
      v23 = BalanceConfig_TypeInfo;
    }
    LocationRewardDlgColumn = v23->static_fields->LocationRewardDlgColumn;
    v25 = (CommonMultiItemGetDlg_OnClickDelegate_o *)sub_2213CCC(CommonMultiItemGetDlg_OnClickDelegate_TypeInfo);
    CommonMultiItemGetDlg_OnClickDelegate___ctor(
      v25,
      (Il2CppObject *)v4,
      Method_ScrPlayerStatus__EndLocationRequest_b__162_1__,
      0);
    if ( !v16 )
      goto LABEL_20;
    CommonUI__OpenMultiGiftGetDialog(
      (CommonUI_o *)v16,
      v17,
      v18,
      v19,
      (System_String_o *)v21,
      monitor,
      LocationRewardDlgColumn,
      v25,
      0);
  }
}


void ScrPlayerStatus__ExitCompleteMission(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_596D687 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__ExitCompleteMission_b__171_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D687 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitCompleteMission_b__171_0__, 0);
  if ( !v8 )
    sub_2213CDC(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0);
}


void ScrPlayerStatus__ExitMasterMission(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_596D686 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__ExitMasterMission_b__170_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D686 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterMission_b__170_0__, 0);
  if ( !v8 )
    sub_2213CDC(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0);
}


void ScrPlayerStatus__ExitMasterProfile(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596D677 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__ExitMasterProfile_b__152_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D677 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterProfile_b__152_0__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
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
  bool IsDisp; // w21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_596D6A5 & 1) == 0 )
  {
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D6A5 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, is_force, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  IsGrandQuestWarId = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, is_force, method);
    IsGrandQuestWarId = TerminalSceneComponent_TypeInfo;
  }
  mInstance = IsGrandQuestWarId->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_26;
  mTerminalList = mInstance->fields.mTerminalList;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, is_force, method);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, is_force, method);
    v8 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, is_force, method);
  IsGrandQuestWarId = (TerminalSceneComponent_c *)ScrTerminalListTop__IsGrandQuestWarId(WarId_k__BackingField, 0);
  if ( ((unsigned __int8)IsGrandQuestWarId & 1) == 0 )
  {
    if ( mTerminalList )
      goto LABEL_24;
LABEL_26:
    sub_2213CDC(IsGrandQuestWarId, is_force);
  }
  if ( !mTerminalList )
    goto LABEL_26;
  if ( !ScrTerminalListTop__IsGrandQuestActive(mTerminalList, 0) )
  {
LABEL_24:
    IsDisp = ScrTerminalListTop__IsDispExRoom(mTerminalList, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.masterMissionBtnColl, !IsDisp, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.mcGiftButtonP, !IsDisp, 0);
    ScrPlayerStatus__SetupDispRaidPoint(this, v12);
    ScrPlayerStatus__FrameInOut(this, 1, is_force, v13);
    ScrPlayerStatus__UpdateCompleteMissionIconVisibility(this, v14);
    return;
  }
  if ( !ScrTerminalListTop__IsGrandQuestClassSelect(mTerminalList, 0) )
    ScrPlayerStatus__FrameInOut(this, 1, is_force, v10);
}


void ScrPlayerStatus__FrameInOut(ScrPlayerStatus_o *this, bool is_framein, bool is_force, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  ScrPlayerStatus_c *v10; // x8
  float mFrameInPosX; // s13
  UnityEngine_GameObject_o *v12; // x21
  struct ScrPlayerStatus_StaticFields *static_fields; // x8
  float FRAME_OUT_POS_X; // s14
  float v15; // s8
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Component_object; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x1
  ScrPlayerStatus_c *v23; // x0
  float MV_SPD_TIME; // s8
  float IntpTime_AutoResume; // s12
  UnityEngine_GameObject_o *v26; // x21
  float v27; // s0
  float y; // s1
  float z; // s2
  float v30; // s3
  float v31; // s4
  float v32; // s0
  UnityEngine_GameObject_o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  UnityEngine_Vector3_o LocalPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v48; // 0:kr14_12.12

  if ( (byte_596D6A6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_UITweener_Begin_TweenPosition___);
    sub_2213A60(&StringLiteral_7147/*"FrameInOutEnd"*/);
    byte_596D6A6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v10 = ScrPlayerStatus_TypeInfo;
  mFrameInPosX = this->fields.mFrameInPosX;
  v12 = gameObject;
  if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v8, v9);
    v10 = ScrPlayerStatus_TypeInfo;
  }
  static_fields = v10->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  if ( is_framein )
    v15 = mFrameInPosX;
  else
    v15 = static_fields->FRAME_OUT_POS_X;
  if ( !is_force && v15 != GameObjectExtensions__GetLocalPositionX(v12, 0) )
  {
    v23 = ScrPlayerStatus_TypeInfo;
    if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v8, v16);
      v23 = ScrPlayerStatus_TypeInfo;
    }
    MV_SPD_TIME = v23->static_fields->MV_SPD_TIME;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8, v16);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(MV_SPD_TIME, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(v12, 0);
    v48 = GameObjectExtensions__GetLocalPosition(v12, 0);
    gameObject = (UnityEngine_GameObject_o *)UITweener__Begin_object_(
                                               v12,
                                               IntpTime_AutoResume,
                                               (const MethodInfo_3A047F4 *)Method_UITweener_Begin_TweenPosition___);
    if ( gameObject )
    {
      v26 = gameObject;
      if ( is_framein )
        v27 = FRAME_OUT_POS_X;
      else
        v27 = mFrameInPosX;
      if ( is_framein )
        y = v48.fields.y;
      else
        y = LocalPosition.fields.y;
      if ( is_framein )
        z = v48.fields.z;
      else
        z = LocalPosition.fields.z;
      if ( is_framein )
        v30 = mFrameInPosX;
      else
        v30 = FRAME_OUT_POS_X;
      if ( is_framein )
        v31 = LocalPosition.fields.y;
      else
        v31 = v48.fields.y;
      LODWORD(gameObject[1].monitor) = 2;
      *(float *)&gameObject[5].monitor = v27;
      *((float *)&gameObject[5].monitor + 1) = y;
      if ( is_framein )
        v32 = LocalPosition.fields.z;
      else
        v32 = v48.fields.z;
      *(float *)&gameObject[5].fields.m_CachedPtr = z;
      *((float *)&gameObject[5].fields.m_CachedPtr + 1) = v30;
      *(float *)&gameObject[6].klass = v31;
      *((float *)&gameObject[6].klass + 1) = v32;
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v26[3].monitor = v33;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26[3].monitor, (int32_t)v33, v34, v35, v36, v37, v38, v39);
      v40 = StringLiteral_7147/*"FrameInOutEnd"*/;
      v26[3].fields.m_CachedPtr = StringLiteral_7147/*"FrameInOutEnd"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26[3].fields, v40, v41, v42, v43, v44, v45, v46);
      return;
    }
LABEL_42:
    sub_2213CDC(gameObject, v8);
  }
  if ( !v12 )
    goto LABEL_42;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v12,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Component_object, 0);
  }
  GameObjectExtensions__SetLocalPositionX(v12, v15, 0);
  ScrPlayerStatus__FrameInOutEnd(this, v22);
}


void ScrPlayerStatus__FrameInOutEnd(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_596D6A7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7273/*"GO_NEXT"*/);
    byte_596D6A7 = 1;
  }
  ScrPlayerStatus__UpdatePanel(this, method);
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_7273/*"GO_NEXT"*/, v3);
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
  EventMissionEntity_array *v10; // x22
  int32_t MissionClearCount; // w21
  MasterMissionComponent_MasterMissionInfoItem_o *v12; // x23
  int32_t AchiveMissionNum; // w0
  int32_t max_length; // w20
  int32_t v15; // w22

  if ( (byte_596D694 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    byte_596D694 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, mstMissionEntity, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionMaster___);
  DailyMasterMissionList = (EventMissionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !mstMissionEntity )
    goto LABEL_14;
  if ( !Master_object )
    goto LABEL_14;
  v7 = (UserEventMissionMaster_o *)DailyMasterMissionList;
  DailyMasterMissionList = EventMissionMaster__GetDailyMasterMissionList(
                             (EventMissionMaster_o *)Master_object,
                             mstMissionEntity->fields.id,
                             0);
  if ( !DailyMasterMissionList )
    goto LABEL_14;
  v10 = DailyMasterMissionList;
  if ( !DailyMasterMissionList->max_length )
    return 0;
  MissionClearCount = ScrPlayerStatus__GetMissionClearCount(
                        (ScrPlayerStatus_o *)DailyMasterMissionList,
                        DailyMasterMissionList,
                        v8,
                        v9);
  DailyMasterMissionList = (EventMissionEntity_array *)MstMissionEntity__isOpenNow(mstMissionEntity, 0);
  v12 = 0;
  if ( ((unsigned __int8)DailyMasterMissionList & 1) != 0 )
  {
    if ( v7 )
    {
      AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(v7, mstMissionEntity->fields.id, 0);
      max_length = v10->max_length;
      v15 = AchiveMissionNum;
      v12 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_2213CCC(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
      MasterMissionComponent_MasterMissionInfoItem___ctor(v12, mstMissionEntity, max_length, MissionClearCount, v15, 0);
      return v12;
    }
LABEL_14:
    sub_2213CDC(DailyMasterMissionList, v6);
  }
  return v12;
}


int32_t ScrPlayerStatus__GetEnabledMstMissionCount(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_object__o *Time; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int size; // w23
  int64_t v8; // x20
  int32_t v9; // w21
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x3

  if ( (byte_596D69D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D69D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0);
  currentMissionList = this->fields.currentMissionList;
  if ( !currentMissionList )
    goto LABEL_13;
  size = currentMissionList->fields._size;
  if ( size >= 1 )
  {
    v8 = (int64_t)Time;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      Time = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
      if ( !Time )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Time,
               v10++,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      v9 += ScrPlayerStatus__IsEnabledMstMission(
              (ScrPlayerStatus_o *)Item,
              (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
              v8,
              v12);
      if ( size == v10 )
        return v9;
    }
LABEL_13:
    sub_2213CDC(Time, v5);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t ScrPlayerStatus__GetFirstMstMissionIndex(ScrPlayerStatus_o *this, int32_t targetType, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Time; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int size; // w24
  int64_t v9; // x21
  int32_t v10; // w22
  MasterMissionComponent_MasterMissionInfoItem_o *v11; // x23
  ScrPlayerStatus_o *MissionType; // x0
  const MethodInfo *v13; // x3

  if ( (byte_596D69C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D69C = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetType, method);
  Time = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0);
  currentMissionList = this->fields.currentMissionList;
  if ( !currentMissionList )
    goto LABEL_16;
  size = currentMissionList->fields._size;
  if ( size >= 1 )
  {
    v9 = (int64_t)Time;
    v10 = 0;
    while ( 1 )
    {
      Time = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
      if ( !Time )
        break;
      Time = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Time,
                                                            v10,
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Time )
        break;
      v11 = (MasterMissionComponent_MasterMissionInfoItem_o *)Time;
      Time = (System_Collections_Generic_List_object__o *)Time->fields._items;
      if ( !Time )
        break;
      MissionType = (ScrPlayerStatus_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0);
      if ( (_DWORD)MissionType == targetType && ScrPlayerStatus__IsEnabledMstMission(MissionType, v11, v9, v13) )
        return v10;
      if ( size == ++v10 )
        return -1;
    }
LABEL_16:
    sub_2213CDC(Time, v6);
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
  int32_t missionTargetId; // w23
  int32_t id; // w24
  bool v13; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  bool IsIgnoreStartCondition; // w25
  int32_t MissionProgressType_55002764; // w0

  if ( (byte_596D696 & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_596D696 = 1;
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
        sub_2213CE4(this);
      v8 = &eventMissionList->obj.klass + v6;
      v9 = (EventMissionEntity_o *)v8[4];
      if ( !v9 )
        break;
      isNowMission = EventMissionEntity__isNowMission((EventMissionEntity_o *)v8[4], 0);
      missionTargetId = v9->fields.missionTargetId;
      id = v9->fields.id;
      v13 = isNowMission;
      IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v9, 0);
      if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v14, v15);
      MissionProgressType_55002764 = MissionInfoMaker__GetMissionProgressType_55002764(
                                       missionTargetId,
                                       id,
                                       v13,
                                       IsIgnoreStartCondition,
                                       0);
      this = (ScrPlayerStatus_o *)MissionInfoMaker__GetProgStatus(
                                    v9->fields.missionTargetId,
                                    v9->fields.id,
                                    MissionProgressType_55002764,
                                    v13,
                                    0);
      max_length = eventMissionList->max_length;
      ++v6;
      if ( (_DWORD)this == 3 )
        ++v7;
      if ( v6 >= max_length )
        return v7;
    }
LABEL_16:
    sub_2213CDC(this, eventMissionList);
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


// local variable allocation has failed, the output may be wrong!
int32_t ScrPlayerStatus__GetNextMstMissionIndex(ScrPlayerStatus_o *this, int32_t startIndex, const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_Generic_List_object__o *Time; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int size; // w22
  int64_t v9; // x21
  int v10; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x3

  v3 = startIndex;
  if ( (byte_596D69B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D69B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&startIndex, method);
  Time = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0);
  currentMissionList = this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_16:
    sub_2213CDC(Time, v6);
  size = currentMissionList->fields._size;
  v9 = (int64_t)Time;
  v10 = (size & ~(size >> 31)) + 1;
  while ( --v10 )
  {
    Time = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
    if ( !Time )
      goto LABEL_16;
    if ( size > v3 + 1 )
      ++v3;
    else
      v3 = 0;
    Item = System_Collections_Generic_List_object___get_Item(
             Time,
             v3,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( ScrPlayerStatus__IsEnabledMstMission(
           (ScrPlayerStatus_o *)Item,
           (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
           v9,
           v12) )
    {
      return v3;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ScrPlayerStatus__GetTimeApRecoverStr(
        ScrPlayerStatus_o *this,
        int64_t time,
        bool isGetMax,
        const MethodInfo *method)
{
  int v5; // w20
  int v6; // w24
  int v7; // w22
  int v8; // w23
  int v9; // w8
  System_String_o *v10; // x19
  System_String_o *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  int v20; // [xsp+4h] [xbp-4Ch] BYREF
  int v21; // [xsp+8h] [xbp-48h] BYREF
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  v5 = time;
  if ( (byte_596D690 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_15437/*"USER_ACTION_POINT_MAX_TIME"*/);
    sub_2213A60(&StringLiteral_15439/*"USER_ACTION_POINT_NEXT_TIME"*/);
    sub_2213A60(&StringLiteral_15438/*"USER_ACTION_POINT_MAX_TIME_FORMAT"*/);
    sub_2213A60(&StringLiteral_15440/*"USER_ACTION_POINT_NEXT_TIME_FORMAT"*/);
    byte_596D690 = 1;
  }
  v6 = v5 / 3600;
  v7 = v5 / 60 - 60 * (v5 / 3600);
  v8 = v5 % 60;
  v9 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isGetMax )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, time, isGetMax);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15437/*"USER_ACTION_POINT_MAX_TIME"*/, 0);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_15438/*"USER_ACTION_POINT_MAX_TIME_FORMAT"*/, 0);
    v22 = v6;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v22);
    v21 = v7;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
    v20 = v8;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
    v15 = System_String__Format_75697948(v11, v12, v13, v14, 0);
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, time, isGetMax);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15439/*"USER_ACTION_POINT_NEXT_TIME"*/, 0);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15440/*"USER_ACTION_POINT_NEXT_TIME_FORMAT"*/, 0);
    v22 = v7;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v22);
    v21 = v8;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
    v15 = System_String__Format_75697880(v16, v17, v18, 0);
  }
  return System_String__Concat_75651716(v10, v15, 0);
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
  if ( (byte_596D691 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26473/*"{0:D}:{1:D2}"*/);
    byte_596D691 = 1;
  }
  v4 = v3 % 60;
  v9 = v3 / 60;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v9);
  v8 = v4;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v8);
  return System_String__Format_75697880((System_String_o *)StringLiteral_26473/*"{0:D}:{1:D2}"*/, v5, v6, 0);
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
    sub_2213CDC(masterMissionDailyBgObj, method);
  }
  UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0);
}


void ScrPlayerStatus__InitApRecoverLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrPlayerStatus_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  float v7; // s0
  TitleInfoControl_c *v8; // x0
  float v9; // s8
  System_Func_float__float__float__float__o *v10; // x20
  AlphaTransitionCalculator_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  AlphaTransitionCalculator_o *apRecoverStrAlphaCalculator; // x0

  if ( (byte_596D68B & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&TitleInfoControl_TypeInfo);
    byte_596D68B = 1;
  }
  v4 = ScrPlayerStatus_TypeInfo;
  if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, method, v2);
    v4 = ScrPlayerStatus_TypeInfo;
  }
  v7 = ChangedFPSUtil__CovertFrameNumToSecond(v4->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0);
  v8 = TitleInfoControl_TypeInfo;
  v9 = v7;
  if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v5, v6);
    v8 = TitleInfoControl_TypeInfo;
  }
  v10 = ExtraEasing__AsymptoticSeriesFloat(
          v8->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
          (float)ScrPlayerStatus_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
          0);
  v11 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v11, v9, v10, 0);
  this->fields.apRecoverStrAlphaCalculator = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.apRecoverStrAlphaCalculator,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  apRecoverStrAlphaCalculator = this->fields.apRecoverStrAlphaCalculator;
  if ( !apRecoverStrAlphaCalculator )
    sub_2213CDC(0, v18);
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
    sub_2213CDC(0, method);
  CompleteMissionViewController__Refresh(completeMissionViewController, 0);
  ScrPlayerStatus__UpdateCompleteMissionIconVisibility(this, v4);
}


void ScrPlayerStatus__InitMstMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *masterMissionAlertPanel; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  ScrPlayerStatus_c *v6; // x0
  struct AlphaTransitionCalculator_o **p_missionAlertAlphaCalculator; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // s8
  TitleInfoControl_c *v11; // x0
  System_Func_float__float__float__float__o *v12; // x21
  AlphaTransitionCalculator_o *v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v23; // x2

  if ( (byte_596D697 & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&TitleInfoControl_TypeInfo);
    byte_596D697 = 1;
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
    v6 = ScrPlayerStatus_TypeInfo;
    if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v4, v5);
      v6 = ScrPlayerStatus_TypeInfo;
    }
    p_missionAlertAlphaCalculator = &this->fields.missionAlertAlphaCalculator;
    v10 = ChangedFPSUtil__CovertFrameNumToSecond(v6->static_fields->MISSION_ALERT_FADE_FRAME_NUM, 0);
    v11 = TitleInfoControl_TypeInfo;
    if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v8, v9);
      v11 = TitleInfoControl_TypeInfo;
    }
    v12 = ExtraEasing__AsymptoticSeriesFloat(
            v11->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)ScrPlayerStatus_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM,
            0);
    v13 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v13, v10, v12, 0);
    *p_missionAlertAlphaCalculator = v13;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.missionAlertAlphaCalculator,
      (int32_t)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    masterMissionAlertPanel = *p_missionAlertAlphaCalculator;
    if ( !*p_missionAlertAlphaCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(masterMissionAlertPanel, 0);
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 5, v5);
  method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel;
  if ( ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0
    || (masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 3, v20),
        method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel,
        ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0)
    || (masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 2, v20),
        method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel,
        ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0) )
  {
    currentMissionList = this->fields.currentMissionList;
    if ( !currentMissionList )
      goto LABEL_19;
    if ( currentMissionList->fields._size >= 1 )
    {
      this->fields.currentMissionIndex = (int)method;
      ScrPlayerStatus__UpdateDailyMissionInfoItem(this, (int32_t)method, v20);
      masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.currentMissionList;
      if ( masterMissionAlertPanel )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)masterMissionAlertPanel,
                 this->fields.currentMissionIndex,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
        ScrPlayerStatus__ChangeViewMstMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v23);
        return;
      }
LABEL_19:
      sub_2213CDC(masterMissionAlertPanel, method);
    }
  }
  ScrPlayerStatus__HideMstMissionIconLb(this, method);
}


bool ScrPlayerStatus__IsBPActive(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *rpRoot; // x0

  rpRoot = (UnityEngine_Component_o *)this->fields.rpRoot;
  if ( !rpRoot || (rpRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rpRoot, 0)) == 0 )
    sub_2213CDC(rpRoot, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)rpRoot, 0);
}


bool ScrPlayerStatus__IsCommandSpellActive(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *commandSpellWindow; // x0

  commandSpellWindow = (BattleWindowComponent_o *)this->fields.commandSpellWindow;
  if ( !commandSpellWindow )
    sub_2213CDC(0, method);
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
    sub_2213CDC(this, missionInfo);
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


bool ScrPlayerStatus__IsEventMapAndSpotClosed(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_o *mInstance; // x0
  struct TerminalSceneComponent_o *v5; // x8
  UnityEngine_Object_o *mTerminalMap; // x20
  __int64 v7; // x2
  TerminalSceneComponent_c *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  __int64 v12; // x2
  struct CompleteMissionViewController_o *completeMissionViewController; // x8
  TerminalPramsManager_c *v14; // x0

  if ( (byte_596D6A9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D6A9 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  mInstance = (TerminalSceneComponent_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    mInstance = (TerminalSceneComponent_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = **(struct TerminalSceneComponent_o ***)&mInstance->fields.TUTORIAL_MENU_ARROW_POS2;
  if ( !v5 )
    goto LABEL_37;
  mTerminalMap = (UnityEngine_Object_o *)v5->fields.mTerminalMap;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mTerminalMap, 0, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v7);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v7);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v8->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_37;
  if ( !TerminalSceneComponent__IsMapActive(mInstance, 0) )
    return 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  mInstance = (TerminalSceneComponent_o *)WarMaster__getEventID(v11->static_fields->_WarId_k__BackingField, 0);
  completeMissionViewController = this->fields.completeMissionViewController;
  if ( !completeMissionViewController )
LABEL_37:
    sub_2213CDC(mInstance, method);
  if ( (_DWORD)mInstance != completeMissionViewController->fields.currentEventId )
    return 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v12);
  if ( !byte_596D0BD )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0BD = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v12);
    v14 = TerminalPramsManager_TypeInfo;
  }
  return v14->static_fields->_SpotId_k__BackingField < 1;
}


bool ScrPlayerStatus__IsExRoomActive(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  ScrTerminalListTop_o *v7; // x0
  System_Collections_Generic_List_GameObject__c *klass; // x8
  UnityEngine_Object_o *v9; // x19
  __int64 v10; // x2
  System_Collections_Generic_List_GameObject__c *v12; // x8

  if ( (byte_596D6AC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D6AC = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mInstance, 0, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
    v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v7->fields.itemGetEffectInstances->klass;
  if ( !klass )
    goto LABEL_32;
  v9 = *(UnityEngine_Object_o **)&klass->_2.element_size;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v10);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v10);
    v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v12 = v7->fields.itemGetEffectInstances->klass;
  if ( !v12 || (v7 = *(ScrTerminalListTop_o **)&v12->_2.element_size) == 0 )
LABEL_32:
    sub_2213CDC(v7, v5);
  return ScrTerminalListTop__IsExRoomActive(v7, 0);
}


bool ScrPlayerStatus__IsLocationBusy(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  return this->fields.isLocationBusy;
}


bool ScrPlayerStatus__IsTouchable(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalListTop_o *v3; // x0
  System_Collections_Generic_List_GameObject__c *klass; // x8

  if ( (byte_596D675 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D675 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.itemGetEffectInstances->klass;
  if ( !klass || (v3 = *(ScrTerminalListTop_o **)&klass->_2.element_size) == 0 )
    sub_2213CDC(v3, method);
  return !ScrTerminalListTop__IsListSliding(v3, 0);
}


void ScrPlayerStatus__OnClickApRecoverBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  ScrPlayerStatus_o *v5; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  RecoverDlgComponent_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  v2 = this;
  if ( (byte_596D670 & 1) == 0 )
  {
    sub_2213A60(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickApRecoverBtn_b__144_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ScrPlayerStatus_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D670 = 1;
  }
  if ( v2->fields.mIsEnableApRecoverBtn && ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v4);
    TerminalPramsManager__PlaySystemSE(0, 0);
    ScrPlayerStatus__SetVisibilitySpotWebView(v5, 0, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (RecoverDlgComponent_CallbackFunc_o *)sub_2213CCC(RecoverDlgComponent_CallbackFunc_TypeInfo);
    RecoverDlgComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)v2,
      Method_ScrPlayerStatus__OnClickApRecoverBtn_b__144_0__,
      0);
    if ( !Instance )
      sub_2213CDC(v9, v10);
    CommonUI__OpenApRecoverItemListDialog((CommonUI_o *)Instance, 0, v8, 1, 0);
  }
}


void ScrPlayerStatus__OnClickCloseNextExp(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BaseDialog_o *nextExpDialog; // x19
  ScrPlayerStatus___c_c *v7; // x0
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x8
  System_Action_o *_9__154_0; // x20
  Il2CppObject *v10; // x21
  struct ScrPlayerStatus___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D679 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus___c__OnClickCloseNextExp_b__154_0__);
    sub_2213A60(&ScrPlayerStatus___c_TypeInfo);
    byte_596D679 = 1;
  }
  if ( !this->fields.isDisableCloseNextExpBtn )
  {
    this->fields.isDisableCloseNextExpBtn = 1;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    TerminalPramsManager__PlaySystemSE(0, 0);
    nextExpDialog = this->fields.nextExpDialog;
    v7 = ScrPlayerStatus___c_TypeInfo;
    if ( !*(&ScrPlayerStatus___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v4, v5);
      v7 = ScrPlayerStatus___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__154_0 = static_fields->__9__154_0;
    if ( !_9__154_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v4, v5);
        static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__154_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__154_0, v10, Method_ScrPlayerStatus___c__OnClickCloseNextExp_b__154_0__, 0);
      v11 = ScrPlayerStatus___c_TypeInfo->static_fields;
      v11->__9__154_0 = _9__154_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v11->__9__154_0,
        (int32_t)_9__154_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    if ( !nextExpDialog )
      sub_2213CDC(v7, v4);
    BaseDialog__Close(nextExpDialog, _9__154_0, 0);
  }
}


void ScrPlayerStatus__OnClickCompleteMissionBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x8
  ScrPlayerStatus_o *v7; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x19
  long double v20; // q0
  _QWORD *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  System_String_o *v25; // x19
  __int64 v26; // x2
  CommonUI_o *v27; // x20
  ScrPlayerStatus___c_c *v28; // x8
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x9
  System_Action_o *_9__140_1; // x21
  Il2CppObject *v31; // x22
  struct ScrPlayerStatus___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  v2 = (Il2CppObject *)this;
  if ( (byte_596D66C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Array_Empty_object___);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__140_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus___c__OnClickCompleteMissionBtn_b__140_1__);
    sub_2213A60(&ScrPlayerStatus___c_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&StringLiteral_3853/*"COMPLETE_MISSION_END"*/);
    byte_596D66C = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
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
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v6 = **(_QWORD **)&Instance[1].fields._DispLog;
      if ( v6 )
      {
        Instance = *(DataManager_o **)(v6 + 264);
        if ( Instance )
        {
          ScrTerminalMap__DestroyEventActionEffect((ScrTerminalMap_o *)Instance, 0);
          ScrPlayerStatus__SetVisibilitySpotWebView(v7, 0, v8);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
          TerminalPramsManager__PlaySystemSE(0, 0);
          v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v14 = AvalonSceneManager_TypeInfo;
          if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11, v12);
            v14 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
          v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v16, v2, Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__140_0__, 0);
          if ( v13 )
          {
            CommonUI__maskFadeout((CommonUI_o *)v13, 1, DEFAULT_FADE_TIME, v16, 0);
            return;
          }
        }
      }
LABEL_40:
      sub_2213CDC(Instance, v4);
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3853/*"COMPLETE_MISSION_END"*/, 0);
    v21 = Method_System_Array_Empty_object___;
    v22 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v22 )
    {
      sub_224B964(Method_System_Array_Empty_object___);
      v22 = v21[7];
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
      v23 = sub_224B908(v20);
    if ( !*(_DWORD *)(v23 + 228) )
      *(__n128 *)&v20 = j_il2cpp_runtime_class_init_0(v23, v17, v18);
    v24 = *(_QWORD *)(v21[7] + 16LL);
    if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
      v24 = sub_224B908(v20);
    v25 = System_String__Format_75698016(v19, **(System_Object_array ***)(v24 + 184), 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = (CommonUI_o *)Instance;
    v28 = ScrPlayerStatus___c_TypeInfo;
    if ( !*(&ScrPlayerStatus___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v4, v26);
      v28 = ScrPlayerStatus___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__140_1 = static_fields->__9__140_1;
    if ( !_9__140_1 )
    {
      if ( !*(&v28->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v28, v4, v26);
        static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__140_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__140_1, v31, Method_ScrPlayerStatus___c__OnClickCompleteMissionBtn_b__140_1__, 0);
      v32 = ScrPlayerStatus___c_TypeInfo->static_fields;
      v32->__9__140_1 = _9__140_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v32->__9__140_1,
        (int32_t)_9__140_1,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( !v27 )
      goto LABEL_40;
    CommonUI__OpenNotificationDialog(v27, 0, v25, _9__140_1, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
  }
}


void ScrPlayerStatus__OnClickDailyMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v7; // x2
  UnityEngine_GameObject_c *v8; // x8
  ScrPlayerStatus_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_596D66D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickDailyMissionInfoBtn_b__141_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D66D = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v7);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v8 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v8 )
      goto LABEL_25;
    genericContainerHandle = (ScrTerminalMap_o *)v8->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    ScrPlayerStatus__SetVisibilitySpotWebView(v9, 0, v10);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13, v14);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v18, v2, Method_ScrPlayerStatus__OnClickDailyMissionInfoBtn_b__141_0__, 0);
    if ( !Instance )
LABEL_25:
      sub_2213CDC(genericContainerHandle, v3);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0);
  }
}


void ScrPlayerStatus__OnClickLimitedMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v7; // x2
  UnityEngine_GameObject_c *v8; // x8
  ScrPlayerStatus_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_596D66F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickLimitedMissionInfoBtn_b__143_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D66F = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v7);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v8 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v8 )
      goto LABEL_25;
    genericContainerHandle = (ScrTerminalMap_o *)v8->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    ScrPlayerStatus__SetVisibilitySpotWebView(v9, 0, v10);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13, v14);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v18, v2, Method_ScrPlayerStatus__OnClickLimitedMissionInfoBtn_b__143_0__, 0);
    if ( !Instance )
LABEL_25:
      sub_2213CDC(genericContainerHandle, v3);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0);
  }
}


void ScrPlayerStatus__OnClickLocation(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_596D67A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D67A = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  TerminalPramsManager__PlaySystemSE(0, 0);
  this->fields.isLocationBusy = 1;
  if ( AndroidPermissionManager__EnabledRuntimePermission(0) )
    ScrPlayerStatus__ShowEnabledRuntimePermissionDialog(this, v4);
  else
    ScrPlayerStatus__ShowDisabledRuntimePermissionDialog(this, v4);
}


void ScrPlayerStatus__OnClickMasterFaceBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v7; // x2
  UnityEngine_GameObject_c *v8; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  ScrPlayerStatus_o *v11; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  UnityEngine_GameObject_c *v22; // x8
  void *image; // x8

  v2 = (Il2CppObject *)this;
  if ( (byte_596D672 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickMasterFaceBtn_b__146_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D672 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_35;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_35;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v7);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v8 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v8 )
      goto LABEL_35;
    genericContainerHandle = (ScrTerminalMap_o *)v8->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_35;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
    TerminalPramsManager__PlaySystemSE(0, 0);
    ScrPlayerStatus__SetVisibilitySpotWebView(v11, 0, v12);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13, v14);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v18, v2, Method_ScrPlayerStatus__OnClickMasterFaceBtn_b__146_0__, 0);
    if ( !Instance )
      goto LABEL_35;
    v19 = CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0);
    if ( ScrPlayerStatus__IsExRoomActive((ScrPlayerStatus_o *)v19, v20) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v21);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v21);
        genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      }
      v22 = genericContainerHandle->fields.subRootGimmickP->klass;
      if ( v22 )
      {
        image = v22[1]._1.image;
        if ( image )
        {
          genericContainerHandle = (ScrTerminalMap_o *)*((_QWORD *)image + 6);
          if ( genericContainerHandle )
          {
            ExRoomServant__StopVoice((ExRoomServant_o *)genericContainerHandle, 0);
            return;
          }
        }
      }
LABEL_35:
      sub_2213CDC(genericContainerHandle, v3);
    }
  }
}


void ScrPlayerStatus__OnClickMasterMissionBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v7; // x2
  UnityEngine_GameObject_c *v8; // x8
  ScrPlayerStatus_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_596D667 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__135_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D667 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v7);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v8 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v8 )
      goto LABEL_25;
    genericContainerHandle = (ScrTerminalMap_o *)v8->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    ScrPlayerStatus__SetVisibilitySpotWebView(v9, 0, v10);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13, v14);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v18, v2, Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__135_0__, 0);
    if ( !Instance )
LABEL_25:
      sub_2213CDC(genericContainerHandle, v3);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0);
  }
}


void ScrPlayerStatus__OnClickOpenNextExp(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *nextExpValLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_Action_c *v7; // x0
  BaseDialog_o *nextExpDialog; // x20
  System_Action_o *v9; // x21

  if ( (byte_596D678 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickOpenNextExp_b__153_0__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    byte_596D678 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  TerminalPramsManager__PlaySystemSE(0, 0);
  nextExpValLabel = this->fields.nextExpValLabel;
  v5 = System_Int64__ToString_77143864((int64_t)&this->fields.nextExpVal, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
  if ( !nextExpValLabel
    || (UILabel__set_text(nextExpValLabel, v5, 0),
        v7 = System_Action_TypeInfo,
        nextExpDialog = this->fields.nextExpDialog,
        this->fields.isDisableCloseNextExpBtn = 1,
        v9 = (System_Action_o *)sub_2213CCC(v7),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_ScrPlayerStatus__OnClickOpenNextExp_b__153_0__, 0),
        !nextExpDialog) )
  {
    sub_2213CDC(v5, v6);
  }
  BaseDialog__Open(nextExpDialog, v9, 0, 0, 0);
}


void ScrPlayerStatus__OnClickRpRecoverBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  ScrPlayerStatus_o *v5; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  RecoverDlgComponent_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  v2 = this;
  if ( (byte_596D671 & 1) == 0 )
  {
    sub_2213A60(&RecoverDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickRpRecoverBtn_b__145_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ScrPlayerStatus_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D671 = 1;
  }
  if ( v2->fields.mIsEnableRpRecoverBtn && ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v4);
    TerminalPramsManager__PlaySystemSE(0, 0);
    ScrPlayerStatus__SetVisibilitySpotWebView(v5, 0, v6);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (RecoverDlgComponent_CallbackFunc_o *)sub_2213CCC(RecoverDlgComponent_CallbackFunc_TypeInfo);
    RecoverDlgComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)v2,
      Method_ScrPlayerStatus__OnClickRpRecoverBtn_b__145_0__,
      0);
    if ( !Instance )
      sub_2213CDC(v9, v10);
    CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)Instance, 0, v8, 1, 0);
  }
}


void ScrPlayerStatus__OnClickSpellBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  _BOOL8 IsTouchable; // x0
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  struct CommandSpellWindowComponent_o *commandSpellWindow; // x0

  v2 = this;
  if ( (byte_596D673 & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_2213A60(&Method_ScrPlayerStatus_OnClickSpellBtn__);
    byte_596D673 = 1;
  }
  IsTouchable = ScrPlayerStatus__IsTouchable(this, method);
  if ( IsTouchable )
  {
    if ( v2->fields.isRevocationSpell )
    {
      v5 = Method_ScrPlayerStatus_OnClickSpellBtn__;
      if ( (*((_BYTE *)Method_ScrPlayerStatus_OnClickSpellBtn__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_ScrPlayerStatus_OnClickSpellBtn__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
    }
    else
    {
      ScrPlayerStatus__SetVisibilitySpotWebView((ScrPlayerStatus_o *)IsTouchable, 0, v4);
      v7 = Method_ScrPlayerStatus_OnClickSpellBtn__;
      if ( (*((_BYTE *)Method_ScrPlayerStatus_OnClickSpellBtn__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_ScrPlayerStatus_OnClickSpellBtn__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
      commandSpellWindow = v2->fields.commandSpellWindow;
      if ( !commandSpellWindow )
        sub_2213CDC(0, v9);
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
  __int64 v4; // x2
  ScrTerminalMap_o *genericContainerHandle; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v7; // x2
  UnityEngine_GameObject_c *v8; // x8
  ScrPlayerStatus_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_596D66E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickWeeklyMissionInfoBtn_b__142_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D66E = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    genericContainerHandle = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
    if ( !genericContainerHandle )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(genericContainerHandle, 0);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v7);
      genericContainerHandle = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v8 = genericContainerHandle->fields.subRootGimmickP->klass;
    if ( !v8 )
      goto LABEL_25;
    genericContainerHandle = (ScrTerminalMap_o *)v8->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    ScrPlayerStatus__SetVisibilitySpotWebView(v9, 0, v10);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    TerminalPramsManager__PlaySystemSE(0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13, v14);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v18, v2, Method_ScrPlayerStatus__OnClickWeeklyMissionInfoBtn_b__142_0__, 0);
    if ( !Instance )
LABEL_25:
      sub_2213CDC(genericContainerHandle, v3);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0);
  }
}


void ScrPlayerStatus__OnCloseSpellWindow(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  __int64 v3; // x1
  BattleWindowComponent_o *commandSpellWindow; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ScrPlayerStatus_o *v7; // x0
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_596D674 & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_2213A60(&Method_ScrPlayerStatus_OnCloseSpellWindow__);
    byte_596D674 = 1;
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
        v5 = (_QWORD *)sub_2213A78(Method_ScrPlayerStatus_OnCloseSpellWindow__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
      ScrPlayerStatus__SetVisibilitySpotWebView(v7, 1, v8);
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
      sub_2213CDC(commandSpellWindow, v3);
    }
  }
}


void ScrPlayerStatus__OnDestroy(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_596D662 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D662 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v3);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v3);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseUsrPresentList((CommonUI_o *)Instance, 0);
        return;
      }
LABEL_15:
      sub_2213CDC(Instance, v8);
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


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__OpenCompleteMission(
        ScrPlayerStatus_o *this,
        System_Action_o *callback,
        int32_t typeIndex,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  ScrPlayerStatus_o *v13; // x0
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  bool IsParticleActive; // w0
  __int64 v20; // x2
  System_String_c *v21; // x8
  Il2CppObject *Instance; // x21
  CompleteMissionComponent_ClickDelegate_o *v23; // x22
  System_Action_o *v24; // x23
  __int64 v25; // x2
  TerminalSceneComponent_c *v26; // x0

  if ( (byte_596D66B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CompleteMissionComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus_ExitCompleteMission__);
    sub_2213A60(&Method_ScrPlayerStatus__OpenCompleteMission_b__139_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D66B = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, callback, *(_QWORD *)&typeIndex);
  SoundManager__stopSe(0.0, 0);
  this->fields.mAfterCloseCompleteMission = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAfterCloseCompleteMission,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ScrPlayerStatus__SetVisibilitySpotWebView(v13, 0, v14);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v16);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v16);
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
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v20);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v20);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v21 = genericContainerHandle->fields.particleAssetName->klass;
    if ( v21 )
    {
      genericContainerHandle = (TitleInfoControl_o *)v21->_2.genericContainerHandle;
      if ( genericContainerHandle )
      {
        TitleInfoControl__setDispParticleObj(genericContainerHandle, 0, 0);
        goto LABEL_23;
      }
    }
LABEL_32:
    sub_2213CDC(genericContainerHandle, v15);
  }
LABEL_23:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (CompleteMissionComponent_ClickDelegate_o *)sub_2213CCC(CompleteMissionComponent_ClickDelegate_TypeInfo);
  CompleteMissionComponent_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)this,
    Method_ScrPlayerStatus_ExitCompleteMission__,
    0);
  v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ScrPlayerStatus__OpenCompleteMission_b__139_0__, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v23, v24, typeIndex, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v25);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v26 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v25);
    v26 = TerminalSceneComponent_TypeInfo;
  }
  genericContainerHandle = (TitleInfoControl_o *)v26->static_fields->mInstance;
  if ( !genericContainerHandle )
    goto LABEL_32;
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)genericContainerHandle, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__OpenMasterMission(
        ScrPlayerStatus_o *this,
        System_Action_o *callback,
        int32_t typeIndex,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.isFromCompleteMission = 0;
  this->fields.mAfterCloseMasterMission = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAfterCloseMasterMission,
    (int32_t)callback,
    *(System_String_o **)&typeIndex,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ScrPlayerStatus__OpenMasterMission_43791132(this, typeIndex, v10);
}


void ScrPlayerStatus__OpenMasterMissionFromCompleteMission(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.isFromCompleteMission = 1;
  ScrPlayerStatus__OpenMasterMission_43791132(this, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__OpenMasterMission_43791132(ScrPlayerStatus_o *this, int32_t typeIndex, const MethodInfo *method)
{
  ScrPlayerStatus_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  bool IsParticleActive; // w0
  __int64 v12; // x2
  System_String_c *v13; // x8
  Il2CppObject *Instance; // x21
  MasterMissionComponent_ClickDelegate_o *v15; // x22
  System_Action_o *v16; // x23
  __int64 v17; // x2
  TerminalSceneComponent_c *v18; // x0
  __int64 v19; // x2
  System_String_c *v20; // x8
  _BOOL8 IsGrandQuestActive; // x0
  __int64 v22; // x2
  System_String_c *v23; // x8
  __int64 v24; // x8
  __int64 v25; // x2
  System_String_c *v26; // x8
  Il2CppMethodPointer methodPtr; // x8

  if ( (byte_596D666 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&MasterMissionComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus_ExitMasterMission__);
    sub_2213A60(&Method_ScrPlayerStatus__OpenMasterMission_b__134_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D666 = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&typeIndex, method);
  SoundManager__stopSe(0.0, 0);
  ScrPlayerStatus__SetVisibilitySpotWebView(v5, 0, v6);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.particleAssetName->klass;
  if ( !klass )
    goto LABEL_59;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_59;
  IsParticleActive = TitleInfoControl__get_IsParticleActive(genericContainerHandle, 0);
  this->fields.isTerminalEffectDisplay = IsParticleActive;
  if ( IsParticleActive )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v12);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v12);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v13 = genericContainerHandle->fields.particleAssetName->klass;
    if ( !v13 )
      goto LABEL_59;
    genericContainerHandle = (TitleInfoControl_o *)v13->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_59;
    TitleInfoControl__setDispParticleObj(genericContainerHandle, 0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (MasterMissionComponent_ClickDelegate_o *)sub_2213CCC(MasterMissionComponent_ClickDelegate_TypeInfo);
  MasterMissionComponent_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_ScrPlayerStatus_ExitMasterMission__, 0);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ScrPlayerStatus__OpenMasterMission_b__134_0__, 0);
  if ( !Instance )
    goto LABEL_59;
  CommonUI__OpenMasterMission((CommonUI_o *)Instance, v15, v16, typeIndex, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v17);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v18 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v17);
    v18 = TerminalSceneComponent_TypeInfo;
  }
  genericContainerHandle = (TitleInfoControl_o *)v18->static_fields->mInstance;
  if ( !genericContainerHandle )
    goto LABEL_59;
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)genericContainerHandle, 0, 0);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v19);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v20 = genericContainerHandle->fields.particleAssetName->klass;
  if ( !v20 )
    goto LABEL_59;
  genericContainerHandle = *(TitleInfoControl_o **)&v20->_2.element_size;
  if ( !genericContainerHandle )
    goto LABEL_59;
  IsGrandQuestActive = ScrTerminalListTop__IsGrandQuestActive((ScrTerminalListTop_o *)genericContainerHandle, 0);
  if ( IsGrandQuestActive )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v22);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v22);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v23 = genericContainerHandle->fields.particleAssetName->klass;
    if ( !v23 )
      goto LABEL_59;
    v24 = *(_QWORD *)&v23->_2.element_size;
    if ( !v24 )
      goto LABEL_59;
    genericContainerHandle = *(TitleInfoControl_o **)(v24 + 848);
    if ( !genericContainerHandle )
      goto LABEL_59;
    GrandQuestRootComponent__SetDispServant((GrandQuestRootComponent_o *)genericContainerHandle, 0, 0);
  }
  if ( ScrPlayerStatus__IsExRoomActive((ScrPlayerStatus_o *)IsGrandQuestActive, v7) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v25);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v25);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v26 = genericContainerHandle->fields.particleAssetName->klass;
    if ( v26 )
    {
      methodPtr = v26->vtable._4_CompareTo.methodPtr;
      if ( methodPtr )
      {
        BasicHelper__SetActiveSafely(*((UnityEngine_Component_o **)methodPtr + 6), 0, 0);
        return;
      }
    }
LABEL_59:
    sub_2213CDC(genericContainerHandle, v7);
  }
}


void ScrPlayerStatus__OpenMasterProfile(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x19
  MstProfileComponent_ClickDelegate_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  ScrPlayerStatus___c_c *mInstance; // x0
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x8
  System_Action_o *_9__151_0; // x21
  Il2CppObject *v11; // x22
  struct ScrPlayerStatus___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x2
  TerminalSceneComponent_c *v20; // x0

  if ( (byte_596D676 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&MstProfileComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus_ExitMasterProfile__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus___c__OpenMasterProfile_b__151_0__);
    sub_2213A60(&ScrPlayerStatus___c_TypeInfo);
    byte_596D676 = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
  SoundManager__stopSe(0.0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (MstProfileComponent_ClickDelegate_o *)sub_2213CCC(MstProfileComponent_ClickDelegate_TypeInfo);
  MstProfileComponent_ClickDelegate___ctor(v5, (Il2CppObject *)this, Method_ScrPlayerStatus_ExitMasterProfile__, 0);
  mInstance = ScrPlayerStatus___c_TypeInfo;
  if ( !*(&ScrPlayerStatus___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v6, v7);
    mInstance = ScrPlayerStatus___c_TypeInfo;
  }
  static_fields = mInstance->static_fields;
  _9__151_0 = static_fields->__9__151_0;
  if ( !_9__151_0 )
  {
    if ( !*(&mInstance->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(mInstance, v6, v7);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__151_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__151_0, v11, Method_ScrPlayerStatus___c__OpenMasterProfile_b__151_0__, 0);
    v12 = ScrPlayerStatus___c_TypeInfo->static_fields;
    v12->__9__151_0 = _9__151_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__151_0, (int32_t)_9__151_0, v13, v14, v15, v16, v17, v18);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenMasterProfile((CommonUI_o *)Instance, v5, _9__151_0, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v19);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v20 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v19);
    v20 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (ScrPlayerStatus___c_c *)v20->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_2213CDC(mInstance, v6);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int64_t miMasterUserEquipID; // x8
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x2
  void *monitor; // x22
  intptr_t m_CachedPtr; // x23
  int32_t v25; // w22
  UnityEngine_GameObject_o *mcFaceObjP; // x23
  int32_t meMasterGender; // w24
  System_Action_o *v28; // x25
  struct UIMasterFaceTexture_o *Prefab_47632340; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_596D68E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_2213A60(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus_mfFaceMngCallback__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_596D68E = 1;
  }
  mcMasterCurTexP = (UnityEngine_Object_o *)this->fields.mcMasterCurTexP;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&overWriteImageId, method);
  p_mcMasterCurTexP = &this->fields.mcMasterCurTexP;
  if ( UnityEngine_Object__op_Implicit(mcMasterCurTexP, 0) )
  {
    MasterData_object = (UnityEngine_Component_o *)*p_mcMasterCurTexP;
    if ( !*p_mcMasterCurTexP )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(MasterData_object, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_mcMasterCurTexP = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mcMasterCurTexP, 0, v13, v14, v15, v16, v17, v18);
  }
  miMasterUserEquipID = this->fields.miMasterUserEquipID;
  this->fields.overwriteMasterIconId = overWriteImageId;
  if ( miMasterUserEquipID < 1 )
  {
    v25 = 0;
    goto LABEL_22;
  }
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = sub_224B908(v8);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_WORD *)(v21 + 309) & 1) == 0 )
    v21 = sub_224B908(v8);
  MasterData_object = **(UnityEngine_Component_o ***)(v21 + 184);
  if ( !MasterData_object
    || (MasterData_object = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)MasterData_object,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0
    || (MasterData_object = (UnityEngine_Component_o *)DataMasterBase_object__object__long___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                         this->fields.miMasterUserEquipID,
                                                         (const MethodInfo_3F13190 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__)) == 0 )
  {
LABEL_23:
    sub_2213CDC(MasterData_object, v7);
  }
  monitor = MasterData_object[1].monitor;
  m_CachedPtr = MasterData_object[1].fields.m_CachedPtr;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v22);
  *(_QWORD *)&v36.fields.currentCryptoKey = monitor;
  *(_QWORD *)&v36.fields.fakeValue = m_CachedPtr;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
LABEL_22:
  mcFaceObjP = this->fields.mcFaceObjP;
  meMasterGender = this->fields.meMasterGender;
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_ScrPlayerStatus_mfFaceMngCallback__, 0);
  Prefab_47632340 = MasterFaceManager__CreatePrefab_47632340(
                      mcFaceObjP,
                      1,
                      meMasterGender,
                      v25,
                      1,
                      v28,
                      overWriteImageId,
                      0);
  this->fields.mcMasterCurTexP = Prefab_47632340;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mcMasterCurTexP,
    (int32_t)Prefab_47632340,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void ScrPlayerStatus__SetAfterCloseMasterMissionAct(
        ScrPlayerStatus_o *this,
        System_Action_o *act,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mAfterCloseMasterMission = act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAfterCloseMasterMission,
    (int32_t)act,
    (System_String_o *)method,
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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppType *v8; // x22
  int64_t v9; // x21
  System_Type_o *TypeFromHandle; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t genderType; // w22
  System_Type_o *v14; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  int32_t v17; // w8
  int32_t Act; // w0
  int32_t actMax; // w8
  float v20; // s0
  int32_t CommandSpell; // w20
  int32_t Value; // w0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  ScrPlayerStatus_o *v25; // x0
  int64_t v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int64_t exp; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_596D660 & 1) == 0 )
  {
    sub_2213A60(&Gender_Type_var);
    sub_2213A60(&Gender_Type_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&StringLiteral_8971/*"MAX_COMMAND_SPELL"*/);
    byte_596D660 = 1;
  }
  exp = 0;
  if ( !entity )
    goto LABEL_17;
  v4->fields.miLevel = entity->fields.lv;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(entity, 0);
  v8 = Gender_Type_var;
  v9 = ActiveUserEquipId;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v6, v7);
  TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v8, 0);
  genderType = entity->fields.genderType;
  v14 = TypeFromHandle;
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v11, v12);
  this = (ScrPlayerStatus_o *)System_Enum__ToObject_77364592(v14, genderType, 0);
  if ( !this )
LABEL_17:
    sub_2213CDC(this, entity);
  if ( this->klass->_1.element_class == Gender_Type_TypeInfo->_1.element_class )
  {
    v17 = *(_DWORD *)j_il2cpp_object_unbox_0(this, Gender_Type_TypeInfo, v15, v16);
    if ( v4->fields.miMasterUserEquipID != v9 || v4->fields.meMasterGender != v17 )
    {
      v4->fields.miMasterUserEquipID = v9;
      v4->fields.isUpdateFaceTexture = 1;
      v4->fields.meMasterGender = v17;
    }
    UserGameEntity__getExpInfo(entity, &exp, &v4->fields.nextExpVal, &v4->fields.mfExpPar, 0);
    Act = UserGameEntity__getAct(entity, 0);
    actMax = entity->fields.actMax;
    v4->fields.miApNow = Act;
    v4->fields.miApMax = actMax;
    if ( Act < 1 )
      v20 = 0.0;
    else
      v20 = (float)Act / (float)actMax;
    v4->fields.mfApPar = v20;
    CommandSpell = UserGameEntity__getCommandSpell(entity, 0);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8971/*"MAX_COMMAND_SPELL"*/, 0);
    ScrPlayerStatus__mfSetSpell(v4, CommandSpell, Value, v23);
    ScrPlayerStatus__mfSetStoneAndFragment(v4, v24);
  }
  else
  {
    sub_221405C(this, Gender_Type_TypeInfo, v15, v16);
    ScrPlayerStatus__mfSetFaceID(v25, v26, v27, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__SetApRecoverBtnEnable(ScrPlayerStatus_o *this, bool is_enable, const MethodInfo *method)
{
  UIWidget_o *mApRecoverBtnSp; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mApRecoverBtnSp = (UIWidget_o *)this->fields.mApRecoverBtnSp;
  this->fields.mIsEnableApRecoverBtn = is_enable;
  if ( !mApRecoverBtnSp )
    sub_2213CDC(0, is_enable);
  v6.fields.r = 0.5;
  v6.fields.a = 1.0;
  if ( is_enable )
    v6.fields.r = 1.0;
  v6.fields.g = v6.fields.r;
  v6.fields.b = v6.fields.r;
  UIWidget__set_color(mApRecoverBtnSp, v6, 0);
}


void ScrPlayerStatus__SetCloseGiftAct(
        ScrPlayerStatus_o *this,
        System_Func_bool__bool__o *act,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct GiftButtonCtrl_o *mcGiftButtonP; // x0

  mcGiftButtonP = this->fields.mcGiftButtonP;
  if ( !mcGiftButtonP )
    sub_2213CDC(0, act);
  mcGiftButtonP->fields.OnGiftCloseAdditionalAction = act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&mcGiftButtonP->fields.OnGiftCloseAdditionalAction,
    (int32_t)act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScrPlayerStatus__SetLocationCheck(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  EventEntity_array *EnableEntityList; // x0
  __int64 *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x22
  Il2CppObject *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_String_o *v30; // x23
  System_String_o **v31; // x9
  System_String_o *v32; // x24
  System_String_o *v33; // x0
  _BOOL4 mIsAcceptedLocationEvent; // w25
  System_String_o *v35; // x20
  CampaignInfoDlg_onButtonDelgate_o *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x20
  System_String_o *v40; // x21
  System_String_o *v41; // x22
  System_Action_o *v42; // x0
  intptr_t *v43; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *v46; // x22
  System_String_o *v47; // x0
  System_Action_o *v48; // x23
  Il2CppObject *v49; // [xsp+40h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_596D67D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CampaignInfoMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventLocationCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__);
    sub_2213A60(&GeoLocation_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass160_0__SetLocationCheck_b__0__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass160_0__SetLocationCheck_b__1__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass160_0__SetLocationCheck_b__2__);
    sub_2213A60(&ScrPlayerStatus___c__DisplayClass160_0_TypeInfo);
    sub_2213A60(&StringLiteral_8652/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/);
    sub_2213A60(&StringLiteral_8646/*"LOCATION_CAMPAIGN_INFO_DLG_DECIDE"*/);
    sub_2213A60(&StringLiteral_8644/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/);
    sub_2213A60(&StringLiteral_8654/*"LOCATION_DLG_FAIL_TITLE"*/);
    sub_2213A60(&StringLiteral_8655/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/);
    sub_2213A60(&StringLiteral_8645/*"LOCATION_CAMPAIGN_INFO_DLG_CANCEL"*/);
    sub_2213A60(&StringLiteral_8648/*"LOCATION_DLG_DEVICE_OPTION_MESSAGE"*/);
    sub_2213A60(&StringLiteral_8647/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/);
    sub_2213A60(&CampaignInfoDlg_onButtonDelgate_TypeInfo);
    byte_596D67D = 1;
  }
  v49 = 0;
  entity = 0;
  v3 = sub_2213CCC(ScrPlayerStatus___c__DisplayClass160_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_39;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !*(&GeoLocation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo, v12, v13);
  if ( GeoLocation__IsLocationEnabledByUser(0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_39;
    EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 20, 0, 0, 0);
    *(_QWORD *)(v3 + 24) = EnableEntityList;
    v15 = (__int64 *)(v3 + 24);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)EnableEntityList, v16, v17, v18, v19, v20, v21);
    if ( !*(_QWORD *)(v3 + 24) )
      goto LABEL_39;
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 24) + 24LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventLocationCampaignMaster___);
      v22 = *v15;
      if ( !*v15 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v22 + 24) )
        sub_2213CE4(Instance);
      v23 = *(_QWORD *)(v22 + 32);
      if ( !v23 || !Instance )
        goto LABEL_39;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             *(_DWORD *)(v23 + 16),
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int__TryGetEntity__) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_39;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CampaignInfoMaster___);
        if ( !entity || !Instance )
          goto LABEL_39;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v49,
               (int32_t)entity[2].monitor,
               (const MethodInfo_3F10B80 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__) )
        {
          v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = v49;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8645/*"LOCATION_CAMPAIGN_INFO_DLG_CANCEL"*/, 0);
          if ( this->fields.mIsAcceptedLocationEvent )
            v31 = (System_String_o **)&StringLiteral_8644/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/;
          else
            v31 = (System_String_o **)&StringLiteral_8646/*"LOCATION_CAMPAIGN_INFO_DLG_DECIDE"*/;
          v32 = *v31;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
          v33 = LocalizationManager__Get(v32, 0);
          mIsAcceptedLocationEvent = this->fields.mIsAcceptedLocationEvent;
          v35 = v33;
          v36 = (CampaignInfoDlg_onButtonDelgate_o *)sub_2213CCC(CampaignInfoDlg_onButtonDelgate_TypeInfo);
          CampaignInfoDlg_onButtonDelgate___ctor(
            v36,
            (Il2CppObject *)v3,
            Method_ScrPlayerStatus___c__DisplayClass160_0__SetLocationCheck_b__1__,
            0);
          if ( v26 )
          {
            CommonUI__OpenCampaignInfoDialog(
              (CommonUI_o *)v26,
              (CampaignInfoEntity_o *)v27,
              v30,
              v35,
              !mIsAcceptedLocationEvent,
              v36,
              0);
            return;
          }
LABEL_39:
          sub_2213CDC(Instance, v5);
        }
      }
    }
    v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"LOCATION_DLG_FAIL_TITLE"*/, 0);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_8655/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, 0);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8647/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0);
    v41 = System_String__Concat_75651716(v46, v47, 0);
    v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v43 = &Method_ScrPlayerStatus___c__DisplayClass160_0__SetLocationCheck_b__2__;
  }
  else
  {
    v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8652/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/, 0);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"LOCATION_DLG_DEVICE_OPTION_MESSAGE"*/, 0);
    v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v43 = &Method_ScrPlayerStatus___c__DisplayClass160_0__SetLocationCheck_b__0__;
  }
  v48 = v42;
  System_Action___ctor(v42, (Il2CppObject *)v3, *v43, 0);
  if ( !v39 )
    goto LABEL_39;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v39, v40, v41, v48, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__SetLocationEventBtnShow(ScrPlayerStatus_o *this, bool onOff, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mLocationBtnRoot; // x0

  mLocationBtnRoot = this->fields.mLocationBtnRoot;
  if ( !mLocationBtnRoot )
    sub_2213CDC(0, onOff);
  UnityEngine_GameObject__SetActive(mLocationBtnRoot, onOff, 0);
}


void ScrPlayerStatus__SetOverwriteMasterInfo(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  int32_t WarId_k__BackingField; // w20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  WarAddMaster_o *v8; // x21
  WarAddEntity_o *PrioredEntity; // x0
  int v10; // w24
  struct System_String_o **p_overwriteStr; // x8
  struct System_String_o *v12; // x22
  int32_t PrioredID; // w21
  __int64 v14; // x23
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

  if ( (byte_596D68C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ScrPlayerStatus_OverwriteMasterInfo_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D68C = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  v8 = (WarAddMaster_o *)Master_object;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 20, WarId_k__BackingField, 0);
  if ( PrioredEntity )
  {
    v10 = PrioredEntity->fields.overwriteId - 1;
    p_overwriteStr = &PrioredEntity->fields.overwriteStr;
  }
  else
  {
    v10 = -1;
    p_overwriteStr = (struct System_String_o **)&StringLiteral_1/*""*/;
  }
  v12 = *p_overwriteStr;
  PrioredID = WarAddMaster__GetPrioredID(v8, 21, WarId_k__BackingField, 0, 0);
  v14 = sub_2213CCC(ScrPlayerStatus_OverwriteMasterInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  *(_DWORD *)(v14 + 16) = WarId_k__BackingField;
  *(_DWORD *)(v14 + 20) = PrioredID;
  *(_DWORD *)(v14 + 24) = v10;
  *(_QWORD *)(v14 + 32) = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 32), (int32_t)v12, v15, v16, v17, v18, v19, v20);
  this->fields.overwriteMasterInfo = (struct ScrPlayerStatus_OverwriteMasterInfo_o *)v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.overwriteMasterInfo, v14, v21, v22, v23, v24, v25, v26);
}


void ScrPlayerStatus__SetRecoverAct(ScrPlayerStatus_o *this, System_Action_o *act, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mRecoverAct = act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mRecoverAct,
    (int32_t)act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__SetRpRecoverBtnEnable(ScrPlayerStatus_o *this, bool is_enable, const MethodInfo *method)
{
  UIWidget_o *mRpRecoverBtnSp; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mRpRecoverBtnSp = (UIWidget_o *)this->fields.mRpRecoverBtnSp;
  this->fields.mIsEnableRpRecoverBtn = is_enable;
  if ( !mRpRecoverBtnSp )
    sub_2213CDC(0, is_enable);
  v6.fields.r = 0.5;
  v6.fields.a = 1.0;
  if ( is_enable )
    v6.fields.r = 1.0;
  v6.fields.g = v6.fields.r;
  v6.fields.b = v6.fields.r;
  UIWidget__set_color(mRpRecoverBtnSp, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__SetVisibilitySpotWebView(ScrPlayerStatus_o *this, bool enable, const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  ScrTerminalMap_o *v8; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x2
  UnityEngine_GameObject_c *v12; // x8

  if ( (byte_596D6AB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D6AB = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable, method);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v7);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v8 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v7);
      v8 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v8->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_32;
    v10 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v11);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v8 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v11);
        v8 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      }
      v12 = v8->fields.subRootGimmickP->klass;
      if ( v12 )
      {
        v8 = *(ScrTerminalMap_o **)&v12->_2.static_fields_size;
        if ( v8 )
        {
          ScrTerminalMap__SetVisibilitySpotWebView(v8, enable, 0, 0);
          return;
        }
      }
LABEL_32:
      sub_2213CDC(v8, v6);
    }
  }
}


void ScrPlayerStatus__SetupDispRaidPoint(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  bool IsBPEnable; // w8
  const MethodInfo *v6; // x2

  if ( (byte_596D685 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D685 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_11;
  IsBPEnable = EventMaster__IsBPEnable((EventMaster_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.rpRoot;
  this->fields.isBPEvent = IsBPEnable;
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
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
    sub_2213CDC(Instance, v4);
  }
}


void ScrPlayerStatus__SetupExRoomLayout(ScrPlayerStatus_o *this, bool isExRoom, const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.masterMissionBtnColl, !isExRoom, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.mcGiftButtonP, !isExRoom, 0);
}


void ScrPlayerStatus__SetupGradeIcon(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserGameEntity_o *userGameEntity; // x19
  int32_t Kind_47388588; // w21
  System_String_o *MainMstIconBgImage; // x0
  __int64 v7; // x1
  System_String_o *v8; // x19
  __int64 v9; // x2
  UISprite_o *masterIconBG; // x20
  __int64 v11; // x8
  UIAtlas_o *v12; // x21

  if ( (byte_596D684 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Grade_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D684 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !*(&Grade_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method, v2);
  Kind_47388588 = Grade__GetKind_47388588(userGameEntity, 0);
  MainMstIconBgImage = Grade__GetMainMstIconBgImage(Kind_47388588, 0);
  if ( !this->fields.masterIconGrade )
    goto LABEL_16;
  v8 = MainMstIconBgImage;
  UserGradeComponent__Set(this->fields.masterIconGrade, Kind_47388588, 0);
  masterIconBG = this->fields.masterIconBG;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v9);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  MainMstIconBgImage = (System_String_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v9);
    MainMstIconBgImage = (System_String_o *)TerminalSceneComponent_TypeInfo;
  }
  v11 = **(_QWORD **)&MainMstIconBgImage[7].fields;
  if ( !v11 )
LABEL_16:
    sub_2213CDC(MainMstIconBgImage, v7);
  v12 = *(UIAtlas_o **)(v11 + 304);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v9);
  AtlasManager__SetGradeBase(masterIconBG, v8, v12, 0);
}


void ScrPlayerStatus__ShowDisabledRuntimePermissionDialog(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrPlayerStatus_c *v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x20
  TermsOfUseDlg_CallbackFunc_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_596D67C & 1) == 0 )
  {
    sub_2213A60(&TermsOfUseDlg_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__ShowDisabledRuntimePermissionDialog_b__157_0__);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D67C = 1;
  }
  v4 = ScrPlayerStatus_TypeInfo;
  if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, method, v2);
    v4 = ScrPlayerStatus_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v4->static_fields->LOCATION_TOS_AGREED_KEY, -1, 0) == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (TermsOfUseDlg_CallbackFunc_o *)sub_2213CCC(TermsOfUseDlg_CallbackFunc_TypeInfo);
    TermsOfUseDlg_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ScrPlayerStatus__ShowDisabledRuntimePermissionDialog_b__157_0__,
      0);
    if ( !Instance )
      sub_2213CDC(v8, v9);
    CommonUI__OpenLocationTermsOfUseDlg((CommonUI_o *)Instance, v7, 1, 0);
  }
  else
  {
    ScrPlayerStatus__SetLocationCheck(this, v5);
  }
}


void ScrPlayerStatus__ShowEnabledRuntimePermissionDialog(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  bool v19; // w21
  bool ShouldShowRequestPermissionRationale; // w0
  const MethodInfo *v21; // x1
  Il2CppObject *Instance; // x19
  TermsOfUseDlg_CallbackFunc_o *v23; // x21

  if ( (byte_596D67B & 1) == 0 )
  {
    sub_2213A60(&TermsOfUseDlg_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass156_0__ShowEnabledRuntimePermissionDialog_b__0__);
    sub_2213A60(&ScrPlayerStatus___c__DisplayClass156_0_TypeInfo);
    sub_2213A60(&StringLiteral_17472/*"android.permission.ACCESS_FINE_LOCATION"*/);
    byte_596D67B = 1;
  }
  v3 = sub_2213CCC(ScrPlayerStatus___c__DisplayClass156_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = StringLiteral_17472/*"android.permission.ACCESS_FINE_LOCATION"*/;
  *(_QWORD *)(v3 + 16) = StringLiteral_17472/*"android.permission.ACCESS_FINE_LOCATION"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), v12, v13, v14, v15, v16, v17, v18);
  v19 = AndroidPermissionManager__CheckPermission(*(System_String_o **)(v3 + 16), 0);
  ShouldShowRequestPermissionRationale = AndroidPermissionManager__ShouldShowRequestPermissionRationale(
                                           *(System_String_o **)(v3 + 16),
                                           0);
  if ( !v19 && !ShouldShowRequestPermissionRationale )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = (TermsOfUseDlg_CallbackFunc_o *)sub_2213CCC(TermsOfUseDlg_CallbackFunc_TypeInfo);
    TermsOfUseDlg_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)v3,
      Method_ScrPlayerStatus___c__DisplayClass156_0__ShowEnabledRuntimePermissionDialog_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__OpenLocationTermsOfUseDlg((CommonUI_o *)Instance, v23, 0, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(v4, v5);
  }
  ScrPlayerStatus__SetLocationCheck(this, v21);
}


void ScrPlayerStatus__SortLimitedMstMissionViewList(
        System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **list,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x2
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v8; // x21
  ScrPlayerStatus___c_c *v9; // x0
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__188_0; // x22
  Il2CppObject *v12; // x23
  struct ScrPlayerStatus___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x21
  System_Func_object__int__o *v21; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x21
  System_Func_object__long__o *v23; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596D695 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_MasterMissionComponent_MasterMissionInfoItem__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_MasterMissionComponent_MasterMissionInfoItem___);
    sub_2213A60(&System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo);
    sub_2213A60(&System_Func_MasterMissionComponent_MasterMissionInfoItem__long__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus___c__SortLimitedMstMissionViewList_b__188_0__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass188_0__SortLimitedMstMissionViewList_b__1__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass188_0__SortLimitedMstMissionViewList_b__2__);
    sub_2213A60(&ScrPlayerStatus___c__DisplayClass188_0_TypeInfo);
    sub_2213A60(&ScrPlayerStatus___c_TypeInfo);
    byte_596D695 = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(ScrPlayerStatus___c__DisplayClass188_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !*list )
    goto LABEL_16;
  if ( (*list)->fields._size < 2 )
    return;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
LABEL_16:
    sub_2213CDC(Time, v5);
  v8 = *list;
  v3[1].klass = (Il2CppClass *)Time;
  v9 = ScrPlayerStatus___c_TypeInfo;
  if ( !*(&ScrPlayerStatus___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v5, v7);
    v9 = ScrPlayerStatus___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__188_0 = (System_Func_object__int__o *)static_fields->__9__188_0;
  if ( !_9__188_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v5, v7);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__188_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__188_0,
      v12,
      Method_ScrPlayerStatus___c__SortLimitedMstMissionViewList_b__188_0__,
      0);
    v13 = ScrPlayerStatus___c_TypeInfo->static_fields;
    v13->__9__188_0 = (struct System_Func_MasterMissionComponent_MasterMissionInfoItem__int__o *)_9__188_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__188_0, (int32_t)_9__188_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__TKey__o *)_9__188_0,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_MasterMissionComponent_MasterMissionInfoItem__int___);
  v21 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo);
  System_Func_object__int____ctor(
    v21,
    v3,
    Method_ScrPlayerStatus___c__DisplayClass188_0__SortLimitedMstMissionViewList_b__1__,
    0);
  v22 = System_Linq_Enumerable__ThenBy_object__int_(
          v20,
          (System_Func_TSource__TKey__o *)v21,
          (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__int___);
  v23 = (System_Func_object__long__o *)sub_2213CCC(System_Func_MasterMissionComponent_MasterMissionInfoItem__long__TypeInfo);
  System_Func_object__long____ctor(
    v23,
    v3,
    Method_ScrPlayerStatus___c__DisplayClass188_0__SortLimitedMstMissionViewList_b__2__,
    0);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v22,
                                                               (System_Func_TSource__TKey__o *)v23,
                                                               (const MethodInfo_389ABC4 *)Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__long___);
  v25 = (System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v24,
                                                                                             (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_MasterMissionComponent_MasterMissionInfoItem___);
  *list = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)list, (int32_t)v25, v26, v27, v28, v29, v30, v31);
}


void ScrPlayerStatus__Start(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mTargetFsm; // x21
  Il2CppObject *Component_object; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596D65F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D65F = 1;
  }
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(0, mTargetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mTargetFsm,
      (int32_t)Component_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
}


void ScrPlayerStatus__Update(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserGameEntity_o *userGameEntity; // x0
  ScrPlayerBP_o *rpRoot; // x8
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
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
  bool v24; // w0
  const MethodInfo *v25; // x1
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Time; // x1
  const MethodInfo *v29; // x2

  if ( (byte_596D661 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D661 = 1;
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
        sub_2213CDC(userGameEntity, v3);
      ScrPlayerBP__UpdateRpTimeStr((ScrPlayerBP_o *)userGameEntity, v3);
    }
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_73;
    CommandSpell = UserGameEntity__getCommandSpell(userGameEntity, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v6);
    if ( !byte_596D0B9 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D0B9 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v6);
      v13 = TerminalPramsManager_TypeInfo;
    }
    if ( v13->static_fields->_DispState_k__BackingField == 2 )
    {
      overwriteMasterInfo = this->fields.overwriteMasterInfo;
      if ( !overwriteMasterInfo )
        goto LABEL_29;
      targetWarId_k__BackingField = overwriteMasterInfo->fields._targetWarId_k__BackingField;
      if ( !*(&v13->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v13, v3, v6);
      if ( !byte_596A743 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A743 = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v6);
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
      if ( this->fields.isRevocationSpell || spellCount_k__BackingField < 0 )
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSpellIconId,
        (int32_t)spellIconId_k__BackingField,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v21);
      if ( !byte_596D6CB )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D6CB = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v21);
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
            ScrPlayerStatus__UpdateMstMissionLb(this, v25);
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26, v27);
            Time = NetworkManager__getTime(0);
            ScrPlayerStatus__checkLocationEventBtnShows(this, Time, v29);
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
      if ( !*(&v13->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v13, v3, v6);
      if ( !byte_596D6CB )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D6CB = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v6);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*(_BYTE *)(*(_QWORD *)&userGameEntity->fields.stone + 160LL) && this->fields.isOverwriteFaceTexture )
      {
        ScrPlayerStatus__ResetMasterFaceTexture(this, 0, (const MethodInfo *)v6);
        this->fields.isOverwriteFaceTexture = 0;
      }
      if ( this->fields.isRevocationSpell )
      {
        v19 = (int)StringLiteral_1/*""*/;
        this->fields.overwriteSpellIconId = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSpellIconId,
          v19,
          v6,
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
        v24 = CommandSpellIconComponent__SetRevocationData(
                (CommandSpellIconComponent_o *)userGameEntity,
                this->fields.userGameEntity,
                v23->fields._spellIconId_k__BackingField,
                v23->fields._spellCount_k__BackingField,
                0);
        this->fields.CommandSpellRest = CommandSpell;
        this->fields.isRevocationSpell = v24;
        goto LABEL_67;
      }
    }
    goto LABEL_73;
  }
}


void ScrPlayerStatus__UpdateAp(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  __int64 v4; // x2
  struct UserGameEntity_o *v5; // x8
  int32_t actMax; // w8
  float v7; // s0
  float mfApParOld; // s1
  UnityEngine_Object_o *mcApTimeP; // x20
  TransitionCalculator_float__o *apRecoverStrAlphaCalculator; // x0
  UILabel_o *v11; // x20
  const MethodInfo *v12; // x2
  float ApRecoverStrUpdateTimer; // s8
  __int64 v14; // x2
  float v15; // s8
  TitleInfoControl_c *v16; // x0
  struct AlphaTransitionCalculator_o *v17; // x8

  if ( (byte_596D689 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TitleInfoControl_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    sub_2213A60(&Method_TransitionCalculator_float__get_Current__);
    byte_596D689 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_30;
  userGameEntity = (UserGameEntity_o *)UserGameEntity__getAct(userGameEntity, 0);
  v5 = this->fields.userGameEntity;
  if ( !v5 )
    goto LABEL_30;
  actMax = v5->fields.actMax;
  this->fields.miApNow = (int)userGameEntity;
  this->fields.miApMax = actMax;
  if ( (int)userGameEntity < 1 )
    v7 = 0.0;
  else
    v7 = (float)(int)userGameEntity / (float)actMax;
  mfApParOld = this->fields.mfApParOld;
  this->fields.mfApPar = v7;
  if ( v7 != mfApParOld )
  {
    this->fields.mfApParOld = v7;
    ScrPlayerStatus__UpdateApStatus(this, method);
  }
  mcApTimeP = (UnityEngine_Object_o *)this->fields.mcApTimeP;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v4);
  if ( UnityEngine_Object__op_Inequality(mcApTimeP, 0, 0) )
  {
    apRecoverStrAlphaCalculator = (TransitionCalculator_float__o *)this->fields.apRecoverStrAlphaCalculator;
    if ( apRecoverStrAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        apRecoverStrAlphaCalculator,
        (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
      v11 = this->fields.mcApTimeP;
      userGameEntity = (UserGameEntity_o *)ScrPlayerStatus__mfGetApRecoverTimeStr(this, this->fields.isDispMax, v12);
      if ( v11 )
      {
        UILabel__set_text(v11, (System_String_o *)userGameEntity, 0);
        userGameEntity = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( userGameEntity )
        {
          if ( !CommonUI__maskFadeIsDisp((CommonUI_o *)userGameEntity, 0) )
          {
            ApRecoverStrUpdateTimer = this->fields.ApRecoverStrUpdateTimer;
            v15 = ApRecoverStrUpdateTimer + UnityEngine_Time__get_deltaTime(0);
            v16 = TitleInfoControl_TypeInfo;
            this->fields.ApRecoverStrUpdateTimer = v15;
            if ( !*(&v16->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v16, method, v14);
              v16 = TitleInfoControl_TypeInfo;
            }
            if ( v15 >= v16->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
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
            v17 = this->fields.apRecoverStrAlphaCalculator;
            if ( v17 )
            {
              userGameEntity = (UserGameEntity_o *)this->fields.mcApTimeP;
              if ( userGameEntity )
              {
                ((void (__fastcall *)(UserGameEntity_o *, _QWORD, float))userGameEntity->klass[1]._1.byval_arg.data)(
                  userGameEntity,
                  *(_QWORD *)&userGameEntity->klass[1]._1.byval_arg.bits,
                  v17->fields._Current_k__BackingField);
                return;
              }
            }
          }
        }
      }
LABEL_30:
      sub_2213CDC(userGameEntity, method);
    }
  }
}


void ScrPlayerStatus__UpdateApStatus(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mcApSldP; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UIProgressBar_o *v7; // x0
  float mfApPar; // s0
  UnityEngine_Object_o *mcApSldP2; // x20
  __int64 v10; // x2
  float v11; // s1
  float v12; // s0
  __int64 v13; // x1
  __int64 v14; // x2
  float value; // s0
  UILabel_o *mcApStrP; // x20
  ScrPlayerStatus_c *v17; // x0
  System_String_o *AP_OVER_TXT_COLOR_STR; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  UnityEngine_Transform_c *klass; // x8
  __int64 v24; // x8
  __int64 v25; // x2
  UnityEngine_Transform_c *v26; // x8
  Il2CppMethodPointer methodPtr; // x8
  ExRoomQuestComponent_o *v28; // x0

  if ( (byte_596D68A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_16448/*"[-]/"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596D68A = 1;
  }
  mcApSldP = (UnityEngine_Object_o *)this->fields.mcApSldP;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mcApSldP, 0, 0) )
  {
    v7 = (UIProgressBar_o *)this->fields.mcApSldP;
    if ( !v7 )
      goto LABEL_42;
    mfApPar = 1.0;
    if ( this->fields.mfApPar <= 1.0 )
      mfApPar = this->fields.mfApPar;
    UIProgressBar__set_value(v7, mfApPar, 0);
  }
  mcApSldP2 = (UnityEngine_Object_o *)this->fields.mcApSldP2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(mcApSldP2, 0, 0) )
  {
    v7 = (UIProgressBar_o *)this->fields.mcApSldP2;
    if ( !v7 )
      goto LABEL_42;
    v11 = this->fields.mfApPar;
    v12 = v11 + -1.0;
    if ( v11 <= 1.0 )
      v12 = 0.0;
    UIProgressBar__set_value(v7, v12, 0);
    v7 = (UIProgressBar_o *)this->fields.mcApSldP2;
    if ( !v7 )
LABEL_42:
      sub_2213CDC(v7, v5);
    value = UIProgressBar__get_value(v7, 0);
    mcApStrP = this->fields.mcApStrP;
    if ( value <= 0.0 )
    {
      v21 = System_Int32__ToString((int)this + 544, 0);
      v22 = System_Int32__ToString((int)this + 548, 0);
      v7 = (UIProgressBar_o *)System_String__Concat_75694928(v21, (System_String_o *)StringLiteral_1123/*"/"*/, v22, 0);
      if ( !mcApStrP )
        goto LABEL_42;
    }
    else
    {
      v17 = ScrPlayerStatus_TypeInfo;
      if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v13, v14);
        v17 = ScrPlayerStatus_TypeInfo;
      }
      AP_OVER_TXT_COLOR_STR = v17->static_fields->AP_OVER_TXT_COLOR_STR;
      v19 = System_Int32__ToString((int)this + 544, 0);
      v20 = System_Int32__ToString((int)this + 548, 0);
      v7 = (UIProgressBar_o *)System_String__Concat_75696856(
                                AP_OVER_TXT_COLOR_STR,
                                v19,
                                (System_String_o *)StringLiteral_16448/*"[-]/"*/,
                                v20,
                                0);
      if ( !mcApStrP )
        goto LABEL_42;
    }
    UILabel__set_text(mcApStrP, (System_String_o *)v7, 0);
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v10);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v7 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v10);
    v7 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v7[1].fields.mTrans->klass;
  if ( !klass )
    goto LABEL_42;
  v24 = *(_QWORD *)&klass->_2.element_size;
  if ( !v24 )
    goto LABEL_42;
  v7 = *(UIProgressBar_o **)(v24 + 328);
  if ( !v7 )
    goto LABEL_42;
  QuestBoardListViewManager__RequestConsumeColorReset((QuestBoardListViewManager_o *)v7, 0);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v7 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v25);
    v7 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  }
  v26 = v7[1].fields.mTrans->klass;
  if ( !v26 )
    goto LABEL_42;
  methodPtr = v26->vtable._4_GetEnumerator.methodPtr;
  if ( !methodPtr )
    goto LABEL_42;
  v28 = (ExRoomQuestComponent_o *)*((_QWORD *)methodPtr + 9);
  if ( v28 )
    ExRoomQuestComponent__RequestConsumeColorReset(v28, 0);
}


void ScrPlayerStatus__UpdateCompleteMissionIconVisibility(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v4; // x0
  void *mInstance; // x0
  __int64 v6; // x2
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  char v10; // w23
  struct CompleteMissionViewController_o *completeMissionViewController; // x8
  struct CompleteMissionViewController_o *v12; // x8
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  ScrPlayerStatus___c_c *v15; // x0
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__220_0; // x21
  Il2CppObject *v18; // x22
  struct ScrPlayerStatus___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x1
  __int64 v28; // x2
  struct CompleteMissionViewController_o *v29; // x8
  __int64 v30; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596D6A8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
    sub_2213A60(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus___c__UpdateCompleteMissionIconVisibility_b__220_0__);
    sub_2213A60(&ScrPlayerStatus___c_TypeInfo);
    byte_596D6A8 = 1;
  }
  entity = 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_75;
  mInstance = (void *)TerminalSceneComponent__IsMapActive((TerminalSceneComponent_o *)mInstance, 0);
  if ( ((unsigned __int8)mInstance & 1) != 0 )
    goto LABEL_40;
  mInstance = this->fields.completeMissionViewController;
  if ( !mInstance )
    goto LABEL_75;
  mInstance = (void *)CompleteMissionViewController__get_HasMissions((CompleteMissionViewController_o *)mInstance, 0);
  if ( ((unsigned __int8)mInstance & 1) == 0 )
    goto LABEL_40;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  mInstance = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
    mInstance = TerminalSceneComponent_TypeInfo;
  }
  v7 = **((_QWORD **)mInstance + 23);
  if ( !v7 )
    goto LABEL_75;
  mInstance = *(void **)(v7 + 256);
  if ( !mInstance )
    goto LABEL_75;
  mInstance = (void *)ScrTerminalListTop__IsBlankEarthActive((ScrTerminalListTop_o *)mInstance, 0);
  if ( ((unsigned __int8)mInstance & 1) != 0 )
    goto LABEL_40;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  mInstance = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
    mInstance = TerminalSceneComponent_TypeInfo;
  }
  v8 = **((_QWORD **)mInstance + 23);
  if ( !v8 )
    goto LABEL_75;
  mInstance = *(void **)(v8 + 256);
  if ( !mInstance )
    goto LABEL_75;
  mInstance = (void *)ScrTerminalListTop__IsPlanetEarthActive((ScrTerminalListTop_o *)mInstance, 0);
  if ( ((unsigned __int8)mInstance & 1) != 0 )
    goto LABEL_40;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  mInstance = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
    mInstance = TerminalSceneComponent_TypeInfo;
  }
  v9 = **((_QWORD **)mInstance + 23);
  if ( !v9 )
    goto LABEL_75;
  mInstance = *(void **)(v9 + 256);
  if ( !mInstance )
    goto LABEL_75;
  mInstance = (void *)ScrTerminalListTop__IsGrandQuestActive((ScrTerminalListTop_o *)mInstance, 0);
  if ( ((unsigned __int8)mInstance & 1) != 0 )
  {
LABEL_40:
    v10 = 0;
  }
  else
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    mInstance = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
      mInstance = TerminalSceneComponent_TypeInfo;
    }
    v30 = **((_QWORD **)mInstance + 23);
    if ( !v30 )
      goto LABEL_75;
    mInstance = *(void **)(v30 + 256);
    if ( !mInstance )
      goto LABEL_75;
    mInstance = (void *)ScrTerminalListTop__IsExRoomActive((ScrTerminalListTop_o *)mInstance, 0);
    v10 = (unsigned __int8)mInstance ^ 1;
  }
  completeMissionViewController = this->fields.completeMissionViewController;
  if ( !completeMissionViewController )
    goto LABEL_75;
  if ( !completeMissionViewController->fields.currentEventId )
    goto LABEL_64;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v6);
  mInstance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  v12 = this->fields.completeMissionViewController;
  if ( !v12 )
    goto LABEL_75;
  if ( !mInstance )
    goto LABEL_75;
  mInstance = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)mInstance,
                v12->fields.currentEventId,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !mInstance )
    goto LABEL_75;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)mInstance + 15);
  v15 = ScrPlayerStatus___c_TypeInfo;
  if ( !*(&ScrPlayerStatus___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, method, v13);
    v15 = ScrPlayerStatus___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__220_0 = (System_Func_object__bool__o *)static_fields->__9__220_0;
  if ( !_9__220_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, method, v13);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__220_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventEntity_ScriptData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__220_0,
      v18,
      Method_ScrPlayerStatus___c__UpdateCompleteMissionIconVisibility_b__220_0__,
      0);
    v19 = ScrPlayerStatus___c_TypeInfo->static_fields;
    v19->__9__220_0 = (struct System_Func_EventEntity_ScriptData__bool__o *)_9__220_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__220_0, (int32_t)_9__220_0, v20, v21, v22, v23, v24, v25);
  }
  v26 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          v14,
          (System_Func_TSource__bool__o *)_9__220_0,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
  if ( v26 )
    v10 &= LOBYTE(v26[5].klass) == 0;
  if ( !ScrPlayerStatus__IsEventMapAndSpotClosed(this, v27) )
    goto LABEL_64;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v28);
  mInstance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
  v29 = this->fields.completeMissionViewController;
  if ( !v29 || !mInstance )
LABEL_75:
    sub_2213CDC(mInstance, method);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)mInstance,
         &entity,
         v29->fields.currentEventId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    mInstance = entity;
    if ( !entity )
      goto LABEL_75;
    v10 |= EventDetailEntity__IsDispCompleteMissionOnEventMap((EventDetailEntity_o *)entity, 0);
  }
LABEL_64:
  mInstance = this->fields.completeMissionViewController;
  if ( !mInstance )
    goto LABEL_75;
  CompleteMissionViewController__SetVisible((CompleteMissionViewController_o *)mInstance, v10 & 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__UpdateDailyMissionInfoItem(ScrPlayerStatus_o *this, int32_t index, const MethodInfo *method)
{
  int32_t currentMissionIndex; // w20
  System_Collections_Generic_List_object__o *currentMissionList; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  MstMissionEntity_o *items; // x20
  const MethodInfo *v10; // x2
  int size; // w8
  System_Collections_Generic_List_object__o *v12; // x21
  unsigned int v13; // w25
  __int64 v14; // x29
  __int64 v15; // x2
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w22
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  currentMissionIndex = index;
  if ( (byte_596D69A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__set_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D69A = 1;
  }
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  entity = 0;
  if ( currentMissionIndex < 0 )
    currentMissionIndex = this->fields.currentMissionIndex;
  if ( !currentMissionList )
    goto LABEL_34;
  currentMissionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      currentMissionList,
                                                                      currentMissionIndex,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
  if ( !currentMissionList )
    goto LABEL_34;
  v6 = currentMissionList;
  currentMissionList = (System_Collections_Generic_List_object__o *)currentMissionList->fields._items;
  if ( !currentMissionList )
    goto LABEL_34;
  if ( MstMissionEntity__getMissionType((MstMissionEntity_o *)currentMissionList, 0) == 3 )
  {
    items = (MstMissionEntity_o *)v6->fields._items;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    currentMissionList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionMaster___);
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
    v12 = currentMissionList;
    if ( size >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= size )
          sub_2213CE4(currentMissionList);
        v14 = *((_QWORD *)&v12->fields._syncRoot + (int)v13);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&index, v10);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&index, v15);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        currentMissionList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&index, v15);
          currentMissionList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
        }
        if ( !v14 || !Master_object )
          break;
        currentMissionList = (System_Collections_Generic_List_object__o *)UserEventMissionMaster__TryGetEntity(
                                                                            (UserEventMissionMaster_o *)Master_object,
                                                                            &entity,
                                                                            *(_QWORD *)(*(_QWORD *)&currentMissionList[4].fields._size
                                                                                      + 64LL),
                                                                            *(_DWORD *)(v14 + 16),
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
        size = v12->fields._size;
        if ( (int)++v13 >= size )
          goto LABEL_31;
      }
LABEL_34:
      sub_2213CDC(currentMissionList, *(_QWORD *)&index);
    }
LABEL_31:
    v17 = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
    v18 = this->fields.currentMissionIndex;
    currentMissionList = (System_Collections_Generic_List_object__o *)ScrPlayerStatus__GetDailyMissionInfoItem(
                                                                        this,
                                                                        items,
                                                                        v10);
    if ( !v17 )
      goto LABEL_34;
    System_Collections_Generic_List_object___set_Item(
      v17,
      v18,
      (Il2CppObject *)currentMissionList,
      (const MethodInfo_44839E8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__set_Item__);
  }
}


void ScrPlayerStatus__UpdateGiftBoxNum(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mcGiftButtonP; // x20
  __int64 v5; // x1
  GiftButtonCtrl_o *v6; // x0

  if ( (byte_596D66A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D66A = 1;
  }
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mcGiftButtonP, 0, 0) )
  {
    v6 = this->fields.mcGiftButtonP;
    if ( !v6 )
      sub_2213CDC(0, v5);
    GiftButtonCtrl__InvalidateGiftInfo(v6, 0);
  }
}


void ScrPlayerStatus__UpdateMstMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  TransitionCalculator_float__o *missionAlertAlphaCalculator; // x0
  __int64 Instance; // x0
  float mstMissionIconUpdateTimer; // s8
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
  __int64 v19; // x8
  __int64 v20; // x2
  UnityEngine_Transform_o *v21; // x19
  __int64 v22; // x8

  if ( (byte_596D698 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    sub_2213A60(&Method_TransitionCalculator_float__get_Current__);
    byte_596D698 = 1;
  }
  if ( ScrPlayerStatus__GetEnabledMstMissionCount(this, method) >= 2 )
  {
    missionAlertAlphaCalculator = (TransitionCalculator_float__o *)this->fields.missionAlertAlphaCalculator;
    if ( !missionAlertAlphaCalculator )
      return;
    TransitionCalculator_float___Update(
      missionAlertAlphaCalculator,
      (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_69;
      if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0) )
      {
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_69;
        if ( !CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0) )
        {
          mstMissionIconUpdateTimer = this->fields.mstMissionIconUpdateTimer;
          v9 = mstMissionIconUpdateTimer + UnityEngine_Time__get_deltaTime(0);
          Instance = (__int64)this->fields.currentMissionList;
          this->fields.mstMissionIconUpdateTimer = v9;
          if ( !Instance )
            goto LABEL_69;
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                this->fields.currentMissionIndex,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
          if ( !Instance )
            goto LABEL_69;
          Instance = *(_QWORD *)(Instance + 16);
          if ( !Instance )
            goto LABEL_69;
          if ( v9 >= MstMissionEntity__GetMissionIconDisplaySec((MstMissionEntity_o *)Instance, 0) )
          {
            Instance = (__int64)this->fields.missionAlertAlphaCalculator;
            this->fields.mstMissionIconUpdateTimer = 0.0;
            if ( !Instance )
              goto LABEL_69;
            AlphaTransitionCalculator__StartFadeOut((AlphaTransitionCalculator_o *)Instance, 0);
          }
        }
      }
    }
    Instance = (__int64)this->fields.missionAlertAlphaCalculator;
    if ( !Instance )
      goto LABEL_69;
    Instance = AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)Instance, 0);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)this->fields.missionAlertAlphaCalculator;
      if ( !Instance )
        goto LABEL_69;
      AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)Instance, 0);
      NextMstMissionIndex = ScrPlayerStatus__GetNextMstMissionIndex(this, this->fields.currentMissionIndex, v10);
      this->fields.currentMissionIndex = NextMstMissionIndex;
      ScrPlayerStatus__UpdateDailyMissionInfoItem(this, NextMstMissionIndex, v12);
      Instance = (__int64)this->fields.currentMissionList;
      if ( !Instance )
        goto LABEL_69;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               this->fields.currentMissionIndex,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      ScrPlayerStatus__ChangeViewMstMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v14);
    }
    v15 = this->fields.missionAlertAlphaCalculator;
    if ( !v15 )
      goto LABEL_69;
    Instance = (__int64)this->fields.masterMissionAlertPanel;
    if ( !Instance )
      goto LABEL_69;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL),
      v15->fields._Current_k__BackingField);
  }
  else
  {
    ScrPlayerStatus__InitMstMissionLb(this, v3);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
  if ( !byte_596D0B9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0B9 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( v16->static_fields->_DispState_k__BackingField )
  {
    masterMissionAnimationLabelsTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionAnimationLabelsTween;
    if ( !*(&v16->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v16, v4, v5);
    if ( !byte_596D0B9 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D0B9 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
      v18 = TerminalPramsManager_TypeInfo;
    }
    if ( v18->static_fields->_DispState_k__BackingField == 2 )
      goto LABEL_51;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Instance = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v19 = **(_QWORD **)(Instance + 184);
    if ( !v19 )
      goto LABEL_69;
    Instance = *(_QWORD *)(v19 + 256);
    if ( !Instance )
      goto LABEL_69;
    if ( ScrTerminalListTop__get_IsActiveAnyEarth((ScrTerminalListTop_o *)Instance, 0) )
      goto LABEL_51;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0) )
    {
LABEL_51:
      Instance = 0;
      if ( !masterMissionAnimationLabelsTween )
        goto LABEL_69;
    }
    else
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v20);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v20);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v22 = **(_QWORD **)(Instance + 184);
      if ( !v22 )
        goto LABEL_69;
      Instance = *(_QWORD *)(v22 + 240);
      if ( !Instance )
        goto LABEL_69;
      Instance = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)Instance, 0);
      if ( !masterMissionAnimationLabelsTween )
        goto LABEL_69;
    }
    UnityEngine_Behaviour__set_enabled(masterMissionAnimationLabelsTween, Instance & 1, 0);
    Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
    if ( Instance )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0) )
        return;
      Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
      if ( Instance )
      {
        Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        v21 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_5969AE0 )
        {
          Instance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( v21 )
        {
          UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
          return;
        }
      }
    }
LABEL_69:
    sub_2213CDC(Instance, v4);
  }
}


void ScrPlayerStatus__UpdatePanel(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Component_object; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_596D6A4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D6A4 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      sub_2213CDC(v6, v7);
    ((void (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))Component_object->klass->vtable[12].methodPtr)(
      Component_object,
      1,
      Component_object->klass->vtable[12].method);
  }
}


void ScrPlayerStatus___EndLocationRequest_b__162_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___EndLocationRequest_b__162_1(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_c *v9; // x0
  UnityEngine_Object_o *mcGiftButtonP; // x21

  if ( (byte_596D6B6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D6B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseMultiGiftGetDialg(Instance, 0);
  v9 = UnityEngine_Object_TypeInfo;
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  this->fields.isLocationBusy = 0;
  if ( !*(&v9->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v9, v7, v8);
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
      sub_2213CDC(Instance, v6);
    }
  }
LABEL_11:
  this->fields.mIsAcceptedLocationEvent = 1;
}


void ScrPlayerStatus___ExitCompleteMission_b__171_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  ErrorDialog_c *klass; // x8
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  __int64 v15; // x2
  TerminalSceneComponent_c *v16; // x0
  __int64 v17; // x2
  TerminalSceneComponent_c *v18; // x0

  if ( (byte_596D6B9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__ExitCompleteMission_b__171_1__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D6B9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  CommonUI__CloseCompleteMission(Instance, 0);
  Instance = (CommonUI_o *)this->fields.completeMissionViewController;
  if ( !Instance )
    goto LABEL_31;
  CompleteMissionViewController__Release((CompleteMissionViewController_o *)Instance, 0);
  ScrPlayerStatus__UpdateCompleteMissionIconVisibility(this, v5);
  if ( !this->fields.isTerminalEffectDisplay )
    goto LABEL_15;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v6);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass || (Instance = (CommonUI_o *)klass->_2.genericContainerHandle) == 0 )
LABEL_31:
    sub_2213CDC(Instance, v4);
  TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)Instance, 1, 0);
  this->fields.isTerminalEffectDisplay = 0;
LABEL_15:
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)v8;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v9, v10);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitCompleteMission_b__171_1__, 0);
  if ( !v12 )
    goto LABEL_31;
  CommonUI__maskFadein(v12, DEFAULT_FADE_TIME, v14, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v15);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v16 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v15);
    v16 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v16->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_31;
  TerminalSceneComponent__playBgm_52367936((TerminalSceneComponent_o *)Instance, 0);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v18 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v17);
    v18 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v18->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_31;
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0);
}


void ScrPlayerStatus___ExitCompleteMission_b__171_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterCloseCompleteMission, 0);
}


void ScrPlayerStatus___ExitMasterMission_b__170_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  ErrorDialog_c *klass; // x8
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  __int64 v14; // x2
  TerminalSceneComponent_c *v15; // x0
  __int64 v16; // x2
  ErrorDialog_c *v17; // x8
  _BOOL8 IsGrandQuestActive; // x0
  __int64 v19; // x2
  ErrorDialog_c *v20; // x8
  __int64 v21; // x8
  __int64 v22; // x2
  ErrorDialog_c *v23; // x8
  Il2CppMethodPointer methodPtr; // x8

  if ( (byte_596D6B7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__ExitMasterMission_b__170_1__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D6B7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  CommonUI__CloseMasterMission(Instance, 0);
  if ( this->fields.isTerminalEffectDisplay )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance->fields.errorDialog->klass;
    if ( !klass )
      goto LABEL_52;
    Instance = (CommonUI_o *)klass->_2.genericContainerHandle;
    if ( !Instance )
      goto LABEL_52;
    TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)Instance, 1, 0);
    this->fields.isTerminalEffectDisplay = 0;
  }
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v7;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v8, v9);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterMission_b__170_1__, 0);
  if ( !v11 )
    goto LABEL_52;
  CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v14);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v15 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v14);
    v15 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v15->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_52;
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v16);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v17 = Instance->fields.errorDialog->klass;
  if ( !v17 )
    goto LABEL_52;
  Instance = *(CommonUI_o **)&v17->_2.element_size;
  if ( !Instance )
    goto LABEL_52;
  IsGrandQuestActive = ScrTerminalListTop__IsGrandQuestActive((ScrTerminalListTop_o *)Instance, 0);
  if ( IsGrandQuestActive )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v19);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v19);
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    v20 = Instance->fields.errorDialog->klass;
    if ( !v20 )
      goto LABEL_52;
    v21 = *(_QWORD *)&v20->_2.element_size;
    if ( !v21 )
      goto LABEL_52;
    Instance = *(CommonUI_o **)(v21 + 848);
    if ( !Instance )
      goto LABEL_52;
    GrandQuestRootComponent__SetDispServant((GrandQuestRootComponent_o *)Instance, 1, 0);
  }
  if ( ScrPlayerStatus__IsExRoomActive((ScrPlayerStatus_o *)IsGrandQuestActive, v4) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v22);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v22);
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    v23 = Instance->fields.errorDialog->klass;
    if ( v23 )
    {
      methodPtr = v23->vtable._4_get_closeBtnObject.methodPtr;
      if ( methodPtr )
      {
        BasicHelper__SetActiveSafely(*((UnityEngine_Component_o **)methodPtr + 6), 1, 0);
        return;
      }
    }
LABEL_52:
    sub_2213CDC(Instance, v4);
  }
}


void ScrPlayerStatus___ExitMasterMission_b__170_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v3; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  ExRoomRootComponent_o *image; // x0
  ExRoomServant_c *klass; // x8

  if ( (byte_596D6B8 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D6B8 = 1;
  }
  ActionExtensions__Call(this->fields.mAfterCloseMasterMission, 0);
  if ( this->fields.isFromCompleteMission )
  {
    this->fields.isFromCompleteMission = 0;
    if ( ScrPlayerStatus__IsExRoomActive(v3, v4) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      image = (ExRoomRootComponent_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
        image = (ExRoomRootComponent_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = image[1].fields.servant->klass;
      if ( !klass || (image = (ExRoomRootComponent_o *)klass[1]._1.image) == 0 )
        sub_2213CDC(image, v5);
      ExRoomRootComponent__ResetPlayedVoiceAndPlayVoice(image, 0);
    }
  }
}


void ScrPlayerStatus___ExitMasterProfile_b__152_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x2
  TerminalSceneComponent_c *v14; // x0

  if ( (byte_596D6B3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__ExitMasterProfile_b__152_1__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D6B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseMasterProfile((CommonUI_o *)Instance, 0);
  ScrPlayerStatus__mfInitUserData(this, v5);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)v6;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7, v8);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterProfile_b__152_1__, 0);
  if ( !v10 )
    goto LABEL_15;
  CommonUI__maskFadein(v10, DEFAULT_FADE_TIME, v12, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v13);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v13);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (Il2CppObject *)v14->static_fields->mInstance;
  if ( !Instance )
LABEL_15:
    sub_2213CDC(Instance, v4);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0);
}


void ScrPlayerStatus___ExitMasterProfile_b__152_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ScrPlayerStatus_o *v3; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  ExRoomRootComponent_o *image; // x0
  ExRoomServant_c *klass; // x8

  if ( (byte_596D6B4 & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D6B4 = 1;
  }
  ScrPlayerStatus__SetVisibilitySpotWebView(this, 1, v2);
  if ( ScrPlayerStatus__IsExRoomActive(v3, v4) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    image = (ExRoomRootComponent_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
      image = (ExRoomRootComponent_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = image[1].fields.servant->klass;
    if ( !klass || (image = (ExRoomRootComponent_o *)klass[1]._1.image) == 0 )
      sub_2213CDC(image, v5);
    ExRoomRootComponent__ResetPlayedVoiceAndPlayVoice(image, 0);
  }
}


void ScrPlayerStatus___OnClickApRecoverBtn_b__144_0(ScrPlayerStatus_o *this, int32_t result, const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  v4 = this;
  if ( (byte_596D6B1 & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D6B1 = 1;
  }
  ScrPlayerStatus__SetVisibilitySpotWebView(this, 1, method);
  if ( result == 2 )
    ActionExtensions__Call(v4->fields.mRecoverAct, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0);
}


void ScrPlayerStatus___OnClickCompleteMissionBtn_b__140_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x3

  if ( (byte_596D6B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__140_2__);
    byte_596D6B0 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__140_2__, 0);
  ScrPlayerStatus__OpenCompleteMission(this, v3, 0, v4);
}


void ScrPlayerStatus___OnClickCompleteMissionBtn_b__140_2(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__SetVisibilitySpotWebView(this, 1, v2);
}


void ScrPlayerStatus___OnClickDailyMissionInfoBtn_b__141_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_43791132(this, 0, v2);
}


void ScrPlayerStatus___OnClickLimitedMissionInfoBtn_b__143_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_43791132(this, 3, v2);
}


void ScrPlayerStatus___OnClickMasterMissionBtn_b__135_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x2

  if ( (byte_596D6AF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__135_1__);
    byte_596D6AF = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__135_1__, 0);
  this->fields.isFromCompleteMission = 0;
  this->fields.mAfterCloseMasterMission = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAfterCloseMasterMission,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  ScrPlayerStatus__OpenMasterMission_43791132(this, -1, v10);
}


void ScrPlayerStatus___OnClickMasterMissionBtn_b__135_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  ScrPlayerStatus__SetVisibilitySpotWebView(this, 1, v2);
  ScrPlayerStatus__UpdateGiftBoxNum(this, v4);
}


void ScrPlayerStatus___OnClickOpenNextExp_b__153_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.isDisableCloseNextExpBtn = 0;
}


void ScrPlayerStatus___OnClickRpRecoverBtn_b__145_0(ScrPlayerStatus_o *this, int32_t result, const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  v4 = this;
  if ( (byte_596D6B2 & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D6B2 = 1;
  }
  ScrPlayerStatus__SetVisibilitySpotWebView(this, 1, method);
  if ( result == 2 )
    ActionExtensions__Call(v4->fields.mRecoverAct, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0);
}


void ScrPlayerStatus___OnClickWeeklyMissionInfoBtn_b__142_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_43791132(this, 1, v2);
}


void ScrPlayerStatus___OpenCompleteMission_b__139_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.mtIsUpdate = 1;
}


void ScrPlayerStatus___OpenMasterMission_b__134_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.mtIsUpdate = 1;
}


void ScrPlayerStatus___ShowDisabledRuntimePermissionDialog_b__157_0(
        ScrPlayerStatus_o *this,
        bool result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  ScrPlayerStatus_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_596D6B5 & 1) == 0 )
  {
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D6B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseLocationTermsOfUseDlg((CommonUI_o *)Instance, 0);
  if ( result )
  {
    v9 = ScrPlayerStatus_TypeInfo;
    if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v7, v8);
      v9 = ScrPlayerStatus_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v9->static_fields->LOCATION_TOS_AGREED_KEY, 1, 0);
    ScrPlayerStatus__SetLocationCheck(this, v10);
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
  __int64 v4; // x2
  ScrTerminalMap_o *v5; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_596D665 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&StringLiteral_3130/*"BTN_GIFT"*/);
    byte_596D665 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v5 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
      v5 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v5->fields.subRootGimmickP->klass;
    if ( !klass || (v5 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
      sub_2213CDC(v5, v3);
    ScrTerminalMap__DestroyEventActionEffect(v5, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    TerminalPramsManager__PlaySystemSE(0, 0);
    ScrPlayerStatus__mfCallFsmEvent(v2, (System_String_o *)StringLiteral_3130/*"BTN_GIFT"*/, v9);
  }
}


void ScrPlayerStatus__cbfSlide_In(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_596D663 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12763/*"SLIDE_IN"*/);
    byte_596D663 = 1;
  }
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_12763/*"SLIDE_IN"*/, v2);
}


void ScrPlayerStatus__cbfSlide_Out(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_596D664 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12764/*"SLIDE_OUT"*/);
    byte_596D664 = 1;
  }
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_12764/*"SLIDE_OUT"*/, v2);
}


void ScrPlayerStatus__cbfStatus_Init(
        ScrPlayerStatus_o *this,
        UnityEngine_GameObject_o *oFsmObject,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596D683 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5977/*"EV_PRAM_INIT_FIN"*/);
    byte_596D683 = 1;
  }
  ScrPlayerStatus__mfInitUserData(this, (const MethodInfo *)oFsmObject);
  ScrPlayerStatus__SetupGradeIcon(this, v4);
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_5977/*"EV_PRAM_INIT_FIN"*/, v5);
}


void ScrPlayerStatus__checkLocationEventBtnShows(ScrPlayerStatus_o *this, int64_t now, const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  struct System_Int64_array *mNextLocationEventTerm; // x8
  struct System_Int64_array *v6; // x8
  int max_length; // w9
  ScrPlayerBP_c *klass; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *MyFsmP; // x20
  System_String_o *ActiveStateName; // x0
  UnityEngine_GameObject_o *mLocationBtnRoot; // x8

  v4 = this;
  if ( (byte_596D6A1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&StringLiteral_13619/*"State Roring"*/);
    byte_596D6A1 = 1;
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
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, now, method);
    if ( !byte_596D0B9 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D0B9 = 1;
    }
    this = (ScrPlayerStatus_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, now, method);
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
      if ( max_length != 1 )
      {
        if ( v6->m_Items[1] > now && !v4->fields.mIsAcceptedLocationEvent )
        {
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, now, method);
          if ( !byte_596A090 )
          {
            sub_2213A60(&TerminalSceneComponent_TypeInfo);
            byte_596A090 = 1;
          }
          this = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, now, method);
            this = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
          }
          klass = this->fields.rpRoot->klass;
          if ( !klass )
            goto LABEL_38;
          this = *(ScrPlayerStatus_o **)&klass->_2.static_fields_size;
          if ( !this )
            goto LABEL_38;
          MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP((ScrTerminalMap_o *)this, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
          this = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(MyFsmP, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !MyFsmP )
              goto LABEL_38;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0);
            this = (ScrPlayerStatus_o *)System_String__op_Equality(
                                          ActiveStateName,
                                          (System_String_o *)StringLiteral_13619/*"State Roring"*/,
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
        sub_2213CDC(this, now);
      }
    }
LABEL_37:
    sub_2213CE4(this);
  }
}


void ScrPlayerStatus__locationRequest(ScrPlayerStatus_o *this, EventEntity_o *eventEnt, const MethodInfo *method)
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
  GeoLocation_LocationDelegate_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2

  if ( (byte_596D67E & 1) == 0 )
  {
    sub_2213A60(&GeoLocation_TypeInfo);
    sub_2213A60(&GeoLocation_LocationDelegate_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass161_0__locationRequest_b__0__);
    sub_2213A60(&ScrPlayerStatus___c__DisplayClass161_0_TypeInfo);
    byte_596D67E = 1;
  }
  v5 = sub_2213CCC(ScrPlayerStatus___c__DisplayClass161_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = eventEnt;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)eventEnt, v14, v15, v16, v17, v18, v19);
  v20 = (GeoLocation_LocationDelegate_o *)sub_2213CCC(GeoLocation_LocationDelegate_TypeInfo);
  GeoLocation_LocationDelegate___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ScrPlayerStatus___c__DisplayClass161_0__locationRequest_b__0__,
    0);
  if ( !*(&GeoLocation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo, v21, v22);
  GeoLocation__GetLocation(v20, (UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScrPlayerStatus__mfCallFsmEvent(ScrPlayerStatus_o *this, System_String_o *sEventStr, const MethodInfo *method)
{
  struct PlayMakerFSM_o **p_mTargetFsm; // x20
  UnityEngine_Object_o *mTargetFsm; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_596D680 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D680 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sEventStr, method);
  if ( UnityEngine_Object__op_Equality(0, mTargetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mTargetFsm,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(0, v16, 0) )
  {
    Fsm = *p_mTargetFsm;
    if ( !*p_mTargetFsm || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0)) == 0 )
      sub_2213CDC(Fsm, v17);
    HutongGames_PlayMaker_Fsm__Event_78428956((HutongGames_PlayMaker_Fsm_o *)Fsm, sEventStr, 0);
  }
}


void ScrPlayerStatus__mfCheckMasterMission(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int32_t size; // w2
  int v5; // w9
  System_Collections_Generic_List_object__o *v6; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_object__o *v13; // x22
  DataManager_o *Instance; // x0
  Il2CppObject *v15; // x1
  Il2CppObject *MasterData_object; // x24
  MstMissionEntity_array *EnableMissions; // x25
  System_String_o *v18; // x2
  int max_length; // w8
  UserEventMissionMaster_o *v20; // x26
  unsigned int v21; // w23
  int32_t v22; // w20
  Il2CppClass **v23; // x8
  MstMissionEntity_o *v24; // x27
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  int32_t m_CancellationTokenSource_high; // w10
  _QWORD *v32; // x9
  __int64 v33; // x11
  Il2CppClass **v34; // x0
  MissionNaviTransitionBoardItem_o *v35; // x0
  DataManager_o *v36; // x28
  ScrPlayerStatus_o *AchiveMissionNum; // x0
  int32_t m_CancellationTokenSource; // w19
  int32_t v39; // w21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t MissionClearCount; // w29
  MasterMissionComponent_MasterMissionInfoItem_o *v43; // x28
  struct MasterMissionComponent_MasterMissionInfoItem_array *m_CachedPtr; // x8
  _QWORD *v45; // x9
  __int64 m_CancellationTokenSource_low; // x10
  Il2CppClass **v47; // x8
  const MethodInfo *v48; // x3
  DataManager_o *v49; // x28
  int32_t v50; // w29
  int32_t v51; // w0
  int64_t startedAt; // x8
  int32_t v53; // w21
  int32_t v54; // w19
  struct System_Object_array *v55; // x8
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  const MethodInfo *v58; // x3
  const MethodInfo_4483C64 *v59; // x2
  __int64 v60; // x8
  __int64 v61; // x2
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v62; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__184_0; // x22
  Il2CppObject *v65; // x19
  struct ScrPlayerStatus___c_StaticFields *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  __int64 v74; // x2
  UnityEngine_Object_o *mMasterMissionNoticeNumber; // x19
  DataManager_o **p_mMasterMissionNoticeNumber; // x21
  __int64 v77; // x2
  Il2CppObject *mNoticeNumberPrefab; // x19
  Il2CppObject *v79; // x19
  Il2CppObject *Component_object; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  __int64 v87; // x2
  UIWidget_o *v88; // x22
  DataManager_o *v89; // x8
  UILabel_o *v90; // x22
  UnityEngine_Behaviour_o *masterMissionTween; // x20
  UnityEngine_GameObject_o *gameObject; // x19
  System_Collections_Generic_List_object__o *v93; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **list; // [xsp+10h] [xbp-70h]
  ScrPlayerStatus_o *v95; // [xsp+18h] [xbp-68h]

  if ( (byte_596D693 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_2213A60(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ScrPlayerStatus___c__mfCheckMasterMission_b__184_0__);
    sub_2213A60(&ScrPlayerStatus___c_TypeInfo);
    byte_596D693 = 1;
  }
  currentMissionList = this->fields.currentMissionList;
  this->fields.mstMissionStartsAt = 0;
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
    v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    this->fields.currentMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentMissionList,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  v93 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v93,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_96;
  list = &this->fields.currentMissionList;
  v95 = this;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_96;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v20 = (UserEventMissionMaster_o *)Instance;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_2213CE4(Instance);
      v23 = &EnableMissions->obj.klass + (int)v21;
      v24 = (MstMissionEntity_o *)v23[4];
      if ( !v24 )
        goto LABEL_96;
      Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v23[4], 0);
      if ( (int)Instance > 3 )
      {
        if ( (_DWORD)Instance == 4 )
        {
          if ( !MasterData_object )
            goto LABEL_96;
          Instance = (DataManager_o *)EventMissionMaster__GetExtraMissionList(
                                        (EventMissionMaster_o *)MasterData_object,
                                        v24->fields.id,
                                        0);
          if ( !Instance )
            goto LABEL_96;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_96;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            Instance = (DataManager_o *)ScrPlayerStatus__GetMissionClearCount(
                                          (ScrPlayerStatus_o *)Instance,
                                          (EventMissionEntity_array *)Instance,
                                          (int32_t)v18,
                                          v58);
            v22 += (int)Instance;
          }
        }
        else if ( (_DWORD)Instance == 5 )
        {
          if ( !MasterData_object )
            goto LABEL_96;
          Instance = (DataManager_o *)EventMissionMaster__GetLimitedMissionList(
                                        (EventMissionMaster_o *)MasterData_object,
                                        v24->fields.id,
                                        0);
          if ( !Instance )
            goto LABEL_96;
          Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
          if ( !Instance )
            goto LABEL_96;
          v36 = Instance;
          if ( Instance->fields.m_CancellationTokenSource )
          {
            if ( !v20 )
              goto LABEL_96;
            AchiveMissionNum = (ScrPlayerStatus_o *)UserEventMissionMaster__getAchiveMissionNum(v20, v24->fields.id, 0);
            m_CancellationTokenSource = (int32_t)v36->fields.m_CancellationTokenSource;
            v39 = (int)AchiveMissionNum;
            MissionClearCount = ScrPlayerStatus__GetMissionClearCount(
                                  AchiveMissionNum,
                                  (EventMissionEntity_array *)v36,
                                  v40,
                                  v41);
            v43 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_2213CCC(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
            MasterMissionComponent_MasterMissionInfoItem___ctor(
              v43,
              v24,
              m_CancellationTokenSource,
              MissionClearCount,
              v39,
              0);
            Instance = (DataManager_o *)*list;
            if ( !*list )
              goto LABEL_96;
            m_CachedPtr = (struct MasterMissionComponent_MasterMissionInfoItem_array *)Instance->fields.m_CachedPtr;
            v45 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++HIDWORD(Instance->fields.m_CancellationTokenSource);
            if ( !m_CachedPtr )
              goto LABEL_96;
            m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
            v22 += MissionClearCount;
            if ( (unsigned int)m_CancellationTokenSource_low >= LODWORD(m_CachedPtr->max_length) )
            {
              v60 = v45[4];
LABEL_56:
              v59 = *(const MethodInfo_4483C64 **)(*(_QWORD *)(v60 + 192) + 112LL);
              v15 = (Il2CppObject *)v43;
              goto LABEL_57;
            }
            v47 = &m_CachedPtr->obj.klass + m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            v47[4] = (Il2CppClass *)v43;
            v35 = (MissionNaviTransitionBoardItem_o *)(v47 + 4);
LABEL_46:
            LODWORD(v15) = (_DWORD)v43;
LABEL_47:
            sub_2213A04(v35, (int32_t)v15, v18, v25, v26, v27, v28, v29);
          }
        }
      }
      else
      {
        if ( (_DWORD)Instance != 2 )
        {
          if ( (_DWORD)Instance != 3 )
            goto LABEL_58;
          Instance = (DataManager_o *)ScrPlayerStatus__GetDailyMissionInfoItem(v95, v24, (const MethodInfo *)v18);
          if ( !Instance )
            goto LABEL_58;
          if ( !v13 )
            goto LABEL_96;
          items = v13->fields._items;
          m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
          v15 = (Il2CppObject *)Instance;
          v32 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_96;
          v33 = v13->fields._size;
          v22 += m_CancellationTokenSource_high;
          if ( (unsigned int)v33 >= LODWORD(items->max_length) )
          {
            Instance = (DataManager_o *)v13;
            v59 = *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL);
LABEL_57:
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              v15,
              v59);
            goto LABEL_58;
          }
          v34 = &items->obj.klass + v33;
          v13->fields._size = v33 + 1;
          v34[4] = (Il2CppClass *)v15;
          v35 = (MissionNaviTransitionBoardItem_o *)(v34 + 4);
          goto LABEL_47;
        }
        if ( !MasterData_object )
          goto LABEL_96;
        Instance = (DataManager_o *)EventMissionMaster__GetWeeklyMasterMissionList(
                                      (EventMissionMaster_o *)MasterData_object,
                                      v24->fields.id,
                                      0);
        if ( !Instance )
          goto LABEL_96;
        v49 = Instance;
        if ( Instance->fields.m_CancellationTokenSource )
        {
          v50 = ScrPlayerStatus__GetMissionClearCount(
                  (ScrPlayerStatus_o *)Instance,
                  (EventMissionEntity_array *)Instance,
                  (int32_t)v18,
                  v48);
          v22 += v50;
          Instance = (DataManager_o *)MstMissionEntity__isOpenNow(v24, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_96;
            v51 = UserEventMissionMaster__getAchiveMissionNum(v20, v24->fields.id, 0);
            startedAt = v24->fields.startedAt;
            v53 = v51;
            v54 = (int32_t)v49->fields.m_CancellationTokenSource;
            if ( startedAt > v95->fields.mstMissionStartsAt )
              v95->fields.mstMissionStartsAt = startedAt;
            v43 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_2213CCC(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
            MasterMissionComponent_MasterMissionInfoItem___ctor(v43, v24, v54, v50, v53, 0);
            if ( !v93 )
              goto LABEL_96;
            v55 = v93->fields._items;
            ++v93->fields._version;
            if ( !v55 )
              goto LABEL_96;
            v56 = v93->fields._size;
            if ( (unsigned int)v56 >= LODWORD(v55->max_length) )
            {
              v60 = *((_QWORD *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__
                    + 4);
              Instance = (DataManager_o *)v93;
              goto LABEL_56;
            }
            v57 = &v55->obj.klass + v56;
            v93->fields._size = v56 + 1;
            v57[4] = (Il2CppClass *)v43;
            v35 = (MissionNaviTransitionBoardItem_o *)(v57 + 4);
            goto LABEL_46;
          }
        }
      }
LABEL_58:
      max_length = EnableMissions->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_61;
    }
  }
  v22 = 0;
LABEL_61:
  if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v15, v18);
  ScrPlayerStatus__SortLimitedMstMissionViewList(list, (const MethodInfo *)v15);
  Instance = (DataManager_o *)*list;
  if ( !*list )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v13,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
  Instance = (DataManager_o *)*list;
  if ( !*list )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v93,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
  Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
  v62 = *list;
  if ( !*(&ScrPlayerStatus___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v15, v61);
    Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
  }
  static_fields = *(struct ScrPlayerStatus___c_StaticFields **)&Instance[1].fields._DispLog;
  _9__184_0 = (System_Predicate_object__o *)static_fields->__9__184_0;
  if ( !_9__184_0 )
  {
    if ( !HIDWORD(Instance[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v15, v61);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)static_fields->__9;
    _9__184_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Predicate_object____ctor(_9__184_0, v65, Method_ScrPlayerStatus___c__mfCheckMasterMission_b__184_0__, 0);
    v66 = ScrPlayerStatus___c_TypeInfo->static_fields;
    v66->__9__184_0 = (struct System_Predicate_MasterMissionComponent_MasterMissionInfoItem__o *)_9__184_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v66->__9__184_0, (int32_t)_9__184_0, v67, v68, v69, v70, v71, v72);
  }
  if ( !v62 )
    goto LABEL_96;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v62,
    (System_Predicate_T__o *)_9__184_0,
    (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
  p_mMasterMissionNoticeNumber = (DataManager_o **)&v95->fields.mMasterMissionNoticeNumber;
  mMasterMissionNoticeNumber = (UnityEngine_Object_o *)v95->fields.mMasterMissionNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73, v74);
  if ( UnityEngine_Object__op_Equality(mMasterMissionNoticeNumber, 0, 0) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)v95->fields.mNoticeNumberPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v77);
    v79 = UnityEngine_Object__Instantiate_object_(
            mNoticeNumberPrefab,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_42897308(
      (UnityEngine_GameObject_o *)v79,
      v95->fields.masterMissionNoticeRoot,
      0);
    if ( !v79 )
      goto LABEL_96;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v79,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mMasterMissionNoticeNumber = (DataManager_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v95->fields.mMasterMissionNoticeNumber,
      (int32_t)Component_object,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    Instance = *p_mMasterMissionNoticeNumber;
    if ( !*p_mMasterMissionNoticeNumber )
      goto LABEL_96;
    Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0);
    v88 = (UIWidget_o *)Instance;
    if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v15, v87);
    if ( !v88 )
      goto LABEL_96;
    UIWidget__set_depth(v88, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0);
    UIWidget__set_width(v88, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0);
    UIWidget__set_height(v88, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0);
    v89 = *p_mMasterMissionNoticeNumber;
    if ( !*p_mMasterMissionNoticeNumber )
      goto LABEL_96;
    v90 = *(UILabel_o **)&v89->fields._DispLog;
    if ( !v90 )
      goto LABEL_96;
    UIWidget__set_depth(
      *(UIWidget_o **)&v89->fields._DispLog,
      ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH + 1,
      0);
    UILabel__set_fontSize(v90, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE, 0);
    UIWidget__set_width((UIWidget_o *)v90, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_LABEL_WIDTH, 0);
  }
  Instance = *p_mMasterMissionNoticeNumber;
  if ( !*p_mMasterMissionNoticeNumber )
    goto LABEL_96;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v22, 0);
  Instance = (DataManager_o *)v95->fields.mMasterMissionNoticeNumber;
  if ( !Instance )
    goto LABEL_96;
  masterMissionTween = (UnityEngine_Behaviour_o *)v95->fields.masterMissionTween;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_96;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
  if ( !masterMissionTween )
    goto LABEL_96;
  UnityEngine_Behaviour__set_enabled(masterMissionTween, (unsigned __int8)Instance & 1, 0);
  Instance = (DataManager_o *)v95->fields.masterMissionTween;
  if ( !Instance )
    goto LABEL_96;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0) )
    goto LABEL_95;
  Instance = (DataManager_o *)v95->fields.masterMissionTween;
  if ( !Instance )
LABEL_96:
    sub_2213CDC(Instance, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
LABEL_95:
  ScrPlayerStatus__InitMstMissionLb(v95, (const MethodInfo *)v15);
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

  if ( (byte_596D688 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITexture___);
    sub_2213A60(&StringLiteral_3319/*"Body"*/);
    byte_596D688 = 1;
  }
  mcFaceObjP = (__int64)this->fields.mcFaceObjP;
  if ( !mcFaceObjP )
    goto LABEL_17;
  mcFaceObjP = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                          (UnityEngine_GameObject_o *)mcFaceObjP,
                          (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UITexture___);
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
        sub_2213CE4(mcFaceObjP);
      v7 = v5 + 8LL * (int)v6;
      v8 = *(UIWidget_o **)(v7 + 32);
      if ( !v8 )
        break;
      name = UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v7 + 32), 0);
      mcFaceObjP = System_String__op_Equality(name, (System_String_o *)StringLiteral_3319/*"Body"*/, 0);
      if ( (mcFaceObjP & 1) != 0 )
      {
        UIWidget__SetDimensions(v8, 350, 350, 0);
        UIWidget__set_pivot(v8, 4, 0);
        mcFaceObjP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
        if ( !mcFaceObjP )
          break;
        mcFaceObjP = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mcFaceObjP, 0);
        v10 = (UnityEngine_Transform_o *)mcFaceObjP;
        if ( !byte_5969AE0 )
        {
          mcFaceObjP = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
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
    sub_2213CDC(mcFaceObjP, method);
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
  ScrPlayerStatus_o *ActNextRecoverTime; // x0
  const MethodInfo *v8; // x3

  if ( (byte_596D68F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D68F = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_12;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !UserGameEntity__IsNeedRecoverAct(userGameEntity, 0) )
    return v6;
  userGameEntity = this->fields.userGameEntity;
  if ( !isGetMax )
  {
    if ( userGameEntity )
    {
      ActNextRecoverTime = (ScrPlayerStatus_o *)UserGameEntity__getActNextRecoverTime(userGameEntity, 0);
      return ScrPlayerStatus__GetTimeApRecoverStr(ActNextRecoverTime, (int64_t)ActNextRecoverTime, isGetMax, v8);
    }
LABEL_12:
    sub_2213CDC(userGameEntity, isGetMax);
  }
  if ( !userGameEntity )
    goto LABEL_12;
  ActNextRecoverTime = (ScrPlayerStatus_o *)UserGameEntity__getActAllRecoverTime(userGameEntity, 0);
  return ScrPlayerStatus__GetTimeApRecoverStr(ActNextRecoverTime, (int64_t)ActNextRecoverTime, isGetMax, v8);
}


System_String_o *ScrPlayerStatus__mfGetCommandSpellRecoverTimeStr(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v4; // x20
  int32_t CommandSpell; // w0
  __int64 v6; // x2
  BalanceConfig_c *v7; // x8
  int32_t CommandSpellMax; // w8
  _BOOL8 CmdSpellInfo; // x0
  const MethodInfo *v10; // x2
  int64_t time; // [xsp+0h] [xbp-30h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596D692 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D692 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  count = 0;
  time = 0;
  if ( !userGameEntity )
    goto LABEL_10;
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  CommandSpell = UserGameEntity__getCommandSpell(userGameEntity, 0);
  v7 = BalanceConfig_TypeInfo;
  this->fields.miSpellNow = CommandSpell;
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, method, v6);
    v7 = BalanceConfig_TypeInfo;
    CommandSpell = this->fields.miSpellNow;
  }
  CommandSpellMax = v7->static_fields->CommandSpellMax;
  this->fields.miSpellMax = CommandSpellMax;
  if ( CommandSpell != CommandSpellMax )
  {
    userGameEntity = this->fields.userGameEntity;
    if ( userGameEntity )
    {
      CmdSpellInfo = UserGameEntity__getCmdSpellInfo(userGameEntity, &count, &time, 0);
      return ScrPlayerStatus__GetTimeCommandSpellRecoverStr((ScrPlayerStatus_o *)CmdSpellInfo, time, v10);
    }
LABEL_10:
    sub_2213CDC(userGameEntity, method);
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_596D682 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D682 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sValueStr, method);
  if ( UnityEngine_Object__op_Equality(0, mTargetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mTargetFsm,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( !UnityEngine_Object__op_Inequality(0, v16, 0) )
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
    sub_2213CDC(Fsm, v17);
  }
  return HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Fsm, 0);
}


void ScrPlayerStatus__mfInitUserData(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  BaseDialog_o *nextExpDialog; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
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
    sub_2213CDC(0, v11);
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


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__mfSetFsmValueInt(
        ScrPlayerStatus_o *this,
        System_String_o *sValueStr,
        int32_t iValueInt,
        const MethodInfo *method)
{
  struct PlayMakerFSM_o **p_mTargetFsm; // x21
  UnityEngine_Object_o *mTargetFsm; // x23
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Object_o *v18; // x22
  __int64 v19; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_596D681 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D681 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sValueStr, *(_QWORD *)&iValueInt);
  if ( UnityEngine_Object__op_Equality(0, mTargetFsm, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mTargetFsm,
      (int32_t)Component_object,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Inequality(0, v18, 0) )
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
      sub_2213CDC(Fsm, v19);
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
  int max_length; // w9
  ScrPlayerStatus_o *v7; // x1
  _QWORD *p_mNextLocationEventTerm; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x9
  ScrPlayerStatus_o *v10; // x20
  struct System_Int64_array *v11; // x8
  struct PlayMakerFSM_o *mTargetFsm; // x9
  int v13; // w10
  int v14; // w9
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct PlayMakerFSM_o *v21; // x8
  int v22; // w9
  struct UnityEngine_GameObject_o *fsm; // x8
  __int64 v24; // x2
  Il2CppObject *MasterData_object; // x21
  struct PlayMakerFSM_o *v26; // x8
  __int64 v27; // x9
  __int64 v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  v4 = this;
  if ( (byte_596D6A0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (ScrPlayerStatus_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D6A0 = 1;
  }
  mNextLocationEventTerm = v4->fields.mNextLocationEventTerm;
  if ( !mNextLocationEventTerm )
    goto LABEL_8;
  max_length = mNextLocationEventTerm->max_length;
  if ( !max_length )
    goto LABEL_48;
  if ( mNextLocationEventTerm->m_Items[0] >= 1 )
  {
    if ( max_length == 1 )
      goto LABEL_48;
    if ( mNextLocationEventTerm->m_Items[1] < now )
    {
LABEL_8:
      this = (ScrPlayerStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_47;
      this = (ScrPlayerStatus_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_47;
      this = (ScrPlayerStatus_o *)EventMaster__GetEnableEntityList((EventMaster_o *)this, 20, 0, 0, 0);
      if ( !this )
        goto LABEL_47;
      p_mNextLocationEventTerm = &v4->fields.mNextLocationEventTerm;
      m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
      v10 = this;
      v11 = v4->fields.mNextLocationEventTerm;
      if ( m_CancellationTokenSource )
      {
        if ( v11 )
        {
          if ( !(_DWORD)m_CancellationTokenSource )
            goto LABEL_48;
          mTargetFsm = this->fields.mTargetFsm;
          if ( !mTargetFsm )
            goto LABEL_47;
          v13 = v11->max_length;
          if ( !v13 )
            goto LABEL_48;
          v11->m_Items[0] = (int64_t)mTargetFsm[1].fields.m_CancellationTokenSource;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) || v13 == 1 )
            goto LABEL_48;
          v11->m_Items[1] = (int64_t)mTargetFsm[1].fields.fsm;
        }
        else
        {
          this = (ScrPlayerStatus_o *)sub_2213B20(long___TypeInfo, 2);
          if ( !LODWORD(v10->fields.m_CancellationTokenSource) )
            goto LABEL_48;
          v21 = v10->fields.mTargetFsm;
          if ( !v21 )
            goto LABEL_47;
          v7 = this;
          if ( !this )
            goto LABEL_47;
          v22 = (int)this->fields.m_CancellationTokenSource;
          if ( !v22 )
            goto LABEL_48;
          this->fields.mTargetFsm = (struct PlayMakerFSM_o *)v21[1].fields.m_CancellationTokenSource;
          if ( !LODWORD(v10->fields.m_CancellationTokenSource) || v22 == 1 )
            goto LABEL_48;
          fsm = (struct UnityEngine_GameObject_o *)v21[1].fields.fsm;
          *p_mNextLocationEventTerm = this;
          this->fields.mcFaceObjP = fsm;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v4->fields.mNextLocationEventTerm,
            (int32_t)this,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
        }
        this = (ScrPlayerStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_47;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v24);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        this = (ScrPlayerStatus_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v24);
          this = (ScrPlayerStatus_o *)NetworkManager_TypeInfo;
        }
        if ( LODWORD(v10->fields.m_CancellationTokenSource) )
        {
          v26 = v10->fields.mTargetFsm;
          if ( v26 && MasterData_object )
          {
            v27 = 16;
            if ( SHIDWORD(v26->fields.m_CachedPtr) > 0 )
              v27 = 20;
            this = (ScrPlayerStatus_o *)UserEventMaster__GetEntityDefinitely(
                                          (UserEventMaster_o *)MasterData_object,
                                          (int64_t)this->fields.rpRoot->fields.mcRpStrP,
                                          *(_DWORD *)((char *)&v26->klass + v27),
                                          0);
            if ( this )
            {
              v4->fields.mIsAcceptedLocationEvent = SHIDWORD(this->fields.m_CancellationTokenSource) > 0;
              return;
            }
          }
LABEL_47:
          sub_2213CDC(this, v7);
        }
LABEL_48:
        sub_2213CE4(this);
      }
      if ( v11 )
      {
        v14 = v11->max_length;
        if ( !v14 )
          goto LABEL_48;
        v11->m_Items[0] = 0;
        if ( v14 == 1 )
          goto LABEL_48;
        v11->m_Items[1] = 0;
      }
      else
      {
        v28 = sub_2213B20(long___TypeInfo, 2);
        *p_mNextLocationEventTerm = v28;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.mNextLocationEventTerm,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      v4->fields.mIsAcceptedLocationEvent = 0;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrPlayerStatus__mfSetSpell(
        ScrPlayerStatus_o *this,
        int32_t iSpellNow,
        int32_t iSpellMax,
        const MethodInfo *method)
{
  UnityEngine_Object_c *v7; // x0
  UnityEngine_Object_o *commandSpellWindow; // x21
  struct CommandSpellWindowComponent_o **p_commandSpellWindow; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Component_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x21
  Il2CppObject *commandSpellWindowPrefab; // x21
  Il2CppObject *v17; // x21
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x2
  CommandSpellWindowComponent_o *v28; // x21
  struct CommandSpellWindowComponent_o *v29; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_596D69E & 1) == 0 )
  {
    sub_2213A60(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus_OnCloseSpellWindow__);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    byte_596D69E = 1;
  }
  v7 = UnityEngine_Object_TypeInfo;
  this->fields.miSpellNow = iSpellNow;
  commandSpellWindow = (UnityEngine_Object_o *)this->fields.commandSpellWindow;
  this->fields.miSpellMax = iSpellMax;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&iSpellNow, *(_QWORD *)&iSpellMax);
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
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    UnityEngine_Object__Destroy_83459800(v15, 0);
  }
  commandSpellWindowPrefab = (Il2CppObject *)this->fields.commandSpellWindowPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  v17 = UnityEngine_Object__Instantiate_object_(
          commandSpellWindowPrefab,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_23;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
  GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v17, layer, 0);
  if ( !v17 )
    goto LABEL_23;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v17,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___);
  *p_commandSpellWindow = (struct CommandSpellWindowComponent_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandSpellWindow,
    (int32_t)Component_object,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow;
  if ( !*p_commandSpellWindow )
    goto LABEL_23;
  v26 = UnityEngine_Component__get_gameObject(gameObject, 0);
  GameObjectExtensions__SafeSetParent_42897308(v26, this->fields.commandSpellWindowRoot, 0);
  gameObject = (UnityEngine_Component_o *)ScrPlayerStatus_TypeInfo;
  v28 = this->fields.commandSpellWindow;
  if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v10, v27);
  if ( !v28
    || (CommandSpellWindowComponent__InitializeCommandSpellDepth(
          v28,
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
        (v29 = *p_commandSpellWindow) == 0) )
  {
LABEL_23:
    sub_2213CDC(gameObject, v10);
  }
  v29->fields.mode = 0;
  v30 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_2213CCC(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v30,
    (Il2CppObject *)this,
    (intptr_t)Method_ScrPlayerStatus_OnCloseSpellWindow__,
    0);
  v29->fields.callback_close = v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v29->fields.callback_close,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void ScrPlayerStatus__mfSetStoneAndFragment(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v7; // x2
  Il2CppObject *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  UserItemEntity_o *EntityDefinitely; // x21
  __int64 v12; // x2
  Il2CppObject *Master_object; // x22
  int64_t v14; // x23
  int32_t num; // w26
  int32_t v16; // w21
  int32_t stone; // w23
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t MaxNum; // w20
  __int64 v21; // x1
  __int64 v22; // x2
  bool _47388504; // w8
  UILabel_o *stoneCountNumLb; // x22
  __int64 v25; // x2
  UILabel_o *v26; // x22
  UILabel_o *stoneFragmentCountNumLb; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject **v30; // x8
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *stormPodCountNumLb; // x21
  Il2CppObject *v37; // x22
  System_String_o *v38; // x23
  Il2CppObject *v39; // x0
  __int64 v40; // x2
  UILabel_o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  UISprite_o *stormPodIcon; // x19
  int32_t v45; // [xsp+0h] [xbp-60h] BYREF
  int32_t v46; // [xsp+4h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596D69F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ClassBoardUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_20319/*"ffb505"*/);
    sub_2213A60(&StringLiteral_20320/*"ffffff"*/);
    sub_2213A60(&StringLiteral_22073/*"item_mini_49"*/);
    sub_2213A60(&StringLiteral_4005/*"COUNT_LIMITED"*/);
    sub_2213A60(&StringLiteral_16653/*"[{0}]{1:N0}[-]"*/);
    byte_596D69F = 1;
  }
  entity = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v8 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object || !v8 )
    goto LABEL_66;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v8,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       HIDWORD(MasterData_object[5].monitor),
                       0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v12);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v14 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v12);
  if ( !Master_object )
    goto LABEL_66;
  UserItemMaster__TryGetEntity(
    (UserItemMaster_o *)Master_object,
    &entity,
    v14,
    BalanceConfig_TypeInfo->static_fields->stormPodItemId,
    0);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                BalanceConfig_TypeInfo->static_fields->stormPodItemId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  v16 = EntityDefinitely->fields.num;
  stone = SelfUserGame->fields.stone;
  MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)Instance, 0);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v18, v19);
  _47388504 = TutorialFlag__Get_47388504(101, 0);
  stoneCountNumLb = this->fields.stoneCountNumLb;
  if ( !_47388504 )
    stone = 0;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(stone, 0);
  if ( !stoneCountNumLb )
    goto LABEL_66;
  UILabel__set_text(stoneCountNumLb, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)ScrPlayerStatus_TypeInfo;
  v26 = this->fields.stoneCountNumLb;
  if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v5, v25);
  if ( !v26 )
    goto LABEL_66;
  UILabel__SetCondensedScale(v26, ScrPlayerStatus_TypeInfo->static_fields->STONE_COUNT_MAX_WIDTH, 0, 0);
  stoneFragmentCountNumLb = this->fields.stoneFragmentCountNumLb;
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(v16, 0);
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
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v28, v29);
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
              v30 = (Il2CppObject **)&StringLiteral_20320/*"ffffff"*/;
              if ( num >= MaxNum )
                v30 = (Il2CppObject **)&StringLiteral_20319/*"ffb505"*/;
              v31 = *v30;
              v46 = num;
              v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v46);
              v33 = System_String__Format_75697880((System_String_o *)StringLiteral_16653/*"[{0}]{1:N0}[-]"*/, v31, v32, 0);
              stormPodCountNumLb = this->fields.stormPodCountNumLb;
              v37 = (Il2CppObject *)v33;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
              v38 = LocalizationManager__Get((System_String_o *)StringLiteral_4005/*"COUNT_LIMITED"*/, 0);
              v45 = MaxNum;
              v39 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v45);
              Instance = (DataManager_o *)System_String__Format_75697880(v38, v37, v39, 0);
              if ( stormPodCountNumLb )
              {
                UILabel__set_text(stormPodCountNumLb, (System_String_o *)Instance, 0);
                Instance = (DataManager_o *)ScrPlayerStatus_TypeInfo;
                v41 = this->fields.stormPodCountNumLb;
                if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v5, v40);
                if ( v41 )
                {
                  UILabel__SetCondensedScale(
                    v41,
                    ScrPlayerStatus_TypeInfo->static_fields->STORMPOD_COUNT_MAX_WIDTH,
                    0,
                    0);
                  stormPodIcon = this->fields.stormPodIcon;
                  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v42, v43);
                  AtlasManager__SetEventSprite(stormPodIcon, (System_String_o *)StringLiteral_22073/*"item_mini_49"*/, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_2213CDC(Instance, v5);
  }
}


void ScrPlayerStatus__mfUpdatePrams(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 isUpdateFaceTexture; // w8
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  int32_t LevelMax; // w0
  UILabel_o *mcLevelStrP; // x20
  System_String_o *v9; // x1
  UILabel_o *mcLevelMaxP; // x20
  System_String_o *v11; // x0
  __int64 v12; // x2
  UnityEngine_Transform_o *v13; // x20
  struct UILabel_o *v14; // x8
  int mWidth; // s0
  struct ScrPlayerStatus_StaticFields *static_fields; // x8
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  struct ScrPlayerStatus_OverwriteMasterInfo_o *overwriteMasterInfo; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *mcGiftButtonP; // x20
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF
  int64_t recoverTime; // [xsp+10h] [xbp-30h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D68D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D68D = 1;
  }
  count = 0;
  isUpdateFaceTexture = this->fields.isUpdateFaceTexture;
  recoverTime = 0;
  v26 = 0;
  if ( isUpdateFaceTexture )
    ScrPlayerStatus__ResetMasterFaceTexture(this, 0, v2);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserExpMaster___);
  if ( !Instance )
    goto LABEL_33;
  LevelMax = UserExpMaster__GetLevelMax((UserExpMaster_o *)Instance, 0);
  mcLevelStrP = this->fields.mcLevelStrP;
  v26 = LevelMax;
  Instance = (DataManager_o *)System_Int32__ToString((int)this + 536, 0);
  if ( !mcLevelStrP )
    goto LABEL_33;
  v9 = Instance ? (System_String_o *)Instance : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(mcLevelStrP, v9, 0);
  mcLevelMaxP = this->fields.mcLevelMaxP;
  v11 = System_Int32__ToString((int32_t)&v26, 0);
  Instance = (DataManager_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_1123/*"/"*/, v11, 0);
  if ( !mcLevelMaxP )
    goto LABEL_33;
  UILabel__set_text(mcLevelMaxP, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.mcLevelMaxP;
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  v13 = (UnityEngine_Transform_o *)Instance;
  if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v6, v12);
  v14 = this->fields.mcLevelStrP;
  if ( !v14 )
    goto LABEL_33;
  if ( !v13 )
    goto LABEL_33;
  mWidth = v14->fields.mWidth;
  static_fields = ScrPlayerStatus_TypeInfo->static_fields;
  v29.fields.y = static_fields->MAX_LEVEL_BASE_POS_Y;
  v29.fields.x = static_fields->MAX_LEVEL_BASE_POS_X + (float)mWidth;
  v29.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v13, v29, 0);
  Instance = (DataManager_o *)this->fields.mcExpSldP;
  if ( !Instance )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, this->fields.mfExpPar, 0);
  if ( (this->fields.miApMax & 0x80000000) == 0 )
  {
    ScrPlayerStatus__InitApRecoverLb(this, v6);
    ScrPlayerStatus__UpdateAp(this, v17);
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
    ScrPlayerBP__SetupDispRaidPoint((ScrPlayerBP_o *)Instance, this->fields.userGameEntity, v19);
  }
  ScrPlayerStatus__SetOverwriteMasterInfo(this, v6);
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
    sub_2213CDC(Instance, v6);
  }
  UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)Instance, &count, &recoverTime, 0);
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
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
  ScrPlayerStatus__mfCheckMasterMission(this, v6);
  ScrPlayerStatus__InitCompleteMissionLb(this, v24);
  ScrPlayerStatus__mfSetStoneAndFragment(this, v25);
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
  MissionNaviTransitionBoardItem_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v10 = (MissionNaviTransitionBoardItem_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.sortValue0 = (int64_t)spellIcon;
  v10 = (MissionNaviTransitionBoardItem_o *)((char *)v10 + 32);
  LODWORD(v10[-1].fields._NaviAction_k__BackingField) = warId;
  HIDWORD(v10[-1].fields._NaviAction_k__BackingField) = masterIcon;
  v10[-1].fields._BoardType_k__BackingField = count;
  sub_2213A04(v10, (int32_t)spellIcon, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._spellIconId_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._spellIconId_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D6BA & 1) == 0 )
  {
    sub_2213A60(&ScrPlayerStatus___c_TypeInfo);
    byte_596D6BA = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ScrPlayerStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScrPlayerStatus___c_TypeInfo->static_fields->__9 = (struct ScrPlayerStatus___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ScrPlayerStatus___c_TypeInfo->static_fields,
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


void ScrPlayerStatus___c___OnClickCloseNextExp_b__154_0(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  ;
}


void ScrPlayerStatus___c___OnClickCompleteMissionBtn_b__140_1(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  ;
}


void ScrPlayerStatus___c___OpenMasterProfile_b__151_0(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x19
  float DEFAULT_FADE_TIME; // s8
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x8
  System_Action_o *_9__151_1; // x20
  Il2CppObject *v11; // x21
  struct ScrPlayerStatus___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596D6BB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ScrPlayerStatus___c__OpenMasterProfile_b__151_1__);
    sub_2213A60(&ScrPlayerStatus___c_TypeInfo);
    byte_596D6BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)v4;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  Instance = ScrPlayerStatus___c_TypeInfo;
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  if ( !*(&ScrPlayerStatus___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v3, v5);
    Instance = ScrPlayerStatus___c_TypeInfo;
  }
  static_fields = (struct ScrPlayerStatus___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__151_1 = static_fields->__9__151_1;
  if ( !_9__151_1 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v3, v5);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__151_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__151_1, v11, Method_ScrPlayerStatus___c__OpenMasterProfile_b__151_1__, 0);
    v12 = ScrPlayerStatus___c_TypeInfo->static_fields;
    v12->__9__151_1 = _9__151_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__151_1, (int32_t)_9__151_1, v13, v14, v15, v16, v17, v18);
  }
  if ( !v7 )
LABEL_14:
    sub_2213CDC(Instance, v3);
  CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, _9__151_1, 0);
}


void ScrPlayerStatus___c___OpenMasterProfile_b__151_1(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t ScrPlayerStatus___c___SortLimitedMstMissionViewList_b__188_0(
        ScrPlayerStatus___c_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *info,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x8

  if ( !info || (MstMissionEntity_k__BackingField = info->fields._MstMissionEntity_k__BackingField) == 0 )
    sub_2213CDC(this, info);
  return MstMissionEntity_k__BackingField->fields.priority;
}


bool ScrPlayerStatus___c___UpdateCompleteMissionIconVisibility_b__220_0(
        ScrPlayerStatus___c_o *this,
        EventEntity_ScriptData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.isHiddenTerminalCompleteMissionButton;
}


bool ScrPlayerStatus___c___mfCheckMasterMission_b__184_0(
        ScrPlayerStatus___c_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._MissionAchiveCount_k__BackingField == x->fields._MissionCount_k__BackingField;
}


void ScrPlayerStatus___c__DisplayClass136_0___ctor(
        ScrPlayerStatus___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass136_0___ClickBannerOpenMasterMission_b__0(
        ScrPlayerStatus___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t typeIndex; // w19
  const MethodInfo *v14; // x2

  if ( (byte_596D6BC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus_UpdateGiftBoxNum__);
    byte_596D6BC = 1;
  }
  _4__this = this->fields.__4__this;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)_4__this, Method_ScrPlayerStatus_UpdateGiftBoxNum__, 0);
  if ( !_4__this )
    sub_2213CDC(v5, v6);
  typeIndex = this->fields.typeIndex;
  _4__this->fields.isFromCompleteMission = 0;
  _4__this->fields.mAfterCloseMasterMission = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.mAfterCloseMasterMission,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ScrPlayerStatus__OpenMasterMission_43791132(_4__this, typeIndex, v14);
}


void ScrPlayerStatus___c__DisplayClass137_0___ctor(
        ScrPlayerStatus___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass137_0___ClickLoginDialogOpenMasterMission_b__0(
        ScrPlayerStatus___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ScrPlayerStatus___c__DisplayClass137_0_o *v8; // x19
  System_Action_o *_9__1; // x21
  struct ScrPlayerStatus_o *_4__this; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t typeIndex; // w19
  const MethodInfo *v18; // x2

  v8 = this;
  if ( (byte_596D6BD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ScrPlayerStatus___c__DisplayClass137_0_o *)sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass137_0__ClickLoginDialogOpenMasterMission_b__1__);
    byte_596D6BD = 1;
  }
  _9__1 = v8->fields.__9__1;
  _4__this = v8->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v8,
      Method_ScrPlayerStatus___c__DisplayClass137_0__ClickLoginDialogOpenMasterMission_b__1__,
      0);
    v8->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__9__1, (int32_t)_9__1, v11, v12, v13, v14, v15, v16);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  typeIndex = v8->fields.typeIndex;
  _4__this->fields.isFromCompleteMission = 0;
  _4__this->fields.mAfterCloseMasterMission = _9__1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.mAfterCloseMasterMission,
    (int32_t)_9__1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  ScrPlayerStatus__OpenMasterMission_43791132(_4__this, typeIndex, v18);
}


void ScrPlayerStatus___c__DisplayClass137_0___ClickLoginDialogOpenMasterMission_b__1(
        ScrPlayerStatus___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ScrPlayerStatus___c__DisplayClass137_0_o *v3; // x19
  struct System_Action_o *closeCallback; // x8

  if ( !this->fields.__4__this
    || (v3 = this,
        ScrPlayerStatus__SetVisibilitySpotWebView((ScrPlayerStatus_o *)this, 1, v2),
        (this = (ScrPlayerStatus___c__DisplayClass137_0_o *)v3->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  ScrPlayerStatus__UpdateGiftBoxNum((ScrPlayerStatus_o *)this, method);
  closeCallback = v3->fields.closeCallback;
  if ( closeCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallback->fields.invoke_impl)(
      closeCallback->fields.method_code,
      closeCallback->fields.method);
}


void ScrPlayerStatus___c__DisplayClass156_0___ctor(
        ScrPlayerStatus___c__DisplayClass156_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass156_0___ShowEnabledRuntimePermissionDialog_b__0(
        ScrPlayerStatus___c__DisplayClass156_0_o *this,
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

  if ( (byte_596D6BE & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus_OnPermissionDenied__);
    sub_2213A60(&Method_ScrPlayerStatus_OnPermissionGranted__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D6BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseLocationTermsOfUseDlg((CommonUI_o *)Instance, 0);
  if ( result )
  {
    permissionName = this->fields.permissionName;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v9 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v9, _4__this, Method_ScrPlayerStatus_OnPermissionGranted__, 0);
    v10 = (Il2CppObject *)this->fields.__4__this;
    v11 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
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
    sub_2213CDC(Instance, v6);
  v12->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___c__DisplayClass160_0___ctor(
        ScrPlayerStatus___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass160_0___SetLocationCheck_b__0(
        ScrPlayerStatus___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  _4__this->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___c__DisplayClass160_0___SetLocationCheck_b__1(
        ScrPlayerStatus___c__DisplayClass160_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct EventEntity_array *list; // x8

  if ( (byte_596D6BF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D6BF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        sub_2213CE4(Instance);
      if ( Instance )
      {
        ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, list->m_Items[0], v7);
        return;
      }
    }
LABEL_11:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_11;
  LOBYTE(Instance->fields.TreasureBoxDialogPrefab) = 0;
}


void ScrPlayerStatus___c__DisplayClass160_0___SetLocationCheck_b__2(
        ScrPlayerStatus___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  _4__this->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___c__DisplayClass161_0___ctor(
        ScrPlayerStatus___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScrPlayerStatus___c__DisplayClass161_0___locationRequest_b__0(
        ScrPlayerStatus___c__DisplayClass161_0_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  EventLocationRequest_o *Request_object; // x0
  __int64 v14; // x1
  System_String_o *v15; // x24
  CommonConfirmDialog_ClickDelegate_o *_9__1; // x25
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct CommonConfirmDialog_ClickDelegate_o **p__9__1; // x0
  int32_t v24; // w1
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  struct EventEntity_o *eventEnt; // x8
  __int128 v30; // q1
  int32_t id; // w1
  __int64 v32; // x2
  struct EventEntity_o *v33; // x8
  CommonUI_o *v34; // x20
  System_String_o *name; // x21
  System_String_o *v36; // x22
  System_String_o *v37; // x0
  System_String_o *v38; // x22
  System_Action_o *_9__3; // x23
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x1
  __int64 v47; // x2
  System_String_o *v48; // x22
  System_String_o *v49; // x0
  UnityEngine_LocationInfo_o v50; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_596D6C0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_EventLocationRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_ScrPlayerStatus_EndLocationRequest__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass161_0__locationRequest_b__1__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass161_0__locationRequest_b__2__);
    sub_2213A60(&Method_ScrPlayerStatus___c__DisplayClass161_0__locationRequest_b__3__);
    sub_2213A60(&StringLiteral_8657/*"LOCATION_DLG_TIMEOUT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_8658/*"LOCATION_DLG_TIMEOUT_TITLE"*/);
    sub_2213A60(&StringLiteral_8656/*"LOCATION_DLG_TIMEOUT_DECIDE"*/);
    sub_2213A60(&StringLiteral_8655/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/);
    sub_2213A60(&StringLiteral_8651/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/);
    sub_2213A60(&StringLiteral_8649/*"LOCATION_DLG_DEVICE_OPTION_RETRY_DECIDE"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_8650/*"LOCATION_DLG_DEVICE_OPTION_RETRY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_8647/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/);
    byte_596D6C0 = 1;
  }
  if ( result <= 2 )
  {
    if ( (unsigned int)result >= 2 )
    {
      if ( result != 2 )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8651/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/, 0);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8650/*"LOCATION_DLG_DEVICE_OPTION_RETRY_MESSAGE"*/, 0);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8649/*"LOCATION_DLG_DEVICE_OPTION_RETRY_DECIDE"*/, 0);
      Request_object = (EventLocationRequest_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
      v15 = (System_String_o *)Request_object;
      _9__1 = this->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          _9__1,
          (Il2CppObject *)this,
          Method_ScrPlayerStatus___c__DisplayClass161_0__locationRequest_b__1__,
          0);
        p__9__1 = &this->fields.__9__1;
        v24 = (int)_9__1;
        this->fields.__9__1 = _9__1;
LABEL_29:
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__9__1, v24, v17, v18, v19, v20, v21, v22);
        goto LABEL_30;
      }
      goto LABEL_30;
    }
    goto LABEL_18;
  }
  if ( result != 3 )
  {
    if ( result != 4 )
    {
      if ( result != 5 )
        return;
      _4__this = (Il2CppObject *)this->fields.__4__this;
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v26, _4__this, Method_ScrPlayerStatus_EndLocationRequest__, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27, v28);
      Request_object = (EventLocationRequest_o *)NetworkManager__getRequest_object_(
                                                   v26,
                                                   (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventLocationRequest___);
      eventEnt = this->fields.eventEnt;
      if ( eventEnt && Request_object )
      {
        v30 = *(_OWORD *)&locInfo->fields.m_Altitude;
        id = eventEnt->fields.id;
        *(_OWORD *)&v50.fields.m_Timestamp = *(_OWORD *)&locInfo->fields.m_Timestamp;
        *(_OWORD *)&v50.fields.m_Altitude = v30;
        EventLocationRequest__beginRequest(Request_object, id, &v50, 0);
        return;
      }
LABEL_33:
      sub_2213CDC(Request_object, v14);
    }
LABEL_18:
    Request_object = (EventLocationRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = this->fields.eventEnt;
    if ( v33 )
    {
      v34 = (CommonUI_o *)Request_object;
      name = v33->fields.name;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v32);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8655/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, 0);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8647/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0);
      Request_object = (EventLocationRequest_o *)System_String__Concat_75651716(v36, v37, 0);
      v38 = (System_String_o *)Request_object;
      _9__3 = this->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)this,
          Method_ScrPlayerStatus___c__DisplayClass161_0__locationRequest_b__3__,
          0);
        this->fields.__9__3 = _9__3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__9__3,
          (int32_t)_9__3,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      if ( v34 )
      {
        CommonUI__OpenNotificationDialog(v34, name, v38, _9__3, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
        return;
      }
    }
    goto LABEL_33;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8658/*"LOCATION_DLG_TIMEOUT_TITLE"*/, 0);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_8657/*"LOCATION_DLG_TIMEOUT_MESSAGE"*/, 0);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8647/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0);
  v11 = System_String__Concat_75651716(v48, v49, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8656/*"LOCATION_DLG_TIMEOUT_DECIDE"*/, 0);
  Request_object = (EventLocationRequest_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  v15 = (System_String_o *)Request_object;
  _9__1 = this->fields.__9__2;
  if ( !_9__1 )
  {
    _9__1 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ScrPlayerStatus___c__DisplayClass161_0__locationRequest_b__2__,
      0);
    p__9__1 = &this->fields.__9__2;
    v24 = (int)_9__1;
    this->fields.__9__2 = _9__1;
    goto LABEL_29;
  }
LABEL_30:
  if ( !Instance )
    goto LABEL_33;
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v10,
    v11,
    v12,
    v15,
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
}


void ScrPlayerStatus___c__DisplayClass161_0___locationRequest_b__1(
        ScrPlayerStatus___c__DisplayClass161_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596D6C1 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D6C1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseConfirmDialog(Instance, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( isDecide )
  {
    if ( Instance )
    {
      ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, this->fields.eventEnt, v7);
      return;
    }
LABEL_9:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_9;
  LOBYTE(Instance->fields.TreasureBoxDialogPrefab) = 0;
}


void ScrPlayerStatus___c__DisplayClass161_0___locationRequest_b__2(
        ScrPlayerStatus___c__DisplayClass161_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596D6C2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D6C2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseConfirmDialog(Instance, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( isDecide )
  {
    if ( Instance )
    {
      ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, this->fields.eventEnt, v7);
      return;
    }
LABEL_9:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_9;
  LOBYTE(Instance->fields.TreasureBoxDialogPrefab) = 0;
}


void ScrPlayerStatus___c__DisplayClass161_0___locationRequest_b__3(
        ScrPlayerStatus___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  _4__this->fields.isLocationBusy = 0;
}


void ScrPlayerStatus___c__DisplayClass188_0___ctor(
        ScrPlayerStatus___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ScrPlayerStatus___c__DisplayClass188_0___SortLimitedMstMissionViewList_b__1(
        ScrPlayerStatus___c__DisplayClass188_0_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *info,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x8

  if ( !info || (MstMissionEntity_k__BackingField = info->fields._MstMissionEntity_k__BackingField) == 0 )
    sub_2213CDC(this, info);
  return MstMissionEntity_k__BackingField->fields.endedAt >= this->fields.nowTime;
}


int64_t ScrPlayerStatus___c__DisplayClass188_0___SortLimitedMstMissionViewList_b__2(
        ScrPlayerStatus___c__DisplayClass188_0_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *info,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x8
  __int64 v4; // x9

  if ( !info || (MstMissionEntity_k__BackingField = info->fields._MstMissionEntity_k__BackingField) == 0 )
    sub_2213CDC(this, info);
  v4 = 40;
  if ( MstMissionEntity_k__BackingField->fields.endedAt < this->fields.nowTime )
    v4 = 48;
  return *(int64_t *)((char *)&MstMissionEntity_k__BackingField->klass + v4);
}