void __fastcall MstMissionEntity___cctor(const MethodInfo *method)
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
  struct MstMissionEntity_StaticFields *static_fields; // x0
  int64_t v17; // x1
  int64_t v18; // x1
  struct MstMissionEntity_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  struct MstMissionEntity_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  struct MstMissionEntity_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B1659F & 1) == 0 )
  {
    sub_1BCA7E0(&MstMissionEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_8777/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_8776/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_21694/*"missionIconDetailText"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21695/*"missionIconDisplayMsGroup"*/, v14, v15);
    byte_4B1659F = 1;
  }
  static_fields = MstMissionEntity_TypeInfo->static_fields;
  static_fields->MS_TO_SEC_DIVISOR = 1000.0;
  v17 = StringLiteral_8777/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL = (struct System_String_o *)StringLiteral_8777/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
    v17,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = StringLiteral_8776/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  v19 = MstMissionEntity_TypeInfo->static_fields;
  v19->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED = (struct System_String_o *)StringLiteral_8776/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v19->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED,
    v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = StringLiteral_21694/*"missionIconDetailText"*/;
  v27 = MstMissionEntity_TypeInfo->static_fields;
  v27->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT = (struct System_String_o *)StringLiteral_21694/*"missionIconDetailText"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v27->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
    v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = StringLiteral_21695/*"missionIconDisplayMsGroup"*/;
  v35 = MstMissionEntity_TypeInfo->static_fields;
  v35->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP = (struct System_String_o *)StringLiteral_21695/*"missionIconDisplayMsGroup"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v35->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP,
    v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


void __fastcall MstMissionEntity___ctor(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1659E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B1659E = 1;
  }
  this->fields.WEEK_TIME = 604800;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MstMissionEntity__CreatePrimaryKey(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall MstMissionEntity__GetMissionIconDisplaySec(MstMissionEntity_o *this, const MethodInfo *method)
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
  MstMissionEntity_c *v12; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *StringValue; // x19
  MstMissionEntity_c *IsNullOrWhiteSpace; // x0
  __int64 v16; // x1
  BalanceConfig_c *v17; // x8
  char v18; // w21
  System_Collections_Generic_Dictionary_object__int__o *MissionIconDisplayMsDictionary; // x20
  __int64 v20; // x1
  int Item; // w19
  MstMissionEntity_c *v22; // x0
  TitleInfoControl_c *v24; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1659D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6, v7);
    sub_1BCA7E0(&MstMissionEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v10, v11);
    byte_4B1659D = 1;
  }
  v12 = MstMissionEntity_TypeInfo;
  script = this->fields.script;
  if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, method);
    v12 = MstMissionEntity_TypeInfo;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  v12->static_fields->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP,
                  0LL,
                  0LL);
  value = -1;
  IsNullOrWhiteSpace = (MstMissionEntity_c *)System_String__IsNullOrWhiteSpace(StringValue, 0LL);
  v17 = BalanceConfig_TypeInfo;
  v18 = (char)IsNullOrWhiteSpace;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
    v17 = BalanceConfig_TypeInfo;
  }
  MissionIconDisplayMsDictionary = (System_Collections_Generic_Dictionary_object__int__o *)v17->static_fields->MissionIconDisplayMsDictionary;
  if ( (v18 & 1) != 0 )
  {
    IsNullOrWhiteSpace = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, v16);
    if ( MissionIconDisplayMsDictionary )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               MissionIconDisplayMsDictionary,
               (Il2CppObject *)MstMissionEntity_TypeInfo->static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
               (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      value = Item;
      goto LABEL_14;
    }
LABEL_21:
    sub_1BCAA3C(IsNullOrWhiteSpace, v16);
  }
  if ( !MissionIconDisplayMsDictionary )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    MissionIconDisplayMsDictionary,
    (Il2CppObject *)StringValue,
    &value,
    (const MethodInfo_325DCD4 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
  Item = value;
LABEL_14:
  if ( Item <= 0 )
  {
    v24 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v20);
      v24 = TitleInfoControl_TypeInfo;
    }
    return v24->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL;
  }
  else
  {
    v22 = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, v20);
      v22 = MstMissionEntity_TypeInfo;
    }
    return (float)Item / v22->static_fields->MS_TO_SEC_DIVISOR;
  }
}


int32_t __fastcall MstMissionEntity__getMissionType(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  EventMissionEntity_array *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  EventMissionEntity_o *v9; // x8

  if ( (byte_4B1659C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1659C = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v8 = *(_QWORD *)&Instance->max_length;
  if ( v8 )
  {
    if ( !(_DWORD)v8 )
      sub_1BCAA44(Instance, v7);
    v9 = Instance->m_Items[0];
    if ( v9 )
      return v9->fields.type;
LABEL_11:
    sub_1BCAA3C(Instance, v7);
  }
  return 0;
}


bool __fastcall MstMissionEntity__hasUnarchived(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UserEventMissionEntity_array *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *MissionIdListByEvent; // x20
  il2cpp_array_size_t max_length; // w8
  bool v12; // vf
  int v13; // w8
  int v14; // w9
  UserEventMissionEntity_o *v15; // x10
  int32_t missionProgressType; // w10

  if ( (byte_4B1659B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1659B = 1;
  }
  Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                                 (EventMissionMaster_o *)Instance,
                                 this->fields.id,
                                 0LL),
        (Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
    || (Instance = UserEventMissionMaster__getUserEventMissionList(
                     (UserEventMissionMaster_o *)Instance,
                     this->fields.id,
                     0LL)) == 0LL
    || !MissionIdListByEvent )
  {
LABEL_18:
    sub_1BCAA3C(Instance, v9);
  }
  max_length = Instance->max_length;
  if ( MissionIdListByEvent->max_length != max_length )
    return 1;
  v12 = __OFSUB__(max_length, 1);
  v13 = max_length - 1;
  if ( v13 < 0 != v12 )
    return 0;
  v14 = 0;
  do
  {
    v15 = Instance->m_Items[v14];
    if ( !v15 )
      goto LABEL_18;
    missionProgressType = v15->fields.missionProgressType;
    if ( v13 == v14 )
      break;
    ++v14;
  }
  while ( missionProgressType == 5 );
  return missionProgressType != 5;
}


bool __fastcall MstMissionEntity__isActive(MstMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.closedAt >= checkTime;
}


bool __fastcall MstMissionEntity__isActiveNow(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x0

  if ( (byte_4B1659A & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B1659A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.closedAt >= Time;
}


bool __fastcall MstMissionEntity__isOpen(MstMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.endedAt >= checkTime;
}


bool __fastcall MstMissionEntity__isOpenNow(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x0

  if ( (byte_4B16599 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16599 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.endedAt >= Time;
}


bool __fastcall MstMissionEntity__isWeekly(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.endedAt - this->fields.startedAt <= this->fields.WEEK_TIME;
}