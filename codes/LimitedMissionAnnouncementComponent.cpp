void __fastcall LimitedMissionAnnouncementComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B19048 & 1) == 0 )
  {
    sub_1BCAFF8(&LimitedMissionAnnouncementComponent_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_16890/*"banner_icon_mission_limited_"*/, v4);
    byte_4B19048 = 1;
  }
  LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX = (struct System_String_o *)StringLiteral_16890/*"banner_icon_mission_limited_"*/;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)LimitedMissionAnnouncementComponent_TypeInfo->static_fields,
    StringLiteral_16890/*"banner_icon_mission_limited_"*/,
    v2,
    v3);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct MstMissionEntity_o *MstMissionEntity_k__BackingField; // x21
  UISprite_o *masterMissionLimitedBgSp; // x22
  LimitedMissionAnnouncementComponent_c *v14; // x0
  System_String_o *MASTER_MISSION_ICON_LIMITED_PREFIX; // x23
  System_String_o *v16; // x0
  System_String_o *v17; // x23
  LimitedMissionAnnouncementComponent_c *v18; // x0
  UISprite_o *v19; // x22
  System_String_o *v20; // x23
  UILabel_o *masterMissionDetailOverlapLb; // x22
  UILabel_o *masterMissionDetailLb; // x23
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  MstMissionEntity_c *v24; // x0
  LimitedMissionAnnouncementComponent_o *v25; // x24
  UILabel_o *masterMissionCountNumLb; // x22
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *masterMissionCountNumLb2; // x20
  int64_t NextDayStartTime; // x20
  struct UILabel_o *masterMissionAlertNumLb; // x8
  struct UILabel_o *masterMissionAlertUnitLb; // x8
  LimitedMissionAnnouncementComponent_o *masterMissionAlertMsgLb; // x19
  LimitedMissionAnnouncementComponent_o *v33; // x1
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4B19040 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, mstMissionInfo);
    sub_1BCAFF8(&LimitedMissionAnnouncementComponent_TypeInfo, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&MstMissionEntity_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v9);
    sub_1BCAFF8(&StringLiteral_13299/*"TIME_REST_ACHIVE"*/, v10);
    this = (LimitedMissionAnnouncementComponent_o *)sub_1BCAFF8(&StringLiteral_1113/*"0"*/, v11);
    byte_4B19040 = 1;
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
  v14 = LimitedMissionAnnouncementComponent_TypeInfo;
  if ( !LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo);
    v14 = LimitedMissionAnnouncementComponent_TypeInfo;
  }
  MASTER_MISSION_ICON_LIMITED_PREFIX = v14->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX;
  v16 = System_Int32__ToString((int)MstMissionEntity_k__BackingField + 56, 0LL);
  v17 = System_String__Concat_62450424(MASTER_MISSION_ICON_LIMITED_PREFIX, v16, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetBanner(masterMissionLimitedBgSp, v17, 0LL) )
  {
    v18 = LimitedMissionAnnouncementComponent_TypeInfo;
    v19 = v4->fields.masterMissionLimitedBgSp;
    if ( !LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo);
      v18 = LimitedMissionAnnouncementComponent_TypeInfo;
    }
    v20 = System_String__Concat_62450424(
            v18->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX,
            (System_String_o *)StringLiteral_1113/*"0"*/,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(v19, v20, 0LL);
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
  v24 = MstMissionEntity_TypeInfo;
  if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
    v24 = MstMissionEntity_TypeInfo;
  }
  this = (LimitedMissionAnnouncementComponent_o *)EntityScriptUtil__GetStringValue(
                                                    script,
                                                    v24->static_fields->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
                                                    0LL,
                                                    0LL);
  if ( !masterMissionDetailLb )
    goto LABEL_53;
  v25 = this;
  UILabel__set_text(masterMissionDetailLb, (System_String_o *)this, 0LL);
  if ( !masterMissionDetailOverlapLb )
    goto LABEL_53;
  UILabel__set_text(masterMissionDetailOverlapLb, (System_String_o *)v25, 0LL);
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
    goto LABEL_53;
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.mstMissionTimeNumStr;
  if ( !this )
    goto LABEL_53;
  this = (LimitedMissionAnnouncementComponent_o *)System_String__Equals_62485728(
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
    if ( System_String__Equals_62485728((System_String_o *)this, masterMissionAlertUnitLb->fields.mText, 0LL) )
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
          v33 = (LimitedMissionAnnouncementComponent_o *)StringLiteral_1/*""*/;
          goto LABEL_51;
        }
      }
    }
LABEL_53:
    sub_1BCB254(this, mstMissionInfo);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (LimitedMissionAnnouncementComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13299/*"TIME_REST_ACHIVE"*/, 0LL);
  if ( !masterMissionAlertMsgLb )
    goto LABEL_53;
  v33 = this;
  this = masterMissionAlertMsgLb;
LABEL_51:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v33, 0LL);
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

  if ( (byte_4B19044 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v3);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    byte_4B19044 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_10:
    sub_1BCB254(Time, v6);
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
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    Time = LimitedMissionAnnouncementComponent__IsEnabledMstMission(
             (LimitedMissionAnnouncementComponent_o *)Item,
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
int32_t __fastcall LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(
        LimitedMissionAnnouncementComponent_o *this,
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

  if ( (byte_4B19045 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      *(_QWORD *)&targetType);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B19045 = 1;
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
                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Time )
        break;
      v14 = (MasterMissionComponent_MasterMissionInfoItem_o *)Time;
      Time = *(_QWORD *)(Time + 16);
      if ( !Time )
        break;
      Time = MstMissionEntity__getMissionType((MstMissionEntity_o *)Time, 0LL);
      if ( (_DWORD)Time == targetType )
      {
        Time = LimitedMissionAnnouncementComponent__IsEnabledMstMission(
                 (LimitedMissionAnnouncementComponent_o *)Time,
                 v14,
                 v12,
                 v15);
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
    sub_1BCB254(Time, v8);
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
  bool IsIgnoreStartCondition; // w25
  bool v15; // w24
  int32_t MissionProgressType_46181736; // w0

  if ( (byte_4B19046 & 1) == 0 )
  {
    this = (LimitedMissionAnnouncementComponent_o *)sub_1BCAFF8(&MissionInfoMaker_TypeInfo, eventMissionList);
    byte_4B19046 = 1;
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
        sub_1BCB25C(this, eventMissionList, *(_QWORD *)&type);
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
      MissionProgressType_46181736 = MissionInfoMaker__GetMissionProgressType_46181736(
                                       missionTargetId,
                                       id,
                                       v15,
                                       IsIgnoreStartCondition,
                                       0LL);
      this = (LimitedMissionAnnouncementComponent_o *)MissionInfoMaker__GetProgStatus(
                                                        v9->fields.missionTargetId,
                                                        v9->fields.id,
                                                        MissionProgressType_46181736,
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
    sub_1BCB254(this, eventMissionList);
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
  if ( (byte_4B19047 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__,
      *(_QWORD *)&startIndex);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B19047 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_Generic_List_object__o *)NetworkManager__getTime(0LL);
  currentMissionList = this->fields.currentMissionList;
  if ( !currentMissionList )
LABEL_16:
    sub_1BCB254(Time, v8);
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
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( LimitedMissionAnnouncementComponent__IsEnabledMstMission(
           (LimitedMissionAnnouncementComponent_o *)Item,
           (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
           v11,
           v14) )
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
    sub_1BCB254(masterMissionLimitedBgObj, method);
  }
  UnityEngine_GameObject__SetActive(masterMissionLimitedBgObj, 0, 0LL);
}


void __fastcall LimitedMissionAnnouncementComponent__InitMstMissionLb(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AlphaTransitionCalculator_o *masterMissionAlertPanel; // x0
  const MethodInfo *v8; // x2
  struct AlphaTransitionCalculator_o **p_missionAlertAlphaCalculator; // x20
  LimitedMissionAnnouncementComponent_c *v10; // x0
  float v11; // s8
  TitleInfoControl_c *v12; // x0
  System_Func_float__float__float__float__o *v13; // x21
  AlphaTransitionCalculator_o *v14; // x22
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  unsigned int FirstMstMissionIndex; // w0
  const MethodInfo *v19; // x2
  unsigned int v20; // w0
  const MethodInfo *v21; // x2
  unsigned int v22; // w0
  Il2CppObject *Item; // x1
  const MethodInfo *v24; // x2

  if ( (byte_4B19041 & 1) == 0 )
  {
    sub_1BCAFF8(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1BCAFF8(&LimitedMissionAnnouncementComponent_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__, v5);
    sub_1BCAFF8(&TitleInfoControl_TypeInfo, v6);
    byte_4B19041 = 1;
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
    v10 = LimitedMissionAnnouncementComponent_TypeInfo;
    if ( !LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo);
      v10 = LimitedMissionAnnouncementComponent_TypeInfo;
    }
    v11 = ChangedFPSUtil__CovertFrameNumToSecond(v10->static_fields->MISSION_ALERT_FADE_FRAME_NUM, 0LL);
    v12 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v12 = TitleInfoControl_TypeInfo;
    }
    v13 = ExtraEasing__AsymptoticSeriesFloat(
            v12->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM,
            0LL);
    v14 = (AlphaTransitionCalculator_o *)sub_1BCB244(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v14, v11, v13, v15);
    *p_missionAlertAlphaCalculator = v14;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.missionAlertAlphaCalculator, (int32_t)v14, v16, v17);
    masterMissionAlertPanel = *p_missionAlertAlphaCalculator;
    if ( !*p_missionAlertAlphaCalculator )
      goto LABEL_18;
    AlphaTransitionCalculator__MakeFadeInFinished(masterMissionAlertPanel, method);
  }
  FirstMstMissionIndex = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 5, v8);
  method = (const MethodInfo *)FirstMstMissionIndex;
  if ( (FirstMstMissionIndex & 0x80000000) != 0 )
  {
    v20 = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 3, v19);
    method = (const MethodInfo *)v20;
    if ( (v20 & 0x80000000) != 0 )
    {
      v22 = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 2, v21);
      method = (const MethodInfo *)v22;
      if ( (v22 & 0x80000000) != 0 )
        goto LABEL_17;
    }
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.currentMissionList;
  if ( !masterMissionAlertPanel )
LABEL_18:
    sub_1BCB254(masterMissionAlertPanel, method);
  if ( SLODWORD(masterMissionAlertPanel->fields.duration) >= 1 )
  {
    this->fields.currentMissionIndex = (int)method;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)masterMissionAlertPanel,
             (int32_t)method,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
      this,
      (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
      v24);
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
    sub_1BCB254(this, missionInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  TransitionCalculator_float__o *missionAlertAlphaCalculator; // x0
  __int64 Instance; // x0
  float mstMissionIconUpdateTimer; // s8
  float deltaTime; // s0
  float v15; // s8
  const MethodInfo *v16; // x2
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v19; // x2
  struct AlphaTransitionCalculator_o *v20; // x8
  TerminalPramsManager_c *v21; // x0
  UnityEngine_Behaviour_o *masterMissionAnimationLabelsTween; // x20
  TerminalPramsManager_c *v23; // x0
  int32_t DispState_k__BackingField; // w8
  UnityEngine_Behaviour_o *v25; // x21
  __int64 v26; // x8
  __int64 v27; // x8
  UnityEngine_Transform_o *v28; // x19

  if ( (byte_4B19042 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__,
      method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v5);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v6);
    sub_1BCAFF8(&Method_TransitionCalculator_float__Update__, v7);
    sub_1BCAFF8(&Method_TransitionCalculator_float__get_Current__, v8);
    byte_4B19042 = 1;
  }
  if ( LimitedMissionAnnouncementComponent__GetEnabledMstMissionCount(this, method) >= 2 )
  {
    missionAlertAlphaCalculator = (TransitionCalculator_float__o *)this->fields.missionAlertAlphaCalculator;
    if ( !missionAlertAlphaCalculator )
      return;
    TransitionCalculator_float___Update(
      missionAlertAlphaCalculator,
      (const MethodInfo_39719C4 *)Method_TransitionCalculator_float__Update__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0LL) )
    {
      mstMissionIconUpdateTimer = this->fields.mstMissionIconUpdateTimer;
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      Instance = (__int64)this->fields.currentMissionList;
      v15 = mstMissionIconUpdateTimer + deltaTime;
      this->fields.mstMissionIconUpdateTimer = v15;
      if ( !Instance )
        goto LABEL_71;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            this->fields.currentMissionIndex,
                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      Instance = *(_QWORD *)(Instance + 16);
      if ( !Instance )
        goto LABEL_71;
      if ( v15 >= MstMissionEntity__GetMissionIconDisplaySec((MstMissionEntity_o *)Instance, 0LL) )
      {
        Instance = (__int64)this->fields.missionAlertAlphaCalculator;
        this->fields.mstMissionIconUpdateTimer = 0.0;
        if ( !Instance )
          goto LABEL_71;
        AlphaTransitionCalculator__SwitchFadeOut((AlphaTransitionCalculator_o *)Instance, v10);
      }
    }
    Instance = (__int64)this->fields.missionAlertAlphaCalculator;
    if ( !Instance )
      goto LABEL_71;
    Instance = AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)Instance, v10);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)this->fields.missionAlertAlphaCalculator;
      if ( !Instance )
        goto LABEL_71;
      AlphaTransitionCalculator__SwitchFadeIn((AlphaTransitionCalculator_o *)Instance, v10);
      Instance = LimitedMissionAnnouncementComponent__GetNextMstMissionIndex(
                   this,
                   this->fields.currentMissionIndex,
                   v16);
      currentMissionList = this->fields.currentMissionList;
      this->fields.currentMissionIndex = Instance;
      if ( !currentMissionList )
        goto LABEL_71;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)currentMissionList,
               Instance,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
        this,
        (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
        v19);
    }
    v20 = this->fields.missionAlertAlphaCalculator;
    if ( !v20 )
      goto LABEL_71;
    Instance = (__int64)this->fields.masterMissionAlertPanel;
    if ( !Instance )
      goto LABEL_71;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL),
      v20->fields._Current_k__BackingField);
  }
  else
  {
    LimitedMissionAnnouncementComponent__InitMstMissionLb(this, v9);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B19076 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v10);
    byte_4B19076 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( !v21->static_fields->_DispState_k__BackingField )
    return;
  masterMissionAnimationLabelsTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionAnimationLabelsTween;
  if ( !v21->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v21);
  if ( !byte_4B19076 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v10);
    byte_4B19076 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  DispState_k__BackingField = v23->static_fields->_DispState_k__BackingField;
  if ( DispState_k__BackingField == 2 )
    v25 = 0LL;
  else
    v25 = masterMissionAnimationLabelsTween;
  if ( DispState_k__BackingField == 2 )
    goto LABEL_48;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v10);
    byte_4B1676D = 1;
  }
  Instance = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v26 = **(_QWORD **)(Instance + 184);
  if ( !v26 )
    goto LABEL_71;
  Instance = *(_QWORD *)(v26 + 256);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0LL) )
    {
      Instance = 0LL;
    }
    else
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B1676D )
      {
        sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v10);
        byte_4B1676D = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v27 = **(_QWORD **)(Instance + 184);
      if ( !v27 )
        goto LABEL_71;
      Instance = *(_QWORD *)(v27 + 240);
      if ( !Instance )
        goto LABEL_71;
      Instance = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)Instance, 0LL);
    }
    masterMissionAnimationLabelsTween = v25;
    if ( !v25 )
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
      v28 = (UnityEngine_Transform_o *)Instance;
      if ( !byte_4B16191 )
      {
        Instance = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v10);
        byte_4B16191 = 1;
      }
      if ( v28 )
      {
        UnityEngine_Transform__set_localPosition(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        return;
      }
    }
LABEL_71:
    sub_1BCB254(Instance, v10);
  }
}


void __fastcall LimitedMissionAnnouncementComponent__mfCheckMasterMission(
        LimitedMissionAnnouncementComponent_o *this,
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
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o **p_currentMissionList; // x20
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_object__o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  void *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x21
  MstMissionEntity_array *EnableMissions; // x22
  __int64 v28; // x2
  int max_length; // w8
  UserEventMissionMaster_o *v30; // x23
  unsigned int v31; // w29
  Il2CppClass **v32; // x8
  MstMissionEntity_o *v33; // x24
  EventMissionEntity_array *v34; // x25
  LimitedMissionAnnouncementComponent_o *AchiveMissionNum; // x0
  int32_t v36; // w26
  int32_t v37; // w27
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t MissionClearCount; // w28
  MasterMissionComponent_MasterMissionInfoItem_o *v41; // x25
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v48; // x20
  System_Predicate_object__o *v49; // x21
  Il2CppObject *v50; // x22
  struct LimitedMissionAnnouncementComponent___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x1
  LimitedMissionAnnouncementComponent_o *v55; // [xsp+8h] [xbp-68h]

  if ( (byte_4B19043 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MstMissionMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v10);
    sub_1BCAFF8(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo, v11);
    sub_1BCAFF8(&System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo, v12);
    sub_1BCAFF8(&ScrPlayerStatus_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BCAFF8(&Method_LimitedMissionAnnouncementComponent___c__mfCheckMasterMission_b__32_0__, v15);
    sub_1BCAFF8(&LimitedMissionAnnouncementComponent___c_TypeInfo, v16);
    byte_4B19043 = 1;
  }
  p_currentMissionList = &this->fields.currentMissionList;
  currentMissionList = this->fields.currentMissionList;
  this->fields.mstMissionStartsAt = 0LL;
  if ( currentMissionList )
  {
    size = currentMissionList->fields._size;
    v20 = currentMissionList->fields._version + 1;
    currentMissionList->fields._size = 0;
    currentMissionList->fields._version = v20;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentMissionList->fields._items, 0, size, 0LL);
  }
  else
  {
    v21 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentMissionList = (System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v21;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.currentMissionList, (int32_t)v21, v22, v23);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_38;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v55 = this;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_38;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v30 = (UserEventMissionMaster_o *)Instance;
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= max_length )
        sub_1BCB25C(Instance, v25, v28);
      v32 = &EnableMissions->obj.klass + (int)v31;
      v33 = (MstMissionEntity_o *)v32[4];
      if ( !v33 )
        break;
      Instance = (void *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v32[4], 0LL);
      if ( (_DWORD)Instance == 5 )
      {
        if ( !MasterData_object )
          break;
        Instance = EventMissionMaster__GetLimitedMissionList(
                     (EventMissionMaster_o *)MasterData_object,
                     v33->fields.id,
                     0LL);
        if ( !Instance )
          break;
        Instance = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)Instance,
                     (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
        if ( !Instance )
          break;
        v34 = (EventMissionEntity_array *)Instance;
        if ( *((_QWORD *)Instance + 3) )
        {
          if ( !v30 )
            break;
          AchiveMissionNum = (LimitedMissionAnnouncementComponent_o *)UserEventMissionMaster__getAchiveMissionNum(
                                                                        v30,
                                                                        v33->fields.id,
                                                                        0LL);
          v36 = v34->max_length;
          v37 = (int)AchiveMissionNum;
          MissionClearCount = LimitedMissionAnnouncementComponent__GetMissionClearCount(AchiveMissionNum, v34, v38, v39);
          v41 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1BCB244(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
          MasterMissionComponent_MasterMissionInfoItem___ctor(v41, v33, v36, MissionClearCount, v37, 0LL);
          Instance = *p_currentMissionList;
          if ( !*p_currentMissionList )
            break;
          v44 = *((_QWORD *)Instance + 2);
          v45 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
          ++*((_DWORD *)Instance + 7);
          if ( !v44 )
            break;
          v46 = *((int *)Instance + 6);
          if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v41,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = v44 + 8 * v46;
            *((_DWORD *)Instance + 6) = v46 + 1;
            *(_QWORD *)(v47 + 32) = v41;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v47 + 32), (int32_t)v41, v42, v43);
          }
        }
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_28;
    }
LABEL_38:
    sub_1BCB254(Instance, v25);
  }
LABEL_28:
  if ( !ScrPlayerStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo);
  ScrPlayerStatus__SortLimitedMstMissionViewList(p_currentMissionList, 0LL);
  Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
  v48 = *p_currentMissionList;
  if ( !LimitedMissionAnnouncementComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent___c_TypeInfo);
    Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
  }
  v49 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v49 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
    }
    v50 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v49 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Predicate_object____ctor(
      v49,
      v50,
      Method_LimitedMissionAnnouncementComponent___c__mfCheckMasterMission_b__32_0__,
      0LL);
    static_fields = LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Predicate_MasterMissionComponent_MasterMissionInfoItem__o *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)v49, v52, v53);
  }
  if ( !v48 )
    goto LABEL_38;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v48,
    (System_Predicate_T__o *)v49,
    (const MethodInfo_36BB22C *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
  LimitedMissionAnnouncementComponent__InitMstMissionLb(v55, v54);
}


void __fastcall LimitedMissionAnnouncementComponent__mfInitUserData(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  this = (LimitedMissionAnnouncementComponent_o *)((char *)this + 144);
  sub_1BCAF9C((CGThumbnailListItem_o *)this, (int32_t)SelfUserGame, v4, v5);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B19049 & 1) == 0 )
  {
    sub_1BCAFF8(&LimitedMissionAnnouncementComponent___c_TypeInfo, v1);
    byte_4B19049 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(LimitedMissionAnnouncementComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields->__9 = (struct LimitedMissionAnnouncementComponent___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1BCB254(this, 0LL);
  return x->fields._MissionAchiveCount_k__BackingField == x->fields._MissionCount_k__BackingField;
}