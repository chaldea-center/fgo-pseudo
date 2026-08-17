void MissionNaviTransitionConfirmDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct MissionNaviTransitionConfirmDialog_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct MissionNaviTransitionConfirmDialog_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596A0F0 & 1) == 0 )
  {
    sub_2213A60(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_9063/*"MISSION_NAVI_NOT_OPEN_BOARD"*/);
    sub_2213A60(&StringLiteral_9062/*"MISSION_NAVI_NAME_COMMON"*/);
    sub_2213A60(&StringLiteral_9060/*"MISSION_NAVI_MAIN_QUEST"*/);
    byte_596A0F0 = 1;
  }
  v7 = StringLiteral_9062/*"MISSION_NAVI_NAME_COMMON"*/;
  MissionNaviTransitionConfirmDialog_TypeInfo->static_fields->MISSION_NAVI_NAME_COMMON = (struct System_String_o *)StringLiteral_9062/*"MISSION_NAVI_NAME_COMMON"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MissionNaviTransitionConfirmDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_9063/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  static_fields = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  static_fields->MISSION_NAVI_NOT_OPEN_BOARD = (struct System_String_o *)StringLiteral_9063/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->MISSION_NAVI_NOT_OPEN_BOARD,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_9060/*"MISSION_NAVI_MAIN_QUEST"*/;
  v17 = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  v17->MISSION_NAVI_MAIN_QUEST = (struct System_String_o *)StringLiteral_9060/*"MISSION_NAVI_MAIN_QUEST"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->MISSION_NAVI_MAIN_QUEST, v16, v18, v19, v20, v21, v22, v23);
}


void MissionNaviTransitionConfirmDialog___ctor(MissionNaviTransitionConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0
  int v5; // w8

  if ( (byte_596A0EF & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A0EF = 1;
  }
  v4 = BaseDialog_TypeInfo;
  v5 = *(&BaseDialog_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&this->fields.messageTopOffset = xmmword_E9C910;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MissionNaviTransitionConfirmDialog__Awake(MissionNaviTransitionConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void MissionNaviTransitionConfirmDialog__CheckSerializeFieldAssertion(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void MissionNaviTransitionConfirmDialog__DeleteCallback(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *boardItemDrawList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596A0EE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    byte_596A0EE = 1;
  }
  boardItemDrawList = this->fields.boardItemDrawList;
  memset(&v5, 0, sizeof(v5));
  if ( boardItemDrawList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)boardItemDrawList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_2213CDC(0, v4);
      MissionNaviTransitionBoardItemDraw__DeleteCallback((MissionNaviTransitionBoardItemDraw_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
  }
}


void MissionNaviTransitionConfirmDialog__EndOpen(MissionNaviTransitionConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_o *MissionNaviTransitionConfirmDialog__GetClosedMessageText(
        int32_t closedMessageId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596A0EB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A0EB = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !closedMessageId )
    goto LABEL_10;
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    closedMessageId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_10:
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_monitor;
  }
  if ( !entity )
LABEL_12:
    sub_2213CDC(Master_object, v6);
  p_monitor = (System_String_o **)&entity[1].monitor;
  return *p_monitor;
}


System_String_o *MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  System_String_o *monitor; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t QuestReleaseType_k__BackingField; // w8
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t WarID_ByQuestID; // w21
  Il2CppObject *PrioredName; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t OpenedAt; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  System_Object_array *v18; // x21
  System_DateTime_o v19; // x0
  Il2CppObject *v20; // x22
  System_DateTime_o v21; // x0
  __int64 v22; // x22
  System_DateTime_o v23; // x0
  __int64 v24; // x22
  System_DateTime_o v25; // x0
  __int64 v26; // x22
  System_String_o *v27; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v29; // x19
  int32_t Minute; // [xsp+Ch] [xbp-64h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-60h] BYREF
  int32_t Day; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t QuestReleaseValue_k__BackingField; // [xsp+18h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *v36; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_596A0EC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A0EC = 1;
  }
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0;
  dateData = 0;
  v36 = 0;
  if ( questInfo && questInfo->fields._QuestReleaseClosedID_k__BackingField >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
    if ( !Instance )
      goto LABEL_39;
    monitor = (System_String_o *)StringLiteral_1/*""*/;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &entity,
                                 questInfo->fields._QuestReleaseClosedID_k__BackingField,
                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_39;
      monitor = (System_String_o *)entity[1].monitor;
    }
    QuestReleaseType_k__BackingField = questInfo->fields._QuestReleaseType_k__BackingField;
    if ( QuestReleaseType_k__BackingField > 8 )
    {
      if ( QuestReleaseType_k__BackingField != 9 )
      {
        if ( QuestReleaseType_k__BackingField != 12 )
        {
LABEL_32:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
            if ( questEnt )
            {
              if ( Instance )
              {
                EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                           (QuestReleaseOverwriteMaster_o *)Instance,
                                           questEnt->fields.id,
                                           0,
                                           0);
                if ( EntityByQuestIdAndTime )
                {
                  v29 = EntityByQuestIdAndTime;
                  if ( !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0) )
                    return v29->fields.overlayClosedMessage;
                }
                return monitor;
              }
            }
          }
LABEL_39:
          sub_2213CDC(Instance, v7);
        }
        if ( !questEnt )
          goto LABEL_39;
        OpenedAt = QuestEntity__getOpenedAt(questEnt, 0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13, v14);
        dateData = NetworkManager__getServerDateTime_48347596(OpenedAt, 0).fields._dateData;
        v18 = (System_Object_array *)sub_2213B20(object___TypeInfo, 4);
        if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v16, v17);
        v19.fields._dateData = (uint64_t)&dateData;
        LODWORD(QuestReleaseValue_k__BackingField) = System_DateTime__get_Month(v19, 0);
        Instance = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &QuestReleaseValue_k__BackingField);
        if ( !v18 )
          goto LABEL_39;
        v20 = Instance;
        sub_1FFE8F8(v18, Instance);
        sub_1FFE2C4(v18, 0, v20);
        v21.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v21, 0);
        v22 = j_il2cpp_value_box_0(qword_5984348, &Day);
        sub_1FFE8F8(v18, v22);
        sub_1FFE2C4(v18, 1, v22);
        v23.fields._dateData = (uint64_t)&dateData;
        Hour = System_DateTime__get_Hour(v23, 0);
        v24 = j_il2cpp_value_box_0(qword_5984348, &Hour);
        sub_1FFE8F8(v18, v24);
        sub_1FFE2C4(v18, 2, v24);
        v25.fields._dateData = (uint64_t)&dateData;
        Minute = System_DateTime__get_Minute(v25, 0);
        v26 = j_il2cpp_value_box_0(qword_5984348, &Minute);
        sub_1FFE8F8(v18, v26);
        sub_1FFE2C4(v18, 3, v26);
        v27 = System_String__Format_75698016(monitor, v18, 0);
LABEL_31:
        monitor = v27;
        goto LABEL_32;
      }
    }
    else if ( (unsigned int)(QuestReleaseType_k__BackingField - 6) >= 2 )
    {
      if ( QuestReleaseType_k__BackingField != 1 )
        goto LABEL_32;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_39;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                          (QuestTree_o *)Instance,
                          questInfo->fields._QuestReleaseTargetID_k__BackingField,
                          0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
      Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Instance )
        goto LABEL_39;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &v36,
              WarID_ByQuestID,
              (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        goto LABEL_32;
      Instance = v36;
      if ( !v36 )
        goto LABEL_39;
      PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v36, 0);
      goto LABEL_30;
    }
    QuestReleaseValue_k__BackingField = questInfo->fields._QuestReleaseValue_k__BackingField;
    PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &QuestReleaseValue_k__BackingField);
LABEL_30:
    v27 = System_String__Format(monitor, PrioredName, 0);
    goto LABEL_31;
  }
  return monitor;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_string__string__o MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(
        MissionNaviQuestEntity_o *naviQuestEntity,
        MapControl_QuestInfo_o *tempQuestInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviQuestEntity_o *v6; // x20
  int32_t closedMessageId; // w20
  MissionNaviTransitionConfirmDialog_c *v8; // x0
  int v9; // w8
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x19
  Il2CppObject *v11; // x19
  const MethodInfo *v12; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_3CF8CCC *v14; // x4
  System_ValueTuple_object__object__o v15; // x0
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x0
  Il2CppObject *v21; // x0
  System_String_o *v22; // x20
  Il2CppObject *v23; // x20
  QuestEntity_o *Mine; // x0
  const MethodInfo *v25; // x2
  Il2CppObject *v26; // x3
  bool v27; // zf
  __int64 v28; // x1
  __int64 v29; // x2
  int v30; // w8
  __int64 *v31; // x8
  System_String_o *v32; // x0
  struct System_String_o *v33; // x0
  struct System_String_o *v34; // x1
  struct System_String_o *v35; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v36; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = naviQuestEntity;
  if ( (byte_596A0E8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_string__string___ctor__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_9058/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_9066/*"MISSION_NAVI_QUEST_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    naviQuestEntity = (MissionNaviQuestEntity_o *)sub_2213A60(&StringLiteral_9065/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/);
    byte_596A0E8 = 1;
  }
  challengeNaviName = 0;
  if ( !isLocked )
  {
    if ( !v6 )
      goto LABEL_44;
    naviQuestEntity = (MissionNaviQuestEntity_o *)MissionNaviQuestEntity__TryGetChallengeNaviName(
                                                    v6,
                                                    &challengeNaviName,
                                                    0);
    if ( ((unsigned __int8)naviQuestEntity & 1) != 0 )
    {
      v15.fields.Item2 = (Il2CppObject *)challengeNaviName;
    }
    else
    {
      if ( !tempQuestInfo )
        goto LABEL_44;
      naviQuestEntity = (MissionNaviQuestEntity_o *)tempQuestInfo->fields._WarInfo_k__BackingField;
      if ( !naviQuestEntity )
        goto LABEL_44;
      naviQuestEntity = (MissionNaviQuestEntity_o *)MapControl_WarInfo__GetMine(
                                                      (MapControl_WarInfo_o *)naviQuestEntity,
                                                      0);
      if ( !naviQuestEntity )
        goto LABEL_44;
      naviQuestEntity = (MissionNaviQuestEntity_o *)WarEntity__GetPrioredLongName((WarEntity_o *)naviQuestEntity, 0);
      if ( !naviQuestEntity )
        goto LABEL_44;
      v16 = (Il2CppObject *)System_String__Replace_75703400(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_113/*" "*/,
                              0);
      naviQuestEntity = (MissionNaviQuestEntity_o *)MapControl_QuestInfo__GetMine(tempQuestInfo, 0);
      if ( !naviQuestEntity )
        goto LABEL_44;
      naviQuestEntity = (MissionNaviQuestEntity_o *)QuestEntity__getQuestName((QuestEntity_o *)naviQuestEntity, 0);
      if ( !naviQuestEntity )
        goto LABEL_44;
      v17 = (Il2CppObject *)System_String__Replace_75703400(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_113/*" "*/,
                              0);
      if ( System_String__op_Equality((System_String_o *)v16, (System_String_o *)StringLiteral_923/*"-"*/, 0)
        || System_String__IsNullOrEmpty((System_String_o *)v16, 0) )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9065/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/, 0);
        v21 = (Il2CppObject *)System_String__Format(v20, v17, 0);
      }
      else
      {
        v27 = MapControl_QuestInfo__GetQuestType(tempQuestInfo, 0) == 2;
        v30 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( v27 )
        {
          if ( !v30 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
          v31 = &StringLiteral_9058/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/;
        }
        else
        {
          if ( !v30 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
          v31 = &StringLiteral_9066/*"MISSION_NAVI_QUEST_MESSAGE"*/;
        }
        v32 = LocalizationManager__Get((System_String_o *)*v31, 0);
        v21 = (Il2CppObject *)System_String__Format_75697880(v32, v16, v17, 0);
      }
      v15.fields.Item2 = v21;
      challengeNaviName = (System_String_o *)v21;
    }
    v15.fields.Item1 = (Il2CppObject *)&v35;
    v35 = 0;
    v36 = 0;
    ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
    v26 = (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__;
    goto LABEL_43;
  }
  if ( !v6 )
    goto LABEL_44;
  closedMessageId = v6->fields.closedMessageId;
  v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  v9 = *(&MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished + 1);
  if ( closedMessageId )
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, tempQuestInfo, isLocked);
      v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
    }
    MISSION_NAVI_NOT_OPEN_BOARD = v8->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, tempQuestInfo, isLocked);
    v11 = (Il2CppObject *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0);
    ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v12);
    v15.fields.Item1 = (Il2CppObject *)&v35;
    v35 = 0;
    v36 = 0;
    v15.fields.Item2 = v11;
    goto LABEL_31;
  }
  if ( !v9 )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, tempQuestInfo, isLocked);
    v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  v22 = v8->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, tempQuestInfo, isLocked);
  naviQuestEntity = (MissionNaviQuestEntity_o *)LocalizationManager__Get(v22, 0);
  if ( !tempQuestInfo )
LABEL_44:
    sub_2213CDC(naviQuestEntity, tempQuestInfo);
  v23 = (Il2CppObject *)naviQuestEntity;
  Mine = MapControl_QuestInfo__GetMine(tempQuestInfo, 0);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(
                                        tempQuestInfo,
                                        Mine,
                                        v25);
  v15.fields.Item1 = (Il2CppObject *)&v35;
  v15.fields.Item2 = v23;
  v35 = 0;
  v36 = 0;
LABEL_31:
  v26 = (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__;
LABEL_43:
  System_ValueTuple_object__object____ctor(v15, ClosedMessageText, v26, v14);
  v33 = v35;
  v34 = v36;
  result.fields.Item2 = v34;
  result.fields.Item1 = v33;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_string__string__o MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MapControl_SpotInfo_o *spotInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviTransitionEntity_o *v6; // x20
  int32_t closedMessageId; // w19
  MissionNaviTransitionConfirmDialog_c *v8; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  Il2CppObject *v10; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_3CF8CCC *v13; // x4
  System_ValueTuple_object__object__o v14; // x0
  Il2CppObject *v15; // x3
  SpotEntity_o *Mine; // x0
  __int64 v17; // x2
  Il2CppObject *v18; // x19
  MissionNaviTransitionConfirmDialog_c *v19; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v21; // x0
  struct System_String_o *v22; // x0
  struct System_String_o *v23; // x1
  struct System_String_o *v24; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v25; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_596A0EA & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_string__string___ctor__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A0EA = 1;
  }
  challengeNaviName = 0;
  if ( !isLocked )
  {
    if ( v6 )
    {
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)MissionNaviTransitionEntity__TryGetChallengeNaviName(
                                                                       v6,
                                                                       &challengeNaviName,
                                                                       0);
      if ( ((unsigned __int8)missionNaviTransitionEntity & 1) != 0 )
      {
        v14.fields.Item2 = (Il2CppObject *)challengeNaviName;
LABEL_23:
        v14.fields.Item1 = (Il2CppObject *)&v24;
        v24 = 0;
        v25 = 0;
        ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
        v15 = (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__;
        goto LABEL_24;
      }
      if ( spotInfo )
      {
        Mine = MapControl_SpotInfo__GetMine(spotInfo, 0);
        if ( !Mine )
        {
          v18 = 0;
          goto LABEL_18;
        }
        missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)Mine->fields.name;
        if ( missionNaviTransitionEntity )
        {
          v18 = (Il2CppObject *)System_String__Replace_75703400(
                                  (System_String_o *)missionNaviTransitionEntity,
                                  (System_String_o *)StringLiteral_43/*"\n"*/,
                                  (System_String_o *)StringLiteral_113/*" "*/,
                                  0);
LABEL_18:
          v19 = MissionNaviTransitionConfirmDialog_TypeInfo;
          if ( !*(&MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, spotInfo, v17);
            v19 = MissionNaviTransitionConfirmDialog_TypeInfo;
          }
          MISSION_NAVI_NAME_COMMON = v19->static_fields->MISSION_NAVI_NAME_COMMON;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, spotInfo, v17);
          v21 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0);
          v14.fields.Item2 = (Il2CppObject *)System_String__Format(v21, v18, 0);
          challengeNaviName = (System_String_o *)v14.fields.Item2;
          goto LABEL_23;
        }
      }
    }
LABEL_25:
    sub_2213CDC(missionNaviTransitionEntity, spotInfo);
  }
  if ( !v6 )
    goto LABEL_25;
  closedMessageId = v6->fields.closedMessageId;
  v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !*(&MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, spotInfo, isLocked);
    v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v8->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, spotInfo, isLocked);
  v10 = (Il2CppObject *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v11);
  v14.fields.Item1 = (Il2CppObject *)&v24;
  v14.fields.Item2 = v10;
  v24 = 0;
  v25 = 0;
  v15 = (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__;
LABEL_24:
  System_ValueTuple_object__object____ctor(v14, ClosedMessageText, v15, v13);
  v22 = v24;
  v23 = v25;
  result.fields.Item2 = v23;
  result.fields.Item1 = v22;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_string__string__o MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MapControl_WarInfo_o *warInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviTransitionEntity_o *v6; // x20
  int32_t closedMessageId; // w19
  MissionNaviTransitionConfirmDialog_c *v8; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  Il2CppObject *v10; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_3CF8CCC *v13; // x4
  System_ValueTuple_object__object__o v14; // x0
  Il2CppObject *v15; // x3
  __int64 v16; // x2
  MissionNaviTransitionConfirmDialog_c *v17; // x0
  System_String_o *MISSION_NAVI_MAIN_QUEST; // x19
  Il2CppObject *v19; // x0
  WarEntity_o *Mine; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x19
  MissionNaviTransitionConfirmDialog_c *v24; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v26; // x0
  struct System_String_o *v27; // x0
  struct System_String_o *v28; // x1
  struct System_String_o *v29; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v30; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_596A0E9 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_string__string___ctor__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_8893/*"MAIN_SCENARIO"*/);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A0E9 = 1;
  }
  challengeNaviName = 0;
  if ( !isLocked )
  {
    if ( v6 )
    {
      if ( MissionNaviTransitionEntity__TryGetChallengeNaviName(v6, &challengeNaviName, 0) )
      {
        v14.fields.Item2 = (Il2CppObject *)challengeNaviName;
LABEL_30:
        v14.fields.Item1 = (Il2CppObject *)&v29;
        v29 = 0;
        v30 = 0;
        ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
        v15 = (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__;
        goto LABEL_31;
      }
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)System_String__op_Equality(
                                                                       v6->fields.transitionParam,
                                                                       (System_String_o *)StringLiteral_8893/*"MAIN_SCENARIO"*/,
                                                                       0);
      if ( ((unsigned __int8)missionNaviTransitionEntity & 1) != 0 )
      {
        v17 = MissionNaviTransitionConfirmDialog_TypeInfo;
        if ( !*(&MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, warInfo, v16);
          v17 = MissionNaviTransitionConfirmDialog_TypeInfo;
        }
        MISSION_NAVI_MAIN_QUEST = v17->static_fields->MISSION_NAVI_MAIN_QUEST;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, warInfo, v16);
        v19 = (Il2CppObject *)LocalizationManager__Get(MISSION_NAVI_MAIN_QUEST, 0);
LABEL_29:
        v14.fields.Item2 = v19;
        challengeNaviName = (System_String_o *)v19;
        goto LABEL_30;
      }
      if ( warInfo )
      {
        Mine = MapControl_WarInfo__GetMine(warInfo, 0);
        if ( !Mine )
        {
          v23 = 0;
          goto LABEL_24;
        }
        missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)WarEntity__GetPrioredLongName(Mine, 0);
        if ( missionNaviTransitionEntity )
        {
          v23 = (Il2CppObject *)System_String__Replace_75703400(
                                  (System_String_o *)missionNaviTransitionEntity,
                                  (System_String_o *)StringLiteral_43/*"\n"*/,
                                  (System_String_o *)StringLiteral_113/*" "*/,
                                  0);
LABEL_24:
          v24 = MissionNaviTransitionConfirmDialog_TypeInfo;
          if ( !*(&MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, v21, v22);
            v24 = MissionNaviTransitionConfirmDialog_TypeInfo;
          }
          MISSION_NAVI_NAME_COMMON = v24->static_fields->MISSION_NAVI_NAME_COMMON;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
          v26 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0);
          v19 = (Il2CppObject *)System_String__Format(v26, v23, 0);
          goto LABEL_29;
        }
      }
    }
LABEL_32:
    sub_2213CDC(missionNaviTransitionEntity, warInfo);
  }
  if ( !v6 )
    goto LABEL_32;
  closedMessageId = v6->fields.closedMessageId;
  v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !*(&MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, warInfo, isLocked);
    v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v8->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, warInfo, isLocked);
  v10 = (Il2CppObject *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v11);
  v14.fields.Item1 = (Il2CppObject *)&v29;
  v14.fields.Item2 = v10;
  v29 = 0;
  v30 = 0;
  v15 = (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__;
LABEL_31:
  System_ValueTuple_object__object____ctor(v14, ClosedMessageText, v15, v13);
  v27 = v29;
  v28 = v30;
  result.fields.Item2 = v28;
  result.fields.Item1 = v27;
  return result;
}


void MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0

  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  if ( !limitedMissionItemDraw )
    sub_2213CDC(0, method);
  MasterMissionListViewItemDraw__OnChangeAlphaAnim(
    limitedMissionItemDraw,
    this->fields.missionListViewItem,
    1,
    this->fields.missionListViewManager,
    0);
}


void MissionNaviTransitionConfirmDialog__OnClickClose(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  _BYTE *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_596A0E6 & 1) == 0 )
  {
    sub_2213A60(&Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    byte_596A0E6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    MissionNaviTransitionConfirmDialog__DeleteCallback(this, method);
    v3 = Method_MissionNaviTransitionConfirmDialog_OnClickClose__;
    this->fields.state = 3;
    if ( (v3[83] & 2) != 0 )
      v3 = (_BYTE *)sub_2213A78(v3);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, *((_QWORD *)v3 + 4));
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      closeFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void MissionNaviTransitionConfirmDialog__Open(
        MissionNaviTransitionConfirmDialog_o *this,
        MissionListViewItem_o *missionItem,
        MissionListViewManager_o *listViewManager,
        int32_t missionBoardType,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *boardItemList,
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeDelegate,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *titleLabel; // x25
  System_String_o *limitedMissionItemDraw; // x0
  __int64 v19; // x1
  UILabel_o *choiceMessageLabel; // x25
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppClass *v27; // x8
  __int64 naturalAligment; // x9
  MissionListViewItem_o *v29; // x10
  int32_t v30; // w1
  struct MasterMissionListViewItem_o **p_missionListViewItem; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppClass *v38; // x8
  __int64 v39; // x9
  MissionListViewManager_o *v40; // x10
  int32_t v41; // w1
  struct MasterMissionListViewManager_o **p_missionListViewManager; // x24
  __int64 v43; // x2
  UnityEngine_Object_o *v44; // x22
  float messageHeight; // s8
  float messageTopOffset; // s9
  UnityEngine_GameObject_o *v47; // x23
  UnityEngine_Transform_o *v48; // x22
  float v49; // s8
  UnityEngine_Transform_o *v50; // x24
  UnityEngine_Transform_o *v51; // x24
  float messageBottomOffset; // s10
  float v53; // s11
  float boardHeight; // s9
  System_Collections_Generic_List_object__o *v55; // x25
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o **p_boardItemDrawList; // x24
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  float v63; // s9
  float v64; // s8
  __int64 v65; // x1
  UnityEngine_GameObject_o *challengeGrid; // x0
  Il2CppObject *current; // x26
  Il2CppObject *missionNaviTransitionBoardItemDrawPrefab; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  UnityEngine_GameObject_o *v74; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v76; // x1
  Il2CppObject *v77; // x21
  UnityEngine_Transform_o *v78; // x0
  __int64 v79; // x1
  float v80; // s8
  UnityEngine_Transform_o *v81; // x0
  __int64 v82; // x1
  UnityEngine_Transform_o *v83; // x26
  UnityEngine_Transform_o *v84; // x0
  __int64 v85; // x1
  UnityEngine_Transform_o *v86; // x25
  __int64 v87; // x1
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  System_Collections_Generic_List_object__o *v94; // x0
  struct System_Object_array *items; // x8
  _QWORD *v96; // x9
  __int64 size; // x10
  Il2CppClass **v98; // x8
  __int64 v99; // x2
  UILabel_o *closeBtnLabel; // x21
  UILabel_o *warningMessageLabel; // x21
  System_Action_o *v102; // x20
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v104; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A0E5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    sub_2213A60(&MasterMissionListViewManager_TypeInfo);
    sub_2213A60(&Method_MissionNaviTransitionConfirmDialog_EndOpen__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9050/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_9052/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/);
    sub_2213A60(&StringLiteral_9056/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/);
    sub_2213A60(&StringLiteral_9055/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/);
    byte_596A0E5 = 1;
  }
  *(_QWORD *)&v104.fields._index = 0;
  this->fields.closeFunc = closeDelegate;
  v104.fields._list = 0;
  v104.fields._current = 0;
  this->fields.isSetUpMissionListView = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeDelegate,
    (System_String_o *)listViewManager,
    *(System_String_o **)&missionBoardType,
    (int32_t)boardItemList,
    (int32_t)closeDelegate,
    (bool)openCallback,
    (bool)method);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_9055/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_95;
  UILabel__set_text(titleLabel, limitedMissionItemDraw, 0);
  choiceMessageLabel = this->fields.choiceMessageLabel;
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_9050/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, 0);
  if ( !choiceMessageLabel )
    goto LABEL_95;
  UILabel__set_text(choiceMessageLabel, limitedMissionItemDraw, 0);
  if ( missionBoardType == 1 )
  {
    if ( missionItem )
    {
      v27 = (Il2CppClass *)MasterMissionListViewItem_TypeInfo;
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( missionItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MasterMissionListViewItem_c *)missionItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
          v29 = missionItem;
        else
          v29 = 0;
      }
      else
      {
        v29 = 0;
      }
      this->fields.missionListViewItem = (struct MasterMissionListViewItem_o *)v29;
      p_missionListViewItem = &this->fields.missionListViewItem;
      if ( missionItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( missionItem->klass->_2.typeHierarchy[naturalAligment - 1] == v27 )
          v30 = (int)missionItem;
        else
          v30 = 0;
      }
      else
      {
        v30 = 0;
      }
    }
    else
    {
      v30 = 0;
      this->fields.missionListViewItem = 0;
      p_missionListViewItem = &this->fields.missionListViewItem;
    }
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_missionListViewItem, v30, v21, v22, v23, v24, v25, v26);
    if ( listViewManager )
    {
      v38 = (Il2CppClass *)MasterMissionListViewManager_TypeInfo;
      v39 = MasterMissionListViewManager_TypeInfo->_2.naturalAligment;
      if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)v39 )
      {
        if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v39 - 1] == MasterMissionListViewManager_TypeInfo )
          v40 = listViewManager;
        else
          v40 = 0;
      }
      else
      {
        v40 = 0;
      }
      this->fields.missionListViewManager = (struct MasterMissionListViewManager_o *)v40;
      p_missionListViewManager = &this->fields.missionListViewManager;
      if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)v39 )
      {
        if ( listViewManager->klass->_2.typeHierarchy[v39 - 1] == v38 )
          v41 = (int)listViewManager;
        else
          v41 = 0;
      }
      else
      {
        v41 = 0;
      }
    }
    else
    {
      v41 = 0;
      this->fields.missionListViewManager = 0;
      p_missionListViewManager = &this->fields.missionListViewManager;
    }
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_missionListViewManager, v41, v32, v33, v34, v35, v36, v37);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_95;
    limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                  0);
    if ( !limitedMissionItemDraw )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 1, 0);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_95;
    ((void (__fastcall *)(System_String_o *, MissionListViewItem_o *, __int64, MissionListViewManager_o *, const MethodInfo *))limitedMissionItemDraw->klass->vtable._4_CompareTo.methodPtr)(
      limitedMissionItemDraw,
      missionItem,
      1,
      listViewManager,
      limitedMissionItemDraw->klass->vtable._4_CompareTo.method);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_95;
    MissionListViewItemDraw__SetChallengeButtonActive((MissionListViewItemDraw_o *)limitedMissionItemDraw, 0, 0);
    if ( missionItem )
    {
      v44 = (UnityEngine_Object_o *)*p_missionListViewManager;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v43);
      if ( UnityEngine_Object__op_Inequality(v44, 0, 0) )
        this->fields.isSetUpMissionListView = 1;
    }
  }
  limitedMissionItemDraw = (System_String_o *)this->fields.choiceMessageLabel;
  if ( !limitedMissionItemDraw )
    goto LABEL_95;
  messageHeight = this->fields.messageHeight;
  messageTopOffset = this->fields.messageTopOffset;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                0);
  if ( !limitedMissionItemDraw )
    goto LABEL_95;
  v47 = (UnityEngine_GameObject_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0);
  if ( !this->fields.challengeGrid )
    goto LABEL_95;
  v48 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.challengeGrid, 0);
  if ( !v48 )
    goto LABEL_95;
  UnityEngine_Transform__set_parent(v48, (UnityEngine_Transform_o *)limitedMissionItemDraw, 0);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v47, 0);
  if ( !limitedMissionItemDraw )
    goto LABEL_95;
  v105.fields.z = 0.0;
  v49 = 0.0 - (float)((float)(messageHeight * 0.5) + messageTopOffset);
  v105.fields.x = 0.0;
  v105.fields.y = v49;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)limitedMissionItemDraw, v105, 0);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v47, 0);
  v50 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_5969AE6 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !v50 )
    goto LABEL_95;
  UnityEngine_Transform__set_localRotation(v50, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v47, 0);
  v51 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_5969AE5 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v51 )
    goto LABEL_95;
  UnityEngine_Transform__set_localScale(v51, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  messageBottomOffset = this->fields.messageBottomOffset;
  v53 = this->fields.messageHeight;
  boardHeight = this->fields.boardHeight;
  v55 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
  this->fields.boardItemDrawList = (struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *)v55;
  p_boardItemDrawList = &this->fields.boardItemDrawList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardItemDrawList,
    (int32_t)v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( !boardItemList )
    goto LABEL_95;
  v63 = boardHeight * 0.5;
  v64 = v49 - (float)((float)(v53 * 0.5) + messageBottomOffset);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v103,
    (System_Collections_Generic_List_object__o *)boardItemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
  v104 = v103;
  v103.fields._list = 0;
  *(_QWORD *)&v103.fields._index = &v104;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v104,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__) )
  {
    challengeGrid = this->fields.challengeGrid;
    if ( !challengeGrid )
      sub_2213CDC(0, v65);
    current = v104.fields._current;
    missionNaviTransitionBoardItemDrawPrefab = (Il2CppObject *)this->fields.missionNaviTransitionBoardItemDrawPrefab;
    transform = UnityEngine_GameObject__get_transform(challengeGrid, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69, v70);
    v72 = UnityEngine_Object__Instantiate_object__59717116(
            missionNaviTransitionBoardItemDrawPrefab,
            transform,
            (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    v74 = (UnityEngine_GameObject_o *)v72;
    if ( !v72 )
      sub_2213CDC(0, v73);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v72,
                                   (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    v77 = ComponentInChildren_object;
    if ( !ComponentInChildren_object )
      sub_2213CDC(0, v76);
    ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, const MethodInfo *))ComponentInChildren_object->klass->vtable[4].methodPtr)(
      ComponentInChildren_object,
      current,
      0,
      ComponentInChildren_object->klass->vtable[4].method);
    v78 = UnityEngine_GameObject__get_transform(v74, 0);
    if ( !v78 )
      sub_2213CDC(0, v79);
    v80 = v64 - v63;
    v106.fields.x = 0.0;
    v106.fields.z = 0.0;
    v106.fields.y = v80;
    UnityEngine_Transform__set_localPosition(v78, v106, 0);
    v81 = UnityEngine_GameObject__get_transform(v74, 0);
    v83 = v81;
    if ( !byte_5969AE6 )
    {
      v81 = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
      byte_5969AE6 = 1;
    }
    if ( !v83 )
      sub_2213CDC(v81, v82);
    UnityEngine_Transform__set_localRotation(v83, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
    v84 = UnityEngine_GameObject__get_transform(v74, 0);
    v86 = v84;
    if ( !byte_5969AE5 )
    {
      v84 = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v86 )
      sub_2213CDC(v84, v85);
    UnityEngine_Transform__set_localScale(v86, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v94 = (System_Collections_Generic_List_object__o *)*p_boardItemDrawList;
    if ( !*p_boardItemDrawList
      || (items = v94->fields._items,
          v96 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__,
          ++v94->fields._version,
          !items) )
    {
      sub_2213CDC(v94, v87);
    }
    size = v94->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v94,
        v77,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &items->obj.klass + size;
      v94->fields._size = size + 1;
      v98[4] = (Il2CppClass *)v77;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v98 + 4), (int32_t)v77, v88, v89, v90, v91, v92, v93);
    }
    v64 = v80 - v63;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v104,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_95;
  UIScrollView__ResetPosition((UIScrollView_o *)limitedMissionItemDraw, 0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_95;
  ((void (__fastcall *)(System_String_o *, _QWORD, const MethodInfo *, double, double))limitedMissionItemDraw->klass->vtable._9_GetTypeCode.methodPtr)(
    limitedMissionItemDraw,
    0,
    limitedMissionItemDraw->klass->vtable._9_GetTypeCode.method,
    0.0,
    0.0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_95;
  ((void (__fastcall *)(System_String_o *, __int64, const MethodInfo *))limitedMissionItemDraw->klass->vtable._8_Equals.methodPtr)(
    limitedMissionItemDraw,
    1,
    limitedMissionItemDraw->klass->vtable._8_Equals.method);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_95;
  UIScrollView__UpdatePosition((UIScrollView_o *)limitedMissionItemDraw, 0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeGrid;
  if ( !limitedMissionItemDraw )
    goto LABEL_95;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0);
  if ( !limitedMissionItemDraw )
    goto LABEL_95;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)limitedMissionItemDraw, 0) <= 3 )
  {
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
    if ( !limitedMissionItemDraw )
      goto LABEL_95;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)limitedMissionItemDraw, 0, 0);
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollBar;
    if ( !limitedMissionItemDraw )
      goto LABEL_95;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 0, 0);
  }
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v99);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_9052/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, 0);
  if ( !closeBtnLabel
    || (UILabel__set_text(closeBtnLabel, limitedMissionItemDraw, 0),
        warningMessageLabel = this->fields.warningMessageLabel,
        limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_9056/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, 0),
        !warningMessageLabel) )
  {
LABEL_95:
    sub_2213CDC(limitedMissionItemDraw, v19);
  }
  UILabel__set_text(warningMessageLabel, limitedMissionItemDraw, 0);
  ActionExtensions__Call(openCallback, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v102 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v102, (Il2CppObject *)this, Method_MissionNaviTransitionConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v102, 0, 0, 0);
}


void MissionNaviTransitionConfirmDialog__RedispResTime(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x19
  struct MasterMissionListViewItem_o *missionListViewItem; // x20
  int64_t Time; // x0
  __int64 v7; // x1

  if ( (byte_596A0ED & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596A0ED = 1;
  }
  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  missionListViewItem = this->fields.missionListViewItem;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = NetworkManager__getTime(0);
  if ( !limitedMissionItemDraw )
    sub_2213CDC(Time, v7);
  ((void (__fastcall *)(struct MasterMissionListViewItemDraw_o *, struct MasterMissionListViewItem_o *, int64_t, const MethodInfo *))limitedMissionItemDraw->klass->vtable._9_UpdateDispResTime.methodPtr)(
    limitedMissionItemDraw,
    missionListViewItem,
    Time,
    limitedMissionItemDraw->klass->vtable._9_UpdateDispResTime.method);
}


void MissionNaviTransitionConfirmDialog__RewardUpdateAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewManager_o *missionListViewManager; // x8

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_2213CDC(this, method);
  if ( missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField )
  {
    missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField = 0;
    MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(this, method);
  }
}


void MissionNaviTransitionConfirmDialog__SetState(
        MissionNaviTransitionConfirmDialog_o *this,
        int32_t currentState,
        const MethodInfo *method)
{
  this->fields.state = currentState;
}


void MissionNaviTransitionConfirmDialog__Update(MissionNaviTransitionConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0
  const MethodInfo *v5; // x1

  if ( this->fields.isSetUpMissionListView )
  {
    MissionNaviTransitionConfirmDialog__RedispResTime(this, method);
    limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      sub_2213CDC(0, v3);
    MasterMissionListViewItemDraw__UpdateItem(
      limitedMissionItemDraw,
      this->fields.missionListViewItem,
      1,
      this->fields.missionListViewManager,
      0);
    MissionNaviTransitionConfirmDialog__RewardUpdateAnim(this, v5);
  }
}


System_String_o *MissionNaviTransitionConfirmDialog__get_closeBtnPath(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_596A0E7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16268/*"Window/Objects/CancelButton"*/);
    byte_596A0E7 = 1;
  }
  return (System_String_o *)StringLiteral_16268/*"Window/Objects/CancelButton"*/;
}


void MissionNaviTransitionConfirmDialog_CloseDelegate___ctor(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFE99C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFE95C;
}


System_IAsyncResult_o *MissionNaviTransitionConfirmDialog_CloseDelegate__BeginInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void MissionNaviTransitionConfirmDialog_CloseDelegate__EndInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void MissionNaviTransitionConfirmDialog_CloseDelegate__Invoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}