void LimitedMissionAnnouncementComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596D08A & 1) == 0 )
  {
    sub_2213A60(&LimitedMissionAnnouncementComponent_TypeInfo);
    sub_2213A60(&StringLiteral_17754/*"banner_icon_mission_limited_"*/);
    byte_596D08A = 1;
  }
  v7 = StringLiteral_17754/*"banner_icon_mission_limited_"*/;
  LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX = (struct System_String_o *)StringLiteral_17754/*"banner_icon_mission_limited_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)LimitedMissionAnnouncementComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *masterMissionLimitedBgSp; // x22
  LimitedMissionAnnouncementComponent_c *v9; // x0
  System_String_o *MASTER_MISSION_ICON_LIMITED_PREFIX; // x23
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x23
  __int64 v15; // x2
  LimitedMissionAnnouncementComponent_c *v16; // x0
  UISprite_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *masterMissionDetailOverlapLb; // x22
  UILabel_o *masterMissionDetailLb; // x23
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  MstMissionEntity_c *v26; // x0
  LimitedMissionAnnouncementComponent_o *v27; // x24
  UILabel_o *masterMissionCountNumLb; // x22
  int32_t MissionCount_k__BackingField; // w8
  UILabel_o *masterMissionCountNumLb2; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  int64_t NextDayStartTime; // x20
  struct UILabel_o *masterMissionAlertNumLb; // x8
  struct UILabel_o *masterMissionAlertUnitLb; // x8
  bool IsNullOrEmpty; // w8
  __int64 v37; // x1
  __int64 v38; // x2
  LimitedMissionAnnouncementComponent_o *masterMissionAlertMsgLb; // x19
  LimitedMissionAnnouncementComponent_o *v40; // x1
  int32_t MissionAchiveCount_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_596D082 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LimitedMissionAnnouncementComponent_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MstMissionEntity_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_13971/*"TIME_REST_ACHIVE"*/);
    this = (LimitedMissionAnnouncementComponent_o *)sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596D082 = 1;
  }
  MissionAchiveCount_k__BackingField = 0;
  if ( !mstMissionInfo )
    goto LABEL_54;
  MstMissionEntity_k__BackingField = mstMissionInfo->fields._MstMissionEntity_k__BackingField;
  if ( !MstMissionEntity_k__BackingField )
    goto LABEL_54;
  if ( MstMissionEntity__getMissionType(mstMissionInfo->fields._MstMissionEntity_k__BackingField, 0) != 5 )
  {
    LimitedMissionAnnouncementComponent__HideMstMissionIconLb(v4, (const MethodInfo *)mstMissionInfo);
    return;
  }
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionLimitedBgObj;
  if ( !this )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAnimationLabelsRoot;
  if ( !this )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  masterMissionLimitedBgSp = v4->fields.masterMissionLimitedBgSp;
  v9 = LimitedMissionAnnouncementComponent_TypeInfo;
  if ( !*(&LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo, v6, v7);
    v9 = LimitedMissionAnnouncementComponent_TypeInfo;
  }
  MASTER_MISSION_ICON_LIMITED_PREFIX = v9->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX;
  v11 = System_Int32__ToString((int)MstMissionEntity_k__BackingField + 56, 0);
  v14 = System_String__Concat_75651716(MASTER_MISSION_ICON_LIMITED_PREFIX, v11, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
  if ( !AtlasManager__SetBanner(masterMissionLimitedBgSp, v14, 0) )
  {
    v16 = LimitedMissionAnnouncementComponent_TypeInfo;
    v17 = v4->fields.masterMissionLimitedBgSp;
    if ( !*(&LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo, mstMissionInfo, v15);
      v16 = LimitedMissionAnnouncementComponent_TypeInfo;
    }
    v20 = System_String__Concat_75651716(
            v16->static_fields->MASTER_MISSION_ICON_LIMITED_PREFIX,
            (System_String_o *)StringLiteral_1198/*"0"*/,
            0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18, v19);
    AtlasManager__SetBanner(v17, v20, 0);
  }
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionLimitedBgSp;
  if ( !this )
    goto LABEL_54;
  ((void (__fastcall *)(LimitedMissionAnnouncementComponent_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
  masterMissionDetailLb = v4->fields.masterMissionDetailLb;
  masterMissionDetailOverlapLb = v4->fields.masterMissionDetailOverlapLb;
  script = MstMissionEntity_k__BackingField->fields.script;
  v26 = MstMissionEntity_TypeInfo;
  if ( !*(&MstMissionEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, v21, v22);
    v26 = MstMissionEntity_TypeInfo;
  }
  this = (LimitedMissionAnnouncementComponent_o *)EntityScriptUtil__GetStringValue(
                                                    script,
                                                    v26->static_fields->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
                                                    0,
                                                    0);
  if ( !masterMissionDetailLb )
    goto LABEL_54;
  v27 = this;
  UILabel__set_text(masterMissionDetailLb, (System_String_o *)this, 0);
  if ( !masterMissionDetailOverlapLb )
    goto LABEL_54;
  UILabel__set_text(masterMissionDetailOverlapLb, (System_String_o *)v27, 0);
  masterMissionCountNumLb = v4->fields.masterMissionCountNumLb;
  MissionAchiveCount_k__BackingField = mstMissionInfo->fields._MissionAchiveCount_k__BackingField;
  this = (LimitedMissionAnnouncementComponent_o *)System_Int32__ToString(
                                                    (int32_t)&MissionAchiveCount_k__BackingField,
                                                    0);
  if ( !masterMissionCountNumLb )
    goto LABEL_54;
  UILabel__set_text(masterMissionCountNumLb, (System_String_o *)this, 0);
  MissionCount_k__BackingField = mstMissionInfo->fields._MissionCount_k__BackingField;
  masterMissionCountNumLb2 = v4->fields.masterMissionCountNumLb2;
  MissionAchiveCount_k__BackingField = MissionCount_k__BackingField;
  this = (LimitedMissionAnnouncementComponent_o *)System_Int32__ToString(
                                                    (int32_t)&MissionAchiveCount_k__BackingField,
                                                    0);
  if ( !masterMissionCountNumLb2 )
    goto LABEL_54;
  UILabel__set_text(masterMissionCountNumLb2, (System_String_o *)this, 0);
  if ( MstMissionEntity__getMissionType(MstMissionEntity_k__BackingField, 0) == 3 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31, v32);
    NextDayStartTime = NetworkManager__getNextDayStartTime(0);
  }
  else
  {
    NextDayStartTime = MstMissionEntity_k__BackingField->fields.endedAt;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
  LocalizationManager__GetRestTimeWithSeparatedTimeStr(
    NextDayStartTime,
    &v4->fields.mstMissionTimeNumStr,
    &v4->fields.mstMissionTimeCntStr,
    0);
  masterMissionAlertNumLb = v4->fields.masterMissionAlertNumLb;
  if ( !masterMissionAlertNumLb )
    goto LABEL_54;
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.mstMissionTimeNumStr;
  if ( !this )
    goto LABEL_54;
  this = (LimitedMissionAnnouncementComponent_o *)System_String__Equals_75686512(
                                                    (System_String_o *)this,
                                                    masterMissionAlertNumLb->fields.mText,
                                                    0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    masterMissionAlertUnitLb = v4->fields.masterMissionAlertUnitLb;
    if ( !masterMissionAlertUnitLb )
      goto LABEL_54;
    this = (LimitedMissionAnnouncementComponent_o *)v4->fields.mstMissionTimeCntStr;
    if ( !this )
      goto LABEL_54;
    if ( System_String__Equals_75686512((System_String_o *)this, masterMissionAlertUnitLb->fields.mText, 0) )
      return;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v4->fields.mstMissionTimeNumStr, 0);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertTitleLb;
  if ( !IsNullOrEmpty )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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
            v40 = (LimitedMissionAnnouncementComponent_o *)StringLiteral_1/*""*/;
            goto LABEL_52;
          }
        }
      }
    }
LABEL_54:
    sub_2213CDC(this, mstMissionInfo);
  }
  if ( !this )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertNumLb;
  if ( !this )
    goto LABEL_54;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertUnitLb;
  if ( !this )
    goto LABEL_54;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  masterMissionAlertMsgLb = (LimitedMissionAnnouncementComponent_o *)v4->fields.masterMissionAlertMsgLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
  this = (LimitedMissionAnnouncementComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13971/*"TIME_REST_ACHIVE"*/, 0);
  if ( !masterMissionAlertMsgLb )
    goto LABEL_54;
  v40 = this;
  this = masterMissionAlertMsgLb;
LABEL_52:
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v40, 0);
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

  if ( (byte_596D086 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D086 = 1;
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
      v9 += LimitedMissionAnnouncementComponent__IsEnabledMstMission(
              (LimitedMissionAnnouncementComponent_o *)Item,
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
int32_t LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(
        LimitedMissionAnnouncementComponent_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Time; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentMissionList; // x8
  int size; // w24
  int64_t v9; // x21
  int32_t v10; // w22
  MasterMissionComponent_MasterMissionInfoItem_o *v11; // x23
  LimitedMissionAnnouncementComponent_o *MissionType; // x0
  const MethodInfo *v13; // x3

  if ( (byte_596D087 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D087 = 1;
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
      MissionType = (LimitedMissionAnnouncementComponent_o *)MstMissionEntity__getMissionType(
                                                               (MstMissionEntity_o *)Time,
                                                               0);
      if ( (_DWORD)MissionType == targetType
        && LimitedMissionAnnouncementComponent__IsEnabledMstMission(MissionType, v11, v9, v13) )
      {
        return v10;
      }
      if ( size == ++v10 )
        return -1;
    }
LABEL_16:
    sub_2213CDC(Time, v6);
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
  int32_t missionTargetId; // w23
  int32_t id; // w24
  bool v13; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  bool IsIgnoreStartCondition; // w25
  int32_t MissionProgressType_55002764; // w0

  if ( (byte_596D088 & 1) == 0 )
  {
    this = (LimitedMissionAnnouncementComponent_o *)sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_596D088 = 1;
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
      this = (LimitedMissionAnnouncementComponent_o *)MissionInfoMaker__GetProgStatus(
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


// local variable allocation has failed, the output may be wrong!
int32_t LimitedMissionAnnouncementComponent__GetNextMstMissionIndex(
        LimitedMissionAnnouncementComponent_o *this,
        int32_t startIndex,
        const MethodInfo *method)
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
  if ( (byte_596D089 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D089 = 1;
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
    if ( LimitedMissionAnnouncementComponent__IsEnabledMstMission(
           (LimitedMissionAnnouncementComponent_o *)Item,
           (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
           v9,
           v12) )
    {
      return v3;
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
    sub_2213CDC(masterMissionLimitedBgObj, method);
  }
  UnityEngine_GameObject__SetActive(masterMissionLimitedBgObj, 0, 0);
}


void LimitedMissionAnnouncementComponent__InitMstMissionLb(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *masterMissionAlertPanel; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct AlphaTransitionCalculator_o **p_missionAlertAlphaCalculator; // x20
  LimitedMissionAnnouncementComponent_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // s8
  TitleInfoControl_c *v11; // x0
  System_Func_float__float__float__float__o *v12; // x21
  AlphaTransitionCalculator_o *v13; // x22
  const MethodInfo *v14; // x2
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  unsigned int FirstMstMissionIndex; // w0
  const MethodInfo *v22; // x2
  unsigned int v23; // w0
  const MethodInfo *v24; // x2
  unsigned int v25; // w0
  Il2CppObject *Item; // x1
  const MethodInfo *v27; // x2

  if ( (byte_596D083 & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&LimitedMissionAnnouncementComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&TitleInfoControl_TypeInfo);
    byte_596D083 = 1;
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
    v7 = LimitedMissionAnnouncementComponent_TypeInfo;
    if ( !*(&LimitedMissionAnnouncementComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent_TypeInfo, v4, v5);
      v7 = LimitedMissionAnnouncementComponent_TypeInfo;
    }
    v10 = ChangedFPSUtil__CovertFrameNumToSecond(v7->static_fields->MISSION_ALERT_FADE_FRAME_NUM, 0);
    v11 = TitleInfoControl_TypeInfo;
    if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v8, v9);
      v11 = TitleInfoControl_TypeInfo;
    }
    v12 = ExtraEasing__AsymptoticSeriesFloat(
            v11->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
            (float)LimitedMissionAnnouncementComponent_TypeInfo->static_fields->MISSION_ALERT_FADE_FRAME_NUM,
            0);
    v13 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
    AlphaTransitionCalculator___ctor(v13, v10, v12, v14);
    *p_missionAlertAlphaCalculator = v13;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.missionAlertAlphaCalculator,
      (int32_t)v13,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    masterMissionAlertPanel = *p_missionAlertAlphaCalculator;
    if ( !*p_missionAlertAlphaCalculator )
      goto LABEL_18;
    AlphaTransitionCalculator__MakeFadeInFinished(masterMissionAlertPanel, method);
  }
  FirstMstMissionIndex = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 5, v5);
  method = (const MethodInfo *)FirstMstMissionIndex;
  if ( (FirstMstMissionIndex & 0x80000000) != 0 )
  {
    v23 = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 3, v22);
    method = (const MethodInfo *)v23;
    if ( (v23 & 0x80000000) != 0 )
    {
      v25 = LimitedMissionAnnouncementComponent__GetFirstMstMissionIndex(this, 2, v24);
      method = (const MethodInfo *)v25;
      if ( (v25 & 0x80000000) != 0 )
        goto LABEL_17;
    }
  }
  masterMissionAlertPanel = (AlphaTransitionCalculator_o *)this->fields.currentMissionList;
  if ( !masterMissionAlertPanel )
LABEL_18:
    sub_2213CDC(masterMissionAlertPanel, method);
  if ( SLODWORD(masterMissionAlertPanel->fields.duration) >= 1 )
  {
    this->fields.currentMissionIndex = (int)method;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)masterMissionAlertPanel,
             (int32_t)method,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
      this,
      (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
      v27);
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
    sub_2213CDC(this, missionInfo);
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
  __int64 v5; // x2
  TransitionCalculator_float__o *missionAlertAlphaCalculator; // x0
  __int64 Instance; // x0
  float mstMissionIconUpdateTimer; // s8
  float v9; // s8
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_object__o *currentMissionList; // x8
  Il2CppObject *Item; // x0
  const MethodInfo *v13; // x2
  struct AlphaTransitionCalculator_o *v14; // x8
  TerminalPramsManager_c *v15; // x0
  UnityEngine_Behaviour_o *masterMissionAnimationLabelsTween; // x20
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x8
  __int64 v19; // x2
  UnityEngine_Transform_o *v20; // x19
  __int64 v21; // x8

  if ( (byte_596D084 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    sub_2213A60(&Method_TransitionCalculator_float__get_Current__);
    byte_596D084 = 1;
  }
  if ( LimitedMissionAnnouncementComponent__GetEnabledMstMissionCount(this, method) >= 2 )
  {
    missionAlertAlphaCalculator = (TransitionCalculator_float__o *)this->fields.missionAlertAlphaCalculator;
    if ( !missionAlertAlphaCalculator )
      return;
    TransitionCalculator_float___Update(
      missionAlertAlphaCalculator,
      (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) )
    {
      mstMissionIconUpdateTimer = this->fields.mstMissionIconUpdateTimer;
      v9 = mstMissionIconUpdateTimer + UnityEngine_Time__get_deltaTime(0);
      Instance = (__int64)this->fields.currentMissionList;
      this->fields.mstMissionIconUpdateTimer = v9;
      if ( !Instance )
        goto LABEL_65;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            this->fields.currentMissionIndex,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      if ( !Instance )
        goto LABEL_65;
      Instance = *(_QWORD *)(Instance + 16);
      if ( !Instance )
        goto LABEL_65;
      if ( v9 >= MstMissionEntity__GetMissionIconDisplaySec((MstMissionEntity_o *)Instance, 0) )
      {
        Instance = (__int64)this->fields.missionAlertAlphaCalculator;
        this->fields.mstMissionIconUpdateTimer = 0.0;
        if ( !Instance )
          goto LABEL_65;
        AlphaTransitionCalculator__SwitchFadeOut((AlphaTransitionCalculator_o *)Instance, v4);
      }
    }
    Instance = (__int64)this->fields.missionAlertAlphaCalculator;
    if ( !Instance )
      goto LABEL_65;
    Instance = AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)Instance, v4);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)this->fields.missionAlertAlphaCalculator;
      if ( !Instance )
        goto LABEL_65;
      AlphaTransitionCalculator__SwitchFadeIn((AlphaTransitionCalculator_o *)Instance, v4);
      Instance = LimitedMissionAnnouncementComponent__GetNextMstMissionIndex(
                   this,
                   this->fields.currentMissionIndex,
                   v10);
      currentMissionList = (System_Collections_Generic_List_object__o *)this->fields.currentMissionList;
      this->fields.currentMissionIndex = Instance;
      if ( !currentMissionList )
        goto LABEL_65;
      Item = System_Collections_Generic_List_object___get_Item(
               currentMissionList,
               Instance,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
      LimitedMissionAnnouncementComponent__ChangeViewMstMissionLb(
        this,
        (MasterMissionComponent_MasterMissionInfoItem_o *)Item,
        v13);
    }
    v14 = this->fields.missionAlertAlphaCalculator;
    if ( !v14 )
      goto LABEL_65;
    Instance = (__int64)this->fields.masterMissionAlertPanel;
    if ( !Instance )
      goto LABEL_65;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)Instance + 440LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 448LL),
      v14->fields._Current_k__BackingField);
  }
  else
  {
    LimitedMissionAnnouncementComponent__InitMstMissionLb(this, v3);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
  if ( !byte_596D0B9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D0B9 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( v15->static_fields->_DispState_k__BackingField )
  {
    masterMissionAnimationLabelsTween = (UnityEngine_Behaviour_o *)this->fields.masterMissionAnimationLabelsTween;
    if ( !*(&v15->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v15, v4, v5);
    if ( !byte_596D0B9 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D0B9 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( v17->static_fields->_DispState_k__BackingField == 2 )
      goto LABEL_47;
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
    v18 = **(_QWORD **)(Instance + 184);
    if ( !v18 )
      goto LABEL_65;
    Instance = *(_QWORD *)(v18 + 256);
    if ( !Instance )
      goto LABEL_65;
    if ( ScrTerminalListTop__get_IsActiveAnyEarth((ScrTerminalListTop_o *)Instance, 0) )
      goto LABEL_47;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_65;
    if ( QuestAfterAction__IsPlaying((QuestAfterAction_o *)Instance, 0) )
    {
LABEL_47:
      Instance = 0;
      if ( !masterMissionAnimationLabelsTween )
        goto LABEL_65;
    }
    else
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v19);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      Instance = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v19);
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v21 = **(_QWORD **)(Instance + 184);
      if ( !v21 )
        goto LABEL_65;
      Instance = *(_QWORD *)(v21 + 240);
      if ( !Instance )
        goto LABEL_65;
      Instance = TitleInfoControl__IsTouchEnable((TitleInfoControl_o *)Instance, 0);
      if ( !masterMissionAnimationLabelsTween )
        goto LABEL_65;
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
        v20 = (UnityEngine_Transform_o *)Instance;
        if ( !byte_5969AE0 )
        {
          Instance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( v20 )
        {
          UnityEngine_Transform__set_localPosition(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
          return;
        }
      }
    }
LABEL_65:
    sub_2213CDC(Instance, v4);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  void *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x21
  MstMissionEntity_array *EnableMissions; // x22
  __int64 v18; // x2
  int max_length; // w8
  UserEventMissionMaster_o *v20; // x23
  unsigned int v21; // w19
  Il2CppClass **v22; // x8
  MstMissionEntity_o *v23; // x24
  EventMissionEntity_array *v24; // x25
  LimitedMissionAnnouncementComponent_o *AchiveMissionNum; // x0
  int32_t v26; // w26
  int32_t v27; // w27
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t MissionClearCount; // w28
  MasterMissionComponent_MasterMissionInfoItem_o *v31; // x25
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  __int64 v42; // x2
  System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *v43; // x20
  struct LimitedMissionAnnouncementComponent___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__32_0; // x21
  Il2CppObject *v46; // x22
  struct LimitedMissionAnnouncementComponent___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  const MethodInfo *v54; // x1
  LimitedMissionAnnouncementComponent_o *v55; // [xsp+8h] [xbp-68h]

  if ( (byte_596D085 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_2213A60(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    sub_2213A60(&System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    sub_2213A60(&ScrPlayerStatus_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_LimitedMissionAnnouncementComponent___c__mfCheckMasterMission_b__32_0__);
    sub_2213A60(&LimitedMissionAnnouncementComponent___c_TypeInfo);
    byte_596D085 = 1;
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
    v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    *p_currentMissionList = (System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentMissionList,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_38;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v55 = this;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_38;
  max_length = EnableMissions->max_length;
  if ( max_length >= 1 )
  {
    v20 = (UserEventMissionMaster_o *)Instance;
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_2213CE4(Instance);
      v22 = &EnableMissions->obj.klass + (int)v21;
      v23 = (MstMissionEntity_o *)v22[4];
      if ( !v23 )
        break;
      Instance = (void *)MstMissionEntity__getMissionType((MstMissionEntity_o *)v22[4], 0);
      if ( (_DWORD)Instance == 5 )
      {
        if ( !MasterData_object )
          break;
        Instance = EventMissionMaster__GetLimitedMissionList(
                     (EventMissionMaster_o *)MasterData_object,
                     v23->fields.id,
                     0);
        if ( !Instance )
          break;
        Instance = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)Instance,
                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
        if ( !Instance )
          break;
        v24 = (EventMissionEntity_array *)Instance;
        if ( *((_QWORD *)Instance + 3) )
        {
          if ( !v20 )
            break;
          AchiveMissionNum = (LimitedMissionAnnouncementComponent_o *)UserEventMissionMaster__getAchiveMissionNum(
                                                                        v20,
                                                                        v23->fields.id,
                                                                        0);
          v26 = v24->max_length;
          v27 = (int)AchiveMissionNum;
          MissionClearCount = LimitedMissionAnnouncementComponent__GetMissionClearCount(AchiveMissionNum, v24, v28, v29);
          v31 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_2213CCC(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
          MasterMissionComponent_MasterMissionInfoItem___ctor(v31, v23, v26, MissionClearCount, v27, 0);
          Instance = *p_currentMissionList;
          if ( !*p_currentMissionList )
            break;
          v38 = *((_QWORD *)Instance + 2);
          v39 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
          ++*((_DWORD *)Instance + 7);
          if ( !v38 )
            break;
          v40 = *((int *)Instance + 6);
          if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v31,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = v38 + 8 * v40;
            *((_DWORD *)Instance + 6) = v40 + 1;
            *(_QWORD *)(v41 + 32) = v31;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
          }
        }
      }
      max_length = EnableMissions->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_28;
    }
LABEL_38:
    sub_2213CDC(Instance, v15);
  }
LABEL_28:
  if ( !*(&ScrPlayerStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrPlayerStatus_TypeInfo, v15, v18);
  ScrPlayerStatus__SortLimitedMstMissionViewList(p_currentMissionList, 0);
  Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
  v43 = *p_currentMissionList;
  if ( !*(&LimitedMissionAnnouncementComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LimitedMissionAnnouncementComponent___c_TypeInfo, v15, v42);
    Instance = LimitedMissionAnnouncementComponent___c_TypeInfo;
  }
  static_fields = (struct LimitedMissionAnnouncementComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__32_0 = (System_Predicate_object__o *)static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v15, v42);
      static_fields = LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__32_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    System_Predicate_object____ctor(
      _9__32_0,
      v46,
      Method_LimitedMissionAnnouncementComponent___c__mfCheckMasterMission_b__32_0__,
      0);
    v47 = LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields;
    v47->__9__32_0 = (struct System_Predicate_MasterMissionComponent_MasterMissionInfoItem__o *)_9__32_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->__9__32_0, (int32_t)_9__32_0, v48, v49, v50, v51, v52, v53);
  }
  if ( !v43 )
    goto LABEL_38;
  System_Collections_Generic_List_object___RemoveAll(
    (System_Collections_Generic_List_object__o *)v43,
    (System_Predicate_T__o *)_9__32_0,
    (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__RemoveAll__);
  LimitedMissionAnnouncementComponent__InitMstMissionLb(v55, v54);
}


void LimitedMissionAnnouncementComponent__mfInitUserData(
        LimitedMissionAnnouncementComponent_o *this,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  this = (LimitedMissionAnnouncementComponent_o *)((char *)this + 144);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)this, (int32_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D08B & 1) == 0 )
  {
    sub_2213A60(&LimitedMissionAnnouncementComponent___c_TypeInfo);
    byte_596D08B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(LimitedMissionAnnouncementComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields->__9 = (struct LimitedMissionAnnouncementComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)LimitedMissionAnnouncementComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return x->fields._MissionAchiveCount_k__BackingField == x->fields._MissionCount_k__BackingField;
}