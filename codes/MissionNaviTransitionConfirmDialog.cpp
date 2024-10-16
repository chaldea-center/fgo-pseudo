void __fastcall MissionNaviTransitionConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct MissionNaviTransitionConfirmDialog_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct MissionNaviTransitionConfirmDialog_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4AB8F2C & 1) == 0 )
  {
    sub_1BAB41C(&MissionNaviTransitionConfirmDialog_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_8673/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, v4);
    sub_1BAB41C(&StringLiteral_8672/*"MISSION_NAVI_NAME_COMMON"*/, v5);
    sub_1BAB41C(&StringLiteral_8670/*"MISSION_NAVI_MAIN_QUEST"*/, v6);
    byte_4AB8F2C = 1;
  }
  MissionNaviTransitionConfirmDialog_TypeInfo->static_fields->MISSION_NAVI_NAME_COMMON = (struct System_String_o *)StringLiteral_8672/*"MISSION_NAVI_NAME_COMMON"*/;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)MissionNaviTransitionConfirmDialog_TypeInfo->static_fields,
    StringLiteral_8672/*"MISSION_NAVI_NAME_COMMON"*/,
    v2,
    v3);
  v7 = StringLiteral_8673/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  static_fields = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  static_fields->MISSION_NAVI_NOT_OPEN_BOARD = (struct System_String_o *)StringLiteral_8673/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->MISSION_NAVI_NOT_OPEN_BOARD, v7, v9, v10);
  v11 = StringLiteral_8670/*"MISSION_NAVI_MAIN_QUEST"*/;
  v12 = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  v12->MISSION_NAVI_MAIN_QUEST = (struct System_String_o *)StringLiteral_8670/*"MISSION_NAVI_MAIN_QUEST"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v12->MISSION_NAVI_MAIN_QUEST, v11, v13, v14);
}


void __fastcall MissionNaviTransitionConfirmDialog___ctor(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB8F2B & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB8F2B = 1;
  }
  *(_OWORD *)&this->fields.messageTopOffset = xmmword_BC2B90;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__Awake(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__CheckSerializeFieldAssertion(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNaviTransitionConfirmDialog__DeleteCallback(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *boardItemDrawList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB8F2A & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__,
      method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__, v3);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__get_Current__,
      v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__, v5);
    byte_4AB8F2A = 1;
  }
  memset(&v8, 0, sizeof(v8));
  boardItemDrawList = this->fields.boardItemDrawList;
  if ( boardItemDrawList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)boardItemDrawList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1BAB678(0LL, v7);
      MissionNaviTransitionBoardItemDraw__DeleteCallback((MissionNaviTransitionBoardItemDraw_o *)v8.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
  }
}


void __fastcall MissionNaviTransitionConfirmDialog__EndOpen(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__GetClosedMessageText(
        int32_t closedMessageId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB8F27 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ClosedMessageMaster___, method);
    sub_1BAB41C(&DataManager_TypeInfo, v3);
    sub_1BAB41C(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v4);
    sub_1BAB41C(&StringLiteral_1/*""*/, v5);
    byte_4AB8F27 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !closedMessageId )
    goto LABEL_10;
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    closedMessageId,
                                    (const MethodInfo_3163DE4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_10:
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_monitor;
  }
  if ( !entity )
LABEL_12:
    sub_1BAB678(Master_object, v7);
  p_monitor = (System_String_o **)&entity[1].monitor;
  return *p_monitor;
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o *monitor; // x20
  __int64 Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *PrioredName; // x0
  System_String_o *v25; // x0
  int32_t WarID_ByQuestID; // w21
  int64_t OpenedAt; // x21
  System_Object_array *v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x22
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v54; // x19
  __int64 v56; // x0
  int32_t Minute; // [xsp+Ch] [xbp-64h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-60h] BYREF
  int32_t Day; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t questReleaseValue; // [xsp+18h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *v62; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  System_DateTime_o v64; // 0:x0.8
  System_DateTime_o v65; // 0:x0.8
  System_DateTime_o v66; // 0:x0.8
  System_DateTime_o v67; // 0:x0.8

  if ( (byte_4AB8F28 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ClosedMessageMaster___, questEnt);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMaster_WarMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_1BAB41C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v9);
    sub_1BAB41C(&System_DateTime_TypeInfo, v10);
    sub_1BAB41C(&int_TypeInfo, v11);
    sub_1BAB41C(&long_TypeInfo, v12);
    sub_1BAB41C(&NetworkManager_TypeInfo, v13);
    sub_1BAB41C(&object___TypeInfo, v14);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BAB41C(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_1BAB41C(&StringLiteral_1/*""*/, v17);
    byte_4AB8F28 = 1;
  }
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  dateData = 0LL;
  v62 = 0LL;
  if ( questInfo && questInfo->fields.questReleaseClosedID >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
      if ( Instance )
      {
        monitor = (System_String_o *)StringLiteral_1/*""*/;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     questInfo->fields.questReleaseClosedID,
                     (const MethodInfo_3163DE4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Instance & 1) == 0 )
          goto LABEL_10;
        if ( entity )
        {
          monitor = (System_String_o *)entity[1].monitor;
LABEL_10:
          switch ( questInfo->fields.questReleaseType )
          {
            case 1:
              Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                  (QuestTree_o *)Instance,
                                  questInfo->fields.questReleaseTargetID,
                                  0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_WarMaster___);
              if ( !Instance )
                goto LABEL_47;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &v62,
                      WarID_ByQuestID,
                      (const MethodInfo_3163DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
                goto LABEL_40;
              Instance = (__int64)v62;
              if ( !v62 )
                goto LABEL_47;
              PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v62, 0LL);
LABEL_12:
              v25 = System_String__Format(monitor, PrioredName, 0LL);
              goto LABEL_39;
            case 6:
            case 7:
            case 9:
              questReleaseValue = questInfo->fields.questReleaseValue;
              PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue, v21, v22, v23);
              goto LABEL_12;
            case 0xC:
              if ( !questEnt )
                goto LABEL_47;
              OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              dateData = NetworkManager__getServerDateTime_38939020(OpenedAt, 0LL).fields._dateData;
              v28 = (System_Object_array *)sub_1BAB4C4(object___TypeInfo, 4LL);
              if ( !System_DateTime_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
              v64.fields._dateData = (uint64_t)&dateData;
              LODWORD(questReleaseValue) = System_DateTime__get_Month(v64, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue, v29, v30, v31);
              if ( !v28 )
                goto LABEL_47;
              v34 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1BAB558(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( !v28->max_length )
                goto LABEL_48;
              v28->m_Items[0] = v34;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v28->m_Items, (int32_t)v34, v32, v33);
              v65.fields._dateData = (uint64_t)&dateData;
              Day = System_DateTime__get_Day(v65, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day, v35, v36, v37);
              v40 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1BAB558(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v28->max_length <= 1 )
                goto LABEL_48;
              v28->m_Items[1] = v40;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v28->m_Items[1], (int32_t)v40, v38, v39);
              v66.fields._dateData = (uint64_t)&dateData;
              Hour = System_DateTime__get_Hour(v66, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v41, v42, v43);
              v46 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1BAB558(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v28->max_length <= 2 )
                goto LABEL_48;
              v28->m_Items[2] = v46;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v28->m_Items[2], (int32_t)v46, v44, v45);
              v67.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v67, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v47, v48, v49);
              v52 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1BAB558(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_49:
                  v56 = sub_1BAB69C(Instance);
                  sub_1BAB544(v56, 0LL);
                }
              }
              if ( v28->max_length <= 3 )
LABEL_48:
                sub_1BAB680(Instance, v20);
              v28->m_Items[3] = v52;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v28->m_Items[3], (int32_t)v52, v50, v51);
              v25 = System_String__Format_62062636(monitor, v28, 0LL);
LABEL_39:
              monitor = v25;
LABEL_40:
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
              if ( !questEnt || !Instance )
                goto LABEL_47;
              EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                         (QuestReleaseOverwriteMaster_o *)Instance,
                                         questEnt->fields.id,
                                         0LL,
                                         0LL);
              if ( EntityByQuestIdAndTime )
              {
                v54 = EntityByQuestIdAndTime;
                if ( !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL) )
                  monitor = v54->fields.overlayClosedMessage;
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
    sub_1BAB678(Instance, v20);
  }
  return monitor;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_string__string__o __fastcall MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(
        MissionNaviQuestEntity_o *naviQuestEntity,
        MapControl_QuestInfo_o *tempQuestInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviQuestEntity_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t closedMessageId; // w21
  MissionNaviTransitionConfirmDialog_c *v17; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  Il2CppObject *v19; // x20
  System_String_o *QuestClosedMessageText; // x0
  const MethodInfo_389F65C *v21; // x4
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  QuestEntity_o *Mine; // x0
  const MethodInfo *v27; // x2
  Il2CppObject *v28; // x2
  int32_t QuestType; // w19
  __int64 *v30; // x8
  System_String_o *v31; // x0
  struct System_String_o *v32; // x0 OVERLAPPED
  struct System_String_o *v33; // x1
  struct System_String_o *v34; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v35; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v37; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = naviQuestEntity;
  if ( (byte_4AB8F24 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, tempQuestInfo);
    sub_1BAB41C(&MissionNaviTransitionConfirmDialog_TypeInfo, v7);
    sub_1BAB41C(&Method_System_ValueTuple_string__string___ctor__, v8);
    sub_1BAB41C(&StringLiteral_43/*"\n"*/, v9);
    sub_1BAB41C(&StringLiteral_116/*" "*/, v10);
    sub_1BAB41C(&StringLiteral_8668/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/, v11);
    sub_1BAB41C(&StringLiteral_915/*"-"*/, v12);
    sub_1BAB41C(&StringLiteral_8676/*"MISSION_NAVI_QUEST_MESSAGE"*/, v13);
    sub_1BAB41C(&StringLiteral_1/*""*/, v14);
    naviQuestEntity = (MissionNaviQuestEntity_o *)sub_1BAB41C(&StringLiteral_8675/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/, v15);
    byte_4AB8F24 = 1;
  }
  challengeNaviName = 0LL;
  if ( !v6 )
    goto LABEL_36;
  if ( !isLocked )
  {
    naviQuestEntity = (MissionNaviQuestEntity_o *)MissionNaviQuestEntity__TryGetChallengeNaviName(
                                                    v6,
                                                    &challengeNaviName,
                                                    0LL);
    if ( ((unsigned __int8)naviQuestEntity & 1) != 0 )
    {
      v19 = (Il2CppObject *)challengeNaviName;
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
                                                      0LL);
      if ( !naviQuestEntity )
        goto LABEL_36;
      naviQuestEntity = (MissionNaviQuestEntity_o *)WarEntity__GetPrioredLongName((WarEntity_o *)naviQuestEntity, 0LL);
      if ( !naviQuestEntity )
        goto LABEL_36;
      v22 = (Il2CppObject *)System_String__Replace_62067756(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_116/*" "*/,
                              0LL);
      naviQuestEntity = (MissionNaviQuestEntity_o *)MapControl_QuestInfo__GetMine(tempQuestInfo, 0LL);
      if ( !naviQuestEntity )
        goto LABEL_36;
      naviQuestEntity = *(MissionNaviQuestEntity_o **)&naviQuestEntity->fields.priority;
      if ( !naviQuestEntity )
        goto LABEL_36;
      v23 = (Il2CppObject *)System_String__Replace_62067756(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_116/*" "*/,
                              0LL);
      if ( System_String__op_Equality((System_String_o *)v22, (System_String_o *)StringLiteral_915/*"-"*/, 0LL)
        || System_String__IsNullOrEmpty((System_String_o *)v22, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8675/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/, 0LL);
        v25 = System_String__Format(v24, v23, 0LL);
      }
      else
      {
        QuestType = MapControl_QuestInfo__GetQuestType(tempQuestInfo, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( QuestType == 2 )
          v30 = &StringLiteral_8668/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/;
        else
          v30 = &StringLiteral_8676/*"MISSION_NAVI_QUEST_MESSAGE"*/;
        v31 = LocalizationManager__Get((System_String_o *)*v30, 0LL);
        v25 = System_String__Format_62062500(v31, v22, v23, 0LL);
      }
      v19 = (Il2CppObject *)v25;
      challengeNaviName = v25;
    }
    v28 = (Il2CppObject *)StringLiteral_1/*""*/;
    goto LABEL_35;
  }
  closedMessageId = v6->fields.closedMessageId;
  v17 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
    v17 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v17->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  naviQuestEntity = (MissionNaviQuestEntity_o *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0LL);
  v19 = (Il2CppObject *)naviQuestEntity;
  if ( !closedMessageId )
  {
    if ( tempQuestInfo )
    {
      Mine = MapControl_QuestInfo__GetMine(tempQuestInfo, 0LL);
      QuestClosedMessageText = MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(tempQuestInfo, Mine, v27);
      goto LABEL_26;
    }
LABEL_36:
    sub_1BAB678(naviQuestEntity, tempQuestInfo);
  }
  QuestClosedMessageText = MissionNaviTransitionConfirmDialog__GetClosedMessageText(
                             closedMessageId,
                             (const MethodInfo *)tempQuestInfo);
LABEL_26:
  v28 = (Il2CppObject *)QuestClosedMessageText;
LABEL_35:
  v34 = 0LL;
  v35 = 0LL;
  v37.fields.Item1 = (Il2CppObject *)&v34;
  v37.fields.Item2 = v19;
  System_ValueTuple_object__object____ctor(
    v37,
    v28,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v21);
  v32 = v34;
  v33 = v35;
  result.fields.Item2 = v33;
  result.fields.Item1 = v32;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_string__string__o __fastcall MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MapControl_SpotInfo_o *spotInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviTransitionEntity_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t closedMessageId; // w19
  MissionNaviTransitionConfirmDialog_c *v13; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  System_String_o *v15; // x20
  const MethodInfo *v16; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_389F65C *v18; // x4
  SpotEntity_o *Mine; // x0
  Il2CppObject *v20; // x19
  MissionNaviTransitionConfirmDialog_c *v21; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v23; // x0
  struct System_String_o *v24; // x0 OVERLAPPED
  struct System_String_o *v25; // x1
  struct System_String_o *v26; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v27; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v29; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4AB8F26 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, spotInfo);
    sub_1BAB41C(&MissionNaviTransitionConfirmDialog_TypeInfo, v7);
    sub_1BAB41C(&Method_System_ValueTuple_string__string___ctor__, v8);
    sub_1BAB41C(&StringLiteral_43/*"\n"*/, v9);
    sub_1BAB41C(&StringLiteral_116/*" "*/, v10);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1BAB41C(&StringLiteral_1/*""*/, v11);
    byte_4AB8F26 = 1;
  }
  challengeNaviName = 0LL;
  if ( !v6 )
    goto LABEL_24;
  if ( !isLocked )
  {
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)MissionNaviTransitionEntity__TryGetChallengeNaviName(
                                                                     v6,
                                                                     &challengeNaviName,
                                                                     0LL);
    if ( ((unsigned __int8)missionNaviTransitionEntity & 1) != 0 )
    {
      v15 = challengeNaviName;
LABEL_22:
      ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( spotInfo )
    {
      Mine = MapControl_SpotInfo__GetMine(spotInfo, 0LL);
      if ( !Mine )
      {
        v20 = 0LL;
        goto LABEL_17;
      }
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)Mine->fields.name;
      if ( missionNaviTransitionEntity )
      {
        v20 = (Il2CppObject *)System_String__Replace_62067756(
                                (System_String_o *)missionNaviTransitionEntity,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                (System_String_o *)StringLiteral_116/*" "*/,
                                0LL);
LABEL_17:
        v21 = MissionNaviTransitionConfirmDialog_TypeInfo;
        if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
          v21 = MissionNaviTransitionConfirmDialog_TypeInfo;
        }
        MISSION_NAVI_NAME_COMMON = v21->static_fields->MISSION_NAVI_NAME_COMMON;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0LL);
        v15 = System_String__Format(v23, v20, 0LL);
        challengeNaviName = v15;
        goto LABEL_22;
      }
    }
LABEL_24:
    sub_1BAB678(missionNaviTransitionEntity, spotInfo);
  }
  closedMessageId = v6->fields.closedMessageId;
  v13 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
    v13 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v13->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0LL);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v16);
LABEL_23:
  v26 = 0LL;
  v27 = 0LL;
  v29.fields.Item1 = (Il2CppObject *)&v26;
  v29.fields.Item2 = (Il2CppObject *)v15;
  System_ValueTuple_object__object____ctor(
    v29,
    ClosedMessageText,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v18);
  v24 = v26;
  v25 = v27;
  result.fields.Item2 = v25;
  result.fields.Item1 = v24;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_string__string__o __fastcall MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MapControl_WarInfo_o *warInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviTransitionEntity_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t closedMessageId; // w20
  MissionNaviTransitionConfirmDialog_c *v14; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x19
  Il2CppObject *v16; // x19
  const MethodInfo *v17; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_389F65C *v19; // x4
  MissionNaviTransitionConfirmDialog_c *v20; // x0
  System_String_o *MISSION_NAVI_MAIN_QUEST; // x19
  System_String_o *v22; // x0
  WarEntity_o *Mine; // x0
  Il2CppObject *v24; // x19
  MissionNaviTransitionConfirmDialog_c *v25; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v27; // x0
  struct System_String_o *v28; // x0 OVERLAPPED
  struct System_String_o *v29; // x1
  struct System_String_o *v30; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v31; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v33; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4AB8F25 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, warInfo);
    sub_1BAB41C(&MissionNaviTransitionConfirmDialog_TypeInfo, v7);
    sub_1BAB41C(&Method_System_ValueTuple_string__string___ctor__, v8);
    sub_1BAB41C(&StringLiteral_43/*"\n"*/, v9);
    sub_1BAB41C(&StringLiteral_116/*" "*/, v10);
    sub_1BAB41C(&StringLiteral_8506/*"MAIN_SCENARIO"*/, v11);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1BAB41C(&StringLiteral_1/*""*/, v12);
    byte_4AB8F25 = 1;
  }
  challengeNaviName = 0LL;
  if ( !v6 )
    goto LABEL_31;
  if ( !isLocked )
  {
    if ( MissionNaviTransitionEntity__TryGetChallengeNaviName(v6, &challengeNaviName, 0LL) )
    {
      v16 = (Il2CppObject *)challengeNaviName;
LABEL_29:
      ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
      goto LABEL_30;
    }
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)System_String__op_Equality(
                                                                     v6->fields.transitionParam,
                                                                     (System_String_o *)StringLiteral_8506/*"MAIN_SCENARIO"*/,
                                                                     0LL);
    if ( ((unsigned __int8)missionNaviTransitionEntity & 1) != 0 )
    {
      v20 = MissionNaviTransitionConfirmDialog_TypeInfo;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
        v20 = MissionNaviTransitionConfirmDialog_TypeInfo;
      }
      MISSION_NAVI_MAIN_QUEST = v20->static_fields->MISSION_NAVI_MAIN_QUEST;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get(MISSION_NAVI_MAIN_QUEST, 0LL);
LABEL_28:
      v16 = (Il2CppObject *)v22;
      challengeNaviName = v22;
      goto LABEL_29;
    }
    if ( warInfo )
    {
      Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
      if ( !Mine )
      {
        v24 = 0LL;
        goto LABEL_23;
      }
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)WarEntity__GetPrioredLongName(Mine, 0LL);
      if ( missionNaviTransitionEntity )
      {
        v24 = (Il2CppObject *)System_String__Replace_62067756(
                                (System_String_o *)missionNaviTransitionEntity,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                (System_String_o *)StringLiteral_116/*" "*/,
                                0LL);
LABEL_23:
        v25 = MissionNaviTransitionConfirmDialog_TypeInfo;
        if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
          v25 = MissionNaviTransitionConfirmDialog_TypeInfo;
        }
        MISSION_NAVI_NAME_COMMON = v25->static_fields->MISSION_NAVI_NAME_COMMON;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0LL);
        v22 = System_String__Format(v27, v24, 0LL);
        goto LABEL_28;
      }
    }
LABEL_31:
    sub_1BAB678(missionNaviTransitionEntity, warInfo);
  }
  closedMessageId = v6->fields.closedMessageId;
  v14 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
    v14 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v14->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = (Il2CppObject *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0LL);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v17);
LABEL_30:
  v30 = 0LL;
  v31 = 0LL;
  v33.fields.Item1 = (Il2CppObject *)&v30;
  v33.fields.Item2 = v16;
  System_ValueTuple_object__object____ctor(
    v33,
    ClosedMessageText,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v19);
  v28 = v30;
  v29 = v31;
  result.fields.Item2 = v29;
  result.fields.Item1 = v28;
  return result;
}


void __fastcall MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0

  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  if ( !limitedMissionItemDraw )
    sub_1BAB678(0LL, method);
  MasterMissionListViewItemDraw__OnChangeAlphaAnim(
    limitedMissionItemDraw,
    this->fields.missionListViewItem,
    1,
    this->fields.missionListViewManager,
    0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__OnClickClose(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4AB8F22 & 1) == 0 )
  {
    sub_1BAB41C(&Method_MissionNaviTransitionConfirmDialog_OnClickClose__, method);
    byte_4AB8F22 = 1;
  }
  if ( this->fields.state == 2 )
  {
    MissionNaviTransitionConfirmDialog__DeleteCallback(this, method);
    this->fields.state = 3;
    v3 = Method_MissionNaviTransitionConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1BAB678(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall MissionNaviTransitionConfirmDialog__Open(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  UILabel_o *titleLabel; // x25
  System_String_o *limitedMissionItemDraw; // x0
  __int64 v35; // x1
  UILabel_o *choiceMessageLabel; // x25
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppClass *v39; // x8
  __int64 methodPtr_low; // x9
  MissionListViewItem_o *v41; // x10
  int32_t v42; // w1
  struct MasterMissionListViewItem_o **p_missionListViewItem; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppClass *v46; // x8
  __int64 v47; // x9
  MissionListViewManager_o *v48; // x10
  int32_t v49; // w1
  struct MasterMissionListViewManager_o **p_missionListViewManager; // x24
  const MethodInfo *v51; // x2
  UnityEngine_Object_o *v52; // x22
  float messageHeight; // s8
  float messageTopOffset; // s9
  UnityEngine_GameObject_o *v55; // x23
  UnityEngine_Transform_o *v56; // x22
  float v57; // s8
  UnityEngine_Transform_o *v58; // x24
  UnityEngine_Transform_o *v59; // x24
  float v60; // s10
  float messageBottomOffset; // s11
  float boardHeight; // s9
  System_Collections_Generic_List_object__o *v63; // x25
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o **p_boardItemDrawList; // x24
  int32_t v65; // w2
  int32_t v66; // w3
  float v67; // s9
  float v68; // s8
  __int64 v69; // x1
  UnityEngine_GameObject_o *challengeGrid; // x0
  Il2CppObject *current; // x26
  Il2CppObject *missionNaviTransitionBoardItemDrawPrefab; // x21
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v74; // x0
  __int64 v75; // x1
  UnityEngine_GameObject_o *v76; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v78; // x1
  Il2CppObject *v79; // x21
  UnityEngine_Transform_o *v80; // x0
  __int64 v81; // x1
  float v82; // s8
  __int64 v83; // x0
  __int64 v84; // x1
  UnityEngine_Transform_o *v85; // x26
  __int64 v86; // x0
  __int64 v87; // x1
  UnityEngine_Transform_o *v88; // x25
  __int64 v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  System_Collections_Generic_List_object__o *v92; // x0
  struct System_Object_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  Il2CppClass **v96; // x8
  UILabel_o *closeBtnLabel; // x21
  UILabel_o *warningMessageLabel; // x21
  System_Action_o *v99; // x20
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB8F21 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, missionItem);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__get_Current__, v17);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__, v20);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__, v21);
    sub_1BAB41C(&System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo, v22);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v23);
    sub_1BAB41C(&MasterMissionListViewItem_TypeInfo, v24);
    sub_1BAB41C(&MasterMissionListViewManager_TypeInfo, v25);
    sub_1BAB41C(&Method_MissionNaviTransitionConfirmDialog_EndOpen__, v26);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject____76537840, v27);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v28);
    sub_1BAB41C(&StringLiteral_8660/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, v29);
    sub_1BAB41C(&StringLiteral_8662/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, v30);
    sub_1BAB41C(&StringLiteral_8666/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, v31);
    sub_1BAB41C(&StringLiteral_8665/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, v32);
    byte_4AB8F21 = 1;
  }
  memset(&v101, 0, sizeof(v101));
  this->fields.closeFunc = closeDelegate;
  this->fields.isSetUpMissionListView = 0;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeDelegate,
    (int32_t)listViewManager,
    missionBoardType);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8665/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, limitedMissionItemDraw, 0LL);
  choiceMessageLabel = this->fields.choiceMessageLabel;
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8660/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, 0LL);
  if ( !choiceMessageLabel )
    goto LABEL_96;
  UILabel__set_text(choiceMessageLabel, limitedMissionItemDraw, 0LL);
  if ( missionBoardType == 1 )
  {
    if ( missionItem )
    {
      v39 = (Il2CppClass *)MasterMissionListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MasterMissionListViewItem_c *)missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
          v41 = missionItem;
        else
          v41 = 0LL;
      }
      else
      {
        v41 = 0LL;
      }
      this->fields.missionListViewItem = (struct MasterMissionListViewItem_o *)v41;
      p_missionListViewItem = &this->fields.missionListViewItem;
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == v39 )
          v42 = (int)missionItem;
        else
          v42 = 0;
      }
      else
      {
        v42 = 0;
      }
    }
    else
    {
      v42 = 0;
      this->fields.missionListViewItem = 0LL;
      p_missionListViewItem = &this->fields.missionListViewItem;
    }
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_missionListViewItem, v42, v37, v38);
    if ( listViewManager )
    {
      v46 = (Il2CppClass *)MasterMissionListViewManager_TypeInfo;
      v47 = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v47 )
      {
        if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v47 - 1] == MasterMissionListViewManager_TypeInfo )
          v48 = listViewManager;
        else
          v48 = 0LL;
      }
      else
      {
        v48 = 0LL;
      }
      this->fields.missionListViewManager = (struct MasterMissionListViewManager_o *)v48;
      p_missionListViewManager = &this->fields.missionListViewManager;
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v47 )
      {
        if ( listViewManager->klass->_2.typeHierarchy[v47 - 1] == v46 )
          v49 = (int)listViewManager;
        else
          v49 = 0;
      }
      else
      {
        v49 = 0;
      }
    }
    else
    {
      v49 = 0;
      this->fields.missionListViewManager = 0LL;
      p_missionListViewManager = &this->fields.missionListViewManager;
    }
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_missionListViewManager, v49, v44, v45);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                  0LL);
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 1, 0LL);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    ((void (__fastcall *)(System_String_o *, MissionListViewItem_o *, __int64, MissionListViewManager_o *, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._4_CompareTo.method)(
      limitedMissionItemDraw,
      missionItem,
      1LL,
      listViewManager,
      limitedMissionItemDraw->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    MissionListViewItemDraw__SetChallengeButtonActive((MissionListViewItemDraw_o *)limitedMissionItemDraw, 0, v51);
    if ( missionItem )
    {
      v52 = (UnityEngine_Object_o *)*p_missionListViewManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
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
                                                0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v55 = (UnityEngine_GameObject_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !this->fields.challengeGrid )
    goto LABEL_96;
  v56 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.challengeGrid, 0LL);
  if ( !v56 )
    goto LABEL_96;
  UnityEngine_Transform__set_parent(v56, (UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v55, 0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v57 = 0.0 - (float)((float)(messageHeight * 0.5) + messageTopOffset);
  v102.fields.x = 0.0;
  v102.fields.z = 0.0;
  v102.fields.y = v57;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)limitedMissionItemDraw, v102, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v55, 0LL);
  v58 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4AB0697 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1BAB41C(&UnityEngine_Quaternion_TypeInfo, v35);
    byte_4AB0697 = 1;
  }
  if ( !v58 )
    goto LABEL_96;
  UnityEngine_Transform__set_localRotation(v58, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v55, 0LL);
  v59 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4AB0696 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v35);
    byte_4AB0696 = 1;
  }
  if ( !v59 )
    goto LABEL_96;
  UnityEngine_Transform__set_localScale(v59, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  messageBottomOffset = this->fields.messageBottomOffset;
  v60 = this->fields.messageHeight;
  boardHeight = this->fields.boardHeight;
  v63 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
  this->fields.boardItemDrawList = (struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *)v63;
  p_boardItemDrawList = &this->fields.boardItemDrawList;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.boardItemDrawList, (int32_t)v63, v65, v66);
  if ( !boardItemList )
    goto LABEL_96;
  v67 = boardHeight * 0.5;
  v68 = v57 - (float)((float)(v60 * 0.5) + messageBottomOffset);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v100,
    (System_Collections_Generic_List_object__o *)boardItemList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
  v101 = v100;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v101,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__) )
  {
    challengeGrid = this->fields.challengeGrid;
    if ( !challengeGrid )
      sub_1BAB678(0LL, v69);
    current = v101.fields._current;
    missionNaviTransitionBoardItemDrawPrefab = (Il2CppObject *)this->fields.missionNaviTransitionBoardItemDrawPrefab;
    transform = UnityEngine_GameObject__get_transform(challengeGrid, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v74 = UnityEngine_Object__Instantiate_object__49579268(
            missionNaviTransitionBoardItemDrawPrefab,
            transform,
            (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
    v76 = (UnityEngine_GameObject_o *)v74;
    if ( !v74 )
      sub_1BAB678(0LL, v75);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v74,
                                   (const MethodInfo_2F13BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    v79 = ComponentInChildren_object;
    if ( !ComponentInChildren_object )
      sub_1BAB678(0LL, v78);
    ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
      ComponentInChildren_object,
      current,
      0LL,
      ComponentInChildren_object->klass->vtable[5].methodPtr);
    v80 = UnityEngine_GameObject__get_transform(v76, 0LL);
    if ( !v80 )
      sub_1BAB678(0LL, v81);
    v82 = v68 - v67;
    v103.fields.x = 0.0;
    v103.fields.z = 0.0;
    v103.fields.y = v82;
    UnityEngine_Transform__set_localPosition(v80, v103, 0LL);
    v83 = (__int64)UnityEngine_GameObject__get_transform(v76, 0LL);
    v85 = (UnityEngine_Transform_o *)v83;
    if ( !byte_4AB0697 )
    {
      v83 = sub_1BAB41C(&UnityEngine_Quaternion_TypeInfo, v84);
      byte_4AB0697 = 1;
    }
    if ( !v85 )
      sub_1BAB678(v83, v84);
    UnityEngine_Transform__set_localRotation(
      v85,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v86 = (__int64)UnityEngine_GameObject__get_transform(v76, 0LL);
    v88 = (UnityEngine_Transform_o *)v86;
    if ( !byte_4AB0696 )
    {
      v86 = sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v87);
      byte_4AB0696 = 1;
    }
    if ( !v88 )
      sub_1BAB678(v86, v87);
    UnityEngine_Transform__set_localScale(v88, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v92 = (System_Collections_Generic_List_object__o *)*p_boardItemDrawList;
    if ( !*p_boardItemDrawList )
      sub_1BAB678(0LL, v89);
    items = v92->fields._items;
    v94 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__;
    ++v92->fields._version;
    if ( !items )
      sub_1BAB678(v92, v89);
    size = v92->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v92,
        v79,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
    }
    else
    {
      v96 = &items->obj.klass + size;
      v92->fields._size = size + 1;
      v96[4] = (Il2CppClass *)v79;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v96 + 4), (int32_t)v79, v90, v91);
    }
    v68 = v82 - v67;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v101,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  UIScrollView__ResetPosition((UIScrollView_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  ((void (__fastcall *)(System_String_o *, _QWORD, Il2CppMethodPointer, float, float))limitedMissionItemDraw->klass->vtable._9_GetTypeCode.method)(
    limitedMissionItemDraw,
    0LL,
    limitedMissionItemDraw->klass->vtable._10_System_IConvertible_ToBoolean.methodPtr,
    0.0,
    0.0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  ((void (__fastcall *)(System_String_o *, __int64, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._8_Equals.method)(
    limitedMissionItemDraw,
    1LL,
    limitedMissionItemDraw->klass->vtable._9_GetTypeCode.methodPtr);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  UIScrollView__UpdatePosition((UIScrollView_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeGrid;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL) <= 3 )
  {
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)limitedMissionItemDraw, 0, 0LL);
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollBar;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 0, 0LL);
  }
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8662/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel
    || (UILabel__set_text(closeBtnLabel, limitedMissionItemDraw, 0LL),
        warningMessageLabel = this->fields.warningMessageLabel,
        limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8666/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, 0LL),
        !warningMessageLabel) )
  {
LABEL_96:
    sub_1BAB678(limitedMissionItemDraw, v35);
  }
  UILabel__set_text(warningMessageLabel, limitedMissionItemDraw, 0LL);
  ActionExtensions__Call(openCallback, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v99 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v99, (Il2CppObject *)this, Method_MissionNaviTransitionConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v99, 0, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__RedispResTime(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x19
  struct MasterMissionListViewItem_o *missionListViewItem; // x20
  int64_t Time; // x0
  __int64 v6; // x1

  if ( (byte_4AB8F29 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    byte_4AB8F29 = 1;
  }
  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  missionListViewItem = this->fields.missionListViewItem;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !limitedMissionItemDraw )
    sub_1BAB678(Time, v6);
  ((void (__fastcall *)(struct MasterMissionListViewItemDraw_o *, struct MasterMissionListViewItem_o *, int64_t, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._9_UpdateDispResTime.method)(
    limitedMissionItemDraw,
    missionListViewItem,
    Time,
    limitedMissionItemDraw->klass->vtable._10_SetInput.methodPtr);
}


void __fastcall MissionNaviTransitionConfirmDialog__RewardUpdateAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewManager_o *missionListViewManager; // x8

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1BAB678(this, method);
  if ( missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField )
  {
    missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField = 0;
    MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(this, method);
  }
}


void __fastcall MissionNaviTransitionConfirmDialog__SetState(
        MissionNaviTransitionConfirmDialog_o *this,
        int32_t currentState,
        const MethodInfo *method)
{
  this->fields.state = currentState;
}


void __fastcall MissionNaviTransitionConfirmDialog__Update(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0
  const MethodInfo *v5; // x1

  if ( this->fields.isSetUpMissionListView )
  {
    MissionNaviTransitionConfirmDialog__RedispResTime(this, method);
    limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      sub_1BAB678(0LL, v3);
    MasterMissionListViewItemDraw__UpdateItem(
      limitedMissionItemDraw,
      this->fields.missionListViewItem,
      1,
      this->fields.missionListViewManager,
      0LL);
    MissionNaviTransitionConfirmDialog__RewardUpdateAnim(this, v5);
  }
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__get_closeBtnPath(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB8F23 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_15681/*"Window/Objects/CancelButton"*/, method);
    byte_4AB8F23 = 1;
  }
  return (System_String_o *)StringLiteral_15681/*"Window/Objects/CancelButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate___ctor(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19F2A38;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19F29F8;
}


System_IAsyncResult_o *__fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__BeginInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, &v5, callback, object);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__EndInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__Invoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}