void __fastcall ScrPlayerStatus___cctor(const MethodInfo *method)
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
  struct ScrPlayerStatus_StaticFields *static_fields; // x0
  ManagerConfig_c *v17; // x8
  int64_t v18; // x1
  struct ScrPlayerStatus_StaticFields *v19; // x0
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct ScrPlayerStatus_StaticFields *v27; // x0
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct ScrPlayerStatus_StaticFields *v35; // x8

  if ( (byte_4B13424 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_17235/*"banner_icon_mission_limited_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16158/*"[ffb505]"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_8589/*"LocationInfoAgreement"*/, v14, v15);
    byte_4B13424 = 1;
  }
  static_fields = ScrPlayerStatus_TypeInfo->static_fields;
  static_fields->MV_SPD_TIME = 0.25;
  v17 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v17 = ManagerConfig_TypeInfo;
    static_fields = ScrPlayerStatus_TypeInfo->static_fields;
  }
  static_fields->FRAME_OUT_POS_X = (float)-v17->static_fields->WIDTH;
  v18 = StringLiteral_16158/*"[ffb505]"*/;
  static_fields->AP_OVER_TXT_COLOR_STR = (struct System_String_o *)StringLiteral_16158/*"[ffb505]"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->AP_OVER_TXT_COLOR_STR, v18, v2, v3, v4, v5, v6, v7);
  v19 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_QWORD *)&v19->MAX_LEVEL_BASE_POS_X = 0xC1400000C1500000LL;
  v20 = StringLiteral_8589/*"LocationInfoAgreement"*/;
  v19->LOCATION_TOS_AGREED_KEY = (struct System_String_o *)StringLiteral_8589/*"LocationInfoAgreement"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->LOCATION_TOS_AGREED_KEY, v20, v21, v22, v23, v24, v25, v26);
  v27 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_OWORD *)&v27->NOTICE_NUMBER_BADGE_DEPTH = xmmword_BD21F0;
  v27->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v28 = StringLiteral_17235/*"banner_icon_mission_limited_"*/;
  v27->MASTER_MISSION_ICON_LIMITED_PREFIX = (struct System_String_o *)StringLiteral_17235/*"banner_icon_mission_limited_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->MASTER_MISSION_ICON_LIMITED_PREFIX, v28, v29, v30, v31, v32, v33, v34);
  v35 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_QWORD *)&v35->CMD_SPELL_SCROLLVIEW_DEPTH = 0x3E19999A000000DCLL;
  *(_OWORD *)&v35->STONE_COUNT_MAX_WIDTH = xmmword_BD2650;
}


void __fastcall ScrPlayerStatus___ctor(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B13423 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B13423 = 1;
  }
  this->fields.miMasterUserEquipID = 1LL;
  this->fields.meMasterGender = 2;
  this->fields.mfApParOld = -1.0;
  this->fields.isDispMax = 1;
  this->fields.oldRp = -1;
  this->fields.mstMissionStartsAt = -1LL;
  v9 = StringLiteral_1/*""*/;
  this->fields.overwriteSpellIconId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overwriteSpellIconId, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__Awake(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  BaseDialog_o *nextExpDialog; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_GameObject_o *v10; // x0
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  nextExpDialog = this->fields.nextExpDialog;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v7 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  if ( !nextExpDialog )
    sub_1BCAA3C(v5, v6);
  v14.fields.z = -v9;
  v14.fields.y = -v8;
  v14.fields.x = -v7;
  BaseDialog__SetMaskSpritePosition(nextExpDialog, v14, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.mFrameInPosX = GameObjectExtensions__GetLocalPositionX(v10, 0LL);
  ScrPlayerStatus__FrameInOut(this, 0, 1, v11);
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 1, v12);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 1, v13);
}


void __fastcall ScrPlayerStatus__ChangeViewCompleteMissionLb(
        ScrPlayerStatus_o *this,
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

  if ( (byte_4B13414 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_8766/*"MISSION_ACHIVE_MSG"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3812/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_13488/*"TIME_REST_ACHIVE"*/, v17, v18);
    byte_4B13414 = 1;
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


void __fastcall ScrPlayerStatus__ChangeViewMstMissionLb(
        ScrPlayerStatus_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *mstMissionInfo,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
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
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x21
  int32_t MissionType; // w24
  int32_t v21; // w23
  int32_t v22; // w22
  __int64 v23; // x1
  UISprite_o *masterMissionLimitedBgSp; // x22
  ScrPlayerStatus_c *v25; // x0
  System_String_o *MASTER_MISSION_ICON_LIMITED_PREFIX; // x23
  System_String_o *v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x23
  ScrPlayerStatus_c *v30; // x0
  UISprite_o *v31; // x22
  __int64 v32; // x1
  System_String_o *v33; // x23
  __int64 v34; // x1
  UILabel_o *masterMissionDetailOverlapLb; // x22
  UILabel_o *masterMissionDetailLb; // x23
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  MstMissionEntity_c *v38; // x0
  ScrPlayerStatus_o *v39; // x24
  UILabel_o *masterMissionCountNumLb; // x22
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *masterMissionCountNumLb2; // x20
  __int64 v43; // x1
  int64_t NextDayStartTime; // x20
  struct UILabel_o *masterMissionAlertNumLb; // x8
  struct UILabel_o *masterMissionAlertUnitLb; // x8
  __int64 v47; // x1
  ScrPlayerStatus_o *masterMissionAlertMsgLb; // x19
  ScrPlayerStatus_o *v49; // x1
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4B13413 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, mstMissionInfo, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&MstMissionEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_13488/*"TIME_REST_ACHIVE"*/, v15, v16);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v17, v18);
    byte_4B13413 = 1;
  }
  if ( !mstMissionInfo )
    goto LABEL_59;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_59;
  MissionType = MstMissionEntity__getMissionType(mstMissionInfo->fields._MstMissionEntity_k__BackingField, 0LL);
  v21 = MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0LL);
  v22 = MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0LL);
  if ( MissionType != 3 && v21 != 2 && v22 != 5 )
  {
    ScrPlayerStatus__HideMstMissionIconLb(v4, (const MethodInfo *)mstMissionInfo);
    return;
  }
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionDailyBgObj;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, MissionType == 3, 0LL);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionWeeklyBgObj;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v21 == 2, 0LL);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionLimitedBgObj;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22 == 5, 0LL);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAnimationLabelsRoot;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22 == 5, 0LL);
  if ( v22 == 5 )
  {
    masterMissionLimitedBgSp = v4->fields.masterMissionLimitedBgSp;
    v25 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v23);
      v25 = ScrPlayerStatus_TypeInfo;
    }
    MASTER_MISSION_ICON_LIMITED_PREFIX = v25->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX;
    v27 = System_Int32__ToString((int)MstMissionEntity_k__BackingField + 56, 0LL);
    v29 = System_String__Concat_62401220(MASTER_MISSION_ICON_LIMITED_PREFIX, v27, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
    if ( !AtlasManager__SetBanner(masterMissionLimitedBgSp, v29, 0LL) )
    {
      v30 = ScrPlayerStatus_TypeInfo;
      v31 = v4->fields.masterMissionLimitedBgSp;
      if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, mstMissionInfo);
        v30 = ScrPlayerStatus_TypeInfo;
      }
      v33 = System_String__Concat_62401220(
              v30->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX,
              (System_String_o *)StringLiteral_1209/*"0"*/,
              0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
      AtlasManager__SetBanner(v31, v33, 0LL);
    }
    this = (ScrPlayerStatus_o *)v4->fields.masterMissionLimitedBgSp;
    if ( !this )
      goto LABEL_59;
    ((void (__fastcall *)(ScrPlayerStatus_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
    masterMissionDetailLb = v4->fields.masterMissionDetailLb;
    masterMissionDetailOverlapLb = v4->fields.masterMissionDetailOverlapLb;
    script = MstMissionEntity_k__BackingField->fields.script;
    v38 = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, v34);
      v38 = MstMissionEntity_TypeInfo;
    }
    this = (ScrPlayerStatus_o *)EntityScriptUtil__GetStringValue(
                                  script,
                                  v38->static_fields->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
                                  0LL,
                                  0LL);
    if ( !masterMissionDetailLb )
      goto LABEL_59;
    v39 = this;
    UILabel__set_text(masterMissionDetailLb, (System_String_o *)this, 0LL);
    if ( !masterMissionDetailOverlapLb )
      goto LABEL_59;
    UILabel__set_text(masterMissionDetailOverlapLb, (System_String_o *)v39, 0LL);
  }
  masterMissionCountNumLb = v4->fields.masterMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  this = (ScrPlayerStatus_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0LL);
  if ( !masterMissionCountNumLb )
    goto LABEL_59;
  UILabel__set_text(masterMissionCountNumLb, (System_String_o *)this, 0LL);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  masterMissionCountNumLb2 = v4->fields.masterMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  this = (ScrPlayerStatus_o *)System_Int32__ToString((int32_t)&MissionAchiveCount_k__BackingField, 0LL);
  if ( !masterMissionCountNumLb2 )
    goto LABEL_59;
  UILabel__set_text(masterMissionCountNumLb2, (System_String_o *)this, 0LL);
  if ( MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0LL) == 3 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v43);
    NextDayStartTime = NetworkManager__getNextDayStartTime(0LL);
  }
  else
  {
    NextDayStartTime = MstMissionEntity_k__BackingField->fields.endedAt;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
  LocalizationManager__GetRestTimeWithSeparatedTimeStr(
    NextDayStartTime,
    &v4->fields.mstMissionTimeNumStr,
    &v4->fields.mstMissionTimeCntStr,
    0LL);
  masterMissionAlertNumLb = v4->fields.masterMissionAlertNumLb;
  if ( !masterMissionAlertNumLb )
    goto LABEL_59;
  this = (ScrPlayerStatus_o *)v4->fields.mstMissionTimeNumStr;
  if ( !this )
    goto LABEL_59;
  this = (ScrPlayerStatus_o *)System_String__Equals_62409536(
                                (System_String_o *)this,
                                masterMissionAlertNumLb->fields.mText,
                                0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    masterMissionAlertUnitLb = v4->fields.masterMissionAlertUnitLb;
    if ( !masterMissionAlertUnitLb )
      goto LABEL_59;
    this = (ScrPlayerStatus_o *)v4->fields.mstMissionTimeCntStr;
    if ( !this )
      goto LABEL_59;
    if ( System_String__Equals_62409536((System_String_o *)this, masterMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  this = (ScrPlayerStatus_o *)System_String__IsNullOrEmpty(v4->fields.mstMissionTimeNumStr, 0LL);
  if ( !v4->fields.masterMissionAlertTitleLb )
    goto LABEL_59;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(v4->fields.masterMissionAlertTitleLb, 1, 0LL);
    this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertNumLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v4->fields.mstMissionTimeNumStr, 0LL);
      this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertUnitLb;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, v4->fields.mstMissionTimeCntStr, 0LL);
        this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertMsgLb;
        if ( this )
        {
          v49 = (ScrPlayerStatus_o *)StringLiteral_1/*""*/;
          goto LABEL_57;
        }
      }
    }
LABEL_59:
    sub_1BCAA3C(this, mstMissionInfo);
  }
  UnityEngine_GameObject__SetActive(v4->fields.masterMissionAlertTitleLb, 0, 0LL);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertNumLb;
  if ( !this )
    goto LABEL_59;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertUnitLb;
  if ( !this )
    goto LABEL_59;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  masterMissionAlertMsgLb = (ScrPlayerStatus_o *)v4->fields.masterMissionAlertMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
  this = (ScrPlayerStatus_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13488/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !masterMissionAlertMsgLb )
    goto LABEL_59;
  v49 = this;
  this = masterMissionAlertMsgLb;
LABEL_57:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v49, 0LL);
}


void __fastcall ScrPlayerStatus__CheckAssert(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ClickBannerOpenMasterMission(
        ScrPlayerStatus_o *this,
        int32_t typeIndex,
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
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  AvalonSceneManager_c *v27; // x8
  CommonUI_o *v28; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x20

  if ( (byte_4B133DF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&typeIndex, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass150_0__ClickBannerOpenMasterMission_b__0__, v10, v11);
    sub_1BCA7E0(&ScrPlayerStatus___c__DisplayClass150_0_TypeInfo, v12, v13);
    byte_4B133DF = 1;
  }
  v14 = sub_1BCAA2C(ScrPlayerStatus___c__DisplayClass150_0_TypeInfo, *(_QWORD *)&typeIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v14 + 24) = typeIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  v28 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v24);
    v27 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v14,
    Method_ScrPlayerStatus___c__DisplayClass150_0__ClickBannerOpenMasterMission_b__0__,
    0LL);
  if ( !v28 )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadeout(v28, 1, DEFAULT_FADE_TIME, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ClickLoginDialogOpenMasterMission(
        ScrPlayerStatus_o *this,
        int32_t typeIndex,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  AvalonSceneManager_c *v34; // x8
  CommonUI_o *v35; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x20

  if ( (byte_4B133E0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&typeIndex, closeCallback);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass151_0__ClickLoginDialogOpenMasterMission_b__0__, v11, v12);
    sub_1BCA7E0(&ScrPlayerStatus___c__DisplayClass151_0_TypeInfo, v13, v14);
    byte_4B133E0 = 1;
  }
  v15 = sub_1BCAA2C(ScrPlayerStatus___c__DisplayClass151_0_TypeInfo, *(_QWORD *)&typeIndex, closeCallback, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = closeCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)closeCallback, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v15 + 32) = typeIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = AvalonSceneManager_TypeInfo;
  v35 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v31);
    v34 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
  v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v15,
    Method_ScrPlayerStatus___c__DisplayClass151_0__ClickLoginDialogOpenMasterMission_b__0__,
    0LL);
  if ( !v35 )
LABEL_8:
    sub_1BCAA3C(v16, v17);
  CommonUI__maskFadeout(v35, 1, DEFAULT_FADE_TIME, v37, 0LL);
}


void __fastcall ScrPlayerStatus__DisableAllBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_GameObject_o *masterFaceBtnObj; // x0

  if ( (byte_4B1341D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method, v2);
    byte_4B1341D = 1;
  }
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 0, v2);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 0, v4);
  masterFaceBtnObj = this->fields.masterFaceBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.mcGiftButtonP;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  GiftButtonCtrl__set_isEnabled((GiftButtonCtrl_o *)masterFaceBtnObj, 0, 0LL);
  masterFaceBtnObj = this->fields.nextExpOpenBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL);
  masterFaceBtnObj = this->fields.mLocationBtnRoot;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionBtnColl;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionDailyBgColl;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionWeeklyBgColl;
  if ( !masterFaceBtnObj
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionLimitedBgColl) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.commandSpellButtonCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.completeMissionBtnColl) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(masterFaceBtnObj, v5);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL);
}


void __fastcall ScrPlayerStatus__EnableAllBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_GameObject_o *masterFaceBtnObj; // x0

  if ( (byte_4B1341E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method, v2);
    byte_4B1341E = 1;
  }
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 1, v2);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 1, v4);
  masterFaceBtnObj = this->fields.masterFaceBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.mcGiftButtonP;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  GiftButtonCtrl__set_isEnabled((GiftButtonCtrl_o *)masterFaceBtnObj, 1, 0LL);
  masterFaceBtnObj = this->fields.nextExpOpenBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL);
  masterFaceBtnObj = this->fields.mLocationBtnRoot;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionBtnColl;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionDailyBgColl;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL);
  masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionWeeklyBgColl;
  if ( !masterFaceBtnObj
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.masterMissionLimitedBgColl) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.commandSpellButtonCollider) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL),
        (masterFaceBtnObj = (UnityEngine_GameObject_o *)this->fields.completeMissionBtnColl) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(masterFaceBtnObj, v5);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL);
}


void __fastcall ScrPlayerStatus__EndLocationRequest(
        ScrPlayerStatus_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
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
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v39; // x21
  System_String_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x23
  __int64 v45; // x1
  Il2CppObject *v46; // x25
  __int64 v47; // x1
  Il2CppObject *v48; // x20
  System_String_o *v49; // x21
  System_String_o *v50; // x22
  System_String_o *v51; // x23
  __int64 v52; // x2
  __int64 v53; // x3
  ScrPlayerStatus_o *v54; // x24
  GiftEntity_array *monitor; // x25
  BalanceConfig_c *v56; // x0
  int32_t LocationRewardDlgColumn; // w26
  CommonMultiItemGetDlg_OnClickDelegate_o *v58; // x27

  v4 = this;
  if ( (byte_4B133F6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_EventLocationRequest_LocationGift___, v7, v8);
    sub_1BCA7E0(&JsonManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&CommonMultiItemGetDlg_OnClickDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ScrPlayerStatus__EndLocationRequest_b__176_0__, v15, v16);
    sub_1BCA7E0(&Method_ScrPlayerStatus__EndLocationRequest_b__176_1__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_8410/*"LOCATION_GIFT_DLG_CANCEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_8412/*"LOCATION_GIFT_DLG_DETAIL"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_8411/*"LOCATION_GIFT_DLG_DECIDE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_8405/*"LOCATION_DLG_FAIL_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_22293/*"ngParse"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_8404/*"LOCATION_DLG_FAIL_MESSAGE"*/, v33, v34);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&StringLiteral_8413/*"LOCATION_GIFT_DLG_TITLE"*/, v35, v36);
    byte_4B133F6 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22293/*"ngParse"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_8405/*"LOCATION_DLG_FAIL_TITLE"*/, 0LL);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8404/*"LOCATION_DLG_FAIL_MESSAGE"*/, 0LL);
    v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
    System_Action___ctor(v44, (Il2CppObject *)v4, Method_ScrPlayerStatus__EndLocationRequest_b__176_0__, 0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v39, v40, v44, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
LABEL_20:
    sub_1BCAA3C(this, result);
  }
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    v4->fields.isLocationBusy = 0;
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v45);
    v46 = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_EventLocationRequest_LocationGift___);
    v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8413/*"LOCATION_GIFT_DLG_TITLE"*/, 0LL);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8412/*"LOCATION_GIFT_DLG_DETAIL"*/, 0LL);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_8410/*"LOCATION_GIFT_DLG_CANCEL"*/, 0LL);
    this = (ScrPlayerStatus_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8411/*"LOCATION_GIFT_DLG_DECIDE"*/, 0LL);
    if ( !v46 )
      goto LABEL_20;
    v54 = this;
    monitor = (GiftEntity_array *)v46[1].monitor;
    v56 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, result);
      v56 = BalanceConfig_TypeInfo;
    }
    LocationRewardDlgColumn = v56->static_fields->LocationRewardDlgColumn;
    v58 = (CommonMultiItemGetDlg_OnClickDelegate_o *)sub_1BCAA2C(
                                                       CommonMultiItemGetDlg_OnClickDelegate_TypeInfo,
                                                       result,
                                                       v52,
                                                       v53);
    CommonMultiItemGetDlg_OnClickDelegate___ctor(
      v58,
      (Il2CppObject *)v4,
      Method_ScrPlayerStatus__EndLocationRequest_b__176_1__,
      0LL);
    if ( !v48 )
      goto LABEL_20;
    CommonUI__OpenMultiGiftGetDialog(
      (CommonUI_o *)v48,
      v49,
      v50,
      v51,
      (System_String_o *)v54,
      monitor,
      LocationRewardDlgColumn,
      v58,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ExitCompleteMission(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B133FE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__ExitCompleteMission_b__185_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B133FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitCompleteMission_b__185_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ExitMasterMission(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B133FD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__ExitMasterMission_b__184_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B133FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterMission_b__184_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall ScrPlayerStatus__ExitMasterProfile(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B133EE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__ExitMasterProfile_b__166_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B133EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterProfile_b__166_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__FrameIn(ScrPlayerStatus_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  ScrPlayerStatus__SetupDispRaidPoint(this, (const MethodInfo *)is_force);
  ScrPlayerStatus__FrameInOut(this, 1, is_force, v5);
  ScrPlayerStatus__UpdateCompleteMissionIconVisibility(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__FrameInOut(
        ScrPlayerStatus_o *this,
        bool is_framein,
        bool is_force,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  ScrPlayerStatus_c *v19; // x8
  float mFrameInPosX; // s14
  UnityEngine_GameObject_o *v21; // x21
  struct ScrPlayerStatus_StaticFields *static_fields; // x8
  float FRAME_OUT_POS_X; // s15
  float v24; // s8
  __int64 v25; // x1
  Il2CppObject *Component_object; // x20
  __int64 v27; // x1
  const MethodInfo *v28; // x1
  ScrPlayerStatus_c *v29; // x0
  float MV_SPD_TIME; // s9
  float IntpTime_AutoResume; // s13
  float y; // s9
  float z; // s10
  float v34; // s11
  float v35; // s12
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s3
  float v40; // s4
  UnityEngine_GameObject_o *v41; // x21
  UnityEngine_GameObject_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13420 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, is_framein, is_force);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, v13, v14);
    sub_1BCA7E0(&StringLiteral_6951/*"FrameInOutEnd"*/, v15, v16);
    byte_4B13420 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19 = ScrPlayerStatus_TypeInfo;
  mFrameInPosX = this->fields.mFrameInPosX;
  v21 = gameObject;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v18);
    v19 = ScrPlayerStatus_TypeInfo;
  }
  static_fields = v19->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  if ( is_framein )
    v24 = mFrameInPosX;
  else
    v24 = static_fields->FRAME_OUT_POS_X;
  if ( !is_force && v24 != GameObjectExtensions__GetLocalPositionX(v21, 0LL) )
  {
    v29 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v18);
      v29 = ScrPlayerStatus_TypeInfo;
    }
    MV_SPD_TIME = v29->static_fields->MV_SPD_TIME;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(MV_SPD_TIME, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(v21, 0LL);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v57 = GameObjectExtensions__GetLocalPosition(v21, 0LL);
    v34 = v57.fields.y;
    v35 = v57.fields.z;
    gameObject = (UnityEngine_GameObject_o *)UITweener__Begin_object_(
                                               v21,
                                               IntpTime_AutoResume,
                                               (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
    if ( gameObject )
    {
      if ( is_framein )
        v36 = FRAME_OUT_POS_X;
      else
        v36 = mFrameInPosX;
      if ( is_framein )
        v37 = v34;
      else
        v37 = y;
      if ( is_framein )
        v38 = v35;
      else
        v38 = z;
      if ( is_framein )
        v39 = y;
      else
        v39 = v34;
      if ( is_framein )
        v40 = z;
      else
        v40 = v35;
      v41 = gameObject;
      *(float *)&gameObject[5].monitor = v36;
      *((float *)&gameObject[5].monitor + 1) = v37;
      *(float *)&gameObject[5].fields.m_CachedPtr = v38;
      *((float *)&gameObject[5].fields + 1) = v24;
      *(float *)&gameObject[6].klass = v39;
      *((float *)&gameObject[6].klass + 1) = v40;
      LODWORD(gameObject[1].monitor) = 2;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v41[3].monitor = v42;
      sub_1BCA784((PartyOrganizationUtility_o *)&v41[3].monitor, (int64_t)v42, v43, v44, v45, v46, v47, v48);
      v49 = StringLiteral_6951/*"FrameInOutEnd"*/;
      *(_QWORD *)&v41[3].fields.m_CachedPtr = StringLiteral_6951/*"FrameInOutEnd"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v41[3].fields, v49, v50, v51, v52, v53, v54, v55);
      return;
    }
LABEL_39:
    sub_1BCAA3C(gameObject, v18);
  }
  if ( !v21 )
    goto LABEL_39;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v21,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Component_object, 0LL);
  }
  GameObjectExtensions__SetLocalPositionX(v21, v24, 0LL);
  ScrPlayerStatus__FrameInOutEnd(this, v28);
}


void __fastcall ScrPlayerStatus__FrameInOutEnd(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x2

  if ( (byte_4B13421 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7061/*"GO_NEXT"*/, method, v2);
    byte_4B13421 = 1;
  }
  ScrPlayerStatus__UpdatePanel(this, method);
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_7061/*"GO_NEXT"*/, v4);
}


void __fastcall ScrPlayerStatus__FrameOut(ScrPlayerStatus_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ScrPlayerStatus__FrameInOut(this, 0, is_force, v3);
}


MasterMissionComponent_MasterMissionInfoItem_o *__fastcall ScrPlayerStatus__GetDailyMissionInfoItem(
        ScrPlayerStatus_o *this,
        MstMissionEntity_o *mstMissionEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  EventMissionEntity_array *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventMissionMaster_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  EventMissionEntity_array *v16; // x21
  int32_t MissionClearCount; // w22
  int32_t AchiveMissionNum; // w0
  int32_t max_length; // w20
  int32_t v20; // w21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  MasterMissionComponent_MasterMissionInfoItem_o *v24; // x23

  if ( (byte_4B1340C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4, v5);
    sub_1BCA7E0(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1340C = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !mstMissionEntity )
    goto LABEL_13;
  if ( !MasterData_object )
    goto LABEL_13;
  v13 = (UserEventMissionMaster_o *)Instance;
  Instance = EventMissionMaster__getDailyMasterMissionList(
               (EventMissionMaster_o *)MasterData_object,
               mstMissionEntity->fields.id,
               0LL);
  if ( !Instance )
    goto LABEL_13;
  v16 = Instance;
  if ( *(_QWORD *)&Instance->max_length )
  {
    MissionClearCount = ScrPlayerStatus__GetMissionClearCount((ScrPlayerStatus_o *)Instance, Instance, v14, v15);
    Instance = (EventMissionEntity_array *)MstMissionEntity__isOpenNow(mstMissionEntity, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v13 )
      {
        AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(v13, mstMissionEntity->fields.id, 0LL);
        max_length = v16->max_length;
        v20 = AchiveMissionNum;
        v24 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1BCAA2C(
                                                                  MasterMissionComponent_MasterMissionInfoItem_TypeInfo,
                                                                  v21,
                                                                  v22,
                                                                  v23);
        MasterMissionComponent_MasterMissionInfoItem___ctor(
          v24,
          mstMissionEntity,
          max_length,
          MissionClearCount,
          v20,
          0LL);
        return v24;
      }
LABEL_13:
      sub_1BCAA3C(Instance, v11);
    }
  }
  return 0LL;
}


int32_t __fastcall ScrPlayerStatus__GetEnabledMstMissionCount(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Time; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *currentMissionList; // x8
  int size; // w9
  int v12; // w23
  int64_t v13; // x20
  int32_t v14; // w22
  int32_t v15; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4B13418 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      v4,
      v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B13418 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_10:
    sub_1BCAA3C(Time, v9);
  size = currentMissionList->fields._size;
  v12 = size - 1;
  if ( size < 1 )
    return 0;
  v13 = Time;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentMissionList,
             v14,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    Time = ScrPlayerStatus__IsEnabledMstMission(
             (ScrPlayerStatus_o *)Item,
             (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
             v13,
             v17);
    v15 += Time & 1;
    if ( v12 == v14 )
      return v15;
    currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
    ++v14;
    if ( !currentMissionList )
      goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ScrPlayerStatus__GetFirstMstMissionIndex(
        ScrPlayerStatus_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t Time; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *currentMissionList; // x8
  int size; // w9
  int v13; // w24
  int64_t v14; // x22
  int32_t v15; // w21
  MasterMissionComponent_MasterMissionInfoItem_o *v16; // x23
  const MethodInfo *v17; // x3

  if ( (byte_4B13417 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      *(_QWORD *)&targetType,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      v5,
      v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B13417 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetType);
  Time = NetworkManager__getTime(0LL);
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( !currentMissionList )
    goto LABEL_14;
  size = currentMissionList->fields._size;
  v13 = size - 1;
  if ( size >= 1 )
  {
    v14 = Time;
    v15 = 0;
    do
    {
      Time = (int64_t)System_Collections_Generic_List_object___get_Item(
                        currentMissionList,
                        v15,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Time )
        break;
      v16 = (MasterMissionComponent_MasterMissionInfoItem_o *)Time;
      Time = *(_QWORD *)(Time + 16);
      if ( !Time )
        break;
      Time = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0LL);
      if ( (_DWORD)Time == targetType )
      {
        Time = ScrPlayerStatus__IsEnabledMstMission((ScrPlayerStatus_o *)Time, v16, v14, v17);
        if ( (Time & 1) != 0 )
          return v15;
      }
      if ( v13 == v15 )
        return -1;
      currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
      ++v15;
    }
    while ( currentMissionList );
LABEL_14:
    sub_1BCAA3C(Time, v10);
  }
  return -1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ScrPlayerStatus__GetMissionClearCount(
        ScrPlayerStatus_o *this,
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

  if ( (byte_4B1340E & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&MissionInfoMaker_TypeInfo, eventMissionList, *(_QWORD *)&type);
    byte_4B1340E = 1;
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
      this = (ScrPlayerStatus_o *)MissionInfoMaker__GetProgStatus(
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
int32_t __fastcall ScrPlayerStatus__GetMissionClearCount_35098440(
        ScrPlayerStatus_o *this,
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

  if ( (byte_4B1340F & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&MissionInfoMaker_TypeInfo, eventMissionList, *(_QWORD *)&type);
    byte_4B1340F = 1;
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
      this = (ScrPlayerStatus_o *)MissionInfoMaker__GetProgStatus(
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


int64_t __fastcall ScrPlayerStatus__GetMstMissionStarts(ScrPlayerStatus_o *this, const MethodInfo *method)
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
int32_t __fastcall ScrPlayerStatus__GetNextMstMissionIndex(
        ScrPlayerStatus_o *this,
        int32_t startIndex,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *Time; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int size; // w22
  int64_t v13; // x21
  int v14; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v16; // x3

  v3 = startIndex;
  if ( (byte_4B13416 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      *(_QWORD *)&startIndex,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      v5,
      v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B13416 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&startIndex);
  Time = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0LL);
  currentMissionList = this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_16:
    sub_1BCAA3C(Time, v10);
  size = currentMissionList->fields._size;
  v13 = (int64_t)Time;
  v14 = (size & ~(size >> 31)) + 1;
  while ( --v14 )
  {
    Time = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
    if ( size > v3 + 1 )
      ++v3;
    else
      v3 = 0;
    if ( !Time )
      goto LABEL_16;
    Item = System_Collections_Generic_List_object___get_Item(
             Time,
             v3,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( ScrPlayerStatus__IsEnabledMstMission(
           (ScrPlayerStatus_o *)Item,
           (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
           v13,
           v16) )
    {
      return v3;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ScrPlayerStatus__GetTimeApRecoverStr(
        ScrPlayerStatus_o *this,
        int64_t time,
        bool isGetMax,
        const MethodInfo *method)
{
  int v5; // w20
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
  int v16; // w21
  int v17; // w22
  int v18; // w23
  System_String_o *v19; // x19
  System_String_o *v20; // x20
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x0
  int v29; // [xsp+Ch] [xbp-44h] BYREF
  int v30; // [xsp+18h] [xbp-38h] BYREF
  int v31; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = time;
  if ( (byte_4B13407 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, time, isGetMax);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_14991/*"USER_ACTION_POINT_MAX_TIME"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_14993/*"USER_ACTION_POINT_NEXT_TIME"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_14992/*"USER_ACTION_POINT_MAX_TIME_FORMAT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_14994/*"USER_ACTION_POINT_NEXT_TIME_FORMAT"*/, v14, v15);
    byte_4B13407 = 1;
  }
  v16 = v5 / 3600;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, time);
  v17 = v5 / 60 - 60 * v16;
  v18 = v5 % 60;
  if ( isGetMax )
  {
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_14991/*"USER_ACTION_POINT_MAX_TIME"*/, 0LL);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_14992/*"USER_ACTION_POINT_MAX_TIME_FORMAT"*/, 0LL);
    v31 = v16;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v30 = v17;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v29 = v18;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v24 = System_String__Format_62415660(v20, v21, v22, v23, 0LL);
  }
  else
  {
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_14993/*"USER_ACTION_POINT_NEXT_TIME"*/, 0LL);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_14994/*"USER_ACTION_POINT_NEXT_TIME_FORMAT"*/, 0LL);
    v31 = v17;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v30 = v18;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v24 = System_String__Format_62415592(v25, v26, v27, 0LL);
  }
  return System_String__Concat_62401220(v19, v24, 0LL);
}


System_String_o *__fastcall ScrPlayerStatus__GetTimeCommandSpellRecoverStr(
        ScrPlayerStatus_o *this,
        int64_t time,
        const MethodInfo *method)
{
  int v3; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  int v6; // w22
  Il2CppObject *v7; // x19
  Il2CppObject *v8; // x0
  int v10; // [xsp+8h] [xbp-28h] BYREF
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  v3 = time;
  if ( (byte_4B13408 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, time, method);
    sub_1BCA7E0(&StringLiteral_25225/*"{0:D}:{1:D2}"*/, v4, v5);
    byte_4B13408 = 1;
  }
  v6 = v3 % 60;
  v11 = v3 / 60;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = v6;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_62415592((System_String_o *)StringLiteral_25225/*"{0:D}:{1:D2}"*/, v7, v8, 0LL);
}


void __fastcall ScrPlayerStatus__HideMstMissionIconLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterMissionDailyBgObj; // x0

  masterMissionDailyBgObj = this->fields.masterMissionDailyBgObj;
  if ( !masterMissionDailyBgObj )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0LL);
  masterMissionDailyBgObj = this->fields.masterMissionWeeklyBgObj;
  if ( !masterMissionDailyBgObj )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0LL);
  masterMissionDailyBgObj = this->fields.masterMissionLimitedBgObj;
  if ( !masterMissionDailyBgObj
    || (UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0LL),
        (masterMissionDailyBgObj = this->fields.masterMissionAlertRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0LL),
        (masterMissionDailyBgObj = this->fields.masterMissionCountRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0LL),
        (masterMissionDailyBgObj = this->fields.masterMissionAnimationLabelsRoot) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(masterMissionDailyBgObj, method);
  }
  UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0LL);
}


void __fastcall ScrPlayerStatus__InitApRecoverLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ScrPlayerStatus_c *v8; // x0
  __int64 v9; // x1
  float v10; // s0
  TitleInfoControl_c *v11; // x0
  float v12; // s8
  System_Func_float__float__float__float__o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  AlphaTransitionCalculator_o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  AlphaTransitionCalculator_o *apRecoverStrAlphaCalculator; // x0

  if ( (byte_4B13402 & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, method, v2);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v4, v5);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v6, v7);
    byte_4B13402 = 1;
  }
  v8 = ScrPlayerStatus_TypeInfo;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, method);
    v8 = ScrPlayerStatus_TypeInfo;
  }
  v10 = ChangedFPSUtil__CovertFrameNumToSecond(v8->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0LL);
  v11 = TitleInfoControl_TypeInfo;
  v12 = v10;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v9);
    v11 = TitleInfoControl_TypeInfo;
  }
  v13 = ExtraEasing__AsymptoticSeriesFloat(
          v11->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
          (float)ScrPlayerStatus_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
          0LL);
  v17 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v14, v15, v16);
  AlphaTransitionCalculator___ctor(v17, v12, v13, 0LL);
  this->fields.apRecoverStrAlphaCalculator = v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.apRecoverStrAlphaCalculator,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  apRecoverStrAlphaCalculator = this->fields.apRecoverStrAlphaCalculator;
  if ( !apRecoverStrAlphaCalculator )
    sub_1BCAA3C(0LL, v24);
  AlphaTransitionCalculator__MakeFadeInFinished(apRecoverStrAlphaCalculator, 0LL);
  this->fields.ApRecoverStrUpdateTimer = 0.0;
  this->fields.isDispMax = 1;
}


void __fastcall ScrPlayerStatus__InitCompleteMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CompleteMissionSprite_o *currentCompleteMissionList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_4B13411 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      v4,
      v5);
    byte_4B13411 = 1;
  }
  currentCompleteMissionList = (CompleteMissionSprite_o *)this->fields.currentCompleteMissionList;
  if ( !currentCompleteMissionList )
    goto LABEL_9;
  if ( SLODWORD(currentCompleteMissionList->fields.m_CancellationTokenSource) < 1 )
  {
    currentCompleteMissionList = this->fields.completeMissionIconSprite;
    if ( currentCompleteMissionList )
    {
      CompleteMissionSprite__ReleaseEventUI(currentCompleteMissionList, 0LL);
      goto LABEL_8;
    }
LABEL_9:
    sub_1BCAA3C(currentCompleteMissionList, method);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)currentCompleteMissionList,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
  ScrPlayerStatus__ChangeViewCompleteMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v8);
LABEL_8:
  ScrPlayerStatus__UpdateCompleteMissionIconVisibility(this, v9);
}


void __fastcall ScrPlayerStatus__InitMstMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  AlphaTransitionCalculator_o *masterMissionAlertPanel; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  ScrPlayerStatus_c *v15; // x0
  struct AlphaTransitionCalculator_o **p_missionAlertAlphaCalculator; // x20
  __int64 v17; // x1
  float v18; // s8
  TitleInfoControl_c *v19; // x0
  System_Func_float__float__float__float__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  AlphaTransitionCalculator_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v34; // x2

  if ( (byte_4B13410 & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      v6,
      v7);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v8, v9);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v10, v11);
    byte_4B13410 = 1;
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.masterMissionAlertPanel;
  this->fields.mstMissionIconUpdateTimer = 0.0;
  if ( !masterMissionAlertPanel )
    goto LABEL_19;
  ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))masterMissionAlertPanel->klass[1]._1.castClass)(
    masterMissionAlertPanel,
    masterMissionAlertPanel->klass[1]._1.declaringType,
    1.0);
  if ( !this->fields.missionAlertAlphaCalculator )
  {
    v15 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v13);
      v15 = ScrPlayerStatus_TypeInfo;
    }
    p_missionAlertAlphaCalculator = &this->fields.missionAlertAlphaCalculator;
    v18 = ChangedFPSUtil__CovertFrameNumToSecond(v15->static_fields->MISSION_ALERT_FADE_FRAME_NUM, 0LL);
    v19 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v17);
      v19 = TitleInfoControl_TypeInfo;
    }
    v20 = ExtraEasing__AsymptoticSeriesFloat(
            v19->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)ScrPlayerStatus_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM,
            0LL);
    v24 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v21, v22, v23);
    AlphaTransitionCalculator___ctor(v24, v18, v20, 0LL);
    *p_missionAlertAlphaCalculator = v24;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.missionAlertAlphaCalculator,
      (int64_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    masterMissionAlertPanel = *p_missionAlertAlphaCalculator;
    if ( !*p_missionAlertAlphaCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(masterMissionAlertPanel, 0LL);
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 5, v14);
  method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel;
  if ( ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0
    || (masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 3, v31),
        method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel,
        ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0)
    || (masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 2, v31),
        method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel,
        ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0) )
  {
    currentMissionList = this->fields.currentMissionList;
    if ( !currentMissionList )
      goto LABEL_19;
    if ( currentMissionList->fields._size >= 1 )
    {
      this->fields.currentMissionIndex = (int)method;
      ScrPlayerStatus__UpdateDailyMissionInfoItem(this, (int32_t)method, v31);
      masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.currentMissionList;
      if ( masterMissionAlertPanel )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)masterMissionAlertPanel,
                 this->fields.currentMissionIndex,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
        ScrPlayerStatus__ChangeViewMstMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v34);
        return;
      }
LABEL_19:
      sub_1BCAA3C(masterMissionAlertPanel, method);
    }
  }
  ScrPlayerStatus__HideMstMissionIconLb(this, method);
}


bool __fastcall ScrPlayerStatus__IsBPActive(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *rpRoot; // x0

  rpRoot = (UnityEngine_Component_o *)this->fields.rpRoot;
  if ( !rpRoot || (rpRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rpRoot, 0LL)) == 0LL )
    sub_1BCAA3C(rpRoot, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)rpRoot, 0LL);
}


bool __fastcall ScrPlayerStatus__IsCommandSpellActive(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *commandSpellWindow; // x0

  commandSpellWindow = (BattleWindowComponent_o *)this->fields.commandSpellWindow;
  if ( !commandSpellWindow )
    sub_1BCAA3C(0LL, method);
  return BattleWindowComponent__isOpen(commandSpellWindow, 0LL);
}


bool __fastcall ScrPlayerStatus__IsEnabledMstMission(
        ScrPlayerStatus_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *missionInfo,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x21
  int32_t MissionType; // w0
  int64_t endedAt; // x8

  if ( !missionInfo || (MstMissionEntity_k__BackingField = missionInfo->fields._MstMissionEntity_k__BackingField) == 0LL )
    sub_1BCAA3C(this, missionInfo);
  MissionType = MstMissionEntity__getMissionType(missionInfo->fields._MstMissionEntity_k__BackingField, 0LL);
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
  return MstMissionEntity__isOpenNow(MstMissionEntity_k__BackingField, 0LL);
}


bool __fastcall ScrPlayerStatus__IsLocationBusy(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  return this->fields.isLocationBusy;
}


bool __fastcall ScrPlayerStatus__IsTouchable(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalListTop_o *v3; // x0
  QuestRewardTokenAction_c *klass; // x8

  if ( (byte_4B133EC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B133EC = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.boardGameTokenAction->klass;
  if ( !klass || (v3 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
    sub_1BCAA3C(v3, method);
  return !ScrTerminalListTop__IsListSliding(v3, 0LL);
}


void __fastcall ScrPlayerStatus__OnClickApRecoverBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrPlayerStatus_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  RecoverDlgComponent_CallbackFunc_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  v3 = this;
  if ( (byte_4B133E7 & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OnClickApRecoverBtn_b__158_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B133E7 = 1;
  }
  if ( v3->fields.mIsEnableApRecoverBtn && ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (RecoverDlgComponent_CallbackFunc_o *)sub_1BCAA2C(RecoverDlgComponent_CallbackFunc_TypeInfo, v12, v13, v14);
    RecoverDlgComponent_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)v3,
      Method_ScrPlayerStatus__OnClickApRecoverBtn_b__158_0__,
      0LL);
    if ( !Instance )
      sub_1BCAA3C(v16, v17);
    CommonUI__OpenApRecoverItemListDialog((CommonUI_o *)Instance, 0, v15, 1, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickCloseNextExp(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  __int64 v12; // x3
  BaseDialog_o *nextExpDialog; // x19
  ScrPlayerStatus___c_c *v14; // x0
  System_Action_o *_9__168_0; // x20
  Il2CppObject *v16; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B133F0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__OnClickCloseNextExp_b__168_0__, v6, v7);
    sub_1BCA7E0(&ScrPlayerStatus___c_TypeInfo, v8, v9);
    byte_4B133F0 = 1;
  }
  if ( !this->fields.isDisableCloseNextExpBtn )
  {
    this->fields.isDisableCloseNextExpBtn = 1;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    nextExpDialog = this->fields.nextExpDialog;
    v14 = ScrPlayerStatus___c_TypeInfo;
    if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v10);
      v14 = ScrPlayerStatus___c_TypeInfo;
    }
    _9__168_0 = v14->static_fields->__9__168_0;
    if ( !_9__168_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14, v10);
        v14 = ScrPlayerStatus___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__168_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(_9__168_0, v16, Method_ScrPlayerStatus___c__OnClickCloseNextExp_b__168_0__, 0LL);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
      static_fields->__9__168_0 = _9__168_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__168_0,
        (int64_t)_9__168_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    if ( !nextExpDialog )
      sub_1BCAA3C(v14, v10);
    BaseDialog__Close(nextExpDialog, _9__168_0, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickCompleteMissionBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
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
  ScrPlayerStatus___c_c *v51; // x8
  System_Action_o *_9__154_1; // x21
  Il2CppObject *v53; // x22
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  v3 = (Il2CppObject *)this;
  if ( (byte_4B133E3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Array_Empty_object___, v4, v5);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__154_0__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__OnClickCompleteMissionBtn_b__154_1__, v22, v23);
    sub_1BCA7E0(&ScrPlayerStatus___c_TypeInfo, v24, v25);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&StringLiteral_3811/*"COMPLETE_MISSION_END"*/, v26, v27);
    byte_4B133E3 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
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
          System_Action___ctor(v39, v3, Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__154_0__, 0LL);
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
    v51 = ScrPlayerStatus___c_TypeInfo;
    if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v29);
      v51 = ScrPlayerStatus___c_TypeInfo;
    }
    _9__154_1 = v51->static_fields->__9__154_1;
    if ( !_9__154_1 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51, v29);
        v51 = ScrPlayerStatus___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v51->static_fields->__9;
      _9__154_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v48, v49);
      System_Action___ctor(_9__154_1, v53, Method_ScrPlayerStatus___c__OnClickCompleteMissionBtn_b__154_1__, 0LL);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
      static_fields->__9__154_1 = _9__154_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__154_1,
        (int64_t)_9__154_1,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    if ( !v50 )
      goto LABEL_40;
    CommonUI__OpenNotificationDialog(v50, 0LL, v47, _9__154_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickDailyMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
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
  ScrTerminalMap_o *v16; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v18; // x2
  UnityEngine_GameObject_c *v19; // x8
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4B133E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OnClickDailyMissionInfoBtn_b__155_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    byte_4B133E4 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v15);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v16->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v16 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v16, 0LL);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v18);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = v16->fields.subRootGimmickP->klass;
    if ( !v19 )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&v19->_2.instance_size;
    if ( !v16 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
    System_Action___ctor(v27, v3, Method_ScrPlayerStatus__OnClickDailyMissionInfoBtn_b__155_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1BCAA3C(v16, v14);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickLimitedMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
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
  ScrTerminalMap_o *v16; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v18; // x2
  UnityEngine_GameObject_c *v19; // x8
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4B133E6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OnClickLimitedMissionInfoBtn_b__157_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    byte_4B133E6 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v15);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v16->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v16 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v16, 0LL);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v18);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = v16->fields.subRootGimmickP->klass;
    if ( !v19 )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&v19->_2.instance_size;
    if ( !v16 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
    System_Action___ctor(v27, v3, Method_ScrPlayerStatus__OnClickLimitedMissionInfoBtn_b__157_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1BCAA3C(v16, v14);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickLocation(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_4B133F1 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B133F1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  TerminalPramsManager__PlaySystemSE(0, 0LL);
  this->fields.isLocationBusy = 1;
  if ( AndroidPermissionManager__EnabledRuntimePermission(0LL) )
    ScrPlayerStatus__ShowEnabledRuntimePermissionDialog(this, v4);
  else
    ScrPlayerStatus__ShowDisabledRuntimePermissionDialog(this, v4);
}


void __fastcall ScrPlayerStatus__OnClickMasterFaceBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
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
  ScrTerminalMap_o *v16; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v18; // x2
  UnityEngine_GameObject_c *v19; // x8
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4B133E9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OnClickMasterFaceBtn_b__160_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    byte_4B133E9 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v15);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v16->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v16 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v16, 0LL);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v18);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = v16->fields.subRootGimmickP->klass;
    if ( !v19 )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&v19->_2.instance_size;
    if ( !v16 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
    System_Action___ctor(v27, v3, Method_ScrPlayerStatus__OnClickMasterFaceBtn_b__160_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1BCAA3C(v16, v14);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickMasterMissionBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
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
  ScrTerminalMap_o *v16; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v18; // x2
  UnityEngine_GameObject_c *v19; // x8
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4B133DE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__149_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    byte_4B133DE = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v15);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v16->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v16 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v16, 0LL);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v18);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = v16->fields.subRootGimmickP->klass;
    if ( !v19 )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&v19->_2.instance_size;
    if ( !v16 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
    System_Action___ctor(v27, v3, Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__149_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1BCAA3C(v16, v14);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickOpenNextExp(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *nextExpValLabel; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  BaseDialog_o *nextExpDialog; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x21

  if ( (byte_4B133EF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OnClickOpenNextExp_b__167_0__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v8, v9);
    byte_4B133EF = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  TerminalPramsManager__PlaySystemSE(0, 0LL);
  nextExpValLabel = this->fields.nextExpValLabel;
  v11 = System_Int64__ToString_63212004((int64_t)&this->fields.nextExpVal, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
  if ( !nextExpValLabel
    || (UILabel__set_text(nextExpValLabel, v11, 0LL),
        this->fields.isDisableCloseNextExpBtn = 1,
        nextExpDialog = this->fields.nextExpDialog,
        v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16),
        System_Action___ctor(v17, (Il2CppObject *)this, Method_ScrPlayerStatus__OnClickOpenNextExp_b__167_0__, 0LL),
        !nextExpDialog) )
  {
    sub_1BCAA3C(v11, v12);
  }
  BaseDialog__Open(nextExpDialog, v17, 0, 0LL);
}


void __fastcall ScrPlayerStatus__OnClickRpRecoverBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrPlayerStatus_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  RecoverDlgComponent_CallbackFunc_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  v3 = this;
  if ( (byte_4B133E8 & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OnClickRpRecoverBtn_b__159_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B133E8 = 1;
  }
  if ( v3->fields.mIsEnableRpRecoverBtn && ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (RecoverDlgComponent_CallbackFunc_o *)sub_1BCAA2C(RecoverDlgComponent_CallbackFunc_TypeInfo, v12, v13, v14);
    RecoverDlgComponent_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)v3,
      Method_ScrPlayerStatus__OnClickRpRecoverBtn_b__159_0__,
      0LL);
    if ( !Instance )
      sub_1BCAA3C(v16, v17);
    CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)Instance, 0, v15, 1, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickSpellBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrPlayerStatus_o *v3; // x19
  _BOOL4 isRevocationSpell; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  struct CommandSpellWindowComponent_o *commandSpellWindow; // x0

  v3 = this;
  if ( (byte_4B133EA & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&Method_ScrPlayerStatus_OnClickSpellBtn__, method, v2);
    byte_4B133EA = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    isRevocationSpell = v3->fields.isRevocationSpell;
    v5 = Method_ScrPlayerStatus_OnClickSpellBtn__;
    if ( (*((_BYTE *)Method_ScrPlayerStatus_OnClickSpellBtn__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_ScrPlayerStatus_OnClickSpellBtn__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    if ( isRevocationSpell )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
      commandSpellWindow = v3->fields.commandSpellWindow;
      if ( !commandSpellWindow )
        sub_1BCAA3C(0LL, v7);
      ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))commandSpellWindow->klass->vtable._10_Open.method)(
        commandSpellWindow,
        0LL,
        commandSpellWindow->klass->vtable._11_CompOpen.methodPtr);
    }
  }
}


void __fastcall ScrPlayerStatus__OnClickWeeklyMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
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
  ScrTerminalMap_o *v16; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v18; // x2
  UnityEngine_GameObject_c *v19; // x8
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4B133E5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OnClickWeeklyMissionInfoBtn_b__156_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    byte_4B133E5 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v15);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v16->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v16 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v16, 0LL);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v18);
      byte_4B10F83 = 1;
    }
    v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
      v16 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = v16->fields.subRootGimmickP->klass;
    if ( !v19 )
      goto LABEL_25;
    v16 = *(ScrTerminalMap_o **)&v19->_2.instance_size;
    if ( !v16 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v16, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
    System_Action___ctor(v27, v3, Method_ScrPlayerStatus__OnClickWeeklyMissionInfoBtn_b__156_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1BCAA3C(v16, v14);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnCloseSpellWindow(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrPlayerStatus_o *v3; // x19
  __int64 v4; // x1
  BattleWindowComponent_o *commandSpellWindow; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  v3 = this;
  if ( (byte_4B133EB & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&Method_ScrPlayerStatus_OnCloseSpellWindow__, method, v2);
    byte_4B133EB = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    commandSpellWindow = (BattleWindowComponent_o *)v3->fields.commandSpellWindow;
    if ( !commandSpellWindow )
      goto LABEL_11;
    if ( BattleWindowComponent__isOpen(commandSpellWindow, 0LL) )
    {
      v6 = Method_ScrPlayerStatus_OnCloseSpellWindow__;
      if ( (*((_BYTE *)Method_ScrPlayerStatus_OnCloseSpellWindow__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BCA7F8(Method_ScrPlayerStatus_OnCloseSpellWindow__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
      commandSpellWindow = (BattleWindowComponent_o *)v3->fields.commandSpellWindow;
      if ( commandSpellWindow )
      {
        ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))commandSpellWindow->klass->vtable._12_Close.method)(
          commandSpellWindow,
          0LL,
          commandSpellWindow->klass->vtable._13_CompClose.methodPtr);
        return;
      }
LABEL_11:
      sub_1BCAA3C(commandSpellWindow, v4);
    }
  }
}


void __fastcall ScrPlayerStatus__OnDestroy(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x0
  UnityEngine_Object_o *v10; // x19
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4B133D9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B133D9 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v3);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  v10 = **(UnityEngine_Object_o ***)(v9 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseUsrPresentList((CommonUI_o *)Instance, 0LL);
        return;
      }
LABEL_15:
      sub_1BCAA3C(Instance, v12);
    }
  }
}


void __fastcall ScrPlayerStatus__OnPermissionDenied(
        ScrPlayerStatus_o *this,
        System_String_o *permissionName,
        const MethodInfo *method)
{
  this->fields.isLocationBusy = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__OpenCompleteMission(
        ScrPlayerStatus_o *this,
        System_Action_o *callback,
        int32_t typeIndex,
        const MethodInfo *method)
{
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *Instance; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  CompleteMissionComponent_ClickDelegate_o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_o *v33; // x23
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  TerminalSceneComponent_c *v37; // x0

  if ( (byte_4B133E2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, *(_QWORD *)&typeIndex);
    sub_1BCA7E0(&CompleteMissionComponent_ClickDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ScrPlayerStatus_ExitCompleteMission__, v9, v10);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OpenCompleteMission_b__153_0__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&SoundManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v17, v18);
    byte_4B133E2 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, callback);
  SoundManager__stopSe(0.0, 0LL);
  this->fields.mAfterCloseCompleteMission = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAfterCloseCompleteMission,
    (int64_t)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (CompleteMissionComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                      CompleteMissionComponent_ClickDelegate_TypeInfo,
                                                      v26,
                                                      v27,
                                                      v28);
  CompleteMissionComponent_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)this,
    Method_ScrPlayerStatus_ExitCompleteMission__,
    0LL);
  v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_ScrPlayerStatus__OpenCompleteMission_b__153_0__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v29, v33, typeIndex, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v35);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v35, v36);
    byte_4B10F83 = 1;
  }
  v37 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v35);
    v37 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v37->static_fields->mInstance;
  if ( !mInstance )
LABEL_14:
    sub_1BCAA3C(mInstance, v35);
  TerminalSceneComponent__SetDispStandServant(mInstance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__OpenMasterMission(
        ScrPlayerStatus_o *this,
        System_Action_o *callback,
        int32_t typeIndex,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.mAfterCloseMasterMission = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAfterCloseMasterMission,
    (int64_t)callback,
    *(int64_t *)&typeIndex,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ScrPlayerStatus__OpenMasterMission_35078416(this, typeIndex, v10);
}


void __fastcall ScrPlayerStatus__OpenMasterMissionFromCompleteMission(
        ScrPlayerStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_35078416(this, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__OpenMasterMission_35078416(
        ScrPlayerStatus_o *this,
        int32_t typeIndex,
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
  Il2CppObject *Instance; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  MasterMissionComponent_ClickDelegate_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x23
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  TerminalSceneComponent_c *v29; // x0

  if ( (byte_4B133DD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&typeIndex, method);
    sub_1BCA7E0(&MasterMissionComponent_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ScrPlayerStatus_ExitMasterMission__, v7, v8);
    sub_1BCA7E0(&Method_ScrPlayerStatus__OpenMasterMission_b__148_0__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&SoundManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v16);
    byte_4B133DD = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&typeIndex);
  SoundManager__stopSe(0.0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (MasterMissionComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                    MasterMissionComponent_ClickDelegate_TypeInfo,
                                                    v18,
                                                    v19,
                                                    v20);
  MasterMissionComponent_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_ScrPlayerStatus_ExitMasterMission__,
    0LL);
  v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ScrPlayerStatus__OpenMasterMission_b__148_0__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__OpenMasterMission((CommonUI_o *)Instance, v21, v25, typeIndex, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v27, v28);
    byte_4B10F83 = 1;
  }
  v29 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v27);
    v29 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v29->static_fields->mInstance;
  if ( !mInstance )
LABEL_14:
    sub_1BCAA3C(mInstance, v27);
  TerminalSceneComponent__SetDispStandServant(mInstance, 0, 0LL);
}


void __fastcall ScrPlayerStatus__OpenMasterProfile(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  Il2CppObject *Instance; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  MstProfileComponent_ClickDelegate_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  ScrPlayerStatus___c_c *mInstance; // x0
  System_Action_o *_9__165_0; // x21
  Il2CppObject *v28; // x22
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x2
  TerminalSceneComponent_c *v37; // x0

  if ( (byte_4B133ED & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&MstProfileComponent_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus_ExitMasterProfile__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&SoundManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__OpenMasterProfile_b__165_0__, v14, v15);
    sub_1BCA7E0(&ScrPlayerStatus___c_TypeInfo, v16, v17);
    byte_4B133ED = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__stopSe(0.0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (MstProfileComponent_ClickDelegate_o *)sub_1BCAA2C(MstProfileComponent_ClickDelegate_TypeInfo, v19, v20, v21);
  MstProfileComponent_ClickDelegate___ctor(v22, (Il2CppObject *)this, Method_ScrPlayerStatus_ExitMasterProfile__, 0LL);
  mInstance = ScrPlayerStatus___c_TypeInfo;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v23);
    mInstance = ScrPlayerStatus___c_TypeInfo;
  }
  _9__165_0 = mInstance->static_fields->__9__165_0;
  if ( !_9__165_0 )
  {
    if ( !mInstance->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mInstance, v23);
      mInstance = ScrPlayerStatus___c_TypeInfo;
    }
    v28 = (Il2CppObject *)mInstance->static_fields->__9;
    _9__165_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
    System_Action___ctor(_9__165_0, v28, Method_ScrPlayerStatus___c__OpenMasterProfile_b__165_0__, 0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__165_0 = _9__165_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__165_0,
      (int64_t)_9__165_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenMasterProfile((CommonUI_o *)Instance, v22, _9__165_0, 0LL);
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
  mInstance = (ScrPlayerStatus___c_c *)v37->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_1BCAA3C(mInstance, v23);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ResetMasterFaceTexture(
        ScrPlayerStatus_o *this,
        int32_t overWriteImageId,
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
  UnityEngine_Object_o *mcMasterCurTexP; // x22
  struct UIMasterFaceTexture_o **p_mcMasterCurTexP; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  long double v22; // q0
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *gameObject; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t miMasterUserEquipID; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v37; // w22
  UnityEngine_GameObject_o *mcFaceObjP; // x23
  int32_t meMasterGender; // w24
  System_Action_o *v40; // x25
  struct UIMasterFaceTexture_o *Prefab_38632128; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B13405 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&overWriteImageId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ScrPlayerStatus_mfFaceMngCallback__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15, v16);
    byte_4B13405 = 1;
  }
  mcMasterCurTexP = (UnityEngine_Object_o *)this->fields.mcMasterCurTexP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&overWriteImageId);
  p_mcMasterCurTexP = &this->fields.mcMasterCurTexP;
  if ( UnityEngine_Object__op_Implicit(mcMasterCurTexP, 0LL) )
  {
    MasterData_object = (Il2CppObject *)*p_mcMasterCurTexP;
    if ( !*p_mcMasterCurTexP )
      goto LABEL_23;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)MasterData_object,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_mcMasterCurTexP = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mcMasterCurTexP, 0LL, v26, v27, v28, v29, v30, v31);
  }
  miMasterUserEquipID = this->fields.miMasterUserEquipID;
  this->fields.overwriteMasterIconId = overWriteImageId;
  if ( miMasterUserEquipID < 1 )
  {
    v37 = 0;
    goto LABEL_22;
  }
  v33 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C1C6BC(v22);
  v34 = *(_QWORD *)(*(_QWORD *)(v33 + 192) + 16LL);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C1C6BC(v22);
  MasterData_object = **(Il2CppObject ***)(v34 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (MasterData_object = DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              this->fields.miMasterUserEquipID,
                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__)) == 0LL )
  {
LABEL_23:
    sub_1BCAA3C(MasterData_object, v19);
  }
  klass = MasterData_object[2].klass;
  monitor = MasterData_object[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
  *(_QWORD *)&v48.fields.currentCryptoKey = klass;
  *(_QWORD *)&v48.fields.fakeValue = monitor;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v48, 0LL);
LABEL_22:
  mcFaceObjP = this->fields.mcFaceObjP;
  meMasterGender = this->fields.meMasterGender;
  v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ScrPlayerStatus_mfFaceMngCallback__, 0LL);
  Prefab_38632128 = MasterFaceManager__CreatePrefab_38632128(
                      mcFaceObjP,
                      1,
                      meMasterGender,
                      v37,
                      1,
                      v40,
                      overWriteImageId,
                      0LL);
  this->fields.mcMasterCurTexP = Prefab_38632128;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mcMasterCurTexP,
    (int64_t)Prefab_38632128,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
}


void __fastcall ScrPlayerStatus__SetAfterCloseMasterMissionAct(
        ScrPlayerStatus_o *this,
        System_Action_o *act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mAfterCloseMasterMission = act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAfterCloseMasterMission,
    (int64_t)act,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScrPlayerStatus__SetAllParam(
        ScrPlayerStatus_o *this,
        UserGameEntity_o *entity,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t ActiveUserEquipId; // x0
  __int64 v14; // x1
  intptr_t v15; // w22
  int64_t v16; // x21
  System_Type_o *TypeFromHandle; // x0
  __int64 v18; // x1
  int32_t genderType; // w22
  System_Type_o *v20; // x23
  int32_t v21; // w8
  int32_t Act; // w0
  int32_t actMax; // w8
  float v24; // s0
  int32_t CommandSpell; // w20
  int32_t Value; // w0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x1
  ScrPlayerStatus_o *v29; // x0
  int64_t v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int64_t exp; // [xsp+8h] [xbp-38h] BYREF
  System_RuntimeTypeHandle_o v34; // 0:w0.4

  v4 = this;
  if ( (byte_4B133D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Enum_TypeInfo, entity, method);
    sub_1BCA7E0(&Gender_Type_var, v5, v6);
    sub_1BCA7E0(&Gender_Type_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Type_TypeInfo, v9, v10);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&StringLiteral_8705/*"MAX_COMMAND_SPELL"*/, v11, v12);
    byte_4B133D7 = 1;
  }
  exp = 0LL;
  if ( !entity )
    goto LABEL_17;
  v4->fields.miLevel = entity->fields.lv;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(entity, 0LL);
  v15 = (int)Gender_Type_var;
  v16 = ActiveUserEquipId;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v14);
  v34.fields.value = v15;
  TypeFromHandle = System_Type__GetTypeFromHandle(v34, 0LL);
  genderType = entity->fields.genderType;
  v20 = TypeFromHandle;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v18);
  this = (ScrPlayerStatus_o *)System_Enum__ToObject_63430800(v20, genderType, 0LL);
  if ( !this )
LABEL_17:
    sub_1BCAA3C(this, entity);
  if ( this->klass->_1.element_class == Gender_Type_TypeInfo->_1.element_class )
  {
    v21 = *(_DWORD *)j_il2cpp_object_unbox_0();
    if ( v4->fields.miMasterUserEquipID != v16 || v4->fields.meMasterGender != v21 )
    {
      v4->fields.miMasterUserEquipID = v16;
      v4->fields.isUpdateFaceTexture = 1;
      v4->fields.meMasterGender = v21;
    }
    UserGameEntity__getExpInfo(entity, &exp, &v4->fields.nextExpVal, &v4->fields.mfExpPar, 0LL);
    Act = UserGameEntity__getAct(entity, 0LL);
    actMax = entity->fields.actMax;
    v4->fields.miApNow = Act;
    v4->fields.miApMax = actMax;
    if ( Act < 1 )
      v24 = 0.0;
    else
      v24 = (float)Act / (float)actMax;
    v4->fields.mfApPar = v24;
    CommandSpell = UserGameEntity__getCommandSpell(entity, 0LL);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8705/*"MAX_COMMAND_SPELL"*/, 0LL);
    ScrPlayerStatus__mfSetSpell(v4, CommandSpell, Value, v27);
    ScrPlayerStatus__mfSetStoneAndFragment(v4, v28);
  }
  else
  {
    sub_1BCACFC(this);
    ScrPlayerStatus__mfSetFaceID(v29, v30, v31, v32);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__SetApRecoverBtnEnable(
        ScrPlayerStatus_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UIWidget_o *mApRecoverBtnSp; // x0
  float v5; // s0
  float v6; // s3
  float v7; // s1
  float v8; // s2

  mApRecoverBtnSp = (UIWidget_o *)this->fields.mApRecoverBtnSp;
  v5 = 0.5;
  if ( is_enable )
    v5 = 1.0;
  this->fields.mIsEnableApRecoverBtn = is_enable;
  if ( !mApRecoverBtnSp )
    sub_1BCAA3C(0LL, is_enable);
  v6 = 1.0;
  v7 = v5;
  v8 = v5;
  UIWidget__set_color(mApRecoverBtnSp, *(UnityEngine_Color_o *)&v5, 0LL);
}


void __fastcall ScrPlayerStatus__SetCloseGiftAct(
        ScrPlayerStatus_o *this,
        System_Func_bool__bool__o *act,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct GiftButtonCtrl_o *mcGiftButtonP; // x0

  mcGiftButtonP = this->fields.mcGiftButtonP;
  if ( !mcGiftButtonP )
    sub_1BCAA3C(0LL, act);
  mcGiftButtonP->fields.OnGiftCloseAdditionalAction = act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&mcGiftButtonP->fields.OnGiftCloseAdditionalAction,
    (int64_t)act,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScrPlayerStatus__SetLocationCheck(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x20
  Il2CppObject *Instance; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  EventEntity_array *EnableEntityList; // x0
  __int64 *v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x8
  __int64 v68; // x8
  Il2CppObject *v69; // x0
  __int64 v70; // x1
  Il2CppObject *v71; // x21
  CommonUI_o *v72; // x22
  __int64 v73; // x1
  System_String_o *v74; // x23
  System_String_o **v75; // x9
  System_String_o *v76; // x24
  System_String_o *v77; // x0
  _BOOL4 mIsAcceptedLocationEvent; // w25
  System_String_o *v79; // x19
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  CampaignInfoDlg_onButtonDelgate_o *v83; // x24
  __int64 v84; // x1
  Il2CppObject *v85; // x19
  System_String_o *v86; // x21
  System_String_o *v87; // x22
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  System_Action_o *v91; // x0
  __int64 *v92; // x8
  __int64 v93; // x1
  System_String_o *v94; // x22
  System_String_o *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  System_Action_o *v99; // x23
  Il2CppObject *v100; // [xsp+30h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B133F4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CampaignInfoMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventLocationCampaignMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v9, v10);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int__TryGetEntity__,
      v11,
      v12);
    sub_1BCA7E0(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&GeoLocation_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__0__, v23, v24);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__1__, v25, v26);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__2__, v27, v28);
    sub_1BCA7E0(&ScrPlayerStatus___c__DisplayClass174_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_8403/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_8397/*"LOCATION_CAMPAIGN_INFO_DLG_DECIDE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_8395/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_8405/*"LOCATION_DLG_FAIL_TITLE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_8406/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_8396/*"LOCATION_CAMPAIGN_INFO_DLG_CANCEL"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_8399/*"LOCATION_DLG_DEVICE_OPTION_MESSAGE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_8398/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, v45, v46);
    sub_1BCA7E0(&CampaignInfoDlg_onButtonDelgate_TypeInfo, v47, v48);
    byte_4B133F4 = 1;
  }
  v100 = 0LL;
  entity = 0LL;
  v49 = sub_1BCAA2C(ScrPlayerStatus___c__DisplayClass174_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_39;
  *(_QWORD *)(v49 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)this, v52, v53, v54, v55, v56, v57);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo, v58);
  if ( GeoLocation__IsLocationEnabledByUser(0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_39;
    EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 20, 0, 0LL);
    *(_QWORD *)(v49 + 24) = EnableEntityList;
    v60 = (__int64 *)(v49 + 24);
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 24), (int64_t)EnableEntityList, v61, v62, v63, v64, v65, v66);
    if ( !*(_QWORD *)(v49 + 24) )
      goto LABEL_39;
    if ( *(_QWORD *)(*(_QWORD *)(v49 + 24) + 24LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventLocationCampaignMaster___);
      v67 = *v60;
      if ( !*v60 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v67 + 24) )
        sub_1BCAA44(Instance, v51);
      v68 = *(_QWORD *)(v67 + 32);
      if ( !v68 || !Instance )
        goto LABEL_39;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             *(_DWORD *)(v68 + 16),
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int__TryGetEntity__) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_39;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CampaignInfoMaster___);
        if ( !entity || !Instance )
          goto LABEL_39;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v100,
               (int32_t)entity[2].monitor,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__) )
        {
          v69 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v71 = v100;
          v72 = (CommonUI_o *)v69;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70);
          v74 = LocalizationManager__Get((System_String_o *)StringLiteral_8396/*"LOCATION_CAMPAIGN_INFO_DLG_CANCEL"*/, 0LL);
          if ( this->fields.mIsAcceptedLocationEvent )
            v75 = (System_String_o **)&StringLiteral_8395/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/;
          else
            v75 = (System_String_o **)&StringLiteral_8397/*"LOCATION_CAMPAIGN_INFO_DLG_DECIDE"*/;
          v76 = *v75;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
          v77 = LocalizationManager__Get(v76, 0LL);
          mIsAcceptedLocationEvent = this->fields.mIsAcceptedLocationEvent;
          v79 = v77;
          v83 = (CampaignInfoDlg_onButtonDelgate_o *)sub_1BCAA2C(
                                                       CampaignInfoDlg_onButtonDelgate_TypeInfo,
                                                       v80,
                                                       v81,
                                                       v82);
          CampaignInfoDlg_onButtonDelgate___ctor(
            v83,
            (Il2CppObject *)v49,
            Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__1__,
            0LL);
          if ( v72 )
          {
            CommonUI__OpenCampaignInfoDialog(
              v72,
              (CampaignInfoEntity_o *)v71,
              v74,
              v79,
              !mIsAcceptedLocationEvent,
              v83,
              0LL);
            return;
          }
LABEL_39:
          sub_1BCAA3C(Instance, v51);
        }
      }
    }
    v85 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93);
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_8405/*"LOCATION_DLG_FAIL_TITLE"*/, 0LL);
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_8406/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, 0LL);
    v95 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0LL);
    v87 = System_String__Concat_62401220(v94, v95, 0LL);
    v91 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v96, v97, v98);
    v92 = &Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__2__;
  }
  else
  {
    v85 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v84);
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_8403/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/, 0LL);
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_8399/*"LOCATION_DLG_DEVICE_OPTION_MESSAGE"*/, 0LL);
    v91 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v88, v89, v90);
    v92 = &Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__0__;
  }
  v99 = v91;
  System_Action___ctor(v91, (Il2CppObject *)v49, *v92, 0LL);
  if ( !v85 )
    goto LABEL_39;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v85, v86, v87, v99, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__SetLocationEventBtnShow(ScrPlayerStatus_o *this, bool onOff, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mLocationBtnRoot; // x0

  mLocationBtnRoot = this->fields.mLocationBtnRoot;
  if ( !mLocationBtnRoot )
    sub_1BCAA3C(0LL, onOff);
  UnityEngine_GameObject__SetActive(mLocationBtnRoot, onOff, 0LL);
}


void __fastcall ScrPlayerStatus__SetOverwriteMasterInfo(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  TerminalPramsManager_c *v12; // x0
  int32_t WarId_k__BackingField; // w20
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  WarAddMaster_o *v16; // x21
  WarAddEntity_o *PrioredEntity; // x0
  int v18; // w24
  int64_t *p_overwriteStr; // x8
  int64_t v20; // x22
  int32_t PrioredID; // w21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  int64_t v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B13403 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarAddMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ScrPlayerStatus_OverwriteMasterInfo_TypeInfo, v6, v7);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B13403 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC6 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v12->static_fields->_WarId_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v15);
  v16 = (WarAddMaster_o *)Master_object;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 20, WarId_k__BackingField, 0LL);
  if ( PrioredEntity )
  {
    v18 = PrioredEntity->fields.overwriteId - 1;
    p_overwriteStr = (int64_t *)&PrioredEntity->fields.overwriteStr;
  }
  else
  {
    p_overwriteStr = (int64_t *)&StringLiteral_1/*""*/;
    v18 = -1;
  }
  v20 = *p_overwriteStr;
  PrioredID = WarAddMaster__GetPrioredID(v16, 21, WarId_k__BackingField, 0, 0LL);
  v25 = sub_1BCAA2C(ScrPlayerStatus_OverwriteMasterInfo_TypeInfo, v22, v23, v24);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  *(_DWORD *)(v25 + 16) = WarId_k__BackingField;
  *(_DWORD *)(v25 + 20) = PrioredID;
  *(_DWORD *)(v25 + 24) = v18;
  *(_QWORD *)(v25 + 32) = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 32), v20, v26, v27, v28, v29, v30, v31);
  this->fields.overwriteMasterInfo = (struct ScrPlayerStatus_OverwriteMasterInfo_o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overwriteMasterInfo, v25, v32, v33, v34, v35, v36, v37);
}


void __fastcall ScrPlayerStatus__SetRecoverAct(ScrPlayerStatus_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mRecoverAct = act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mRecoverAct,
    (int64_t)act,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__SetRpRecoverBtnEnable(
        ScrPlayerStatus_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UIWidget_o *mRpRecoverBtnSp; // x0
  float v5; // s0
  float v6; // s3
  float v7; // s1
  float v8; // s2

  mRpRecoverBtnSp = (UIWidget_o *)this->fields.mRpRecoverBtnSp;
  v5 = 0.5;
  if ( is_enable )
    v5 = 1.0;
  this->fields.mIsEnableRpRecoverBtn = is_enable;
  if ( !mRpRecoverBtnSp )
    sub_1BCAA3C(0LL, is_enable);
  v6 = 1.0;
  v7 = v5;
  v8 = v5;
  UIWidget__set_color(mRpRecoverBtnSp, *(UnityEngine_Color_o *)&v5, 0LL);
}


void __fastcall ScrPlayerStatus__SetupDispRaidPoint(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *rpRoot; // x8
  const MethodInfo *v9; // x2

  if ( (byte_4B133FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B133FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)EventMaster__IsBPEnable((EventMaster_o *)Instance, 0LL);
  rpRoot = (UnityEngine_Component_o *)this->fields.rpRoot;
  this->fields.isBPEvent = (unsigned __int8)Instance & 1;
  if ( !rpRoot )
    goto LABEL_11;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(rpRoot, 0LL);
  if ( !Instance )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isBPEvent, 0LL);
  if ( this->fields.isBPEvent )
  {
    Instance = (DataManager_o *)this->fields.rpRoot;
    if ( Instance )
    {
      ScrPlayerBP__SetupDispRaidPoint((ScrPlayerBP_o *)Instance, this->fields.userGameEntity, v9);
      return;
    }
LABEL_11:
    sub_1BCAA3C(Instance, v7);
  }
}


void __fastcall ScrPlayerStatus__SetupGradeIcon(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UserGameEntity_o *userGameEntity; // x19
  int32_t Kind_38402136; // w21
  System_String_o *MainMstIconBgImage; // x0
  __int64 v11; // x1
  System_String_o *v12; // x19
  __int64 v13; // x2
  UISprite_o *masterIconBG; // x20
  __int64 v15; // x8
  UIAtlas_o *v16; // x21

  if ( (byte_4B133FB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Grade_TypeInfo, v4, v5);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v6, v7);
    byte_4B133FB = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
  Kind_38402136 = Grade__GetKind_38402136(userGameEntity, 0LL);
  MainMstIconBgImage = Grade__GetMainMstIconBgImage(Kind_38402136, 0LL);
  if ( !this->fields.masterIconGrade )
    goto LABEL_16;
  v12 = MainMstIconBgImage;
  UserGradeComponent__Set(this->fields.masterIconGrade, Kind_38402136, 0LL);
  masterIconBG = this->fields.masterIconBG;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v11, v13);
    byte_4B10F83 = 1;
  }
  MainMstIconBgImage = (System_String_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
    MainMstIconBgImage = (System_String_o *)TerminalSceneComponent_TypeInfo;
  }
  v15 = **(_QWORD **)&MainMstIconBgImage[7].fields;
  if ( !v15 )
LABEL_16:
    sub_1BCAA3C(MainMstIconBgImage, v11);
  v16 = *(UIAtlas_o **)(v15 + 304);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
  AtlasManager__SetGradeBase(masterIconBG, v12, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ShowCompleteMissionContents(
        ScrPlayerStatus_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *completeMissionIcon; // x0
  bool v5; // w21

  completeMissionIcon = this->fields.completeMissionIcon;
  if ( !completeMissionIcon
    || (v5 = value,
        UnityEngine_GameObject__SetActive(completeMissionIcon, value, 0LL),
        (completeMissionIcon = this->fields.completeMissionAlertRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(completeMissionIcon, v5, 0LL),
        (completeMissionIcon = this->fields.completeMissionCountRoot) == 0LL) )
  {
    sub_1BCAA3C(completeMissionIcon, value);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, value, 0LL);
}


void __fastcall ScrPlayerStatus__ShowDisabledRuntimePermissionDialog(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ScrPlayerStatus_c *v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  TermsOfUseDlg_CallbackFunc_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4B133F3 & 1) == 0 )
  {
    sub_1BCA7E0(&TermsOfUseDlg_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScrPlayerStatus__ShowDisabledRuntimePermissionDialog_b__171_0__, v4, v5);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B133F3 = 1;
  }
  v10 = ScrPlayerStatus_TypeInfo;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, method);
    v10 = ScrPlayerStatus_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v10->static_fields->LOCATION_TOS_AGREED_KEY, -1, 0LL) == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (TermsOfUseDlg_CallbackFunc_o *)sub_1BCAA2C(TermsOfUseDlg_CallbackFunc_TypeInfo, v13, v14, v15);
    TermsOfUseDlg_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ScrPlayerStatus__ShowDisabledRuntimePermissionDialog_b__171_0__,
      0LL);
    if ( !Instance )
      sub_1BCAA3C(v17, v18);
    CommonUI__OpenLocationTermsOfUseDlg((CommonUI_o *)Instance, v16, 1, 0LL);
  }
  else
  {
    ScrPlayerStatus__SetLocationCheck(this, v11);
  }
}


void __fastcall ScrPlayerStatus__ShowEnabledRuntimePermissionDialog(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  bool v29; // w21
  bool ShouldShowRequestPermissionRationale; // w0
  const MethodInfo *v31; // x1
  Il2CppObject *Instance; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  TermsOfUseDlg_CallbackFunc_o *v36; // x21

  if ( (byte_4B133F2 & 1) == 0 )
  {
    sub_1BCA7E0(&TermsOfUseDlg_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass170_0__ShowEnabledRuntimePermissionDialog_b__0__, v7, v8);
    sub_1BCA7E0(&ScrPlayerStatus___c__DisplayClass170_0_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_16929/*"android.permission.ACCESS_FINE_LOCATION"*/, v11, v12);
    byte_4B133F2 = 1;
  }
  v13 = sub_1BCAA2C(ScrPlayerStatus___c__DisplayClass170_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_16929/*"android.permission.ACCESS_FINE_LOCATION"*/;
  *(_QWORD *)(v13 + 16) = StringLiteral_16929/*"android.permission.ACCESS_FINE_LOCATION"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), v22, v23, v24, v25, v26, v27, v28);
  v29 = AndroidPermissionManager__CheckPermission(*(System_String_o **)(v13 + 16), 0LL);
  ShouldShowRequestPermissionRationale = AndroidPermissionManager__ShouldShowRequestPermissionRationale(
                                           *(System_String_o **)(v13 + 16),
                                           0LL);
  if ( !v29 && !ShouldShowRequestPermissionRationale )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = (TermsOfUseDlg_CallbackFunc_o *)sub_1BCAA2C(TermsOfUseDlg_CallbackFunc_TypeInfo, v33, v34, v35);
    TermsOfUseDlg_CallbackFunc___ctor(
      v36,
      (Il2CppObject *)v13,
      Method_ScrPlayerStatus___c__DisplayClass170_0__ShowEnabledRuntimePermissionDialog_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenLocationTermsOfUseDlg((CommonUI_o *)Instance, v36, 0, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(v14, v15);
  }
  ScrPlayerStatus__SetLocationCheck(this, v31);
}


void __fastcall ScrPlayerStatus__SortLimitedMstMissionViewList(
        System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **list,
        const MethodInfo *method)
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
  Il2CppObject *v29; // x20
  int64_t Time; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v34; // x21
  ScrPlayerStatus___c_c *v35; // x0
  System_Func_object__int__o *_9__202_0; // x22
  Il2CppObject *v37; // x23
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Func_object__int__o *v49; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Func_T__TResult__o *v54; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7

  if ( (byte_4B1340D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderByDescending_MasterMissionComponent_MasterMissionInfoItem__int___,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__long___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_MasterMissionComponent_MasterMissionInfoItem___, v9, v10);
    sub_1BCA7E0(&System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_MasterMissionComponent_MasterMissionInfoItem__long__TypeInfo, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      v15,
      v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__SortLimitedMstMissionViewList_b__202_0__, v19, v20);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass202_0__SortLimitedMstMissionViewList_b__1__, v21, v22);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass202_0__SortLimitedMstMissionViewList_b__2__, v23, v24);
    sub_1BCA7E0(&ScrPlayerStatus___c__DisplayClass202_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&ScrPlayerStatus___c_TypeInfo, v27, v28);
    byte_4B1340D = 1;
  }
  v29 = (Il2CppObject *)sub_1BCAA2C(ScrPlayerStatus___c__DisplayClass202_0_TypeInfo, method, v2, v3);
  System_Object___ctor(v29, 0LL);
  if ( !*list )
    goto LABEL_16;
  if ( (*list)->fields._size < 2 )
    return;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  Time = NetworkManager__getTime(0LL);
  if ( !v29 )
LABEL_16:
    sub_1BCAA3C(Time, v31);
  v29[1].klass = (Il2CppClass *)Time;
  v34 = *list;
  v35 = ScrPlayerStatus___c_TypeInfo;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v31);
    v35 = ScrPlayerStatus___c_TypeInfo;
  }
  _9__202_0 = (System_Func_object__int__o *)v35->static_fields->__9__202_0;
  if ( !_9__202_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, v31);
      v35 = ScrPlayerStatus___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__202_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo,
                                                v31,
                                                v32,
                                                v33);
    System_Func_object__int____ctor(
      _9__202_0,
      v37,
      Method_ScrPlayerStatus___c__SortLimitedMstMissionViewList_b__202_0__,
      0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__202_0 = (struct System_Func_MasterMissionComponent_MasterMissionInfoItem__int__o *)_9__202_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__202_0,
      (int64_t)_9__202_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v34,
          (System_Func_TSource__TKey__o *)_9__202_0,
          (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_MasterMissionComponent_MasterMissionInfoItem__int___);
  v49 = (System_Func_object__int__o *)sub_1BCAA2C(
                                        System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo,
                                        v46,
                                        v47,
                                        v48);
  System_Func_object__int____ctor(
    v49,
    v29,
    Method_ScrPlayerStatus___c__DisplayClass202_0__SortLimitedMstMissionViewList_b__1__,
    0LL);
  v50 = System_Linq_Enumerable__ThenBy_object__int_(
          v45,
          (System_Func_TSource__TKey__o *)v49,
          (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__int___);
  v54 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_MasterMissionComponent_MasterMissionInfoItem__long__TypeInfo,
                                       v51,
                                       v52,
                                       v53);
  System_Func_object__long____ctor(
    v54,
    v29,
    Method_ScrPlayerStatus___c__DisplayClass202_0__SortLimitedMstMissionViewList_b__2__,
    0LL);
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v50,
                                                               (System_Func_TSource__TKey__o *)v54,
                                                               (const MethodInfo_2F4AF68 *)Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__long___);
  v56 = (System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v55,
                                                                                             (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_MasterMissionComponent_MasterMissionInfoItem___);
  *list = v56;
  sub_1BCA784((PartyOrganizationUtility_o *)list, (int64_t)v56, v57, v58, v59, v60, v61, v62);
}


void __fastcall ScrPlayerStatus__Start(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *mTargetFsm; // x21
  Il2CppObject *Component_object; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B133D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B133D6 = 1;
  }
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(0LL, mTargetFsm, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mTargetFsm,
      (int64_t)Component_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}


void __fastcall ScrPlayerStatus__Update(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  UserGameEntity_o *userGameEntity; // x0
  ScrPlayerBP_o *rpRoot; // x8
  const MethodInfo *v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int32_t CommandSpell; // w20
  TerminalPramsManager_c *v18; // x0
  struct ScrPlayerStatus_OverwriteMasterInfo_o *overwriteMasterInfo; // x8
  int32_t targetWarId_k__BackingField; // w21
  struct ScrPlayerStatus_OverwriteMasterInfo_o *v21; // x8
  int spellCount_k__BackingField; // w9
  char v23; // w21
  void *v24; // x1
  struct System_String_o *spellIconId_k__BackingField; // x1
  const MethodInfo *v26; // x2
  struct ScrPlayerStatus_OverwriteMasterInfo_o *v27; // x8
  struct ScrPlayerStatus_OverwriteMasterInfo_o *v28; // x8
  const MethodInfo *v29; // x1
  __int64 v30; // x1
  int64_t Time; // x1
  const MethodInfo *v32; // x2

  if ( (byte_4B133D8 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B133D8 = 1;
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
      userGameEntity = (UserGameEntity_o *)UserGameEntity__getRp(userGameEntity, 0LL);
      if ( this->fields.oldRp != (_DWORD)userGameEntity )
      {
        rpRoot = this->fields.rpRoot;
        this->fields.oldRp = (int)userGameEntity;
        if ( !rpRoot )
          goto LABEL_73;
        ScrPlayerBP__UpdateRpStatus(rpRoot, v8);
      }
      userGameEntity = (UserGameEntity_o *)this->fields.rpRoot;
      if ( !userGameEntity )
LABEL_73:
        sub_1BCAA3C(userGameEntity, v8);
      ScrPlayerBP__UpdateRpTimeStr((ScrPlayerBP_o *)userGameEntity, v8);
    }
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_73;
    CommandSpell = UserGameEntity__getCommandSpell(userGameEntity, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    if ( !byte_4B12FA3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v11);
      byte_4B12FA3 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
      v18 = TerminalPramsManager_TypeInfo;
    }
    if ( v18->static_fields->_DispState_k__BackingField == 2 )
    {
      overwriteMasterInfo = this->fields.overwriteMasterInfo;
      if ( !overwriteMasterInfo )
        goto LABEL_29;
      targetWarId_k__BackingField = overwriteMasterInfo->fields._targetWarId_k__BackingField;
      if ( !v18->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v18, v8);
      if ( !byte_4B12DC6 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v11);
        byte_4B12DC6 = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( targetWarId_k__BackingField != *(_DWORD *)(*(_QWORD *)&userGameEntity->fields.mana + 4LL) )
LABEL_29:
        ScrPlayerStatus__SetOverwriteMasterInfo(this, v8);
      v21 = this->fields.overwriteMasterInfo;
      if ( !v21 )
        goto LABEL_73;
      spellCount_k__BackingField = v21->fields._spellCount_k__BackingField;
      if ( spellCount_k__BackingField >= 0 )
        CommandSpell = v21->fields._spellCount_k__BackingField;
      if ( (spellCount_k__BackingField & 0x80000000) != 0 || this->fields.isRevocationSpell )
      {
        userGameEntity = (UserGameEntity_o *)System_String__op_Inequality(
                                               this->fields.overwriteSpellIconId,
                                               v21->fields._spellIconId_k__BackingField,
                                               0LL);
        v21 = this->fields.overwriteMasterInfo;
        if ( !v21 )
          goto LABEL_73;
        v23 = (char)userGameEntity;
      }
      else
      {
        v23 = 1;
      }
      spellIconId_k__BackingField = v21->fields._spellIconId_k__BackingField;
      this->fields.overwriteSpellIconId = spellIconId_k__BackingField;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.overwriteSpellIconId,
        (int64_t)spellIconId_k__BackingField,
        (int64_t)v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
      if ( !byte_4B13446 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v26);
        byte_4B13446 = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*(_BYTE *)(*(_QWORD *)&userGameEntity->fields.mana + 160LL) )
      {
        v27 = this->fields.overwriteMasterInfo;
        if ( !this->fields.isOverwriteFaceTexture )
        {
          if ( !v27 )
            goto LABEL_73;
LABEL_71:
          ScrPlayerStatus__ResetMasterFaceTexture(this, v27->fields._masterIconId_k__BackingField, v26);
          this->fields.isOverwriteFaceTexture = 1;
          if ( (v23 & 1) != 0 )
            goto LABEL_64;
LABEL_63:
          if ( this->fields.CommandSpellRest == CommandSpell )
          {
LABEL_67:
            ScrPlayerStatus__mfSetStoneAndFragment(this, v8);
            ScrPlayerStatus__UpdateMstMissionLb(this, v29);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
            Time = NetworkManager__getTime(0LL);
            ScrPlayerStatus__checkLocationEventBtnShows(this, Time, v32);
            return;
          }
          goto LABEL_64;
        }
        if ( !v27 )
          goto LABEL_73;
        if ( this->fields.overwriteMasterIconId != v27->fields._masterIconId_k__BackingField )
          goto LABEL_71;
      }
    }
    else
    {
      if ( !v18->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v18, v8);
      if ( !byte_4B13446 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v11);
        byte_4B13446 = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*(_BYTE *)(*(_QWORD *)&userGameEntity->fields.mana + 160LL) && this->fields.isOverwriteFaceTexture )
      {
        ScrPlayerStatus__ResetMasterFaceTexture(this, 0, v11);
        this->fields.isOverwriteFaceTexture = 0;
      }
      if ( this->fields.isRevocationSpell )
      {
        v24 = StringLiteral_1/*""*/;
        this->fields.overwriteSpellIconId = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.overwriteSpellIconId,
          (int64_t)v24,
          (int64_t)v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        goto LABEL_64;
      }
      v23 = 0;
    }
    if ( (v23 & 1) == 0 )
      goto LABEL_63;
LABEL_64:
    v28 = this->fields.overwriteMasterInfo;
    if ( v28 )
    {
      userGameEntity = (UserGameEntity_o *)this->fields.commandSpellComp;
      if ( userGameEntity )
      {
        this->fields.isRevocationSpell = CommandSpellIconComponent__SetRevocationData(
                                           (CommandSpellIconComponent_o *)userGameEntity,
                                           this->fields.userGameEntity,
                                           v28->fields._spellIconId_k__BackingField,
                                           v28->fields._spellCount_k__BackingField,
                                           0LL);
        this->fields.CommandSpellRest = CommandSpell;
        goto LABEL_67;
      }
    }
    goto LABEL_73;
  }
}


void __fastcall ScrPlayerStatus__UpdateAp(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  UserGameEntity_o *userGameEntity; // x0
  struct UserGameEntity_o *v13; // x8
  int32_t actMax; // w8
  float v15; // s0
  float mfApParOld; // s1
  UnityEngine_Object_o *mcApTimeP; // x20
  TransitionCalculator_float__o *apRecoverStrAlphaCalculator; // x0
  UILabel_o *v19; // x20
  const MethodInfo *v20; // x2
  float ApRecoverStrUpdateTimer; // s8
  float v22; // s8
  TitleInfoControl_c *v23; // x0
  struct AlphaTransitionCalculator_o *v24; // x8

  if ( (byte_4B13400 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v8, v9);
    sub_1BCA7E0(&Method_TransitionCalculator_float__get_Current__, v10, v11);
    byte_4B13400 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_30;
  userGameEntity = (UserGameEntity_o *)UserGameEntity__getAct(userGameEntity, 0LL);
  v13 = this->fields.userGameEntity;
  if ( !v13 )
    goto LABEL_30;
  actMax = v13->fields.actMax;
  this->fields.miApNow = (int)userGameEntity;
  this->fields.miApMax = actMax;
  if ( (int)userGameEntity < 1 )
    v15 = 0.0;
  else
    v15 = (float)(int)userGameEntity / (float)actMax;
  mfApParOld = this->fields.mfApParOld;
  this->fields.mfApPar = v15;
  if ( v15 != mfApParOld )
  {
    this->fields.mfApParOld = v15;
    ScrPlayerStatus__UpdateApStatus(this, method);
  }
  mcApTimeP = (UnityEngine_Object_o *)this->fields.mcApTimeP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mcApTimeP, 0LL, 0LL) )
  {
    apRecoverStrAlphaCalculator = (TransitionCalculator_float__o *)this->fields.apRecoverStrAlphaCalculator;
    if ( apRecoverStrAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        apRecoverStrAlphaCalculator,
        (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
      v19 = this->fields.mcApTimeP;
      userGameEntity = (UserGameEntity_o *)ScrPlayerStatus__mfGetApRecoverTimeStr(this, this->fields.isDispMax, v20);
      if ( v19 )
      {
        UILabel__set_text(v19, (System_String_o *)userGameEntity, 0LL);
        userGameEntity = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( userGameEntity )
        {
          if ( !CommonUI__maskFadeIsDisp((CommonUI_o *)userGameEntity, 0LL) )
          {
            ApRecoverStrUpdateTimer = this->fields.ApRecoverStrUpdateTimer;
            v22 = ApRecoverStrUpdateTimer + UnityEngine_Time__get_deltaTime(0LL);
            this->fields.ApRecoverStrUpdateTimer = v22;
            v23 = TitleInfoControl_TypeInfo;
            if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, method);
              v23 = TitleInfoControl_TypeInfo;
            }
            if ( v22 >= v23->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
            {
              userGameEntity = (UserGameEntity_o *)this->fields.apRecoverStrAlphaCalculator;
              if ( !userGameEntity )
                goto LABEL_30;
              AlphaTransitionCalculator__StartFadeOut((AlphaTransitionCalculator_o *)userGameEntity, 0LL);
              this->fields.ApRecoverStrUpdateTimer = 0.0;
            }
          }
          userGameEntity = (UserGameEntity_o *)this->fields.apRecoverStrAlphaCalculator;
          if ( userGameEntity )
          {
            userGameEntity = (UserGameEntity_o *)AlphaTransitionCalculator__IsFadeOutFinished(
                                                   (AlphaTransitionCalculator_o *)userGameEntity,
                                                   0LL);
            if ( ((unsigned __int8)userGameEntity & 1) != 0 )
            {
              userGameEntity = (UserGameEntity_o *)this->fields.apRecoverStrAlphaCalculator;
              if ( !userGameEntity )
                goto LABEL_30;
              AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)userGameEntity, 0LL);
              this->fields.isDispMax ^= 1u;
            }
            v24 = this->fields.apRecoverStrAlphaCalculator;
            if ( v24 )
            {
              userGameEntity = (UserGameEntity_o *)this->fields.mcApTimeP;
              if ( userGameEntity )
              {
                (*(void (__fastcall **)(UserGameEntity_o *, void *, float))&userGameEntity->klass[1]._1.byval_arg.bits)(
                  userGameEntity,
                  userGameEntity->klass[1]._1.this_arg.data,
                  v24->fields._Current_k__BackingField);
                return;
              }
            }
          }
        }
      }
LABEL_30:
      sub_1BCAA3C(userGameEntity, method);
    }
  }
}


void __fastcall ScrPlayerStatus__UpdateApStatus(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *mcApSldP; // x20
  __int64 v13; // x1
  UIProgressBar_o *v14; // x0
  UnityEngine_Object_o *mcApSldP2; // x20
  __int64 v16; // x2
  float mfApPar; // s0
  float v18; // s1
  bool v19; // cc
  float v20; // s0
  __int64 v21; // x1
  float value; // s0
  UILabel_o *mcApStrP; // x20
  ScrPlayerStatus_c *v24; // x0
  System_String_o *AP_OVER_TXT_COLOR_STR; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x0
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  UnityEngine_Transform_c *klass; // x8
  __int64 v31; // x8

  if ( (byte_4B13401 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v4, v5);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_15998/*"[-]/"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v10, v11);
    byte_4B13401 = 1;
  }
  mcApSldP = (UnityEngine_Object_o *)this->fields.mcApSldP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mcApSldP, 0LL, 0LL) )
  {
    v14 = (UIProgressBar_o *)this->fields.mcApSldP;
    if ( !v14 )
      goto LABEL_32;
    UIProgressBar__set_value(v14, fminf(this->fields.mfApPar, 1.0), 0LL);
  }
  mcApSldP2 = (UnityEngine_Object_o *)this->fields.mcApSldP2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(mcApSldP2, 0LL, 0LL) )
  {
    v14 = (UIProgressBar_o *)this->fields.mcApSldP2;
    if ( !v14 )
      goto LABEL_32;
    mfApPar = this->fields.mfApPar;
    v18 = mfApPar + -1.0;
    v19 = mfApPar <= 1.0;
    v20 = 0.0;
    if ( !v19 )
      v20 = v18;
    UIProgressBar__set_value(v14, v20, 0LL);
    v14 = (UIProgressBar_o *)this->fields.mcApSldP2;
    if ( !v14 )
LABEL_32:
      sub_1BCAA3C(v14, v13);
    value = UIProgressBar__get_value(v14, 0LL);
    mcApStrP = this->fields.mcApStrP;
    if ( value <= 0.0 )
    {
      v28 = System_Int32__ToString((int)this + 648, 0LL);
      v29 = System_Int32__ToString((int)this + 652, 0LL);
      v14 = (UIProgressBar_o *)System_String__Concat_62412480(v28, (System_String_o *)StringLiteral_1120/*"/"*/, v29, 0LL);
      if ( !mcApStrP )
        goto LABEL_32;
    }
    else
    {
      v24 = ScrPlayerStatus_TypeInfo;
      if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v21);
        v24 = ScrPlayerStatus_TypeInfo;
      }
      AP_OVER_TXT_COLOR_STR = v24->static_fields->AP_OVER_TXT_COLOR_STR;
      v26 = System_Int32__ToString((int)this + 648, 0LL);
      v27 = System_Int32__ToString((int)this + 652, 0LL);
      v14 = (UIProgressBar_o *)System_String__Concat_62414484(
                                 AP_OVER_TXT_COLOR_STR,
                                 v26,
                                 (System_String_o *)StringLiteral_15998/*"[-]/"*/,
                                 v27,
                                 0LL);
      if ( !mcApStrP )
        goto LABEL_32;
    }
    UILabel__set_text(mcApStrP, (System_String_o *)v14, 0LL);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v16);
    byte_4B10F83 = 1;
  }
  v14 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
    v14 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v14[1].fields.mTrans->klass;
  if ( !klass )
    goto LABEL_32;
  v31 = *(_QWORD *)&klass->_2.static_fields_size;
  if ( !v31 )
    goto LABEL_32;
  v14 = *(UIProgressBar_o **)(v31 + 296);
  if ( !v14 )
    goto LABEL_32;
  QuestBoardListViewManager__RequestConsumeColorReset((QuestBoardListViewManager_o *)v14, 0LL);
}


void __fastcall ScrPlayerStatus__UpdateCompleteMissionIconVisibility(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  TerminalSceneComponent_c *v20; // x0
  ScrTerminalListTop_o *mInstance; // x0
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8
  QuestRewardTokenAction_c *klass; // x8
  _BOOL4 v25; // w23
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *mTitleInfo; // x20
  ScrPlayerStatus___c_c *v29; // x0
  System_Func_object__bool__o *_9__237_0; // x21
  Il2CppObject *v31; // x22
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x0

  if ( (byte_4B13422 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___, v8, v9);
    sub_1BCA7E0(&System_Func_EventEntity_ScriptData__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      v12,
      v13);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__UpdateCompleteMissionIconVisibility_b__237_0__, v16, v17);
    sub_1BCA7E0(&ScrPlayerStatus___c_TypeInfo, v18, v19);
    byte_4B13422 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  v20 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v20 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (ScrTerminalListTop_o *)v20->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_37;
  if ( TerminalSceneComponent__IsMapActive((TerminalSceneComponent_o *)mInstance, 0LL)
    || (currentCompleteMissionList = this->fields.currentCompleteMissionList) == 0LL
    || currentCompleteMissionList->fields._size < 1 )
  {
    LOBYTE(v25) = 0;
  }
  else
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v22);
      byte_4B10F83 = 1;
    }
    mInstance = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      mInstance = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = mInstance->fields.boardGameTokenAction->klass;
    if ( !klass )
      goto LABEL_37;
    mInstance = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
    if ( !mInstance )
      goto LABEL_37;
    v25 = !ScrTerminalListTop__IsBlankEarthActive(mInstance, 0LL);
  }
  if ( !this->fields.completeMissionEventId )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  mInstance = (ScrTerminalListTop_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !mInstance
    || (mInstance = (ScrTerminalListTop_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)mInstance,
                                              this->fields.completeMissionEventId,
                                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_37:
    sub_1BCAA3C(mInstance, method);
  }
  mTitleInfo = (System_Collections_Generic_IEnumerable_TSource__o *)mInstance->fields.mTitleInfo;
  v29 = ScrPlayerStatus___c_TypeInfo;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, method);
    v29 = ScrPlayerStatus___c_TypeInfo;
  }
  _9__237_0 = (System_Func_object__bool__o *)v29->static_fields->__9__237_0;
  if ( !_9__237_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29, method);
      v29 = ScrPlayerStatus___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__237_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_EventEntity_ScriptData__bool__TypeInfo,
                                                 method,
                                                 v26,
                                                 v27);
    System_Func_object__bool____ctor(
      _9__237_0,
      v31,
      Method_ScrPlayerStatus___c__UpdateCompleteMissionIconVisibility_b__237_0__,
      0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__237_0 = (struct System_Func_EventEntity_ScriptData__bool__o *)_9__237_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__237_0,
      (int64_t)_9__237_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          mTitleInfo,
          (System_Func_TSource__bool__o *)_9__237_0,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
  if ( v39 )
    LOBYTE(v25) = v25 && LOBYTE(v39[5].klass) == 0;
LABEL_36:
  ScrPlayerStatus__ShowCompleteMissionContents(this, v25, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__UpdateDailyMissionInfoItem(
        ScrPlayerStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t currentMissionIndex; // w20
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
  int64_t currentMissionList; // x0
  int64_t v16; // x20
  MstMissionEntity_o *v17; // x20
  const MethodInfo *v18; // x2
  int v19; // w8
  int64_t v20; // x21
  unsigned int v21; // w24
  __int64 v22; // x27
  __int64 v23; // x1
  Il2CppObject *MasterData_object; // x22
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v25; // x21
  int32_t v26; // w22
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  currentMissionIndex = index;
  if ( (byte_4B13415 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5, v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__set_Item__,
      v9,
      v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B13415 = 1;
  }
  entity = 0LL;
  currentMissionList = (int64_t)this->fields.currentMissionList;
  if ( (currentMissionIndex & 0x80000000) != 0 )
    currentMissionIndex = this->fields.currentMissionIndex;
  if ( !currentMissionList )
    goto LABEL_28;
  currentMissionList = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)currentMissionList,
                                  currentMissionIndex,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
  if ( !currentMissionList )
    goto LABEL_28;
  v16 = currentMissionList;
  currentMissionList = *(_QWORD *)(currentMissionList + 16);
  if ( !currentMissionList )
    goto LABEL_28;
  if ( MstMissionEntity__getMissionType((MstMissionEntity_o *)currentMissionList, 0LL) == 3 )
  {
    v17 = *(MstMissionEntity_o **)(v16 + 16);
    currentMissionList = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !currentMissionList )
      goto LABEL_28;
    currentMissionList = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)currentMissionList,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !v17 )
      goto LABEL_28;
    if ( !currentMissionList )
      goto LABEL_28;
    currentMissionList = (int64_t)EventMissionMaster__getDailyMasterMissionList(
                                    (EventMissionMaster_o *)currentMissionList,
                                    v17->fields.id,
                                    0LL);
    if ( !currentMissionList )
      goto LABEL_28;
    v19 = *(_DWORD *)(currentMissionList + 24);
    v20 = currentMissionList;
    if ( v19 >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= v19 )
          sub_1BCAA44(currentMissionList, *(_QWORD *)&index);
        v22 = *(_QWORD *)(v20 + 8LL * (int)v21 + 32);
        currentMissionList = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !currentMissionList )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)currentMissionList,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
        currentMissionList = NetworkManager__get_UserId(0LL);
        if ( !v22 || !MasterData_object )
          break;
        currentMissionList = UserEventMissionMaster__TryGetEntity(
                               (UserEventMissionMaster_o *)MasterData_object,
                               &entity,
                               currentMissionList,
                               *(_DWORD *)(v22 + 16),
                               0LL);
        if ( (currentMissionList & 1) != 0 )
        {
          currentMissionList = (int64_t)entity;
          if ( !entity )
            break;
          currentMissionList = UserEventMissionEntity__IsTodayMissionData(entity, 0LL);
          if ( (currentMissionList & 1) != 0 )
            return;
        }
        v19 = *(_DWORD *)(v20 + 24);
        if ( (int)++v21 >= v19 )
          goto LABEL_25;
      }
LABEL_28:
      sub_1BCAA3C(currentMissionList, *(_QWORD *)&index);
    }
LABEL_25:
    v25 = this->fields.currentMissionList;
    v26 = this->fields.currentMissionIndex;
    currentMissionList = (int64_t)ScrPlayerStatus__GetDailyMissionInfoItem(this, v17, v18);
    if ( !v25 )
      goto LABEL_28;
    System_Collections_Generic_List_object___set_Item(
      (System_Collections_Generic_List_object__o *)v25,
      v26,
      (Il2CppObject *)currentMissionList,
      (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__set_Item__);
  }
}


void __fastcall ScrPlayerStatus__UpdateGiftBoxNum(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mcGiftButtonP; // x20
  __int64 v5; // x1
  GiftButtonCtrl_o *v6; // x0

  if ( (byte_4B133E1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B133E1 = 1;
  }
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mcGiftButtonP, 0LL, 0LL) )
  {
    v6 = this->fields.mcGiftButtonP;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    GiftButtonCtrl__InvalidateGiftInfo(v6, 0LL);
  }
}


void __fastcall ScrPlayerStatus__UpdateMstMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  TransitionCalculator_float__o *missionAlertAlphaCalculator; // x0
  __int64 Instance; // x0
  float mstMissionIconUpdateTimer; // s8
  float deltaTime; // s0
  float v23; // s8
  const MethodInfo *v24; // x2
  int32_t NextMstMissionIndex; // w0
  const MethodInfo *v26; // x2
  Il2CppObject *Item; // x0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  struct AlphaTransitionCalculator_o *v30; // x8
  TerminalPramsManager_c *v31; // x0
  UnityEngine_Behaviour_o *masterMissionAnimationLabelsTween; // x20
  TerminalPramsManager_c *v33; // x0
  int32_t DispState_k__BackingField; // w8
  UnityEngine_Behaviour_o *v35; // x21
  __int64 v36; // x8
  __int64 v37; // x2
  __int64 v38; // x8
  __int64 v39; // x2
  UnityEngine_Transform_o *v40; // x19

  if ( (byte_4B13412 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      method,
      v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v6, v7);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v12, v13);
    sub_1BCA7E0(&Method_TransitionCalculator_float__get_Current__, v14, v15);
    byte_4B13412 = 1;
  }
  if ( ScrPlayerStatus__GetEnabledMstMissionCount(this, method) >= 2 )
  {
    missionAlertAlphaCalculator = (TransitionCalculator_float__o *)this->fields.missionAlertAlphaCalculator;
    if ( !missionAlertAlphaCalculator )
      return;
    TransitionCalculator_float___Update(
      missionAlertAlphaCalculator,
      (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
      {
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_75;
        if ( !CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0LL) )
        {
          mstMissionIconUpdateTimer = this->fields.mstMissionIconUpdateTimer;
          deltaTime = UnityEngine_Time__get_deltaTime(0LL);
          Instance = (__int64)this->fields.currentMissionList;
          v23 = mstMissionIconUpdateTimer + deltaTime;
          this->fields.mstMissionIconUpdateTimer = v23;
          if ( !Instance )
            goto LABEL_75;
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                this->fields.currentMissionIndex,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
          if ( !Instance )
            goto LABEL_75;
          Instance = *(_QWORD *)(Instance + 16);
          if ( !Instance )
            goto LABEL_75;
          if ( v23 >= MstMissionEntity__GetMissionIconDisplaySec((MstMissionEntity_o *)Instance, 0LL) )
          {
            Instance = (__int64)this->fields.missionAlertAlphaCalculator;
            this->fields.mstMissionIconUpdateTimer = 0.0;
            if ( !Instance )
              goto LABEL_75;
            AlphaTransitionCalculator__StartFadeOut((AlphaTransitionCalculator_o *)Instance, 0LL);
          }
        }
      }
    }
    Instance = (__int64)this->fields.missionAlertAlphaCalculator;
    if ( !Instance )
      goto LABEL_75;
    Instance = AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)this->fields.missionAlertAlphaCalculator;
      if ( !Instance )
        goto LABEL_75;
      AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)Instance, 0LL);
      NextMstMissionIndex = ScrPlayerStatus__GetNextMstMissionIndex(this, this->fields.currentMissionIndex, v24);
      this->fields.currentMissionIndex = NextMstMissionIndex;
      ScrPlayerStatus__UpdateDailyMissionInfoItem(this, NextMstMissionIndex, v26);
      Instance = (__int64)this->fields.currentMissionList;
      if ( !Instance )
        goto LABEL_75;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               this->fields.currentMissionIndex,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      ScrPlayerStatus__ChangeViewMstMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v28);
      ScrPlayerStatus__InitCompleteMissionLb(this, v29);
    }
    v30 = this->fields.missionAlertAlphaCalculator;
    if ( !v30 )
      goto LABEL_75;
    Instance = (__int64)this->fields.masterMissionAlertPanel;
    if ( !Instance )
      goto LABEL_75;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL),
      v30->fields._Current_k__BackingField);
  }
  else
  {
    ScrPlayerStatus__InitMstMissionLb(this, v16);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
  if ( !byte_4B12FA3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v17, v18);
    byte_4B12FA3 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
    v31 = TerminalPramsManager_TypeInfo;
  }
  if ( !v31->static_fields->_DispState_k__BackingField )
    return;
  masterMissionAnimationLabelsTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionAnimationLabelsTween;
  if ( !v31->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v31, v17);
  if ( !byte_4B12FA3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v17, v18);
    byte_4B12FA3 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
    v33 = TerminalPramsManager_TypeInfo;
  }
  DispState_k__BackingField = v33->static_fields->_DispState_k__BackingField;
  if ( DispState_k__BackingField == 2 )
    v35 = 0LL;
  else
    v35 = masterMissionAnimationLabelsTween;
  if ( DispState_k__BackingField == 2 )
    goto LABEL_52;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v17, v18);
    byte_4B10F83 = 1;
  }
  Instance = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17);
    Instance = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v36 = **(_QWORD **)(Instance + 184);
  if ( !v36 )
    goto LABEL_75;
  Instance = *(_QWORD *)(v36 + 256);
  if ( !Instance )
    goto LABEL_75;
  if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)Instance, 0LL) )
  {
LABEL_52:
    Instance = 0LL;
    if ( !masterMissionAnimationLabelsTween )
      goto LABEL_75;
  }
  else
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
    {
      Instance = 0LL;
    }
    else
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v17, v37);
        byte_4B10F83 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v38 = **(_QWORD **)(Instance + 184);
      if ( !v38 )
        goto LABEL_75;
      Instance = *(_QWORD *)(v38 + 240);
      if ( !Instance )
        goto LABEL_75;
      Instance = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)Instance, 0LL);
    }
    masterMissionAnimationLabelsTween = v35;
    if ( !v35 )
      goto LABEL_75;
  }
  UnityEngine_Behaviour__set_enabled(masterMissionAnimationLabelsTween, Instance & 1, 0LL);
  Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
  if ( !Instance )
    goto LABEL_75;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
    if ( Instance )
    {
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      v40 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4B109C1 )
      {
        Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v17, v39);
        byte_4B109C1 = 1;
      }
      if ( v40 )
      {
        UnityEngine_Transform__set_localPosition(v40, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        return;
      }
    }
LABEL_75:
    sub_1BCAA3C(Instance, v17);
  }
}


void __fastcall ScrPlayerStatus__UpdatePanel(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B1341F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1341F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v8 )
  {
    if ( !Component_object )
      sub_1BCAA3C(v8, v9);
    ((void (__fastcall *)(Il2CppObject *, __int64, Il2CppMethodPointer))Component_object->klass->vtable[12].method)(
      Component_object,
      1LL,
      Component_object->klass->vtable[13].methodPtr);
  }
}


void __fastcall ScrPlayerStatus___EndLocationRequest_b__176_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.isLocationBusy = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus___EndLocationRequest_b__176_1(
        ScrPlayerStatus_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *mcGiftButtonP; // x21

  if ( (byte_4B1342A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    byte_4B1342A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseMultiGiftGetDialg(Instance, 0LL);
  this->fields.isLocationBusy = 0;
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(mcGiftButtonP, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.mcGiftButtonP;
    if ( !Instance )
      goto LABEL_12;
    GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0LL);
    if ( isDecide )
    {
      Instance = (CommonUI_o *)this->fields.mcGiftButtonP;
      if ( Instance )
      {
        GiftButtonCtrl__OnButtonTouched((GiftButtonCtrl_o *)Instance, 0LL);
        goto LABEL_11;
      }
LABEL_12:
      sub_1BCAA3C(Instance, v8);
    }
  }
LABEL_11:
  this->fields.mIsAcceptedLocationEvent = 1;
}


void __fastcall ScrPlayerStatus___ExitCompleteMission_b__185_0(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  __int64 v22; // x2
  TerminalSceneComponent_c *v23; // x0
  __int64 v24; // x2
  TerminalSceneComponent_c *v25; // x0

  if ( (byte_4B1342C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__ExitCompleteMission_b__185_1__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v10, v11);
    byte_4B1342C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.completeMissionIconSprite;
  if ( !Instance )
    goto LABEL_21;
  CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)Instance, 0LL);
  v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)v14;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitCompleteMission_b__185_1__, 0LL);
  if ( !v19 )
    goto LABEL_21;
  CommonUI__maskFadein(v19, DEFAULT_FADE_TIME, v21, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v22);
    byte_4B10F83 = 1;
  }
  v23 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
    v23 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v23->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_21;
  TerminalSceneComponent__playBgm_42940932((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v24);
    byte_4B10F83 = 1;
  }
  v25 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
    v25 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v25->static_fields->mInstance;
  if ( !Instance )
LABEL_21:
    sub_1BCAA3C(Instance, v13);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0LL);
}


void __fastcall ScrPlayerStatus___ExitCompleteMission_b__185_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterCloseCompleteMission, 0LL);
}


void __fastcall ScrPlayerStatus___ExitMasterMission_b__184_0(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  __int64 v22; // x2
  TerminalSceneComponent_c *v23; // x0

  if ( (byte_4B1342B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScrPlayerStatus__ExitMasterMission_b__184_1__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v10, v11);
    byte_4B1342B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)v14;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterMission_b__184_1__, 0LL);
  if ( !v19 )
    goto LABEL_15;
  CommonUI__maskFadein(v19, DEFAULT_FADE_TIME, v21, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v22);
    byte_4B10F83 = 1;
  }
  v23 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
    v23 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (Il2CppObject *)v23->static_fields->mInstance;
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(Instance, v13);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0LL);
}


void __fastcall ScrPlayerStatus___ExitMasterMission_b__184_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterCloseMasterMission, 0LL);
}


void __fastcall ScrPlayerStatus___ExitMasterProfile_b__166_0(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  void *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  Il2CppObject *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  AvalonSceneManager_c *v20; // x8
  CommonUI_o *v21; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x20
  Il2CppObject *v24; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  TerminalSceneComponent_c *v33; // x0

  if ( (byte_4B13428 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__ExitMasterProfile_b__166_1__, v10, v11);
    sub_1BCA7E0(&ScrPlayerStatus___c_TypeInfo, v12, v13);
    byte_4B13428 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseMasterProfile((CommonUI_o *)Instance, 0LL);
  ScrPlayerStatus__mfInitUserData(this, v16);
  v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  v21 = (CommonUI_o *)v17;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15);
    v20 = AvalonSceneManager_TypeInfo;
  }
  Instance = ScrPlayerStatus___c_TypeInfo;
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v15);
    Instance = ScrPlayerStatus___c_TypeInfo;
  }
  v23 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v15);
      Instance = ScrPlayerStatus___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v18, v19);
    System_Action___ctor(v23, v24, Method_ScrPlayerStatus___c__ExitMasterProfile_b__166_1__, 0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__166_1 = v23;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__166_1, (int64_t)v23, v26, v27, v28, v29, v30, v31);
  }
  if ( !v21 )
    goto LABEL_21;
  CommonUI__maskFadein(v21, DEFAULT_FADE_TIME, v23, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v32);
    byte_4B10F83 = 1;
  }
  v33 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15);
    v33 = TerminalSceneComponent_TypeInfo;
  }
  Instance = v33->static_fields->mInstance;
  if ( !Instance )
LABEL_21:
    sub_1BCAA3C(Instance, v15);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus___OnClickApRecoverBtn_b__158_0(
        ScrPlayerStatus_o *this,
        int32_t result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B13426 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result, method);
    byte_4B13426 = 1;
  }
  if ( result == 2 )
    ActionExtensions__Call(this->fields.mRecoverAct, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ScrPlayerStatus___OnClickCompleteMissionBtn_b__154_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  ScrPlayerStatus__OpenCompleteMission(this, 0LL, 0, v2);
}


void __fastcall ScrPlayerStatus___OnClickDailyMissionInfoBtn_b__155_0(
        ScrPlayerStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_35078416(this, 0, v2);
}


void __fastcall ScrPlayerStatus___OnClickLimitedMissionInfoBtn_b__157_0(
        ScrPlayerStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_35078416(this, 3, v2);
}


void __fastcall ScrPlayerStatus___OnClickMasterMissionBtn_b__149_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4B13425 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScrPlayerStatus_UpdateGiftBoxNum__, v5, v6);
    byte_4B13425 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrPlayerStatus_UpdateGiftBoxNum__, 0LL);
  this->fields.mAfterCloseMasterMission = v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAfterCloseMasterMission,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ScrPlayerStatus__OpenMasterMission_35078416(this, -1, v14);
}


void __fastcall ScrPlayerStatus___OnClickOpenNextExp_b__167_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.isDisableCloseNextExpBtn = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus___OnClickRpRecoverBtn_b__159_0(
        ScrPlayerStatus_o *this,
        int32_t result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B13427 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result, method);
    byte_4B13427 = 1;
  }
  if ( result == 2 )
    ActionExtensions__Call(this->fields.mRecoverAct, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ScrPlayerStatus___OnClickWeeklyMissionInfoBtn_b__156_0(
        ScrPlayerStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_35078416(this, 1, v2);
}


void __fastcall ScrPlayerStatus___OpenCompleteMission_b__153_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.mtIsUpdate = 1;
}


void __fastcall ScrPlayerStatus___OpenMasterMission_b__148_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  this->fields.mtIsUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus___ShowDisabledRuntimePermissionDialog_b__171_0(
        ScrPlayerStatus_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  ScrPlayerStatus_c *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B13429 & 1) == 0 )
  {
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    byte_4B13429 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  CommonUI__CloseLocationTermsOfUseDlg((CommonUI_o *)Instance, 0LL);
  if ( result )
  {
    v10 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v9);
      v10 = ScrPlayerStatus_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v10->static_fields->LOCATION_TOS_AGREED_KEY, 1, 0LL);
    ScrPlayerStatus__SetLocationCheck(this, v11);
  }
  else
  {
    this->fields.isLocationBusy = 0;
  }
}


void __fastcall ScrPlayerStatus__cbfGift_Push(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScrPlayerStatus_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ScrTerminalMap_o *v10; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  v3 = this;
  if ( (byte_4B133DC & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&StringLiteral_3133/*"BTN_GIFT"*/, v6, v7);
    byte_4B133DC = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
      byte_4B10F83 = 1;
    }
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.subRootGimmickP->klass;
    if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
      sub_1BCAA3C(v10, v8);
    ScrTerminalMap__DestroyEventActionEffect(v10, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    ScrPlayerStatus__mfCallFsmEvent(v3, (System_String_o *)StringLiteral_3133/*"BTN_GIFT"*/, v13);
  }
}


void __fastcall ScrPlayerStatus__cbfSlide_In(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B133DA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12317/*"SLIDE_IN"*/, method, v2);
    byte_4B133DA = 1;
  }
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_12317/*"SLIDE_IN"*/, v2);
}


void __fastcall ScrPlayerStatus__cbfSlide_Out(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B133DB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12318/*"SLIDE_OUT"*/, method, v2);
    byte_4B133DB = 1;
  }
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_12318/*"SLIDE_OUT"*/, v2);
}


void __fastcall ScrPlayerStatus__cbfStatus_Init(
        ScrPlayerStatus_o *this,
        UnityEngine_GameObject_o *oFsmObject,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4B133FA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5825/*"EV_PRAM_INIT_FIN"*/, oFsmObject, method);
    byte_4B133FA = 1;
  }
  ScrPlayerStatus__mfInitUserData(this, (const MethodInfo *)oFsmObject);
  ScrPlayerStatus__SetupGradeIcon(this, v4);
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_5825/*"EV_PRAM_INIT_FIN"*/, v5);
}


void __fastcall ScrPlayerStatus__checkLocationEventBtnShows(
        ScrPlayerStatus_o *this,
        int64_t now,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Int64_array *mNextLocationEventTerm; // x8
  struct System_Int64_array *v12; // x8
  unsigned int max_length; // w9
  __int64 v14; // x8
  __int64 v15; // x1
  UnityEngine_Object_o *MyFsmP; // x20
  System_String_o *ActiveStateName; // x0
  UnityEngine_GameObject_o *mLocationBtnRoot; // x8

  v4 = this;
  if ( (byte_4B1341C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, now, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v7, v8);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&StringLiteral_13136/*"State Roring"*/, v9, v10);
    byte_4B1341C = 1;
  }
  mNextLocationEventTerm = v4->fields.mNextLocationEventTerm;
  if ( !mNextLocationEventTerm )
  {
    ScrPlayerStatus__mfSetLocationEventTime(v4, now, method);
    mNextLocationEventTerm = v4->fields.mNextLocationEventTerm;
    if ( !mNextLocationEventTerm )
      goto LABEL_38;
  }
  if ( !mNextLocationEventTerm->max_length )
    goto LABEL_37;
  if ( mNextLocationEventTerm->m_Items[0] >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, now);
    if ( !byte_4B12FA3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, now, method);
      byte_4B12FA3 = 1;
    }
    this = (ScrPlayerStatus_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, now);
      this = (ScrPlayerStatus_o *)TerminalPramsManager_TypeInfo;
    }
    if ( **(_DWORD **)&this->fields.mIsEnableRpRecoverBtn != 1 )
      goto LABEL_33;
    v12 = v4->fields.mNextLocationEventTerm;
    if ( !v12 )
      goto LABEL_38;
    max_length = v12->max_length;
    if ( max_length )
    {
      if ( v12->m_Items[0] >= now )
        goto LABEL_33;
      if ( max_length > 1 )
      {
        if ( v12->m_Items[1] > now && !v4->fields.mIsAcceptedLocationEvent )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, now);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, now, method);
            byte_4B10F83 = 1;
          }
          this = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, now);
            this = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
          }
          v14 = **(_QWORD **)&this->fields.mIsEnableRpRecoverBtn;
          if ( !v14 )
            goto LABEL_38;
          this = *(ScrPlayerStatus_o **)(v14 + 264);
          if ( !this )
            goto LABEL_38;
          MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP((ScrTerminalMap_o *)this, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
          this = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(MyFsmP, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !MyFsmP )
              goto LABEL_38;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
            this = (ScrPlayerStatus_o *)System_String__op_Equality(
                                          ActiveStateName,
                                          (System_String_o *)StringLiteral_13136/*"State Roring"*/,
                                          0LL);
            goto LABEL_34;
          }
        }
LABEL_33:
        this = 0LL;
LABEL_34:
        mLocationBtnRoot = v4->fields.mLocationBtnRoot;
        if ( mLocationBtnRoot )
        {
          UnityEngine_GameObject__SetActive(mLocationBtnRoot, (unsigned __int8)this & 1, 0LL);
          return;
        }
LABEL_38:
        sub_1BCAA3C(this, now);
      }
    }
LABEL_37:
    sub_1BCAA44(this, now);
  }
}


void __fastcall ScrPlayerStatus__locationRequest(
        ScrPlayerStatus_o *this,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  GeoLocation_LocationDelegate_o *v30; // x20
  __int64 v31; // x1

  if ( (byte_4B133F5 & 1) == 0 )
  {
    sub_1BCA7E0(&GeoLocation_TypeInfo, eventEnt, method);
    sub_1BCA7E0(&GeoLocation_LocationDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__0__, v8, v9);
    sub_1BCA7E0(&ScrPlayerStatus___c__DisplayClass175_0_TypeInfo, v10, v11);
    byte_4B133F5 = 1;
  }
  v12 = sub_1BCAA2C(ScrPlayerStatus___c__DisplayClass175_0_TypeInfo, eventEnt, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = eventEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)eventEnt, v21, v22, v23, v24, v25, v26);
  v30 = (GeoLocation_LocationDelegate_o *)sub_1BCAA2C(GeoLocation_LocationDelegate_TypeInfo, v27, v28, v29);
  GeoLocation_LocationDelegate___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__0__,
    0LL);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo, v31);
  GeoLocation__GetLocation(v30, (UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScrPlayerStatus__mfCallFsmEvent(
        ScrPlayerStatus_o *this,
        System_String_o *sEventStr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct PlayMakerFSM_o **p_mTargetFsm; // x20
  UnityEngine_Object_o *mTargetFsm; // x22
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_4B133F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, sEventStr, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B133F7 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sEventStr);
  if ( UnityEngine_Object__op_Equality(0LL, mTargetFsm, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mTargetFsm,
      (int64_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(0LL, v17, 0LL) )
  {
    Fsm = *p_mTargetFsm;
    if ( !*p_mTargetFsm || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL)) == 0LL )
      sub_1BCAA3C(Fsm, v18);
    HutongGames_PlayMaker_Fsm__Event_64415908((HutongGames_PlayMaker_Fsm_o *)Fsm, sEventStr, 0LL);
  }
}


void __fastcall ScrPlayerStatus__mfCheckCompleteMission(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  __int64 size; // x2
  int v32; // w9
  System_Collections_Generic_List_object__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_object__o *v40; // x0
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  Il2CppObject *MasterData_object; // x22
  MstMissionEntity_array *EnableMissions; // x24
  int max_length; // w8
  UserEventMissionMaster_o *v46; // x25
  unsigned int v47; // w28
  int32_t v48; // w20
  MstMissionEntity_o *v49; // x26
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  DataManager_o *v52; // x23
  int32_t MissionClearCount_35098440; // w27
  int32_t m_CancellationTokenSource; // w25
  __int64 v55; // x8
  int32_t v56; // w24
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  MasterMissionComponent_MasterMissionInfoItem_o *v60; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v70; // x8
  __int64 v71; // x8
  __int64 v72; // x1
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  Il2CppObject *cNoticeNumberPrefab; // x22
  Il2CppObject *v76; // x22
  Il2CppObject *Component_object; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  UIWidget_o *v84; // x22
  struct NoticeNumberComponent_o *v85; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v87; // x1

  if ( (byte_4B1340B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v17, v18);
    sub_1BCA7E0(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B1340B = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = &this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    size = (unsigned int)currentCompleteMissionList->fields._size;
    v32 = currentCompleteMissionList->fields._version + 1;
    currentCompleteMissionList->fields._size = 0;
    currentCompleteMissionList->fields._version = v32;
    if ( (int)size >= 1 )
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
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                                       method,
                                                       size,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_52;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_52;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v48 = 0;
  }
  else
  {
    v46 = (UserEventMissionMaster_o *)Instance;
    v47 = 0;
    v48 = 0;
    while ( 1 )
    {
      if ( v47 >= max_length )
        goto LABEL_53;
      v49 = EnableMissions->m_Items[v47];
      if ( !v49 )
        goto LABEL_52;
      if ( !MasterData_object )
        goto LABEL_52;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    (EventMissionMaster_o *)MasterData_object,
                                    v49->fields.id,
                                    0LL);
      if ( !Instance )
        goto LABEL_52;
      v52 = Instance;
      if ( Instance->fields.m_CancellationTokenSource )
      {
        MissionClearCount_35098440 = ScrPlayerStatus__GetMissionClearCount_35098440(
                                       (ScrPlayerStatus_o *)Instance,
                                       (EventMissionEntity_array *)Instance,
                                       v50,
                                       v51);
        v48 += MissionClearCount_35098440;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v49, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v47 >= max_length )
        goto LABEL_36;
    }
    if ( !v46 )
      goto LABEL_52;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v46, v49->fields.id, 0LL);
    m_CancellationTokenSource = (int32_t)v52->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_53;
    v55 = *(_QWORD *)&v52->fields._DispLog;
    if ( !v55 )
      goto LABEL_52;
    v56 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_52;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v55 + 28), 0LL);
    v60 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1BCAA2C(
                                                              MasterMissionComponent_MasterMissionInfoItem_TypeInfo,
                                                              v57,
                                                              v58,
                                                              v59);
    MasterMissionComponent_MasterMissionInfoItem___ctor(
      v60,
      v49,
      m_CancellationTokenSource,
      MissionClearCount_35098440,
      v56,
      0LL);
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_52;
    v67 = *(_QWORD *)&Instance->fields.m_CachedPtr;
    v68 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v67 )
      goto LABEL_52;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v67 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v60,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = v67 + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v70 + 32) = v60;
      sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 32), (int64_t)v60, v61, v62, v63, v64, v65, v66);
    }
    if ( !LODWORD(v52->fields.m_CancellationTokenSource) )
LABEL_53:
      sub_1BCAA44(Instance, v42);
    v71 = *(_QWORD *)&v52->fields._DispLog;
    if ( !v71 )
      goto LABEL_52;
    if ( *(_DWORD *)(v71 + 24) == 6 )
      this->fields.completeMissionEventId = *(_DWORD *)(v71 + 28);
  }
LABEL_36:
  Instance = (DataManager_o *)this->fields.completeMissionIcon;
  if ( !Instance )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  p_mCompleteMissionNoticeNumber = &this->fields.mCompleteMissionNoticeNumber;
  mCompleteMissionNoticeNumber = (UnityEngine_Object_o *)this->fields.mCompleteMissionNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
  if ( UnityEngine_Object__op_Equality(mCompleteMissionNoticeNumber, 0LL, 0LL) )
  {
    cNoticeNumberPrefab = (Il2CppObject *)this->fields.cNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
    v76 = UnityEngine_Object__Instantiate_object_(
            cNoticeNumberPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34336992(
      (UnityEngine_GameObject_o *)v76,
      this->fields.completeMissionNoticeRoot,
      0LL);
    if ( v76 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v76,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.mCompleteMissionNoticeNumber,
        (int64_t)Component_object,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
        v84 = (UIWidget_o *)Instance;
        if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v42);
        if ( v84 )
        {
          UIWidget__set_depth(v84, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
          UIWidget__set_width(v84, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
          UIWidget__set_height(v84, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
          v85 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v85->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v85->fields.numberLabel,
                ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH + 1,
                0LL);
              UILabel__set_fontSize(
                numberLabel,
                ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE,
                0LL);
              UIWidget__set_width(
                (UIWidget_o *)numberLabel,
                ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_LABEL_WIDTH,
                0LL);
              goto LABEL_50;
            }
          }
        }
      }
    }
LABEL_52:
    sub_1BCAA3C(Instance, v42);
  }
LABEL_50:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_52;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v48, 0LL);
  ScrPlayerStatus__InitCompleteMissionLb(this, v87);
}


void __fastcall ScrPlayerStatus__mfCheckMasterMission(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  __int64 size; // x2
  int v43; // w9
  System_Collections_Generic_List_object__o *v44; // x19
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_List_object__o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  DataManager_o *Instance; // x0
  Il2CppObject *v56; // x1
  Il2CppObject *MasterData_object; // x24
  MstMissionEntity_array *EnableMissions; // x25
  int max_length; // w8
  UserEventMissionMaster_o *v60; // x19
  unsigned int v61; // w22
  int32_t v62; // w20
  Il2CppClass **v63; // x8
  MstMissionEntity_o *v64; // x27
  const MethodInfo *v65; // x2
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  DataManager_o *v68; // x29
  int32_t MissionClearCount; // w28
  int32_t AchiveMissionNum; // w0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  int64_t startedAt; // x8
  int32_t m_CancellationTokenSource; // w19
  int32_t v76; // w21
  MasterMissionComponent_MasterMissionInfoItem_o *v77; // x29
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  PartyOrganizationUtility_o *v88; // x0
  int32_t m_CancellationTokenSource_high; // w9
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x10
  __int64 v92; // x11
  Il2CppClass **v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  EventMissionEntity_array *v96; // x28
  ScrPlayerStatus_o *v97; // x0
  int32_t v98; // w19
  int32_t v99; // w21
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t v102; // w29
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  MasterMissionComponent_MasterMissionInfoItem_o *v106; // x28
  struct MasterMissionComponent_MasterMissionInfoItem_array *v107; // x8
  _QWORD *v108; // x9
  __int64 m_CancellationTokenSource_low; // x10
  Il2CppClass **v110; // x8
  __int64 v111; // x8
  __int64 v112; // x2
  __int64 v113; // x3
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v114; // x21
  System_Predicate_object__o *v115; // x22
  Il2CppObject *v116; // x19
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  __int64 v124; // x1
  UnityEngine_Object_o *mMasterMissionNoticeNumber; // x19
  struct NoticeNumberComponent_o **p_mMasterMissionNoticeNumber; // x21
  Il2CppObject *mNoticeNumberPrefab; // x19
  Il2CppObject *v128; // x19
  Il2CppObject *Component_object; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  UIWidget_o *v136; // x22
  struct NoticeNumberComponent_o *v137; // x8
  UILabel_o *numberLabel; // x22
  UnityEngine_Behaviour_o *masterMissionTween; // x20
  __int64 v140; // x1
  __int64 v141; // x2
  UnityEngine_GameObject_o *gameObject; // x19
  System_Collections_Generic_List_object__o *v143; // [xsp+0h] [xbp-80h]
  UserEventMissionMaster_o *v144; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **list; // [xsp+10h] [xbp-70h]

  if ( (byte_4B1340A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v15, v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__,
      v17,
      v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v23, v24);
    sub_1BCA7E0(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v31, v32);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__mfCheckMasterMission_b__198_0__, v37, v38);
    sub_1BCA7E0(&ScrPlayerStatus___c_TypeInfo, v39, v40);
    byte_4B1340A = 1;
  }
  currentMissionList = this->fields.currentMissionList;
  this->fields.mstMissionStartsAt = 0LL;
  list = &this->fields.currentMissionList;
  if ( currentMissionList )
  {
    size = (unsigned int)currentMissionList->fields._size;
    v43 = currentMissionList->fields._version + 1;
    currentMissionList->fields._size = 0;
    currentMissionList->fields._version = v43;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)currentMissionList->fields._items, 0, size, 0LL);
  }
  else
  {
    v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    this->fields.currentMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v44;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.currentMissionList,
      (int64_t)v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                                       method,
                                                       size,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  v143 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                                        v52,
                                                        v53,
                                                        v54);
  System_Collections_Generic_List_object____ctor(
    v143,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___)) == 0LL
    || (EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
        !EnableMissions) )
  {
LABEL_90:
    sub_1BCAA3C(Instance, v56);
  }
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v60 = (UserEventMissionMaster_o *)Instance;
    v61 = 0;
    v62 = 0;
    v144 = (UserEventMissionMaster_o *)Instance;
    while ( 2 )
    {
      if ( v61 >= max_length )
        sub_1BCAA44(Instance, v56);
      v63 = &EnableMissions->obj.klass + (int)v61;
      v64 = (MstMissionEntity_o *)v63[4];
      if ( v64 )
      {
        Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v63[4], 0LL);
        switch ( (int)Instance )
        {
          case 2:
            if ( !MasterData_object )
              goto LABEL_90;
            Instance = (DataManager_o *)EventMissionMaster__getWeeklyMasterMissionList(
                                          (EventMissionMaster_o *)MasterData_object,
                                          v64->fields.id,
                                          0LL);
            if ( !Instance )
              goto LABEL_90;
            v68 = Instance;
            if ( !Instance->fields.m_CancellationTokenSource )
              goto LABEL_52;
            MissionClearCount = ScrPlayerStatus__GetMissionClearCount(
                                  (ScrPlayerStatus_o *)Instance,
                                  (EventMissionEntity_array *)Instance,
                                  v66,
                                  v67);
            v62 += MissionClearCount;
            Instance = (DataManager_o *)MstMissionEntity__isOpenNow(v64, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_52;
            if ( !v60 )
              goto LABEL_90;
            AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(v60, v64->fields.id, 0LL);
            startedAt = v64->fields.startedAt;
            m_CancellationTokenSource = (int32_t)v68->fields.m_CancellationTokenSource;
            v76 = AchiveMissionNum;
            if ( startedAt > this->fields.mstMissionStartsAt )
              this->fields.mstMissionStartsAt = startedAt;
            v77 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1BCAA2C(
                                                                      MasterMissionComponent_MasterMissionInfoItem_TypeInfo,
                                                                      v71,
                                                                      v72,
                                                                      v73);
            MasterMissionComponent_MasterMissionInfoItem___ctor(
              v77,
              v64,
              m_CancellationTokenSource,
              MissionClearCount,
              v76,
              0LL);
            if ( !v143 )
              goto LABEL_90;
            items = v143->fields._items;
            v60 = v144;
            v85 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++v143->fields._version;
            if ( !items )
              goto LABEL_90;
            v86 = v143->fields._size;
            if ( (unsigned int)v86 < items->max_length )
            {
              v87 = &items->obj.klass + v86;
              v143->fields._size = v86 + 1;
              v87[4] = (Il2CppClass *)v77;
              v88 = (PartyOrganizationUtility_o *)(v87 + 4);
              v56 = (Il2CppObject *)v77;
              goto LABEL_47;
            }
            v111 = v85[4];
            Instance = (DataManager_o *)v143;
            v56 = (Il2CppObject *)v77;
            goto LABEL_51;
          case 3:
            Instance = (DataManager_o *)ScrPlayerStatus__GetDailyMissionInfoItem(this, v64, v65);
            if ( !Instance )
              goto LABEL_52;
            if ( !v51 )
              goto LABEL_90;
            m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
            v90 = v51->fields._items;
            v56 = (Il2CppObject *)Instance;
            v91 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++v51->fields._version;
            if ( !v90 )
              goto LABEL_90;
            v92 = v51->fields._size;
            v62 += m_CancellationTokenSource_high;
            if ( (unsigned int)v92 < v90->max_length )
            {
              v93 = &v90->obj.klass + v92;
              v51->fields._size = v92 + 1;
              v93[4] = (Il2CppClass *)v56;
              v88 = (PartyOrganizationUtility_o *)(v93 + 4);
              goto LABEL_47;
            }
            v111 = v91[4];
            Instance = (DataManager_o *)v51;
            goto LABEL_51;
          case 4:
            if ( !MasterData_object )
              goto LABEL_90;
            Instance = (DataManager_o *)EventMissionMaster__getExtraMissionList(
                                          (EventMissionMaster_o *)MasterData_object,
                                          v64->fields.id,
                                          0LL);
            if ( !Instance )
              goto LABEL_90;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)Instance,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
            if ( !Instance )
              goto LABEL_90;
            if ( Instance->fields.m_CancellationTokenSource )
            {
              Instance = (DataManager_o *)ScrPlayerStatus__GetMissionClearCount(
                                            (ScrPlayerStatus_o *)Instance,
                                            (EventMissionEntity_array *)Instance,
                                            v94,
                                            v95);
              v62 += (int)Instance;
            }
            goto LABEL_52;
          case 5:
            if ( !MasterData_object )
              goto LABEL_90;
            Instance = (DataManager_o *)EventMissionMaster__getLimitedMissionList(
                                          (EventMissionMaster_o *)MasterData_object,
                                          v64->fields.id,
                                          0LL);
            if ( !Instance )
              goto LABEL_90;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)Instance,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
            if ( !Instance )
              goto LABEL_90;
            v96 = (EventMissionEntity_array *)Instance;
            if ( !Instance->fields.m_CancellationTokenSource )
              goto LABEL_52;
            if ( !v60 )
              goto LABEL_90;
            v97 = (ScrPlayerStatus_o *)UserEventMissionMaster__getAchiveMissionNum(v60, v64->fields.id, 0LL);
            v98 = v96->max_length;
            v99 = (int)v97;
            v102 = ScrPlayerStatus__GetMissionClearCount(v97, v96, v100, v101);
            v106 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1BCAA2C(
                                                                       MasterMissionComponent_MasterMissionInfoItem_TypeInfo,
                                                                       v103,
                                                                       v104,
                                                                       v105);
            MasterMissionComponent_MasterMissionInfoItem___ctor(v106, v64, v98, v102, v99, 0LL);
            Instance = (DataManager_o *)*list;
            if ( !*list )
              goto LABEL_90;
            v107 = *(struct MasterMissionComponent_MasterMissionInfoItem_array **)&Instance->fields.m_CachedPtr;
            v108 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++HIDWORD(Instance->fields.m_CancellationTokenSource);
            if ( !v107 )
              goto LABEL_90;
            m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
            v60 = v144;
            v62 += v102;
            if ( (unsigned int)m_CancellationTokenSource_low >= v107->max_length )
            {
              v111 = v108[4];
              v56 = (Il2CppObject *)v106;
LABEL_51:
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                v56,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v111 + 192) + 112LL));
            }
            else
            {
              v110 = &v107->obj.klass + m_CancellationTokenSource_low;
              LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              v110[4] = (Il2CppClass *)v106;
              v88 = (PartyOrganizationUtility_o *)(v110 + 4);
              v56 = (Il2CppObject *)v106;
LABEL_47:
              sub_1BCA784(v88, (int64_t)v56, v78, v79, v80, v81, v82, v83);
            }
LABEL_52:
            max_length = EnableMissions->max_length;
            if ( (int)++v61 >= max_length )
              goto LABEL_55;
            continue;
          default:
            goto LABEL_52;
        }
      }
      goto LABEL_90;
    }
  }
  v62 = 0;
LABEL_55:
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v56);
  ScrPlayerStatus__SortLimitedMstMissionViewList(list, (const MethodInfo *)v56);
  Instance = (DataManager_o *)*list;
  if ( !*list )
    goto LABEL_90;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v51,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
  Instance = (DataManager_o *)*list;
  if ( !*list )
    goto LABEL_90;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v143,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
  Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
  v114 = *list;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v56);
    Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
  }
  v115 = *(System_Predicate_object__o **)(*(_QWORD *)&Instance[1].fields._DispLog + 48LL);
  if ( !v115 )
  {
    if ( !LODWORD(Instance[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v56);
      Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
    }
    v116 = **(Il2CppObject ***)&Instance[1].fields._DispLog;
    v115 = (System_Predicate_object__o *)sub_1BCAA2C(
                                           System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                           v56,
                                           v112,
                                           v113);
    System_Predicate_object____ctor(v115, v116, Method_ScrPlayerStatus___c__mfCheckMasterMission_b__198_0__, 0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__198_0 = (struct System_Predicate_MasterMissionComponent_MasterMissionInfoItem__o *)v115;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__198_0,
      (int64_t)v115,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
  }
  if ( !v114 )
    goto LABEL_90;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v114,
    (System_Predicate_T__o *)v115,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
  p_mMasterMissionNoticeNumber = &this->fields.mMasterMissionNoticeNumber;
  mMasterMissionNoticeNumber = (UnityEngine_Object_o *)this->fields.mMasterMissionNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v124);
  if ( UnityEngine_Object__op_Equality(mMasterMissionNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
    v128 = UnityEngine_Object__Instantiate_object_(
             mNoticeNumberPrefab,
             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34336992(
      (UnityEngine_GameObject_o *)v128,
      this->fields.masterMissionNoticeRoot,
      0LL);
    if ( !v128 )
      goto LABEL_90;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v128,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mMasterMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mMasterMissionNoticeNumber,
      (int64_t)Component_object,
      v130,
      v131,
      v132,
      v133,
      v134,
      v135);
    Instance = (DataManager_o *)*p_mMasterMissionNoticeNumber;
    if ( !*p_mMasterMissionNoticeNumber )
      goto LABEL_90;
    Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
    v136 = (UIWidget_o *)Instance;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v56);
    if ( !v136 )
      goto LABEL_90;
    UIWidget__set_depth(v136, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
    UIWidget__set_width(v136, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
    UIWidget__set_height(v136, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
    v137 = *p_mMasterMissionNoticeNumber;
    if ( !*p_mMasterMissionNoticeNumber )
      goto LABEL_90;
    numberLabel = v137->fields.numberLabel;
    if ( !numberLabel )
      goto LABEL_90;
    UIWidget__set_depth(
      (UIWidget_o *)v137->fields.numberLabel,
      ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH + 1,
      0LL);
    UILabel__set_fontSize(numberLabel, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_FONT_SIZE, 0LL);
    UIWidget__set_width(
      (UIWidget_o *)numberLabel,
      ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_LABEL_WIDTH,
      0LL);
  }
  Instance = (DataManager_o *)*p_mMasterMissionNoticeNumber;
  if ( !*p_mMasterMissionNoticeNumber )
    goto LABEL_90;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v62, 0LL);
  Instance = (DataManager_o *)this->fields.mMasterMissionNoticeNumber;
  if ( !Instance )
    goto LABEL_90;
  masterMissionTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionTween;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_90;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !masterMissionTween )
    goto LABEL_90;
  UnityEngine_Behaviour__set_enabled(masterMissionTween, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.masterMissionTween;
  if ( !Instance )
    goto LABEL_90;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.masterMissionTween;
    if ( !Instance )
      goto LABEL_90;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v140, v141);
      byte_4B109C1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  ScrPlayerStatus__InitMstMissionLb(this, (const MethodInfo *)v56);
}


void __fastcall ScrPlayerStatus__mfFaceMngCallback(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 mcFaceObjP; // x0
  int v7; // w8
  __int64 v8; // x20
  unsigned int v9; // w23
  __int64 v10; // x8
  UIWidget_o *v11; // x22
  System_String_o *name; // x0
  __int64 v13; // x2
  UnityEngine_Transform_o *v14; // x22

  if ( (byte_4B133FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITexture___, method, v2);
    sub_1BCA7E0(&StringLiteral_3331/*"Body"*/, v4, v5);
    byte_4B133FF = 1;
  }
  mcFaceObjP = (__int64)this->fields.mcFaceObjP;
  if ( !mcFaceObjP )
    goto LABEL_17;
  mcFaceObjP = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                          (UnityEngine_GameObject_o *)mcFaceObjP,
                          (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UITexture___);
  if ( !mcFaceObjP )
    goto LABEL_17;
  v7 = *(_DWORD *)(mcFaceObjP + 24);
  v8 = mcFaceObjP;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1BCAA44(mcFaceObjP, method);
      v10 = v8 + 8LL * (int)v9;
      v11 = *(UIWidget_o **)(v10 + 32);
      if ( !v11 )
        break;
      name = UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v10 + 32), 0LL);
      mcFaceObjP = System_String__op_Equality(name, (System_String_o *)StringLiteral_3331/*"Body"*/, 0LL);
      if ( (mcFaceObjP & 1) != 0 )
      {
        UIWidget__SetDimensions(v11, 350, 350, 0LL);
        UIWidget__set_pivot(v11, 4, 0LL);
        mcFaceObjP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
        if ( !mcFaceObjP )
          break;
        mcFaceObjP = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mcFaceObjP, 0LL);
        v14 = (UnityEngine_Transform_o *)mcFaceObjP;
        if ( !byte_4B109C1 )
        {
          mcFaceObjP = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v13);
          byte_4B109C1 = 1;
        }
        if ( !v14 )
          break;
        UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      }
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        goto LABEL_16;
    }
LABEL_17:
    sub_1BCAA3C(mcFaceObjP, method);
  }
LABEL_16:
  this->fields.isUpdateFaceTexture = 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ScrPlayerStatus__mfGetApRecoverTimeStr(
        ScrPlayerStatus_o *this,
        bool isGetMax,
        const MethodInfo *method)
{
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v6; // x21
  ScrPlayerStatus_o *ActAllRecoverTime; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4B13406 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, isGetMax, method);
    byte_4B13406 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_11;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !UserGameEntity__IsNeedRecoverAct(userGameEntity, 0LL) )
    return v6;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_11:
    sub_1BCAA3C(userGameEntity, isGetMax);
  if ( isGetMax )
    ActAllRecoverTime = (ScrPlayerStatus_o *)UserGameEntity__getActAllRecoverTime(userGameEntity, 0LL);
  else
    ActAllRecoverTime = (ScrPlayerStatus_o *)UserGameEntity__getActNextRecoverTime(userGameEntity, 0LL);
  return ScrPlayerStatus__GetTimeApRecoverStr(ActAllRecoverTime, (int64_t)ActAllRecoverTime, isGetMax, v8);
}


System_String_o *__fastcall ScrPlayerStatus__mfGetCommandSpellRecoverTimeStr(
        ScrPlayerStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v7; // x20
  int32_t CommandSpell; // w0
  BalanceConfig_c *v9; // x8
  int32_t CommandSpellMax; // w8
  _BOOL8 CmdSpellInfo; // x0
  const MethodInfo *v12; // x2
  int64_t time; // [xsp+0h] [xbp-30h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13409 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B13409 = 1;
  }
  count = 0;
  time = 0LL;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_10;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  CommandSpell = UserGameEntity__getCommandSpell(userGameEntity, 0LL);
  this->fields.miSpellNow = CommandSpell;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v9 = BalanceConfig_TypeInfo;
    CommandSpell = this->fields.miSpellNow;
  }
  CommandSpellMax = v9->static_fields->CommandSpellMax;
  this->fields.miSpellMax = CommandSpellMax;
  if ( CommandSpell != CommandSpellMax )
  {
    userGameEntity = this->fields.userGameEntity;
    if ( userGameEntity )
    {
      CmdSpellInfo = UserGameEntity__getCmdSpellInfo(userGameEntity, &count, &time, 0LL);
      return ScrPlayerStatus__GetTimeCommandSpellRecoverStr((ScrPlayerStatus_o *)CmdSpellInfo, time, v12);
    }
LABEL_10:
    sub_1BCAA3C(userGameEntity, method);
  }
  return v7;
}


int32_t __fastcall ScrPlayerStatus__mfGetFsmValueInt(
        ScrPlayerStatus_o *this,
        System_String_o *sValueStr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct PlayMakerFSM_o **p_mTargetFsm; // x20
  UnityEngine_Object_o *mTargetFsm; // x22
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_4B133F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, sValueStr, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B133F9 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sValueStr);
  if ( UnityEngine_Object__op_Equality(0LL, mTargetFsm, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mTargetFsm,
      (int64_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Inequality(0LL, v17, 0LL) )
    return 0;
  Fsm = *p_mTargetFsm;
  if ( !*p_mTargetFsm
    || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL)) == 0LL
    || (Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource) == 0LL
    || (Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                  sValueStr,
                                  0LL)) == 0LL )
  {
    sub_1BCAA3C(Fsm, v18);
  }
  return HutongGames_PlayMaker_FsmInt__get_Value((HutongGames_PlayMaker_FsmInt_o *)Fsm, 0LL);
}


void __fastcall ScrPlayerStatus__mfInitUserData(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  BaseDialog_o *nextExpDialog; // x0

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userGameEntity, (int64_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
  ScrPlayerStatus__SetAllParam(this, this->fields.userGameEntity, v10);
  nextExpDialog = this->fields.nextExpDialog;
  this->fields.mtIsUpdate = 1;
  if ( !nextExpDialog )
    sub_1BCAA3C(0LL, v11);
  BaseDialog__Init(nextExpDialog, 0LL);
}


void __fastcall ScrPlayerStatus__mfSetAp(
        ScrPlayerStatus_o *this,
        int32_t iApNow,
        int32_t iApMax,
        const MethodInfo *method)
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


void __fastcall ScrPlayerStatus__mfSetFaceID(
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
void __fastcall ScrPlayerStatus__mfSetFsmValueInt(
        ScrPlayerStatus_o *this,
        System_String_o *sValueStr,
        int32_t iValueInt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  struct PlayMakerFSM_o **p_mTargetFsm; // x21
  UnityEngine_Object_o *mTargetFsm; // x23
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_Object_o *v19; // x22
  __int64 v20; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_4B133F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, sValueStr, *(_QWORD *)&iValueInt);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B133F8 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sValueStr);
  if ( UnityEngine_Object__op_Equality(0LL, mTargetFsm, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mTargetFsm,
      (int64_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(0LL, v19, 0LL) )
  {
    Fsm = *p_mTargetFsm;
    if ( !*p_mTargetFsm
      || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL)) == 0LL
      || (Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource) == 0LL
      || (Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                    (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                                    sValueStr,
                                    0LL)) == 0LL )
    {
      sub_1BCAA3C(Fsm, v20);
    }
    LODWORD(Fsm->fields.addEventHandlers) = iValueInt;
  }
}


void __fastcall ScrPlayerStatus__mfSetIsUpdate(ScrPlayerStatus_o *this, bool isUpdate, const MethodInfo *method)
{
  this->fields.mtIsUpdate = isUpdate;
}


void __fastcall ScrPlayerStatus__mfSetLevel(ScrPlayerStatus_o *this, int32_t iLevel, const MethodInfo *method)
{
  this->fields.miLevel = iLevel;
}


void __fastcall ScrPlayerStatus__mfSetLocationEventTime(ScrPlayerStatus_o *this, int64_t now, const MethodInfo *method)
{
  int64_t v3; // x20
  ScrPlayerStatus_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Int64_array *mNextLocationEventTerm; // x8
  unsigned int max_length; // w9
  _QWORD *p_mNextLocationEventTerm; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x9
  struct System_Int64_array *v17; // x8
  ScrPlayerStatus_o *v18; // x20
  struct PlayMakerFSM_o *mTargetFsm; // x9
  unsigned int v20; // w10
  il2cpp_array_size_t v21; // w9
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct PlayMakerFSM_o *v28; // x8
  unsigned int v29; // w9
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x21
  struct PlayMakerFSM_o *v32; // x8
  __int64 v33; // x9
  int64_t v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  v3 = now;
  v4 = this;
  if ( (byte_4B1341B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, now, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v5, v6);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    this = (ScrPlayerStatus_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B1341B = 1;
  }
  mNextLocationEventTerm = v4->fields.mNextLocationEventTerm;
  if ( !mNextLocationEventTerm )
    goto LABEL_8;
  max_length = mNextLocationEventTerm->max_length;
  if ( !max_length )
    goto LABEL_44;
  if ( mNextLocationEventTerm->m_Items[0] >= 1 )
  {
    if ( max_length <= 1 )
      goto LABEL_44;
    if ( mNextLocationEventTerm->m_Items[1] < v3 )
    {
LABEL_8:
      this = (ScrPlayerStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_43;
      this = (ScrPlayerStatus_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_43;
      this = (ScrPlayerStatus_o *)EventMaster__GetEnableEntityList((EventMaster_o *)this, 20, 0, 0LL);
      if ( !this )
        goto LABEL_43;
      p_mNextLocationEventTerm = &v4->fields.mNextLocationEventTerm;
      m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
      v17 = v4->fields.mNextLocationEventTerm;
      v18 = this;
      if ( m_CancellationTokenSource )
      {
        if ( v17 )
        {
          if ( !(_DWORD)m_CancellationTokenSource )
            goto LABEL_44;
          mTargetFsm = this->fields.mTargetFsm;
          if ( !mTargetFsm )
            goto LABEL_43;
          v20 = v17->max_length;
          if ( !v20 )
            goto LABEL_44;
          v17->m_Items[0] = (int64_t)mTargetFsm[1].fields.m_CancellationTokenSource;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) || v20 <= 1 )
            goto LABEL_44;
          v17->m_Items[1] = (int64_t)mTargetFsm[1].fields.fsm;
        }
        else
        {
          this = (ScrPlayerStatus_o *)sub_1BCA888(long___TypeInfo, 2LL);
          if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
            goto LABEL_44;
          v28 = v18->fields.mTargetFsm;
          if ( !v28 )
            goto LABEL_43;
          now = (int64_t)this;
          if ( !this )
            goto LABEL_43;
          v29 = (unsigned int)this->fields.m_CancellationTokenSource;
          if ( !v29 )
            goto LABEL_44;
          this->fields.mTargetFsm = (struct PlayMakerFSM_o *)v28[1].fields.m_CancellationTokenSource;
          if ( !LODWORD(v18->fields.m_CancellationTokenSource) || v29 <= 1 )
            goto LABEL_44;
          this->fields.mcFaceObjP = (struct UnityEngine_GameObject_o *)v28[1].fields.fsm;
          *p_mNextLocationEventTerm = this;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v4->fields.mNextLocationEventTerm,
            (int64_t)this,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
        }
        this = (ScrPlayerStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_43;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
        this = (ScrPlayerStatus_o *)NetworkManager__get_UserId(0LL);
        if ( LODWORD(v18->fields.m_CancellationTokenSource) )
        {
          v32 = v18->fields.mTargetFsm;
          if ( v32 && MasterData_object )
          {
            v33 = 20LL;
            if ( *((int *)&v32->fields.UnityEngine_Behaviour_Fields + 1) <= 0 )
              v33 = 16LL;
            this = (ScrPlayerStatus_o *)UserEventMaster__GetEntityDefinitely(
                                          (UserEventMaster_o *)MasterData_object,
                                          (int64_t)this,
                                          *(_DWORD *)((char *)&v32->klass + v33),
                                          0LL);
            if ( this )
            {
              v4->fields.mIsAcceptedLocationEvent = SHIDWORD(this->fields.m_CancellationTokenSource) > 0;
              return;
            }
          }
LABEL_43:
          sub_1BCAA3C(this, now);
        }
LABEL_44:
        sub_1BCAA44(this, now);
      }
      if ( v17 )
      {
        v21 = v17->max_length;
        if ( !v21 )
          goto LABEL_44;
        v17->m_Items[0] = 0LL;
        if ( v21 == 1 )
          goto LABEL_44;
        v17->m_Items[1] = 0LL;
      }
      else
      {
        v34 = sub_1BCA888(long___TypeInfo, 2LL);
        *p_mNextLocationEventTerm = v34;
        sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.mNextLocationEventTerm, v34, v35, v36, v37, v38, v39, v40);
      }
      v4->fields.mIsAcceptedLocationEvent = 0;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__mfSetSpell(
        ScrPlayerStatus_o *this,
        int32_t iSpellNow,
        int32_t iSpellMax,
        const MethodInfo *method)
{
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
  UnityEngine_Object_o *commandSpellWindow; // x21
  struct CommandSpellWindowComponent_o **p_commandSpellWindow; // x20
  __int64 v19; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x21
  Il2CppObject *commandSpellWindowPrefab; // x21
  Il2CppObject *v24; // x21
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_GameObject_o *v33; // x0
  CommandSpellWindowComponent_o *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  struct CommandSpellWindowComponent_o *v37; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B13419 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, *(_QWORD *)&iSpellNow, *(_QWORD *)&iSpellMax);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ScrPlayerStatus_OnCloseSpellWindow__, v13, v14);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v15, v16);
    byte_4B13419 = 1;
  }
  this->fields.miSpellNow = iSpellNow;
  this->fields.miSpellMax = iSpellMax;
  commandSpellWindow = (UnityEngine_Object_o *)this->fields.commandSpellWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&iSpellNow);
  p_commandSpellWindow = &this->fields.commandSpellWindow;
  if ( UnityEngine_Object__op_Inequality(commandSpellWindow, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow;
    if ( !*p_commandSpellWindow )
      goto LABEL_23;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow;
    if ( !*p_commandSpellWindow )
      goto LABEL_23;
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    UnityEngine_Object__Destroy_70154244(v22, 0LL);
  }
  commandSpellWindowPrefab = (Il2CppObject *)this->fields.commandSpellWindowPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  v24 = UnityEngine_Object__Instantiate_object_(
          commandSpellWindowPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v24, layer, 0LL);
  if ( !v24 )
    goto LABEL_23;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v24,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___);
  *p_commandSpellWindow = (struct CommandSpellWindowComponent_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandSpellWindow,
    (int64_t)Component_object,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow;
  if ( !*p_commandSpellWindow )
    goto LABEL_23;
  v33 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(v33, this->fields.commandSpellWindowRoot, 0LL);
  gameObject = (UnityEngine_Component_o *)ScrPlayerStatus_TypeInfo;
  v34 = this->fields.commandSpellWindow;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v19);
  if ( !v34
    || (CommandSpellWindowComponent__InitializeCommandSpellDepth(
          v34,
          0,
          ScrPlayerStatus_TypeInfo->static_fields->CMD_SPELL_SCROLLVIEW_DEPTH,
          0LL),
        (gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow) == 0LL)
    || (BattleWindowComponent__setInitData(
          (BattleWindowComponent_o *)gameObject,
          2,
          ScrPlayerStatus_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0LL),
        (v37 = *p_commandSpellWindow) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(gameObject, v19);
  }
  v37->fields.mode = 0;
  v38 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1BCAA2C(
                                                               CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                               v19,
                                                               v35,
                                                               v36);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v38,
    (Il2CppObject *)this,
    (intptr_t)Method_ScrPlayerStatus_OnCloseSpellWindow__,
    0LL);
  v37->fields.callback_close = v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v37->fields.callback_close, (int64_t)v38, v39, v40, v41, v42, v43, v44);
}


void __fastcall ScrPlayerStatus__mfSetStoneAndFragment(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v44; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v46; // x1
  Il2CppObject *v47; // x22
  __int64 v48; // x1
  UserItemEntity_o *EntityDefinitely; // x21
  Il2CppObject *Master_object; // x22
  int64_t v51; // x23
  int32_t num; // w26
  int32_t stone; // w23
  int32_t v54; // w21
  __int64 v55; // x1
  int32_t MaxNum; // w20
  bool _38402052; // w0
  __int64 v58; // x1
  UILabel_o *stoneCountNumLb; // x22
  UILabel_o *v60; // x22
  UILabel_o *stoneFragmentCountNumLb; // x22
  __int64 v62; // x1
  Il2CppObject **v63; // x8
  Il2CppObject *v64; // x21
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  __int64 v67; // x1
  UILabel_o *stormPodCountNumLb; // x21
  Il2CppObject *v69; // x22
  System_String_o *v70; // x23
  Il2CppObject *v71; // x0
  UILabel_o *v72; // x20
  __int64 v73; // x1
  UISprite_o *stormPodIcon; // x19
  int32_t v75; // [xsp+0h] [xbp-60h] BYREF
  int32_t v76; // [xsp+4h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1341A & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_19590/*"ffb505"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_19592/*"ffffff"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_21115/*"item_mini_49"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_3941/*"COUNT_LIMITED"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_16197/*"[{0}]{1:N0}[-]"*/, v40, v41);
    byte_4B1341A = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  v47 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v46);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object || !v47 )
    goto LABEL_58;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v47,
                       (int64_t)Instance,
                       (int32_t)MasterData_object[5].monitor,
                       0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v51 = (int64_t)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44);
  if ( !Master_object )
    goto LABEL_58;
  UserItemMaster__TryGetEntity(
    (UserItemMaster_o *)Master_object,
    &entity,
    v51,
    BalanceConfig_TypeInfo->static_fields->stormPodItemId,
    0LL);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                BalanceConfig_TypeInfo->static_fields->stormPodItemId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !SelfUserGame || !EntityDefinitely )
    goto LABEL_58;
  if ( entity )
  {
    num = entity->fields.num;
    if ( !Instance )
      goto LABEL_58;
  }
  else
  {
    num = 0;
    if ( !Instance )
      goto LABEL_58;
  }
  stone = SelfUserGame->fields.stone;
  v54 = EntityDefinitely->fields.num;
  MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)Instance, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v55);
  _38402052 = TutorialFlag__Get_38402052(101, 0LL);
  stoneCountNumLb = this->fields.stoneCountNumLb;
  if ( !_38402052 )
    stone = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneCountNumLb )
    goto LABEL_58;
  UILabel__set_text(stoneCountNumLb, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)ScrPlayerStatus_TypeInfo;
  v60 = this->fields.stoneCountNumLb;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v44);
  if ( !v60 )
    goto LABEL_58;
  UILabel__SetCondensedScale(v60, ScrPlayerStatus_TypeInfo->static_fields->STONE_COUNT_MAX_WIDTH, 0LL);
  stoneFragmentCountNumLb = this->fields.stoneFragmentCountNumLb;
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(v54, 0LL);
  if ( !stoneFragmentCountNumLb )
    goto LABEL_58;
  UILabel__set_text(stoneFragmentCountNumLb, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.stoneFragmentCountNumLb;
  if ( !Instance )
    goto LABEL_58;
  UILabel__SetCondensedScale((UILabel_o *)Instance, ScrPlayerStatus_TypeInfo->static_fields->STONE_COUNT_MAX_WIDTH, 0LL);
  Instance = (DataManager_o *)this->fields.stormPodIcon;
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v62);
  if ( ClassBoardUtility__IsTargetQuestClear(0LL) )
  {
    Instance = (DataManager_o *)this->fields.stormPodIcon;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( Instance )
        {
          Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
          if ( Instance )
          {
            Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
              v63 = (Il2CppObject **)&StringLiteral_19592/*"ffffff"*/;
              if ( num >= MaxNum )
                v63 = (Il2CppObject **)&StringLiteral_19590/*"ffb505"*/;
              v64 = *v63;
              v76 = num;
              v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
              v66 = System_String__Format_62415592((System_String_o *)StringLiteral_16197/*"[{0}]{1:N0}[-]"*/, v64, v65, 0LL);
              stormPodCountNumLb = this->fields.stormPodCountNumLb;
              v69 = (Il2CppObject *)v66;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67);
              v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3941/*"COUNT_LIMITED"*/, 0LL);
              v75 = MaxNum;
              v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
              Instance = (DataManager_o *)System_String__Format_62415592(v70, v69, v71, 0LL);
              if ( stormPodCountNumLb )
              {
                UILabel__set_text(stormPodCountNumLb, (System_String_o *)Instance, 0LL);
                Instance = (DataManager_o *)ScrPlayerStatus_TypeInfo;
                v72 = this->fields.stormPodCountNumLb;
                if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v44);
                if ( v72 )
                {
                  UILabel__SetCondensedScale(
                    v72,
                    ScrPlayerStatus_TypeInfo->static_fields->STORMPOD_COUNT_MAX_WIDTH,
                    0LL);
                  stormPodIcon = this->fields.stormPodIcon;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v73);
                  AtlasManager__SetEventSprite(stormPodIcon, (System_String_o *)StringLiteral_21115/*"item_mini_49"*/, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_58:
    sub_1BCAA3C(Instance, v44);
  }
}


void __fastcall ScrPlayerStatus__mfUpdatePrams(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *mcLevelStrP; // x20
  System_String_o *transform; // x0
  const MethodInfo *v14; // x1
  System_String_o *v15; // x1
  __int64 v16; // x1
  BalanceConfig_c *v17; // x0
  UILabel_o *mcLevelMaxP; // x20
  System_String_o *v19; // x0
  ScrPlayerStatus_c *v20; // x8
  UnityEngine_Transform_o *v21; // x20
  struct UILabel_o *v22; // x9
  struct ScrPlayerStatus_StaticFields *static_fields; // x8
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  struct ScrPlayerStatus_OverwriteMasterInfo_o *overwriteMasterInfo; // x8
  __int64 v27; // x1
  UnityEngine_Object_o *mcGiftButtonP; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  int64_t recoverTime; // [xsp+8h] [xbp-38h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13404 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B13404 = 1;
  }
  count = 0;
  recoverTime = 0LL;
  if ( this->fields.isUpdateFaceTexture )
    ScrPlayerStatus__ResetMasterFaceTexture(this, 0, v2);
  mcLevelStrP = this->fields.mcLevelStrP;
  transform = System_Int32__ToString((int)this + 640, 0LL);
  if ( !mcLevelStrP )
    goto LABEL_32;
  if ( transform )
    v15 = transform;
  else
    v15 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(mcLevelStrP, v15, 0LL);
  v17 = BalanceConfig_TypeInfo;
  mcLevelMaxP = this->fields.mcLevelMaxP;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
    v17 = BalanceConfig_TypeInfo;
  }
  v19 = System_Int32__ToString((unsigned int)v17->static_fields + 24, 0LL);
  transform = System_String__Concat_62401220((System_String_o *)StringLiteral_1120/*"/"*/, v19, 0LL);
  if ( !mcLevelMaxP )
    goto LABEL_32;
  UILabel__set_text(mcLevelMaxP, transform, 0LL);
  transform = (System_String_o *)this->fields.mcLevelMaxP;
  if ( !transform )
    goto LABEL_32;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  v20 = ScrPlayerStatus_TypeInfo;
  v21 = (UnityEngine_Transform_o *)transform;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v14);
    v20 = ScrPlayerStatus_TypeInfo;
  }
  v22 = this->fields.mcLevelStrP;
  if ( !v22 )
    goto LABEL_32;
  if ( !v21 )
    goto LABEL_32;
  static_fields = v20->static_fields;
  v33.fields.y = static_fields->MAX_LEVEL_BASE_POS_Y;
  v33.fields.x = static_fields->MAX_LEVEL_BASE_POS_X + (float)v22->fields.mWidth;
  v33.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v21, v33, 0LL);
  transform = (System_String_o *)this->fields.mcExpSldP;
  if ( !transform )
    goto LABEL_32;
  UIProgressBar__set_value((UIProgressBar_o *)transform, this->fields.mfExpPar, 0LL);
  if ( (this->fields.miApMax & 0x80000000) == 0 )
  {
    ScrPlayerStatus__InitApRecoverLb(this, v14);
    ScrPlayerStatus__UpdateAp(this, v25);
  }
  if ( this->fields.isBPEvent )
  {
    transform = (System_String_o *)this->fields.rpRoot;
    if ( !transform )
      goto LABEL_32;
    ScrPlayerBP__SetupDispRaidPoint((ScrPlayerBP_o *)transform, this->fields.userGameEntity, v24);
  }
  ScrPlayerStatus__SetOverwriteMasterInfo(this, v14);
  overwriteMasterInfo = this->fields.overwriteMasterInfo;
  if ( !overwriteMasterInfo
    || (transform = (System_String_o *)this->fields.commandSpellComp) == 0LL
    || (CommandSpellIconComponent__SetRevocationData(
          (CommandSpellIconComponent_o *)transform,
          this->fields.userGameEntity,
          overwriteMasterInfo->fields._spellIconId_k__BackingField,
          overwriteMasterInfo->fields._spellCount_k__BackingField,
          0LL),
        (transform = (System_String_o *)this->fields.userGameEntity) == 0LL) )
  {
LABEL_32:
    sub_1BCAA3C(transform, v14);
  }
  UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)transform, &count, &recoverTime, 0LL);
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(mcGiftButtonP, 0LL, 0LL) )
  {
    transform = (System_String_o *)this->fields.mcGiftButtonP;
    if ( transform )
    {
      GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)transform, 0LL);
      goto LABEL_31;
    }
    goto LABEL_32;
  }
LABEL_31:
  ScrPlayerStatus__mfCheckMasterMission(this, v14);
  ScrPlayerStatus__mfCheckCompleteMission(this, v29);
  ScrPlayerStatus__mfSetStoneAndFragment(this, v30);
  this->fields.mtIsUpdate = 0;
}


void __fastcall ScrPlayerStatus_OverwriteMasterInfo___ctor(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        int32_t warId,
        int32_t masterIcon,
        int32_t count,
        System_String_o *spellIcon,
        const MethodInfo *method)
{
  ScrPlayerStatus_OverwriteMasterInfo_o *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields._spellIconId_k__BackingField = spellIcon;
  v10 = (ScrPlayerStatus_OverwriteMasterInfo_o *)((char *)v10 + 32);
  v10[-1].fields._spellCount_k__BackingField = warId;
  *(&v10[-1].fields._spellCount_k__BackingField + 1) = masterIcon;
  LODWORD(v10[-1].fields._spellIconId_k__BackingField) = count;
  sub_1BCA784((PartyOrganizationUtility_o *)v10, (int64_t)spellIcon, v11, v12, v13, v14, v15, v16);
}


int32_t __fastcall ScrPlayerStatus_OverwriteMasterInfo__get_masterIconId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._masterIconId_k__BackingField;
}


int32_t __fastcall ScrPlayerStatus_OverwriteMasterInfo__get_spellCount(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._spellCount_k__BackingField;
}


System_String_o *__fastcall ScrPlayerStatus_OverwriteMasterInfo__get_spellIconId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._spellIconId_k__BackingField;
}


int32_t __fastcall ScrPlayerStatus_OverwriteMasterInfo__get_targetWarId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._targetWarId_k__BackingField;
}


void __fastcall ScrPlayerStatus_OverwriteMasterInfo__set_masterIconId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._masterIconId_k__BackingField = value;
}


void __fastcall ScrPlayerStatus_OverwriteMasterInfo__set_spellCount(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._spellCount_k__BackingField = value;
}


void __fastcall ScrPlayerStatus_OverwriteMasterInfo__set_spellIconId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._spellIconId_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._spellIconId_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ScrPlayerStatus_OverwriteMasterInfo__set_targetWarId(
        ScrPlayerStatus_OverwriteMasterInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._targetWarId_k__BackingField = value;
}


void __fastcall ScrPlayerStatus___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1342D & 1) == 0 )
  {
    sub_1BCA7E0(&ScrPlayerStatus___c_TypeInfo, v1, v2);
    byte_4B1342D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ScrPlayerStatus___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ScrPlayerStatus___c_TypeInfo->static_fields->__9 = (struct ScrPlayerStatus___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ScrPlayerStatus___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ScrPlayerStatus___c___ctor(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScrPlayerStatus___c___ExitMasterProfile_b__166_1(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ScrPlayerStatus___c___OnClickCloseNextExp_b__168_0(
        ScrPlayerStatus___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ScrPlayerStatus___c___OnClickCompleteMissionBtn_b__154_1(
        ScrPlayerStatus___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ScrPlayerStatus___c___OpenMasterProfile_b__165_0(ScrPlayerStatus___c_o *this, const MethodInfo *method)
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
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x20
  Il2CppObject *v20; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B1342E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__OpenMasterProfile_b__165_1__, v7, v8);
    sub_1BCA7E0(&ScrPlayerStatus___c_TypeInfo, v9, v10);
    byte_4B1342E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)v13;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v12);
    v16 = AvalonSceneManager_TypeInfo;
  }
  Instance = ScrPlayerStatus___c_TypeInfo;
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo, v12);
    Instance = ScrPlayerStatus___c_TypeInfo;
  }
  v19 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v12);
      Instance = ScrPlayerStatus___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v14, v15);
    System_Action___ctor(v19, v20, Method_ScrPlayerStatus___c__OpenMasterProfile_b__165_1__, 0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__165_1 = v19;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__165_1, (int64_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !v17 )
LABEL_14:
    sub_1BCAA3C(Instance, v12);
  CommonUI__maskFadein(v17, DEFAULT_FADE_TIME, v19, 0LL);
}


void __fastcall ScrPlayerStatus___c___OpenMasterProfile_b__165_1(ScrPlayerStatus___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall ScrPlayerStatus___c___SortLimitedMstMissionViewList_b__202_0(
        ScrPlayerStatus___c_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *info,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x8

  if ( !info || (MstMissionEntity_k__BackingField = info->fields._MstMissionEntity_k__BackingField) == 0LL )
    sub_1BCAA3C(this, info);
  return MstMissionEntity_k__BackingField->fields.priority;
}


bool __fastcall ScrPlayerStatus___c___UpdateCompleteMissionIconVisibility_b__237_0(
        ScrPlayerStatus___c_o *this,
        EventEntity_ScriptData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.isHiddenTerminalCompleteMissionButton;
}


bool __fastcall ScrPlayerStatus___c___mfCheckMasterMission_b__198_0(
        ScrPlayerStatus___c_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._MissionAchiveCount_k__BackingField == x->fields._MissionCount_k__BackingField;
}


void __fastcall ScrPlayerStatus___c__DisplayClass150_0___ctor(
        ScrPlayerStatus___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScrPlayerStatus___c__DisplayClass150_0___ClickBannerOpenMasterMission_b__0(
        ScrPlayerStatus___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct ScrPlayerStatus_o *_4__this; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int32_t typeIndex; // w19
  const MethodInfo *v18; // x2

  if ( (byte_4B1342F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScrPlayerStatus_UpdateGiftBoxNum__, v5, v6);
    byte_4B1342F = 1;
  }
  _4__this = this->fields.__4__this;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)_4__this, Method_ScrPlayerStatus_UpdateGiftBoxNum__, 0LL);
  if ( !_4__this )
    sub_1BCAA3C(v9, v10);
  typeIndex = this->fields.typeIndex;
  _4__this->fields.mAfterCloseMasterMission = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.mAfterCloseMasterMission,
    (int64_t)v8,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ScrPlayerStatus__OpenMasterMission_35078416(_4__this, typeIndex, v18);
}


void __fastcall ScrPlayerStatus___c__DisplayClass151_0___ctor(
        ScrPlayerStatus___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScrPlayerStatus___c__DisplayClass151_0___ClickLoginDialogOpenMasterMission_b__0(
        ScrPlayerStatus___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ScrPlayerStatus___c__DisplayClass151_0_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *_9__1; // x21
  struct ScrPlayerStatus_o *_4__this; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t typeIndex; // w19
  const MethodInfo *v20; // x2

  v8 = this;
  if ( (byte_4B13430 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (ScrPlayerStatus___c__DisplayClass151_0_o *)sub_1BCA7E0(
                                                         &Method_ScrPlayerStatus___c__DisplayClass151_0__ClickLoginDialogOpenMasterMission_b__1__,
                                                         v9,
                                                         v10);
    byte_4B13430 = 1;
  }
  _9__1 = v8->fields.__9__1;
  _4__this = v8->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v8,
      Method_ScrPlayerStatus___c__DisplayClass151_0__ClickLoginDialogOpenMasterMission_b__1__,
      0LL);
    v8->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  typeIndex = v8->fields.typeIndex;
  _4__this->fields.mAfterCloseMasterMission = _9__1;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.mAfterCloseMasterMission,
    (int64_t)_9__1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  ScrPlayerStatus__OpenMasterMission_35078416(_4__this, typeIndex, v20);
}


void __fastcall ScrPlayerStatus___c__DisplayClass151_0___ClickLoginDialogOpenMasterMission_b__1(
        ScrPlayerStatus___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *_4__this; // x0
  struct System_Action_o *closeCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  ScrPlayerStatus__UpdateGiftBoxNum(_4__this, method);
  closeCallback = this->fields.closeCallback;
  if ( closeCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallback->fields.m_target)(
      closeCallback->fields.original_method_info,
      *(_QWORD *)&closeCallback->fields.extra_arg);
}


void __fastcall ScrPlayerStatus___c__DisplayClass170_0___ctor(
        ScrPlayerStatus___c__DisplayClass170_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus___c__DisplayClass170_0___ShowEnabledRuntimePermissionDialog_b__0(
        ScrPlayerStatus___c__DisplayClass170_0_o *this,
        bool result,
        const MethodInfo *method)
{
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
  System_String_o *permissionName; // x20
  Il2CppObject *_4__this; // x21
  System_Action_object__o *v17; // x22
  Il2CppObject *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_object__o *v22; // x21
  struct ScrPlayerStatus_o *v23; // x8

  if ( (byte_4B13431 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, result, method);
    sub_1BCA7E0(&Method_ScrPlayerStatus_OnPermissionDenied__, v5, v6);
    sub_1BCA7E0(&Method_ScrPlayerStatus_OnPermissionGranted__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B13431 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseLocationTermsOfUseDlg((CommonUI_o *)Instance, 0LL);
  if ( result )
  {
    permissionName = this->fields.permissionName;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v17 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v12, v13, v14);
    System_Action_object____ctor(v17, _4__this, Method_ScrPlayerStatus_OnPermissionGranted__, 0LL);
    v18 = (Il2CppObject *)this->fields.__4__this;
    v22 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v19, v20, v21);
    System_Action_object____ctor(v22, v18, Method_ScrPlayerStatus_OnPermissionDenied__, 0LL);
    AndroidPermissionManager__RequestPermission(
      permissionName,
      (System_Action_string__o *)v17,
      (System_Action_string__o *)v22,
      0LL,
      0LL);
    return;
  }
  v23 = this->fields.__4__this;
  if ( !v23 )
LABEL_8:
    sub_1BCAA3C(Instance, v12);
  v23->fields.isLocationBusy = 0;
}


void __fastcall ScrPlayerStatus___c__DisplayClass174_0___ctor(
        ScrPlayerStatus___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScrPlayerStatus___c__DisplayClass174_0___SetLocationCheck_b__0(
        ScrPlayerStatus___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  _4__this->fields.isLocationBusy = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus___c__DisplayClass174_0___SetLocationCheck_b__1(
        ScrPlayerStatus___c__DisplayClass174_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct EventEntity_array *list; // x8

  if ( (byte_4B13432 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B13432 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseCampaignInfoDialg(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( isDecide )
  {
    list = this->fields.list;
    if ( list )
    {
      if ( !list->max_length )
        sub_1BCAA44(Instance, v6);
      if ( Instance )
      {
        ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, list->m_Items[0], v7);
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_11;
  BYTE4(Instance->fields.fragmentsBulkExchangeDialogPrefab) = 0;
}


void __fastcall ScrPlayerStatus___c__DisplayClass174_0___SetLocationCheck_b__2(
        ScrPlayerStatus___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  _4__this->fields.isLocationBusy = 0;
}


void __fastcall ScrPlayerStatus___c__DisplayClass175_0___ctor(
        ScrPlayerStatus___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus___c__DisplayClass175_0___locationRequest_b__0(
        ScrPlayerStatus___c__DisplayClass175_0_o *this,
        int32_t result,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
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
  __int64 v43; // x1
  __int64 v44; // x2
  EventLocationRequest_o *Instance; // x0
  __int64 id; // x1
  struct EventEntity_o *eventEnt; // x8
  CommonUI_o *v48; // x20
  System_String_o *name; // x21
  System_String_o *v50; // x22
  System_String_o *v51; // x0
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *_9__3; // x23
  System_String_o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  Il2CppObject *v63; // x20
  System_String_o *v64; // x21
  System_String_o *v65; // x22
  System_String_o *v66; // x23
  __int64 v67; // x2
  __int64 v68; // x3
  CommonConfirmDialog_ClickDelegate_o *_9__1; // x25
  System_String_o *v70; // x24
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct CommonConfirmDialog_ClickDelegate_o **p__9__1; // x0
  int64_t v78; // x1
  __int64 v79; // x1
  System_String_o *v80; // x22
  System_String_o *v81; // x0
  __int64 v82; // x2
  __int64 v83; // x3
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v85; // x21
  __int64 v86; // x1
  struct EventEntity_o *v87; // x8
  __int128 v88; // q0
  UnityEngine_LocationInfo_o v89; // [xsp+40h] [xbp-90h] BYREF
  UnityEngine_LocationInfo_o v90; // [xsp+60h] [xbp-70h]

  if ( (byte_4B13433 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, locInfo);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventLocationRequest___, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ScrPlayerStatus_EndLocationRequest__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__1__, v21, v22);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__2__, v23, v24);
    sub_1BCA7E0(&Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__3__, v25, v26);
    sub_1BCA7E0(&StringLiteral_8408/*"LOCATION_DLG_TIMEOUT_MESSAGE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_8409/*"LOCATION_DLG_TIMEOUT_TITLE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_8407/*"LOCATION_DLG_TIMEOUT_DECIDE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_8406/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_8402/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_8400/*"LOCATION_DLG_DEVICE_OPTION_RETRY_DECIDE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_8401/*"LOCATION_DLG_DEVICE_OPTION_RETRY_MESSAGE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_8398/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, v43, v44);
    byte_4B13433 = 1;
  }
  switch ( result )
  {
    case 0:
    case 1:
    case 4:
      Instance = (EventLocationRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      eventEnt = this->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_28;
      v48 = (CommonUI_o *)Instance;
      name = eventEnt->fields.name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, id);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8406/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, 0LL);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0LL);
      Instance = (EventLocationRequest_o *)System_String__Concat_62401220(v50, v51, 0LL);
      _9__3 = this->fields.__9__3;
      v55 = (System_String_o *)Instance;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, id, v52, v53);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)this,
          Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__3__,
          0LL);
        this->fields.__9__3 = _9__3;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v56, v57, v58, v59, v60, v61);
      }
      if ( !v48 )
        goto LABEL_28;
      CommonUI__OpenNotificationDialog(v48, name, v55, _9__3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    case 2:
      v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8402/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/, 0LL);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_8401/*"LOCATION_DLG_DEVICE_OPTION_RETRY_MESSAGE"*/, 0LL);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8400/*"LOCATION_DLG_DEVICE_OPTION_RETRY_DECIDE"*/, 0LL);
      Instance = (EventLocationRequest_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      _9__1 = this->fields.__9__1;
      v70 = (System_String_o *)Instance;
      if ( _9__1 )
        goto LABEL_20;
      _9__1 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                       CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                       id,
                                                       v67,
                                                       v68);
      CommonConfirmDialog_ClickDelegate___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__1__,
        0LL);
      p__9__1 = &this->fields.__9__1;
      v78 = (int64_t)_9__1;
      this->fields.__9__1 = _9__1;
      goto LABEL_19;
    case 3:
      v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8409/*"LOCATION_DLG_TIMEOUT_TITLE"*/, 0LL);
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_8408/*"LOCATION_DLG_TIMEOUT_MESSAGE"*/, 0LL);
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0LL);
      v65 = System_String__Concat_62401220(v80, v81, 0LL);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8407/*"LOCATION_DLG_TIMEOUT_DECIDE"*/, 0LL);
      Instance = (EventLocationRequest_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      _9__1 = this->fields.__9__2;
      v70 = (System_String_o *)Instance;
      if ( _9__1 )
        goto LABEL_20;
      _9__1 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                       CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                       id,
                                                       v82,
                                                       v83);
      CommonConfirmDialog_ClickDelegate___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__2__,
        0LL);
      p__9__1 = &this->fields.__9__2;
      v78 = (int64_t)_9__1;
      this->fields.__9__2 = _9__1;
LABEL_19:
      sub_1BCA784((PartyOrganizationUtility_o *)p__9__1, v78, v71, v72, v73, v74, v75, v76);
LABEL_20:
      if ( !v63 )
LABEL_28:
        sub_1BCAA3C(Instance, id);
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v63,
        v64,
        v65,
        v66,
        v70,
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
        0LL);
      break;
    case 5:
      _4__this = (Il2CppObject *)this->fields.__4__this;
      v85 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     *(_QWORD *)&result,
                                                     locInfo,
                                                     method);
      NetworkManager_ResultCallbackFunc___ctor(v85, _4__this, Method_ScrPlayerStatus_EndLocationRequest__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v86);
      Instance = (EventLocationRequest_o *)NetworkManager__getRequest_object_(
                                             v85,
                                             (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventLocationRequest___);
      v87 = this->fields.eventEnt;
      if ( !v87 )
        goto LABEL_28;
      v88 = *(_OWORD *)&locInfo->fields.m_Altitude;
      id = (unsigned int)v87->fields.id;
      *(_OWORD *)&v90.fields.m_Timestamp = *(_OWORD *)&locInfo->fields.m_Timestamp;
      *(_OWORD *)&v90.fields.m_Altitude = v88;
      if ( !Instance )
        goto LABEL_28;
      v89 = v90;
      EventLocationRequest__beginRequest(Instance, id, &v89, 0LL);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus___c__DisplayClass175_0___locationRequest_b__1(
        ScrPlayerStatus___c__DisplayClass175_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B13434 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B13434 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( isDecide )
  {
    if ( Instance )
    {
      ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, this->fields.eventEnt, v7);
      return;
    }
LABEL_9:
    sub_1BCAA3C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_9;
  BYTE4(Instance->fields.fragmentsBulkExchangeDialogPrefab) = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus___c__DisplayClass175_0___locationRequest_b__2(
        ScrPlayerStatus___c__DisplayClass175_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B13435 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B13435 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( isDecide )
  {
    if ( Instance )
    {
      ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, this->fields.eventEnt, v7);
      return;
    }
LABEL_9:
    sub_1BCAA3C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_9;
  BYTE4(Instance->fields.fragmentsBulkExchangeDialogPrefab) = 0;
}


void __fastcall ScrPlayerStatus___c__DisplayClass175_0___locationRequest_b__3(
        ScrPlayerStatus___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  struct ScrPlayerStatus_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  _4__this->fields.isLocationBusy = 0;
}


void __fastcall ScrPlayerStatus___c__DisplayClass202_0___ctor(
        ScrPlayerStatus___c__DisplayClass202_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ScrPlayerStatus___c__DisplayClass202_0___SortLimitedMstMissionViewList_b__1(
        ScrPlayerStatus___c__DisplayClass202_0_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *info,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x8

  if ( !info || (MstMissionEntity_k__BackingField = info->fields._MstMissionEntity_k__BackingField) == 0LL )
    sub_1BCAA3C(this, info);
  return MstMissionEntity_k__BackingField->fields.endedAt >= this->fields.nowTime;
}


int64_t __fastcall ScrPlayerStatus___c__DisplayClass202_0___SortLimitedMstMissionViewList_b__2(
        ScrPlayerStatus___c__DisplayClass202_0_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *info,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x8
  __int64 v4; // x9

  if ( !info || (MstMissionEntity_k__BackingField = info->fields._MstMissionEntity_k__BackingField) == 0LL )
    sub_1BCAA3C(this, info);
  v4 = 48LL;
  if ( MstMissionEntity_k__BackingField->fields.endedAt >= this->fields.nowTime )
    v4 = 40LL;
  return *(int64_t *)((char *)&MstMissionEntity_k__BackingField->klass + v4);
}