void __fastcall MstMissionEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct MstMissionEntity_StaticFields *static_fields; // x0
  int32_t v9; // w1
  int32_t v10; // w1
  struct MstMissionEntity_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  struct MstMissionEntity_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct MstMissionEntity_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A08FFE & 1) == 0 )
  {
    sub_1B686D4(&MstMissionEntity_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_8616/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/, v4);
    sub_1B686D4(&StringLiteral_8615/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/, v5);
    sub_1B686D4(&StringLiteral_21391/*"missionIconDetailText"*/, v6);
    sub_1B686D4(&StringLiteral_21392/*"missionIconDisplayMsGroup"*/, v7);
    byte_4A08FFE = 1;
  }
  static_fields = MstMissionEntity_TypeInfo->static_fields;
  static_fields->MS_TO_SEC_DIVISOR = 1000.0;
  v9 = StringLiteral_8616/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL = (struct System_String_o *)StringLiteral_8616/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL, v9, v2, v3);
  v10 = StringLiteral_8615/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  v11 = MstMissionEntity_TypeInfo->static_fields;
  v11->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED = (struct System_String_o *)StringLiteral_8615/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v11->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED, v10, v12, v13);
  v14 = StringLiteral_21391/*"missionIconDetailText"*/;
  v15 = MstMissionEntity_TypeInfo->static_fields;
  v15->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT = (struct System_String_o *)StringLiteral_21391/*"missionIconDetailText"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v15->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT, v14, v16, v17);
  v18 = StringLiteral_21392/*"missionIconDisplayMsGroup"*/;
  v19 = MstMissionEntity_TypeInfo->static_fields;
  v19->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP = (struct System_String_o *)StringLiteral_21392/*"missionIconDisplayMsGroup"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP, v18, v20, v21);
}


void __fastcall MstMissionEntity___ctor(MstMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A08FFD & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_int___ctor__, method);
    byte_4A08FFD = 1;
  }
  this->fields.WEEK_TIME = 604800;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30E42C0 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall MstMissionEntity__CreatePrimaryKey(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall MstMissionEntity__GetMissionIconDisplaySec(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MstMissionEntity_c *v7; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *StringValue; // x19
  MstMissionEntity_c *IsNullOrWhiteSpace; // x0
  __int64 v11; // x1
  BalanceConfig_c *v12; // x8
  char v13; // w21
  System_Collections_Generic_Dictionary_object__int__o *MissionIconDisplayMsDictionary; // x20
  int Item; // w19
  MstMissionEntity_c *v16; // x0
  TitleInfoControl_c *v18; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A08FFC & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v4);
    sub_1B686D4(&MstMissionEntity_TypeInfo, v5);
    sub_1B686D4(&TitleInfoControl_TypeInfo, v6);
    byte_4A08FFC = 1;
  }
  v7 = MstMissionEntity_TypeInfo;
  script = this->fields.script;
  if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
    v7 = MstMissionEntity_TypeInfo;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  v7->static_fields->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP,
                  0LL,
                  0LL);
  value = -1;
  IsNullOrWhiteSpace = (MstMissionEntity_c *)System_String__IsNullOrWhiteSpace(StringValue, 0LL);
  v12 = BalanceConfig_TypeInfo;
  v13 = (char)IsNullOrWhiteSpace;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  MissionIconDisplayMsDictionary = (System_Collections_Generic_Dictionary_object__int__o *)v12->static_fields->MissionIconDisplayMsDictionary;
  if ( (v13 & 1) != 0 )
  {
    IsNullOrWhiteSpace = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
    if ( MissionIconDisplayMsDictionary )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               MissionIconDisplayMsDictionary,
               (Il2CppObject *)MstMissionEntity_TypeInfo->static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
               (const MethodInfo_3180DA0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      value = Item;
      goto LABEL_14;
    }
LABEL_21:
    sub_1B68930(IsNullOrWhiteSpace, v11);
  }
  if ( !MissionIconDisplayMsDictionary )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    MissionIconDisplayMsDictionary,
    (Il2CppObject *)StringValue,
    &value,
    (const MethodInfo_31825DC *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
  Item = value;
LABEL_14:
  if ( Item <= 0 )
  {
    v18 = TitleInfoControl_TypeInfo;
    if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      v18 = TitleInfoControl_TypeInfo;
    }
    return v18->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL;
  }
  else
  {
    v16 = MstMissionEntity_TypeInfo;
    if ( !MstMissionEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo);
      v16 = MstMissionEntity_TypeInfo;
    }
    return (float)Item / v16->static_fields->MS_TO_SEC_DIVISOR;
  }
}


int32_t __fastcall MstMissionEntity__getMissionType(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventMissionEntity_array *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  EventMissionEntity_o *v7; // x8

  if ( (byte_4A08FFB & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A08FFB = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_11;
  v6 = *(_QWORD *)&Instance->max_length;
  if ( v6 )
  {
    if ( !(_DWORD)v6 )
      sub_1B68938(Instance, v5);
    v7 = Instance->m_Items[0];
    if ( v7 )
      return v7->fields.type;
LABEL_11:
    sub_1B68930(Instance, v5);
  }
  return 0;
}


bool __fastcall MstMissionEntity__hasUnarchived(MstMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserEventMissionEntity_array *Instance; // x0
  __int64 v6; // x1
  System_Int32_array *MissionIdListByEvent; // x20
  il2cpp_array_size_t max_length; // w8
  bool v9; // vf
  int v10; // w8
  int v11; // w9
  UserEventMissionEntity_o *v12; // x10
  int32_t missionProgressType; // w10

  if ( (byte_4A08FFA & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A08FFA = 1;
  }
  Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                                 (EventMissionMaster_o *)Instance,
                                 this->fields.id,
                                 0LL),
        (Instance = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL
    || (Instance = UserEventMissionMaster__getUserEventMissionList(
                     (UserEventMissionMaster_o *)Instance,
                     this->fields.id,
                     0LL)) == 0LL
    || !MissionIdListByEvent )
  {
LABEL_18:
    sub_1B68930(Instance, v6);
  }
  max_length = Instance->max_length;
  if ( MissionIdListByEvent->max_length != max_length )
    return 1;
  v9 = __OFSUB__(max_length, 1);
  v10 = max_length - 1;
  if ( v10 < 0 != v9 )
    return 0;
  v11 = 0;
  do
  {
    v12 = Instance->m_Items[v11];
    if ( !v12 )
      goto LABEL_18;
    missionProgressType = v12->fields.missionProgressType;
    if ( v10 == v11 )
      break;
    ++v11;
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

  if ( (byte_4A08FF9 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    byte_4A08FF9 = 1;
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

  if ( (byte_4A08FF8 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    byte_4A08FF8 = 1;
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