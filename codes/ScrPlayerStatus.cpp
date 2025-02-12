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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ScrPlayerStatus_StaticFields *static_fields; // x0
  ManagerConfig_c *v13; // x8
  int64_t v14; // x1
  struct ScrPlayerStatus_StaticFields *v15; // x0
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct ScrPlayerStatus_StaticFields *v23; // x0
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct ScrPlayerStatus_StaticFields *v31; // x8

  if ( (byte_4BB18C1 & 1) == 0 )
  {
    sub_1C13D24(&ManagerConfig_TypeInfo, v1);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_17322/*"bad data"*/, v9);
    sub_1C13D24(&StringLiteral_16241/*"[charaDepth {0} {1}]\n"*/, v10);
    sub_1C13D24(&StringLiteral_8629/*"Localization"*/, v11);
    byte_4BB18C1 = 1;
  }
  static_fields = ScrPlayerStatus_TypeInfo->static_fields;
  static_fields->MV_SPD_TIME = 0.25;
  v13 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v13 = ManagerConfig_TypeInfo;
    static_fields = ScrPlayerStatus_TypeInfo->static_fields;
  }
  static_fields->FRAME_OUT_POS_X = (float)-v13->static_fields->WIDTH;
  v14 = StringLiteral_16241/*"[charaDepth {0} {1}]\n"*/;
  static_fields->AP_OVER_TXT_COLOR_STR = (struct System_String_o *)StringLiteral_16241/*"[charaDepth {0} {1}]\n"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->AP_OVER_TXT_COLOR_STR, v14, v2, v3, v4, v5, v6, v7);
  v15 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_QWORD *)&v15->MAX_LEVEL_BASE_POS_X = 0xC1400000C1500000LL;
  v16 = StringLiteral_8629/*"Localization"*/;
  v15->LOCATION_TOS_AGREED_KEY = (struct System_String_o *)StringLiteral_8629/*"Localization"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v15->LOCATION_TOS_AGREED_KEY, v16, v17, v18, v19, v20, v21, v22);
  v23 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_OWORD *)&v23->NOTICE_NUMBER_BADGE_DEPTH = xmmword_BF5F90;
  v23->NOTICE_NUMBER_LABEL_WIDTH = 28;
  v24 = StringLiteral_17322/*"bad data"*/;
  v23->MASTER_MISSION_ICON_LIMITED_PREFIX = (struct System_String_o *)StringLiteral_17322/*"bad data"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->MASTER_MISSION_ICON_LIMITED_PREFIX, v24, v25, v26, v27, v28, v29, v30);
  v31 = ScrPlayerStatus_TypeInfo->static_fields;
  *(_QWORD *)&v31->CMD_SPELL_SCROLLVIEW_DEPTH = 0x3E19999A000000DCLL;
  *(_OWORD *)&v31->STONE_COUNT_MAX_WIDTH = xmmword_BF63E0;
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

  if ( (byte_4BB18C0 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB18C0 = 1;
  }
  this->fields.miMasterUserEquipID = 1LL;
  this->fields.meMasterGender = 2;
  this->fields.mfApParOld = -1.0;
  this->fields.isDispMax = 1;
  this->fields.oldRp = -1;
  this->fields.mstMissionStartsAt = -1LL;
  v9 = StringLiteral_1/*""*/;
  this->fields.overwriteSpellIconId = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.overwriteSpellIconId, (int64_t)v9, v2, v3, v4, v5, v6, v7);
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
    sub_1C13F80(v5, v6);
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
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB18B1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionInfo);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1C13D24(&LocalizationManager_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C13D24(&StringLiteral_8810/*"MENU_SUPPORT_ONLY_QUEST_START"*/, v8);
    sub_1C13D24(&StringLiteral_3824/*"COMPENSATION_ITEM_MESSAGE_"*/, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    sub_1C13D24(&StringLiteral_13558/*"TIME_REST2_TIMEOVER"*/, v11);
    byte_4BB18B1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8810/*"MENU_SUPPORT_ONLY_QUEST_START"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Equals_62976260(
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
    if ( System_String__Equals_62976260((System_String_o *)Instance, completeMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(this->fields.completeMissionTimeNumStr, 0LL);
  if ( !this->fields.completeMissionAlertTitleLb )
    goto LABEL_36;
  v21 = (char)Instance;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.completeMissionAlertTitleLb,
                                0LL);
  if ( !Instance )
    goto LABEL_36;
  if ( (v21 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    completeMissionAlertTitleLb = this->fields.completeMissionAlertTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMPENSATION_ITEM_MESSAGE_"*/, 0LL);
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
            goto LABEL_34;
          }
        }
      }
    }
LABEL_36:
    sub_1C13F80(Instance, v13);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13558/*"TIME_REST2_TIMEOVER"*/, 0LL);
  if ( !completeMissionAlertMsgLb )
    goto LABEL_36;
  v23 = (System_String_o *)Instance;
  Instance = (DataManager_o *)completeMissionAlertMsgLb;
LABEL_34:
  UILabel__set_text((UILabel_o *)Instance, v23, 0LL);
}


void __fastcall ScrPlayerStatus__ChangeViewMstMissionLb(
        ScrPlayerStatus_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *mstMissionInfo,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x21
  int32_t MissionType; // w24
  int32_t v14; // w23
  int32_t v15; // w22
  UISprite_o *masterMissionLimitedBgSp; // x22
  ScrPlayerStatus_c *v17; // x0
  System_String_o *MASTER_MISSION_ICON_LIMITED_PREFIX; // x23
  System_String_o *v19; // x0
  System_String_o *v20; // x23
  ScrPlayerStatus_c *v21; // x0
  UISprite_o *v22; // x22
  System_String_o *v23; // x23
  UILabel_o *masterMissionDetailOverlapLb; // x22
  UILabel_o *masterMissionDetailLb; // x23
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  MstMissionEntity_c *v27; // x0
  ScrPlayerStatus_o *v28; // x24
  UILabel_o *masterMissionCountNumLb; // x22
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *masterMissionCountNumLb2; // x20
  int64_t NextDayStartTime; // x20
  struct UILabel_o *masterMissionAlertNumLb; // x8
  struct UILabel_o *masterMissionAlertUnitLb; // x8
  ScrPlayerStatus_o *masterMissionAlertMsgLb; // x19
  ScrPlayerStatus_o *v36; // x1
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4BB18B0 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, mstMissionInfo);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&MstMissionEntity_TypeInfo, v6);
    sub_1C13D24(&NetworkManager_TypeInfo, v7);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_1/*""*/, v9);
    sub_1C13D24(&StringLiteral_13558/*"TIME_REST2_TIMEOVER"*/, v10);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&StringLiteral_1212/*"0"*/, v11);
    byte_4BB18B0 = 1;
  }
  if ( !mstMissionInfo )
    goto LABEL_59;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_59;
  MissionType = MstMissionEntity__getMissionType(mstMissionInfo->fields._MstMissionEntity_k__BackingField, 0LL);
  v14 = MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0LL);
  v15 = MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0LL);
  if ( MissionType != 3 && v14 != 2 && v15 != 5 )
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14 == 2, 0LL);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionLimitedBgObj;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v15 == 5, 0LL);
  this = (ScrPlayerStatus_o *)v4->fields.masterMissionAnimationLabelsRoot;
  if ( !this )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v15 == 5, 0LL);
  if ( v15 == 5 )
  {
    masterMissionLimitedBgSp = v4->fields.masterMissionLimitedBgSp;
    v17 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
      v17 = ScrPlayerStatus_TypeInfo;
    }
    MASTER_MISSION_ICON_LIMITED_PREFIX = v17->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX;
    v19 = System_Int32__ToString((int)MstMissionEntity_k__BackingField + 56, 0LL);
    v20 = System_String__Concat_62967944(MASTER_MISSION_ICON_LIMITED_PREFIX, v19, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( !AtlasManager__SetBanner(masterMissionLimitedBgSp, v20, 0LL) )
    {
      v21 = ScrPlayerStatus_TypeInfo;
      v22 = v4->fields.masterMissionLimitedBgSp;
      if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
        v21 = ScrPlayerStatus_TypeInfo;
      }
      v23 = System_String__Concat_62967944(
              v21->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX,
              (System_String_o *)StringLiteral_1212/*"0"*/,
              0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetBanner(v22, v23, 0LL);
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
    v27 = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
      v27 = MstMissionEntity_TypeInfo;
    }
    this = (ScrPlayerStatus_o *)EntityScriptUtil__GetStringValue(
                                  script,
                                  v27->static_fields->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
                                  0LL,
                                  0LL);
    if ( !masterMissionDetailLb )
      goto LABEL_59;
    v28 = this;
    UILabel__set_text(masterMissionDetailLb, (System_String_o *)this, 0LL);
    if ( !masterMissionDetailOverlapLb )
      goto LABEL_59;
    UILabel__set_text(masterMissionDetailOverlapLb, (System_String_o *)v28, 0LL);
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
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NextDayStartTime = NetworkManager__getNextDayStartTime(0LL);
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
    0LL);
  masterMissionAlertNumLb = v4->fields.masterMissionAlertNumLb;
  if ( !masterMissionAlertNumLb )
    goto LABEL_59;
  this = (ScrPlayerStatus_o *)v4->fields.mstMissionTimeNumStr;
  if ( !this )
    goto LABEL_59;
  this = (ScrPlayerStatus_o *)System_String__Equals_62976260(
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
    if ( System_String__Equals_62976260((System_String_o *)this, masterMissionAlertUnitLb->fields.mText, 0LL) )
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
          v36 = (ScrPlayerStatus_o *)StringLiteral_1/*""*/;
          goto LABEL_57;
        }
      }
    }
LABEL_59:
    sub_1C13F80(this, mstMissionInfo);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ScrPlayerStatus_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13558/*"TIME_REST2_TIMEOVER"*/, 0LL);
  if ( !masterMissionAlertMsgLb )
    goto LABEL_59;
  v36 = this;
  this = masterMissionAlertMsgLb;
LABEL_57:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v36, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v19; // x8
  CommonUI_o *v20; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x20

  if ( (byte_4BB187C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&typeIndex);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass150_0__ClickBannerOpenMasterMission_b__0__, v7);
    sub_1C13D24(&ScrPlayerStatus___c__DisplayClass150_0_TypeInfo, v8);
    byte_4BB187C = 1;
  }
  v9 = sub_1C13F70(ScrPlayerStatus___c__DisplayClass150_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = typeIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = AvalonSceneManager_TypeInfo;
  v20 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v19 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_ScrPlayerStatus___c__DisplayClass150_0__ClickBannerOpenMasterMission_b__0__,
    0LL);
  if ( !v20 )
LABEL_8:
    sub_1C13F80(v10, v11);
  CommonUI__maskFadeout(v20, 1, DEFAULT_FADE_TIME, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ClickLoginDialogOpenMasterMission(
        ScrPlayerStatus_o *this,
        int32_t typeIndex,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v27; // x8
  CommonUI_o *v28; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x20

  if ( (byte_4BB187D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&typeIndex);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass151_0__ClickLoginDialogOpenMasterMission_b__0__, v9);
    sub_1C13D24(&ScrPlayerStatus___c__DisplayClass151_0_TypeInfo, v10);
    byte_4BB187D = 1;
  }
  v11 = sub_1C13F70(ScrPlayerStatus___c__DisplayClass151_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = closeCallback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)closeCallback, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v11 + 32) = typeIndex;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  v28 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v27 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  v30 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_ScrPlayerStatus___c__DisplayClass151_0__ClickLoginDialogOpenMasterMission_b__0__,
    0LL);
  if ( !v28 )
LABEL_8:
    sub_1C13F80(v12, v13);
  CommonUI__maskFadeout(v28, 1, DEFAULT_FADE_TIME, v30, 0LL);
}


void __fastcall ScrPlayerStatus__DisableAllBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_GameObject_o *masterFaceBtnObj; // x0

  if ( (byte_4BB18BA & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    byte_4BB18BA = 1;
  }
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 0, v2);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 0, v4);
  masterFaceBtnObj = this->fields.masterFaceBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL);
  masterFaceBtnObj = this->fields.mLocationBtnRoot;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C13F80(masterFaceBtnObj, v5);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 0, 0LL);
}


void __fastcall ScrPlayerStatus__EnableAllBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_GameObject_o *masterFaceBtnObj; // x0

  if ( (byte_4BB18BB & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, method);
    byte_4BB18BB = 1;
  }
  ScrPlayerStatus__SetApRecoverBtnEnable(this, 1, v2);
  ScrPlayerStatus__SetRpRecoverBtnEnable(this, 1, v4);
  masterFaceBtnObj = this->fields.masterFaceBtnObj;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)masterFaceBtnObj, 1, 0LL);
  masterFaceBtnObj = this->fields.mLocationBtnRoot;
  if ( !masterFaceBtnObj )
    goto LABEL_17;
  masterFaceBtnObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   masterFaceBtnObj,
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C13F80(masterFaceBtnObj, v5);
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
  __int64 v20; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  System_Action_o *v24; // x23
  Il2CppObject *v25; // x25
  Il2CppObject *v26; // x20
  System_String_o *v27; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  ScrPlayerStatus_o *v30; // x24
  GiftEntity_array *monitor; // x25
  BalanceConfig_c *v32; // x0
  int32_t LocationRewardDlgColumn; // w26
  CommonMultiItemGetDlg_OnClickDelegate_o *v34; // x27

  v4 = this;
  if ( (byte_4BB1893 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, result);
    sub_1C13D24(&BalanceConfig_TypeInfo, v5);
    sub_1C13D24(&Method_JsonManager_Deserialize_EventLocationRequest_LocationGift___, v6);
    sub_1C13D24(&JsonManager_TypeInfo, v7);
    sub_1C13D24(&LocalizationManager_TypeInfo, v8);
    sub_1C13D24(&CommonMultiItemGetDlg_OnClickDelegate_TypeInfo, v9);
    sub_1C13D24(&Method_ScrPlayerStatus__EndLocationRequest_b__176_0__, v10);
    sub_1C13D24(&Method_ScrPlayerStatus__EndLocationRequest_b__176_1__, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C13D24(&StringLiteral_8450/*"LOCATION_DLG_TIMEOUT_DECIDE"*/, v13);
    sub_1C13D24(&StringLiteral_8452/*"LOCATION_DLG_TIMEOUT_TITLE"*/, v14);
    sub_1C13D24(&StringLiteral_8451/*"LOCATION_DLG_TIMEOUT_MESSAGE"*/, v15);
    sub_1C13D24(&StringLiteral_8445/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/, v16);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v17);
    sub_1C13D24(&StringLiteral_22422/*"newBuilder"*/, v18);
    sub_1C13D24(&StringLiteral_8444/*"LOCATION_DLG_DEVICE_OPTION_RETRY_MESSAGE"*/, v19);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&StringLiteral_8453/*"LOCATION_GIFT_DLG_CANCEL"*/, v20);
    byte_4BB1893 = 1;
  }
  if ( !result )
    goto LABEL_20;
  if ( System_String__Equals_62976260(result, (System_String_o *)StringLiteral_22422/*"newBuilder"*/, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8445/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/, 0LL);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8444/*"LOCATION_DLG_DEVICE_OPTION_RETRY_MESSAGE"*/, 0LL);
    v24 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)v4, Method_ScrPlayerStatus__EndLocationRequest_b__176_0__, 0LL);
    if ( Instance )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v22, v23, v24, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
LABEL_20:
    sub_1C13F80(this, result);
  }
  if ( System_String__Equals_62976260(result, (System_String_o *)StringLiteral_22421/*"newAttributes"*/, 0LL) )
  {
    v4->fields.isLocationBusy = 0;
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v25 = JsonManager__Deserialize_object_(
            (Il2CppObject *)result,
            (const MethodInfo_2FF6B7C *)Method_JsonManager_Deserialize_EventLocationRequest_LocationGift___);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8453/*"LOCATION_GIFT_DLG_CANCEL"*/, 0LL);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8452/*"LOCATION_DLG_TIMEOUT_TITLE"*/, 0LL);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8450/*"LOCATION_DLG_TIMEOUT_DECIDE"*/, 0LL);
    this = (ScrPlayerStatus_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8451/*"LOCATION_DLG_TIMEOUT_MESSAGE"*/, 0LL);
    if ( !v25 )
      goto LABEL_20;
    v30 = this;
    monitor = (GiftEntity_array *)v25[1].monitor;
    v32 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    LocationRewardDlgColumn = v32->static_fields->LocationRewardDlgColumn;
    v34 = (CommonMultiItemGetDlg_OnClickDelegate_o *)sub_1C13F70(CommonMultiItemGetDlg_OnClickDelegate_TypeInfo);
    CommonMultiItemGetDlg_OnClickDelegate___ctor(
      v34,
      (Il2CppObject *)v4,
      Method_ScrPlayerStatus__EndLocationRequest_b__176_1__,
      0LL);
    if ( !v26 )
      goto LABEL_20;
    CommonUI__OpenMultiGiftGetDialog(
      (CommonUI_o *)v26,
      v27,
      v28,
      v29,
      (System_String_o *)v30,
      monitor,
      LocationRewardDlgColumn,
      v34,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ExitCompleteMission(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4BB189B & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v4);
    sub_1C13D24(&Method_ScrPlayerStatus__ExitCompleteMission_b__185_0__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BB189B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitCompleteMission_b__185_0__, 0LL);
  if ( !v9 )
    sub_1C13F80(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ExitMasterMission(ScrPlayerStatus_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4BB189A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v4);
    sub_1C13D24(&Method_ScrPlayerStatus__ExitMasterMission_b__184_0__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BB189A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterMission_b__184_0__, 0LL);
  if ( !v9 )
    sub_1C13F80(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall ScrPlayerStatus__ExitMasterProfile(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4BB188B & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus__ExitMasterProfile_b__166_0__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB188B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterProfile_b__166_0__, 0LL);
  if ( !v8 )
    sub_1C13F80(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  ScrPlayerStatus_c *v14; // x8
  float mFrameInPosX; // s14
  UnityEngine_GameObject_o *v16; // x21
  struct ScrPlayerStatus_StaticFields *static_fields; // x8
  float FRAME_OUT_POS_X; // s15
  float v19; // s8
  Il2CppObject *Component_object; // x20
  const MethodInfo *v21; // x1
  ScrPlayerStatus_c *v22; // x0
  float MV_SPD_TIME; // s9
  float IntpTime_AutoResume; // s13
  float y; // s9
  float z; // s10
  float v27; // s11
  float v28; // s12
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s3
  float v33; // s4
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_GameObject_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB18BD & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, is_framein);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v8);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v9);
    sub_1C13D24(&Method_UITweener_Begin_TweenPosition___, v10);
    sub_1C13D24(&StringLiteral_6989/*"Fragment identifier '{0}' cannot be part of the system identifier '{1}'."*/, v11);
    byte_4BB18BD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = ScrPlayerStatus_TypeInfo;
  mFrameInPosX = this->fields.mFrameInPosX;
  v16 = gameObject;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    v14 = ScrPlayerStatus_TypeInfo;
  }
  static_fields = v14->static_fields;
  FRAME_OUT_POS_X = static_fields->FRAME_OUT_POS_X;
  if ( is_framein )
    v19 = mFrameInPosX;
  else
    v19 = static_fields->FRAME_OUT_POS_X;
  if ( !is_force && v19 != GameObjectExtensions__GetLocalPositionX(v16, 0LL) )
  {
    v22 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
      v22 = ScrPlayerStatus_TypeInfo;
    }
    MV_SPD_TIME = v22->static_fields->MV_SPD_TIME;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(MV_SPD_TIME, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(v16, 0LL);
    y = LocalPosition.fields.y;
    z = LocalPosition.fields.z;
    v50 = GameObjectExtensions__GetLocalPosition(v16, 0LL);
    v27 = v50.fields.y;
    v28 = v50.fields.z;
    gameObject = (UnityEngine_GameObject_o *)UITweener__Begin_object_(
                                               v16,
                                               IntpTime_AutoResume,
                                               (const MethodInfo_3043CC0 *)Method_UITweener_Begin_TweenPosition___);
    if ( gameObject )
    {
      if ( is_framein )
        v29 = FRAME_OUT_POS_X;
      else
        v29 = mFrameInPosX;
      if ( is_framein )
        v30 = v27;
      else
        v30 = y;
      if ( is_framein )
        v31 = v28;
      else
        v31 = z;
      if ( is_framein )
        v32 = y;
      else
        v32 = v27;
      if ( is_framein )
        v33 = z;
      else
        v33 = v28;
      v34 = gameObject;
      *(float *)&gameObject[5].monitor = v29;
      *((float *)&gameObject[5].monitor + 1) = v30;
      *(float *)&gameObject[5].fields.m_CachedPtr = v31;
      *((float *)&gameObject[5].fields + 1) = v19;
      *(float *)&gameObject[6].klass = v32;
      *((float *)&gameObject[6].klass + 1) = v33;
      LODWORD(gameObject[1].monitor) = 2;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v34[3].monitor = v35;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v34[3].monitor, (int64_t)v35, v36, v37, v38, v39, v40, v41);
      v42 = StringLiteral_6989/*"Fragment identifier '{0}' cannot be part of the system identifier '{1}'."*/;
      *(_QWORD *)&v34[3].fields.m_CachedPtr = StringLiteral_6989/*"Fragment identifier '{0}' cannot be part of the system identifier '{1}'."*/;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v34[3].fields, v42, v43, v44, v45, v46, v47, v48);
      return;
    }
LABEL_39:
    sub_1C13F80(gameObject, v13);
  }
  if ( !v16 )
    goto LABEL_39;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v16,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)Component_object, 0LL);
  }
  GameObjectExtensions__SetLocalPositionX(v16, v19, 0LL);
  ScrPlayerStatus__FrameInOutEnd(this, v21);
}


void __fastcall ScrPlayerStatus__FrameInOutEnd(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4BB18BE & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_7101/*"GO_BATTLE"*/, method);
    byte_4BB18BE = 1;
  }
  ScrPlayerStatus__UpdatePanel(this, method);
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_7101/*"GO_BATTLE"*/, v3);
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
  __int64 v5; // x1
  __int64 v6; // x1
  EventMissionEntity_array *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventMissionMaster_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  EventMissionEntity_array *v13; // x21
  int32_t MissionClearCount; // w22
  int32_t AchiveMissionNum; // w0
  int32_t max_length; // w20
  int32_t v17; // w21
  MasterMissionComponent_MasterMissionInfoItem_o *v18; // x23

  if ( (byte_4BB18A9 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, mstMissionEntity);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1C13D24(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BB18A9 = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !mstMissionEntity )
    goto LABEL_13;
  if ( !MasterData_object )
    goto LABEL_13;
  v10 = (UserEventMissionMaster_o *)Instance;
  Instance = EventMissionMaster__getDailyMasterMissionList(
               (EventMissionMaster_o *)MasterData_object,
               mstMissionEntity->fields.id,
               0LL);
  if ( !Instance )
    goto LABEL_13;
  v13 = Instance;
  if ( *(_QWORD *)&Instance->max_length )
  {
    MissionClearCount = ScrPlayerStatus__GetMissionClearCount((ScrPlayerStatus_o *)Instance, Instance, v11, v12);
    Instance = (EventMissionEntity_array *)MstMissionEntity__isOpenNow(mstMissionEntity, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( v10 )
      {
        AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(v10, mstMissionEntity->fields.id, 0LL);
        max_length = v13->max_length;
        v17 = AchiveMissionNum;
        v18 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C13F70(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
        MasterMissionComponent_MasterMissionInfoItem___ctor(
          v18,
          mstMissionEntity,
          max_length,
          MissionClearCount,
          v17,
          0LL);
        return v18;
      }
LABEL_13:
      sub_1C13F80(Instance, v8);
    }
  }
  return 0LL;
}


int32_t __fastcall ScrPlayerStatus__GetEnabledMstMissionCount(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *currentMissionList; // x8
  int size; // w9
  int v9; // w23
  int64_t v10; // x20
  int32_t v11; // w22
  int32_t v12; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4BB18B5 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v3);
    sub_1C13D24(&NetworkManager_TypeInfo, v4);
    byte_4BB18B5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_10:
    sub_1C13F80(Time, v6);
  size = currentMissionList->fields._size;
  v9 = size - 1;
  if ( size < 1 )
    return 0;
  v10 = Time;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentMissionList,
             v11,
             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    Time = ScrPlayerStatus__IsEnabledMstMission(
             (ScrPlayerStatus_o *)Item,
             (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
             v10,
             v14);
    v12 += Time & 1;
    if ( v9 == v11 )
      return v12;
    currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
    ++v11;
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
  __int64 v6; // x1
  int64_t Time; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *currentMissionList; // x8
  int size; // w9
  int v11; // w24
  int64_t v12; // x22
  int32_t v13; // w21
  MasterMissionComponent_MasterMissionInfoItem_o *v14; // x23
  const MethodInfo *v15; // x3

  if ( (byte_4BB18B4 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      *(_QWORD *)&targetType);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    byte_4BB18B4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( !currentMissionList )
    goto LABEL_14;
  size = currentMissionList->fields._size;
  v11 = size - 1;
  if ( size >= 1 )
  {
    v12 = Time;
    v13 = 0;
    do
    {
      Time = (int64_t)System_Collections_Generic_List_object___get_Item(
                        currentMissionList,
                        v13,
                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Time )
        break;
      v14 = (MasterMissionComponent_MasterMissionInfoItem_o *)Time;
      Time = *(_QWORD *)(Time + 16);
      if ( !Time )
        break;
      Time = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0LL);
      if ( (_DWORD)Time == targetType )
      {
        Time = ScrPlayerStatus__IsEnabledMstMission((ScrPlayerStatus_o *)Time, v14, v12, v15);
        if ( (Time & 1) != 0 )
          return v13;
      }
      if ( v11 == v13 )
        return -1;
      currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
      ++v13;
    }
    while ( currentMissionList );
LABEL_14:
    sub_1C13F80(Time, v8);
  }
  return -1;
}


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
  bool IsIgnoreStartCondition; // w25
  bool v15; // w24
  int32_t MissionProgressType; // w0

  if ( (byte_4BB18AB & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1C13D24(&MissionInfoMaker_TypeInfo, eventMissionList);
    byte_4BB18AB = 1;
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
        sub_1C13F88(this, eventMissionList);
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
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      v15 = v13;
      MissionProgressType = MissionInfoMaker__GetMissionProgressType(
                              missionTargetId,
                              id,
                              v15,
                              IsIgnoreStartCondition,
                              0LL);
      this = (ScrPlayerStatus_o *)MissionInfoMaker__GetProgStatus(
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
LABEL_16:
    sub_1C13F80(this, eventMissionList);
  }
  return 0;
}


int32_t __fastcall ScrPlayerStatus__GetMissionClearCount_35490848(
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
  bool IsIgnoreStartCondition; // w25
  bool v15; // w24
  int32_t MissionProgressType; // w0

  if ( (byte_4BB18AC & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1C13D24(&MissionInfoMaker_TypeInfo, eventMissionList);
    byte_4BB18AC = 1;
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
        sub_1C13F88(this, eventMissionList);
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
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      v15 = v13;
      MissionProgressType = MissionInfoMaker__GetMissionProgressType(
                              missionTargetId,
                              id,
                              v15,
                              IsIgnoreStartCondition,
                              0LL);
      this = (ScrPlayerStatus_o *)MissionInfoMaker__GetProgStatus(
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
LABEL_16:
    sub_1C13F80(this, eventMissionList);
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
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *Time; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int size; // w22
  int64_t v11; // x21
  int v12; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v14; // x3

  v3 = startIndex;
  if ( (byte_4BB18B3 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      *(_QWORD *)&startIndex);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    byte_4BB18B3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0LL);
  currentMissionList = this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_16:
    sub_1C13F80(Time, v8);
  size = currentMissionList->fields._size;
  v11 = (int64_t)Time;
  v12 = (size & ~(size >> 31)) + 1;
  while ( --v12 )
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
             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( ScrPlayerStatus__IsEnabledMstMission(
           (ScrPlayerStatus_o *)Item,
           (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
           v11,
           v14) )
    {
      return v3;
    }
  }
  return 0;
}


System_String_o *__fastcall ScrPlayerStatus__GetTimeApRecoverStr(
        ScrPlayerStatus_o *this,
        int64_t time,
        bool isGetMax,
        const MethodInfo *method)
{
  int v5; // w20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int v11; // w21
  int v12; // w22
  int v13; // w23
  System_String_o *v14; // x19
  System_String_o *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  int v39; // [xsp+Ch] [xbp-44h] BYREF
  int v40; // [xsp+18h] [xbp-38h] BYREF
  int v41; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = time;
  if ( (byte_4BB18A4 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, time);
    sub_1C13D24(&LocalizationManager_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_15064/*"UPN Name: "*/, v7);
    sub_1C13D24(&StringLiteral_15066/*"URI must be absolute"*/, v8);
    sub_1C13D24(&StringLiteral_15065/*"URI"*/, v9);
    sub_1C13D24(&StringLiteral_15067/*"URL_STRATEGY_CHINA"*/, v10);
    byte_4BB18A4 = 1;
  }
  v11 = v5 / 3600;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = v5 / 60 - 60 * v11;
  v13 = v5 % 60;
  if ( isGetMax )
  {
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15064/*"UPN Name: "*/, 0LL);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15065/*"URI"*/, 0LL);
    v41 = v11;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v16, v17, v18);
    v40 = v12;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v20, v21, v22);
    v39 = v13;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v24, v25, v26);
    v28 = System_String__Format_62982384(v15, v19, v23, v27, 0LL);
  }
  else
  {
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15066/*"URI must be absolute"*/, 0LL);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_15067/*"URL_STRATEGY_CHINA"*/, 0LL);
    v41 = v12;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v30, v31, v32);
    v40 = v13;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v34, v35, v36);
    v28 = System_String__Format_62982316(v29, v33, v37, 0LL);
  }
  return System_String__Concat_62967944(v14, v28, 0LL);
}


System_String_o *__fastcall ScrPlayerStatus__GetTimeCommandSpellRecoverStr(
        ScrPlayerStatus_o *this,
        int64_t time,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int v5; // w19
  __int64 v6; // x1
  int v7; // w22
  Il2CppObject *v8; // x19
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int v14; // [xsp+8h] [xbp-28h] BYREF
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  v5 = time;
  if ( (byte_4BB18A5 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, time);
    sub_1C13D24(&StringLiteral_25370/*"{0:D2}:{1:D2}:{2:D2}"*/, v6);
    byte_4BB18A5 = 1;
  }
  v7 = v5 % 60;
  v15 = v5 / 60;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4);
  v14 = v7;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format_62982316((System_String_o *)StringLiteral_25370/*"{0:D2}:{1:D2}:{2:D2}"*/, v8, v12, 0LL);
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
    sub_1C13F80(masterMissionDailyBgObj, method);
  }
  UnityEngine_GameObject__SetActive(masterMissionDailyBgObj, 0, 0LL);
}


void __fastcall ScrPlayerStatus__InitApRecoverLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ScrPlayerStatus_c *v5; // x0
  float v6; // s0
  TitleInfoControl_c *v7; // x0
  float v8; // s8
  System_Func_float__float__float__float__o *v9; // x20
  AlphaTransitionCalculator_o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  AlphaTransitionCalculator_o *apRecoverStrAlphaCalculator; // x0

  if ( (byte_4BB189F & 1) == 0 )
  {
    sub_1C13D24(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v3);
    sub_1C13D24(&TitleInfoControl_TypeInfo, v4);
    byte_4BB189F = 1;
  }
  v5 = ScrPlayerStatus_TypeInfo;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    v5 = ScrPlayerStatus_TypeInfo;
  }
  v6 = ChangedFPSUtil__CovertFrameNumToSecond(v5->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM, 0LL);
  v7 = TitleInfoControl_TypeInfo;
  v8 = v6;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v7 = TitleInfoControl_TypeInfo;
  }
  v9 = ExtraEasing__AsymptoticSeriesFloat(
         v7->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
         (float)ScrPlayerStatus_TypeInfo->static_fields->AP_RECOVER_STR_FADE_FRAME_NUM,
         0LL);
  v10 = (AlphaTransitionCalculator_o *)sub_1C13F70(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v10, v8, v9, 0LL);
  this->fields.apRecoverStrAlphaCalculator = v10;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.apRecoverStrAlphaCalculator,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  apRecoverStrAlphaCalculator = this->fields.apRecoverStrAlphaCalculator;
  if ( !apRecoverStrAlphaCalculator )
    sub_1C13F80(0LL, v17);
  AlphaTransitionCalculator__MakeFadeInFinished(apRecoverStrAlphaCalculator, 0LL);
  this->fields.ApRecoverStrUpdateTimer = 0.0;
  this->fields.isDispMax = 1;
}


void __fastcall ScrPlayerStatus__InitCompleteMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CompleteMissionSprite_o *currentCompleteMissionList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_4BB18AE & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v3);
    byte_4BB18AE = 1;
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
    sub_1C13F80(currentCompleteMissionList, method);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)currentCompleteMissionList,
           0,
           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
  ScrPlayerStatus__ChangeViewCompleteMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v6);
LABEL_8:
  ScrPlayerStatus__UpdateCompleteMissionIconVisibility(this, v7);
}


void __fastcall ScrPlayerStatus__InitMstMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AlphaTransitionCalculator_o *masterMissionAlertPanel; // x0
  const MethodInfo *v8; // x2
  ScrPlayerStatus_c *v9; // x0
  struct AlphaTransitionCalculator_o **p_missionAlertAlphaCalculator; // x20
  float v11; // s8
  TitleInfoControl_c *v12; // x0
  System_Func_float__float__float__float__o *v13; // x21
  AlphaTransitionCalculator_o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v24; // x2

  if ( (byte_4BB18AD & 1) == 0 )
  {
    sub_1C13D24(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v4);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v5);
    sub_1C13D24(&TitleInfoControl_TypeInfo, v6);
    byte_4BB18AD = 1;
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
    v9 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
      v9 = ScrPlayerStatus_TypeInfo;
    }
    p_missionAlertAlphaCalculator = &this->fields.missionAlertAlphaCalculator;
    v11 = ChangedFPSUtil__CovertFrameNumToSecond(v9->static_fields->MISSION_ALERT_FADE_FRAME_NUM, 0LL);
    v12 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v12 = TitleInfoControl_TypeInfo;
    }
    v13 = ExtraEasing__AsymptoticSeriesFloat(
            v12->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)ScrPlayerStatus_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM,
            0LL);
    v14 = (AlphaTransitionCalculator_o *)sub_1C13F70(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v14, v11, v13, 0LL);
    *p_missionAlertAlphaCalculator = v14;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.missionAlertAlphaCalculator,
      (int64_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    masterMissionAlertPanel = *p_missionAlertAlphaCalculator;
    if ( !*p_missionAlertAlphaCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(masterMissionAlertPanel, 0LL);
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 5, v8);
  method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel;
  if ( ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0
    || (masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 3, v21),
        method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel,
        ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0)
    || (masterMissionAlertPanel = (AlphaTransitionCalculator_o *)ScrPlayerStatus__GetFirstMstMissionIndex(this, 2, v21),
        method = (const MethodInfo *)(unsigned int)masterMissionAlertPanel,
        ((unsigned int)masterMissionAlertPanel & 0x80000000) == 0) )
  {
    currentMissionList = this->fields.currentMissionList;
    if ( !currentMissionList )
      goto LABEL_19;
    if ( currentMissionList->fields._size >= 1 )
    {
      this->fields.currentMissionIndex = (int)method;
      ScrPlayerStatus__UpdateDailyMissionInfoItem(this, (int32_t)method, v21);
      masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.currentMissionList;
      if ( masterMissionAlertPanel )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)masterMissionAlertPanel,
                 this->fields.currentMissionIndex,
                 (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
        ScrPlayerStatus__ChangeViewMstMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v24);
        return;
      }
LABEL_19:
      sub_1C13F80(masterMissionAlertPanel, method);
    }
  }
  ScrPlayerStatus__HideMstMissionIconLb(this, method);
}


bool __fastcall ScrPlayerStatus__IsBPActive(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *rpRoot; // x0

  rpRoot = (UnityEngine_Component_o *)this->fields.rpRoot;
  if ( !rpRoot || (rpRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rpRoot, 0LL)) == 0LL )
    sub_1C13F80(rpRoot, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)rpRoot, 0LL);
}


bool __fastcall ScrPlayerStatus__IsCommandSpellActive(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *commandSpellWindow; // x0

  commandSpellWindow = (BattleWindowComponent_o *)this->fields.commandSpellWindow;
  if ( !commandSpellWindow )
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(this, missionInfo);
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
  ScrTerminalListTop_o *v2; // x0
  QuestRewardTokenAction_c *klass; // x8

  if ( (byte_4BB1889 & 1) == 0 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BB1889 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
  }
  v2 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.boardGameTokenAction->klass;
  if ( !klass || (v2 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
    sub_1C13F80(v2, method);
  return !ScrTerminalListTop__IsListSliding(v2, 0LL);
}


void __fastcall ScrPlayerStatus__OnClickApRecoverBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  RecoverDlgComponent_CallbackFunc_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  v2 = this;
  if ( (byte_4BB1884 & 1) == 0 )
  {
    sub_1C13D24(&RecoverDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_ScrPlayerStatus__OnClickApRecoverBtn_b__158_0__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB1884 = 1;
  }
  if ( v2->fields.mIsEnableApRecoverBtn && ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C13F70(RecoverDlgComponent_CallbackFunc_TypeInfo);
    RecoverDlgComponent_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)v2,
      Method_ScrPlayerStatus__OnClickApRecoverBtn_b__158_0__,
      0LL);
    if ( !Instance )
      sub_1C13F80(v8, v9);
    CommonUI__OpenApRecoverItemListDialog((CommonUI_o *)Instance, 0, v7, 1, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickCloseNextExp(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BaseDialog_o *nextExpDialog; // x19
  ScrPlayerStatus___c_c *v8; // x0
  System_Action_o *_9__168_0; // x20
  Il2CppObject *v10; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB188D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus___c__OnClickCloseNextExp_b__168_0__, v4);
    sub_1C13D24(&ScrPlayerStatus___c_TypeInfo, v5);
    byte_4BB188D = 1;
  }
  if ( !this->fields.isDisableCloseNextExpBtn )
  {
    this->fields.isDisableCloseNextExpBtn = 1;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    nextExpDialog = this->fields.nextExpDialog;
    v8 = ScrPlayerStatus___c_TypeInfo;
    if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
      v8 = ScrPlayerStatus___c_TypeInfo;
    }
    _9__168_0 = v8->static_fields->__9__168_0;
    if ( !_9__168_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = ScrPlayerStatus___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__168_0 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(_9__168_0, v10, Method_ScrPlayerStatus___c__OnClickCloseNextExp_b__168_0__, 0LL);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
      static_fields->__9__168_0 = _9__168_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__168_0,
        (int64_t)_9__168_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    if ( !nextExpDialog )
      sub_1C13F80(v8, v6);
    BaseDialog__Close(nextExpDialog, _9__168_0, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickCompleteMissionBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
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
  __int64 v17; // x8
  Il2CppObject *v18; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  System_String_o *v22; // x19
  long double inited; // q0
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  System_String_o *v28; // x19
  CommonUI_o *v29; // x20
  ScrPlayerStatus___c_c *v30; // x8
  System_Action_o *_9__154_1; // x21
  Il2CppObject *v32; // x22
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  v2 = (Il2CppObject *)this;
  if ( (byte_4BB1880 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_System_Array_Empty_object___, v3);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_1C13D24(&LocalizationManager_TypeInfo, v6);
    sub_1C13D24(&Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__154_0__, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v11);
    sub_1C13D24(&Method_ScrPlayerStatus___c__OnClickCompleteMissionBtn_b__154_1__, v12);
    sub_1C13D24(&ScrPlayerStatus___c_TypeInfo, v13);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&StringLiteral_3823/*"COMMON_VIEW_CHANGE"*/, v14);
    byte_4BB1880 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventMissionMaster__isActiveCompMission((EventMissionMaster_o *)Instance, 0LL) )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v16);
        byte_4BAF374 = 1;
      }
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v17 = **(_QWORD **)&Instance[1].fields._DispLog;
      if ( v17 )
      {
        Instance = *(DataManager_o **)(v17 + 264);
        if ( Instance )
        {
          ScrTerminalMap__DestroyEventActionEffect((ScrTerminalMap_o *)Instance, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__PlaySystemSE(0, 0LL);
          v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v19 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v19 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
          v21 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(v21, v2, Method_ScrPlayerStatus__OnClickCompleteMissionBtn_b__154_0__, 0LL);
          if ( v18 )
          {
            CommonUI__maskFadeout((CommonUI_o *)v18, 1, DEFAULT_FADE_TIME, v21, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_1C13F80(Instance, v16);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_VIEW_CHANGE"*/, 0LL);
    v24 = Method_System_Array_Empty_object___;
    v25 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v25 )
    {
      sub_1C65C5C(Method_System_Array_Empty_object___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C65C00(inited);
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26);
    v27 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C65C00(inited);
    v28 = System_String__Format_62982452(v22, **(System_Object_array ***)(v27 + 184), 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (CommonUI_o *)Instance;
    v30 = ScrPlayerStatus___c_TypeInfo;
    if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
      v30 = ScrPlayerStatus___c_TypeInfo;
    }
    _9__154_1 = v30->static_fields->__9__154_1;
    if ( !_9__154_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = ScrPlayerStatus___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__154_1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(_9__154_1, v32, Method_ScrPlayerStatus___c__OnClickCompleteMissionBtn_b__154_1__, 0LL);
      static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
      static_fields->__9__154_1 = _9__154_1;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__154_1,
        (int64_t)_9__154_1,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    if ( !v29 )
      goto LABEL_40;
    CommonUI__OpenNotificationDialog(v29, 0LL, v28, _9__154_1, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickDailyMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v11; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4BB1881 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus__OnClickDailyMissionInfoBtn_b__155_0__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&TerminalSceneComponent_TypeInfo, v7);
    byte_4BB1881 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v9->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v9 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v9, 0LL);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v11 = v9->fields.subRootGimmickP->klass;
    if ( !v11 )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&v11->_2.instance_size;
    if ( !v9 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v9, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v15 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v15, v2, Method_ScrPlayerStatus__OnClickDailyMissionInfoBtn_b__155_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1C13F80(v9, v8);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickLimitedMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v11; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4BB1883 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus__OnClickLimitedMissionInfoBtn_b__157_0__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&TerminalSceneComponent_TypeInfo, v7);
    byte_4BB1883 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v9->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v9 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v9, 0LL);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v11 = v9->fields.subRootGimmickP->klass;
    if ( !v11 )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&v11->_2.instance_size;
    if ( !v9 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v9, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v15 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v15, v2, Method_ScrPlayerStatus__OnClickLimitedMissionInfoBtn_b__157_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1C13F80(v9, v8);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickLocation(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4BB188E & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB188E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(0, 0LL);
  this->fields.isLocationBusy = 1;
  if ( AndroidPermissionManager__EnabledRuntimePermission(0LL) )
    ScrPlayerStatus__ShowEnabledRuntimePermissionDialog(this, v3);
  else
    ScrPlayerStatus__ShowDisabledRuntimePermissionDialog(this, v3);
}


void __fastcall ScrPlayerStatus__OnClickMasterFaceBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v11; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4BB1886 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus__OnClickMasterFaceBtn_b__160_0__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&TerminalSceneComponent_TypeInfo, v7);
    byte_4BB1886 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v9->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v9 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v9, 0LL);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v11 = v9->fields.subRootGimmickP->klass;
    if ( !v11 )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&v11->_2.instance_size;
    if ( !v9 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v9, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v15 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v15, v2, Method_ScrPlayerStatus__OnClickMasterFaceBtn_b__160_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1C13F80(v9, v8);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickMasterMissionBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v11; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4BB187B & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__149_0__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&TerminalSceneComponent_TypeInfo, v7);
    byte_4BB187B = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v9->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v9 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v9, 0LL);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v11 = v9->fields.subRootGimmickP->klass;
    if ( !v11 )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&v11->_2.instance_size;
    if ( !v9 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v9, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v15 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v15, v2, Method_ScrPlayerStatus__OnClickMasterMissionBtn_b__149_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1C13F80(v9, v8);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickOpenNextExp(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *nextExpValLabel; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  BaseDialog_o *nextExpDialog; // x20
  System_Action_o *v10; // x21

  if ( (byte_4BB188C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_ScrPlayerStatus__OnClickOpenNextExp_b__167_0__, v3);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_426/*"#,0"*/, v5);
    byte_4BB188C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(0, 0LL);
  nextExpValLabel = this->fields.nextExpValLabel;
  v7 = System_Int64__ToString_63778728((int64_t)&this->fields.nextExpVal, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
  if ( !nextExpValLabel
    || (UILabel__set_text(nextExpValLabel, v7, 0LL),
        this->fields.isDisableCloseNextExpBtn = 1,
        nextExpDialog = this->fields.nextExpDialog,
        v10 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrPlayerStatus__OnClickOpenNextExp_b__167_0__, 0LL),
        !nextExpDialog) )
  {
    sub_1C13F80(v7, v8);
  }
  BaseDialog__Open(nextExpDialog, v10, 0, 0LL);
}


void __fastcall ScrPlayerStatus__OnClickRpRecoverBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  RecoverDlgComponent_CallbackFunc_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  v2 = this;
  if ( (byte_4BB1885 & 1) == 0 )
  {
    sub_1C13D24(&RecoverDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_ScrPlayerStatus__OnClickRpRecoverBtn_b__159_0__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB1885 = 1;
  }
  if ( v2->fields.mIsEnableRpRecoverBtn && ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (RecoverDlgComponent_CallbackFunc_o *)sub_1C13F70(RecoverDlgComponent_CallbackFunc_TypeInfo);
    RecoverDlgComponent_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)v2,
      Method_ScrPlayerStatus__OnClickRpRecoverBtn_b__159_0__,
      0LL);
    if ( !Instance )
      sub_1C13F80(v8, v9);
    CommonUI__OpenRpRecoverItemListDialog((CommonUI_o *)Instance, 0, v7, 1, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnClickSpellBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  _BOOL4 isRevocationSpell; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct CommandSpellWindowComponent_o *commandSpellWindow; // x0

  v2 = this;
  if ( (byte_4BB1887 & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1C13D24(&Method_ScrPlayerStatus_OnClickSpellBtn__, method);
    byte_4BB1887 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    isRevocationSpell = v2->fields.isRevocationSpell;
    v4 = Method_ScrPlayerStatus_OnClickSpellBtn__;
    if ( (*((_BYTE *)Method_ScrPlayerStatus_OnClickSpellBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C13D3C(Method_ScrPlayerStatus_OnClickSpellBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
    if ( isRevocationSpell )
    {
      OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0LL);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
      commandSpellWindow = v2->fields.commandSpellWindow;
      if ( !commandSpellWindow )
        sub_1C13F80(0LL, v6);
      ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))commandSpellWindow->klass->vtable._10_Open.method)(
        commandSpellWindow,
        0LL,
        commandSpellWindow->klass->vtable._11_CompOpen.methodPtr);
    }
  }
}


void __fastcall ScrPlayerStatus__OnClickWeeklyMissionInfoBtn(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v11; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4BB1882 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus__OnClickWeeklyMissionInfoBtn_b__156_0__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v6);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&TerminalSceneComponent_TypeInfo, v7);
    byte_4BB1882 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v9->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
    if ( !v9 )
      goto LABEL_25;
    ScrTerminalMap__DestroyEventActionEffect(v9, 0LL);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
      byte_4BAF374 = 1;
    }
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v11 = v9->fields.subRootGimmickP->klass;
    if ( !v11 )
      goto LABEL_25;
    v9 = *(ScrTerminalMap_o **)&v11->_2.instance_size;
    if ( !v9 )
      goto LABEL_25;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v9, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v15 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v15, v2, Method_ScrPlayerStatus__OnClickWeeklyMissionInfoBtn_b__156_0__, 0LL);
    if ( !Instance )
LABEL_25:
      sub_1C13F80(v9, v8);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0LL);
  }
}


void __fastcall ScrPlayerStatus__OnCloseSpellWindow(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  __int64 v3; // x1
  BattleWindowComponent_o *commandSpellWindow; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  v2 = this;
  if ( (byte_4BB1888 & 1) == 0 )
  {
    this = (ScrPlayerStatus_o *)sub_1C13D24(&Method_ScrPlayerStatus_OnCloseSpellWindow__, method);
    byte_4BB1888 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    commandSpellWindow = (BattleWindowComponent_o *)v2->fields.commandSpellWindow;
    if ( !commandSpellWindow )
      goto LABEL_11;
    if ( BattleWindowComponent__isOpen(commandSpellWindow, 0LL) )
    {
      v5 = Method_ScrPlayerStatus_OnCloseSpellWindow__;
      if ( (*((_BYTE *)Method_ScrPlayerStatus_OnCloseSpellWindow__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C13D3C(Method_ScrPlayerStatus_OnCloseSpellWindow__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
      commandSpellWindow = (BattleWindowComponent_o *)v2->fields.commandSpellWindow;
      if ( commandSpellWindow )
      {
        ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))commandSpellWindow->klass->vtable._12_Close.method)(
          commandSpellWindow,
          0LL,
          commandSpellWindow->klass->vtable._13_CompClose.methodPtr);
        return;
      }
LABEL_11:
      sub_1C13F80(commandSpellWindow, v3);
    }
  }
}


void __fastcall ScrPlayerStatus__OnDestroy(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  UnityEngine_Object_o *v7; // x19
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4BB1876 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__getInstance__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4BB1876 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_CommonUI__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C65C00(v2);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C65C00(v2);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    if ( CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseUsrPresentList((CommonUI_o *)Instance, 0LL);
        return;
      }
LABEL_15:
      sub_1C13F80(Instance, v9);
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


void __fastcall ScrPlayerStatus__OpenCompleteMission(
        ScrPlayerStatus_o *this,
        System_Action_o *callback,
        int32_t typeIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *Instance; // x21
  CompleteMissionComponent_ClickDelegate_o *v20; // x22
  System_Action_o *v21; // x23
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v23; // x1
  TerminalSceneComponent_c *v24; // x0

  if ( (byte_4BB187F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&CompleteMissionComponent_ClickDelegate_TypeInfo, v7);
    sub_1C13D24(&Method_ScrPlayerStatus_ExitCompleteMission__, v8);
    sub_1C13D24(&Method_ScrPlayerStatus__OpenCompleteMission_b__153_0__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C13D24(&SoundManager_TypeInfo, v11);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v12);
    byte_4BB187F = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  this->fields.mAfterCloseCompleteMission = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mAfterCloseCompleteMission,
    (int64_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CompleteMissionComponent_ClickDelegate_o *)sub_1C13F70(CompleteMissionComponent_ClickDelegate_TypeInfo);
  CompleteMissionComponent_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_ScrPlayerStatus_ExitCompleteMission__,
    0LL);
  v21 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ScrPlayerStatus__OpenCompleteMission_b__153_0__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__OpenCompleteMission((CommonUI_o *)Instance, v20, v21, typeIndex, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v23);
    byte_4BAF374 = 1;
  }
  v24 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v24->static_fields->mInstance;
  if ( !mInstance )
LABEL_14:
    sub_1C13F80(mInstance, v23);
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mAfterCloseMasterMission,
    (int64_t)callback,
    *(int64_t *)&typeIndex,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ScrPlayerStatus__OpenMasterMission_35470808(this, typeIndex, v10);
}


void __fastcall ScrPlayerStatus__OpenMasterMissionFromCompleteMission(
        ScrPlayerStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_35470808(this, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__OpenMasterMission_35470808(
        ScrPlayerStatus_o *this,
        int32_t typeIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x21
  MasterMissionComponent_ClickDelegate_o *v12; // x22
  System_Action_o *v13; // x23
  TerminalSceneComponent_o *mInstance; // x0
  __int64 v15; // x1
  TerminalSceneComponent_c *v16; // x0

  if ( (byte_4BB187A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&typeIndex);
    sub_1C13D24(&MasterMissionComponent_ClickDelegate_TypeInfo, v5);
    sub_1C13D24(&Method_ScrPlayerStatus_ExitMasterMission__, v6);
    sub_1C13D24(&Method_ScrPlayerStatus__OpenMasterMission_b__148_0__, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C13D24(&SoundManager_TypeInfo, v9);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v10);
    byte_4BB187A = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (MasterMissionComponent_ClickDelegate_o *)sub_1C13F70(MasterMissionComponent_ClickDelegate_TypeInfo);
  MasterMissionComponent_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ScrPlayerStatus_ExitMasterMission__,
    0LL);
  v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ScrPlayerStatus__OpenMasterMission_b__148_0__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__OpenMasterMission((CommonUI_o *)Instance, v12, v13, typeIndex, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v15);
    byte_4BAF374 = 1;
  }
  v16 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v16 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v16->static_fields->mInstance;
  if ( !mInstance )
LABEL_14:
    sub_1C13F80(mInstance, v15);
  TerminalSceneComponent__SetDispStandServant(mInstance, 0, 0LL);
}


void __fastcall ScrPlayerStatus__OpenMasterProfile(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  MstProfileComponent_ClickDelegate_o *v11; // x20
  __int64 v12; // x1
  ScrPlayerStatus___c_c *mInstance; // x0
  System_Action_o *_9__165_0; // x21
  Il2CppObject *v15; // x22
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  TerminalSceneComponent_c *v23; // x0

  if ( (byte_4BB188A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&MstProfileComponent_ClickDelegate_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus_ExitMasterProfile__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&SoundManager_TypeInfo, v6);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v7);
    sub_1C13D24(&Method_ScrPlayerStatus___c__OpenMasterProfile_b__165_0__, v8);
    sub_1C13D24(&ScrPlayerStatus___c_TypeInfo, v9);
    byte_4BB188A = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (MstProfileComponent_ClickDelegate_o *)sub_1C13F70(MstProfileComponent_ClickDelegate_TypeInfo);
  MstProfileComponent_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_ScrPlayerStatus_ExitMasterProfile__, 0LL);
  mInstance = ScrPlayerStatus___c_TypeInfo;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    mInstance = ScrPlayerStatus___c_TypeInfo;
  }
  _9__165_0 = mInstance->static_fields->__9__165_0;
  if ( !_9__165_0 )
  {
    if ( !mInstance->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mInstance);
      mInstance = ScrPlayerStatus___c_TypeInfo;
    }
    v15 = (Il2CppObject *)mInstance->static_fields->__9;
    _9__165_0 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(_9__165_0, v15, Method_ScrPlayerStatus___c__OpenMasterProfile_b__165_0__, 0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__165_0 = _9__165_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__165_0,
      (int64_t)_9__165_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenMasterProfile((CommonUI_o *)Instance, v11, _9__165_0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v12);
    byte_4BAF374 = 1;
  }
  v23 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v23 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (ScrPlayerStatus___c_c *)v23->static_fields->mInstance;
  if ( !mInstance )
LABEL_20:
    sub_1C13F80(mInstance, v12);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)mInstance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__ResetMasterFaceTexture(
        ScrPlayerStatus_o *this,
        int32_t overWriteImageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *mcMasterCurTexP; // x22
  struct UIMasterFaceTexture_o **p_mcMasterCurTexP; // x21
  __int64 v13; // x1
  long double v14; // q0
  Il2CppObject *MasterData_object; // x0
  UnityEngine_Object_o *gameObject; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t miMasterUserEquipID; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t v28; // w22
  UnityEngine_GameObject_o *mcFaceObjP; // x23
  int32_t meMasterGender; // w24
  System_Action_o *v31; // x25
  struct UIMasterFaceTexture_o *Prefab_39062748; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4BB18A2 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&overWriteImageId);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEquipMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C13D24(&Method_ScrPlayerStatus_mfFaceMngCallback__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    byte_4BB18A2 = 1;
  }
  mcMasterCurTexP = (UnityEngine_Object_o *)this->fields.mcMasterCurTexP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
    *p_mcMasterCurTexP = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.mcMasterCurTexP, 0LL, v17, v18, v19, v20, v21, v22);
  }
  miMasterUserEquipID = this->fields.miMasterUserEquipID;
  this->fields.overwriteMasterIconId = overWriteImageId;
  if ( miMasterUserEquipID < 1 )
  {
    v28 = 0;
    goto LABEL_22;
  }
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C65C00(v14);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C65C00(v14);
  MasterData_object = **(Il2CppObject ***)(v25 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (MasterData_object = DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              this->fields.miMasterUserEquipID,
                              (const MethodInfo_323AB80 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__)) == 0LL )
  {
LABEL_23:
    sub_1C13F80(MasterData_object, v13);
  }
  klass = MasterData_object[2].klass;
  monitor = MasterData_object[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = klass;
  *(_QWORD *)&v39.fields.fakeValue = monitor;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v39, 0LL);
LABEL_22:
  mcFaceObjP = this->fields.mcFaceObjP;
  meMasterGender = this->fields.meMasterGender;
  v31 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ScrPlayerStatus_mfFaceMngCallback__, 0LL);
  Prefab_39062748 = MasterFaceManager__CreatePrefab_39062748(
                      mcFaceObjP,
                      1,
                      meMasterGender,
                      v28,
                      1,
                      v31,
                      overWriteImageId,
                      0LL);
  this->fields.mcMasterCurTexP = Prefab_39062748;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mcMasterCurTexP,
    (int64_t)Prefab_39062748,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  sub_1C13CC8(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t ActiveUserEquipId; // x0
  intptr_t v10; // w22
  int64_t v11; // x21
  System_Type_o *TypeFromHandle; // x0
  int32_t genderType; // w22
  System_Type_o *v14; // x23
  int32_t v15; // w8
  int32_t Act; // w0
  int32_t actMax; // w8
  float v18; // s0
  int32_t CommandSpell; // w20
  int32_t Value; // w0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  ScrPlayerStatus_o *v23; // x0
  int64_t v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int64_t exp; // [xsp+8h] [xbp-38h] BYREF
  System_RuntimeTypeHandle_o v28; // 0:w0.4

  v4 = this;
  if ( (byte_4BB1874 & 1) == 0 )
  {
    sub_1C13D24(&System_Enum_TypeInfo, entity);
    sub_1C13D24(&Gender_Type_var, v5);
    sub_1C13D24(&Gender_Type_TypeInfo, v6);
    sub_1C13D24(&System_Type_TypeInfo, v7);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&StringLiteral_8749/*"MAX"*/, v8);
    byte_4BB1874 = 1;
  }
  exp = 0LL;
  if ( !entity )
    goto LABEL_17;
  v4->fields.miLevel = entity->fields.lv;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(entity, 0LL);
  v10 = (int)Gender_Type_var;
  v11 = ActiveUserEquipId;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v28.fields.value = v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v28, 0LL);
  genderType = entity->fields.genderType;
  v14 = TypeFromHandle;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (ScrPlayerStatus_o *)System_Enum__ToObject_63997692(v14, genderType, 0LL);
  if ( !this )
LABEL_17:
    sub_1C13F80(this, entity);
  if ( this->klass->_1.element_class == Gender_Type_TypeInfo->_1.element_class )
  {
    v15 = *(_DWORD *)j_il2cpp_object_unbox_0();
    if ( v4->fields.miMasterUserEquipID != v11 || v4->fields.meMasterGender != v15 )
    {
      v4->fields.miMasterUserEquipID = v11;
      v4->fields.isUpdateFaceTexture = 1;
      v4->fields.meMasterGender = v15;
    }
    UserGameEntity__getExpInfo(entity, &exp, &v4->fields.nextExpVal, &v4->fields.mfExpPar, 0LL);
    Act = UserGameEntity__getAct(entity, 0LL);
    actMax = entity->fields.actMax;
    v4->fields.miApNow = Act;
    v4->fields.miApMax = actMax;
    if ( Act < 1 )
      v18 = 0.0;
    else
      v18 = (float)Act / (float)actMax;
    v4->fields.mfApPar = v18;
    CommandSpell = UserGameEntity__getCommandSpell(entity, 0LL);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8749/*"MAX"*/, 0LL);
    ScrPlayerStatus__mfSetSpell(v4, CommandSpell, Value, v21);
    ScrPlayerStatus__mfSetStoneAndFragment(v4, v22);
  }
  else
  {
    sub_1C14240(this);
    ScrPlayerStatus__mfSetFaceID(v23, v24, v25, v26);
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
    sub_1C13F80(0LL, is_enable);
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
    sub_1C13F80(0LL, act);
  mcGiftButtonP->fields.OnGiftCloseAdditionalAction = act;
  sub_1C13CC8(
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x20
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  EventEntity_array *EnableEntityList; // x0
  __int64 *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x8
  __int64 v43; // x8
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x21
  CommonUI_o *v46; // x22
  System_String_o *v47; // x23
  System_String_o **v48; // x9
  System_String_o *v49; // x24
  System_String_o *v50; // x0
  _BOOL4 mIsAcceptedLocationEvent; // w25
  System_String_o *v52; // x19
  CampaignInfoDlg_onButtonDelgate_o *v53; // x24
  Il2CppObject *v54; // x19
  System_String_o *v55; // x21
  System_String_o *v56; // x22
  System_Action_o *v57; // x0
  __int64 *v58; // x8
  System_String_o *v59; // x22
  System_String_o *v60; // x0
  System_Action_o *v61; // x23
  Il2CppObject *v62; // [xsp+30h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4BB1891 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_CampaignInfoMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventLocationCampaignMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1C13D24(
      &Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int__TryGetEntity__,
      v6);
    sub_1C13D24(&Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__, v7);
    sub_1C13D24(&GeoLocation_TypeInfo, v8);
    sub_1C13D24(&LocalizationManager_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__0__, v12);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__1__, v13);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__2__, v14);
    sub_1C13D24(&ScrPlayerStatus___c__DisplayClass174_0_TypeInfo, v15);
    sub_1C13D24(&StringLiteral_8443/*"LOCATION_DLG_DEVICE_OPTION_RETRY_DECIDE"*/, v16);
    sub_1C13D24(&StringLiteral_8437/*"LOCAL AUTHORITY"*/, v17);
    sub_1C13D24(&StringLiteral_8435/*"LOAD_END"*/, v18);
    sub_1C13D24(&StringLiteral_8445/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/, v19);
    sub_1C13D24(&StringLiteral_8446/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/, v20);
    sub_1C13D24(&StringLiteral_8436/*"LOAD_END_TO_HELP"*/, v21);
    sub_1C13D24(&StringLiteral_8439/*"LOCATION_CAMPAIGN_INFO_DLG_CANCEL"*/, v22);
    sub_1C13D24(&StringLiteral_8438/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/, v23);
    sub_1C13D24(&CampaignInfoDlg_onButtonDelgate_TypeInfo, v24);
    byte_4BB1891 = 1;
  }
  v62 = 0LL;
  entity = 0LL;
  v25 = sub_1C13F70(ScrPlayerStatus___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_39;
  *(_QWORD *)(v25 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)this, v28, v29, v30, v31, v32, v33);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
  if ( GeoLocation__IsLocationEnabledByUser(0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_39;
    EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 20, 0, 0, 0LL);
    *(_QWORD *)(v25 + 24) = EnableEntityList;
    v35 = (__int64 *)(v25 + 24);
    sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)EnableEntityList, v36, v37, v38, v39, v40, v41);
    if ( !*(_QWORD *)(v25 + 24) )
      goto LABEL_39;
    if ( *(_QWORD *)(*(_QWORD *)(v25 + 24) + 24LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventLocationCampaignMaster___);
      v42 = *v35;
      if ( !*v35 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v42 + 24) )
        sub_1C13F88(Instance, v27);
      v43 = *(_QWORD *)(v42 + 32);
      if ( !v43 || !Instance )
        goto LABEL_39;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &entity,
             *(_DWORD *)(v43 + 16),
             (const MethodInfo_3238670 *)Method_DataMasterBase_EventLocationCampaignMaster__EventLocationCampaignEntity__int__TryGetEntity__) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_39;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CampaignInfoMaster___);
        if ( !entity || !Instance )
          goto LABEL_39;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v62,
               (int32_t)entity[2].monitor,
               (const MethodInfo_3238670 *)Method_DataMasterBase_CampaignInfoMaster__CampaignInfoEntity__int__TryGetEntity__) )
        {
          v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v45 = v62;
          v46 = (CommonUI_o *)v44;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8436/*"LOAD_END_TO_HELP"*/, 0LL);
          if ( this->fields.mIsAcceptedLocationEvent )
            v48 = (System_String_o **)&StringLiteral_8435/*"LOAD_END"*/;
          else
            v48 = (System_String_o **)&StringLiteral_8437/*"LOCAL AUTHORITY"*/;
          v49 = *v48;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v50 = LocalizationManager__Get(v49, 0LL);
          mIsAcceptedLocationEvent = this->fields.mIsAcceptedLocationEvent;
          v52 = v50;
          v53 = (CampaignInfoDlg_onButtonDelgate_o *)sub_1C13F70(CampaignInfoDlg_onButtonDelgate_TypeInfo);
          CampaignInfoDlg_onButtonDelgate___ctor(
            v53,
            (Il2CppObject *)v25,
            Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__1__,
            0LL);
          if ( v46 )
          {
            CommonUI__OpenCampaignInfoDialog(
              v46,
              (CampaignInfoEntity_o *)v45,
              v47,
              v52,
              !mIsAcceptedLocationEvent,
              v53,
              0LL);
            return;
          }
LABEL_39:
          sub_1C13F80(Instance, v27);
        }
      }
    }
    v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_8445/*"LOCATION_DLG_DEVICE_OPTION_RETRY_TITLE"*/, 0LL);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_8446/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/, 0LL);
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_8438/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/, 0LL);
    v56 = System_String__Concat_62967944(v59, v60, 0LL);
    v57 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    v58 = &Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__2__;
  }
  else
  {
    v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_8443/*"LOCATION_DLG_DEVICE_OPTION_RETRY_DECIDE"*/, 0LL);
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_8439/*"LOCATION_CAMPAIGN_INFO_DLG_CANCEL"*/, 0LL);
    v57 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    v58 = &Method_ScrPlayerStatus___c__DisplayClass174_0__SetLocationCheck_b__0__;
  }
  v61 = v57;
  System_Action___ctor(v57, (Il2CppObject *)v25, *v58, 0LL);
  if ( !v54 )
    goto LABEL_39;
  CommonUI__OpenNotificationDialog((CommonUI_o *)v54, v55, v56, v61, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall ScrPlayerStatus__SetLocationEventBtnShow(ScrPlayerStatus_o *this, bool onOff, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mLocationBtnRoot; // x0

  mLocationBtnRoot = this->fields.mLocationBtnRoot;
  if ( !mLocationBtnRoot )
    sub_1C13F80(0LL, onOff);
  UnityEngine_GameObject__SetActive(mLocationBtnRoot, onOff, 0LL);
}


void __fastcall ScrPlayerStatus__SetOverwriteMasterInfo(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  int32_t WarId_k__BackingField; // w20
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  WarAddMaster_o *v11; // x21
  WarAddEntity_o *PrioredEntity; // x0
  int v13; // w24
  int64_t *p_overwriteStr; // x8
  int64_t v15; // x22
  int32_t PrioredID; // w21
  int64_t v17; // x23
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

  if ( (byte_4BB18A0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_WarAddMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&ScrPlayerStatus_OverwriteMasterInfo_TypeInfo, v4);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB18A0 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1250 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v7->static_fields->_WarId_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarAddMaster___);
  if ( !Master_object )
    sub_1C13F80(0LL, v10);
  v11 = (WarAddMaster_o *)Master_object;
  PrioredEntity = WarAddMaster__GetPrioredEntity((WarAddMaster_o *)Master_object, 20, WarId_k__BackingField, 0LL);
  if ( PrioredEntity )
  {
    v13 = PrioredEntity->fields.overwriteId - 1;
    p_overwriteStr = (int64_t *)&PrioredEntity->fields.overwriteStr;
  }
  else
  {
    p_overwriteStr = (int64_t *)&StringLiteral_1/*""*/;
    v13 = -1;
  }
  v15 = *p_overwriteStr;
  PrioredID = WarAddMaster__GetPrioredID(v11, 21, WarId_k__BackingField, 0, 0LL);
  v17 = sub_1C13F70(ScrPlayerStatus_OverwriteMasterInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  *(_DWORD *)(v17 + 16) = WarId_k__BackingField;
  *(_DWORD *)(v17 + 20) = PrioredID;
  *(_DWORD *)(v17 + 24) = v13;
  *(_QWORD *)(v17 + 32) = v15;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 32), v15, v18, v19, v20, v21, v22, v23);
  this->fields.overwriteMasterInfo = (struct ScrPlayerStatus_OverwriteMasterInfo_o *)v17;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.overwriteMasterInfo, v17, v24, v25, v26, v27, v28, v29);
}


void __fastcall ScrPlayerStatus__SetRecoverAct(ScrPlayerStatus_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mRecoverAct = act;
  sub_1C13CC8(
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
    sub_1C13F80(0LL, is_enable);
  v6 = 1.0;
  v7 = v5;
  v8 = v5;
  UIWidget__set_color(mRpRecoverBtnSp, *(UnityEngine_Color_o *)&v5, 0LL);
}


void __fastcall ScrPlayerStatus__SetupDispRaidPoint(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *rpRoot; // x8
  const MethodInfo *v7; // x2

  if ( (byte_4BB1899 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BB1899 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
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
      ScrPlayerBP__SetupDispRaidPoint((ScrPlayerBP_o *)Instance, this->fields.userGameEntity, v7);
      return;
    }
LABEL_11:
    sub_1C13F80(Instance, v5);
  }
}


void __fastcall ScrPlayerStatus__SetupGradeIcon(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *userGameEntity; // x19
  int32_t Kind_38831516; // w21
  System_String_o *MainMstIconBgImage; // x0
  __int64 v8; // x1
  System_String_o *v9; // x19
  UISprite_o *masterIconBG; // x20
  __int64 v11; // x8
  UIAtlas_o *v12; // x21

  if ( (byte_4BB1898 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&Grade_TypeInfo, v3);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v4);
    byte_4BB1898 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_38831516 = Grade__GetKind_38831516(userGameEntity, 0LL);
  MainMstIconBgImage = Grade__GetMainMstIconBgImage(Kind_38831516, 0LL);
  if ( !this->fields.masterIconGrade )
    goto LABEL_16;
  v9 = MainMstIconBgImage;
  UserGradeComponent__Set(this->fields.masterIconGrade, Kind_38831516, 0LL);
  masterIconBG = this->fields.masterIconBG;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BAF374 = 1;
  }
  MainMstIconBgImage = (System_String_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MainMstIconBgImage = (System_String_o *)TerminalSceneComponent_TypeInfo;
  }
  v11 = **(_QWORD **)&MainMstIconBgImage[7].fields;
  if ( !v11 )
LABEL_16:
    sub_1C13F80(MainMstIconBgImage, v8);
  v12 = *(UIAtlas_o **)(v11 + 304);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeBase(masterIconBG, v9, v12, 0LL);
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
    sub_1C13F80(completeMissionIcon, value);
  }
  UnityEngine_GameObject__SetActive(completeMissionIcon, value, 0LL);
}


void __fastcall ScrPlayerStatus__ShowDisabledRuntimePermissionDialog(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScrPlayerStatus_c *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x20
  TermsOfUseDlg_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BB1890 & 1) == 0 )
  {
    sub_1C13D24(&TermsOfUseDlg_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_ScrPlayerStatus__ShowDisabledRuntimePermissionDialog_b__171_0__, v3);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB1890 = 1;
  }
  v6 = ScrPlayerStatus_TypeInfo;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    v6 = ScrPlayerStatus_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v6->static_fields->LOCATION_TOS_AGREED_KEY, -1, 0LL) == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (TermsOfUseDlg_CallbackFunc_o *)sub_1C13F70(TermsOfUseDlg_CallbackFunc_TypeInfo);
    TermsOfUseDlg_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ScrPlayerStatus__ShowDisabledRuntimePermissionDialog_b__171_0__,
      0LL);
    if ( !Instance )
      sub_1C13F80(v10, v11);
    CommonUI__OpenLocationTermsOfUseDlg((CommonUI_o *)Instance, v9, 1, 0LL);
  }
  else
  {
    ScrPlayerStatus__SetLocationCheck(this, v7);
  }
}


void __fastcall ScrPlayerStatus__ShowEnabledRuntimePermissionDialog(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool v23; // w21
  bool ShouldShowRequestPermissionRationale; // w0
  const MethodInfo *v25; // x1
  Il2CppObject *Instance; // x19
  TermsOfUseDlg_CallbackFunc_o *v27; // x21

  if ( (byte_4BB188F & 1) == 0 )
  {
    sub_1C13D24(&TermsOfUseDlg_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass170_0__ShowEnabledRuntimePermissionDialog_b__0__, v4);
    sub_1C13D24(&ScrPlayerStatus___c__DisplayClass170_0_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_17016/*"ancestor"*/, v6);
    byte_4BB188F = 1;
  }
  v7 = sub_1C13F70(ScrPlayerStatus___c__DisplayClass170_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_17016/*"ancestor"*/;
  *(_QWORD *)(v7 + 16) = StringLiteral_17016/*"ancestor"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 16), v16, v17, v18, v19, v20, v21, v22);
  v23 = AndroidPermissionManager__CheckPermission(*(System_String_o **)(v7 + 16), 0LL);
  ShouldShowRequestPermissionRationale = AndroidPermissionManager__ShouldShowRequestPermissionRationale(
                                           *(System_String_o **)(v7 + 16),
                                           0LL);
  if ( !v23 && !ShouldShowRequestPermissionRationale )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = (TermsOfUseDlg_CallbackFunc_o *)sub_1C13F70(TermsOfUseDlg_CallbackFunc_TypeInfo);
    TermsOfUseDlg_CallbackFunc___ctor(
      v27,
      (Il2CppObject *)v7,
      Method_ScrPlayerStatus___c__DisplayClass170_0__ShowEnabledRuntimePermissionDialog_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenLocationTermsOfUseDlg((CommonUI_o *)Instance, v27, 0, 0LL);
      return;
    }
LABEL_9:
    sub_1C13F80(v8, v9);
  }
  ScrPlayerStatus__SetLocationCheck(this, v25);
}


void __fastcall ScrPlayerStatus__SortLimitedMstMissionViewList(
        System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **list,
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
  Il2CppObject *v15; // x20
  int64_t Time; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v18; // x21
  ScrPlayerStatus___c_c *v19; // x0
  System_Func_object__int__o *_9__202_0; // x22
  Il2CppObject *v21; // x23
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x21
  System_Func_object__int__o *v30; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x21
  System_Func_T__TResult__o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4BB18AA & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Linq_Enumerable_OrderByDescending_MasterMissionComponent_MasterMissionInfoItem__int___,
      method);
    sub_1C13D24(&Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__int___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__long___, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_MasterMissionComponent_MasterMissionInfoItem___, v5);
    sub_1C13D24(&System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo, v6);
    sub_1C13D24(&System_Func_MasterMissionComponent_MasterMissionInfoItem__long__TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__, v8);
    sub_1C13D24(&NetworkManager_TypeInfo, v9);
    sub_1C13D24(&Method_ScrPlayerStatus___c__SortLimitedMstMissionViewList_b__202_0__, v10);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass202_0__SortLimitedMstMissionViewList_b__1__, v11);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass202_0__SortLimitedMstMissionViewList_b__2__, v12);
    sub_1C13D24(&ScrPlayerStatus___c__DisplayClass202_0_TypeInfo, v13);
    sub_1C13D24(&ScrPlayerStatus___c_TypeInfo, v14);
    byte_4BB18AA = 1;
  }
  v15 = (Il2CppObject *)sub_1C13F70(ScrPlayerStatus___c__DisplayClass202_0_TypeInfo);
  System_Object___ctor(v15, 0LL);
  if ( !*list )
    goto LABEL_16;
  if ( (*list)->fields._size < 2 )
    return;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !v15 )
LABEL_16:
    sub_1C13F80(Time, v17);
  v15[1].klass = (Il2CppClass *)Time;
  v18 = *list;
  v19 = ScrPlayerStatus___c_TypeInfo;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    v19 = ScrPlayerStatus___c_TypeInfo;
  }
  _9__202_0 = (System_Func_object__int__o *)v19->static_fields->__9__202_0;
  if ( !_9__202_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ScrPlayerStatus___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__202_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__202_0,
      v21,
      Method_ScrPlayerStatus___c__SortLimitedMstMissionViewList_b__202_0__,
      0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__202_0 = (struct System_Func_MasterMissionComponent_MasterMissionInfoItem__int__o *)_9__202_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__202_0,
      (int64_t)_9__202_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (System_Func_TSource__TKey__o *)_9__202_0,
          (const MethodInfo_2FB895C *)Method_System_Linq_Enumerable_OrderByDescending_MasterMissionComponent_MasterMissionInfoItem__int___);
  v30 = (System_Func_object__int__o *)sub_1C13F70(System_Func_MasterMissionComponent_MasterMissionInfoItem__int__TypeInfo);
  System_Func_object__int____ctor(
    v30,
    v15,
    Method_ScrPlayerStatus___c__DisplayClass202_0__SortLimitedMstMissionViewList_b__1__,
    0LL);
  v31 = System_Linq_Enumerable__ThenBy_object__int_(
          v29,
          (System_Func_TSource__TKey__o *)v30,
          (const MethodInfo_2FC81C8 *)Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__int___);
  v32 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_MasterMissionComponent_MasterMissionInfoItem__long__TypeInfo);
  System_Func_object__long____ctor(
    v32,
    v15,
    Method_ScrPlayerStatus___c__DisplayClass202_0__SortLimitedMstMissionViewList_b__2__,
    0LL);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v31,
                                                               (System_Func_TSource__TKey__o *)v32,
                                                               (const MethodInfo_2FC8294 *)Method_System_Linq_Enumerable_ThenBy_MasterMissionComponent_MasterMissionInfoItem__long___);
  v34 = (System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v33,
                                                                                             (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_MasterMissionComponent_MasterMissionInfoItem___);
  *list = v34;
  sub_1C13CC8((PartyOrganizationUtility_o *)list, (int64_t)v34, v35, v36, v37, v38, v39, v40);
}


void __fastcall ScrPlayerStatus__Start(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *mTargetFsm; // x21
  Il2CppObject *Component_object; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB1873 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB1873 = 1;
  }
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0LL, mTargetFsm, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.mTargetFsm,
      (int64_t)Component_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
}


void __fastcall ScrPlayerStatus__Update(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  UserGameEntity_o *userGameEntity; // x0
  ScrPlayerBP_o *rpRoot; // x8
  const MethodInfo *v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int32_t CommandSpell; // w20
  TerminalPramsManager_c *v15; // x0
  struct ScrPlayerStatus_OverwriteMasterInfo_o *overwriteMasterInfo; // x8
  int32_t targetWarId_k__BackingField; // w21
  struct ScrPlayerStatus_OverwriteMasterInfo_o *v18; // x8
  int spellCount_k__BackingField; // w9
  char v20; // w21
  void *v21; // x1
  struct System_String_o *spellIconId_k__BackingField; // x1
  const MethodInfo *v23; // x2
  struct ScrPlayerStatus_OverwriteMasterInfo_o *v24; // x8
  struct ScrPlayerStatus_OverwriteMasterInfo_o *v25; // x8
  const MethodInfo *v26; // x1
  int64_t Time; // x1
  const MethodInfo *v28; // x2

  if ( (byte_4BB1875 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB1875 = 1;
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
        ScrPlayerBP__UpdateRpStatus(rpRoot, v5);
      }
      userGameEntity = (UserGameEntity_o *)this->fields.rpRoot;
      if ( !userGameEntity )
LABEL_73:
        sub_1C13F80(userGameEntity, v5);
      ScrPlayerBP__UpdateRpTimeStr((ScrPlayerBP_o *)userGameEntity, v5);
    }
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_73;
    CommandSpell = UserGameEntity__getCommandSpell(userGameEntity, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB142C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
      byte_4BB142C = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( v15->static_fields->_DispState_k__BackingField == 2 )
    {
      overwriteMasterInfo = this->fields.overwriteMasterInfo;
      if ( !overwriteMasterInfo )
        goto LABEL_29;
      targetWarId_k__BackingField = overwriteMasterInfo->fields._targetWarId_k__BackingField;
      if ( !v15->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v15);
      if ( !byte_4BB1250 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
        byte_4BB1250 = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( targetWarId_k__BackingField != *(_DWORD *)(*(_QWORD *)&userGameEntity->fields.mana + 4LL) )
LABEL_29:
        ScrPlayerStatus__SetOverwriteMasterInfo(this, v5);
      v18 = this->fields.overwriteMasterInfo;
      if ( !v18 )
        goto LABEL_73;
      spellCount_k__BackingField = v18->fields._spellCount_k__BackingField;
      if ( spellCount_k__BackingField >= 0 )
        CommandSpell = v18->fields._spellCount_k__BackingField;
      if ( (spellCount_k__BackingField & 0x80000000) != 0 || this->fields.isRevocationSpell )
      {
        userGameEntity = (UserGameEntity_o *)System_String__op_Inequality(
                                               this->fields.overwriteSpellIconId,
                                               v18->fields._spellIconId_k__BackingField,
                                               0LL);
        v18 = this->fields.overwriteMasterInfo;
        if ( !v18 )
          goto LABEL_73;
        v20 = (char)userGameEntity;
      }
      else
      {
        v20 = 1;
      }
      spellIconId_k__BackingField = v18->fields._spellIconId_k__BackingField;
      this->fields.overwriteSpellIconId = spellIconId_k__BackingField;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.overwriteSpellIconId,
        (int64_t)spellIconId_k__BackingField,
        (int64_t)v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BB18D9 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
        byte_4BB18D9 = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*(_BYTE *)(*(_QWORD *)&userGameEntity->fields.mana + 160LL) )
      {
        v24 = this->fields.overwriteMasterInfo;
        if ( !this->fields.isOverwriteFaceTexture )
        {
          if ( !v24 )
            goto LABEL_73;
LABEL_71:
          ScrPlayerStatus__ResetMasterFaceTexture(this, v24->fields._masterIconId_k__BackingField, v23);
          this->fields.isOverwriteFaceTexture = 1;
          if ( (v20 & 1) != 0 )
            goto LABEL_64;
LABEL_63:
          if ( this->fields.CommandSpellRest == CommandSpell )
          {
LABEL_67:
            ScrPlayerStatus__mfSetStoneAndFragment(this, v5);
            ScrPlayerStatus__UpdateMstMissionLb(this, v26);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__getTime(0LL);
            ScrPlayerStatus__checkLocationEventBtnShows(this, Time, v28);
            return;
          }
          goto LABEL_64;
        }
        if ( !v24 )
          goto LABEL_73;
        if ( this->fields.overwriteMasterIconId != v24->fields._masterIconId_k__BackingField )
          goto LABEL_71;
      }
    }
    else
    {
      if ( !v15->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v15);
      if ( !byte_4BB18D9 )
      {
        sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
        byte_4BB18D9 = 1;
      }
      userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        userGameEntity = (UserGameEntity_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*(_BYTE *)(*(_QWORD *)&userGameEntity->fields.mana + 160LL) && this->fields.isOverwriteFaceTexture )
      {
        ScrPlayerStatus__ResetMasterFaceTexture(this, 0, v8);
        this->fields.isOverwriteFaceTexture = 0;
      }
      if ( this->fields.isRevocationSpell )
      {
        v21 = StringLiteral_1/*""*/;
        this->fields.overwriteSpellIconId = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields.overwriteSpellIconId,
          (int64_t)v21,
          (int64_t)v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        goto LABEL_64;
      }
      v20 = 0;
    }
    if ( (v20 & 1) == 0 )
      goto LABEL_63;
LABEL_64:
    v25 = this->fields.overwriteMasterInfo;
    if ( v25 )
    {
      userGameEntity = (UserGameEntity_o *)this->fields.commandSpellComp;
      if ( userGameEntity )
      {
        this->fields.isRevocationSpell = CommandSpellIconComponent__SetRevocationData(
                                           (CommandSpellIconComponent_o *)userGameEntity,
                                           this->fields.userGameEntity,
                                           v25->fields._spellIconId_k__BackingField,
                                           v25->fields._spellCount_k__BackingField,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *userGameEntity; // x0
  struct UserGameEntity_o *v8; // x8
  int32_t actMax; // w8
  float v10; // s0
  float mfApParOld; // s1
  UnityEngine_Object_o *mcApTimeP; // x20
  TransitionCalculator_float__o *apRecoverStrAlphaCalculator; // x0
  UILabel_o *v14; // x20
  const MethodInfo *v15; // x2
  float ApRecoverStrUpdateTimer; // s8
  float v17; // s8
  TitleInfoControl_c *v18; // x0
  struct AlphaTransitionCalculator_o *v19; // x8

  if ( (byte_4BB189D & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&TitleInfoControl_TypeInfo, v4);
    sub_1C13D24(&Method_TransitionCalculator_float__Update__, v5);
    sub_1C13D24(&Method_TransitionCalculator_float__get_Current__, v6);
    byte_4BB189D = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_30;
  userGameEntity = (UserGameEntity_o *)UserGameEntity__getAct(userGameEntity, 0LL);
  v8 = this->fields.userGameEntity;
  if ( !v8 )
    goto LABEL_30;
  actMax = v8->fields.actMax;
  this->fields.miApNow = (int)userGameEntity;
  this->fields.miApMax = actMax;
  if ( (int)userGameEntity < 1 )
    v10 = 0.0;
  else
    v10 = (float)(int)userGameEntity / (float)actMax;
  mfApParOld = this->fields.mfApParOld;
  this->fields.mfApPar = v10;
  if ( v10 != mfApParOld )
  {
    this->fields.mfApParOld = v10;
    ScrPlayerStatus__UpdateApStatus(this, method);
  }
  mcApTimeP = (UnityEngine_Object_o *)this->fields.mcApTimeP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcApTimeP, 0LL, 0LL) )
  {
    apRecoverStrAlphaCalculator = (TransitionCalculator_float__o *)this->fields.apRecoverStrAlphaCalculator;
    if ( apRecoverStrAlphaCalculator )
    {
      TransitionCalculator_float___Update(
        apRecoverStrAlphaCalculator,
        (const MethodInfo_38EBDBC *)Method_TransitionCalculator_float__Update__);
      v14 = this->fields.mcApTimeP;
      userGameEntity = (UserGameEntity_o *)ScrPlayerStatus__mfGetApRecoverTimeStr(this, this->fields.isDispMax, v15);
      if ( v14 )
      {
        UILabel__set_text(v14, (System_String_o *)userGameEntity, 0LL);
        userGameEntity = (UserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( userGameEntity )
        {
          if ( !CommonUI__maskFadeIsDisp((CommonUI_o *)userGameEntity, 0LL) )
          {
            ApRecoverStrUpdateTimer = this->fields.ApRecoverStrUpdateTimer;
            v17 = ApRecoverStrUpdateTimer + UnityEngine_Time__get_deltaTime(0LL);
            this->fields.ApRecoverStrUpdateTimer = v17;
            v18 = TitleInfoControl_TypeInfo;
            if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
              v18 = TitleInfoControl_TypeInfo;
            }
            if ( v17 >= v18->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
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
            v19 = this->fields.apRecoverStrAlphaCalculator;
            if ( v19 )
            {
              userGameEntity = (UserGameEntity_o *)this->fields.mcApTimeP;
              if ( userGameEntity )
              {
                (*(void (__fastcall **)(UserGameEntity_o *, void *, float))&userGameEntity->klass[1]._1.byval_arg.bits)(
                  userGameEntity,
                  userGameEntity->klass[1]._1.this_arg.data,
                  v19->fields._Current_k__BackingField);
                return;
              }
            }
          }
        }
      }
LABEL_30:
      sub_1C13F80(userGameEntity, method);
    }
  }
}


void __fastcall ScrPlayerStatus__UpdateApStatus(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *mcApSldP; // x20
  __int64 v8; // x1
  UIProgressBar_o *v9; // x0
  UnityEngine_Object_o *mcApSldP2; // x20
  float mfApPar; // s0
  float v12; // s1
  bool v13; // cc
  float v14; // s0
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

  if ( (byte_4BB189E & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v3);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v4);
    sub_1C13D24(&StringLiteral_16081/*"[ <length> | <percentage> | left | center | right | top | bottom ] | [ [ <length> | <percentage>  | left | center | right ] && [ <length> | <percentage>  | top | center | bottom ] ] <length>?"*/, v5);
    sub_1C13D24(&StringLiteral_1123/*"/"*/, v6);
    byte_4BB189E = 1;
  }
  mcApSldP = (UnityEngine_Object_o *)this->fields.mcApSldP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcApSldP, 0LL, 0LL) )
  {
    v9 = (UIProgressBar_o *)this->fields.mcApSldP;
    if ( !v9 )
      goto LABEL_32;
    UIProgressBar__set_value(v9, fminf(this->fields.mfApPar, 1.0), 0LL);
  }
  mcApSldP2 = (UnityEngine_Object_o *)this->fields.mcApSldP2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcApSldP2, 0LL, 0LL) )
  {
    v9 = (UIProgressBar_o *)this->fields.mcApSldP2;
    if ( !v9 )
      goto LABEL_32;
    mfApPar = this->fields.mfApPar;
    v12 = mfApPar + -1.0;
    v13 = mfApPar <= 1.0;
    v14 = 0.0;
    if ( !v13 )
      v14 = v12;
    UIProgressBar__set_value(v9, v14, 0LL);
    v9 = (UIProgressBar_o *)this->fields.mcApSldP2;
    if ( !v9 )
LABEL_32:
      sub_1C13F80(v9, v8);
    value = UIProgressBar__get_value(v9, 0LL);
    mcApStrP = this->fields.mcApStrP;
    if ( value <= 0.0 )
    {
      v21 = System_Int32__ToString((int)this + 648, 0LL);
      v22 = System_Int32__ToString((int)this + 652, 0LL);
      v9 = (UIProgressBar_o *)System_String__Concat_62979204(v21, (System_String_o *)StringLiteral_1123/*"/"*/, v22, 0LL);
      if ( !mcApStrP )
        goto LABEL_32;
    }
    else
    {
      v17 = ScrPlayerStatus_TypeInfo;
      if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
        v17 = ScrPlayerStatus_TypeInfo;
      }
      AP_OVER_TXT_COLOR_STR = v17->static_fields->AP_OVER_TXT_COLOR_STR;
      v19 = System_Int32__ToString((int)this + 648, 0LL);
      v20 = System_Int32__ToString((int)this + 652, 0LL);
      v9 = (UIProgressBar_o *)System_String__Concat_62981208(
                                AP_OVER_TXT_COLOR_STR,
                                v19,
                                (System_String_o *)StringLiteral_16081/*"[ <length> | <percentage> | left | center | right | top | bottom ] | [ [ <length> | <percentage>  | left | center | right ] && [ <length> | <percentage>  | top | center | bottom ] ] <length>?"*/,
                                v20,
                                0LL);
      if ( !mcApStrP )
        goto LABEL_32;
    }
    UILabel__set_text(mcApStrP, (System_String_o *)v9, 0LL);
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BAF374 = 1;
  }
  v9 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = (UIProgressBar_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v9[1].fields.mTrans->klass;
  if ( !klass )
    goto LABEL_32;
  v24 = *(_QWORD *)&klass->_2.static_fields_size;
  if ( !v24 )
    goto LABEL_32;
  v9 = *(UIProgressBar_o **)(v24 + 296);
  if ( !v9 )
    goto LABEL_32;
  QuestBoardListViewManager__RequestConsumeColorReset((QuestBoardListViewManager_o *)v9, 0LL);
}


void __fastcall ScrPlayerStatus__UpdateCompleteMissionIconVisibility(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalSceneComponent_c *v11; // x0
  ScrTerminalListTop_o *mInstance; // x0
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8
  QuestRewardTokenAction_c *klass; // x8
  _BOOL4 v16; // w23
  System_Collections_Generic_IEnumerable_TSource__o *mTitleInfo; // x20
  ScrPlayerStatus___c_c *v18; // x0
  System_Func_object__bool__o *_9__237_0; // x21
  Il2CppObject *v20; // x22
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x0

  if ( (byte_4BB18BF & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___, v5);
    sub_1C13D24(&System_Func_EventEntity_ScriptData__bool__TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__, v7);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
    sub_1C13D24(&Method_ScrPlayerStatus___c__UpdateCompleteMissionIconVisibility_b__237_0__, v9);
    sub_1C13D24(&ScrPlayerStatus___c_TypeInfo, v10);
    byte_4BB18BF = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
    byte_4BAF374 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (ScrTerminalListTop_o *)v11->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_37;
  if ( TerminalSceneComponent__IsMapActive((TerminalSceneComponent_o *)mInstance, 0LL)
    || (currentCompleteMissionList = this->fields.currentCompleteMissionList) == 0LL
    || currentCompleteMissionList->fields._size < 1 )
  {
    LOBYTE(v16) = 0;
  }
  else
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, method);
      byte_4BAF374 = 1;
    }
    mInstance = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      mInstance = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = mInstance->fields.boardGameTokenAction->klass;
    if ( !klass )
      goto LABEL_37;
    mInstance = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
    if ( !mInstance )
      goto LABEL_37;
    v16 = !ScrTerminalListTop__IsBlankEarthActive(mInstance, 0LL);
  }
  if ( !this->fields.completeMissionEventId )
    goto LABEL_36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mInstance = (ScrTerminalListTop_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !mInstance
    || (mInstance = (ScrTerminalListTop_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)mInstance,
                                              this->fields.completeMissionEventId,
                                              (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_37:
    sub_1C13F80(mInstance, method);
  }
  mTitleInfo = (System_Collections_Generic_IEnumerable_TSource__o *)mInstance->fields.mTitleInfo;
  v18 = ScrPlayerStatus___c_TypeInfo;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    v18 = ScrPlayerStatus___c_TypeInfo;
  }
  _9__237_0 = (System_Func_object__bool__o *)v18->static_fields->__9__237_0;
  if ( !_9__237_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = ScrPlayerStatus___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__237_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_EventEntity_ScriptData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__237_0,
      v20,
      Method_ScrPlayerStatus___c__UpdateCompleteMissionIconVisibility_b__237_0__,
      0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__237_0 = (struct System_Func_EventEntity_ScriptData__bool__o *)_9__237_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__237_0,
      (int64_t)_9__237_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
          mTitleInfo,
          (System_Func_TSource__bool__o *)_9__237_0,
          (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity_ScriptData___);
  if ( v28 )
    LOBYTE(v16) = v16 && LOBYTE(v28[5].klass) == 0;
LABEL_36:
  ScrPlayerStatus__ShowCompleteMissionContents(this, v16, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrPlayerStatus__UpdateDailyMissionInfoItem(
        ScrPlayerStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t currentMissionIndex; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *currentMissionList; // x0
  System_Collections_Generic_List_object__o *v11; // x20
  MstMissionEntity_o *items; // x20
  const MethodInfo *v13; // x2
  int size; // w8
  System_Collections_Generic_List_object__o *v15; // x21
  unsigned int v16; // w25
  __int64 v17; // x29
  Il2CppObject *MasterData_object; // x23
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v19; // x21
  int32_t v20; // w22
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  currentMissionIndex = index;
  if ( (byte_4BB18B2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&index);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__set_Item__, v7);
    sub_1C13D24(&NetworkManager_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB18B2 = 1;
  }
  entity = 0LL;
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( (currentMissionIndex & 0x80000000) != 0 )
    currentMissionIndex = this->fields.currentMissionIndex;
  if ( !currentMissionList )
    goto LABEL_32;
  currentMissionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      currentMissionList,
                                                                      currentMissionIndex,
                                                                      (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
  if ( !currentMissionList )
    goto LABEL_32;
  v11 = currentMissionList;
  currentMissionList = (System_Collections_Generic_List_object__o *)currentMissionList->fields._items;
  if ( !currentMissionList )
    goto LABEL_32;
  if ( MstMissionEntity__getMissionType((MstMissionEntity_o *)currentMissionList, 0LL) == 3 )
  {
    items = (MstMissionEntity_o *)v11->fields._items;
    currentMissionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !currentMissionList )
      goto LABEL_32;
    currentMissionList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)currentMissionList,
                                                                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !items )
      goto LABEL_32;
    if ( !currentMissionList )
      goto LABEL_32;
    currentMissionList = (System_Collections_Generic_List_object__o *)EventMissionMaster__getDailyMasterMissionList(
                                                                        (EventMissionMaster_o *)currentMissionList,
                                                                        items->fields.id,
                                                                        0LL);
    if ( !currentMissionList )
      goto LABEL_32;
    size = currentMissionList->fields._size;
    v15 = currentMissionList;
    if ( size >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= size )
          sub_1C13F88(currentMissionList, *(_QWORD *)&index);
        v17 = *((_QWORD *)&v15->fields._syncRoot + (int)v16);
        currentMissionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !currentMissionList )
          break;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)currentMissionList,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BAF1E5 )
        {
          sub_1C13D24(&NetworkManager_TypeInfo, *(_QWORD *)&index);
          byte_4BAF1E5 = 1;
        }
        currentMissionList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          currentMissionList = (System_Collections_Generic_List_object__o *)NetworkManager_TypeInfo;
        }
        if ( !v17 || !MasterData_object )
          break;
        currentMissionList = (System_Collections_Generic_List_object__o *)UserEventMissionMaster__TryGetEntity(
                                                                            (UserEventMissionMaster_o *)MasterData_object,
                                                                            &entity,
                                                                            *(_QWORD *)(*(_QWORD *)&currentMissionList[4].fields._size
                                                                                      + 64LL),
                                                                            *(_DWORD *)(v17 + 16),
                                                                            0LL);
        if ( ((unsigned __int8)currentMissionList & 1) != 0 )
        {
          currentMissionList = (System_Collections_Generic_List_object__o *)entity;
          if ( !entity )
            break;
          currentMissionList = (System_Collections_Generic_List_object__o *)UserEventMissionEntity__IsTodayMissionData(
                                                                              entity,
                                                                              0LL);
          if ( ((unsigned __int8)currentMissionList & 1) != 0 )
            return;
        }
        size = v15->fields._size;
        if ( (int)++v16 >= size )
          goto LABEL_29;
      }
LABEL_32:
      sub_1C13F80(currentMissionList, *(_QWORD *)&index);
    }
LABEL_29:
    v19 = this->fields.currentMissionList;
    v20 = this->fields.currentMissionIndex;
    currentMissionList = (System_Collections_Generic_List_object__o *)ScrPlayerStatus__GetDailyMissionInfoItem(
                                                                        this,
                                                                        items,
                                                                        v13);
    if ( !v19 )
      goto LABEL_32;
    System_Collections_Generic_List_object___set_Item(
      (System_Collections_Generic_List_object__o *)v19,
      v20,
      (Il2CppObject *)currentMissionList,
      (const MethodInfo_362CF50 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__set_Item__);
  }
}


void __fastcall ScrPlayerStatus__UpdateGiftBoxNum(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mcGiftButtonP; // x20
  __int64 v4; // x1
  GiftButtonCtrl_o *v5; // x0

  if ( (byte_4BB187E & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB187E = 1;
  }
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mcGiftButtonP, 0LL, 0LL) )
  {
    v5 = this->fields.mcGiftButtonP;
    if ( !v5 )
      sub_1C13F80(0LL, v4);
    GiftButtonCtrl__InvalidateGiftInfo(v5, 0LL);
  }
}


void __fastcall ScrPlayerStatus__UpdateMstMissionLb(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  TransitionCalculator_float__o *missionAlertAlphaCalculator; // x0
  __int64 Instance; // x0
  float mstMissionIconUpdateTimer; // s8
  float deltaTime; // s0
  float v15; // s8
  const MethodInfo *v16; // x2
  int32_t NextMstMissionIndex; // w0
  const MethodInfo *v18; // x2
  Il2CppObject *Item; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  struct AlphaTransitionCalculator_o *v22; // x8
  TerminalPramsManager_c *v23; // x0
  UnityEngine_Behaviour_o *masterMissionAnimationLabelsTween; // x20
  TerminalPramsManager_c *v25; // x0
  int32_t DispState_k__BackingField; // w8
  UnityEngine_Behaviour_o *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x8
  UnityEngine_Transform_o *v30; // x19

  if ( (byte_4BB18AF & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v6);
    sub_1C13D24(&Method_TransitionCalculator_float__Update__, v7);
    sub_1C13D24(&Method_TransitionCalculator_float__get_Current__, v8);
    byte_4BB18AF = 1;
  }
  if ( ScrPlayerStatus__GetEnabledMstMissionCount(this, method) >= 2 )
  {
    missionAlertAlphaCalculator = (TransitionCalculator_float__o *)this->fields.missionAlertAlphaCalculator;
    if ( !missionAlertAlphaCalculator )
      return;
    TransitionCalculator_float___Update(
      missionAlertAlphaCalculator,
      (const MethodInfo_38EBDBC *)Method_TransitionCalculator_float__Update__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    if ( !CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      if ( !CommonUI__IsActive_MasterMission((CommonUI_o *)Instance, 0LL) )
      {
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_75;
        if ( !CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0LL) )
        {
          mstMissionIconUpdateTimer = this->fields.mstMissionIconUpdateTimer;
          deltaTime = UnityEngine_Time__get_deltaTime(0LL);
          Instance = (__int64)this->fields.currentMissionList;
          v15 = mstMissionIconUpdateTimer + deltaTime;
          this->fields.mstMissionIconUpdateTimer = v15;
          if ( !Instance )
            goto LABEL_75;
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                this->fields.currentMissionIndex,
                                (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
          if ( !Instance )
            goto LABEL_75;
          Instance = *(_QWORD *)(Instance + 16);
          if ( !Instance )
            goto LABEL_75;
          if ( v15 >= MstMissionEntity__GetMissionIconDisplaySec((MstMissionEntity_o *)Instance, 0LL) )
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
      NextMstMissionIndex = ScrPlayerStatus__GetNextMstMissionIndex(this, this->fields.currentMissionIndex, v16);
      this->fields.currentMissionIndex = NextMstMissionIndex;
      ScrPlayerStatus__UpdateDailyMissionInfoItem(this, NextMstMissionIndex, v18);
      Instance = (__int64)this->fields.currentMissionList;
      if ( !Instance )
        goto LABEL_75;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               this->fields.currentMissionIndex,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      ScrPlayerStatus__ChangeViewMstMissionLb(this, (MasterMissionComponent_MasterMissionInfoItem_o *)Item, v20);
      ScrPlayerStatus__InitCompleteMissionLb(this, v21);
    }
    v22 = this->fields.missionAlertAlphaCalculator;
    if ( !v22 )
      goto LABEL_75;
    Instance = (__int64)this->fields.masterMissionAlertPanel;
    if ( !Instance )
      goto LABEL_75;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL),
      v22->fields._Current_k__BackingField);
  }
  else
  {
    ScrPlayerStatus__InitMstMissionLb(this, v9);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB142C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB142C = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( !v23->static_fields->_DispState_k__BackingField )
    return;
  masterMissionAnimationLabelsTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionAnimationLabelsTween;
  if ( !v23->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v23);
  if ( !byte_4BB142C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB142C = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  DispState_k__BackingField = v25->static_fields->_DispState_k__BackingField;
  if ( DispState_k__BackingField == 2 )
    v27 = 0LL;
  else
    v27 = masterMissionAnimationLabelsTween;
  if ( DispState_k__BackingField == 2 )
    goto LABEL_52;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v10);
    byte_4BAF374 = 1;
  }
  Instance = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v28 = **(_QWORD **)(Instance + 184);
  if ( !v28 )
    goto LABEL_75;
  Instance = *(_QWORD *)(v28 + 256);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
    {
      Instance = 0LL;
    }
    else
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v10);
        byte_4BAF374 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v29 = **(_QWORD **)(Instance + 184);
      if ( !v29 )
        goto LABEL_75;
      Instance = *(_QWORD *)(v29 + 240);
      if ( !Instance )
        goto LABEL_75;
      Instance = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)Instance, 0LL);
    }
    masterMissionAnimationLabelsTween = v27;
    if ( !v27 )
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
      v30 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4BAEDA1 )
      {
        Instance = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v10);
        byte_4BAEDA1 = 1;
      }
      if ( v30 )
      {
        UnityEngine_Transform__set_localPosition(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        return;
      }
    }
LABEL_75:
    sub_1C13F80(Instance, v10);
  }
}


void __fastcall ScrPlayerStatus__UpdatePanel(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BB18BC & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB18BC = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v5 )
  {
    if ( !Component_object )
      sub_1C13F80(v5, v6);
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
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *mcGiftButtonP; // x21

  if ( (byte_4BB18C7 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, isDecide);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB18C7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseMultiGiftGetDialg(Instance, 0LL);
  this->fields.isLocationBusy = 0;
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C13F80(Instance, v7);
    }
  }
LABEL_11:
  this->fields.mIsAcceptedLocationEvent = 1;
}


void __fastcall ScrPlayerStatus___ExitCompleteMission_b__185_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  TerminalSceneComponent_c *v14; // x0
  TerminalSceneComponent_c *v15; // x0

  if ( (byte_4BB18C9 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus__ExitCompleteMission_b__185_1__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v6);
    byte_4BB18C9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseCompleteMission(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.completeMissionIconSprite;
  if ( !Instance )
    goto LABEL_21;
  CompleteMissionSprite__ReleaseEventUI((CompleteMissionSprite_o *)Instance, 0LL);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v9;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitCompleteMission_b__185_1__, 0LL);
  if ( !v11 )
    goto LABEL_21;
  CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BAF374 = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v14->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_21;
  TerminalSceneComponent__playBgm_43397292((TerminalSceneComponent_o *)Instance, 0LL);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BAF374 = 1;
  }
  v15 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v15 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (CommonUI_o *)v15->static_fields->mInstance;
  if ( !Instance )
LABEL_21:
    sub_1C13F80(Instance, v8);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0LL);
}


void __fastcall ScrPlayerStatus___ExitCompleteMission_b__185_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterCloseCompleteMission, 0LL);
}


void __fastcall ScrPlayerStatus___ExitMasterMission_b__184_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  TerminalSceneComponent_c *v14; // x0

  if ( (byte_4BB18C8 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_ScrPlayerStatus__ExitMasterMission_b__184_1__, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v6);
    byte_4BB18C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0LL);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v9;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ScrPlayerStatus__ExitMasterMission_b__184_1__, 0LL);
  if ( !v11 )
    goto LABEL_15;
  CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BAF374 = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (Il2CppObject *)v14->static_fields->mInstance;
  if ( !Instance )
LABEL_15:
    sub_1C13F80(Instance, v8);
  TerminalSceneComponent__SetDispStandServant((TerminalSceneComponent_o *)Instance, 1, 0LL);
}


void __fastcall ScrPlayerStatus___ExitMasterMission_b__184_1(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterCloseMasterMission, 0LL);
}


void __fastcall ScrPlayerStatus___ExitMasterProfile_b__166_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x0
  AvalonSceneManager_c *v12; // x8
  CommonUI_o *v13; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x20
  Il2CppObject *v16; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  TerminalSceneComponent_c *v24; // x0

  if ( (byte_4BB18C5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v5);
    sub_1C13D24(&Method_ScrPlayerStatus___c__ExitMasterProfile_b__166_1__, v6);
    sub_1C13D24(&ScrPlayerStatus___c_TypeInfo, v7);
    byte_4BB18C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseMasterProfile((CommonUI_o *)Instance, 0LL);
  ScrPlayerStatus__mfInitUserData(this, v10);
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  v13 = (CommonUI_o *)v11;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  Instance = ScrPlayerStatus___c_TypeInfo;
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    Instance = ScrPlayerStatus___c_TypeInfo;
  }
  v15 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 32LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ScrPlayerStatus___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v15 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v15, v16, Method_ScrPlayerStatus___c__ExitMasterProfile_b__166_1__, 0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__166_1 = v15;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__166_1, (int64_t)v15, v18, v19, v20, v21, v22, v23);
  }
  if ( !v13 )
    goto LABEL_21;
  CommonUI__maskFadein(v13, DEFAULT_FADE_TIME, v15, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BAF374 )
  {
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v9);
    byte_4BAF374 = 1;
  }
  v24 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  Instance = v24->static_fields->mInstance;
  if ( !Instance )
LABEL_21:
    sub_1C13F80(Instance, v9);
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

  if ( (byte_4BB18C3 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    byte_4BB18C3 = 1;
  }
  if ( result == 2 )
    ActionExtensions__Call(this->fields.mRecoverAct, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v6);
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

  ScrPlayerStatus__OpenMasterMission_35470808(this, 0, v2);
}


void __fastcall ScrPlayerStatus___OnClickLimitedMissionInfoBtn_b__157_0(
        ScrPlayerStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_35470808(this, 3, v2);
}


void __fastcall ScrPlayerStatus___OnClickMasterMissionBtn_b__149_0(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x2

  if ( (byte_4BB18C2 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_ScrPlayerStatus_UpdateGiftBoxNum__, v3);
    byte_4BB18C2 = 1;
  }
  v4 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ScrPlayerStatus_UpdateGiftBoxNum__, 0LL);
  this->fields.mAfterCloseMasterMission = v4;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.mAfterCloseMasterMission,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ScrPlayerStatus__OpenMasterMission_35470808(this, -1, v11);
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

  if ( (byte_4BB18C4 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    byte_4BB18C4 = 1;
  }
  if ( result == 2 )
    ActionExtensions__Call(this->fields.mRecoverAct, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v6);
  CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ScrPlayerStatus___OnClickWeeklyMissionInfoBtn_b__156_0(
        ScrPlayerStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrPlayerStatus__OpenMasterMission_35470808(this, 1, v2);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ScrPlayerStatus_c *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4BB18C6 & 1) == 0 )
  {
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, result);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BB18C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v7);
  CommonUI__CloseLocationTermsOfUseDlg((CommonUI_o *)Instance, 0LL);
  if ( result )
  {
    v8 = ScrPlayerStatus_TypeInfo;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
      v8 = ScrPlayerStatus_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v8->static_fields->LOCATION_TOS_AGREED_KEY, 1, 0LL);
    ScrPlayerStatus__SetLocationCheck(this, v9);
  }
  else
  {
    this->fields.isLocationBusy = 0;
  }
}


void __fastcall ScrPlayerStatus__cbfGift_Push(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScrTerminalMap_o *v6; // x0
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_4BB1879 & 1) == 0 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v3);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&StringLiteral_3144/*"BREAK_ON_BATTLE_WAIT"*/, v4);
    byte_4BB1879 = 1;
  }
  if ( ScrPlayerStatus__IsTouchable(this, method) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BAF374 )
    {
      sub_1C13D24(&TerminalSceneComponent_TypeInfo, v5);
      byte_4BAF374 = 1;
    }
    v6 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v6->fields.subRootGimmickP->klass;
    if ( !klass || (v6 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
      sub_1C13F80(v6, v5);
    ScrTerminalMap__DestroyEventActionEffect(v6, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    TerminalPramsManager__PlaySystemSE(0, 0LL);
    ScrPlayerStatus__mfCallFsmEvent(v2, (System_String_o *)StringLiteral_3144/*"BREAK_ON_BATTLE_WAIT"*/, v8);
  }
}


void __fastcall ScrPlayerStatus__cbfSlide_In(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BB1877 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_12377/*"SKILL_E_ALL_PLAYER"*/, method);
    byte_4BB1877 = 1;
  }
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_12377/*"SKILL_E_ALL_PLAYER"*/, v2);
}


void __fastcall ScrPlayerStatus__cbfSlide_Out(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BB1878 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_12378/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, method);
    byte_4BB1878 = 1;
  }
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_12378/*"SKILL_LVDISP_ENABLE_SINGLE_TXT"*/, v2);
}


void __fastcall ScrPlayerStatus__cbfStatus_Init(
        ScrPlayerStatus_o *this,
        UnityEngine_GameObject_o *oFsmObject,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4BB1897 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5854/*"EVENT_VS_GAUGE_REST_TIME"*/, oFsmObject);
    byte_4BB1897 = 1;
  }
  ScrPlayerStatus__mfInitUserData(this, (const MethodInfo *)oFsmObject);
  ScrPlayerStatus__SetupGradeIcon(this, v4);
  ScrPlayerStatus__mfCallFsmEvent(this, (System_String_o *)StringLiteral_5854/*"EVENT_VS_GAUGE_REST_TIME"*/, v5);
}


void __fastcall ScrPlayerStatus__checkLocationEventBtnShows(
        ScrPlayerStatus_o *this,
        int64_t now,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Int64_array *mNextLocationEventTerm; // x8
  struct System_Int64_array *v9; // x8
  unsigned int max_length; // w9
  __int64 v11; // x8
  UnityEngine_Object_o *MyFsmP; // x20
  System_String_o *ActiveStateName; // x0
  UnityEngine_GameObject_o *mLocationBtnRoot; // x8

  v4 = this;
  if ( (byte_4BB18B9 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, now);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v6);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&StringLiteral_13206/*"StartRigidModule"*/, v7);
    byte_4BB18B9 = 1;
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
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB142C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, now);
      byte_4BB142C = 1;
    }
    this = (ScrPlayerStatus_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (ScrPlayerStatus_o *)TerminalPramsManager_TypeInfo;
    }
    if ( **(_DWORD **)&this->fields.mIsEnableRpRecoverBtn != 1 )
      goto LABEL_33;
    v9 = v4->fields.mNextLocationEventTerm;
    if ( !v9 )
      goto LABEL_38;
    max_length = v9->max_length;
    if ( max_length )
    {
      if ( v9->m_Items[0] >= now )
        goto LABEL_33;
      if ( max_length > 1 )
      {
        if ( v9->m_Items[1] > now && !v4->fields.mIsAcceptedLocationEvent )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BAF374 )
          {
            sub_1C13D24(&TerminalSceneComponent_TypeInfo, now);
            byte_4BAF374 = 1;
          }
          this = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            this = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
          }
          v11 = **(_QWORD **)&this->fields.mIsEnableRpRecoverBtn;
          if ( !v11 )
            goto LABEL_38;
          this = *(ScrPlayerStatus_o **)(v11 + 264);
          if ( !this )
            goto LABEL_38;
          MyFsmP = (UnityEngine_Object_o *)ScrTerminalMap__mfGetMyFsmP((ScrTerminalMap_o *)this, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ScrPlayerStatus_o *)UnityEngine_Object__op_Inequality(MyFsmP, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !MyFsmP )
              goto LABEL_38;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
            this = (ScrPlayerStatus_o *)System_String__op_Equality(
                                          ActiveStateName,
                                          (System_String_o *)StringLiteral_13206/*"StartRigidModule"*/,
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
        sub_1C13F80(this, now);
      }
    }
LABEL_37:
    sub_1C13F88(this, now);
  }
}


void __fastcall ScrPlayerStatus__locationRequest(
        ScrPlayerStatus_o *this,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  GeoLocation_LocationDelegate_o *v23; // x20

  if ( (byte_4BB1892 & 1) == 0 )
  {
    sub_1C13D24(&GeoLocation_TypeInfo, eventEnt);
    sub_1C13D24(&GeoLocation_LocationDelegate_TypeInfo, v5);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__0__, v6);
    sub_1C13D24(&ScrPlayerStatus___c__DisplayClass175_0_TypeInfo, v7);
    byte_4BB1892 = 1;
  }
  v8 = sub_1C13F70(ScrPlayerStatus___c__DisplayClass175_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = eventEnt;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)eventEnt, v17, v18, v19, v20, v21, v22);
  v23 = (GeoLocation_LocationDelegate_o *)sub_1C13F70(GeoLocation_LocationDelegate_TypeInfo);
  GeoLocation_LocationDelegate___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__0__,
    0LL);
  if ( !GeoLocation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(GeoLocation_TypeInfo);
  GeoLocation__GetLocation(v23, (UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScrPlayerStatus__mfCallFsmEvent(
        ScrPlayerStatus_o *this,
        System_String_o *sEventStr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct PlayMakerFSM_o **p_mTargetFsm; // x20
  UnityEngine_Object_o *mTargetFsm; // x22
  Il2CppObject *Component_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_4BB1894 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, sEventStr);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB1894 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0LL, mTargetFsm, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.mTargetFsm,
      (int64_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0LL, v15, 0LL) )
  {
    Fsm = *p_mTargetFsm;
    if ( !*p_mTargetFsm || (Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL)) == 0LL )
      sub_1C13F80(Fsm, v16);
    HutongGames_PlayMaker_Fsm__Event_64982800((HutongGames_PlayMaker_Fsm_o *)Fsm, sEventStr, 0LL);
  }
}


void __fastcall ScrPlayerStatus__mfCheckCompleteMission(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentCompleteMissionList; // x8
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentCompleteMissionList; // x21
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x0
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x22
  MstMissionEntity_array *EnableMissions; // x24
  int max_length; // w8
  UserEventMissionMaster_o *v32; // x25
  unsigned int v33; // w28
  int32_t v34; // w20
  MstMissionEntity_o *v35; // x26
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  DataManager_o *v38; // x23
  int32_t MissionClearCount_35490848; // w27
  int32_t m_CancellationTokenSource; // w25
  __int64 v41; // x8
  int32_t v42; // w24
  MasterMissionComponent_MasterMissionInfoItem_o *v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v53; // x8
  __int64 v54; // x8
  struct NoticeNumberComponent_o **p_mCompleteMissionNoticeNumber; // x21
  UnityEngine_Object_o *mCompleteMissionNoticeNumber; // x22
  Il2CppObject *cNoticeNumberPrefab; // x22
  Il2CppObject *v58; // x22
  Il2CppObject *Component_object; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  UIWidget_o *v66; // x22
  struct NoticeNumberComponent_o *v67; // x8
  UILabel_o *numberLabel; // x22
  const MethodInfo *v69; // x1

  if ( (byte_4BB18A8 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v9);
    sub_1C13D24(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v10);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BB18A8 = 1;
  }
  currentCompleteMissionList = this->fields.currentCompleteMissionList;
  p_currentCompleteMissionList = &this->fields.currentCompleteMissionList;
  if ( currentCompleteMissionList )
  {
    size = currentCompleteMissionList->fields._size;
    v18 = currentCompleteMissionList->fields._version + 1;
    currentCompleteMissionList->fields._size = 0;
    currentCompleteMissionList->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentCompleteMissionList->fields._items, 0, size, 0LL);
  }
  else
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentCompleteMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v19;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.currentCompleteMissionList,
      (int64_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_52;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_52;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v34 = 0;
  }
  else
  {
    v32 = (UserEventMissionMaster_o *)Instance;
    v33 = 0;
    v34 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
        goto LABEL_53;
      v35 = EnableMissions->m_Items[v33];
      if ( !v35 )
        goto LABEL_52;
      if ( !MasterData_object )
        goto LABEL_52;
      Instance = (DataManager_o *)EventMissionMaster__getCompleteMissionList(
                                    (EventMissionMaster_o *)MasterData_object,
                                    v35->fields.id,
                                    0LL);
      if ( !Instance )
        goto LABEL_52;
      v38 = Instance;
      if ( Instance->fields.m_CancellationTokenSource )
      {
        MissionClearCount_35490848 = ScrPlayerStatus__GetMissionClearCount_35490848(
                                       (ScrPlayerStatus_o *)Instance,
                                       (EventMissionEntity_array *)Instance,
                                       v36,
                                       v37);
        v34 += MissionClearCount_35490848;
        Instance = (DataManager_o *)MstMissionEntity__isActiveNow(v35, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_36;
    }
    if ( !v32 )
      goto LABEL_52;
    Instance = (DataManager_o *)UserEventMissionMaster__getAchiveMissionNum(v32, v35->fields.id, 0LL);
    m_CancellationTokenSource = (int32_t)v38->fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_53;
    v41 = *(_QWORD *)&v38->fields._DispLog;
    if ( !v41 )
      goto LABEL_52;
    v42 = (int)Instance;
    Instance = (DataManager_o *)this->fields.completeMissionIconSprite;
    if ( !Instance )
      goto LABEL_52;
    CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v41 + 28), 0LL);
    v43 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C13F70(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    MasterMissionComponent_MasterMissionInfoItem___ctor(
      v43,
      v35,
      m_CancellationTokenSource,
      MissionClearCount_35490848,
      v42,
      0LL);
    Instance = (DataManager_o *)*p_currentCompleteMissionList;
    if ( !*p_currentCompleteMissionList )
      goto LABEL_52;
    v50 = *(_QWORD *)&Instance->fields.m_CachedPtr;
    v51 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
    ++HIDWORD(Instance->fields.m_CancellationTokenSource);
    if ( !v50 )
      goto LABEL_52;
    m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v50 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)v43,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = v50 + 8 * m_CancellationTokenSource_low;
      LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v53 + 32) = v43;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v53 + 32), (int64_t)v43, v44, v45, v46, v47, v48, v49);
    }
    if ( !LODWORD(v38->fields.m_CancellationTokenSource) )
LABEL_53:
      sub_1C13F88(Instance, v28);
    v54 = *(_QWORD *)&v38->fields._DispLog;
    if ( !v54 )
      goto LABEL_52;
    if ( *(_DWORD *)(v54 + 24) == 6 )
      this->fields.completeMissionEventId = *(_DWORD *)(v54 + 28);
  }
LABEL_36:
  Instance = (DataManager_o *)this->fields.completeMissionIcon;
  if ( !Instance )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  p_mCompleteMissionNoticeNumber = &this->fields.mCompleteMissionNoticeNumber;
  mCompleteMissionNoticeNumber = (UnityEngine_Object_o *)this->fields.mCompleteMissionNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mCompleteMissionNoticeNumber, 0LL, 0LL) )
  {
    cNoticeNumberPrefab = (Il2CppObject *)this->fields.cNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v58 = UnityEngine_Object__Instantiate_object_(
            cNoticeNumberPrefab,
            (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34717732(
      (UnityEngine_GameObject_o *)v58,
      this->fields.completeMissionNoticeRoot,
      0LL);
    if ( v58 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v58,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      *p_mCompleteMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.mCompleteMissionNoticeNumber,
        (int64_t)Component_object,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
      if ( *p_mCompleteMissionNoticeNumber )
      {
        Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
        v66 = (UIWidget_o *)Instance;
        if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
        if ( v66 )
        {
          UIWidget__set_depth(v66, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
          UIWidget__set_width(v66, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
          UIWidget__set_height(v66, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
          v67 = *p_mCompleteMissionNoticeNumber;
          if ( *p_mCompleteMissionNoticeNumber )
          {
            numberLabel = v67->fields.numberLabel;
            if ( numberLabel )
            {
              UIWidget__set_depth(
                (UIWidget_o *)v67->fields.numberLabel,
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
    sub_1C13F80(Instance, v28);
  }
LABEL_50:
  Instance = (DataManager_o *)*p_mCompleteMissionNoticeNumber;
  if ( !*p_mCompleteMissionNoticeNumber )
    goto LABEL_52;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v34, 0LL);
  ScrPlayerStatus__InitCompleteMissionLb(this, v69);
}


void __fastcall ScrPlayerStatus__mfCheckMasterMission(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  __int64 v20; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int32_t size; // w2
  int v23; // w9
  System_Collections_Generic_List_object__o *v24; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x23
  DataManager_o *Instance; // x0
  Il2CppObject *v33; // x1
  Il2CppObject *MasterData_object; // x24
  MstMissionEntity_array *EnableMissions; // x25
  int max_length; // w8
  UserEventMissionMaster_o *v37; // x19
  unsigned int v38; // w22
  int32_t v39; // w20
  Il2CppClass **v40; // x8
  MstMissionEntity_o *v41; // x27
  const MethodInfo *v42; // x2
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  DataManager_o *v45; // x29
  int32_t MissionClearCount; // w28
  int32_t AchiveMissionNum; // w0
  int64_t startedAt; // x8
  int32_t m_CancellationTokenSource; // w19
  int32_t v50; // w21
  MasterMissionComponent_MasterMissionInfoItem_o *v51; // x29
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  PartyOrganizationUtility_o *v62; // x0
  int32_t m_CancellationTokenSource_high; // w9
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x10
  __int64 v66; // x11
  Il2CppClass **v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  EventMissionEntity_array *v70; // x28
  ScrPlayerStatus_o *v71; // x0
  int32_t v72; // w19
  int32_t v73; // w21
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t v76; // w29
  MasterMissionComponent_MasterMissionInfoItem_o *v77; // x28
  struct MasterMissionComponent_MasterMissionInfoItem_array *v78; // x8
  _QWORD *v79; // x9
  __int64 m_CancellationTokenSource_low; // x10
  Il2CppClass **v81; // x8
  __int64 v82; // x8
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v83; // x21
  System_Predicate_object__o *v84; // x22
  Il2CppObject *v85; // x19
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  UnityEngine_Object_o *mMasterMissionNoticeNumber; // x19
  struct NoticeNumberComponent_o **p_mMasterMissionNoticeNumber; // x21
  Il2CppObject *mNoticeNumberPrefab; // x19
  Il2CppObject *v96; // x19
  Il2CppObject *Component_object; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  UIWidget_o *v104; // x22
  struct NoticeNumberComponent_o *v105; // x8
  UILabel_o *numberLabel; // x22
  UnityEngine_Behaviour_o *masterMissionTween; // x20
  __int64 v108; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  System_Collections_Generic_List_object__o *v110; // [xsp+0h] [xbp-80h]
  UserEventMissionMaster_o *v111; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **list; // [xsp+10h] [xbp-70h]

  if ( (byte_4BB18A7 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v11);
    sub_1C13D24(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v12);
    sub_1C13D24(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v13);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v15);
    sub_1C13D24(&System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v16);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C13D24(&Method_ScrPlayerStatus___c__mfCheckMasterMission_b__198_0__, v19);
    sub_1C13D24(&ScrPlayerStatus___c_TypeInfo, v20);
    byte_4BB18A7 = 1;
  }
  currentMissionList = this->fields.currentMissionList;
  this->fields.mstMissionStartsAt = 0LL;
  list = &this->fields.currentMissionList;
  if ( currentMissionList )
  {
    size = currentMissionList->fields._size;
    v23 = currentMissionList->fields._version + 1;
    currentMissionList->fields._size = 0;
    currentMissionList->fields._version = v23;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentMissionList->fields._items, 0, size, 0LL);
  }
  else
  {
    v24 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    this->fields.currentMissionList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v24;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.currentMissionList,
      (int64_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  v110 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v110,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_MstMissionMaster___)) == 0LL
    || (EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMissionMaster___),
        !EnableMissions) )
  {
LABEL_90:
    sub_1C13F80(Instance, v33);
  }
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v37 = (UserEventMissionMaster_o *)Instance;
    v38 = 0;
    v39 = 0;
    v111 = (UserEventMissionMaster_o *)Instance;
    while ( 2 )
    {
      if ( v38 >= max_length )
        sub_1C13F88(Instance, v33);
      v40 = &EnableMissions->obj.klass + (int)v38;
      v41 = (MstMissionEntity_o *)v40[4];
      if ( v41 )
      {
        Instance = (DataManager_o *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v40[4], 0LL);
        switch ( (int)Instance )
        {
          case 2:
            if ( !MasterData_object )
              goto LABEL_90;
            Instance = (DataManager_o *)EventMissionMaster__getWeeklyMasterMissionList(
                                          (EventMissionMaster_o *)MasterData_object,
                                          v41->fields.id,
                                          0LL);
            if ( !Instance )
              goto LABEL_90;
            v45 = Instance;
            if ( !Instance->fields.m_CancellationTokenSource )
              goto LABEL_52;
            MissionClearCount = ScrPlayerStatus__GetMissionClearCount(
                                  (ScrPlayerStatus_o *)Instance,
                                  (EventMissionEntity_array *)Instance,
                                  v43,
                                  v44);
            v39 += MissionClearCount;
            Instance = (DataManager_o *)MstMissionEntity__isOpenNow(v41, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              goto LABEL_52;
            if ( !v37 )
              goto LABEL_90;
            AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(v37, v41->fields.id, 0LL);
            startedAt = v41->fields.startedAt;
            m_CancellationTokenSource = (int32_t)v45->fields.m_CancellationTokenSource;
            v50 = AchiveMissionNum;
            if ( startedAt > this->fields.mstMissionStartsAt )
              this->fields.mstMissionStartsAt = startedAt;
            v51 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C13F70(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
            MasterMissionComponent_MasterMissionInfoItem___ctor(
              v51,
              v41,
              m_CancellationTokenSource,
              MissionClearCount,
              v50,
              0LL);
            if ( !v110 )
              goto LABEL_90;
            items = v110->fields._items;
            v37 = v111;
            v59 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++v110->fields._version;
            if ( !items )
              goto LABEL_90;
            v60 = v110->fields._size;
            if ( (unsigned int)v60 < items->max_length )
            {
              v61 = &items->obj.klass + v60;
              v110->fields._size = v60 + 1;
              v61[4] = (Il2CppClass *)v51;
              v62 = (PartyOrganizationUtility_o *)(v61 + 4);
              v33 = (Il2CppObject *)v51;
              goto LABEL_47;
            }
            v82 = v59[4];
            Instance = (DataManager_o *)v110;
            v33 = (Il2CppObject *)v51;
            goto LABEL_51;
          case 3:
            Instance = (DataManager_o *)ScrPlayerStatus__GetDailyMissionInfoItem(this, v41, v42);
            if ( !Instance )
              goto LABEL_52;
            if ( !v31 )
              goto LABEL_90;
            m_CancellationTokenSource_high = HIDWORD(Instance->fields.m_CancellationTokenSource);
            v64 = v31->fields._items;
            v33 = (Il2CppObject *)Instance;
            v65 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++v31->fields._version;
            if ( !v64 )
              goto LABEL_90;
            v66 = v31->fields._size;
            v39 += m_CancellationTokenSource_high;
            if ( (unsigned int)v66 < v64->max_length )
            {
              v67 = &v64->obj.klass + v66;
              v31->fields._size = v66 + 1;
              v67[4] = (Il2CppClass *)v33;
              v62 = (PartyOrganizationUtility_o *)(v67 + 4);
              goto LABEL_47;
            }
            v82 = v65[4];
            Instance = (DataManager_o *)v31;
            goto LABEL_51;
          case 4:
            if ( !MasterData_object )
              goto LABEL_90;
            Instance = (DataManager_o *)EventMissionMaster__getExtraMissionList(
                                          (EventMissionMaster_o *)MasterData_object,
                                          v41->fields.id,
                                          0LL);
            if ( !Instance )
              goto LABEL_90;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)Instance,
                                          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
            if ( !Instance )
              goto LABEL_90;
            if ( Instance->fields.m_CancellationTokenSource )
            {
              Instance = (DataManager_o *)ScrPlayerStatus__GetMissionClearCount(
                                            (ScrPlayerStatus_o *)Instance,
                                            (EventMissionEntity_array *)Instance,
                                            v68,
                                            v69);
              v39 += (int)Instance;
            }
            goto LABEL_52;
          case 5:
            if ( !MasterData_object )
              goto LABEL_90;
            Instance = (DataManager_o *)EventMissionMaster__getLimitedMissionList(
                                          (EventMissionMaster_o *)MasterData_object,
                                          v41->fields.id,
                                          0LL);
            if ( !Instance )
              goto LABEL_90;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___ToArray(
                                          (System_Collections_Generic_List_object__o *)Instance,
                                          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
            if ( !Instance )
              goto LABEL_90;
            v70 = (EventMissionEntity_array *)Instance;
            if ( !Instance->fields.m_CancellationTokenSource )
              goto LABEL_52;
            if ( !v37 )
              goto LABEL_90;
            v71 = (ScrPlayerStatus_o *)UserEventMissionMaster__getAchiveMissionNum(v37, v41->fields.id, 0LL);
            v72 = v70->max_length;
            v73 = (int)v71;
            v76 = ScrPlayerStatus__GetMissionClearCount(v71, v70, v74, v75);
            v77 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C13F70(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
            MasterMissionComponent_MasterMissionInfoItem___ctor(v77, v41, v72, v76, v73, 0LL);
            Instance = (DataManager_o *)*list;
            if ( !*list )
              goto LABEL_90;
            v78 = *(struct MasterMissionComponent_MasterMissionInfoItem_array **)&Instance->fields.m_CachedPtr;
            v79 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
            ++HIDWORD(Instance->fields.m_CancellationTokenSource);
            if ( !v78 )
              goto LABEL_90;
            m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
            v37 = v111;
            v39 += v76;
            if ( (unsigned int)m_CancellationTokenSource_low >= v78->max_length )
            {
              v82 = v79[4];
              v33 = (Il2CppObject *)v77;
LABEL_51:
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Instance,
                v33,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v82 + 192) + 112LL));
            }
            else
            {
              v81 = &v78->obj.klass + m_CancellationTokenSource_low;
              LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              v81[4] = (Il2CppClass *)v77;
              v62 = (PartyOrganizationUtility_o *)(v81 + 4);
              v33 = (Il2CppObject *)v77;
LABEL_47:
              sub_1C13CC8(v62, (int64_t)v33, v52, v53, v54, v55, v56, v57);
            }
LABEL_52:
            max_length = EnableMissions->max_length;
            if ( (int)++v38 >= max_length )
              goto LABEL_55;
            continue;
          default:
            goto LABEL_52;
        }
      }
      goto LABEL_90;
    }
  }
  v39 = 0;
LABEL_55:
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
  ScrPlayerStatus__SortLimitedMstMissionViewList(list, (const MethodInfo *)v33);
  Instance = (DataManager_o *)*list;
  if ( !*list )
    goto LABEL_90;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v31,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
  Instance = (DataManager_o *)*list;
  if ( !*list )
    goto LABEL_90;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v110,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__AddRange__);
  Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
  v83 = *list;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
  }
  v84 = *(System_Predicate_object__o **)(*(_QWORD *)&Instance[1].fields._DispLog + 48LL);
  if ( !v84 )
  {
    if ( !LODWORD(Instance[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)ScrPlayerStatus___c_TypeInfo;
    }
    v85 = **(Il2CppObject ***)&Instance[1].fields._DispLog;
    v84 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Predicate_object____ctor(v84, v85, Method_ScrPlayerStatus___c__mfCheckMasterMission_b__198_0__, 0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__198_0 = (struct System_Predicate_MasterMissionComponent_MasterMissionInfoItem__o *)v84;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__198_0, (int64_t)v84, v87, v88, v89, v90, v91, v92);
  }
  if ( !v83 )
    goto LABEL_90;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v83,
    (System_Predicate_T__o *)v84,
    (const MethodInfo_362E828 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
  p_mMasterMissionNoticeNumber = &this->fields.mMasterMissionNoticeNumber;
  mMasterMissionNoticeNumber = (UnityEngine_Object_o *)this->fields.mMasterMissionNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mMasterMissionNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v96 = UnityEngine_Object__Instantiate_object_(
            mNoticeNumberPrefab,
            (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent_34717732(
      (UnityEngine_GameObject_o *)v96,
      this->fields.masterMissionNoticeRoot,
      0LL);
    if ( !v96 )
      goto LABEL_90;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v96,
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mMasterMissionNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.mMasterMissionNoticeNumber,
      (int64_t)Component_object,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    Instance = (DataManager_o *)*p_mMasterMissionNoticeNumber;
    if ( !*p_mMasterMissionNoticeNumber )
      goto LABEL_90;
    Instance = (DataManager_o *)NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)Instance, 0LL);
    v104 = (UIWidget_o *)Instance;
    if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    if ( !v104 )
      goto LABEL_90;
    UIWidget__set_depth(v104, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_DEPTH, 0LL);
    UIWidget__set_width(v104, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_WIDTH, 0LL);
    UIWidget__set_height(v104, ScrPlayerStatus_TypeInfo->static_fields->NOTICE_NUMBER_BADGE_HEIGHT, 0LL);
    v105 = *p_mMasterMissionNoticeNumber;
    if ( !*p_mMasterMissionNoticeNumber )
      goto LABEL_90;
    numberLabel = v105->fields.numberLabel;
    if ( !numberLabel )
      goto LABEL_90;
    UIWidget__set_depth(
      (UIWidget_o *)v105->fields.numberLabel,
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
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, v39, 0LL);
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
    if ( !byte_4BAEDA1 )
    {
      sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v108);
      byte_4BAEDA1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  ScrPlayerStatus__InitMstMissionLb(this, (const MethodInfo *)v33);
}


void __fastcall ScrPlayerStatus__mfFaceMngCallback(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 mcFaceObjP; // x0
  int v5; // w8
  __int64 v6; // x20
  unsigned int v7; // w23
  __int64 v8; // x8
  UIWidget_o *v9; // x22
  System_String_o *name; // x0
  UnityEngine_Transform_o *v11; // x22

  if ( (byte_4BB189C & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITexture___, method);
    sub_1C13D24(&StringLiteral_3342/*"Blue color ("*/, v3);
    byte_4BB189C = 1;
  }
  mcFaceObjP = (__int64)this->fields.mcFaceObjP;
  if ( !mcFaceObjP )
    goto LABEL_17;
  mcFaceObjP = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__50202144(
                          (UnityEngine_GameObject_o *)mcFaceObjP,
                          (const MethodInfo_2FE0620 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UITexture___);
  if ( !mcFaceObjP )
    goto LABEL_17;
  v5 = *(_DWORD *)(mcFaceObjP + 24);
  v6 = mcFaceObjP;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
        sub_1C13F88(mcFaceObjP, method);
      v8 = v6 + 8LL * (int)v7;
      v9 = *(UIWidget_o **)(v8 + 32);
      if ( !v9 )
        break;
      name = UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v8 + 32), 0LL);
      mcFaceObjP = System_String__op_Equality(name, (System_String_o *)StringLiteral_3342/*"Blue color ("*/, 0LL);
      if ( (mcFaceObjP & 1) != 0 )
      {
        UIWidget__SetDimensions(v9, 350, 350, 0LL);
        UIWidget__set_pivot(v9, 4, 0LL);
        mcFaceObjP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
        if ( !mcFaceObjP )
          break;
        mcFaceObjP = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mcFaceObjP, 0LL);
        v11 = (UnityEngine_Transform_o *)mcFaceObjP;
        if ( !byte_4BAEDA1 )
        {
          mcFaceObjP = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, method);
          byte_4BAEDA1 = 1;
        }
        if ( !v11 )
          break;
        UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      }
      v5 = *(_DWORD *)(v6 + 24);
      if ( (int)++v7 >= v5 )
        goto LABEL_16;
    }
LABEL_17:
    sub_1C13F80(mcFaceObjP, method);
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

  if ( (byte_4BB18A3 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, isGetMax);
    byte_4BB18A3 = 1;
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
    sub_1C13F80(userGameEntity, isGetMax);
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
  __int64 v3; // x1
  UserGameEntity_o *userGameEntity; // x0
  System_String_o *v5; // x20
  int32_t CommandSpell; // w0
  BalanceConfig_c *v7; // x8
  int32_t CommandSpellMax; // w8
  _BOOL8 CmdSpellInfo; // x0
  const MethodInfo *v10; // x2
  int64_t time; // [xsp+0h] [xbp-30h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB18A6 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v3);
    byte_4BB18A6 = 1;
  }
  count = 0;
  time = 0LL;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_10;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  CommandSpell = UserGameEntity__getCommandSpell(userGameEntity, 0LL);
  this->fields.miSpellNow = CommandSpell;
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
      CmdSpellInfo = UserGameEntity__getCmdSpellInfo(userGameEntity, &count, &time, 0LL);
      return ScrPlayerStatus__GetTimeCommandSpellRecoverStr((ScrPlayerStatus_o *)CmdSpellInfo, time, v10);
    }
LABEL_10:
    sub_1C13F80(userGameEntity, method);
  }
  return v5;
}


int32_t __fastcall ScrPlayerStatus__mfGetFsmValueInt(
        ScrPlayerStatus_o *this,
        System_String_o *sValueStr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct PlayMakerFSM_o **p_mTargetFsm; // x20
  UnityEngine_Object_o *mTargetFsm; // x22
  Il2CppObject *Component_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_4BB1896 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, sValueStr);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB1896 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0LL, mTargetFsm, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.mTargetFsm,
      (int64_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (UnityEngine_Object_o *)*p_mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(0LL, v15, 0LL) )
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
    sub_1C13F80(Fsm, v16);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.userGameEntity, (int64_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
  ScrPlayerStatus__SetAllParam(this, this->fields.userGameEntity, v10);
  nextExpDialog = this->fields.nextExpDialog;
  this->fields.mtIsUpdate = 1;
  if ( !nextExpDialog )
    sub_1C13F80(0LL, v11);
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


void __fastcall ScrPlayerStatus__mfSetFsmValueInt(
        ScrPlayerStatus_o *this,
        System_String_o *sValueStr,
        int32_t iValueInt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct PlayMakerFSM_o **p_mTargetFsm; // x21
  UnityEngine_Object_o *mTargetFsm; // x23
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Object_o *v17; // x22
  __int64 v18; // x1
  PlayMakerFSM_o *Fsm; // x0

  if ( (byte_4BB1895 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, sValueStr);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB1895 = 1;
  }
  p_mTargetFsm = &this->fields.mTargetFsm;
  mTargetFsm = (UnityEngine_Object_o *)this->fields.mTargetFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(0LL, mTargetFsm, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.mTargetFsm = (struct PlayMakerFSM_o *)Component_object;
    sub_1C13CC8(
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(0LL, v17, 0LL) )
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
      sub_1C13F80(Fsm, v18);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Int64_array *mNextLocationEventTerm; // x8
  unsigned int max_length; // w9
  _QWORD *p_mNextLocationEventTerm; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x9
  struct System_Int64_array *v13; // x8
  ScrPlayerStatus_o *v14; // x20
  struct PlayMakerFSM_o *mTargetFsm; // x9
  unsigned int v16; // w10
  il2cpp_array_size_t v17; // w9
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct PlayMakerFSM_o *v24; // x8
  unsigned int v25; // w9
  Il2CppObject *MasterData_object; // x21
  struct PlayMakerFSM_o *v27; // x8
  __int64 v28; // x9
  int64_t v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  v3 = now;
  v4 = this;
  if ( (byte_4BB18B8 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, now);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMaster___, v5);
    sub_1C13D24(&long___TypeInfo, v6);
    sub_1C13D24(&NetworkManager_TypeInfo, v7);
    this = (ScrPlayerStatus_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BB18B8 = 1;
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
    if ( mNextLocationEventTerm->m_Items[1] < v3 )
    {
LABEL_8:
      this = (ScrPlayerStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_47;
      this = (ScrPlayerStatus_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !this )
        goto LABEL_47;
      this = (ScrPlayerStatus_o *)EventMaster__GetEnableEntityList((EventMaster_o *)this, 20, 0, 0, 0LL);
      if ( !this )
        goto LABEL_47;
      p_mNextLocationEventTerm = &v4->fields.mNextLocationEventTerm;
      m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
      v13 = v4->fields.mNextLocationEventTerm;
      v14 = this;
      if ( m_CancellationTokenSource )
      {
        if ( v13 )
        {
          if ( !(_DWORD)m_CancellationTokenSource )
            goto LABEL_48;
          mTargetFsm = this->fields.mTargetFsm;
          if ( !mTargetFsm )
            goto LABEL_47;
          v16 = v13->max_length;
          if ( !v16 )
            goto LABEL_48;
          v13->m_Items[0] = (int64_t)mTargetFsm[1].fields.m_CancellationTokenSource;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) || v16 <= 1 )
            goto LABEL_48;
          v13->m_Items[1] = (int64_t)mTargetFsm[1].fields.fsm;
        }
        else
        {
          this = (ScrPlayerStatus_o *)sub_1C13DCC(long___TypeInfo, 2LL);
          if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
            goto LABEL_48;
          v24 = v14->fields.mTargetFsm;
          if ( !v24 )
            goto LABEL_47;
          now = (int64_t)this;
          if ( !this )
            goto LABEL_47;
          v25 = (unsigned int)this->fields.m_CancellationTokenSource;
          if ( !v25 )
            goto LABEL_48;
          this->fields.mTargetFsm = (struct PlayMakerFSM_o *)v24[1].fields.m_CancellationTokenSource;
          if ( !LODWORD(v14->fields.m_CancellationTokenSource) || v25 <= 1 )
            goto LABEL_48;
          this->fields.mcFaceObjP = (struct UnityEngine_GameObject_o *)v24[1].fields.fsm;
          *p_mNextLocationEventTerm = this;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v4->fields.mNextLocationEventTerm,
            (int64_t)this,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
        }
        this = (ScrPlayerStatus_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_47;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BAF1E5 )
        {
          sub_1C13D24(&NetworkManager_TypeInfo, now);
          byte_4BAF1E5 = 1;
        }
        this = (ScrPlayerStatus_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (ScrPlayerStatus_o *)NetworkManager_TypeInfo;
        }
        if ( LODWORD(v14->fields.m_CancellationTokenSource) )
        {
          v27 = v14->fields.mTargetFsm;
          if ( v27 && MasterData_object )
          {
            v28 = 20LL;
            if ( *((int *)&v27->fields.UnityEngine_Behaviour_Fields + 1) <= 0 )
              v28 = 16LL;
            this = (ScrPlayerStatus_o *)UserEventMaster__GetEntityDefinitely(
                                          (UserEventMaster_o *)MasterData_object,
                                          *(_QWORD *)(*(_QWORD *)&this->fields.mIsEnableRpRecoverBtn + 64LL),
                                          *(_DWORD *)((char *)&v27->klass + v28),
                                          0LL);
            if ( this )
            {
              v4->fields.mIsAcceptedLocationEvent = SHIDWORD(this->fields.m_CancellationTokenSource) > 0;
              return;
            }
          }
LABEL_47:
          sub_1C13F80(this, now);
        }
LABEL_48:
        sub_1C13F88(this, now);
      }
      if ( v13 )
      {
        v17 = v13->max_length;
        if ( !v17 )
          goto LABEL_48;
        v13->m_Items[0] = 0LL;
        if ( v17 == 1 )
          goto LABEL_48;
        v13->m_Items[1] = 0LL;
      }
      else
      {
        v29 = sub_1C13DCC(long___TypeInfo, 2LL);
        *p_mNextLocationEventTerm = v29;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.mNextLocationEventTerm, v29, v30, v31, v32, v33, v34, v35);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *commandSpellWindow; // x21
  struct CommandSpellWindowComponent_o **p_commandSpellWindow; // x20
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *v16; // x21
  Il2CppObject *commandSpellWindowPrefab; // x21
  Il2CppObject *v18; // x21
  int32_t layer; // w0
  Il2CppObject *Component_object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *v27; // x0
  CommandSpellWindowComponent_o *v28; // x21
  struct CommandSpellWindowComponent_o *v29; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BB18B6 & 1) == 0 )
  {
    sub_1C13D24(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, *(_QWORD *)&iSpellNow);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___, v7);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    sub_1C13D24(&Method_ScrPlayerStatus_OnCloseSpellWindow__, v10);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v11);
    byte_4BB18B6 = 1;
  }
  this->fields.miSpellNow = iSpellNow;
  this->fields.miSpellMax = iSpellMax;
  commandSpellWindow = (UnityEngine_Object_o *)this->fields.commandSpellWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(v16, 0LL);
  }
  commandSpellWindowPrefab = (Il2CppObject *)this->fields.commandSpellWindowPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__Instantiate_object_(
          commandSpellWindowPrefab,
          (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  GameObjectExtensions__SetLayerRecursively((UnityEngine_GameObject_o *)v18, layer, 0LL);
  if ( !v18 )
    goto LABEL_23;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v18,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_CommandSpellWindowComponent___);
  *p_commandSpellWindow = (struct CommandSpellWindowComponent_o *)Component_object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.commandSpellWindow,
    (int64_t)Component_object,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  gameObject = (UnityEngine_Component_o *)*p_commandSpellWindow;
  if ( !*p_commandSpellWindow )
    goto LABEL_23;
  v27 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
  GameObjectExtensions__SafeSetParent_34717732(v27, this->fields.commandSpellWindowRoot, 0LL);
  gameObject = (UnityEngine_Component_o *)ScrPlayerStatus_TypeInfo;
  v28 = this->fields.commandSpellWindow;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
  if ( !v28
    || (CommandSpellWindowComponent__InitializeCommandSpellDepth(
          v28,
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
        (v29 = *p_commandSpellWindow) == 0LL) )
  {
LABEL_23:
    sub_1C13F80(gameObject, v14);
  }
  v29->fields.mode = 0;
  v30 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1C13F70(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v30,
    (Il2CppObject *)this,
    (intptr_t)Method_ScrPlayerStatus_OnCloseSpellWindow__,
    0LL);
  v29->fields.callback_close = v30;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v29->fields.callback_close, (int64_t)v30, v31, v32, v33, v34, v35, v36);
}


void __fastcall ScrPlayerStatus__mfSetStoneAndFragment(ScrPlayerStatus_o *this, const MethodInfo *method)
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
  __int64 v20; // x1
  __int64 v21; // x1
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v26; // x22
  UserItemEntity_o *EntityDefinitely; // x21
  Il2CppObject *Master_object; // x22
  int64_t v29; // x23
  int32_t num; // w26
  int32_t stone; // w23
  int32_t v32; // w21
  int32_t MaxNum; // w20
  bool _38831432; // w0
  UILabel_o *stoneCountNumLb; // x22
  UILabel_o *v36; // x22
  UILabel_o *stoneFragmentCountNumLb; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject **v41; // x8
  Il2CppObject *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  UILabel_o *stormPodCountNumLb; // x21
  Il2CppObject *v46; // x22
  System_String_o *v47; // x23
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  UILabel_o *v52; // x20
  UISprite_o *stormPodIcon; // x19
  int32_t v54; // [xsp+0h] [xbp-60h] BYREF
  int32_t v55; // [xsp+4h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB18B7 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&BalanceConfig_TypeInfo, v3);
    sub_1C13D24(&ClassBoardUtility_TypeInfo, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMaster_ItemMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMaster_UserItemMaster___, v8);
    sub_1C13D24(&DataManager_TypeInfo, v9);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_1C13D24(&int_TypeInfo, v11);
    sub_1C13D24(&LocalizationManager_TypeInfo, v12);
    sub_1C13D24(&NetworkManager_TypeInfo, v13);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C13D24(&TutorialFlag_TypeInfo, v16);
    sub_1C13D24(&StringLiteral_19693/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/, v17);
    sub_1C13D24(&StringLiteral_19695/*"fake"*/, v18);
    sub_1C13D24(&StringLiteral_21234/*"it"*/, v19);
    sub_1C13D24(&StringLiteral_3954/*"COST_ICON_INFO"*/, v20);
    sub_1C13D24(&StringLiteral_16280/*"[voice "*/, v21);
    byte_4BB18B7 = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v26 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v24);
    byte_4BAF1E5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object || !v26 )
    goto LABEL_66;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)v26,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       HIDWORD(MasterData_object[5].monitor),
                       0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v24);
    byte_4BAF1E5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v29 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Master_object )
    goto LABEL_66;
  UserItemMaster__TryGetEntity(
    (UserItemMaster_o *)Master_object,
    &entity,
    v29,
    BalanceConfig_TypeInfo->static_fields->stormPodItemId,
    0LL);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                BalanceConfig_TypeInfo->static_fields->stormPodItemId,
                                (const MethodInfo_3238624 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  v32 = EntityDefinitely->fields.num;
  MaxNum = ItemEntity__GetMaxNum((ItemEntity_o *)Instance, 0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38831432 = TutorialFlag__Get_38831432(101, 0LL);
  stoneCountNumLb = this->fields.stoneCountNumLb;
  if ( !_38831432 )
    stone = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneCountNumLb )
    goto LABEL_66;
  UILabel__set_text(stoneCountNumLb, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)ScrPlayerStatus_TypeInfo;
  v36 = this->fields.stoneCountNumLb;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
  if ( !v36 )
    goto LABEL_66;
  UILabel__SetCondensedScale(v36, ScrPlayerStatus_TypeInfo->static_fields->STONE_COUNT_MAX_WIDTH, 0, 0LL);
  stoneFragmentCountNumLb = this->fields.stoneFragmentCountNumLb;
  Instance = (DataManager_o *)LocalizationManager__GetNumberFormat(v32, 0LL);
  if ( !stoneFragmentCountNumLb )
    goto LABEL_66;
  UILabel__set_text(stoneFragmentCountNumLb, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.stoneFragmentCountNumLb;
  if ( !Instance )
    goto LABEL_66;
  UILabel__SetCondensedScale(
    (UILabel_o *)Instance,
    ScrPlayerStatus_TypeInfo->static_fields->STONE_COUNT_MAX_WIDTH,
    0,
    0LL);
  Instance = (DataManager_o *)this->fields.stormPodIcon;
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
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
              v41 = (Il2CppObject **)&StringLiteral_19695/*"fake"*/;
              if ( num >= MaxNum )
                v41 = (Il2CppObject **)&StringLiteral_19693/*"failed to get Custom/OutlineEffectShader from Shader.Find"*/;
              v42 = *v41;
              v55 = num;
              v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v38, v39, v40);
              v44 = System_String__Format_62982316((System_String_o *)StringLiteral_16280/*"[voice "*/, v42, v43, 0LL);
              stormPodCountNumLb = this->fields.stormPodCountNumLb;
              v46 = (Il2CppObject *)v44;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3954/*"COST_ICON_INFO"*/, 0LL);
              v54 = MaxNum;
              v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v48, v49, v50);
              Instance = (DataManager_o *)System_String__Format_62982316(v47, v46, v51, 0LL);
              if ( stormPodCountNumLb )
              {
                UILabel__set_text(stormPodCountNumLb, (System_String_o *)Instance, 0LL);
                Instance = (DataManager_o *)ScrPlayerStatus_TypeInfo;
                v52 = this->fields.stormPodCountNumLb;
                if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
                if ( v52 )
                {
                  UILabel__SetCondensedScale(
                    v52,
                    ScrPlayerStatus_TypeInfo->static_fields->STORMPOD_COUNT_MAX_WIDTH,
                    0,
                    0LL);
                  stormPodIcon = this->fields.stormPodIcon;
                  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  AtlasManager__SetEventSprite(stormPodIcon, (System_String_o *)StringLiteral_21234/*"it"*/, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_1C13F80(Instance, v24);
  }
}


void __fastcall ScrPlayerStatus__mfUpdatePrams(ScrPlayerStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *mcLevelStrP; // x20
  System_String_o *transform; // x0
  const MethodInfo *v10; // x1
  System_String_o *v11; // x1
  BalanceConfig_c *v12; // x0
  UILabel_o *mcLevelMaxP; // x20
  System_String_o *v14; // x0
  ScrPlayerStatus_c *v15; // x8
  UnityEngine_Transform_o *v16; // x20
  struct UILabel_o *v17; // x9
  struct ScrPlayerStatus_StaticFields *static_fields; // x8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  struct ScrPlayerStatus_OverwriteMasterInfo_o *overwriteMasterInfo; // x8
  UnityEngine_Object_o *mcGiftButtonP; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  int64_t recoverTime; // [xsp+8h] [xbp-38h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB18A1 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&ScrPlayerStatus_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_1123/*"/"*/, v6);
    sub_1C13D24(&StringLiteral_1/*""*/, v7);
    byte_4BB18A1 = 1;
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
    v11 = transform;
  else
    v11 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(mcLevelStrP, v11, 0LL);
  v12 = BalanceConfig_TypeInfo;
  mcLevelMaxP = this->fields.mcLevelMaxP;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  v14 = System_Int32__ToString((unsigned int)v12->static_fields + 24, 0LL);
  transform = System_String__Concat_62967944((System_String_o *)StringLiteral_1123/*"/"*/, v14, 0LL);
  if ( !mcLevelMaxP )
    goto LABEL_32;
  UILabel__set_text(mcLevelMaxP, transform, 0LL);
  transform = (System_String_o *)this->fields.mcLevelMaxP;
  if ( !transform )
    goto LABEL_32;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  v15 = ScrPlayerStatus_TypeInfo;
  v16 = (UnityEngine_Transform_o *)transform;
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
    v15 = ScrPlayerStatus_TypeInfo;
  }
  v17 = this->fields.mcLevelStrP;
  if ( !v17 )
    goto LABEL_32;
  if ( !v16 )
    goto LABEL_32;
  static_fields = v15->static_fields;
  v27.fields.y = static_fields->MAX_LEVEL_BASE_POS_Y;
  v27.fields.x = static_fields->MAX_LEVEL_BASE_POS_X + (float)v17->fields.mWidth;
  v27.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v16, v27, 0LL);
  transform = (System_String_o *)this->fields.mcExpSldP;
  if ( !transform )
    goto LABEL_32;
  UIProgressBar__set_value((UIProgressBar_o *)transform, this->fields.mfExpPar, 0LL);
  if ( (this->fields.miApMax & 0x80000000) == 0 )
  {
    ScrPlayerStatus__InitApRecoverLb(this, v10);
    ScrPlayerStatus__UpdateAp(this, v20);
  }
  if ( this->fields.isBPEvent )
  {
    transform = (System_String_o *)this->fields.rpRoot;
    if ( !transform )
      goto LABEL_32;
    ScrPlayerBP__SetupDispRaidPoint((ScrPlayerBP_o *)transform, this->fields.userGameEntity, v19);
  }
  ScrPlayerStatus__SetOverwriteMasterInfo(this, v10);
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
    sub_1C13F80(transform, v10);
  }
  UserGameEntity__getCmdSpellInfo((UserGameEntity_o *)transform, &count, &recoverTime, 0LL);
  mcGiftButtonP = (UnityEngine_Object_o *)this->fields.mcGiftButtonP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  ScrPlayerStatus__mfCheckMasterMission(this, v10);
  ScrPlayerStatus__mfCheckCompleteMission(this, v23);
  ScrPlayerStatus__mfSetStoneAndFragment(this, v24);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)v10, (int64_t)spellIcon, v11, v12, v13, v14, v15, v16);
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
  sub_1C13CC8(
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB18CA & 1) == 0 )
  {
    sub_1C13D24(&ScrPlayerStatus___c_TypeInfo, v1);
    byte_4BB18CA = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ScrPlayerStatus___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ScrPlayerStatus___c_TypeInfo->static_fields->__9 = (struct ScrPlayerStatus___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ScrPlayerStatus___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x20
  Il2CppObject *v13; // x21
  struct ScrPlayerStatus___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BB18CB & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v2);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C13D24(&Method_ScrPlayerStatus___c__OpenMasterProfile_b__165_1__, v4);
    sub_1C13D24(&ScrPlayerStatus___c_TypeInfo, v5);
    byte_4BB18CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  Instance = ScrPlayerStatus___c_TypeInfo;
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  if ( !ScrPlayerStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus___c_TypeInfo);
    Instance = ScrPlayerStatus___c_TypeInfo;
  }
  v12 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ScrPlayerStatus___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v12 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v12, v13, Method_ScrPlayerStatus___c__OpenMasterProfile_b__165_1__, 0LL);
    static_fields = ScrPlayerStatus___c_TypeInfo->static_fields;
    static_fields->__9__165_1 = v12;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__165_1, (int64_t)v12, v15, v16, v17, v18, v19, v20);
  }
  if ( !v10 )
LABEL_14:
    sub_1C13F80(Instance, v7);
  CommonUI__maskFadein(v10, DEFAULT_FADE_TIME, v12, 0LL);
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
    sub_1C13F80(this, info);
  return MstMissionEntity_k__BackingField->fields.priority;
}


bool __fastcall ScrPlayerStatus___c___UpdateCompleteMissionIconVisibility_b__237_0(
        ScrPlayerStatus___c_o *this,
        EventEntity_ScriptData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.isHiddenTerminalCompleteMissionButton;
}


bool __fastcall ScrPlayerStatus___c___mfCheckMasterMission_b__198_0(
        ScrPlayerStatus___c_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
  __int64 v3; // x1
  struct ScrPlayerStatus_o *_4__this; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int32_t typeIndex; // w19
  const MethodInfo *v15; // x2

  if ( (byte_4BB18CC & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_ScrPlayerStatus_UpdateGiftBoxNum__, v3);
    byte_4BB18CC = 1;
  }
  _4__this = this->fields.__4__this;
  v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)_4__this, Method_ScrPlayerStatus_UpdateGiftBoxNum__, 0LL);
  if ( !_4__this )
    sub_1C13F80(v6, v7);
  typeIndex = this->fields.typeIndex;
  _4__this->fields.mAfterCloseMasterMission = v5;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&_4__this->fields.mAfterCloseMasterMission,
    (int64_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ScrPlayerStatus__OpenMasterMission_35470808(_4__this, typeIndex, v15);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ScrPlayerStatus___c__DisplayClass151_0_o *v8; // x19
  __int64 v9; // x1
  System_Action_o *_9__1; // x21
  struct ScrPlayerStatus_o *_4__this; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t typeIndex; // w19
  const MethodInfo *v19; // x2

  v8 = this;
  if ( (byte_4BB18CD & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    this = (ScrPlayerStatus___c__DisplayClass151_0_o *)sub_1C13D24(
                                                         &Method_ScrPlayerStatus___c__DisplayClass151_0__ClickLoginDialogOpenMasterMission_b__1__,
                                                         v9);
    byte_4BB18CD = 1;
  }
  _9__1 = v8->fields.__9__1;
  _4__this = v8->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v8,
      Method_ScrPlayerStatus___c__DisplayClass151_0__ClickLoginDialogOpenMasterMission_b__1__,
      0LL);
    v8->fields.__9__1 = _9__1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v8->fields.__9__1, (int64_t)_9__1, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1C13F80(this, method);
  typeIndex = v8->fields.typeIndex;
  _4__this->fields.mAfterCloseMasterMission = _9__1;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&_4__this->fields.mAfterCloseMasterMission,
    (int64_t)_9__1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  ScrPlayerStatus__OpenMasterMission_35470808(_4__this, typeIndex, v19);
}


void __fastcall ScrPlayerStatus___c__DisplayClass151_0___ClickLoginDialogOpenMasterMission_b__1(
        ScrPlayerStatus___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *_4__this; // x0
  struct System_Action_o *closeCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_String_o *permissionName; // x20
  Il2CppObject *_4__this; // x21
  System_Action_object__o *v12; // x22
  Il2CppObject *v13; // x19
  System_Action_object__o *v14; // x21
  struct ScrPlayerStatus_o *v15; // x8

  if ( (byte_4BB18CE & 1) == 0 )
  {
    sub_1C13D24(&System_Action_string__TypeInfo, result);
    sub_1C13D24(&Method_ScrPlayerStatus_OnPermissionDenied__, v5);
    sub_1C13D24(&Method_ScrPlayerStatus_OnPermissionGranted__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4BB18CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseLocationTermsOfUseDlg((CommonUI_o *)Instance, 0LL);
  if ( result )
  {
    permissionName = this->fields.permissionName;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (System_Action_object__o *)sub_1C13F70(System_Action_string__TypeInfo);
    System_Action_object____ctor(v12, _4__this, Method_ScrPlayerStatus_OnPermissionGranted__, 0LL);
    v13 = (Il2CppObject *)this->fields.__4__this;
    v14 = (System_Action_object__o *)sub_1C13F70(System_Action_string__TypeInfo);
    System_Action_object____ctor(v14, v13, Method_ScrPlayerStatus_OnPermissionDenied__, 0LL);
    AndroidPermissionManager__RequestPermission(
      permissionName,
      (System_Action_string__o *)v12,
      (System_Action_string__o *)v14,
      0LL,
      0LL);
    return;
  }
  v15 = this->fields.__4__this;
  if ( !v15 )
LABEL_8:
    sub_1C13F80(Instance, v9);
  v15->fields.isLocationBusy = 0;
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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB18CF & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BB18CF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        sub_1C13F88(Instance, v6);
      if ( Instance )
      {
        ScrPlayerStatus__locationRequest((ScrPlayerStatus_o *)Instance, list->m_Items[0], v7);
        return;
      }
    }
LABEL_11:
    sub_1C13F80(Instance, v6);
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
    sub_1C13F80(this, method);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  EventLocationRequest_o *Instance; // x0
  __int64 id; // x1
  struct EventEntity_o *eventEnt; // x8
  CommonUI_o *v29; // x20
  System_String_o *name; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x0
  System_Action_o *_9__3; // x23
  System_String_o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *v41; // x20
  System_String_o *v42; // x21
  System_String_o *v43; // x22
  System_String_o *v44; // x23
  CommonConfirmDialog_ClickDelegate_o *_9__1; // x25
  System_String_o *v46; // x24
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct CommonConfirmDialog_ClickDelegate_o **p__9__1; // x0
  int64_t v54; // x1
  System_String_o *v55; // x22
  System_String_o *v56; // x0
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v58; // x21
  struct EventEntity_o *v59; // x8
  __int128 v60; // q0
  UnityEngine_LocationInfo_o v61; // [xsp+40h] [xbp-90h] BYREF
  UnityEngine_LocationInfo_o v62; // [xsp+60h] [xbp-70h]

  if ( (byte_4BB18D0 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1C13D24(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_1C13D24(&LocalizationManager_TypeInfo, v8);
    sub_1C13D24(&Method_NetworkManager_getRequest_EventLocationRequest___, v9);
    sub_1C13D24(&NetworkManager_TypeInfo, v10);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1C13D24(&Method_ScrPlayerStatus_EndLocationRequest__, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__1__, v14);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__2__, v15);
    sub_1C13D24(&Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__3__, v16);
    sub_1C13D24(&StringLiteral_8448/*"LOCATION_DLG_FAIL_TITLE"*/, v17);
    sub_1C13D24(&StringLiteral_8449/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, v18);
    sub_1C13D24(&StringLiteral_8447/*"LOCATION_DLG_FAIL_MESSAGE"*/, v19);
    sub_1C13D24(&StringLiteral_8446/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/, v20);
    sub_1C13D24(&StringLiteral_8442/*"LOCATION_DLG_DEVICE_OPTION_MESSAGE"*/, v21);
    sub_1C13D24(&StringLiteral_8440/*"LOCATION_CAMPAIGN_INFO_DLG_DECIDE"*/, v22);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v23);
    sub_1C13D24(&StringLiteral_8441/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, v24);
    sub_1C13D24(&StringLiteral_8438/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/, v25);
    byte_4BB18D0 = 1;
  }
  switch ( result )
  {
    case 0:
    case 1:
    case 4:
      Instance = (EventLocationRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      eventEnt = this->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_28;
      v29 = (CommonUI_o *)Instance;
      name = eventEnt->fields.name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8446/*"LOCATION_DLG_DEVICE_OPTION_TITLE"*/, 0LL);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8438/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/, 0LL);
      Instance = (EventLocationRequest_o *)System_String__Concat_62967944(v31, v32, 0LL);
      _9__3 = this->fields.__9__3;
      v34 = (System_String_o *)Instance;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)this,
          Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__3__,
          0LL);
        this->fields.__9__3 = _9__3;
        sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v35, v36, v37, v38, v39, v40);
      }
      if ( !v29 )
        goto LABEL_28;
      CommonUI__OpenNotificationDialog(v29, name, v34, _9__3, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    case 2:
      v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8442/*"LOCATION_DLG_DEVICE_OPTION_MESSAGE"*/, 0LL);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8441/*"LOCATION_DLG_ADDITIONAL_WARN_MESSAGE"*/, 0LL);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8440/*"LOCATION_CAMPAIGN_INFO_DLG_DECIDE"*/, 0LL);
      Instance = (EventLocationRequest_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
      _9__1 = this->fields.__9__1;
      v46 = (System_String_o *)Instance;
      if ( _9__1 )
        goto LABEL_20;
      _9__1 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C13F70(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__1__,
        0LL);
      p__9__1 = &this->fields.__9__1;
      v54 = (int64_t)_9__1;
      this->fields.__9__1 = _9__1;
      goto LABEL_19;
    case 3:
      v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8449/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, 0LL);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_8448/*"LOCATION_DLG_FAIL_TITLE"*/, 0LL);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_8438/*"LOCATION_CAMPAIGN_INFO_DLG_ACCEPTED"*/, 0LL);
      v43 = System_String__Concat_62967944(v55, v56, 0LL);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8447/*"LOCATION_DLG_FAIL_MESSAGE"*/, 0LL);
      Instance = (EventLocationRequest_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
      _9__1 = this->fields.__9__2;
      v46 = (System_String_o *)Instance;
      if ( _9__1 )
        goto LABEL_20;
      _9__1 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C13F70(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ScrPlayerStatus___c__DisplayClass175_0__locationRequest_b__2__,
        0LL);
      p__9__1 = &this->fields.__9__2;
      v54 = (int64_t)_9__1;
      this->fields.__9__2 = _9__1;
LABEL_19:
      sub_1C13CC8((PartyOrganizationUtility_o *)p__9__1, v54, v47, v48, v49, v50, v51, v52);
LABEL_20:
      if ( !v41 )
LABEL_28:
        sub_1C13F80(Instance, id);
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v41,
        v42,
        v43,
        v44,
        v46,
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
      v58 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v58, _4__this, Method_ScrPlayerStatus_EndLocationRequest__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (EventLocationRequest_o *)NetworkManager__getRequest_object_(
                                             v58,
                                             (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_EventLocationRequest___);
      v59 = this->fields.eventEnt;
      if ( !v59 )
        goto LABEL_28;
      v60 = *(_OWORD *)&locInfo->fields.m_Altitude;
      id = (unsigned int)v59->fields.id;
      *(_OWORD *)&v62.fields.m_Timestamp = *(_OWORD *)&locInfo->fields.m_Timestamp;
      *(_OWORD *)&v62.fields.m_Altitude = v60;
      if ( !Instance )
        goto LABEL_28;
      v61 = v62;
      EventLocationRequest__beginRequest(Instance, id, &v61, 0LL);
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

  if ( (byte_4BB18D1 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BB18D1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C13F80(Instance, v6);
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

  if ( (byte_4BB18D2 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BB18D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C13F80(Instance, v6);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, info);
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
    sub_1C13F80(this, info);
  v4 = 48LL;
  if ( MstMissionEntity_k__BackingField->fields.endedAt >= this->fields.nowTime )
    v4 = 40LL;
  return *(int64_t *)((char *)&MstMissionEntity_k__BackingField->klass + v4);
}