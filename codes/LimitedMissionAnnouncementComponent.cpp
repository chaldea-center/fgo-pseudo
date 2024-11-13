void __fastcall LimitedMissionAnnouncementComponent___cctor(const MethodInfo *method)
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

  if ( (byte_4B12F15 & 1) == 0 )
  {
    sub_1BCA7E0(&LimitedMissionAnnouncementComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17235/*"banner_icon_mission_limited_"*/, v8, v9);
    byte_4B12F15 = 1;
  }
  LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX = (struct System_String_o *)StringLiteral_17235/*"banner_icon_mission_limited_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)LimitedMissionAnnouncementComponent_TypeInfo->static_fields,
    StringLiteral_17235/*"banner_icon_mission_limited_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM = 7;
}


void __fastcall LimitedMissionAnnouncementComponent___ctor(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  this->fields.mstMissionStartsAt = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitedMissionAnnouncementComponent__Awake(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
        LimitedMissionAnnouncementComponent_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *mstMissionInfo,
        const MethodInfo *method)
{
  LimitedMissionAnnouncementComponent_o *v4; // x19
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
  __int64 v20; // x1
  UISprite_o *masterMissionLimitedBgSp; // x22
  LimitedMissionAnnouncementComponent_c *v22; // x0
  System_String_o *MASTER_MISSION_ICON_LIMITED_PREFIX; // x23
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x23
  LimitedMissionAnnouncementComponent_c *v27; // x0
  UISprite_o *v28; // x22
  __int64 v29; // x1
  System_String_o *v30; // x23
  __int64 v31; // x1
  UILabel_o *masterMissionDetailOverlapLb; // x22
  UILabel_o *masterMissionDetailLb; // x23
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  MstMissionEntity_c *v35; // x0
  LimitedMissionAnnouncementComponent_o *v36; // x24
  UILabel_o *masterMissionCountNumLb; // x22
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *masterMissionCountNumLb2; // x20
  __int64 v40; // x1
  int64_t NextDayStartTime; // x20
  struct UILabel_o *masterMissionAlertNumLb; // x8
  struct UILabel_o *masterMissionAlertUnitLb; // x8
  __int64 v44; // x1
  LimitedMissionAnnouncementComponent_o *masterMissionAlertMsgLb; // x19
  LimitedMissionAnnouncementComponent_o *v46; // x1
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4B12F0D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, mstMissionInfo, method);
    sub_1BCA7E0(&LimitedMissionAnnouncementComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&MstMissionEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_13488/*"TIME_REST_ACHIVE"*/, v15, v16);
    this = (LimitedMissionAnnouncementComponent_o *)sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v17, v18);
    byte_4B12F0D = 1;
  }
  if ( !mstMissionInfo )
    goto LABEL_53;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_53;
  if ( MstMissionEntity__getMissionType(mstMissionInfo->fields._MstMissionEntity_k__BackingField, 0LL) != 5 )
  {
    LimitedMissionAnnouncementComponent__HideMstMissionIconLb(v4, (const MethodInfo *)mstMissionInfo);
    return;
  }
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionLimitedBgObj;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAnimationLabelsRoot;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  masterMissionLimitedBgSp = v4->fields.masterMissionLimitedBgSp;
  v22 = LimitedMissionAnnouncementComponent_TypeInfo;
  if ( !LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo, v20);
    v22 = LimitedMissionAnnouncementComponent_TypeInfo;
  }
  MASTER_MISSION_ICON_LIMITED_PREFIX = v22->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX;
  v24 = System_Int32__ToString((int)MstMissionEntity_k__BackingField + 56, 0LL);
  v26 = System_String__Concat_62401220(MASTER_MISSION_ICON_LIMITED_PREFIX, v24, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  if ( !AtlasManager__SetBanner(masterMissionLimitedBgSp, v26, 0LL) )
  {
    v27 = LimitedMissionAnnouncementComponent_TypeInfo;
    v28 = v4->fields.masterMissionLimitedBgSp;
    if ( !LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo, mstMissionInfo);
      v27 = LimitedMissionAnnouncementComponent_TypeInfo;
    }
    v30 = System_String__Concat_62401220(
            v27->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX,
            (System_String_o *)StringLiteral_1209/*"0"*/,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
    AtlasManager__SetBanner(v28, v30, 0LL);
  }
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionLimitedBgSp;
  if ( !this )
    goto LABEL_53;
  ((void (__fastcall *)(LimitedMissionAnnouncementComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  masterMissionDetailLb = v4->fields.masterMissionDetailLb;
  masterMissionDetailOverlapLb = v4->fields.masterMissionDetailOverlapLb;
  script = MstMissionEntity_k__BackingField->fields.script;
  v35 = MstMissionEntity_TypeInfo;
  if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, v31);
    v35 = MstMissionEntity_TypeInfo;
  }
  this = (LimitedMissionAnnouncementComponent_o *)EntityScriptUtil__GetStringValue(
                                                    script,
                                                    v35->static_fields->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
                                                    0LL,
                                                    0LL);
  if ( !masterMissionDetailLb )
    goto LABEL_53;
  v36 = this;
  UILabel__set_text(masterMissionDetailLb, (System_String_o *)this, 0LL);
  if ( !masterMissionDetailOverlapLb )
    goto LABEL_53;
  UILabel__set_text(masterMissionDetailOverlapLb, (System_String_o *)v36, 0LL);
  masterMissionCountNumLb = v4->fields.masterMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  this = (LimitedMissionAnnouncementComponent_o *)System_Int32__ToString(
                                                    (int32_t)&MissionAchiveCount_k__BackingField,
                                                    0LL);
  if ( !masterMissionCountNumLb )
    goto LABEL_53;
  UILabel__set_text(masterMissionCountNumLb, (System_String_o *)this, 0LL);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  masterMissionCountNumLb2 = v4->fields.masterMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  this = (LimitedMissionAnnouncementComponent_o *)System_Int32__ToString(
                                                    (int32_t)&MissionAchiveCount_k__BackingField,
                                                    0LL);
  if ( !masterMissionCountNumLb2 )
    goto LABEL_53;
  UILabel__set_text(masterMissionCountNumLb2, (System_String_o *)this, 0LL);
  if ( MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0LL) == 3 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
    NextDayStartTime = NetworkManager__getNextDayStartTime(0LL);
  }
  else
  {
    NextDayStartTime = MstMissionEntity_k__BackingField->fields.endedAt;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
  LocalizationManager__GetRestTimeWithSeparatedTimeStr(
    NextDayStartTime,
    &v4->fields.mstMissionTimeNumStr,
    &v4->fields.mstMissionTimeCntStr,
    0LL);
  masterMissionAlertNumLb = v4->fields.masterMissionAlertNumLb;
  if ( !masterMissionAlertNumLb )
    goto LABEL_53;
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.mstMissionTimeNumStr;
  if ( !this )
    goto LABEL_53;
  this = (LimitedMissionAnnouncementComponent_o *)System_String__Equals_62409536(
                                                    (System_String_o *)this,
                                                    masterMissionAlertNumLb->fields.mText,
                                                    0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    masterMissionAlertUnitLb = v4->fields.masterMissionAlertUnitLb;
    if ( !masterMissionAlertUnitLb )
      goto LABEL_53;
    this = (LimitedMissionAnnouncementComponent_o *)v4->fields.mstMissionTimeCntStr;
    if ( !this )
      goto LABEL_53;
    if ( System_String__Equals_62409536((System_String_o *)this, masterMissionAlertUnitLb->fields.mText, 0LL) )
      return;
  }
  this = (LimitedMissionAnnouncementComponent_o *)System_String__IsNullOrEmpty(v4->fields.mstMissionTimeNumStr, 0LL);
  if ( !v4->fields.masterMissionAlertTitleLb )
    goto LABEL_53;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(v4->fields.masterMissionAlertTitleLb, 1, 0LL);
    this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertNumLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v4->fields.mstMissionTimeNumStr, 0LL);
      this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertUnitLb;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, v4->fields.mstMissionTimeCntStr, 0LL);
        this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertMsgLb;
        if ( this )
        {
          v46 = (LimitedMissionAnnouncementComponent_o *)StringLiteral_1/*""*/;
          goto LABEL_51;
        }
      }
    }
LABEL_53:
    sub_1BCAA3C(this, mstMissionInfo);
  }
  UnityEngine_GameObject__SetActive(v4->fields.masterMissionAlertTitleLb, 0, 0LL);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertNumLb;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertUnitLb;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  masterMissionAlertMsgLb = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
  this = (LimitedMissionAnnouncementComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13488/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !masterMissionAlertMsgLb )
    goto LABEL_53;
  v46 = this;
  this = masterMissionAlertMsgLb;
LABEL_51:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v46, 0LL);
}


void __fastcall LimitedMissionAnnouncementComponent__CheckSerializeFieldAssertion(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall LimitedMissionAnnouncementComponent__GetEnabledMstMissionCount(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4B12F11 & 1) == 0 )
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
    byte_4B12F11 = 1;
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
    Time = LimitedMissionAnnouncementComponent__IsEnabledMstMission(
             (LimitedMissionAnnouncementComponent_o *)Item,
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
int32_t __fastcall LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(
        LimitedMissionAnnouncementComponent_o *this,
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

  if ( (byte_4B12F12 & 1) == 0 )
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
    byte_4B12F12 = 1;
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
        Time = LimitedMissionAnnouncementComponent__IsEnabledMstMission(
                 (LimitedMissionAnnouncementComponent_o *)Time,
                 v16,
                 v14,
                 v17);
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
int32_t __fastcall LimitedMissionAnnouncementComponent__GetMissionClearCount(
        LimitedMissionAnnouncementComponent_o *this,
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

  if ( (byte_4B12F13 & 1) == 0 )
  {
    this = (LimitedMissionAnnouncementComponent_o *)sub_1BCA7E0(
                                                      &MissionInfoMaker_TypeInfo,
                                                      eventMissionList,
                                                      *(_QWORD *)&type);
    byte_4B12F13 = 1;
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
      this = (LimitedMissionAnnouncementComponent_o *)MissionInfoMaker__GetProgStatus(
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


int64_t __fastcall LimitedMissionAnnouncementComponent__GetMstMissionStarts(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = this->fields.mstMissionStartsAt;
  if ( result <= 0 )
  {
    LimitedMissionAnnouncementComponent__mfCheckMasterMission(this, method);
    return this->fields.mstMissionStartsAt;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall LimitedMissionAnnouncementComponent__GetNextMstMissionIndex(
        LimitedMissionAnnouncementComponent_o *this,
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
  if ( (byte_4B12F14 & 1) == 0 )
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
    byte_4B12F14 = 1;
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
    if ( LimitedMissionAnnouncementComponent__IsEnabledMstMission(
           (LimitedMissionAnnouncementComponent_o *)Item,
           (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
           v13,
           v16) )
    {
      return v3;
    }
  }
  return 0;
}


void __fastcall LimitedMissionAnnouncementComponent__HideMstMissionIconLb(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterMissionLimitedBgObj; // x0

  masterMissionLimitedBgObj = this->fields.masterMissionLimitedBgObj;
  if ( !masterMissionLimitedBgObj
    || (UnityEngine_GameObject__SetActive(masterMissionLimitedBgObj, 0, 0LL),
        (masterMissionLimitedBgObj = this->fields.masterMissionAlertRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(masterMissionLimitedBgObj, 0, 0LL),
        (masterMissionLimitedBgObj = this->fields.masterMissionAnimationLabelsRoot) == 0LL) )
  {
    sub_1BCAA3C(masterMissionLimitedBgObj, method);
  }
  UnityEngine_GameObject__SetActive(masterMissionLimitedBgObj, 0, 0LL);
}


void __fastcall LimitedMissionAnnouncementComponent__InitMstMissionLb(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
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
  struct AlphaTransitionCalculator_o **p_missionAlertAlphaCalculator; // x20
  LimitedMissionAnnouncementComponent_c *v16; // x0
  __int64 v17; // x1
  float v18; // s8
  TitleInfoControl_c *v19; // x0
  System_Func_float__float__float__float__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  AlphaTransitionCalculator_o *v24; // x22
  const MethodInfo *v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  unsigned int FirstMstMissionIndex; // w0
  const MethodInfo *v33; // x2
  unsigned int v34; // w0
  const MethodInfo *v35; // x2
  unsigned int v36; // w0
  Il2CppObject *Item; // x1
  const MethodInfo *v38; // x2

  if ( (byte_4B12F0E & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, method, v2);
    sub_1BCA7E0(&LimitedMissionAnnouncementComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      v8,
      v9);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v10, v11);
    byte_4B12F0E = 1;
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.masterMissionAlertPanel;
  this->fields.mstMissionIconUpdateTimer = 0.0;
  if ( !masterMissionAlertPanel )
    goto LABEL_18;
  ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))masterMissionAlertPanel->klass[1]._1.castClass)(
    masterMissionAlertPanel,
    masterMissionAlertPanel->klass[1]._1.declaringType,
    1.0);
  p_missionAlertAlphaCalculator = &this->fields.missionAlertAlphaCalculator;
  if ( !this->fields.missionAlertAlphaCalculator )
  {
    v16 = LimitedMissionAnnouncementComponent_TypeInfo;
    if ( !LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo, v13);
      v16 = LimitedMissionAnnouncementComponent_TypeInfo;
    }
    v18 = ChangedFPSUtil__CovertFrameNumToSecond(v16->static_fields->MISSION_ALERT_FADE_FRAME_NUM, 0LL);
    v19 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v17);
      v19 = TitleInfoControl_TypeInfo;
    }
    v20 = ExtraEasing__AsymptoticSeriesFloat(
            v19->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM,
            0LL);
    v24 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v21, v22, v23);
    AlphaTransitionCalculator___ctor(v24, v18, v20, v25);
    *p_missionAlertAlphaCalculator = v24;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.missionAlertAlphaCalculator,
      (int64_t)v24,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    masterMissionAlertPanel = *p_missionAlertAlphaCalculator;
    if ( !*p_missionAlertAlphaCalculator )
      goto LABEL_18;
    AlphaTransitionCalculator__MakeFadeInFinished(masterMissionAlertPanel, method);
  }
  FirstMstMissionIndex = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 5, v14);
  method = (const MethodInfo *)FirstMstMissionIndex;
  if ( (FirstMstMissionIndex & 0x80000000) != 0 )
  {
    v34 = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 3, v33);
    method = (const MethodInfo *)v34;
    if ( (v34 & 0x80000000) != 0 )
    {
      v36 = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 2, v35);
      method = (const MethodInfo *)v36;
      if ( (v36 & 0x80000000) != 0 )
        goto LABEL_17;
    }
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.currentMissionList;
  if ( !masterMissionAlertPanel )
LABEL_18:
    sub_1BCAA3C(masterMissionAlertPanel, method);
  if ( SLODWORD(masterMissionAlertPanel->fields.duration) >= 1 )
  {
    this->fields.currentMissionIndex = (int)method;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)masterMissionAlertPanel,
             (int32_t)method,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
      this,
      (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
      v38);
    return;
  }
LABEL_17:
  LimitedMissionAnnouncementComponent__HideMstMissionIconLb(this, method);
}


bool __fastcall LimitedMissionAnnouncementComponent__IsEnabledMstMission(
        LimitedMissionAnnouncementComponent_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *missionInfo,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x21
  int64_t endedAt; // x8
  bool result; // w0

  if ( !missionInfo || (MstMissionEntity_k__BackingField = missionInfo->fields._MstMissionEntity_k__BackingField) == 0LL )
    sub_1BCAA3C(this, missionInfo);
  result = 0;
  if ( MstMissionEntity__getMissionType(missionInfo->fields._MstMissionEntity_k__BackingField, 0LL) == 5 )
  {
    endedAt = MstMissionEntity_k__BackingField->fields.endedAt;
    if ( MstMissionEntity_k__BackingField->fields.startedAt <= nowTime && endedAt >= nowTime )
      return 1;
    if ( endedAt < nowTime
      && MstMissionEntity_k__BackingField->fields.closedAt >= nowTime
      && missionInfo->fields._MissionClearCount_k__BackingField > 0 )
    {
      return 1;
    }
  }
  return result;
}


void __fastcall LimitedMissionAnnouncementComponent__Update(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.mtIsUpdate )
  {
    LimitedMissionAnnouncementComponent__mfCheckMasterMission(this, method);
    this->fields.mtIsUpdate = 0;
  }
  if ( this->fields.userGameEntity )
    LimitedMissionAnnouncementComponent__UpdateMstMissionLb(this, method);
}


void __fastcall LimitedMissionAnnouncementComponent__UpdateMstMissionLb(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
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
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  TransitionCalculator_float__o *missionAlertAlphaCalculator; // x0
  __int64 Instance; // x0
  float mstMissionIconUpdateTimer; // s8
  float deltaTime; // s0
  float v23; // s8
  const MethodInfo *v24; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v27; // x2
  struct AlphaTransitionCalculator_o *v28; // x8
  TerminalPramsManager_c *v29; // x0
  UnityEngine_Behaviour_o *masterMissionAnimationLabelsTween; // x20
  TerminalPramsManager_c *v31; // x0
  int32_t DispState_k__BackingField; // w8
  UnityEngine_Behaviour_o *v33; // x21
  __int64 v34; // x8
  __int64 v35; // x2
  __int64 v36; // x8
  __int64 v37; // x2
  UnityEngine_Transform_o *v38; // x19

  if ( (byte_4B12F0F & 1) == 0 )
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
    byte_4B12F0F = 1;
  }
  if ( LimitedMissionAnnouncementComponent__GetEnabledMstMissionCount(this, method) >= 2 )
  {
    missionAlertAlphaCalculator = (TransitionCalculator_float__o *)this->fields.missionAlertAlphaCalculator;
    if ( !missionAlertAlphaCalculator )
      return;
    TransitionCalculator_float___Update(
      missionAlertAlphaCalculator,
      (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0LL) )
    {
      mstMissionIconUpdateTimer = this->fields.mstMissionIconUpdateTimer;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      Instance = (__int64)this->fields.currentMissionList;
      v23 = mstMissionIconUpdateTimer + deltaTime;
      this->fields.mstMissionIconUpdateTimer = v23;
      if ( !Instance )
        goto LABEL_71;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            this->fields.currentMissionIndex,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      Instance = *(_QWORD *)(Instance + 16);
      if ( !Instance )
        goto LABEL_71;
      if ( v23 >= MstMissionEntity__GetMissionIconDisplaySec((MstMissionEntity_o *)Instance, 0LL) )
      {
        Instance = (__int64)this->fields.missionAlertAlphaCalculator;
        this->fields.mstMissionIconUpdateTimer = 0.0;
        if ( !Instance )
          goto LABEL_71;
        AlphaTransitionCalculator__SwitchFadeOut((AlphaTransitionCalculator_o *)Instance, v17);
      }
    }
    Instance = (__int64)this->fields.missionAlertAlphaCalculator;
    if ( !Instance )
      goto LABEL_71;
    Instance = AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)Instance, v17);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)this->fields.missionAlertAlphaCalculator;
      if ( !Instance )
        goto LABEL_71;
      AlphaTransitionCalculator__SwitchFadeIn((AlphaTransitionCalculator_o *)Instance, v17);
      Instance = LimitedMissionAnnouncementComponent__GetNextMstMissionIndex(
                   this,
                   this->fields.currentMissionIndex,
                   v24);
      currentMissionList = this->fields.currentMissionList;
      this->fields.currentMissionIndex = Instance;
      if ( !currentMissionList )
        goto LABEL_71;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)currentMissionList,
               Instance,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
        this,
        (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
        v27);
    }
    v28 = this->fields.missionAlertAlphaCalculator;
    if ( !v28 )
      goto LABEL_71;
    Instance = (__int64)this->fields.masterMissionAlertPanel;
    if ( !Instance )
      goto LABEL_71;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL),
      v28->fields._Current_k__BackingField);
  }
  else
  {
    LimitedMissionAnnouncementComponent__InitMstMissionLb(this, v16);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
  if ( !byte_4B12FA3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v17, v18);
    byte_4B12FA3 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( !v29->static_fields->_DispState_k__BackingField )
    return;
  masterMissionAnimationLabelsTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionAnimationLabelsTween;
  if ( !v29->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v29, v17);
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
  DispState_k__BackingField = v31->static_fields->_DispState_k__BackingField;
  if ( DispState_k__BackingField == 2 )
    v33 = 0LL;
  else
    v33 = masterMissionAnimationLabelsTween;
  if ( DispState_k__BackingField == 2 )
    goto LABEL_48;
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
  v34 = **(_QWORD **)(Instance + 184);
  if ( !v34 )
    goto LABEL_71;
  Instance = *(_QWORD *)(v34 + 256);
  if ( !Instance )
    goto LABEL_71;
  if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)Instance, 0LL) )
  {
LABEL_48:
    Instance = 0LL;
    if ( !masterMissionAnimationLabelsTween )
      goto LABEL_71;
  }
  else
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
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
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v17, v35);
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
        goto LABEL_71;
      Instance = *(_QWORD *)(v36 + 240);
      if ( !Instance )
        goto LABEL_71;
      Instance = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)Instance, 0LL);
    }
    masterMissionAnimationLabelsTween = v33;
    if ( !v33 )
      goto LABEL_71;
  }
  UnityEngine_Behaviour__set_enabled(masterMissionAnimationLabelsTween, Instance & 1, 0LL);
  Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
  if ( !Instance )
    goto LABEL_71;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
  {
    Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
    if ( Instance )
    {
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      v38 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4B109C1 )
      {
        Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v17, v37);
        byte_4B109C1 = 1;
      }
      if ( v38 )
      {
        UnityEngine_Transform__set_localPosition(v38, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        return;
      }
    }
LABEL_71:
    sub_1BCAA3C(Instance, v17);
  }
}


void __fastcall LimitedMissionAnnouncementComponent__mfCheckMasterMission(
        LimitedMissionAnnouncementComponent_o *this,
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
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentMissionList; // x20
  int32_t size; // w2
  int v36; // w9
  System_Collections_Generic_List_object__o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  void *Instance; // x0
  __int64 v45; // x1
  Il2CppObject *MasterData_object; // x21
  MstMissionEntity_array *EnableMissions; // x22
  int max_length; // w8
  UserEventMissionMaster_o *v49; // x23
  unsigned int v50; // w29
  Il2CppClass **v51; // x8
  MstMissionEntity_o *v52; // x24
  EventMissionEntity_array *v53; // x25
  LimitedMissionAnnouncementComponent_o *AchiveMissionNum; // x0
  int32_t v55; // w26
  int32_t v56; // w27
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t MissionClearCount; // w28
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  MasterMissionComponent_MasterMissionInfoItem_o *v63; // x25
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x8
  __int64 v74; // x2
  __int64 v75; // x3
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v76; // x20
  System_Predicate_object__o *v77; // x21
  Il2CppObject *v78; // x22
  struct LimitedMissionAnnouncementComponent___c_StaticFields *static_fields; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  const MethodInfo *v86; // x1
  LimitedMissionAnnouncementComponent_o *v87; // [xsp+8h] [xbp-68h]

  if ( (byte_4B12F10 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v19, v20);
    sub_1BCA7E0(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v23, v24);
    sub_1BCA7E0(&ScrPlayerStatus_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_LimitedMissionAnnouncementComponent___c__mfCheckMasterMission_b__32_0__, v29, v30);
    sub_1BCA7E0(&LimitedMissionAnnouncementComponent___c_TypeInfo, v31, v32);
    byte_4B12F10 = 1;
  }
  p_currentMissionList = &this->fields.currentMissionList;
  currentMissionList = this->fields.currentMissionList;
  this->fields.mstMissionStartsAt = 0LL;
  if ( currentMissionList )
  {
    size = currentMissionList->fields._size;
    v36 = currentMissionList->fields._version + 1;
    currentMissionList->fields._size = 0;
    currentMissionList->fields._version = v36;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentMissionList->fields._items, 0, size, 0LL);
  }
  else
  {
    v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentMissionList = (System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v37;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.currentMissionList,
      (int64_t)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_38;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v87 = this;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_38;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v49 = (UserEventMissionMaster_o *)Instance;
    v50 = 0;
    while ( 1 )
    {
      if ( v50 >= max_length )
        sub_1BCAA44(Instance, v45);
      v51 = &EnableMissions->obj.klass + (int)v50;
      v52 = (MstMissionEntity_o *)v51[4];
      if ( !v52 )
        break;
      Instance = (void *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v51[4], 0LL);
      if ( (_DWORD)Instance == 5 )
      {
        if ( !MasterData_object )
          break;
        Instance = EventMissionMaster__getLimitedMissionList(
                     (EventMissionMaster_o *)MasterData_object,
                     v52->fields.id,
                     0LL);
        if ( !Instance )
          break;
        Instance = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)Instance,
                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
        if ( !Instance )
          break;
        v53 = (EventMissionEntity_array *)Instance;
        if ( *((_QWORD *)Instance + 3) )
        {
          if ( !v49 )
            break;
          AchiveMissionNum = (LimitedMissionAnnouncementComponent_o *)UserEventMissionMaster__getAchiveMissionNum(
                                                                        v49,
                                                                        v52->fields.id,
                                                                        0LL);
          v55 = v53->max_length;
          v56 = (int)AchiveMissionNum;
          MissionClearCount = LimitedMissionAnnouncementComponent__GetMissionClearCount(AchiveMissionNum, v53, v57, v58);
          v63 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1BCAA2C(
                                                                    MasterMissionComponent_MasterMissionInfoItem_TypeInfo,
                                                                    v60,
                                                                    v61,
                                                                    v62);
          MasterMissionComponent_MasterMissionInfoItem___ctor(v63, v52, v55, MissionClearCount, v56, 0LL);
          Instance = *p_currentMissionList;
          if ( !*p_currentMissionList )
            break;
          v70 = *((_QWORD *)Instance + 2);
          v71 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
          ++*((_DWORD *)Instance + 7);
          if ( !v70 )
            break;
          v72 = *((int *)Instance + 6);
          if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v63,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = v70 + 8 * v72;
            *((_DWORD *)Instance + 6) = v72 + 1;
            *(_QWORD *)(v73 + 32) = v63;
            sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 32), (int64_t)v63, v64, v65, v66, v67, v68, v69);
          }
        }
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v50 >= max_length )
        goto LABEL_28;
    }
LABEL_38:
    sub_1BCAA3C(Instance, v45);
  }
LABEL_28:
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v45);
  ScrPlayerStatus__SortLimitedMstMissionViewList(p_currentMissionList, 0LL);
  Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
  v76 = *p_currentMissionList;
  if ( !LimitedMissionAnnouncementComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent___c_TypeInfo, v45);
    Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
  }
  v77 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v77 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v45);
      Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
    }
    v78 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v77 = (System_Predicate_object__o *)sub_1BCAA2C(
                                          System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo,
                                          v45,
                                          v74,
                                          v75);
    System_Predicate_object____ctor(
      v77,
      v78,
      Method_LimitedMissionAnnouncementComponent___c__mfCheckMasterMission_b__32_0__,
      0LL);
    static_fields = LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Predicate_MasterMissionComponent_MasterMissionInfoItem__o *)v77;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__32_0, (int64_t)v77, v80, v81, v82, v83, v84, v85);
  }
  if ( !v76 )
    goto LABEL_38;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v76,
    (System_Predicate_T__o *)v77,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
  LimitedMissionAnnouncementComponent__InitMstMissionLb(v87, v86);
}


void __fastcall LimitedMissionAnnouncementComponent__mfInitUserData(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  this = (LimitedMissionAnnouncementComponent_o *)((char *)this + 144);
  sub_1BCA784((PartyOrganizationUtility_o *)this, (int64_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
  LOBYTE(this->fields.masterMissionAlertTitleLb) = 1;
}


void __fastcall LimitedMissionAnnouncementComponent__mfSetIsUpdate(
        LimitedMissionAnnouncementComponent_o *this,
        bool isUpdate,
        const MethodInfo *method)
{
  this->fields.mtIsUpdate = isUpdate;
}


void __fastcall LimitedMissionAnnouncementComponent__mfUpdatePrams(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  LimitedMissionAnnouncementComponent__mfCheckMasterMission(this, method);
  this->fields.mtIsUpdate = 0;
}


void __fastcall LimitedMissionAnnouncementComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B12F16 & 1) == 0 )
  {
    sub_1BCA7E0(&LimitedMissionAnnouncementComponent___c_TypeInfo, v1, v2);
    byte_4B12F16 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(LimitedMissionAnnouncementComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields->__9 = (struct LimitedMissionAnnouncementComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall LimitedMissionAnnouncementComponent___c___ctor(
        LimitedMissionAnnouncementComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LimitedMissionAnnouncementComponent___c___mfCheckMasterMission_b__32_0(
        LimitedMissionAnnouncementComponent___c_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._MissionAchiveCount_k__BackingField == x->fields._MissionCount_k__BackingField;
}