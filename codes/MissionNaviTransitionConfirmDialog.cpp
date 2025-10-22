void MissionNaviTransitionConfirmDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct MissionNaviTransitionConfirmDialog_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct MissionNaviTransitionConfirmDialog_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5A800 & 1) == 0 )
  {
    sub_1C3E564(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C3E564(&StringLiteral_8700/*"MISSION_NAVI_NOT_OPEN_BOARD"*/);
    sub_1C3E564(&StringLiteral_8699/*"MISSION_NAVI_NAME_COMMON"*/);
    sub_1C3E564(&StringLiteral_8697/*"MISSION_NAVI_MAIN_QUEST"*/);
    byte_4C5A800 = 1;
  }
  MissionNaviTransitionConfirmDialog_TypeInfo->static_fields->MISSION_NAVI_NAME_COMMON = (struct System_String_o *)StringLiteral_8699/*"MISSION_NAVI_NAME_COMMON"*/;
  sub_1C3E508(
    (CGThumbnailListItem_o *)MissionNaviTransitionConfirmDialog_TypeInfo->static_fields,
    StringLiteral_8699/*"MISSION_NAVI_NAME_COMMON"*/,
    v1,
    v2);
  v3 = StringLiteral_8700/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  static_fields = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  static_fields->MISSION_NAVI_NOT_OPEN_BOARD = (struct System_String_o *)StringLiteral_8700/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->MISSION_NAVI_NOT_OPEN_BOARD, v3, v5, v6);
  v7 = StringLiteral_8697/*"MISSION_NAVI_MAIN_QUEST"*/;
  v8 = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  v8->MISSION_NAVI_MAIN_QUEST = (struct System_String_o *)StringLiteral_8697/*"MISSION_NAVI_MAIN_QUEST"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->MISSION_NAVI_MAIN_QUEST, v7, v9, v10);
}


void MissionNaviTransitionConfirmDialog___ctor(MissionNaviTransitionConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C5A7FF & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C5A7FF = 1;
  }
  *(_OWORD *)&this->fields.messageTopOffset = xmmword_C11A00;
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
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C5A7FE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    byte_4C5A7FE = 1;
  }
  memset(&v5, 0, sizeof(v5));
  boardItemDrawList = this->fields.boardItemDrawList;
  if ( boardItemDrawList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)boardItemDrawList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C3E7C0(0, v4);
      MissionNaviTransitionBoardItemDraw__DeleteCallback((MissionNaviTransitionBoardItemDraw_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
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

  if ( (byte_4C5A7FB & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A7FB = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !closedMessageId )
    goto LABEL_10;
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    closedMessageId,
                                    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_10:
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_monitor;
  }
  if ( !entity )
LABEL_12:
    sub_1C3E7C0(Master_object, v4);
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *PrioredName; // x0
  System_String_o *v15; // x0
  int32_t WarID_ByQuestID; // w21
  int64_t OpenedAt; // x21
  System_Object_array *v18; // x21
  System_DateTime_o v19; // x0
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x22
  System_DateTime_o v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x22
  System_DateTime_o v39; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x22
  System_DateTime_o v49; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x22
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v60; // x19
  __int64 v62; // x0
  int32_t Minute; // [xsp+Ch] [xbp-64h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-60h] BYREF
  int32_t Day; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t QuestReleaseValue_k__BackingField; // [xsp+18h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *v68; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4C5A7FC & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A7FC = 1;
  }
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0;
  dateData = 0;
  v68 = 0;
  if ( questInfo && questInfo->fields._QuestReleaseClosedID_k__BackingField >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
      if ( Instance )
      {
        monitor = (System_String_o *)StringLiteral_1/*""*/;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     questInfo->fields._QuestReleaseClosedID_k__BackingField,
                     (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Instance & 1) == 0 )
          goto LABEL_10;
        if ( entity )
        {
          monitor = (System_String_o *)entity[1].monitor;
LABEL_10:
          switch ( questInfo->fields._QuestReleaseType_k__BackingField )
          {
            case 1:
              Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                  (QuestTree_o *)Instance,
                                  questInfo->fields._QuestReleaseTargetID_k__BackingField,
                                  0);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
              if ( !Instance )
                goto LABEL_47;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &v68,
                      WarID_ByQuestID,
                      (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
                goto LABEL_40;
              Instance = (__int64)v68;
              if ( !v68 )
                goto LABEL_47;
              PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v68, 0);
LABEL_12:
              v15 = System_String__Format(monitor, PrioredName, 0);
              goto LABEL_39;
            case 6:
            case 7:
            case 9:
              QuestReleaseValue_k__BackingField = questInfo->fields._QuestReleaseValue_k__BackingField;
              PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(
                                              long_TypeInfo,
                                              &QuestReleaseValue_k__BackingField,
                                              v8,
                                              v9,
                                              v10,
                                              v11,
                                              v12,
                                              v13);
              goto LABEL_12;
            case 0xC:
              if ( !questEnt )
                goto LABEL_47;
              OpenedAt = QuestEntity__getOpenedAt(questEnt, 0);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              dateData = NetworkManager__getServerDateTime_41416004(OpenedAt, 0).fields._dateData;
              v18 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
              if ( !System_DateTime_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
              v19.fields._dateData = (uint64_t)&dateData;
              LODWORD(QuestReleaseValue_k__BackingField) = System_DateTime__get_Month(v19, 0);
              Instance = j_il2cpp_value_box_0(
                           int_TypeInfo,
                           &QuestReleaseValue_k__BackingField,
                           v20,
                           v21,
                           v22,
                           v23,
                           v24,
                           v25);
              if ( !v18 )
                goto LABEL_47;
              v28 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1C3E6A0(Instance, v18->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( !LODWORD(v18->max_length) )
                goto LABEL_48;
              v18->m_Items[0] = v28;
              sub_1C3E508((CGThumbnailListItem_o *)v18->m_Items, (int32_t)v28, v26, v27);
              v29.fields._dateData = (uint64_t)&dateData;
              Day = System_DateTime__get_Day(v29, 0);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day, v30, v31, v32, v33, v34, v35);
              v38 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1C3E6A0(Instance, v18->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( LODWORD(v18->max_length) <= 1 )
                goto LABEL_48;
              v18->m_Items[1] = v38;
              sub_1C3E508((CGThumbnailListItem_o *)&v18->m_Items[1], (int32_t)v38, v36, v37);
              v39.fields._dateData = (uint64_t)&dateData;
              Hour = System_DateTime__get_Hour(v39, 0);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v40, v41, v42, v43, v44, v45);
              v48 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1C3E6A0(Instance, v18->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( LODWORD(v18->max_length) <= 2 )
                goto LABEL_48;
              v18->m_Items[2] = v48;
              sub_1C3E508((CGThumbnailListItem_o *)&v18->m_Items[2], (int32_t)v48, v46, v47);
              v49.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v49, 0);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v50, v51, v52, v53, v54, v55);
              v58 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1C3E6A0(Instance, v18->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_49:
                  v62 = sub_1C3E7E4(Instance);
                  sub_1C3E68C(v62, 0);
                }
              }
              if ( LODWORD(v18->max_length) <= 3 )
LABEL_48:
                sub_1C3E7C8(Instance, v7);
              v18->m_Items[3] = v58;
              sub_1C3E508((CGThumbnailListItem_o *)&v18->m_Items[3], (int32_t)v58, v56, v57);
              v15 = System_String__Format_63677896(monitor, v18, 0);
LABEL_39:
              monitor = v15;
LABEL_40:
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
              if ( !questEnt || !Instance )
                goto LABEL_47;
              EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                         (QuestReleaseOverwriteMaster_o *)Instance,
                                         questEnt->fields.id,
                                         0,
                                         0);
              if ( EntityByQuestIdAndTime )
              {
                v60 = EntityByQuestIdAndTime;
                if ( !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0) )
                  monitor = v60->fields.overlayClosedMessage;
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
    sub_1C3E7C0(Instance, v7);
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
  int32_t closedMessageId; // w21
  MissionNaviTransitionConfirmDialog_c *v8; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  Il2CppObject *v10; // x20
  System_String_o *QuestClosedMessageText; // x0
  const MethodInfo_3B15274 *v12; // x4
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
  struct System_String_o *v23; // x0
  struct System_String_o *v24; // x1
  struct System_String_o *v25; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v26; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v28; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = naviQuestEntity;
  if ( (byte_4C5A7F8 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C3E564(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_113/*" "*/);
    sub_1C3E564(&StringLiteral_8695/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_861/*"-"*/);
    sub_1C3E564(&StringLiteral_8703/*"MISSION_NAVI_QUEST_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    naviQuestEntity = (MissionNaviQuestEntity_o *)sub_1C3E564(&StringLiteral_8702/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/);
    byte_4C5A7F8 = 1;
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
      v13 = (Il2CppObject *)System_String__Replace_63683016(
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
      v14 = (Il2CppObject *)System_String__Replace_63683016(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_113/*" "*/,
                              0);
      if ( System_String__op_Equality((System_String_o *)v13, (System_String_o *)StringLiteral_861/*"-"*/, 0)
        || System_String__IsNullOrEmpty((System_String_o *)v13, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8702/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/, 0);
        v16 = System_String__Format(v15, v14, 0);
      }
      else
      {
        QuestType = MapControl_QuestInfo__GetQuestType(tempQuestInfo, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( QuestType == 2 )
          v21 = &StringLiteral_8695/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/;
        else
          v21 = &StringLiteral_8703/*"MISSION_NAVI_QUEST_MESSAGE"*/;
        v22 = LocalizationManager__Get((System_String_o *)*v21, 0);
        v16 = System_String__Format_63677760(v22, v13, v14, 0);
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
    sub_1C3E7C0(naviQuestEntity, tempQuestInfo);
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
  v23 = v25;
  v24 = v26;
  result.fields.Item2 = v24;
  result.fields.Item1 = v23;
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
  System_String_o *v10; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_3B15274 *v13; // x4
  SpotEntity_o *Mine; // x0
  Il2CppObject *v15; // x19
  MissionNaviTransitionConfirmDialog_c *v16; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v18; // x0
  struct System_String_o *v19; // x0
  struct System_String_o *v20; // x1
  struct System_String_o *v21; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v22; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v24; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4C5A7FA & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C3E564(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_113/*" "*/);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A7FA = 1;
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
        v15 = (Il2CppObject *)System_String__Replace_63683016(
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
    sub_1C3E7C0(missionNaviTransitionEntity, spotInfo);
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
  v19 = v21;
  v20 = v22;
  result.fields.Item2 = v20;
  result.fields.Item1 = v19;
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
  int32_t closedMessageId; // w20
  MissionNaviTransitionConfirmDialog_c *v8; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x19
  Il2CppObject *v10; // x19
  const MethodInfo *v11; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_3B15274 *v13; // x4
  MissionNaviTransitionConfirmDialog_c *v14; // x0
  System_String_o *MISSION_NAVI_MAIN_QUEST; // x19
  System_String_o *v16; // x0
  WarEntity_o *Mine; // x0
  Il2CppObject *v18; // x19
  MissionNaviTransitionConfirmDialog_c *v19; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v21; // x0
  struct System_String_o *v22; // x0
  struct System_String_o *v23; // x1
  struct System_String_o *v24; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v25; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v27; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4C5A7F9 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&MissionNaviTransitionConfirmDialog_TypeInfo);
    sub_1C3E564(&Method_System_ValueTuple_string__string___ctor__);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_113/*" "*/);
    sub_1C3E564(&StringLiteral_8531/*"MAIN_SCENARIO"*/);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A7F9 = 1;
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
                                                                     (System_String_o *)StringLiteral_8531/*"MAIN_SCENARIO"*/,
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
        v18 = (Il2CppObject *)System_String__Replace_63683016(
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
    sub_1C3E7C0(missionNaviTransitionEntity, warInfo);
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
  v22 = v24;
  v23 = v25;
  result.fields.Item2 = v23;
  result.fields.Item1 = v22;
  return result;
}


void MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0

  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  if ( !limitedMissionItemDraw )
    sub_1C3E7C0(0, method);
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

  if ( (byte_4C5A7F6 & 1) == 0 )
  {
    sub_1C3E564(&Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    byte_4C5A7F6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    MissionNaviTransitionConfirmDialog__DeleteCallback(this, method);
    this->fields.state = 3;
    v3 = Method_MissionNaviTransitionConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C3E7C0(v5, v6);
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
  UILabel_o *titleLabel; // x25
  System_String_o *limitedMissionItemDraw; // x0
  __int64 v17; // x1
  UILabel_o *choiceMessageLabel; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppClass *v21; // x8
  __int64 naturalAligment; // x9
  MissionListViewItem_o *v23; // x10
  int32_t v24; // w1
  struct MasterMissionListViewItem_o **p_missionListViewItem; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppClass *v28; // x8
  __int64 v29; // x9
  MissionListViewManager_o *v30; // x10
  int32_t v31; // w1
  struct MasterMissionListViewManager_o **p_missionListViewManager; // x24
  UnityEngine_Object_o *v33; // x22
  float messageHeight; // s8
  float messageTopOffset; // s9
  UnityEngine_GameObject_o *v36; // x23
  UnityEngine_Transform_o *v37; // x22
  float v38; // s8
  UnityEngine_Transform_o *v39; // x24
  UnityEngine_Transform_o *v40; // x24
  float v41; // s10
  float messageBottomOffset; // s11
  float boardHeight; // s9
  System_Collections_Generic_List_object__o *v44; // x25
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o **p_boardItemDrawList; // x24
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  float v48; // s9
  float v49; // s8
  __int64 v50; // x1
  UnityEngine_GameObject_o *challengeGrid; // x0
  Il2CppObject *current; // x26
  Il2CppObject *missionNaviTransitionBoardItemDrawPrefab; // x21
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  UnityEngine_GameObject_o *v57; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v59; // x1
  Il2CppObject *v60; // x21
  UnityEngine_Transform_o *v61; // x0
  __int64 v62; // x1
  float v63; // s8
  __int64 v64; // x0
  __int64 v65; // x1
  UnityEngine_Transform_o *v66; // x26
  __int64 v67; // x0
  __int64 v68; // x1
  UnityEngine_Transform_o *v69; // x25
  __int64 v70; // x1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Collections_Generic_List_object__o *v73; // x0
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x8
  UILabel_o *closeBtnLabel; // x21
  UILabel_o *warningMessageLabel; // x21
  System_Action_o *v80; // x20
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5A7F5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    sub_1C3E564(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&MasterMissionListViewItem_TypeInfo);
    sub_1C3E564(&MasterMissionListViewManager_TypeInfo);
    sub_1C3E564(&Method_MissionNaviTransitionConfirmDialog_EndOpen__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_8687/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_8689/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/);
    sub_1C3E564(&StringLiteral_8693/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_8692/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/);
    byte_4C5A7F5 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  this->fields.closeFunc = closeDelegate;
  this->fields.isSetUpMissionListView = 0;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)closeDelegate,
    (int32_t)listViewManager,
    *(const MethodInfo **)&missionBoardType);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, limitedMissionItemDraw, 0);
  choiceMessageLabel = this->fields.choiceMessageLabel;
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8687/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, 0);
  if ( !choiceMessageLabel )
    goto LABEL_96;
  UILabel__set_text(choiceMessageLabel, limitedMissionItemDraw, 0);
  if ( missionBoardType == 1 )
  {
    if ( missionItem )
    {
      v21 = (Il2CppClass *)MasterMissionListViewItem_TypeInfo;
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( missionItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MasterMissionListViewItem_c *)missionItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
          v23 = missionItem;
        else
          v23 = 0;
      }
      else
      {
        v23 = 0;
      }
      this->fields.missionListViewItem = (struct MasterMissionListViewItem_o *)v23;
      p_missionListViewItem = &this->fields.missionListViewItem;
      if ( missionItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( missionItem->klass->_2.typeHierarchy[naturalAligment - 1] == v21 )
          v24 = (int)missionItem;
        else
          v24 = 0;
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = 0;
      this->fields.missionListViewItem = 0;
      p_missionListViewItem = &this->fields.missionListViewItem;
    }
    sub_1C3E508((CGThumbnailListItem_o *)p_missionListViewItem, v24, v19, v20);
    if ( listViewManager )
    {
      v28 = (Il2CppClass *)MasterMissionListViewManager_TypeInfo;
      v29 = MasterMissionListViewManager_TypeInfo->_2.naturalAligment;
      if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)v29 )
      {
        if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v29 - 1] == MasterMissionListViewManager_TypeInfo )
          v30 = listViewManager;
        else
          v30 = 0;
      }
      else
      {
        v30 = 0;
      }
      this->fields.missionListViewManager = (struct MasterMissionListViewManager_o *)v30;
      p_missionListViewManager = &this->fields.missionListViewManager;
      if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)v29 )
      {
        if ( listViewManager->klass->_2.typeHierarchy[v29 - 1] == v28 )
          v31 = (int)listViewManager;
        else
          v31 = 0;
      }
      else
      {
        v31 = 0;
      }
    }
    else
    {
      v31 = 0;
      this->fields.missionListViewManager = 0;
      p_missionListViewManager = &this->fields.missionListViewManager;
    }
    sub_1C3E508((CGThumbnailListItem_o *)p_missionListViewManager, v31, v26, v27);
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
      v33 = (UnityEngine_Object_o *)*p_missionListViewManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
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
  v36 = (UnityEngine_GameObject_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0);
  if ( !this->fields.challengeGrid )
    goto LABEL_96;
  v37 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.challengeGrid, 0);
  if ( !v37 )
    goto LABEL_96;
  UnityEngine_Transform__set_parent(v37, (UnityEngine_Transform_o *)limitedMissionItemDraw, 0);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v36, 0);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v38 = 0.0 - (float)((float)(messageHeight * 0.5) + messageTopOffset);
  v83.fields.x = 0.0;
  v83.fields.z = 0.0;
  v83.fields.y = v38;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)limitedMissionItemDraw, v83, 0);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v36, 0);
  v39 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4C506A7 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
    byte_4C506A7 = 1;
  }
  if ( !v39 )
    goto LABEL_96;
  UnityEngine_Transform__set_localRotation(v39, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v36, 0);
  v40 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4C506A6 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  if ( !v40 )
    goto LABEL_96;
  UnityEngine_Transform__set_localScale(v40, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  messageBottomOffset = this->fields.messageBottomOffset;
  v41 = this->fields.messageHeight;
  boardHeight = this->fields.boardHeight;
  v44 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
  this->fields.boardItemDrawList = (struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *)v44;
  p_boardItemDrawList = &this->fields.boardItemDrawList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.boardItemDrawList, (int32_t)v44, v46, v47);
  if ( !boardItemList )
    goto LABEL_96;
  v48 = boardHeight * 0.5;
  v49 = v38 - (float)((float)(v41 * 0.5) + messageBottomOffset);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    (System_Collections_Generic_List_object__o *)boardItemList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
  v82 = v81;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__) )
  {
    challengeGrid = this->fields.challengeGrid;
    if ( !challengeGrid )
      sub_1C3E7C0(0, v50);
    current = v82.fields._current;
    missionNaviTransitionBoardItemDrawPrefab = (Il2CppObject *)this->fields.missionNaviTransitionBoardItemDrawPrefab;
    transform = UnityEngine_GameObject__get_transform(challengeGrid, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v55 = UnityEngine_Object__Instantiate_object__51929056(
            missionNaviTransitionBoardItemDrawPrefab,
            transform,
            (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    v57 = (UnityEngine_GameObject_o *)v55;
    if ( !v55 )
      sub_1C3E7C0(0, v56);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v55,
                                   (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    v60 = ComponentInChildren_object;
    if ( !ComponentInChildren_object )
      sub_1C3E7C0(0, v59);
    ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, const MethodInfo *))ComponentInChildren_object->klass->vtable[4].methodPtr)(
      ComponentInChildren_object,
      current,
      0,
      ComponentInChildren_object->klass->vtable[4].method);
    v61 = UnityEngine_GameObject__get_transform(v57, 0);
    if ( !v61 )
      sub_1C3E7C0(0, v62);
    v63 = v49 - v48;
    v84.fields.x = 0.0;
    v84.fields.z = 0.0;
    v84.fields.y = v63;
    UnityEngine_Transform__set_localPosition(v61, v84, 0);
    v64 = (__int64)UnityEngine_GameObject__get_transform(v57, 0);
    v66 = (UnityEngine_Transform_o *)v64;
    if ( !byte_4C506A7 )
    {
      v64 = sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
      byte_4C506A7 = 1;
    }
    if ( !v66 )
      sub_1C3E7C0(v64, v65);
    UnityEngine_Transform__set_localRotation(v66, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
    v67 = (__int64)UnityEngine_GameObject__get_transform(v57, 0);
    v69 = (UnityEngine_Transform_o *)v67;
    if ( !byte_4C506A6 )
    {
      v67 = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A6 = 1;
    }
    if ( !v69 )
      sub_1C3E7C0(v67, v68);
    UnityEngine_Transform__set_localScale(v69, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v73 = (System_Collections_Generic_List_object__o *)*p_boardItemDrawList;
    if ( !*p_boardItemDrawList )
      sub_1C3E7C0(0, v70);
    items = v73->fields._items;
    v75 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__;
    ++v73->fields._version;
    if ( !items )
      sub_1C3E7C0(v73, v70);
    size = v73->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v73,
        v60,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = &items->obj.klass + size;
      v73->fields._size = size + 1;
      v77[4] = (Il2CppClass *)v60;
      sub_1C3E508((CGThumbnailListItem_o *)(v77 + 4), (int32_t)v60, v71, v72);
    }
    v49 = v63 - v48;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
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
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8689/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, 0);
  if ( !closeBtnLabel
    || (UILabel__set_text(closeBtnLabel, limitedMissionItemDraw, 0),
        warningMessageLabel = this->fields.warningMessageLabel,
        limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8693/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, 0),
        !warningMessageLabel) )
  {
LABEL_96:
    sub_1C3E7C0(limitedMissionItemDraw, v17);
  }
  UILabel__set_text(warningMessageLabel, limitedMissionItemDraw, 0);
  ActionExtensions__Call(openCallback, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v80 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v80, (Il2CppObject *)this, Method_MissionNaviTransitionConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v80, 0, 0, 0);
}


void MissionNaviTransitionConfirmDialog__RedispResTime(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x19
  struct MasterMissionListViewItem_o *missionListViewItem; // x20
  int64_t Time; // x0
  __int64 v6; // x1

  if ( (byte_4C5A7FD & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C5A7FD = 1;
  }
  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  missionListViewItem = this->fields.missionListViewItem;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !limitedMissionItemDraw )
    sub_1C3E7C0(Time, v6);
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
    sub_1C3E7C0(this, method);
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
      sub_1C3E7C0(0, v3);
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
  if ( (byte_4C5A7F7 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15660/*"Window/Objects/CancelButton"*/);
    byte_4C5A7F7 = 1;
  }
  return (System_String_o *)StringLiteral_15660/*"Window/Objects/CancelButton"*/;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A86F34;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A86EF4;
}


System_IAsyncResult_o *MissionNaviTransitionConfirmDialog_CloseDelegate__BeginInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


void MissionNaviTransitionConfirmDialog_CloseDelegate__EndInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void MissionNaviTransitionConfirmDialog_CloseDelegate__Invoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}