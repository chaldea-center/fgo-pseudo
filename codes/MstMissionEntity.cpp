void MstMissionEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct MstMissionEntity_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct MstMissionEntity_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  struct MstMissionEntity_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  struct MstMissionEntity_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4D2CD95 & 1) == 0 )
  {
    sub_1C94098(&MstMissionEntity_TypeInfo);
    sub_1C94098(&StringLiteral_8702/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/);
    sub_1C94098(&StringLiteral_8701/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/);
    sub_1C94098(&StringLiteral_21812/*"missionIconDetailText"*/);
    sub_1C94098(&StringLiteral_21813/*"missionIconDisplayMsGroup"*/);
    byte_4D2CD95 = 1;
  }
  static_fields = MstMissionEntity_TypeInfo->static_fields;
  static_fields->MS_TO_SEC_DIVISOR = 1000.0;
  v8 = StringLiteral_8702/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL = (struct System_String_o *)StringLiteral_8702/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
    v8,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v9 = StringLiteral_8701/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  v10 = MstMissionEntity_TypeInfo->static_fields;
  v10->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED = (struct System_String_o *)StringLiteral_8701/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v10->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED,
    v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_21812/*"missionIconDetailText"*/;
  v18 = MstMissionEntity_TypeInfo->static_fields;
  v18->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT = (struct System_String_o *)StringLiteral_21812/*"missionIconDetailText"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v18->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
    v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = StringLiteral_21813/*"missionIconDisplayMsGroup"*/;
  v26 = MstMissionEntity_TypeInfo->static_fields;
  v26->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP = (struct System_String_o *)StringLiteral_21813/*"missionIconDisplayMsGroup"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v26->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP,
    v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void MstMissionEntity___ctor(MstMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CD94 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2CD94 = 1;
  }
  this->fields.WEEK_TIME = 604800;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
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
  __int64 v7; // x1
  BalanceConfig_c *v8; // x8
  char v9; // w21
  System_Collections_Generic_Dictionary_object__int__o *MissionIconDisplayMsDictionary; // x20
  int Item; // w19
  MstMissionEntity_c *v12; // x0
  TitleInfoControl_c *v14; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2CD93 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C94098(&MstMissionEntity_TypeInfo);
    sub_1C94098(&TitleInfoControl_TypeInfo);
    byte_4D2CD93 = 1;
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
  v8 = BalanceConfig_TypeInfo;
  v9 = (char)IsNullOrWhiteSpace;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  MissionIconDisplayMsDictionary = (System_Collections_Generic_Dictionary_object__int__o *)v8->static_fields->MissionIconDisplayMsDictionary;
  if ( (v9 & 1) != 0 )
  {
    IsNullOrWhiteSpace = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
    if ( MissionIconDisplayMsDictionary )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               MissionIconDisplayMsDictionary,
               (Il2CppObject *)MstMissionEntity_TypeInfo->static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
               (const MethodInfo_3517E44 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      value = Item;
      goto LABEL_14;
    }
LABEL_21:
    sub_1C942F0(IsNullOrWhiteSpace, v7);
  }
  if ( !MissionIconDisplayMsDictionary )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    MissionIconDisplayMsDictionary,
    (Il2CppObject *)StringValue,
    &value,
    (const MethodInfo_3519680 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
  Item = value;
LABEL_14:
  if ( Item <= 0 )
  {
    v14 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v14 = TitleInfoControl_TypeInfo;
    }
    return v14->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL;
  }
  else
  {
    v12 = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
      v12 = MstMissionEntity_TypeInfo;
    }
    return (float)Item / v12->static_fields->MS_TO_SEC_DIVISOR;
  }
}


int32_t MstMissionEntity__getMissionType(MstMissionEntity_o *this, const MethodInfo *method)
{
  EventMissionEntity_array *Instance; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x8
  EventMissionEntity_o *v6; // x8

  if ( (byte_4D2CD92 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CD92 = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, this->fields.id, 0);
  if ( !Instance )
    goto LABEL_11;
  max_length = Instance->max_length;
  if ( max_length )
  {
    if ( !(_DWORD)max_length )
      sub_1C942F8(Instance);
    v6 = Instance->m_Items[0];
    if ( v6 )
      return v6->fields.type;
LABEL_11:
    sub_1C942F0(Instance, v4);
  }
  return 0;
}


bool MstMissionEntity__hasUnarchived(MstMissionEntity_o *this, const MethodInfo *method)
{
  UserEventMissionEntity_array *Instance; // x0
  __int64 v4; // x1
  System_Int32_array *MissionIdListByEvent; // x20
  int max_length; // w8
  bool v7; // vf
  int v8; // w8
  int v9; // w9
  UserEventMissionEntity_o *v10; // x10
  int32_t missionProgressType; // w10

  if ( (byte_4D2CD91 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CD91 = 1;
  }
  Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
    || (MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                                 (EventMissionMaster_o *)Instance,
                                 this->fields.id,
                                 0),
        (Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0
    || (Instance = UserEventMissionMaster__getUserEventMissionList(
                     (UserEventMissionMaster_o *)Instance,
                     this->fields.id,
                     0)) == 0
    || !MissionIdListByEvent )
  {
LABEL_18:
    sub_1C942F0(Instance, v4);
  }
  max_length = Instance->max_length;
  if ( LODWORD(MissionIdListByEvent->max_length) != max_length )
    return 1;
  v7 = __OFSUB__(max_length, 1);
  v8 = max_length - 1;
  if ( v8 < 0 != v7 )
    return 0;
  v9 = 0;
  do
  {
    v10 = Instance->m_Items[v9];
    if ( !v10 )
      goto LABEL_18;
    missionProgressType = v10->fields.missionProgressType;
    if ( v8 == v9 )
      break;
    ++v9;
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

  if ( (byte_4D2CD90 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2CD90 = 1;
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

  if ( (byte_4D2CD8F & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2CD8F = 1;
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