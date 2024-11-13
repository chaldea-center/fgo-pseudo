void __fastcall MissionNaviTransitionConfirmDialog___cctor(const MethodInfo *method)
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
  int64_t v14; // x1
  struct MissionNaviTransitionConfirmDialog_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct MissionNaviTransitionConfirmDialog_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B19C98 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionNaviTransitionConfirmDialog_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_8795/*"MISSION_NAVI_NOT_OPEN_BOARD"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_8794/*"MISSION_NAVI_NAME_COMMON"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_8792/*"MISSION_NAVI_MAIN_QUEST"*/, v12, v13);
    byte_4B19C98 = 1;
  }
  MissionNaviTransitionConfirmDialog_TypeInfo->static_fields->MISSION_NAVI_NAME_COMMON = (struct System_String_o *)StringLiteral_8794/*"MISSION_NAVI_NAME_COMMON"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MissionNaviTransitionConfirmDialog_TypeInfo->static_fields,
    StringLiteral_8794/*"MISSION_NAVI_NAME_COMMON"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_8795/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  static_fields = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  static_fields->MISSION_NAVI_NOT_OPEN_BOARD = (struct System_String_o *)StringLiteral_8795/*"MISSION_NAVI_NOT_OPEN_BOARD"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->MISSION_NAVI_NOT_OPEN_BOARD,
    v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = StringLiteral_8792/*"MISSION_NAVI_MAIN_QUEST"*/;
  v23 = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  v23->MISSION_NAVI_MAIN_QUEST = (struct System_String_o *)StringLiteral_8792/*"MISSION_NAVI_MAIN_QUEST"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->MISSION_NAVI_MAIN_QUEST, v22, v24, v25, v26, v27, v28, v29);
}


void __fastcall MissionNaviTransitionConfirmDialog___ctor(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19C97 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19C97 = 1;
  }
  *(_OWORD *)&this->fields.messageTopOffset = xmmword_BD2250;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *boardItemDrawList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19C96 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__, v8, v9);
    byte_4B19C96 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  boardItemDrawList = this->fields.boardItemDrawList;
  if ( boardItemDrawList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)boardItemDrawList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_1BCAA3C(0LL, v11);
      MissionNaviTransitionBoardItemDraw__DeleteCallback(
        (MissionNaviTransitionBoardItemDraw_o *)v12.fields._current,
        v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19C93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClosedMessageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B19C93 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !closedMessageId )
    goto LABEL_10;
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    closedMessageId,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_10:
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_monitor;
  }
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Master_object, v11);
  p_monitor = (System_String_o **)&entity[1].monitor;
  return *p_monitor;
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_String_o *monitor; // x20
  __int64 Instance; // x0
  __int64 v33; // x1
  Il2CppObject *PrioredName; // x0
  System_String_o *v35; // x0
  __int64 v36; // x1
  int32_t WarID_ByQuestID; // w21
  __int64 v38; // x1
  int64_t OpenedAt; // x21
  __int64 v40; // x1
  System_Object_array *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x22
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v71; // x19
  __int64 v73; // x0
  int32_t Minute; // [xsp+Ch] [xbp-64h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-60h] BYREF
  int32_t Day; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t questReleaseValue; // [xsp+18h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *v79; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  System_DateTime_o v81; // 0:x0.8
  System_DateTime_o v82; // 0:x0.8
  System_DateTime_o v83; // 0:x0.8
  System_DateTime_o v84; // 0:x0.8

  if ( (byte_4B19C94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ClosedMessageMaster___, questEnt, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&long_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&object___TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v27, v28);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v29, v30);
    byte_4B19C94 = 1;
  }
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  dateData = 0LL;
  v79 = 0LL;
  if ( questInfo && questInfo->fields.questReleaseClosedID >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
      if ( Instance )
      {
        monitor = (System_String_o *)StringLiteral_1/*""*/;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     questInfo->fields.questReleaseClosedID,
                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Instance & 1) == 0 )
          goto LABEL_10;
        if ( entity )
        {
          monitor = (System_String_o *)entity[1].monitor;
LABEL_10:
          switch ( questInfo->fields.questReleaseType )
          {
            case 1:
              Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                  (QuestTree_o *)Instance,
                                  questInfo->fields.questReleaseTargetID,
                                  0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
              Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
              if ( !Instance )
                goto LABEL_47;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &v79,
                      WarID_ByQuestID,
                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
                goto LABEL_40;
              Instance = (__int64)v79;
              if ( !v79 )
                goto LABEL_47;
              PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v79, 0LL);
LABEL_12:
              v35 = System_String__Format(monitor, PrioredName, 0LL);
              goto LABEL_39;
            case 6:
            case 7:
            case 9:
              questReleaseValue = questInfo->fields.questReleaseValue;
              PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue);
              goto LABEL_12;
            case 0xC:
              if ( !questEnt )
                goto LABEL_47;
              OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38);
              dateData = NetworkManager__getServerDateTime_39270492(OpenedAt, 0LL).fields._dateData;
              v41 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 4LL);
              if ( !System_DateTime_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v40);
              v81.fields._dateData = (uint64_t)&dateData;
              LODWORD(questReleaseValue) = System_DateTime__get_Month(v81, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue);
              if ( !v41 )
                goto LABEL_47;
              v48 = Instance;
              if ( Instance )
              {
                Instance = sub_1BCA91C(Instance, v41->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( !v41->max_length )
                goto LABEL_48;
              v41->m_Items[0] = (Il2CppObject *)v48;
              sub_1BCA784((PartyOrganizationUtility_o *)v41->m_Items, v48, v42, v43, v44, v45, v46, v47);
              v82.fields._dateData = (uint64_t)&dateData;
              Day = System_DateTime__get_Day(v82, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day);
              v55 = Instance;
              if ( Instance )
              {
                Instance = sub_1BCA91C(Instance, v41->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v41->max_length <= 1 )
                goto LABEL_48;
              v41->m_Items[1] = (Il2CppObject *)v55;
              sub_1BCA784((PartyOrganizationUtility_o *)&v41->m_Items[1], v55, v49, v50, v51, v52, v53, v54);
              v83.fields._dateData = (uint64_t)&dateData;
              Hour = System_DateTime__get_Hour(v83, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
              v62 = Instance;
              if ( Instance )
              {
                Instance = sub_1BCA91C(Instance, v41->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v41->max_length <= 2 )
                goto LABEL_48;
              v41->m_Items[2] = (Il2CppObject *)v62;
              sub_1BCA784((PartyOrganizationUtility_o *)&v41->m_Items[2], v62, v56, v57, v58, v59, v60, v61);
              v84.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v84, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
              v69 = Instance;
              if ( Instance )
              {
                Instance = sub_1BCA91C(Instance, v41->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_49:
                  v73 = sub_1BCAA60(Instance);
                  sub_1BCA908(v73, 0LL);
                }
              }
              if ( v41->max_length <= 3 )
LABEL_48:
                sub_1BCAA44(Instance, v33);
              v41->m_Items[3] = (Il2CppObject *)v69;
              sub_1BCA784((PartyOrganizationUtility_o *)&v41->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
              v35 = System_String__Format_62415728(monitor, v41, 0LL);
LABEL_39:
              monitor = v35;
LABEL_40:
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
              if ( !questEnt || !Instance )
                goto LABEL_47;
              EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                         (QuestReleaseOverwriteMaster_o *)Instance,
                                         questEnt->fields.id,
                                         0LL,
                                         0LL);
              if ( EntityByQuestIdAndTime )
              {
                v71 = EntityByQuestIdAndTime;
                if ( !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL) )
                  monitor = v71->fields.overlayClosedMessage;
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
    sub_1BCAA3C(Instance, v33);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t closedMessageId; // w21
  MissionNaviTransitionConfirmDialog_c *v26; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  Il2CppObject *v28; // x20
  System_String_o *QuestClosedMessageText; // x0
  const MethodInfo_38F6AA0 *v30; // x4
  Il2CppObject *v31; // x20
  Il2CppObject *v32; // x21
  __int64 v33; // x1
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  QuestEntity_o *Mine; // x0
  const MethodInfo *v37; // x2
  Il2CppObject *v38; // x2
  __int64 v39; // x1
  int32_t QuestType; // w19
  __int64 *v41; // x8
  System_String_o *v42; // x0
  struct System_String_o *v43; // x0 OVERLAPPED
  struct System_String_o *v44; // x1
  struct System_String_o *v45; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v46; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v48; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = naviQuestEntity;
  if ( (byte_4B19C90 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, tempQuestInfo, isLocked);
    sub_1BCA7E0(&MissionNaviTransitionConfirmDialog_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_ValueTuple_string__string___ctor__, v9, v10);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_8790/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_8798/*"MISSION_NAVI_QUEST_MESSAGE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    naviQuestEntity = (MissionNaviQuestEntity_o *)sub_1BCA7E0(&StringLiteral_8797/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/, v23, v24);
    byte_4B19C90 = 1;
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
      v28 = (Il2CppObject *)challengeNaviName;
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
      v31 = (Il2CppObject *)System_String__Replace_62420848(
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
      v32 = (Il2CppObject *)System_String__Replace_62420848(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_116/*" "*/,
                              0LL);
      if ( System_String__op_Equality((System_String_o *)v31, (System_String_o *)StringLiteral_915/*"-"*/, 0LL)
        || System_String__IsNullOrEmpty((System_String_o *)v31, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8797/*"MISSION_NAVI_ONLY_QUEST_MESSAGE"*/, 0LL);
        v35 = System_String__Format(v34, v32, 0LL);
      }
      else
      {
        QuestType = MapControl_QuestInfo__GetQuestType(tempQuestInfo, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
        if ( QuestType == 2 )
          v41 = &StringLiteral_8790/*"MISSION_NAVI_FREE_QUEST_MESSAGE"*/;
        else
          v41 = &StringLiteral_8798/*"MISSION_NAVI_QUEST_MESSAGE"*/;
        v42 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
        v35 = System_String__Format_62415592(v42, v31, v32, 0LL);
      }
      v28 = (Il2CppObject *)v35;
      challengeNaviName = v35;
    }
    v38 = (Il2CppObject *)StringLiteral_1/*""*/;
    goto LABEL_35;
  }
  closedMessageId = v6->fields.closedMessageId;
  v26 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, tempQuestInfo);
    v26 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v26->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, tempQuestInfo);
  naviQuestEntity = (MissionNaviQuestEntity_o *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0LL);
  v28 = (Il2CppObject *)naviQuestEntity;
  if ( !closedMessageId )
  {
    if ( tempQuestInfo )
    {
      Mine = MapControl_QuestInfo__GetMine(tempQuestInfo, 0LL);
      QuestClosedMessageText = MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(tempQuestInfo, Mine, v37);
      goto LABEL_26;
    }
LABEL_36:
    sub_1BCAA3C(naviQuestEntity, tempQuestInfo);
  }
  QuestClosedMessageText = MissionNaviTransitionConfirmDialog__GetClosedMessageText(
                             closedMessageId,
                             (const MethodInfo *)tempQuestInfo);
LABEL_26:
  v38 = (Il2CppObject *)QuestClosedMessageText;
LABEL_35:
  v45 = 0LL;
  v46 = 0LL;
  v48.fields.Item1 = (Il2CppObject *)&v45;
  v48.fields.Item2 = v28;
  System_ValueTuple_object__object____ctor(
    v48,
    v38,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v30);
  v43 = v45;
  v44 = v46;
  result.fields.Item2 = v44;
  result.fields.Item1 = v43;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t closedMessageId; // w19
  MissionNaviTransitionConfirmDialog_c *v18; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  System_String_o *v20; // x20
  const MethodInfo *v21; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_38F6AA0 *v23; // x4
  SpotEntity_o *Mine; // x0
  Il2CppObject *v25; // x19
  MissionNaviTransitionConfirmDialog_c *v26; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v28; // x0
  struct System_String_o *v29; // x0 OVERLAPPED
  struct System_String_o *v30; // x1
  struct System_String_o *v31; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v32; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v34; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4B19C92 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, spotInfo, isLocked);
    sub_1BCA7E0(&MissionNaviTransitionConfirmDialog_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_ValueTuple_string__string___ctor__, v9, v10);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v13, v14);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B19C92 = 1;
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
      v20 = challengeNaviName;
LABEL_22:
      ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( spotInfo )
    {
      Mine = MapControl_SpotInfo__GetMine(spotInfo, 0LL);
      if ( !Mine )
      {
        v25 = 0LL;
        goto LABEL_17;
      }
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)Mine->fields.name;
      if ( missionNaviTransitionEntity )
      {
        v25 = (Il2CppObject *)System_String__Replace_62420848(
                                (System_String_o *)missionNaviTransitionEntity,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                (System_String_o *)StringLiteral_116/*" "*/,
                                0LL);
LABEL_17:
        v26 = MissionNaviTransitionConfirmDialog_TypeInfo;
        if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, spotInfo);
          v26 = MissionNaviTransitionConfirmDialog_TypeInfo;
        }
        MISSION_NAVI_NAME_COMMON = v26->static_fields->MISSION_NAVI_NAME_COMMON;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, spotInfo);
        v28 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0LL);
        v20 = System_String__Format(v28, v25, 0LL);
        challengeNaviName = v20;
        goto LABEL_22;
      }
    }
LABEL_24:
    sub_1BCAA3C(missionNaviTransitionEntity, spotInfo);
  }
  closedMessageId = v6->fields.closedMessageId;
  v18 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, spotInfo);
    v18 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v18->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, spotInfo);
  v20 = LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0LL);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v21);
LABEL_23:
  v31 = 0LL;
  v32 = 0LL;
  v34.fields.Item1 = (Il2CppObject *)&v31;
  v34.fields.Item2 = (Il2CppObject *)v20;
  System_ValueTuple_object__object____ctor(
    v34,
    ClosedMessageText,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v23);
  v29 = v31;
  v30 = v32;
  result.fields.Item2 = v30;
  result.fields.Item1 = v29;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t closedMessageId; // w20
  MissionNaviTransitionConfirmDialog_c *v20; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x19
  Il2CppObject *v22; // x19
  const MethodInfo *v23; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_38F6AA0 *v25; // x4
  MissionNaviTransitionConfirmDialog_c *v26; // x0
  System_String_o *MISSION_NAVI_MAIN_QUEST; // x19
  System_String_o *v28; // x0
  WarEntity_o *Mine; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x19
  MissionNaviTransitionConfirmDialog_c *v32; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v34; // x0
  struct System_String_o *v35; // x0 OVERLAPPED
  struct System_String_o *v36; // x1
  struct System_String_o *v37; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v38; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v40; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4B19C91 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, warInfo, isLocked);
    sub_1BCA7E0(&MissionNaviTransitionConfirmDialog_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_ValueTuple_string__string___ctor__, v9, v10);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_8628/*"MAIN_SCENARIO"*/, v15, v16);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B19C91 = 1;
  }
  challengeNaviName = 0LL;
  if ( !v6 )
    goto LABEL_31;
  if ( !isLocked )
  {
    if ( MissionNaviTransitionEntity__TryGetChallengeNaviName(v6, &challengeNaviName, 0LL) )
    {
      v22 = (Il2CppObject *)challengeNaviName;
LABEL_29:
      ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
      goto LABEL_30;
    }
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)System_String__op_Equality(
                                                                     v6->fields.transitionParam,
                                                                     (System_String_o *)StringLiteral_8628/*"MAIN_SCENARIO"*/,
                                                                     0LL);
    if ( ((unsigned __int8)missionNaviTransitionEntity & 1) != 0 )
    {
      v26 = MissionNaviTransitionConfirmDialog_TypeInfo;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, warInfo);
        v26 = MissionNaviTransitionConfirmDialog_TypeInfo;
      }
      MISSION_NAVI_MAIN_QUEST = v26->static_fields->MISSION_NAVI_MAIN_QUEST;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, warInfo);
      v28 = LocalizationManager__Get(MISSION_NAVI_MAIN_QUEST, 0LL);
LABEL_28:
      v22 = (Il2CppObject *)v28;
      challengeNaviName = v28;
      goto LABEL_29;
    }
    if ( warInfo )
    {
      Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
      if ( !Mine )
      {
        v31 = 0LL;
        goto LABEL_23;
      }
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)WarEntity__GetPrioredLongName(Mine, 0LL);
      if ( missionNaviTransitionEntity )
      {
        v31 = (Il2CppObject *)System_String__Replace_62420848(
                                (System_String_o *)missionNaviTransitionEntity,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                (System_String_o *)StringLiteral_116/*" "*/,
                                0LL);
LABEL_23:
        v32 = MissionNaviTransitionConfirmDialog_TypeInfo;
        if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, v30);
          v32 = MissionNaviTransitionConfirmDialog_TypeInfo;
        }
        MISSION_NAVI_NAME_COMMON = v32->static_fields->MISSION_NAVI_NAME_COMMON;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
        v34 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0LL);
        v28 = System_String__Format(v34, v31, 0LL);
        goto LABEL_28;
      }
    }
LABEL_31:
    sub_1BCAA3C(missionNaviTransitionEntity, warInfo);
  }
  closedMessageId = v6->fields.closedMessageId;
  v20 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo, warInfo);
    v20 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v20->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, warInfo);
  v22 = (Il2CppObject *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0LL);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v23);
LABEL_30:
  v37 = 0LL;
  v38 = 0LL;
  v40.fields.Item1 = (Il2CppObject *)&v37;
  v40.fields.Item2 = v22;
  System_ValueTuple_object__object____ctor(
    v40,
    ClosedMessageText,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v25);
  v35 = v37;
  v36 = v38;
  result.fields.Item2 = v36;
  result.fields.Item1 = v35;
  return result;
}


void __fastcall MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0

  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  if ( !limitedMissionItemDraw )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4B19C8E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MissionNaviTransitionConfirmDialog_OnClickClose__, method, v2);
    byte_4B19C8E = 1;
  }
  if ( this->fields.state == 2 )
  {
    MissionNaviTransitionConfirmDialog__DeleteCallback(this, method);
    this->fields.state = 3;
    v4 = Method_MissionNaviTransitionConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1BCAA3C(v6, v7);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  UILabel_o *titleLabel; // x25
  System_String_o *limitedMissionItemDraw; // x0
  __int64 v54; // x1
  UILabel_o *choiceMessageLabel; // x25
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  Il2CppClass *v62; // x8
  __int64 methodPtr_low; // x9
  MissionListViewItem_o *v64; // x10
  MissionListViewItem_o *v65; // x1
  struct MasterMissionListViewItem_o **p_missionListViewItem; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppClass *v73; // x8
  __int64 v74; // x9
  MissionListViewManager_o *v75; // x10
  MissionListViewManager_o *v76; // x1
  struct MasterMissionListViewManager_o **p_missionListViewManager; // x24
  UnityEngine_Object_o *v78; // x22
  float messageHeight; // s8
  float messageTopOffset; // s9
  UnityEngine_GameObject_o *v81; // x23
  UnityEngine_Transform_o *v82; // x22
  float v83; // s8
  __int64 v84; // x2
  UnityEngine_Transform_o *v85; // x24
  __int64 v86; // x2
  UnityEngine_Transform_o *v87; // x24
  float v88; // s10
  float messageBottomOffset; // s11
  float boardHeight; // s9
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Collections_Generic_List_object__o *v94; // x25
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o **p_boardItemDrawList; // x24
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  float v102; // s9
  float v103; // s8
  __int64 v104; // x1
  UnityEngine_GameObject_o *challengeGrid; // x0
  Il2CppObject *current; // x26
  Il2CppObject *missionNaviTransitionBoardItemDrawPrefab; // x21
  __int64 v108; // x1
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v110; // x0
  __int64 v111; // x1
  UnityEngine_GameObject_o *v112; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v114; // x1
  Il2CppObject *v115; // x21
  UnityEngine_Transform_o *v116; // x0
  __int64 v117; // x1
  float v118; // s8
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x2
  UnityEngine_Transform_o *v122; // x26
  __int64 v123; // x0
  __int64 v124; // x1
  __int64 v125; // x2
  UnityEngine_Transform_o *v126; // x25
  __int64 v127; // x1
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  System_Collections_Generic_List_object__o *v134; // x0
  struct System_Object_array *items; // x8
  _QWORD *v136; // x9
  __int64 size; // x10
  Il2CppClass **v138; // x8
  UILabel_o *closeBtnLabel; // x21
  UILabel_o *warningMessageLabel; // x21
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  System_Action_o *v144; // x20
  System_Collections_Generic_List_Enumerator_object__o v145; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v146; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19C8D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, missionItem, listViewManager);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__get_Current__,
      v19,
      v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v33, v34);
    sub_1BCA7E0(&MasterMissionListViewManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_MissionNaviTransitionConfirmDialog_EndOpen__, v37, v38);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v39, v40);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_8782/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_8784/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_8788/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_8787/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, v49, v50);
    byte_4B19C8D = 1;
  }
  memset(&v146, 0, sizeof(v146));
  this->fields.closeFunc = closeDelegate;
  this->fields.isSetUpMissionListView = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeDelegate,
    (int64_t)listViewManager,
    missionBoardType,
    (System_String_o *)boardItemList,
    (BattleSetupInfo_o *)closeDelegate,
    (FollowerInfo_o *)openCallback,
    (PartyListViewItem_o *)method);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8787/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, limitedMissionItemDraw, 0LL);
  choiceMessageLabel = this->fields.choiceMessageLabel;
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8782/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, 0LL);
  if ( !choiceMessageLabel )
    goto LABEL_96;
  UILabel__set_text(choiceMessageLabel, limitedMissionItemDraw, 0LL);
  if ( missionBoardType == 1 )
  {
    if ( missionItem )
    {
      v62 = (Il2CppClass *)MasterMissionListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MasterMissionListViewItem_c *)missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
          v64 = missionItem;
        else
          v64 = 0LL;
      }
      else
      {
        v64 = 0LL;
      }
      this->fields.missionListViewItem = (struct MasterMissionListViewItem_o *)v64;
      p_missionListViewItem = &this->fields.missionListViewItem;
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == v62 )
          v65 = missionItem;
        else
          v65 = 0LL;
      }
      else
      {
        v65 = 0LL;
      }
    }
    else
    {
      v65 = 0LL;
      this->fields.missionListViewItem = 0LL;
      p_missionListViewItem = &this->fields.missionListViewItem;
    }
    sub_1BCA784((PartyOrganizationUtility_o *)p_missionListViewItem, (int64_t)v65, v56, v57, v58, v59, v60, v61);
    if ( listViewManager )
    {
      v73 = (Il2CppClass *)MasterMissionListViewManager_TypeInfo;
      v74 = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v74 )
      {
        if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v74 - 1] == MasterMissionListViewManager_TypeInfo )
          v75 = listViewManager;
        else
          v75 = 0LL;
      }
      else
      {
        v75 = 0LL;
      }
      this->fields.missionListViewManager = (struct MasterMissionListViewManager_o *)v75;
      p_missionListViewManager = &this->fields.missionListViewManager;
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v74 )
      {
        if ( listViewManager->klass->_2.typeHierarchy[v74 - 1] == v73 )
          v76 = listViewManager;
        else
          v76 = 0LL;
      }
      else
      {
        v76 = 0LL;
      }
    }
    else
    {
      v76 = 0LL;
      this->fields.missionListViewManager = 0LL;
      p_missionListViewManager = &this->fields.missionListViewManager;
    }
    sub_1BCA784((PartyOrganizationUtility_o *)p_missionListViewManager, (int64_t)v76, v67, v68, v69, v70, v71, v72);
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
    MissionListViewItemDraw__SetChallengeButtonActive((MissionListViewItemDraw_o *)limitedMissionItemDraw, 0, 0LL);
    if ( missionItem )
    {
      v78 = (UnityEngine_Object_o *)*p_missionListViewManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
      if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
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
  v81 = (UnityEngine_GameObject_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !this->fields.challengeGrid )
    goto LABEL_96;
  v82 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.challengeGrid, 0LL);
  if ( !v82 )
    goto LABEL_96;
  UnityEngine_Transform__set_parent(v82, (UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v81, 0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v83 = 0.0 - (float)((float)(messageHeight * 0.5) + messageTopOffset);
  v147.fields.x = 0.0;
  v147.fields.z = 0.0;
  v147.fields.y = v83;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)limitedMissionItemDraw, v147, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v81, 0LL);
  v85 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4B109C7 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v54, v84);
    byte_4B109C7 = 1;
  }
  if ( !v85 )
    goto LABEL_96;
  UnityEngine_Transform__set_localRotation(v85, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v81, 0LL);
  v87 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4B109C6 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v54, v86);
    byte_4B109C6 = 1;
  }
  if ( !v87 )
    goto LABEL_96;
  UnityEngine_Transform__set_localScale(v87, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  messageBottomOffset = this->fields.messageBottomOffset;
  v88 = this->fields.messageHeight;
  boardHeight = this->fields.boardHeight;
  v94 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo,
                                                       v91,
                                                       v92,
                                                       v93);
  System_Collections_Generic_List_object____ctor(
    v94,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
  this->fields.boardItemDrawList = (struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *)v94;
  p_boardItemDrawList = &this->fields.boardItemDrawList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.boardItemDrawList,
    (int64_t)v94,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  if ( !boardItemList )
    goto LABEL_96;
  v102 = boardHeight * 0.5;
  v103 = v83 - (float)((float)(v88 * 0.5) + messageBottomOffset);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v145,
    (System_Collections_Generic_List_object__o *)boardItemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
  v146 = v145;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v146,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__) )
  {
    challengeGrid = this->fields.challengeGrid;
    if ( !challengeGrid )
      sub_1BCAA3C(0LL, v104);
    current = v146.fields._current;
    missionNaviTransitionBoardItemDrawPrefab = (Il2CppObject *)this->fields.missionNaviTransitionBoardItemDrawPrefab;
    transform = UnityEngine_GameObject__get_transform(challengeGrid, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v108);
    v110 = UnityEngine_Object__Instantiate_object__49903816(
             missionNaviTransitionBoardItemDrawPrefab,
             transform,
             (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    v112 = (UnityEngine_GameObject_o *)v110;
    if ( !v110 )
      sub_1BCAA3C(0LL, v111);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v110,
                                   (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    v115 = ComponentInChildren_object;
    if ( !ComponentInChildren_object )
      sub_1BCAA3C(0LL, v114);
    ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
      ComponentInChildren_object,
      current,
      0LL,
      ComponentInChildren_object->klass->vtable[5].methodPtr);
    v116 = UnityEngine_GameObject__get_transform(v112, 0LL);
    if ( !v116 )
      sub_1BCAA3C(0LL, v117);
    v118 = v103 - v102;
    v148.fields.x = 0.0;
    v148.fields.z = 0.0;
    v148.fields.y = v118;
    UnityEngine_Transform__set_localPosition(v116, v148, 0LL);
    v119 = (__int64)UnityEngine_GameObject__get_transform(v112, 0LL);
    v122 = (UnityEngine_Transform_o *)v119;
    if ( !byte_4B109C7 )
    {
      v119 = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v120, v121);
      byte_4B109C7 = 1;
    }
    if ( !v122 )
      sub_1BCAA3C(v119, v120);
    UnityEngine_Transform__set_localRotation(
      v122,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v123 = (__int64)UnityEngine_GameObject__get_transform(v112, 0LL);
    v126 = (UnityEngine_Transform_o *)v123;
    if ( !byte_4B109C6 )
    {
      v123 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v124, v125);
      byte_4B109C6 = 1;
    }
    if ( !v126 )
      sub_1BCAA3C(v123, v124);
    UnityEngine_Transform__set_localScale(v126, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v134 = (System_Collections_Generic_List_object__o *)*p_boardItemDrawList;
    if ( !*p_boardItemDrawList )
      sub_1BCAA3C(0LL, v127);
    items = v134->fields._items;
    v136 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__;
    ++v134->fields._version;
    if ( !items )
      sub_1BCAA3C(v134, v127);
    size = v134->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v134,
        v115,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
    }
    else
    {
      v138 = &items->obj.klass + size;
      v134->fields._size = size + 1;
      v138[4] = (Il2CppClass *)v115;
      sub_1BCA784((PartyOrganizationUtility_o *)(v138 + 4), (int64_t)v115, v128, v129, v130, v131, v132, v133);
    }
    v103 = v118 - v102;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v146,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8784/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel
    || (UILabel__set_text(closeBtnLabel, limitedMissionItemDraw, 0LL),
        warningMessageLabel = this->fields.warningMessageLabel,
        limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8788/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, 0LL),
        !warningMessageLabel) )
  {
LABEL_96:
    sub_1BCAA3C(limitedMissionItemDraw, v54);
  }
  UILabel__set_text(warningMessageLabel, limitedMissionItemDraw, 0LL);
  ActionExtensions__Call(openCallback, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v144 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v141, v142, v143);
  System_Action___ctor(v144, (Il2CppObject *)this, Method_MissionNaviTransitionConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v144, 0, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__RedispResTime(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x19
  struct MasterMissionListViewItem_o *missionListViewItem; // x20
  int64_t Time; // x0
  __int64 v7; // x1

  if ( (byte_4B19C95 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B19C95 = 1;
  }
  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  missionListViewItem = this->fields.missionListViewItem;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  if ( !limitedMissionItemDraw )
    sub_1BCAA3C(Time, v7);
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
    sub_1BCAA3C(this, method);
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
      sub_1BCAA3C(0LL, v3);
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
  __int64 v2; // x2

  if ( (byte_4B19C8F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15817/*"Window/Objects/CancelButton"*/, method, v2);
    byte_4B19C8F = 1;
  }
  return (System_String_o *)StringLiteral_15817/*"Window/Objects/CancelButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate___ctor(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A11620;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A115E0;
}


System_IAsyncResult_o *__fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__BeginInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__EndInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__Invoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}