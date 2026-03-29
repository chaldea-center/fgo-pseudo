void MissionNaviTransitionConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MissionNaviTransitionConfirmDialog_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct MissionNaviTransitionConfirmDialog_StaticFields *v4; // x0

  if ( (byte_4D2A6FE & 1) == 0 )
  {
    sub_1C93AD4(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C93AD4(&StringLiteral_8751/*"MISSION_NAVI_NOT_OPEN_BOARD"*/);
    sub_1C93AD4(&StringLiteral_8750/*"MISSION_NAVI_NAME_COMMON"*/);
    sub_1C93AD4(&StringLiteral_8748/*"MISSION_NAVI_MAIN_QUEST"*/);
    byte_4D2A6FE = 1;
  }
  MissionNaviTransitionConfirmDialog_TypeInfo->static_fields->MISSION_NAVI_NAME_COMMON = (struct System_String_o *)StringLiteral_8750/*"MISSION_NAVI_NAME_COMMON"*/;
  sub_1C93A78(MissionNaviTransitionConfirmDialog_TypeInfo->static_fields, StringLiteral_8750/*"MISSION_NAVI_NAME_COMMON"*/);
  v1 = StringLiteral_8751/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  static_fields = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  static_fields->MISSION_NAVI_NOT_OPEN_BOARD = (struct System_String_o *)StringLiteral_8751/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  sub_1C93A78(&static_fields->MISSION_NAVI_NOT_OPEN_BOARD, v1);
  v3 = StringLiteral_8748/*"MISSION_NAVI_MAIN_QUEST"*/;
  v4 = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  v4->MISSION_NAVI_MAIN_QUEST = (struct System_String_o *)StringLiteral_8748/*"MISSION_NAVI_MAIN_QUEST"*/;
  sub_1C93A78(&v4->MISSION_NAVI_MAIN_QUEST, v3);
}


void MissionNaviTransitionConfirmDialog___ctor(MissionNaviTransitionConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A6FD & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2A6FD = 1;
  }
  *(_OWORD *)&this->fields.messageTopOffset = xmmword_D00370;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2A6FC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    byte_4D2A6FC = 1;
  }
  memset(&v5, 0, sizeof(v5));
  boardItemDrawList = this->fields.boardItemDrawList;
  if ( boardItemDrawList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)boardItemDrawList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C93D2C(0, v4);
      MissionNaviTransitionBoardItemDraw__DeleteCallback((MissionNaviTransitionBoardItemDraw_o *)v5.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2A6F9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A6F9 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !closedMessageId )
    goto LABEL_10;
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    closedMessageId,
                                    (const MethodInfo_34632C0 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_10:
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_monitor;
  }
  if ( !entity )
LABEL_12:
    sub_1C93D2C(Master_object, v4);
  p_monitor = (System_String_o **)&entity[1].monitor;
  return *p_monitor;
}


System_String_o *MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  System_String_o *monitor; // x20
  __int64 Instance; // x0
  __int64 v7; // x1
  Il2CppObject *PrioredName; // x0
  System_String_o *v9; // x0
  int32_t WarID_ByQuestID; // w21
  int64_t OpenedAt; // x21
  System_Object_array *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x22
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v18; // x19
  __int64 v20; // x0
  int32_t Minute; // [xsp+Ch] [xbp-64h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-60h] BYREF
  int32_t Day; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t QuestReleaseValue_k__BackingField; // [xsp+18h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *v26; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4D2A6FA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A6FA = 1;
  }
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0;
  dateData = 0;
  v26 = 0;
  if ( questInfo && questInfo->fields._QuestReleaseClosedID_k__BackingField >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
      if ( Instance )
      {
        monitor = (System_String_o *)StringLiteral_1/*""*/;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     questInfo->fields._QuestReleaseClosedID_k__BackingField,
                     (const MethodInfo_34632C0 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Instance & 1) == 0 )
          goto LABEL_10;
        if ( entity )
        {
          monitor = (System_String_o *)entity[1].monitor;
LABEL_10:
          switch ( questInfo->fields._QuestReleaseType_k__BackingField )
          {
            case 1:
              Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                  (QuestTree_o *)Instance,
                                  questInfo->fields._QuestReleaseTargetID_k__BackingField,
                                  0);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarMaster___);
              if ( !Instance )
                goto LABEL_47;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &v26,
                      WarID_ByQuestID,
                      (const MethodInfo_34632C0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
                goto LABEL_40;
              Instance = (__int64)v26;
              if ( !v26 )
                goto LABEL_47;
              PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v26, 0);
LABEL_12:
              v9 = System_String__Format(monitor, PrioredName, 0);
              goto LABEL_39;
            case 6:
            case 7:
            case 9:
              QuestReleaseValue_k__BackingField = questInfo->fields._QuestReleaseValue_k__BackingField;
              PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &QuestReleaseValue_k__BackingField);
              goto LABEL_12;
            case 0xC:
              if ( !questEnt )
                goto LABEL_47;
              OpenedAt = QuestEntity__getOpenedAt(questEnt, 0);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              dateData = NetworkManager__getServerDateTime_42097084(OpenedAt, 0).fields._dateData;
              v12 = (System_Object_array *)sub_1C93B7C(object___TypeInfo, 4);
              if ( !System_DateTime_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
              LODWORD(QuestReleaseValue_k__BackingField) = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &QuestReleaseValue_k__BackingField);
              if ( !v12 )
                goto LABEL_47;
              v13 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1C93C10(Instance, v12->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( !LODWORD(v12->max_length) )
                goto LABEL_48;
              v12->m_Items[0] = v13;
              sub_1C93A78(v12->m_Items, v13);
              Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day);
              v14 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1C93C10(Instance, v12->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( LODWORD(v12->max_length) <= 1 )
                goto LABEL_48;
              v12->m_Items[1] = v14;
              sub_1C93A78(&v12->m_Items[1], v14);
              Hour = System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
              v15 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1C93C10(Instance, v12->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( LODWORD(v12->max_length) <= 2 )
                goto LABEL_48;
              v12->m_Items[2] = v15;
              sub_1C93A78(&v12->m_Items[2], v15);
              Minute = System_DateTime__get_Minute((System_DateTime_o)&dateData, 0);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
              v16 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1C93C10(Instance, v12->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_49:
                  v20 = sub_1C93D50();
                  sub_1C93BFC(v20, 0);
                }
              }
              if ( LODWORD(v12->max_length) <= 3 )
LABEL_48:
                sub_1C93D34(Instance);
              v12->m_Items[3] = v16;
              sub_1C93A78(&v12->m_Items[3], v16);
              v9 = System_String__Format_64467168(monitor, v12, 0);
LABEL_39:
              monitor = v9;
LABEL_40:
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
              if ( !questEnt || !Instance )
                goto LABEL_47;
              EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                         (QuestReleaseOverwriteMaster_o *)Instance,
                                         questEnt->fields.id,
                                         0,
                                         0);
              if ( EntityByQuestIdAndTime )
              {
                v18 = EntityByQuestIdAndTime;
                if ( !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0) )
                  monitor = v18->fields.overlayClosedMessage;
              }
              break;
            default:
              goto LABEL_40;
          }
          return monitor;
        }
      }
    }
LABEL_47:
    sub_1C93D2C(Instance, v7);
  }
  return monitor;
}


System_ValueTuple_string__string__o MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(
        MissionNaviQuestEntity_o *naviQuestEntity,
        MapControl_QuestInfo_o *tempQuestInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviQuestEntity_o *v6; // x20
  int32_t closedMessageId; // w21
  MissionNaviTransitionConfirmDialog_c *v8; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  Il2CppObject *v10; // x20
  System_String_o *QuestClosedMessageText; // x0
  const MethodInfo_3BE077C *v12; // x4
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  QuestEntity_o *Mine; // x0
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x2
  int32_t QuestType; // w19
  __int64 *v21; // x8
  System_String_o *v22; // x0
  struct System_String_o *v25; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v26; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v28; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = naviQuestEntity;
  if ( (byte_4D2A6F6 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C93AD4(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_8746/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_8754/*"MISSION_NAVI_QUEST_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    naviQuestEntity = (MissionNaviQuestEntity_o *)sub_1C93AD4(&StringLiteral_8753/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/);
    byte_4D2A6F6 = 1;
  }
  challengeNaviName = 0;
  if ( !v6 )
    goto LABEL_36;
  if ( !isLocked )
  {
    naviQuestEntity = (MissionNaviQuestEntity_o *)MissionNaviQuestEntity__TryGetChallengeNaviName(
                                                    v6,
                                                    &challengeNaviName,
                                                    0);
    if ( ((unsigned __int8)naviQuestEntity & 1) != 0 )
    {
      v10 = (Il2CppObject *)challengeNaviName;
    }
    else
    {
      if ( !tempQuestInfo )
        goto LABEL_36;
      naviQuestEntity = (MissionNaviQuestEntity_o *)tempQuestInfo->fields._WarInfo_k__BackingField;
      if ( !naviQuestEntity )
        goto LABEL_36;
      naviQuestEntity = (MissionNaviQuestEntity_o *)MapControl_WarInfo__GetMine(
                                                      (MapControl_WarInfo_o *)naviQuestEntity,
                                                      0);
      if ( !naviQuestEntity )
        goto LABEL_36;
      naviQuestEntity = (MissionNaviQuestEntity_o *)WarEntity__GetPrioredLongName((WarEntity_o *)naviQuestEntity, 0);
      if ( !naviQuestEntity )
        goto LABEL_36;
      v13 = (Il2CppObject *)System_String__Replace_64472288(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_113/*" "*/,
                              0);
      naviQuestEntity = (MissionNaviQuestEntity_o *)MapControl_QuestInfo__GetMine(tempQuestInfo, 0);
      if ( !naviQuestEntity )
        goto LABEL_36;
      naviQuestEntity = *(MissionNaviQuestEntity_o **)&naviQuestEntity->fields.priority;
      if ( !naviQuestEntity )
        goto LABEL_36;
      v14 = (Il2CppObject *)System_String__Replace_64472288(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_113/*" "*/,
                              0);
      if ( System_String__op_Equality((System_String_o *)v13, (System_String_o *)StringLiteral_859/*"-"*/, 0)
        || System_String__IsNullOrEmpty((System_String_o *)v13, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8753/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/, 0);
        v16 = System_String__Format(v15, v14, 0);
      }
      else
      {
        QuestType = MapControl_QuestInfo__GetQuestType(tempQuestInfo, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( QuestType == 2 )
          v21 = &StringLiteral_8746/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/;
        else
          v21 = &StringLiteral_8754/*"MISSION_NAVI_QUEST_MESSAGE"*/;
        v22 = LocalizationManager__Get((System_String_o *)*v21, 0);
        v16 = System_String__Format_64467032(v22, v13, v14, 0);
      }
      v10 = (Il2CppObject *)v16;
      challengeNaviName = v16;
    }
    v19 = (Il2CppObject *)StringLiteral_1/*""*/;
    goto LABEL_35;
  }
  closedMessageId = v6->fields.closedMessageId;
  v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
    v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v8->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  naviQuestEntity = (MissionNaviQuestEntity_o *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0);
  v10 = (Il2CppObject *)naviQuestEntity;
  if ( !closedMessageId )
  {
    if ( tempQuestInfo )
    {
      Mine = MapControl_QuestInfo__GetMine(tempQuestInfo, 0);
      QuestClosedMessageText = MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(tempQuestInfo, Mine, v18);
      goto LABEL_26;
    }
LABEL_36:
    sub_1C93D2C(naviQuestEntity, tempQuestInfo);
  }
  QuestClosedMessageText = MissionNaviTransitionConfirmDialog__GetClosedMessageText(
                             closedMessageId,
                             (const MethodInfo *)tempQuestInfo);
LABEL_26:
  v19 = (Il2CppObject *)QuestClosedMessageText;
LABEL_35:
  v25 = 0;
  v26 = 0;
  v28.fields.Item1 = (Il2CppObject *)&v25;
  v28.fields.Item2 = v10;
  System_ValueTuple_object__object____ctor(
    v28,
    v19,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v12);
  result.fields.Item1 = v25;
  result.fields.Item2 = v26;
  return result;
}


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
  System_String_o *v10; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_3BE077C *v13; // x4
  SpotEntity_o *Mine; // x0
  Il2CppObject *v15; // x19
  MissionNaviTransitionConfirmDialog_c *v16; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v18; // x0
  struct System_String_o *v21; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v22; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v24; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4D2A6F8 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C93AD4(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A6F8 = 1;
  }
  challengeNaviName = 0;
  if ( !v6 )
    goto LABEL_24;
  if ( !isLocked )
  {
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)MissionNaviTransitionEntity__TryGetChallengeNaviName(
                                                                     v6,
                                                                     &challengeNaviName,
                                                                     0);
    if ( ((unsigned __int8)missionNaviTransitionEntity & 1) != 0 )
    {
      v10 = challengeNaviName;
LABEL_22:
      ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( spotInfo )
    {
      Mine = MapControl_SpotInfo__GetMine(spotInfo, 0);
      if ( !Mine )
      {
        v15 = 0;
        goto LABEL_17;
      }
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)Mine->fields.name;
      if ( missionNaviTransitionEntity )
      {
        v15 = (Il2CppObject *)System_String__Replace_64472288(
                                (System_String_o *)missionNaviTransitionEntity,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                (System_String_o *)StringLiteral_113/*" "*/,
                                0);
LABEL_17:
        v16 = MissionNaviTransitionConfirmDialog_TypeInfo;
        if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
          v16 = MissionNaviTransitionConfirmDialog_TypeInfo;
        }
        MISSION_NAVI_NAME_COMMON = v16->static_fields->MISSION_NAVI_NAME_COMMON;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v18 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0);
        v10 = System_String__Format(v18, v15, 0);
        challengeNaviName = v10;
        goto LABEL_22;
      }
    }
LABEL_24:
    sub_1C93D2C(missionNaviTransitionEntity, spotInfo);
  }
  closedMessageId = v6->fields.closedMessageId;
  v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
    v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v8->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v11);
LABEL_23:
  v21 = 0;
  v22 = 0;
  v24.fields.Item1 = (Il2CppObject *)&v21;
  v24.fields.Item2 = (Il2CppObject *)v10;
  System_ValueTuple_object__object____ctor(
    v24,
    ClosedMessageText,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v13);
  result.fields.Item1 = v21;
  result.fields.Item2 = v22;
  return result;
}


System_ValueTuple_string__string__o MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MapControl_WarInfo_o *warInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviTransitionEntity_o *v6; // x20
  int32_t closedMessageId; // w20
  MissionNaviTransitionConfirmDialog_c *v8; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x19
  Il2CppObject *v10; // x19
  const MethodInfo *v11; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_3BE077C *v13; // x4
  MissionNaviTransitionConfirmDialog_c *v14; // x0
  System_String_o *MISSION_NAVI_MAIN_QUEST; // x19
  System_String_o *v16; // x0
  WarEntity_o *Mine; // x0
  Il2CppObject *v18; // x19
  MissionNaviTransitionConfirmDialog_c *v19; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v21; // x0
  struct System_String_o *v24; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v25; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v27; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4D2A6F7 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C93AD4(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_8580/*"MAIN_SCENARIO"*/);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A6F7 = 1;
  }
  challengeNaviName = 0;
  if ( !v6 )
    goto LABEL_31;
  if ( !isLocked )
  {
    if ( MissionNaviTransitionEntity__TryGetChallengeNaviName(v6, &challengeNaviName, 0) )
    {
      v10 = (Il2CppObject *)challengeNaviName;
LABEL_29:
      ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
      goto LABEL_30;
    }
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)System_String__op_Equality(
                                                                     v6->fields.transitionParam,
                                                                     (System_String_o *)StringLiteral_8580/*"MAIN_SCENARIO"*/,
                                                                     0);
    if ( ((unsigned __int8)missionNaviTransitionEntity & 1) != 0 )
    {
      v14 = MissionNaviTransitionConfirmDialog_TypeInfo;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
        v14 = MissionNaviTransitionConfirmDialog_TypeInfo;
      }
      MISSION_NAVI_MAIN_QUEST = v14->static_fields->MISSION_NAVI_MAIN_QUEST;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get(MISSION_NAVI_MAIN_QUEST, 0);
LABEL_28:
      v10 = (Il2CppObject *)v16;
      challengeNaviName = v16;
      goto LABEL_29;
    }
    if ( warInfo )
    {
      Mine = MapControl_WarInfo__GetMine(warInfo, 0);
      if ( !Mine )
      {
        v18 = 0;
        goto LABEL_23;
      }
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)WarEntity__GetPrioredLongName(Mine, 0);
      if ( missionNaviTransitionEntity )
      {
        v18 = (Il2CppObject *)System_String__Replace_64472288(
                                (System_String_o *)missionNaviTransitionEntity,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                (System_String_o *)StringLiteral_113/*" "*/,
                                0);
LABEL_23:
        v19 = MissionNaviTransitionConfirmDialog_TypeInfo;
        if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
          v19 = MissionNaviTransitionConfirmDialog_TypeInfo;
        }
        MISSION_NAVI_NAME_COMMON = v19->static_fields->MISSION_NAVI_NAME_COMMON;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0);
        v16 = System_String__Format(v21, v18, 0);
        goto LABEL_28;
      }
    }
LABEL_31:
    sub_1C93D2C(missionNaviTransitionEntity, warInfo);
  }
  closedMessageId = v6->fields.closedMessageId;
  v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
    v8 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v8->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = (Il2CppObject *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v11);
LABEL_30:
  v24 = 0;
  v25 = 0;
  v27.fields.Item1 = (Il2CppObject *)&v24;
  v27.fields.Item2 = v10;
  System_ValueTuple_object__object____ctor(
    v27,
    ClosedMessageText,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v13);
  result.fields.Item1 = v24;
  result.fields.Item2 = v25;
  return result;
}


void MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0

  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  if ( !limitedMissionItemDraw )
    sub_1C93D2C(0, method);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4D2A6F4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    byte_4D2A6F4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    MissionNaviTransitionConfirmDialog__DeleteCallback(this, method);
    this->fields.state = 3;
    v3 = Method_MissionNaviTransitionConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C93D2C(v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      closeFunc->fields.method);
  }
}


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
  UILabel_o *titleLabel; // x25
  System_String_o *limitedMissionItemDraw; // x0
  __int64 v17; // x1
  UILabel_o *choiceMessageLabel; // x25
  Il2CppClass *v19; // x8
  __int64 naturalAligment; // x9
  MissionListViewItem_o *v21; // x10
  MissionListViewItem_o *v22; // x1
  struct MasterMissionListViewItem_o **p_missionListViewItem; // x0
  Il2CppClass *v24; // x8
  __int64 v25; // x9
  MissionListViewManager_o *v26; // x10
  MissionListViewManager_o *v27; // x1
  struct MasterMissionListViewManager_o **p_missionListViewManager; // x24
  UnityEngine_Object_o *v29; // x22
  float messageHeight; // s8
  float messageTopOffset; // s9
  UnityEngine_GameObject_o *v32; // x23
  UnityEngine_Transform_o *v33; // x22
  float v34; // s8
  UnityEngine_Transform_o *v35; // x24
  UnityEngine_Transform_o *v36; // x24
  float v37; // s10
  float messageBottomOffset; // s11
  float boardHeight; // s9
  System_Collections_Generic_List_object__o *v40; // x25
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o **p_boardItemDrawList; // x24
  float v42; // s9
  float v43; // s8
  __int64 v44; // x1
  UnityEngine_GameObject_o *challengeGrid; // x0
  Il2CppObject *current; // x26
  Il2CppObject *missionNaviTransitionBoardItemDrawPrefab; // x21
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  UnityEngine_GameObject_o *v51; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v53; // x1
  Il2CppObject *v54; // x21
  UnityEngine_Transform_o *v55; // x0
  __int64 v56; // x1
  float v57; // s8
  __int64 v58; // x0
  __int64 v59; // x1
  UnityEngine_Transform_o *v60; // x26
  __int64 v61; // x0
  __int64 v62; // x1
  UnityEngine_Transform_o *v63; // x25
  __int64 v64; // x1
  System_Collections_Generic_List_object__o *v65; // x0
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x8
  UILabel_o *closeBtnLabel; // x21
  UILabel_o *warningMessageLabel; // x21
  System_Action_o *v72; // x20
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A6F3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&MasterMissionListViewItem_TypeInfo);
    sub_1C93AD4(&MasterMissionListViewManager_TypeInfo);
    sub_1C93AD4(&Method_MissionNaviTransitionConfirmDialog_EndOpen__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_8738/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_8740/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_8744/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_8743/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/);
    byte_4D2A6F3 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  this->fields.closeFunc = closeDelegate;
  this->fields.isSetUpMissionListView = 0;
  sub_1C93A78(&this->fields.closeFunc, closeDelegate);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8743/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, limitedMissionItemDraw, 0);
  choiceMessageLabel = this->fields.choiceMessageLabel;
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8738/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, 0);
  if ( !choiceMessageLabel )
    goto LABEL_96;
  UILabel__set_text(choiceMessageLabel, limitedMissionItemDraw, 0);
  if ( missionBoardType == 1 )
  {
    if ( missionItem )
    {
      v19 = (Il2CppClass *)MasterMissionListViewItem_TypeInfo;
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( missionItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MasterMissionListViewItem_c *)missionItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
          v21 = missionItem;
        else
          v21 = 0;
      }
      else
      {
        v21 = 0;
      }
      this->fields.missionListViewItem = (struct MasterMissionListViewItem_o *)v21;
      p_missionListViewItem = &this->fields.missionListViewItem;
      if ( missionItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( missionItem->klass->_2.typeHierarchy[naturalAligment - 1] == v19 )
          v22 = missionItem;
        else
          v22 = 0;
      }
      else
      {
        v22 = 0;
      }
    }
    else
    {
      v22 = 0;
      this->fields.missionListViewItem = 0;
      p_missionListViewItem = &this->fields.missionListViewItem;
    }
    sub_1C93A78(p_missionListViewItem, v22);
    if ( listViewManager )
    {
      v24 = (Il2CppClass *)MasterMissionListViewManager_TypeInfo;
      v25 = MasterMissionListViewManager_TypeInfo->_2.naturalAligment;
      if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)v25 )
      {
        if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v25 - 1] == MasterMissionListViewManager_TypeInfo )
          v26 = listViewManager;
        else
          v26 = 0;
      }
      else
      {
        v26 = 0;
      }
      this->fields.missionListViewManager = (struct MasterMissionListViewManager_o *)v26;
      p_missionListViewManager = &this->fields.missionListViewManager;
      if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)v25 )
      {
        if ( listViewManager->klass->_2.typeHierarchy[v25 - 1] == v24 )
          v27 = listViewManager;
        else
          v27 = 0;
      }
      else
      {
        v27 = 0;
      }
    }
    else
    {
      v27 = 0;
      this->fields.missionListViewManager = 0;
      p_missionListViewManager = &this->fields.missionListViewManager;
    }
    sub_1C93A78(p_missionListViewManager, v27);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                  0);
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 1, 0);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    ((void (__fastcall *)(System_String_o *, MissionListViewItem_o *, __int64, MissionListViewManager_o *, const MethodInfo *))limitedMissionItemDraw->klass->vtable._4_CompareTo.methodPtr)(
      limitedMissionItemDraw,
      missionItem,
      1,
      listViewManager,
      limitedMissionItemDraw->klass->vtable._4_CompareTo.method);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    MissionListViewItemDraw__SetChallengeButtonActive((MissionListViewItemDraw_o *)limitedMissionItemDraw, 0, 0);
    if ( missionItem )
    {
      v29 = (UnityEngine_Object_o *)*p_missionListViewManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
        this->fields.isSetUpMissionListView = 1;
    }
  }
  limitedMissionItemDraw = (System_String_o *)this->fields.choiceMessageLabel;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  messageHeight = this->fields.messageHeight;
  messageTopOffset = this->fields.messageTopOffset;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                0);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v32 = (UnityEngine_GameObject_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0);
  if ( !this->fields.challengeGrid )
    goto LABEL_96;
  v33 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.challengeGrid, 0);
  if ( !v33 )
    goto LABEL_96;
  UnityEngine_Transform__set_parent(v33, (UnityEngine_Transform_o *)limitedMissionItemDraw, 0);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v32, 0);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v34 = 0.0 - (float)((float)(messageHeight * 0.5) + messageTopOffset);
  v75.fields.x = 0.0;
  v75.fields.z = 0.0;
  v75.fields.y = v34;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)limitedMissionItemDraw, v75, 0);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v32, 0);
  v35 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4D2A13F )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  if ( !v35 )
    goto LABEL_96;
  UnityEngine_Transform__set_localRotation(v35, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v32, 0);
  v36 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4D2A13E )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v36 )
    goto LABEL_96;
  UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  messageBottomOffset = this->fields.messageBottomOffset;
  v37 = this->fields.messageHeight;
  boardHeight = this->fields.boardHeight;
  v40 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
  this->fields.boardItemDrawList = (struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *)v40;
  p_boardItemDrawList = &this->fields.boardItemDrawList;
  limitedMissionItemDraw = (System_String_o *)sub_1C93A78(&this->fields.boardItemDrawList, v40);
  if ( !boardItemList )
    goto LABEL_96;
  v42 = boardHeight * 0.5;
  v43 = v34 - (float)((float)(v37 * 0.5) + messageBottomOffset);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    (System_Collections_Generic_List_object__o *)boardItemList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
  v74 = v73;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v74,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__) )
  {
    challengeGrid = this->fields.challengeGrid;
    if ( !challengeGrid )
      sub_1C93D2C(0, v44);
    current = v74.fields._current;
    missionNaviTransitionBoardItemDrawPrefab = (Il2CppObject *)this->fields.missionNaviTransitionBoardItemDrawPrefab;
    transform = UnityEngine_GameObject__get_transform(challengeGrid, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v49 = UnityEngine_Object__Instantiate_object__52629400(
            missionNaviTransitionBoardItemDrawPrefab,
            transform,
            (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    v51 = (UnityEngine_GameObject_o *)v49;
    if ( !v49 )
      sub_1C93D2C(0, v50);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v49,
                                   (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    v54 = ComponentInChildren_object;
    if ( !ComponentInChildren_object )
      sub_1C93D2C(0, v53);
    ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, const MethodInfo *))ComponentInChildren_object->klass->vtable[4].methodPtr)(
      ComponentInChildren_object,
      current,
      0,
      ComponentInChildren_object->klass->vtable[4].method);
    v55 = UnityEngine_GameObject__get_transform(v51, 0);
    if ( !v55 )
      sub_1C93D2C(0, v56);
    v57 = v43 - v42;
    v76.fields.x = 0.0;
    v76.fields.z = 0.0;
    v76.fields.y = v57;
    UnityEngine_Transform__set_localPosition(v55, v76, 0);
    v58 = (__int64)UnityEngine_GameObject__get_transform(v51, 0);
    v60 = (UnityEngine_Transform_o *)v58;
    if ( !byte_4D2A13F )
    {
      v58 = sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
      byte_4D2A13F = 1;
    }
    if ( !v60 )
      sub_1C93D2C(v58, v59);
    UnityEngine_Transform__set_localRotation(v60, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
    v61 = (__int64)UnityEngine_GameObject__get_transform(v51, 0);
    v63 = (UnityEngine_Transform_o *)v61;
    if ( !byte_4D2A13E )
    {
      v61 = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    if ( !v63 )
      sub_1C93D2C(v61, v62);
    UnityEngine_Transform__set_localScale(v63, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v65 = (System_Collections_Generic_List_object__o *)*p_boardItemDrawList;
    if ( !*p_boardItemDrawList )
      sub_1C93D2C(0, v64);
    items = v65->fields._items;
    v67 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__;
    ++v65->fields._version;
    if ( !items )
      sub_1C93D2C(v65, v64);
    size = v65->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v65,
        v54,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &items->obj.klass + size;
      v65->fields._size = size + 1;
      v69[4] = (Il2CppClass *)v54;
      sub_1C93A78(v69 + 4, v54);
    }
    v43 = v57 - v42;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v74,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  UIScrollView__ResetPosition((UIScrollView_o *)limitedMissionItemDraw, 0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  ((void (__fastcall *)(System_String_o *, _QWORD, const MethodInfo *, float, float))limitedMissionItemDraw->klass->vtable._9_GetTypeCode.methodPtr)(
    limitedMissionItemDraw,
    0,
    limitedMissionItemDraw->klass->vtable._9_GetTypeCode.method,
    0.0,
    0.0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  ((void (__fastcall *)(System_String_o *, __int64, const MethodInfo *))limitedMissionItemDraw->klass->vtable._8_Equals.methodPtr)(
    limitedMissionItemDraw,
    1,
    limitedMissionItemDraw->klass->vtable._8_Equals.method);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  UIScrollView__UpdatePosition((UIScrollView_o *)limitedMissionItemDraw, 0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeGrid;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)limitedMissionItemDraw, 0) <= 3 )
  {
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)limitedMissionItemDraw, 0, 0);
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollBar;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 0, 0);
  }
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8740/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, 0);
  if ( !closeBtnLabel
    || (UILabel__set_text(closeBtnLabel, limitedMissionItemDraw, 0),
        warningMessageLabel = this->fields.warningMessageLabel,
        limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8744/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, 0),
        !warningMessageLabel) )
  {
LABEL_96:
    sub_1C93D2C(limitedMissionItemDraw, v17);
  }
  UILabel__set_text(warningMessageLabel, limitedMissionItemDraw, 0);
  ActionExtensions__Call(openCallback, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v72 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v72, (Il2CppObject *)this, Method_MissionNaviTransitionConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0, 0);
}


void MissionNaviTransitionConfirmDialog__RedispResTime(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x19
  struct MasterMissionListViewItem_o *missionListViewItem; // x20
  int64_t Time; // x0
  __int64 v6; // x1

  if ( (byte_4D2A6FB & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A6FB = 1;
  }
  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  missionListViewItem = this->fields.missionListViewItem;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !limitedMissionItemDraw )
    sub_1C93D2C(Time, v6);
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
    sub_1C93D2C(this, method);
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
      sub_1C93D2C(0, v3);
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
  if ( (byte_4D2A6F5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15750/*"Window/Objects/CancelButton"*/);
    byte_4D2A6F5 = 1;
  }
  return (System_String_o *)StringLiteral_15750/*"Window/Objects/CancelButton"*/;
}


void MissionNaviTransitionConfirmDialog_CloseDelegate___ctor(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C93A78(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1ABF27C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ABF23C;
}


System_IAsyncResult_o *MissionNaviTransitionConfirmDialog_CloseDelegate__BeginInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void MissionNaviTransitionConfirmDialog_CloseDelegate__EndInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void MissionNaviTransitionConfirmDialog_CloseDelegate__Invoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}