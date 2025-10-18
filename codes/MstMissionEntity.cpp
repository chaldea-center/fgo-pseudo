void MstMissionEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct MstMissionEntity_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct MstMissionEntity_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct MstMissionEntity_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct MstMissionEntity_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C434D6 & 1) == 0 )
  {
    sub_1C37058(&MstMissionEntity_TypeInfo);
    sub_1C37058(&StringLiteral_8682/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/);
    sub_1C37058(&StringLiteral_8681/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/);
    sub_1C37058(&StringLiteral_21607/*"missionIconDetailText"*/);
    sub_1C37058(&StringLiteral_21608/*"missionIconDisplayMsGroup"*/);
    byte_4C434D6 = 1;
  }
  static_fields = MstMissionEntity_TypeInfo->static_fields;
  static_fields->MS_TO_SEC_DIVISOR = 1000.0;
  v4 = StringLiteral_8682/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL = (struct System_String_o *)StringLiteral_8682/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL, v4, v1, v2);
  v5 = StringLiteral_8681/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  v6 = MstMissionEntity_TypeInfo->static_fields;
  v6->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED = (struct System_String_o *)StringLiteral_8681/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED, v5, v7, v8);
  v9 = StringLiteral_21607/*"missionIconDetailText"*/;
  v10 = MstMissionEntity_TypeInfo->static_fields;
  v10->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT = (struct System_String_o *)StringLiteral_21607/*"missionIconDetailText"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT, v9, v11, v12);
  v13 = StringLiteral_21608/*"missionIconDisplayMsGroup"*/;
  v14 = MstMissionEntity_TypeInfo->static_fields;
  v14->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP = (struct System_String_o *)StringLiteral_21608/*"missionIconDisplayMsGroup"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP, v13, v15, v16);
}


void MstMissionEntity___ctor(MstMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C434D5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C434D5 = 1;
  }
  this->fields.WEEK_TIME = 604800;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


int32_t MstMissionEntity__CreatePrimaryKey(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float MstMissionEntity__GetMissionIconDisplaySec(MstMissionEntity_o *this, const MethodInfo *method)
{
  MstMissionEntity_c *v3; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *StringValue; // x19
  MstMissionEntity_c *IsNullOrWhiteSpace; // x0
  BalanceConfig_c *v7; // x8
  char v8; // w21
  System_Collections_Generic_Dictionary_object__int__o *MissionIconDisplayMsDictionary; // x20
  int Item; // w19
  MstMissionEntity_c *v11; // x0
  TitleInfoControl_c *v13; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C434D4 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&MstMissionEntity_TypeInfo);
    sub_1C37058(&TitleInfoControl_TypeInfo);
    byte_4C434D4 = 1;
  }
  v3 = MstMissionEntity_TypeInfo;
  script = this->fields.script;
  if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
    v3 = MstMissionEntity_TypeInfo;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  v3->static_fields->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP,
                  0,
                  0);
  value = -1;
  IsNullOrWhiteSpace = (MstMissionEntity_c *)System_String__IsNullOrWhiteSpace(StringValue, 0);
  v7 = BalanceConfig_TypeInfo;
  v8 = (char)IsNullOrWhiteSpace;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  MissionIconDisplayMsDictionary = (System_Collections_Generic_Dictionary_object__int__o *)v7->static_fields->MissionIconDisplayMsDictionary;
  if ( (v8 & 1) != 0 )
  {
    IsNullOrWhiteSpace = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
    if ( MissionIconDisplayMsDictionary )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               MissionIconDisplayMsDictionary,
               (Il2CppObject *)MstMissionEntity_TypeInfo->static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
               (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      value = Item;
      goto LABEL_14;
    }
LABEL_21:
    sub_1C372B4(IsNullOrWhiteSpace);
  }
  if ( !MissionIconDisplayMsDictionary )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    MissionIconDisplayMsDictionary,
    (Il2CppObject *)StringValue,
    &value,
    (const MethodInfo_345C0BC *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
  Item = value;
LABEL_14:
  if ( Item <= 0 )
  {
    v13 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v13 = TitleInfoControl_TypeInfo;
    }
    return v13->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL;
  }
  else
  {
    v11 = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
      v11 = MstMissionEntity_TypeInfo;
    }
    return (float)Item / v11->static_fields->MS_TO_SEC_DIVISOR;
  }
}


int32_t MstMissionEntity__getMissionType(MstMissionEntity_o *this, const MethodInfo *method)
{
  EventMissionEntity_array *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  EventMissionEntity_o *v5; // x8

  if ( (byte_4C434D3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C434D3 = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, this->fields.id, 0);
  if ( !Instance )
    goto LABEL_11;
  max_length = Instance->max_length;
  if ( max_length )
  {
    if ( !(_DWORD)max_length )
      sub_1C372BC(Instance);
    v5 = Instance->m_Items[0];
    if ( v5 )
      return v5->fields.type;
LABEL_11:
    sub_1C372B4(Instance);
  }
  return 0;
}


bool MstMissionEntity__hasUnarchived(MstMissionEntity_o *this, const MethodInfo *method)
{
  UserEventMissionEntity_array *Instance; // x0
  System_Int32_array *MissionIdListByEvent; // x20
  int max_length; // w8
  bool v6; // vf
  int v7; // w8
  int v8; // w9
  UserEventMissionEntity_o *v9; // x10
  int32_t missionProgressType; // w10

  if ( (byte_4C434D2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C434D2 = 1;
  }
  Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
    || (MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                                 (EventMissionMaster_o *)Instance,
                                 this->fields.id,
                                 0),
        (Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0
    || (Instance = UserEventMissionMaster__getUserEventMissionList(
                     (UserEventMissionMaster_o *)Instance,
                     this->fields.id,
                     0)) == 0
    || !MissionIdListByEvent )
  {
LABEL_18:
    sub_1C372B4(Instance);
  }
  max_length = Instance->max_length;
  if ( LODWORD(MissionIdListByEvent->max_length) != max_length )
    return 1;
  v6 = __OFSUB__(max_length, 1);
  v7 = max_length - 1;
  if ( v7 < 0 != v6 )
    return 0;
  v8 = 0;
  do
  {
    v9 = Instance->m_Items[v8];
    if ( !v9 )
      goto LABEL_18;
    missionProgressType = v9->fields.missionProgressType;
    if ( v7 == v8 )
      break;
    ++v8;
  }
  while ( missionProgressType == 5 );
  return missionProgressType != 5;
}


bool MstMissionEntity__isActive(MstMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.closedAt >= checkTime;
}


bool MstMissionEntity__isActiveNow(MstMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4C434D1 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C434D1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return this->fields.startedAt <= Time && this->fields.closedAt >= Time;
}


bool MstMissionEntity__isOpen(MstMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.endedAt >= checkTime;
}


bool MstMissionEntity__isOpenNow(MstMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4C434D0 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C434D0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return this->fields.startedAt <= Time && this->fields.endedAt >= Time;
}


bool MstMissionEntity__isWeekly(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.endedAt - this->fields.startedAt <= this->fields.WEEK_TIME;
}