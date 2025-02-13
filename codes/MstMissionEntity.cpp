void __fastcall MstMissionEntity___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct MstMissionEntity_StaticFields *static_fields; // x0
  int64_t v8; // x1
  int64_t v9; // x1
  struct MstMissionEntity_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  struct MstMissionEntity_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  struct MstMissionEntity_StaticFields *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4BDC913 & 1) == 0 )
  {
    sub_1C21E38(&MstMissionEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_8836/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/);
    sub_1C21E38(&StringLiteral_8835/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/);
    sub_1C21E38(&StringLiteral_21848/*"missionIconDetailText"*/);
    sub_1C21E38(&StringLiteral_21849/*"missionIconDisplayMsGroup"*/);
    byte_4BDC913 = 1;
  }
  static_fields = MstMissionEntity_TypeInfo->static_fields;
  static_fields->MS_TO_SEC_DIVISOR = 1000.0;
  v8 = StringLiteral_8836/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL = (struct System_String_o *)StringLiteral_8836/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
    v8,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v9 = StringLiteral_8835/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  v10 = MstMissionEntity_TypeInfo->static_fields;
  v10->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED = (struct System_String_o *)StringLiteral_8835/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v10->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED,
    v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_21848/*"missionIconDetailText"*/;
  v18 = MstMissionEntity_TypeInfo->static_fields;
  v18->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT = (struct System_String_o *)StringLiteral_21848/*"missionIconDetailText"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v18->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
    v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = StringLiteral_21849/*"missionIconDisplayMsGroup"*/;
  v26 = MstMissionEntity_TypeInfo->static_fields;
  v26->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP = (struct System_String_o *)StringLiteral_21849/*"missionIconDisplayMsGroup"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v26->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP,
    v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void __fastcall MstMissionEntity___ctor(MstMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC912 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDC912 = 1;
  }
  this->fields.WEEK_TIME = 604800;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MstMissionEntity__CreatePrimaryKey(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall MstMissionEntity__GetMissionIconDisplaySec(MstMissionEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4BDC911 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C21E38(&MstMissionEntity_TypeInfo);
    sub_1C21E38(&TitleInfoControl_TypeInfo);
    byte_4BDC911 = 1;
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
                  0LL,
                  0LL);
  value = -1;
  IsNullOrWhiteSpace = (MstMissionEntity_c *)System_String__IsNullOrWhiteSpace(StringValue, 0LL);
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
               (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      value = Item;
      goto LABEL_14;
    }
LABEL_21:
    sub_1C22094(IsNullOrWhiteSpace, v7);
  }
  if ( !MissionIconDisplayMsDictionary )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    MissionIconDisplayMsDictionary,
    (Il2CppObject *)StringValue,
    &value,
    (const MethodInfo_330EF54 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
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


int32_t __fastcall MstMissionEntity__getMissionType(MstMissionEntity_o *this, const MethodInfo *method)
{
  EventMissionEntity_array *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  EventMissionEntity_o *v6; // x8

  if ( (byte_4BDC910 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC910 = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v5 = *(_QWORD *)&Instance->max_length;
  if ( v5 )
  {
    if ( !(_DWORD)v5 )
      sub_1C2209C(Instance, v4);
    v6 = Instance->m_Items[0];
    if ( v6 )
      return v6->fields.type;
LABEL_11:
    sub_1C22094(Instance, v4);
  }
  return 0;
}


bool __fastcall MstMissionEntity__hasUnarchived(MstMissionEntity_o *this, const MethodInfo *method)
{
  UserEventMissionEntity_array *Instance; // x0
  __int64 v4; // x1
  System_Int32_array *MissionIdListByEvent; // x20
  il2cpp_array_size_t max_length; // w8
  bool v7; // vf
  int v8; // w8
  int v9; // w9
  UserEventMissionEntity_o *v10; // x10
  int32_t missionProgressType; // w10

  if ( (byte_4BDC90F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC90F = 1;
  }
  Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                                 (EventMissionMaster_o *)Instance,
                                 this->fields.id,
                                 0LL),
        (Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
    || (Instance = UserEventMissionMaster__getUserEventMissionList(
                     (UserEventMissionMaster_o *)Instance,
                     this->fields.id,
                     0LL)) == 0LL
    || !MissionIdListByEvent )
  {
LABEL_18:
    sub_1C22094(Instance, v4);
  }
  max_length = Instance->max_length;
  if ( MissionIdListByEvent->max_length != max_length )
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


bool __fastcall MstMissionEntity__isActive(MstMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.closedAt >= checkTime;
}


bool __fastcall MstMissionEntity__isActiveNow(MstMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4BDC90E & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC90E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.closedAt >= Time;
}


bool __fastcall MstMissionEntity__isOpen(MstMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.endedAt >= checkTime;
}


bool __fastcall MstMissionEntity__isOpenNow(MstMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4BDC90D & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC90D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return this->fields.startedAt <= Time && this->fields.endedAt >= Time;
}


bool __fastcall MstMissionEntity__isWeekly(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.endedAt - this->fields.startedAt <= this->fields.WEEK_TIME;
}