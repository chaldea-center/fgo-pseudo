void MstMissionEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct MstMissionEntity_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct MstMissionEntity_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct MstMissionEntity_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  struct MstMissionEntity_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5970DB2 & 1) == 0 )
  {
    sub_2213A60(&MstMissionEntity_TypeInfo);
    sub_2213A60(&StringLiteral_9045/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/);
    sub_2213A60(&StringLiteral_9044/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/);
    sub_2213A60(&StringLiteral_22708/*"missionIconDetailText"*/);
    sub_2213A60(&StringLiteral_22709/*"missionIconDisplayMsGroup"*/);
    byte_5970DB2 = 1;
  }
  v7 = StringLiteral_9045/*"MISSION_ICON_DISPLAY_MS_GROUP_NORMAL"*/;
  static_fields = MstMissionEntity_TypeInfo->static_fields;
  static_fields->MS_TO_SEC_DIVISOR = 1000.0;
  static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL = (struct System_String_o *)v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v9 = StringLiteral_9044/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  v10 = MstMissionEntity_TypeInfo->static_fields;
  v10->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED = (struct System_String_o *)StringLiteral_9044/*"MISSION_ICON_DISPLAY_MS_GROUP_LIMITED"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->MISSION_ICON_DISPLAY_MS_GROUP_LIMITED,
    v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_22708/*"missionIconDetailText"*/;
  v18 = MstMissionEntity_TypeInfo->static_fields;
  v18->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT = (struct System_String_o *)StringLiteral_22708/*"missionIconDetailText"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v18->SCRIPT_KEY_MISSION_ICON_DETAIL_TEXT,
    v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = StringLiteral_22709/*"missionIconDisplayMsGroup"*/;
  v26 = MstMissionEntity_TypeInfo->static_fields;
  v26->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP = (struct System_String_o *)StringLiteral_22709/*"missionIconDisplayMsGroup"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v26->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP,
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
  const MethodInfo_3F0E518 *v3; // x1

  if ( (byte_5970DB1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970DB1 = 1;
  }
  v3 = (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__;
  this->fields.WEEK_TIME = 604800;
  DataEntityBase_int____ctor((DataEntityBase_int__o *)this, v3);
}


int32_t MstMissionEntity__CreatePrimaryKey(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float MstMissionEntity__GetMissionIconDisplaySec(MstMissionEntity_o *this, const MethodInfo *method)
{
  MstMissionEntity_c *v3; // x0
  int v4; // w8
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  System_String_o *StringValue; // x19
  __int64 v7; // x1
  bool IsNullOrWhiteSpace; // w8
  System_Collections_Generic_Dictionary_object__int__o *v9; // x0
  int v10; // w9
  System_Collections_Generic_Dictionary_object__int__o *v11; // x19
  __int64 v12; // x1
  int Item; // w19
  MstMissionEntity_c *v14; // x0
  TitleInfoControl_c *v16; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5970DB0 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&MstMissionEntity_TypeInfo);
    sub_2213A60(&TitleInfoControl_TypeInfo);
    byte_5970DB0 = 1;
  }
  v3 = MstMissionEntity_TypeInfo;
  v4 = *(&MstMissionEntity_TypeInfo->_2.cctor_finished + 1);
  script = this->fields.script;
  value = 0;
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, method);
    v3 = MstMissionEntity_TypeInfo;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  v3->static_fields->SCRIPT_KEY_MISSION_ICON_DISPLAY_MS_GROUP,
                  0,
                  0);
  value = -1;
  IsNullOrWhiteSpace = System_String__IsNullOrWhiteSpace(StringValue, 0);
  v9 = (System_Collections_Generic_Dictionary_object__int__o *)BalanceConfig_TypeInfo;
  v10 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  if ( IsNullOrWhiteSpace )
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
      v9 = (System_Collections_Generic_Dictionary_object__int__o *)BalanceConfig_TypeInfo;
    }
    v11 = (System_Collections_Generic_Dictionary_object__int__o *)v9[2].fields._entries->m_Items[48].fields.value;
    if ( !*(&MstMissionEntity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, v7);
    if ( v11 )
    {
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               v11,
               (Il2CppObject *)MstMissionEntity_TypeInfo->static_fields->MISSION_ICON_DISPLAY_MS_GROUP_NORMAL,
               (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      value = Item;
      goto LABEL_16;
    }
LABEL_24:
    sub_2213CDC(v9, v7);
  }
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    v9 = (System_Collections_Generic_Dictionary_object__int__o *)BalanceConfig_TypeInfo;
  }
  v9 = (System_Collections_Generic_Dictionary_object__int__o *)v9[2].fields._entries->m_Items[48].fields.value;
  if ( !v9 )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    v9,
    (Il2CppObject *)StringValue,
    &value,
    (const MethodInfo_3FF5BC4 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
  Item = value;
LABEL_16:
  if ( Item <= 0 )
  {
    v16 = TitleInfoControl_TypeInfo;
    if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v12);
      v16 = TitleInfoControl_TypeInfo;
    }
    return v16->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL;
  }
  else
  {
    v14 = MstMissionEntity_TypeInfo;
    if ( !*(&MstMissionEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MstMissionEntity_TypeInfo, v12);
      v14 = MstMissionEntity_TypeInfo;
    }
    return (float)Item / v14->static_fields->MS_TO_SEC_DIVISOR;
  }
}


int32_t MstMissionEntity__getMissionType(MstMissionEntity_o *this, const MethodInfo *method)
{
  EventMissionEntity_array *Instance; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x8
  EventMissionEntity_o *v6; // x8

  if ( (byte_5970DAF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970DAF = 1;
  }
  Instance = (EventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (EventMissionEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, this->fields.id, 0);
  if ( !Instance )
    goto LABEL_11;
  max_length = Instance->max_length;
  if ( max_length )
  {
    if ( !(_DWORD)max_length )
      sub_2213CE4(Instance);
    v6 = Instance->m_Items[0];
    if ( v6 )
      return v6->fields.type;
LABEL_11:
    sub_2213CDC(Instance, v4);
  }
  return 0;
}


bool MstMissionEntity__isActive(MstMissionEntity_o *this, int64_t checkTime, const MethodInfo *method)
{
  return this->fields.startedAt <= checkTime && this->fields.closedAt >= checkTime;
}


bool MstMissionEntity__isActiveNow(MstMissionEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_5970DAE & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970DAE = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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

  if ( (byte_5970DAD & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970DAD = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0);
  return this->fields.startedAt <= Time && this->fields.endedAt >= Time;
}


bool MstMissionEntity__isWeekly(MstMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.endedAt - this->fields.startedAt <= this->fields.WEEK_TIME;
}