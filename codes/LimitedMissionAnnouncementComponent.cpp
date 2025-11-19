void LimitedMissionAnnouncementComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4CB2D57 & 1) == 0 )
  {
    sub_1C6BA08(&LimitedMissionAnnouncementComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_17041/*"banner_icon_mission_limited_"*/);
    byte_4CB2D57 = 1;
  }
  LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX = (struct System_String_o *)StringLiteral_17041/*"banner_icon_mission_limited_"*/;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)LimitedMissionAnnouncementComponent_TypeInfo->static_fields,
    StringLiteral_17041/*"banner_icon_mission_limited_"*/,
    v1,
    v2);
  LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM = 7;
}


void LimitedMissionAnnouncementComponent___ctor(LimitedMissionAnnouncementComponent_o *this, const MethodInfo *method)
{
  this->fields.mstMissionStartsAt = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void LimitedMissionAnnouncementComponent__Awake(LimitedMissionAnnouncementComponent_o *this, const MethodInfo *method)
{
  ;
}


void LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
        LimitedMissionAnnouncementComponent_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *mstMissionInfo,
        const MethodInfo *method)
{
  LimitedMissionAnnouncementComponent_o *v4; // x19
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x21
  UISprite_o *masterMissionLimitedBgSp; // x22
  LimitedMissionAnnouncementComponent_c *v7; // x0
  System_String_o *MASTER_MISSION_ICON_LIMITED_PREFIX; // x23
  System_String_o *v9; // x0
  System_String_o *v10; // x23
  LimitedMissionAnnouncementComponent_c *v11; // x0
  UISprite_o *v12; // x22
  System_String_o *v13; // x23
  UILabel_o *masterMissionDetailOverlapLb; // x22
  UILabel_o *masterMissionDetailLb; // x23
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  MstMissionEntity_c *v17; // x0
  LimitedMissionAnnouncementComponent_o *v18; // x24
  UILabel_o *masterMissionCountNumLb; // x22
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *masterMissionCountNumLb2; // x20
  int64_t NextDayStartTime; // x20
  struct UILabel_o *masterMissionAlertNumLb; // x8
  struct UILabel_o *masterMissionAlertUnitLb; // x8
  LimitedMissionAnnouncementComponent_o *masterMissionAlertMsgLb; // x19
  LimitedMissionAnnouncementComponent_o *v26; // x1
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4CB2D4F & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&LimitedMissionAnnouncementComponent_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&MstMissionEntity_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_13418/*"TIME_REST_ACHIVE"*/);
    this = (LimitedMissionAnnouncementComponent_o *)sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CB2D4F = 1;
  }
  if ( !mstMissionInfo )
    goto LABEL_53;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_53;
  if ( MstMissionEntity__getMissionType(mstMissionInfo->fields._MstMissionEntity_k__BackingField, 0) != 5 )
  {
    LimitedMissionAnnouncementComponent__HideMstMissionIconLb(v4, (const MethodInfo *)mstMissionInfo);
    return;
  }
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionLimitedBgObj;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAnimationLabelsRoot;
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  masterMissionLimitedBgSp = v4->fields.masterMissionLimitedBgSp;
  v7 = LimitedMissionAnnouncementComponent_TypeInfo;
  if ( !LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo);
    v7 = LimitedMissionAnnouncementComponent_TypeInfo;
  }
  MASTER_MISSION_ICON_LIMITED_PREFIX = v7->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX;
  v9 = System_Int32__ToString((int)MstMissionEntity_k__BackingField + 56, 0);
  v10 = System_String__Concat_63966792(MASTER_MISSION_ICON_LIMITED_PREFIX, v9, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetBanner(masterMissionLimitedBgSp, v10, 0) )
  {
    v11 = LimitedMissionAnnouncementComponent_TypeInfo;
    v12 = v4->fields.masterMissionLimitedBgSp;
    if ( !LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo);
      v11 = LimitedMissionAnnouncementComponent_TypeInfo;
    }
    v13 = System_String__Concat_63966792(
            v11->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX,
            (System_String_o *)StringLiteral_1115/*"0"*/,
            0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v12, v13, 0);
  }
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionLimitedBgSp;
  if ( !this )
    goto LABEL_53;
  ((void (__fastcall *)(LimitedMissionAnnouncementComponent_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
  masterMissionDetailLb = v4->fields.masterMissionDetailLb;
  masterMissionDetailOverlapLb = v4->fields.masterMissionDetailOverlapLb;
  script = MstMissionEntity_k__BackingField->fields.script;
  v17 = MstMissionEntity_TypeInfo;
  if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
    v17 = MstMissionEntity_TypeInfo;
  }
  this = (LimitedMissionAnnouncementComponent_o *)EntityScriptUtil__GetStringValue(
                                                    script,
                                                    v17->static_fields->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
                                                    0,
                                                    0);
  if ( !masterMissionDetailLb )
    goto LABEL_53;
  v18 = this;
  UILabel__set_text(masterMissionDetailLb, (System_String_o *)this, 0);
  if ( !masterMissionDetailOverlapLb )
    goto LABEL_53;
  UILabel__set_text(masterMissionDetailOverlapLb, (System_String_o *)v18, 0);
  masterMissionCountNumLb = v4->fields.masterMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  this = (LimitedMissionAnnouncementComponent_o *)System_Int32__ToString(
                                                    (int32_t)&MissionAchiveCount_k__BackingField,
                                                    0);
  if ( !masterMissionCountNumLb )
    goto LABEL_53;
  UILabel__set_text(masterMissionCountNumLb, (System_String_o *)this, 0);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  masterMissionCountNumLb2 = v4->fields.masterMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  this = (LimitedMissionAnnouncementComponent_o *)System_Int32__ToString(
                                                    (int32_t)&MissionAchiveCount_k__BackingField,
                                                    0);
  if ( !masterMissionCountNumLb2 )
    goto LABEL_53;
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
    goto LABEL_53;
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.mstMissionTimeNumStr;
  if ( !this )
    goto LABEL_53;
  this = (LimitedMissionAnnouncementComponent_o *)System_String__Equals_64002112(
                                                    (System_String_o *)this,
                                                    masterMissionAlertNumLb->fields.mText,
                                                    0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    masterMissionAlertUnitLb = v4->fields.masterMissionAlertUnitLb;
    if ( !masterMissionAlertUnitLb )
      goto LABEL_53;
    this = (LimitedMissionAnnouncementComponent_o *)v4->fields.mstMissionTimeCntStr;
    if ( !this )
      goto LABEL_53;
    if ( System_String__Equals_64002112((System_String_o *)this, masterMissionAlertUnitLb->fields.mText, 0) )
      return;
  }
  this = (LimitedMissionAnnouncementComponent_o *)System_String__IsNullOrEmpty(v4->fields.mstMissionTimeNumStr, 0);
  if ( !v4->fields.masterMissionAlertTitleLb )
    goto LABEL_53;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive(v4->fields.masterMissionAlertTitleLb, 1, 0);
    this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertNumLb;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v4->fields.mstMissionTimeNumStr, 0);
      this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertUnitLb;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, v4->fields.mstMissionTimeCntStr, 0);
        this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertMsgLb;
        if ( this )
        {
          v26 = (LimitedMissionAnnouncementComponent_o *)StringLiteral_1/*""*/;
          goto LABEL_51;
        }
      }
    }
LABEL_53:
    sub_1C6BC60(this, mstMissionInfo);
  }
  UnityEngine_GameObject__SetActive(v4->fields.masterMissionAlertTitleLb, 0, 0);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertNumLb;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertUnitLb;
  if ( !this )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  masterMissionAlertMsgLb = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (LimitedMissionAnnouncementComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13418/*"TIME_REST_ACHIVE"*/, 0);
  if ( !masterMissionAlertMsgLb )
    goto LABEL_53;
  v26 = this;
  this = masterMissionAlertMsgLb;
LABEL_51:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v26, 0);
}


void LimitedMissionAnnouncementComponent__CheckSerializeFieldAssertion(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t LimitedMissionAnnouncementComponent__GetEnabledMstMissionCount(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4CB2D53 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB2D53 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_10:
    sub_1C6BC60(Time, v4);
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
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    Time = LimitedMissionAnnouncementComponent__IsEnabledMstMission(
             (LimitedMissionAnnouncementComponent_o *)Item,
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


int32_t LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(
        LimitedMissionAnnouncementComponent_o *this,
        int32_t targetType,
        const MethodInfo *method)
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

  if ( (byte_4CB2D54 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB2D54 = 1;
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
                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Time )
        break;
      v12 = (MasterMissionComponent_MasterMissionInfoItem_o *)Time;
      Time = *(_QWORD *)(Time + 16);
      if ( !Time )
        break;
      Time = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0);
      if ( (_DWORD)Time == targetType )
      {
        Time = LimitedMissionAnnouncementComponent__IsEnabledMstMission(
                 (LimitedMissionAnnouncementComponent_o *)Time,
                 v12,
                 v10,
                 v13);
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
    sub_1C6BC60(Time, v6);
  }
  return -1;
}


int32_t LimitedMissionAnnouncementComponent__GetMissionClearCount(
        LimitedMissionAnnouncementComponent_o *this,
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
  int32_t MissionProgressType_47253704; // w0

  if ( (byte_4CB2D55 & 1) == 0 )
  {
    this = (LimitedMissionAnnouncementComponent_o *)sub_1C6BA08(&MissionInfoMaker_TypeInfo);
    byte_4CB2D55 = 1;
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
        sub_1C6BC68(this);
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
      MissionProgressType_47253704 = MissionInfoMaker__GetMissionProgressType_47253704(
                                       missionTargetId,
                                       id,
                                       v15,
                                       IsIgnoreStartCondition,
                                       0);
      this = (LimitedMissionAnnouncementComponent_o *)MissionInfoMaker__GetProgStatus(
                                                        v9->fields.missionTargetId,
                                                        v9->fields.id,
                                                        MissionProgressType_47253704,
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
    sub_1C6BC60(this, eventMissionList);
  }
  return 0;
}


int64_t LimitedMissionAnnouncementComponent__GetMstMissionStarts(
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


int32_t LimitedMissionAnnouncementComponent__GetNextMstMissionIndex(
        LimitedMissionAnnouncementComponent_o *this,
        int32_t startIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Time; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int size; // w22
  int64_t v9; // x21
  int v10; // w24
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4CB2D56 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB2D56 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0);
  currentMissionList = this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_16:
    sub_1C6BC60(Time, v6);
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
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( LimitedMissionAnnouncementComponent__IsEnabledMstMission(
           (LimitedMissionAnnouncementComponent_o *)Item,
           (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
           v9,
           v12) )
    {
      return startIndex;
    }
  }
  return 0;
}


void LimitedMissionAnnouncementComponent__HideMstMissionIconLb(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterMissionLimitedBgObj; // x0

  masterMissionLimitedBgObj = this->fields.masterMissionLimitedBgObj;
  if ( !masterMissionLimitedBgObj
    || (UnityEngine_GameObject__SetActive(masterMissionLimitedBgObj, 0, 0),
        (masterMissionLimitedBgObj = this->fields.masterMissionAlertRoot) == 0)
    || (UnityEngine_GameObject__SetActive(masterMissionLimitedBgObj, 0, 0),
        (masterMissionLimitedBgObj = this->fields.masterMissionAnimationLabelsRoot) == 0) )
  {
    sub_1C6BC60(masterMissionLimitedBgObj, method);
  }
  UnityEngine_GameObject__SetActive(masterMissionLimitedBgObj, 0, 0);
}


void LimitedMissionAnnouncementComponent__InitMstMissionLb(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *masterMissionAlertPanel; // x0
  const MethodInfo *v4; // x2
  struct AlphaTransitionCalculator_o **p_missionAlertAlphaCalculator; // x20
  LimitedMissionAnnouncementComponent_c *v6; // x0
  float v7; // s8
  TitleInfoControl_c *v8; // x0
  System_Func_float__float__float__float__o *v9; // x21
  AlphaTransitionCalculator_o *v10; // x22
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  unsigned int FirstMstMissionIndex; // w0
  const MethodInfo *v15; // x2
  unsigned int v16; // w0
  const MethodInfo *v17; // x2
  unsigned int v18; // w0
  Il2CppObject *Item; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4CB2D50 & 1) == 0 )
  {
    sub_1C6BA08(&AlphaTransitionCalculator_TypeInfo);
    sub_1C6BA08(&LimitedMissionAnnouncementComponent_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C6BA08(&TitleInfoControl_TypeInfo);
    byte_4CB2D50 = 1;
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.masterMissionAlertPanel;
  this->fields.mstMissionIconUpdateTimer = 0.0;
  if ( !masterMissionAlertPanel )
    goto LABEL_18;
  ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))masterMissionAlertPanel->klass[1]._1.element_class)(
    masterMissionAlertPanel,
    masterMissionAlertPanel->klass[1]._1.castClass,
    1.0);
  p_missionAlertAlphaCalculator = &this->fields.missionAlertAlphaCalculator;
  if ( !this->fields.missionAlertAlphaCalculator )
  {
    v6 = LimitedMissionAnnouncementComponent_TypeInfo;
    if ( !LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo);
      v6 = LimitedMissionAnnouncementComponent_TypeInfo;
    }
    v7 = ChangedFPSUtil__CovertFrameNumToSecond(v6->static_fields->MISSION_ALERT_FADE_FRAME_NUM, 0);
    v8 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v8 = TitleInfoControl_TypeInfo;
    }
    v9 = ExtraEasing__AsymptoticSeriesFloat(
           v8->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
           (float)LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM,
           0);
    v10 = (AlphaTransitionCalculator_o *)sub_1C6BC54(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v10, v7, v9, v11);
    *p_missionAlertAlphaCalculator = v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.missionAlertAlphaCalculator, (int32_t)v10, v12, v13);
    masterMissionAlertPanel = *p_missionAlertAlphaCalculator;
    if ( !*p_missionAlertAlphaCalculator )
      goto LABEL_18;
    AlphaTransitionCalculator__MakeFadeInFinished(masterMissionAlertPanel, method);
  }
  FirstMstMissionIndex = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 5, v4);
  method = (const MethodInfo *)FirstMstMissionIndex;
  if ( (FirstMstMissionIndex & 0x80000000) != 0 )
  {
    v16 = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 3, v15);
    method = (const MethodInfo *)v16;
    if ( (v16 & 0x80000000) != 0 )
    {
      v18 = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 2, v17);
      method = (const MethodInfo *)v18;
      if ( (v18 & 0x80000000) != 0 )
        goto LABEL_17;
    }
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.currentMissionList;
  if ( !masterMissionAlertPanel )
LABEL_18:
    sub_1C6BC60(masterMissionAlertPanel, method);
  if ( SLODWORD(masterMissionAlertPanel->fields.duration) >= 1 )
  {
    this->fields.currentMissionIndex = (int)method;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)masterMissionAlertPanel,
             (int32_t)method,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
      this,
      (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
      v20);
    return;
  }
LABEL_17:
  LimitedMissionAnnouncementComponent__HideMstMissionIconLb(this, method);
}


bool LimitedMissionAnnouncementComponent__IsEnabledMstMission(
        LimitedMissionAnnouncementComponent_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *missionInfo,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x21
  int64_t endedAt; // x8
  bool result; // w0

  if ( !missionInfo || (MstMissionEntity_k__BackingField = missionInfo->fields._MstMissionEntity_k__BackingField) == 0 )
    sub_1C6BC60(this, missionInfo);
  result = 0;
  if ( MstMissionEntity__getMissionType(missionInfo->fields._MstMissionEntity_k__BackingField, 0) == 5 )
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


void LimitedMissionAnnouncementComponent__Update(LimitedMissionAnnouncementComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.mtIsUpdate )
  {
    LimitedMissionAnnouncementComponent__mfCheckMasterMission(this, method);
    this->fields.mtIsUpdate = 0;
  }
  if ( this->fields.userGameEntity )
    LimitedMissionAnnouncementComponent__UpdateMstMissionLb(this, method);
}


void LimitedMissionAnnouncementComponent__UpdateMstMissionLb(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  TransitionCalculator_float__o *missionAlertAlphaCalculator; // x0
  __int64 Instance; // x0
  float mstMissionIconUpdateTimer; // s8
  float deltaTime; // s0
  float v9; // s8
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v13; // x2
  struct AlphaTransitionCalculator_o *v14; // x8
  TerminalPramsManager_c *v15; // x0
  UnityEngine_Behaviour_o *masterMissionAnimationLabelsTween; // x20
  TerminalPramsManager_c *v17; // x0
  int32_t DispState_k__BackingField; // w8
  UnityEngine_Behaviour_o *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  UnityEngine_Transform_o *v22; // x19

  if ( (byte_4CB2D51 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_TransitionCalculator_float__Update__);
    sub_1C6BA08(&Method_TransitionCalculator_float__get_Current__);
    byte_4CB2D51 = 1;
  }
  if ( LimitedMissionAnnouncementComponent__GetEnabledMstMissionCount(this, method) >= 2 )
  {
    missionAlertAlphaCalculator = (TransitionCalculator_float__o *)this->fields.missionAlertAlphaCalculator;
    if ( !missionAlertAlphaCalculator )
      return;
    TransitionCalculator_float___Update(
      missionAlertAlphaCalculator,
      (const MethodInfo_3AF12A0 *)Method_TransitionCalculator_float__Update__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) )
    {
      mstMissionIconUpdateTimer = this->fields.mstMissionIconUpdateTimer;
      deltaTime = UnityEngine_Time__get_deltaTime(0);
      Instance = (__int64)this->fields.currentMissionList;
      v9 = mstMissionIconUpdateTimer + deltaTime;
      this->fields.mstMissionIconUpdateTimer = v9;
      if ( !Instance )
        goto LABEL_71;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            this->fields.currentMissionIndex,
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      Instance = *(_QWORD *)(Instance + 16);
      if ( !Instance )
        goto LABEL_71;
      if ( v9 >= MstMissionEntity__GetMissionIconDisplaySec((MstMissionEntity_o *)Instance, 0) )
      {
        Instance = (__int64)this->fields.missionAlertAlphaCalculator;
        this->fields.mstMissionIconUpdateTimer = 0.0;
        if ( !Instance )
          goto LABEL_71;
        AlphaTransitionCalculator__SwitchFadeOut((AlphaTransitionCalculator_o *)Instance, v4);
      }
    }
    Instance = (__int64)this->fields.missionAlertAlphaCalculator;
    if ( !Instance )
      goto LABEL_71;
    Instance = AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)Instance, v4);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)this->fields.missionAlertAlphaCalculator;
      if ( !Instance )
        goto LABEL_71;
      AlphaTransitionCalculator__SwitchFadeIn((AlphaTransitionCalculator_o *)Instance, v4);
      Instance = LimitedMissionAnnouncementComponent__GetNextMstMissionIndex(
                   this,
                   this->fields.currentMissionIndex,
                   v10);
      currentMissionList = this->fields.currentMissionList;
      this->fields.currentMissionIndex = Instance;
      if ( !currentMissionList )
        goto LABEL_71;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)currentMissionList,
               Instance,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
        this,
        (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
        v13);
    }
    v14 = this->fields.missionAlertAlphaCalculator;
    if ( !v14 )
      goto LABEL_71;
    Instance = (__int64)this->fields.masterMissionAlertPanel;
    if ( !Instance )
      goto LABEL_71;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL),
      v14->fields._Current_k__BackingField);
  }
  else
  {
    LimitedMissionAnnouncementComponent__InitMstMissionLb(this, v3);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB2D85 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2D85 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( !v15->static_fields->_DispState_k__BackingField )
    return;
  masterMissionAnimationLabelsTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionAnimationLabelsTween;
  if ( !v15->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v15);
  if ( !byte_4CB2D85 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB2D85 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  DispState_k__BackingField = v17->static_fields->_DispState_k__BackingField;
  if ( DispState_k__BackingField == 2 )
    v19 = 0;
  else
    v19 = masterMissionAnimationLabelsTween;
  if ( DispState_k__BackingField == 2 )
    goto LABEL_48;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  Instance = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v20 = **(_QWORD **)(Instance + 184);
  if ( !v20 )
    goto LABEL_71;
  Instance = *(_QWORD *)(v20 + 256);
  if ( !Instance )
    goto LABEL_71;
  if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)Instance, 0) )
  {
LABEL_48:
    Instance = 0;
    if ( !masterMissionAnimationLabelsTween )
      goto LABEL_71;
  }
  else
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0) )
    {
      Instance = 0;
    }
    else
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4CB01CE )
      {
        sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
        byte_4CB01CE = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v21 = **(_QWORD **)(Instance + 184);
      if ( !v21 )
        goto LABEL_71;
      Instance = *(_QWORD *)(v21 + 240);
      if ( !Instance )
        goto LABEL_71;
      Instance = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)Instance, 0);
    }
    masterMissionAnimationLabelsTween = v19;
    if ( !v19 )
      goto LABEL_71;
  }
  UnityEngine_Behaviour__set_enabled(masterMissionAnimationLabelsTween, Instance & 1, 0);
  Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
  if ( !Instance )
    goto LABEL_71;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0) )
  {
    Instance = (__int64)this->fields.masterMissionAnimationLabelsTween;
    if ( Instance )
    {
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
      v22 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4CAFC09 )
      {
        Instance = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      if ( v22 )
      {
        UnityEngine_Transform__set_localPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        return;
      }
    }
LABEL_71:
    sub_1C6BC60(Instance, v4);
  }
}


void LimitedMissionAnnouncementComponent__mfCheckMasterMission(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentMissionList; // x20
  int32_t size; // w2
  int v6; // w9
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  void *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  MstMissionEntity_array *EnableMissions; // x22
  int max_length; // w8
  UserEventMissionMaster_o *v15; // x23
  unsigned int v16; // w29
  Il2CppClass **v17; // x8
  MstMissionEntity_o *v18; // x24
  EventMissionEntity_array *v19; // x25
  LimitedMissionAnnouncementComponent_o *AchiveMissionNum; // x0
  int32_t v21; // w26
  int32_t v22; // w27
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t MissionClearCount; // w28
  MasterMissionComponent_MasterMissionInfoItem_o *v26; // x25
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v33; // x20
  System_Predicate_object__o *v34; // x21
  Il2CppObject *v35; // x22
  struct LimitedMissionAnnouncementComponent___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x1
  LimitedMissionAnnouncementComponent_o *v40; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB2D52 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_1C6BA08(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    sub_1C6BA08(&System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_1C6BA08(&ScrPlayerStatus_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_LimitedMissionAnnouncementComponent___c__mfCheckMasterMission_b__32_0__);
    sub_1C6BA08(&LimitedMissionAnnouncementComponent___c_TypeInfo);
    byte_4CB2D52 = 1;
  }
  p_currentMissionList = &this->fields.currentMissionList;
  currentMissionList = this->fields.currentMissionList;
  this->fields.mstMissionStartsAt = 0;
  if ( currentMissionList )
  {
    size = currentMissionList->fields._size;
    v6 = currentMissionList->fields._version + 1;
    currentMissionList->fields._size = 0;
    currentMissionList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentMissionList->fields._items, 0, size, 0);
  }
  else
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentMissionList = (System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentMissionList, (int32_t)v7, v8, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_38;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v40 = this;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_38;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v15 = (UserEventMissionMaster_o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C6BC68(Instance);
      v17 = &EnableMissions->obj.klass + (int)v16;
      v18 = (MstMissionEntity_o *)v17[4];
      if ( !v18 )
        break;
      Instance = (void *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v17[4], 0);
      if ( (_DWORD)Instance == 5 )
      {
        if ( !MasterData_object )
          break;
        Instance = EventMissionMaster__GetLimitedMissionList(
                     (EventMissionMaster_o *)MasterData_object,
                     v18->fields.id,
                     0);
        if ( !Instance )
          break;
        Instance = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)Instance,
                     (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
        if ( !Instance )
          break;
        v19 = (EventMissionEntity_array *)Instance;
        if ( *((_QWORD *)Instance + 3) )
        {
          if ( !v15 )
            break;
          AchiveMissionNum = (LimitedMissionAnnouncementComponent_o *)UserEventMissionMaster__getAchiveMissionNum(
                                                                        v15,
                                                                        v18->fields.id,
                                                                        0);
          v21 = v19->max_length;
          v22 = (int)AchiveMissionNum;
          MissionClearCount = LimitedMissionAnnouncementComponent__GetMissionClearCount(AchiveMissionNum, v19, v23, v24);
          v26 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C6BC54(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
          MasterMissionComponent_MasterMissionInfoItem___ctor(v26, v18, v21, MissionClearCount, v22, 0);
          Instance = *p_currentMissionList;
          if ( !*p_currentMissionList )
            break;
          v29 = *((_QWORD *)Instance + 2);
          v30 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
          ++*((_DWORD *)Instance + 7);
          if ( !v29 )
            break;
          v31 = *((int *)Instance + 6);
          if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v26,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * v31;
            *((_DWORD *)Instance + 6) = v31 + 1;
            *(_QWORD *)(v32 + 32) = v26;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v26, v27, v28);
          }
        }
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_28;
    }
LABEL_38:
    sub_1C6BC60(Instance, v11);
  }
LABEL_28:
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
  ScrPlayerStatus__SortLimitedMstMissionViewList(p_currentMissionList, 0);
  Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
  v33 = *p_currentMissionList;
  if ( !LimitedMissionAnnouncementComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent___c_TypeInfo);
    Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
  }
  v34 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v34 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Predicate_object____ctor(
      v34,
      v35,
      Method_LimitedMissionAnnouncementComponent___c__mfCheckMasterMission_b__32_0__,
      0);
    static_fields = LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Predicate_MasterMissionComponent_MasterMissionInfoItem__o *)v34;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)v34, v37, v38);
  }
  if ( !v33 )
    goto LABEL_38;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v33,
    (System_Predicate_T__o *)v34,
    (const MethodInfo_3801FD0 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
  LimitedMissionAnnouncementComponent__InitMstMissionLb(v40, v39);
}


void LimitedMissionAnnouncementComponent__mfInitUserData(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  this = (LimitedMissionAnnouncementComponent_o *)((char *)this + 144);
  sub_1C6B9AC((CGThumbnailListItem_o *)this, (int32_t)SelfUserGame, v4, v5);
  LOBYTE(this->fields.masterMissionAlertTitleLb) = 1;
}


void LimitedMissionAnnouncementComponent__mfSetIsUpdate(
        LimitedMissionAnnouncementComponent_o *this,
        bool isUpdate,
        const MethodInfo *method)
{
  this->fields.mtIsUpdate = isUpdate;
}


void LimitedMissionAnnouncementComponent__mfUpdatePrams(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  LimitedMissionAnnouncementComponent__mfCheckMasterMission(this, method);
  this->fields.mtIsUpdate = 0;
}


void LimitedMissionAnnouncementComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB2D58 & 1) == 0 )
  {
    sub_1C6BA08(&LimitedMissionAnnouncementComponent___c_TypeInfo);
    byte_4CB2D58 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(LimitedMissionAnnouncementComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields->__9 = (struct LimitedMissionAnnouncementComponent___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void LimitedMissionAnnouncementComponent___c___ctor(
        LimitedMissionAnnouncementComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool LimitedMissionAnnouncementComponent___c___mfCheckMasterMission_b__32_0(
        LimitedMissionAnnouncementComponent___c_o *this,
        MasterMissionComponent_MasterMissionInfoItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._MissionAchiveCount_k__BackingField == x->fields._MissionCount_k__BackingField;
}